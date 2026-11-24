// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.BaseVisualBehaviour

// ============================================================
// RVA: 0x1537640 | Atlas.Gameplay.Kart.BaseVisualBehaviour.get_Animator
// ============================================================

undefined8 Atlas_Gameplay_Kart_BaseVisualBehaviour__get_Animator(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1537648 | Atlas.Gameplay.Kart.BaseVisualBehaviour.Init
// ============================================================

void Atlas_Gameplay_Kart_BaseVisualBehaviour__Init(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb4eda & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4eda = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 != 0) {
      if (pcRam0000000003ebe348 == (code *)0x0) {
        pcRam0000000003ebe348 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.Animator::set_cullingMode(UnityEngine.AnimatorCullingMode)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x032118d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003ebe348)(lVar2,1);
      return;
    }
    func_0x00f78af4();
    return;
  }
  return;
}



// ============================================================
// RVA: 0x15376e8 | Atlas.Gameplay.Kart.BaseVisualBehaviour.DeInit
// ============================================================

void Atlas_Gameplay_Kart_BaseVisualBehaviour__DeInit(void)

{
  return;
}



// ============================================================
// RVA: 0x15376ec | Atlas.Gameplay.Kart.BaseVisualBehaviour.SetSpeed
// ============================================================

/* WARNING: Possible PIC construction at 0x015380e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01538120: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015380e8) */
/* WARNING: Removing unreachable block (ram,0x015380f0) */
/* WARNING: Removing unreachable block (ram,0x01538110) */

ulong Atlas_Gameplay_Kart_BaseVisualBehaviour__SetSpeed(uint param_1,uint param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined8 extraout_x1;
  long unaff_x19;
  long lVar8;
  long lVar9;
  undefined8 unaff_x20;
  long lVar10;
  int iVar11;
  long unaff_x21;
  undefined8 uVar12;
  undefined8 unaff_x22;
  undefined8 uVar13;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 ******unaff_x29;
  undefined8 ******ppppppuVar14;
  undefined *unaff_x30;
  undefined *puVar15;
  undefined4 extraout_s0;
  ulong extraout_d0;
  ulong extraout_d0_00;
  ulong extraout_d0_01;
  ulong extraout_d0_02;
  ulong extraout_d0_03;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  long lStack_248;
  undefined8 *****pppppuStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  long lStack_218;
  undefined8 *****pppppuStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 *****pppppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 *****pppppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 *****pppppuStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 *****pppppuStack_140;
  undefined *puStack_138;
  undefined8 *****pppppuStack_110;
  undefined *puStack_108;
  undefined8 *****pppppuStack_d0;
  undefined *puStack_c8;
  undefined8 *****pppppuStack_90;
  undefined *puStack_88;
  undefined8 *****pppppuStack_50;
  undefined *puStack_48;
  
  uVar6 = (ulong)param_1;
  if ((bRam0000000003eb4edb & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4edb = 1;
  }
  lVar8 = *(long *)(param_3 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 4);
    goto code_r0x0320d09c;
  }
  lVar8 = func_0x00f78af4();
  puStack_48 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetSteer;
  param_1 = (uint)extraout_d0;
  pppppuStack_50 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4edc & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4edc = 1;
  }
  lVar8 = *(long *)(lVar8 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 8);
    unaff_x20 = 0x3d20028;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x19 = 0;
    unaff_x21 = 0x3eb4000;
    unaff_x29 = (undefined8 ******)pppppuStack_50;
    unaff_x30 = puStack_48;
    unaff_d8 = uVar6;
    goto code_r0x0320d09c;
  }
  lVar8 = func_0x00f78af4();
  puStack_88 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetSteerIntensity;
  param_1 = (uint)extraout_d0_00;
  pppppuStack_90 = &pppppuStack_50;
  if ((bRam0000000003eb4edd & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4edd = 1;
  }
  lVar8 = *(long *)(lVar8 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0xc);
    unaff_x20 = 0x3d20028;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff80;
    unaff_x19 = 0;
    unaff_x21 = 0x3eb4000;
    unaff_x29 = (undefined8 ******)pppppuStack_90;
    unaff_x30 = puStack_88;
    unaff_d8 = extraout_d0 & 0xffffffff;
    goto code_r0x0320d09c;
  }
  lVar8 = func_0x00f78af4();
  puStack_c8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetDrift;
  param_1 = (uint)extraout_d0_01;
  unaff_d8 = extraout_d0_01 & 0xffffffff;
  pppppuStack_d0 = &pppppuStack_90;
  if ((bRam0000000003eb4ede & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ede = 1;
  }
  lVar8 = *(long *)(lVar8 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x10);
    unaff_x20 = 0x3d20028;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff40;
    unaff_x19 = 0;
    unaff_x21 = 0x3eb4000;
    unaff_x29 = (undefined8 ******)pppppuStack_d0;
    unaff_x30 = puStack_c8;
    unaff_d8 = extraout_d0_00 & 0xffffffff;
    goto code_r0x0320d09c;
  }
  auVar16 = func_0x00f78af4();
  lVar8 = auVar16._8_8_;
  puStack_108 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetBoosting;
  pppppuStack_110 = &pppppuStack_d0;
  if ((bRam0000000003eb4edf & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4edf = 1;
  }
  lVar10 = *(long *)(auVar16._0_8_ + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar10 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x20);
    puVar3 = &stack0xffffffffffffff00;
    unaff_x19 = lVar8;
    lVar8 = 0;
    lVar9 = 0x3d20028;
    uVar13 = 0x3eb4000;
    ppppppuVar14 = (undefined8 ******)pppppuStack_110;
    puVar15 = puStack_108;
UnityEngine_Animator__SetBool:
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x28) = uVar13;
    *(long *)(puVar3 + -0x20) = lVar9;
    *(long *)(puVar3 + -0x18) = lVar8;
    *(undefined8 *******)(puVar3 + -0x10) = ppppppuVar14;
    *(undefined **)(puVar3 + -8) = puVar15;
    if (pcRam0000000003ebe420 == (code *)0x0) {
      pcRam0000000003ebe420 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*pcRam0000000003ebe420)(lVar10,uVar7,unaff_x19);
    return uVar6;
  }
  auVar16 = func_0x00f78af4();
  unaff_x19 = auVar16._8_8_;
  uStack_160 = 0x3eb4000;
  uStack_158 = 0x3d20028;
  puStack_138 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetInAir;
  lStack_150 = lVar10;
  lStack_148 = lVar8;
  pppppuStack_140 = &pppppuStack_110;
  if ((bRam0000000003eb4ee0 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee0 = 1;
  }
  lVar10 = *(long *)(auVar16._0_8_ + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar10 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x18);
    puVar3 = &stack0xfffffffffffffed0;
    lVar8 = lStack_148;
    lVar9 = lStack_150;
    uVar13 = uStack_158;
    unaff_x22 = uStack_160;
    ppppppuVar14 = (undefined8 ******)pppppuStack_140;
    puVar15 = puStack_138;
    goto UnityEngine_Animator__SetBool;
  }
  lVar8 = func_0x00f78af4();
  puStack_168 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetLandForce;
  param_1 = (uint)extraout_d0_02;
  pppppuStack_170 = &pppppuStack_140;
  if ((bRam0000000003eb4ee1 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee1 = 1;
  }
  lVar8 = *(long *)(lVar8 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x80);
    unaff_x22 = 0x3eb4000;
    register0x00000008 = (BADSPACEBASE *)&uStack_160;
    unaff_x20 = 0;
    unaff_x21 = 0x3d20028;
    unaff_x29 = (undefined8 ******)pppppuStack_170;
    unaff_x30 = puStack_168;
    goto code_r0x0320d09c;
  }
  auVar16 = func_0x00f78af4();
  unaff_x19 = auVar16._8_8_;
  uStack_1d0 = 0x3eb4000;
  uStack_1c8 = 0x3eb4000;
  lStack_1c0 = 0x3d20028;
  puStack_1a8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetGliding;
  uVar13 = 0x3eb4000;
  lStack_1b8 = lVar8;
  pppppuStack_1b0 = &pppppuStack_170;
  if ((bRam0000000003eb4ee2 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee2 = 1;
  }
  lVar10 = *(long *)(auVar16._0_8_ + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar10 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x1c);
    puVar3 = &stack0xfffffffffffffe60;
    lVar8 = lStack_1b8;
    lVar9 = lStack_1c0;
    uVar13 = uStack_1c8;
    unaff_x22 = uStack_1d0;
    ppppppuVar14 = (undefined8 ******)pppppuStack_1b0;
    puVar15 = puStack_1a8;
    goto UnityEngine_Animator__SetBool;
  }
  lVar8 = func_0x00f78af4();
  uStack_200 = 0x3eb4000;
  uStack_1f8 = 0x3d20028;
  puStack_1d8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerHop;
  lStack_1f0 = lVar10;
  lStack_1e8 = unaff_x19;
  pppppuStack_1e0 = &pppppuStack_1b0;
  if ((bRam0000000003eb4ee3 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee3 = 1;
  }
  lVar8 = *(long *)(lVar8 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x14);
    puVar2 = &uStack_1d0;
    lVar9 = lStack_1e8;
    lVar10 = lStack_1f0;
    uVar12 = uStack_1f8;
    uVar13 = uStack_200;
    ppppppuVar14 = (undefined8 ******)pppppuStack_1e0;
    puVar15 = puStack_1d8;
    goto code_r0x0320d82c;
  }
  lVar10 = func_0x00f78af4();
  puVar1 = &uStack_230;
  uStack_230 = 0x3eb4000;
  uStack_228 = 0x3eb4000;
  lStack_220 = 0x3d20028;
  puStack_208 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerHopBoost;
  ppppppuVar14 = &pppppuStack_210;
  lStack_218 = lVar8;
  pppppuStack_210 = &pppppuStack_1e0;
  if ((bRam0000000003eb4ee4 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee4 = 1;
  }
  lVar8 = *(long *)(lVar10 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x6c);
    puVar2 = &uStack_200;
    lVar9 = lStack_218;
    lVar10 = lStack_220;
    uVar12 = uStack_228;
    uVar13 = uStack_230;
    ppppppuVar14 = (undefined8 ******)pppppuStack_210;
    puVar15 = puStack_208;
    goto code_r0x0320d82c;
  }
  puVar15 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHit;
  auVar17 = func_0x00f78af4();
  lVar10 = auVar17._0_8_;
  if (auVar17._8_4_ != 0) {
    puVar1 = &uStack_260;
    uStack_260 = 0x3eb4000;
    uStack_258 = 0x3eb4000;
    lStack_250 = 0x3d20028;
    puStack_238 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHit;
    lStack_248 = lVar8;
    pppppuStack_240 = ppppppuVar14;
    if ((bRam0000000003eb4ee6 & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4ee6 = 1;
    }
    lVar8 = *(long *)(lVar10 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar8 != 0) {
      uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x44);
      puVar2 = &uStack_230;
      lVar9 = lStack_248;
      lVar10 = lStack_250;
      uVar12 = uStack_258;
      uVar13 = uStack_260;
      ppppppuVar14 = (undefined8 ******)pppppuStack_240;
      puVar15 = puStack_238;
      goto code_r0x0320d82c;
    }
    puVar15 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHitSmall;
    lVar10 = func_0x00f78af4();
    ppppppuVar14 = &pppppuStack_240;
  }
  *(undefined8 *)((long)puVar1 + -0x30) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x28) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x20) = 0x3d20028;
  *(undefined8 *)((long)puVar1 + -0x18) = 0;
  *(undefined8 *******)((long)puVar1 + -0x10) = ppppppuVar14;
  *(undefined **)((long)puVar1 + -8) = puVar15;
  if ((bRam0000000003eb4ee5 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee5 = 1;
  }
  lVar8 = *(long *)(lVar10 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x40);
    ppppppuVar14 = *(undefined8 *******)((long)puVar1 + -0x10);
    puVar15 = *(undefined **)((long)puVar1 + -8);
    lVar10 = *(long *)((long)puVar1 + -0x20);
    lVar9 = *(long *)((long)puVar1 + -0x18);
    uVar13 = *(undefined8 *)((long)puVar1 + -0x30);
    uVar12 = *(undefined8 *)((long)puVar1 + -0x28);
    puVar2 = puVar1;
    goto code_r0x0320d82c;
  }
  lVar8 = func_0x00f78af4();
  *(undefined8 *)((long)puVar1 + -0x60) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x58) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x50) = 0x3d20028;
  *(undefined8 *)((long)puVar1 + -0x48) = 0;
  *(undefined1 **)((long)puVar1 + -0x40) = (undefined1 *)((long)puVar1 + -0x10);
  *(undefined **)((long)puVar1 + -0x38) = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIncoming;
  if ((bRam0000000003eb4ee7 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee7 = 1;
  }
  lVar8 = *(long *)(lVar8 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x48);
    ppppppuVar14 = *(undefined8 *******)((long)puVar1 + -0x40);
    puVar15 = *(undefined **)((long)puVar1 + -0x38);
    lVar10 = *(long *)((long)puVar1 + -0x50);
    lVar9 = *(long *)((long)puVar1 + -0x48);
    puVar2 = (undefined8 *)((long)puVar1 + -0x30);
    uVar13 = *(undefined8 *)((long)puVar1 + -0x60);
    uVar12 = *(undefined8 *)((long)puVar1 + -0x58);
    goto code_r0x0320d82c;
  }
  auVar17 = func_0x00f78af4();
  uVar5 = auVar17._0_8_;
  *(undefined8 *)((long)puVar1 + -0x90) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x88) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x80) = 0x3d20028;
  *(undefined8 *)((long)puVar1 + -0x78) = 0;
  *(undefined1 **)((long)puVar1 + -0x70) = (undefined1 *)((long)puVar1 + -0x40);
  *(undefined **)((long)puVar1 + -0x68) = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerSideSneer
  ;
  uVar6 = uVar5;
  if ((bRam0000000003eb4ee8 & 1) == 0) {
    uVar6 = func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee8 = 1;
  }
  if (auVar17._8_4_ == 1) {
    lVar8 = *(long *)(uVar5 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar8 == 0) goto code_r0x01537eec;
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x50);
  }
  else {
    if (auVar17._8_4_ != 0) {
      return uVar6;
    }
    lVar8 = *(long *)(uVar5 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar8 == 0) {
code_r0x01537eec:
      lVar8 = func_0x00f78af4();
      *(undefined8 *)((long)puVar1 + -0xc0) = 0x3eb4000;
      *(undefined8 *)((long)puVar1 + -0xb8) = 0x3eb4000;
      *(undefined8 *)((long)puVar1 + -0xb0) = 0x3d20028;
      *(undefined8 *)((long)puVar1 + -0xa8) = 0;
      *(undefined1 **)((long)puVar1 + -0xa0) = (undefined1 *)((long)puVar1 + -0x70);
      *(undefined **)((long)puVar1 + -0x98) =
           &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaken;
      if ((bRam0000000003eb4ee9 & 1) == 0) {
        func_0x00f78a20(0x3d20028);
        bRam0000000003eb4ee9 = 1;
      }
      lVar8 = *(long *)(lVar8 + 0x18);
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar8 == 0) {
        lVar8 = func_0x00f78af4();
        *(undefined8 *)((long)puVar1 + -0xf0) = 0x3eb4000;
        *(undefined8 *)((long)puVar1 + -0xe8) = 0x3eb4000;
        *(undefined8 *)((long)puVar1 + -0xe0) = 0x3d20028;
        *(undefined8 *)((long)puVar1 + -0xd8) = 0;
        *(undefined1 **)((long)puVar1 + -0xd0) = (undefined1 *)((long)puVar1 + -0xa0);
        *(undefined **)((long)puVar1 + -200) =
             &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaking;
        uVar12 = 0x3eb4000;
        if ((bRam0000000003eb4eea & 1) == 0) {
          func_0x00f78a20(0x3d20028);
          bRam0000000003eb4eea = 1;
        }
        lVar8 = *(long *)(lVar8 + 0x18);
        if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar8 == 0) {
          unaff_x19 = func_0x00f78af4();
          register0x00000008 = (BADSPACEBASE *)((long)puVar1 + -0x1a0);
          puVar2 = (undefined8 *)((long)puVar1 + -0x1a0);
          *(ulong *)((long)puVar1 + -0x140) = unaff_d9;
          *(ulong *)((long)puVar1 + -0x138) = extraout_d0_02 & 0xffffffff;
          *(undefined8 *)((long)puVar1 + -0x130) = unaff_x24;
          *(undefined8 *)((long)puVar1 + -0x128) = unaff_x23;
          *(undefined8 *)((long)puVar1 + -0x120) = 0x3eb4000;
          *(undefined8 *)((long)puVar1 + -0x118) = 0x3eb4000;
          *(undefined8 *)((long)puVar1 + -0x110) = 0x3d20028;
          *(undefined8 *)((long)puVar1 + -0x108) = 0;
          *(undefined1 **)((long)puVar1 + -0x100) = (undefined1 *)((long)puVar1 + -0xd0);
          *(undefined **)((long)puVar1 + -0xf8) =
               &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerImpact;
          unaff_x29 = (undefined8 ******)((long)puVar1 + -0x100);
          unaff_d8 = (ulong)param_2;
          param_1 = (uint)extraout_d0_03;
          unaff_d9 = extraout_d0_03 & 0xffffffff;
          unaff_x20 = 0x3eb4000;
          if ((bRam0000000003eb4eeb & 1) == 0) {
            func_0x00f78a20(0x3d20028);
            bRam0000000003eb4eeb = 1;
          }
          if (*(long *)(unaff_x19 + 0x18) != 0) {
            uVar13 = 0x3d20028;
            unaff_x22 = 0x3d20028;
            /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50((undefined1 *)((long)puVar1 + -0x198),*(long *)(unaff_x19 + 0x18),2,0);
            *(undefined8 *)((long)puVar1 + -0x168) = *(undefined8 *)((long)puVar1 + -400);
            *(undefined8 *)((long)puVar1 + -0x170) = *(undefined8 *)((long)puVar1 + -0x198);
            *(undefined8 *)((long)puVar1 + -0x158) = *(undefined8 *)((long)puVar1 + -0x180);
            *(undefined8 *)((long)puVar1 + -0x160) = *(undefined8 *)((long)puVar1 + -0x188);
            *(undefined4 *)((long)puVar1 + -0x150) = *(undefined4 *)((long)puVar1 + -0x178);
            unaff_x20 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4((undefined1 *)((long)puVar1 + -0x170),0);
            if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if ((int)unaff_x20 == **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8)) {
              return (ulong)((int)unaff_x20 != **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8));
            }
            lVar8 = *(long *)(unaff_x19 + 0x18);
            if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar12 = 0;
            if (lVar8 != 0) {
              uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x60);
              unaff_x30 = &UNK_015380e8;
              unaff_x21 = lVar8;
code_r0x0320d09c:
              *(ulong *)((long)register0x00000008 + -0x40) = unaff_d9;
              *(ulong *)((long)register0x00000008 + -0x38) = unaff_d8;
              *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
              *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
              *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
              *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
              *(undefined8 *******)((long)register0x00000008 + -0x10) = unaff_x29;
              *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
              if (pcRam0000000003ebe400 == (code *)0x0) {
                pcRam0000000003ebe400 =
                     (code *)func_0x00f789d4(
                                            "UnityEngine.Animator::SetFloatID(System.Int32,System.Single)"
                                            );
              }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar6 = (*pcRam0000000003ebe400)(param_1,lVar8,uVar7);
              return uVar6;
            }
          }
          lVar8 = func_0x00f78af4();
          *(undefined8 *)((long)puVar1 + -0x1d0) = uVar13;
          *(undefined8 *)((long)puVar1 + -0x1c8) = uVar12;
          *(undefined8 *)((long)puVar1 + -0x1c0) = unaff_x20;
          *(long *)((long)puVar1 + -0x1b8) = unaff_x19;
          *(undefined8 *******)((long)puVar1 + -0x1b0) = unaff_x29;
          *(undefined **)((long)puVar1 + -0x1a8) =
               &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerCelebrateSmall;
          if ((bRam0000000003eb4eec & 1) == 0) {
            func_0x00f78a20(0x3d20028);
            bRam0000000003eb4eec = 1;
          }
          lVar8 = *(long *)(lVar8 + 0x18);
          if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (lVar8 == 0) {
            lVar8 = func_0x00f78af4();
            *(ulong *)((long)puVar1 + -0x210) = unaff_d9;
            *(ulong *)((long)puVar1 + -0x208) = unaff_d8;
            *(undefined8 *)((long)puVar1 + -0x200) = uVar13;
            *(undefined8 *)((long)puVar1 + -0x1f8) = 0x3eb4000;
            *(undefined8 *)((long)puVar1 + -0x1f0) = 0x3d20028;
            *(undefined8 *)((long)puVar1 + -0x1e8) = 0;
            *(undefined1 **)((long)puVar1 + -0x1e0) = (undefined1 *)((long)puVar1 + -0x1b0);
            *(undefined **)((long)puVar1 + -0x1d8) =
                 &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayAnimatorStateOverride;
            *(undefined4 *)((long)puVar1 + -0x220) = 0;
            *(undefined8 *)((long)puVar1 + -0x238) = 0;
            *(undefined8 *)((long)puVar1 + -0x240) = 0;
            *(undefined8 *)((long)puVar1 + -0x228) = 0;
            *(undefined8 *)((long)puVar1 + -0x230) = 0;
            lVar10 = *(long *)(lVar8 + 0x18);
            if (lVar10 != 0) {
              iVar11 = 0;
              do {
                iVar4 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar10,0);
                lVar10 = *(long *)(lVar8 + 0x18);
                if (iVar4 <= iVar11) {
                  if (lVar10 != 0) {
                    iVar11 = 0;
                    goto code_r0x01538278;
                  }
                  break;
                }
                if (lVar10 == 0) break;
                /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50((undefined1 *)((long)puVar1 + -0x268),lVar10,iVar11,0);
                *(undefined8 *)((long)puVar1 + -0x238) = *(undefined8 *)((long)puVar1 + -0x260);
                *(undefined8 *)((long)puVar1 + -0x240) = *(undefined8 *)((long)puVar1 + -0x268);
                *(undefined8 *)((long)puVar1 + -0x228) = *(undefined8 *)((long)puVar1 + -0x250);
                *(undefined8 *)((long)puVar1 + -0x230) = *(undefined8 *)((long)puVar1 + -600);
                *(undefined4 *)((long)puVar1 + -0x220) = *(undefined4 *)((long)puVar1 + -0x248);
                uVar6 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4((undefined1 *)((long)puVar1 + -0x240),0);
                if ((int)uVar6 == (int)extraout_x1) {
                  return uVar6;
                }
                iVar11 = iVar11 + 1;
                lVar10 = *(long *)(lVar8 + 0x18);
              } while (lVar10 != 0);
            }
code_r0x015382cc:
            uVar6 = func_0x00f78af4();
            return uVar6;
          }
          uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x68);
          ppppppuVar14 = *(undefined8 *******)((long)puVar1 + -0x1b0);
          puVar15 = *(undefined **)((long)puVar1 + -0x1a8);
          lVar10 = *(long *)((long)puVar1 + -0x1c0);
          lVar9 = *(long *)((long)puVar1 + -0x1b8);
          uVar13 = *(undefined8 *)((long)puVar1 + -0x1d0);
          uVar12 = *(undefined8 *)((long)puVar1 + -0x1c8);
        }
        else {
          uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x58);
          ppppppuVar14 = *(undefined8 *******)((long)puVar1 + -0xd0);
          puVar15 = *(undefined **)((long)puVar1 + -200);
          lVar10 = *(long *)((long)puVar1 + -0xe0);
          lVar9 = *(long *)((long)puVar1 + -0xd8);
          puVar2 = (undefined8 *)((long)puVar1 + -0xc0);
          uVar13 = *(undefined8 *)((long)puVar1 + -0xf0);
          uVar12 = *(undefined8 *)((long)puVar1 + -0xe8);
        }
      }
      else {
        uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x54);
        ppppppuVar14 = *(undefined8 *******)((long)puVar1 + -0xa0);
        puVar15 = *(undefined **)((long)puVar1 + -0x98);
        lVar10 = *(long *)((long)puVar1 + -0xb0);
        lVar9 = *(long *)((long)puVar1 + -0xa8);
        puVar2 = (undefined8 *)((long)puVar1 + -0x90);
        uVar13 = *(undefined8 *)((long)puVar1 + -0xc0);
        uVar12 = *(undefined8 *)((long)puVar1 + -0xb8);
      }
      goto code_r0x0320d82c;
    }
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x4c);
  }
  ppppppuVar14 = *(undefined8 *******)((long)puVar1 + -0x70);
  puVar15 = *(undefined **)((long)puVar1 + -0x68);
  lVar10 = *(long *)((long)puVar1 + -0x80);
  lVar9 = *(long *)((long)puVar1 + -0x78);
  puVar2 = (undefined8 *)((long)puVar1 + -0x60);
  uVar13 = *(undefined8 *)((long)puVar1 + -0x90);
  uVar12 = *(undefined8 *)((long)puVar1 + -0x88);
code_r0x0320d82c:
  *(undefined8 *)((long)puVar2 + -0x30) = uVar13;
  *(undefined8 *)((long)puVar2 + -0x28) = uVar12;
  *(long *)((long)puVar2 + -0x20) = lVar10;
  *(long *)((long)puVar2 + -0x18) = lVar9;
  *(undefined8 *******)((long)puVar2 + -0x10) = ppppppuVar14;
  *(undefined **)((long)puVar2 + -8) = puVar15;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*pcRam0000000003ebe460)(lVar8,uVar7);
  return uVar6;
  while( true ) {
    iVar11 = iVar11 + 1;
    lVar10 = *(long *)(lVar8 + 0x18);
    if (lVar10 == 0) break;
code_r0x01538278:
    uVar6 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar10,0);
    if ((int)uVar6 <= iVar11) {
      return uVar6;
    }
    if (*(long *)(lVar8 + 0x18) == 0) break;
    iVar4 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(*(long *)(lVar8 + 0x18),iVar11,extraout_x1,0);
    if (iVar4 != 0) {
      if (*(long *)(lVar8 + 0x18) == 0) break;
      /*UnityEngine.Animator$$Play*/ func_0x03210958(extraout_s0,*(long *)(lVar8 + 0x18),extraout_x1,iVar11,0);
    }
  }
  goto code_r0x015382cc;
}



// ============================================================
// RVA: 0x1537780 | Atlas.Gameplay.Kart.BaseVisualBehaviour.SetSteer
// ============================================================

/* WARNING: Possible PIC construction at 0x015380e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01538120: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015380e8) */
/* WARNING: Removing unreachable block (ram,0x015380f0) */
/* WARNING: Removing unreachable block (ram,0x01538110) */

ulong Atlas_Gameplay_Kart_BaseVisualBehaviour__SetSteer(uint param_1,uint param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined8 extraout_x1;
  long unaff_x19;
  long lVar8;
  long lVar9;
  undefined8 unaff_x20;
  long lVar10;
  int iVar11;
  long unaff_x21;
  undefined8 uVar12;
  undefined8 unaff_x22;
  undefined8 uVar13;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 ******unaff_x29;
  undefined8 ******ppppppuVar14;
  undefined *unaff_x30;
  undefined *puVar15;
  undefined4 extraout_s0;
  ulong extraout_d0;
  ulong extraout_d0_00;
  ulong extraout_d0_01;
  ulong extraout_d0_02;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 *****pppppuStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 *****pppppuStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 *****pppppuStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 *****pppppuStack_170;
  undefined *puStack_168;
  undefined8 *****pppppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined8 *****pppppuStack_d0;
  undefined *puStack_c8;
  undefined8 *****pppppuStack_90;
  undefined *puStack_88;
  undefined8 *****pppppuStack_50;
  undefined *puStack_48;
  
  uVar6 = (ulong)param_1;
  if ((bRam0000000003eb4edc & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4edc = 1;
  }
  lVar8 = *(long *)(param_3 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 8);
    goto code_r0x0320d09c;
  }
  lVar8 = func_0x00f78af4();
  puStack_48 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetSteerIntensity;
  param_1 = (uint)extraout_d0;
  pppppuStack_50 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4edd & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4edd = 1;
  }
  lVar8 = *(long *)(lVar8 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0xc);
    unaff_x20 = 0x3d20028;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x19 = 0;
    unaff_x21 = 0x3eb4000;
    unaff_x29 = (undefined8 ******)pppppuStack_50;
    unaff_x30 = puStack_48;
    unaff_d8 = uVar6;
    goto code_r0x0320d09c;
  }
  lVar8 = func_0x00f78af4();
  puStack_88 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetDrift;
  param_1 = (uint)extraout_d0_00;
  unaff_d8 = extraout_d0_00 & 0xffffffff;
  pppppuStack_90 = &pppppuStack_50;
  if ((bRam0000000003eb4ede & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ede = 1;
  }
  lVar8 = *(long *)(lVar8 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x10);
    unaff_x20 = 0x3d20028;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff80;
    unaff_x19 = 0;
    unaff_x21 = 0x3eb4000;
    unaff_x29 = (undefined8 ******)pppppuStack_90;
    unaff_x30 = puStack_88;
    unaff_d8 = extraout_d0 & 0xffffffff;
    goto code_r0x0320d09c;
  }
  auVar16 = func_0x00f78af4();
  lVar8 = auVar16._8_8_;
  puStack_c8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetBoosting;
  pppppuStack_d0 = &pppppuStack_90;
  if ((bRam0000000003eb4edf & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4edf = 1;
  }
  lVar10 = *(long *)(auVar16._0_8_ + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar10 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x20);
    puVar3 = &stack0xffffffffffffff40;
    unaff_x19 = lVar8;
    lVar8 = 0;
    lVar9 = 0x3d20028;
    uVar13 = 0x3eb4000;
    ppppppuVar14 = (undefined8 ******)pppppuStack_d0;
    puVar15 = puStack_c8;
UnityEngine_Animator__SetBool:
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x28) = uVar13;
    *(long *)(puVar3 + -0x20) = lVar9;
    *(long *)(puVar3 + -0x18) = lVar8;
    *(undefined8 *******)(puVar3 + -0x10) = ppppppuVar14;
    *(undefined **)(puVar3 + -8) = puVar15;
    if (pcRam0000000003ebe420 == (code *)0x0) {
      pcRam0000000003ebe420 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*pcRam0000000003ebe420)(lVar10,uVar7,unaff_x19);
    return uVar6;
  }
  auVar16 = func_0x00f78af4();
  unaff_x19 = auVar16._8_8_;
  uStack_120 = 0x3eb4000;
  uStack_118 = 0x3d20028;
  puStack_f8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetInAir;
  lStack_110 = lVar10;
  lStack_108 = lVar8;
  pppppuStack_100 = &pppppuStack_d0;
  if ((bRam0000000003eb4ee0 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee0 = 1;
  }
  lVar10 = *(long *)(auVar16._0_8_ + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar10 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x18);
    puVar3 = &stack0xffffffffffffff10;
    lVar8 = lStack_108;
    lVar9 = lStack_110;
    uVar13 = uStack_118;
    unaff_x22 = uStack_120;
    ppppppuVar14 = (undefined8 ******)pppppuStack_100;
    puVar15 = puStack_f8;
    goto UnityEngine_Animator__SetBool;
  }
  lVar8 = func_0x00f78af4();
  puStack_128 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetLandForce;
  param_1 = (uint)extraout_d0_01;
  pppppuStack_130 = &pppppuStack_100;
  if ((bRam0000000003eb4ee1 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee1 = 1;
  }
  lVar8 = *(long *)(lVar8 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x80);
    unaff_x22 = 0x3eb4000;
    register0x00000008 = (BADSPACEBASE *)&uStack_120;
    unaff_x20 = 0;
    unaff_x21 = 0x3d20028;
    unaff_x29 = (undefined8 ******)pppppuStack_130;
    unaff_x30 = puStack_128;
    goto code_r0x0320d09c;
  }
  auVar16 = func_0x00f78af4();
  unaff_x19 = auVar16._8_8_;
  uStack_190 = 0x3eb4000;
  uStack_188 = 0x3eb4000;
  lStack_180 = 0x3d20028;
  puStack_168 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetGliding;
  uVar13 = 0x3eb4000;
  lStack_178 = lVar8;
  pppppuStack_170 = &pppppuStack_130;
  if ((bRam0000000003eb4ee2 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee2 = 1;
  }
  lVar10 = *(long *)(auVar16._0_8_ + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar10 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x1c);
    puVar3 = &stack0xfffffffffffffea0;
    lVar8 = lStack_178;
    lVar9 = lStack_180;
    uVar13 = uStack_188;
    unaff_x22 = uStack_190;
    ppppppuVar14 = (undefined8 ******)pppppuStack_170;
    puVar15 = puStack_168;
    goto UnityEngine_Animator__SetBool;
  }
  lVar8 = func_0x00f78af4();
  uStack_1c0 = 0x3eb4000;
  uStack_1b8 = 0x3d20028;
  puStack_198 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerHop;
  lStack_1b0 = lVar10;
  lStack_1a8 = unaff_x19;
  pppppuStack_1a0 = &pppppuStack_170;
  if ((bRam0000000003eb4ee3 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee3 = 1;
  }
  lVar8 = *(long *)(lVar8 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x14);
    puVar2 = &uStack_190;
    lVar9 = lStack_1a8;
    lVar10 = lStack_1b0;
    uVar12 = uStack_1b8;
    uVar13 = uStack_1c0;
    ppppppuVar14 = (undefined8 ******)pppppuStack_1a0;
    puVar15 = puStack_198;
    goto code_r0x0320d82c;
  }
  lVar10 = func_0x00f78af4();
  puVar1 = &uStack_1f0;
  uStack_1f0 = 0x3eb4000;
  uStack_1e8 = 0x3eb4000;
  lStack_1e0 = 0x3d20028;
  puStack_1c8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerHopBoost;
  ppppppuVar14 = &pppppuStack_1d0;
  lStack_1d8 = lVar8;
  pppppuStack_1d0 = &pppppuStack_1a0;
  if ((bRam0000000003eb4ee4 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee4 = 1;
  }
  lVar8 = *(long *)(lVar10 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x6c);
    puVar2 = &uStack_1c0;
    lVar9 = lStack_1d8;
    lVar10 = lStack_1e0;
    uVar12 = uStack_1e8;
    uVar13 = uStack_1f0;
    ppppppuVar14 = (undefined8 ******)pppppuStack_1d0;
    puVar15 = puStack_1c8;
    goto code_r0x0320d82c;
  }
  puVar15 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHit;
  auVar17 = func_0x00f78af4();
  lVar10 = auVar17._0_8_;
  if (auVar17._8_4_ != 0) {
    puVar1 = &uStack_220;
    uStack_220 = 0x3eb4000;
    uStack_218 = 0x3eb4000;
    lStack_210 = 0x3d20028;
    puStack_1f8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHit;
    lStack_208 = lVar8;
    pppppuStack_200 = ppppppuVar14;
    if ((bRam0000000003eb4ee6 & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4ee6 = 1;
    }
    lVar8 = *(long *)(lVar10 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar8 != 0) {
      uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x44);
      puVar2 = &uStack_1f0;
      lVar9 = lStack_208;
      lVar10 = lStack_210;
      uVar12 = uStack_218;
      uVar13 = uStack_220;
      ppppppuVar14 = (undefined8 ******)pppppuStack_200;
      puVar15 = puStack_1f8;
      goto code_r0x0320d82c;
    }
    puVar15 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHitSmall;
    lVar10 = func_0x00f78af4();
    ppppppuVar14 = &pppppuStack_200;
  }
  *(undefined8 *)((long)puVar1 + -0x30) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x28) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x20) = 0x3d20028;
  *(undefined8 *)((long)puVar1 + -0x18) = 0;
  *(undefined8 *******)((long)puVar1 + -0x10) = ppppppuVar14;
  *(undefined **)((long)puVar1 + -8) = puVar15;
  if ((bRam0000000003eb4ee5 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee5 = 1;
  }
  lVar8 = *(long *)(lVar10 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x40);
    ppppppuVar14 = *(undefined8 *******)((long)puVar1 + -0x10);
    puVar15 = *(undefined **)((long)puVar1 + -8);
    lVar10 = *(long *)((long)puVar1 + -0x20);
    lVar9 = *(long *)((long)puVar1 + -0x18);
    uVar13 = *(undefined8 *)((long)puVar1 + -0x30);
    uVar12 = *(undefined8 *)((long)puVar1 + -0x28);
    puVar2 = puVar1;
    goto code_r0x0320d82c;
  }
  lVar8 = func_0x00f78af4();
  *(undefined8 *)((long)puVar1 + -0x60) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x58) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x50) = 0x3d20028;
  *(undefined8 *)((long)puVar1 + -0x48) = 0;
  *(undefined1 **)((long)puVar1 + -0x40) = (undefined1 *)((long)puVar1 + -0x10);
  *(undefined **)((long)puVar1 + -0x38) = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIncoming;
  if ((bRam0000000003eb4ee7 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee7 = 1;
  }
  lVar8 = *(long *)(lVar8 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x48);
    ppppppuVar14 = *(undefined8 *******)((long)puVar1 + -0x40);
    puVar15 = *(undefined **)((long)puVar1 + -0x38);
    lVar10 = *(long *)((long)puVar1 + -0x50);
    lVar9 = *(long *)((long)puVar1 + -0x48);
    puVar2 = (undefined8 *)((long)puVar1 + -0x30);
    uVar13 = *(undefined8 *)((long)puVar1 + -0x60);
    uVar12 = *(undefined8 *)((long)puVar1 + -0x58);
    goto code_r0x0320d82c;
  }
  auVar17 = func_0x00f78af4();
  uVar5 = auVar17._0_8_;
  *(undefined8 *)((long)puVar1 + -0x90) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x88) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x80) = 0x3d20028;
  *(undefined8 *)((long)puVar1 + -0x78) = 0;
  *(undefined1 **)((long)puVar1 + -0x70) = (undefined1 *)((long)puVar1 + -0x40);
  *(undefined **)((long)puVar1 + -0x68) = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerSideSneer
  ;
  uVar6 = uVar5;
  if ((bRam0000000003eb4ee8 & 1) == 0) {
    uVar6 = func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee8 = 1;
  }
  if (auVar17._8_4_ == 1) {
    lVar8 = *(long *)(uVar5 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar8 == 0) goto code_r0x01537eec;
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x50);
  }
  else {
    if (auVar17._8_4_ != 0) {
      return uVar6;
    }
    lVar8 = *(long *)(uVar5 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar8 == 0) {
code_r0x01537eec:
      lVar8 = func_0x00f78af4();
      *(undefined8 *)((long)puVar1 + -0xc0) = 0x3eb4000;
      *(undefined8 *)((long)puVar1 + -0xb8) = 0x3eb4000;
      *(undefined8 *)((long)puVar1 + -0xb0) = 0x3d20028;
      *(undefined8 *)((long)puVar1 + -0xa8) = 0;
      *(undefined1 **)((long)puVar1 + -0xa0) = (undefined1 *)((long)puVar1 + -0x70);
      *(undefined **)((long)puVar1 + -0x98) =
           &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaken;
      if ((bRam0000000003eb4ee9 & 1) == 0) {
        func_0x00f78a20(0x3d20028);
        bRam0000000003eb4ee9 = 1;
      }
      lVar8 = *(long *)(lVar8 + 0x18);
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar8 == 0) {
        lVar8 = func_0x00f78af4();
        *(undefined8 *)((long)puVar1 + -0xf0) = 0x3eb4000;
        *(undefined8 *)((long)puVar1 + -0xe8) = 0x3eb4000;
        *(undefined8 *)((long)puVar1 + -0xe0) = 0x3d20028;
        *(undefined8 *)((long)puVar1 + -0xd8) = 0;
        *(undefined1 **)((long)puVar1 + -0xd0) = (undefined1 *)((long)puVar1 + -0xa0);
        *(undefined **)((long)puVar1 + -200) =
             &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaking;
        uVar12 = 0x3eb4000;
        if ((bRam0000000003eb4eea & 1) == 0) {
          func_0x00f78a20(0x3d20028);
          bRam0000000003eb4eea = 1;
        }
        lVar8 = *(long *)(lVar8 + 0x18);
        if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar8 == 0) {
          unaff_x19 = func_0x00f78af4();
          register0x00000008 = (BADSPACEBASE *)((long)puVar1 + -0x1a0);
          puVar2 = (undefined8 *)((long)puVar1 + -0x1a0);
          *(ulong *)((long)puVar1 + -0x140) = unaff_d9;
          *(ulong *)((long)puVar1 + -0x138) = extraout_d0_01 & 0xffffffff;
          *(undefined8 *)((long)puVar1 + -0x130) = unaff_x24;
          *(undefined8 *)((long)puVar1 + -0x128) = unaff_x23;
          *(undefined8 *)((long)puVar1 + -0x120) = 0x3eb4000;
          *(undefined8 *)((long)puVar1 + -0x118) = 0x3eb4000;
          *(undefined8 *)((long)puVar1 + -0x110) = 0x3d20028;
          *(undefined8 *)((long)puVar1 + -0x108) = 0;
          *(undefined1 **)((long)puVar1 + -0x100) = (undefined1 *)((long)puVar1 + -0xd0);
          *(undefined **)((long)puVar1 + -0xf8) =
               &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerImpact;
          unaff_x29 = (undefined8 ******)((long)puVar1 + -0x100);
          unaff_d8 = (ulong)param_2;
          param_1 = (uint)extraout_d0_02;
          unaff_d9 = extraout_d0_02 & 0xffffffff;
          unaff_x20 = 0x3eb4000;
          if ((bRam0000000003eb4eeb & 1) == 0) {
            func_0x00f78a20(0x3d20028);
            bRam0000000003eb4eeb = 1;
          }
          if (*(long *)(unaff_x19 + 0x18) != 0) {
            uVar13 = 0x3d20028;
            unaff_x22 = 0x3d20028;
            /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50((undefined1 *)((long)puVar1 + -0x198),*(long *)(unaff_x19 + 0x18),2,0);
            *(undefined8 *)((long)puVar1 + -0x168) = *(undefined8 *)((long)puVar1 + -400);
            *(undefined8 *)((long)puVar1 + -0x170) = *(undefined8 *)((long)puVar1 + -0x198);
            *(undefined8 *)((long)puVar1 + -0x158) = *(undefined8 *)((long)puVar1 + -0x180);
            *(undefined8 *)((long)puVar1 + -0x160) = *(undefined8 *)((long)puVar1 + -0x188);
            *(undefined4 *)((long)puVar1 + -0x150) = *(undefined4 *)((long)puVar1 + -0x178);
            unaff_x20 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4((undefined1 *)((long)puVar1 + -0x170),0);
            if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if ((int)unaff_x20 == **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8)) {
              return (ulong)((int)unaff_x20 != **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8));
            }
            lVar8 = *(long *)(unaff_x19 + 0x18);
            if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar12 = 0;
            if (lVar8 != 0) {
              uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x60);
              unaff_x30 = &UNK_015380e8;
              unaff_x21 = lVar8;
code_r0x0320d09c:
              *(ulong *)((long)register0x00000008 + -0x40) = unaff_d9;
              *(ulong *)((long)register0x00000008 + -0x38) = unaff_d8;
              *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
              *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
              *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
              *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
              *(undefined8 *******)((long)register0x00000008 + -0x10) = unaff_x29;
              *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
              if (pcRam0000000003ebe400 == (code *)0x0) {
                pcRam0000000003ebe400 =
                     (code *)func_0x00f789d4(
                                            "UnityEngine.Animator::SetFloatID(System.Int32,System.Single)"
                                            );
              }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar6 = (*pcRam0000000003ebe400)(param_1,lVar8,uVar7);
              return uVar6;
            }
          }
          lVar8 = func_0x00f78af4();
          *(undefined8 *)((long)puVar1 + -0x1d0) = uVar13;
          *(undefined8 *)((long)puVar1 + -0x1c8) = uVar12;
          *(undefined8 *)((long)puVar1 + -0x1c0) = unaff_x20;
          *(long *)((long)puVar1 + -0x1b8) = unaff_x19;
          *(undefined8 *******)((long)puVar1 + -0x1b0) = unaff_x29;
          *(undefined **)((long)puVar1 + -0x1a8) =
               &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerCelebrateSmall;
          if ((bRam0000000003eb4eec & 1) == 0) {
            func_0x00f78a20(0x3d20028);
            bRam0000000003eb4eec = 1;
          }
          lVar8 = *(long *)(lVar8 + 0x18);
          if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (lVar8 == 0) {
            lVar8 = func_0x00f78af4();
            *(ulong *)((long)puVar1 + -0x210) = unaff_d9;
            *(ulong *)((long)puVar1 + -0x208) = unaff_d8;
            *(undefined8 *)((long)puVar1 + -0x200) = uVar13;
            *(undefined8 *)((long)puVar1 + -0x1f8) = 0x3eb4000;
            *(undefined8 *)((long)puVar1 + -0x1f0) = 0x3d20028;
            *(undefined8 *)((long)puVar1 + -0x1e8) = 0;
            *(undefined1 **)((long)puVar1 + -0x1e0) = (undefined1 *)((long)puVar1 + -0x1b0);
            *(undefined **)((long)puVar1 + -0x1d8) =
                 &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayAnimatorStateOverride;
            *(undefined4 *)((long)puVar1 + -0x220) = 0;
            *(undefined8 *)((long)puVar1 + -0x238) = 0;
            *(undefined8 *)((long)puVar1 + -0x240) = 0;
            *(undefined8 *)((long)puVar1 + -0x228) = 0;
            *(undefined8 *)((long)puVar1 + -0x230) = 0;
            lVar10 = *(long *)(lVar8 + 0x18);
            if (lVar10 != 0) {
              iVar11 = 0;
              do {
                iVar4 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar10,0);
                lVar10 = *(long *)(lVar8 + 0x18);
                if (iVar4 <= iVar11) {
                  if (lVar10 != 0) {
                    iVar11 = 0;
                    goto code_r0x01538278;
                  }
                  break;
                }
                if (lVar10 == 0) break;
                /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50((undefined1 *)((long)puVar1 + -0x268),lVar10,iVar11,0);
                *(undefined8 *)((long)puVar1 + -0x238) = *(undefined8 *)((long)puVar1 + -0x260);
                *(undefined8 *)((long)puVar1 + -0x240) = *(undefined8 *)((long)puVar1 + -0x268);
                *(undefined8 *)((long)puVar1 + -0x228) = *(undefined8 *)((long)puVar1 + -0x250);
                *(undefined8 *)((long)puVar1 + -0x230) = *(undefined8 *)((long)puVar1 + -600);
                *(undefined4 *)((long)puVar1 + -0x220) = *(undefined4 *)((long)puVar1 + -0x248);
                uVar6 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4((undefined1 *)((long)puVar1 + -0x240),0);
                if ((int)uVar6 == (int)extraout_x1) {
                  return uVar6;
                }
                iVar11 = iVar11 + 1;
                lVar10 = *(long *)(lVar8 + 0x18);
              } while (lVar10 != 0);
            }
code_r0x015382cc:
            uVar6 = func_0x00f78af4();
            return uVar6;
          }
          uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x68);
          ppppppuVar14 = *(undefined8 *******)((long)puVar1 + -0x1b0);
          puVar15 = *(undefined **)((long)puVar1 + -0x1a8);
          lVar10 = *(long *)((long)puVar1 + -0x1c0);
          lVar9 = *(long *)((long)puVar1 + -0x1b8);
          uVar13 = *(undefined8 *)((long)puVar1 + -0x1d0);
          uVar12 = *(undefined8 *)((long)puVar1 + -0x1c8);
        }
        else {
          uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x58);
          ppppppuVar14 = *(undefined8 *******)((long)puVar1 + -0xd0);
          puVar15 = *(undefined **)((long)puVar1 + -200);
          lVar10 = *(long *)((long)puVar1 + -0xe0);
          lVar9 = *(long *)((long)puVar1 + -0xd8);
          puVar2 = (undefined8 *)((long)puVar1 + -0xc0);
          uVar13 = *(undefined8 *)((long)puVar1 + -0xf0);
          uVar12 = *(undefined8 *)((long)puVar1 + -0xe8);
        }
      }
      else {
        uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x54);
        ppppppuVar14 = *(undefined8 *******)((long)puVar1 + -0xa0);
        puVar15 = *(undefined **)((long)puVar1 + -0x98);
        lVar10 = *(long *)((long)puVar1 + -0xb0);
        lVar9 = *(long *)((long)puVar1 + -0xa8);
        puVar2 = (undefined8 *)((long)puVar1 + -0x90);
        uVar13 = *(undefined8 *)((long)puVar1 + -0xc0);
        uVar12 = *(undefined8 *)((long)puVar1 + -0xb8);
      }
      goto code_r0x0320d82c;
    }
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x4c);
  }
  ppppppuVar14 = *(undefined8 *******)((long)puVar1 + -0x70);
  puVar15 = *(undefined **)((long)puVar1 + -0x68);
  lVar10 = *(long *)((long)puVar1 + -0x80);
  lVar9 = *(long *)((long)puVar1 + -0x78);
  puVar2 = (undefined8 *)((long)puVar1 + -0x60);
  uVar13 = *(undefined8 *)((long)puVar1 + -0x90);
  uVar12 = *(undefined8 *)((long)puVar1 + -0x88);
code_r0x0320d82c:
  *(undefined8 *)((long)puVar2 + -0x30) = uVar13;
  *(undefined8 *)((long)puVar2 + -0x28) = uVar12;
  *(long *)((long)puVar2 + -0x20) = lVar10;
  *(long *)((long)puVar2 + -0x18) = lVar9;
  *(undefined8 *******)((long)puVar2 + -0x10) = ppppppuVar14;
  *(undefined **)((long)puVar2 + -8) = puVar15;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*pcRam0000000003ebe460)(lVar8,uVar7);
  return uVar6;
  while( true ) {
    iVar11 = iVar11 + 1;
    lVar10 = *(long *)(lVar8 + 0x18);
    if (lVar10 == 0) break;
code_r0x01538278:
    uVar6 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar10,0);
    if ((int)uVar6 <= iVar11) {
      return uVar6;
    }
    if (*(long *)(lVar8 + 0x18) == 0) break;
    iVar4 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(*(long *)(lVar8 + 0x18),iVar11,extraout_x1,0);
    if (iVar4 != 0) {
      if (*(long *)(lVar8 + 0x18) == 0) break;
      /*UnityEngine.Animator$$Play*/ func_0x03210958(extraout_s0,*(long *)(lVar8 + 0x18),extraout_x1,iVar11,0);
    }
  }
  goto code_r0x015382cc;
}



// ============================================================
// RVA: 0x1537814 | Atlas.Gameplay.Kart.BaseVisualBehaviour.SetSteerIntensity
// ============================================================

/* WARNING: Possible PIC construction at 0x015380e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01538120: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015380e8) */
/* WARNING: Removing unreachable block (ram,0x015380f0) */
/* WARNING: Removing unreachable block (ram,0x01538110) */

ulong Atlas_Gameplay_Kart_BaseVisualBehaviour__SetSteerIntensity
                (uint param_1,uint param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined8 extraout_x1;
  long unaff_x19;
  long lVar8;
  long lVar9;
  undefined8 unaff_x20;
  long lVar10;
  int iVar11;
  long unaff_x21;
  undefined8 uVar12;
  undefined8 unaff_x22;
  undefined8 uVar13;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 ******unaff_x29;
  undefined8 ******ppppppuVar14;
  undefined *unaff_x30;
  undefined *puVar15;
  undefined4 extraout_s0;
  ulong extraout_d0;
  ulong extraout_d0_00;
  ulong extraout_d0_01;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 *****pppppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 *****pppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 *****pppppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 *****pppppuStack_130;
  undefined *puStack_128;
  undefined8 *****pppppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 *****pppppuStack_c0;
  undefined *puStack_b8;
  undefined8 *****pppppuStack_90;
  undefined *puStack_88;
  undefined8 *****pppppuStack_50;
  undefined *puStack_48;
  
  uVar6 = (ulong)param_1;
  if ((bRam0000000003eb4edd & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4edd = 1;
  }
  lVar8 = *(long *)(param_3 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0xc);
    goto code_r0x0320d09c;
  }
  lVar8 = func_0x00f78af4();
  puStack_48 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetDrift;
  param_1 = (uint)extraout_d0;
  unaff_d8 = extraout_d0 & 0xffffffff;
  pppppuStack_50 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ede & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ede = 1;
  }
  lVar8 = *(long *)(lVar8 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x10);
    unaff_x20 = 0x3d20028;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x19 = 0;
    unaff_x21 = 0x3eb4000;
    unaff_x29 = (undefined8 ******)pppppuStack_50;
    unaff_x30 = puStack_48;
    unaff_d8 = uVar6;
    goto code_r0x0320d09c;
  }
  auVar16 = func_0x00f78af4();
  lVar8 = auVar16._8_8_;
  puStack_88 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetBoosting;
  pppppuStack_90 = &pppppuStack_50;
  if ((bRam0000000003eb4edf & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4edf = 1;
  }
  lVar10 = *(long *)(auVar16._0_8_ + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar10 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x20);
    puVar3 = &stack0xffffffffffffff80;
    unaff_x19 = lVar8;
    lVar8 = 0;
    lVar9 = 0x3d20028;
    uVar13 = 0x3eb4000;
    ppppppuVar14 = (undefined8 ******)pppppuStack_90;
    puVar15 = puStack_88;
UnityEngine_Animator__SetBool:
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x28) = uVar13;
    *(long *)(puVar3 + -0x20) = lVar9;
    *(long *)(puVar3 + -0x18) = lVar8;
    *(undefined8 *******)(puVar3 + -0x10) = ppppppuVar14;
    *(undefined **)(puVar3 + -8) = puVar15;
    if (pcRam0000000003ebe420 == (code *)0x0) {
      pcRam0000000003ebe420 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*pcRam0000000003ebe420)(lVar10,uVar7,unaff_x19);
    return uVar6;
  }
  auVar16 = func_0x00f78af4();
  unaff_x19 = auVar16._8_8_;
  uStack_e0 = 0x3eb4000;
  uStack_d8 = 0x3d20028;
  puStack_b8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetInAir;
  lStack_d0 = lVar10;
  lStack_c8 = lVar8;
  pppppuStack_c0 = &pppppuStack_90;
  if ((bRam0000000003eb4ee0 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee0 = 1;
  }
  lVar10 = *(long *)(auVar16._0_8_ + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar10 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x18);
    puVar3 = &stack0xffffffffffffff50;
    lVar8 = lStack_c8;
    lVar9 = lStack_d0;
    uVar13 = uStack_d8;
    unaff_x22 = uStack_e0;
    ppppppuVar14 = (undefined8 ******)pppppuStack_c0;
    puVar15 = puStack_b8;
    goto UnityEngine_Animator__SetBool;
  }
  lVar8 = func_0x00f78af4();
  puStack_e8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetLandForce;
  param_1 = (uint)extraout_d0_00;
  pppppuStack_f0 = &pppppuStack_c0;
  if ((bRam0000000003eb4ee1 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee1 = 1;
  }
  lVar8 = *(long *)(lVar8 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x80);
    unaff_x22 = 0x3eb4000;
    register0x00000008 = (BADSPACEBASE *)&uStack_e0;
    unaff_x20 = 0;
    unaff_x21 = 0x3d20028;
    unaff_x29 = (undefined8 ******)pppppuStack_f0;
    unaff_x30 = puStack_e8;
    goto code_r0x0320d09c;
  }
  auVar16 = func_0x00f78af4();
  unaff_x19 = auVar16._8_8_;
  uStack_150 = 0x3eb4000;
  uStack_148 = 0x3eb4000;
  lStack_140 = 0x3d20028;
  puStack_128 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetGliding;
  uVar13 = 0x3eb4000;
  lStack_138 = lVar8;
  pppppuStack_130 = &pppppuStack_f0;
  if ((bRam0000000003eb4ee2 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee2 = 1;
  }
  lVar10 = *(long *)(auVar16._0_8_ + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar10 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x1c);
    puVar3 = &stack0xfffffffffffffee0;
    lVar8 = lStack_138;
    lVar9 = lStack_140;
    uVar13 = uStack_148;
    unaff_x22 = uStack_150;
    ppppppuVar14 = (undefined8 ******)pppppuStack_130;
    puVar15 = puStack_128;
    goto UnityEngine_Animator__SetBool;
  }
  lVar8 = func_0x00f78af4();
  uStack_180 = 0x3eb4000;
  uStack_178 = 0x3d20028;
  puStack_158 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerHop;
  lStack_170 = lVar10;
  lStack_168 = unaff_x19;
  pppppuStack_160 = &pppppuStack_130;
  if ((bRam0000000003eb4ee3 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee3 = 1;
  }
  lVar8 = *(long *)(lVar8 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x14);
    puVar2 = &uStack_150;
    lVar9 = lStack_168;
    lVar10 = lStack_170;
    uVar12 = uStack_178;
    uVar13 = uStack_180;
    ppppppuVar14 = (undefined8 ******)pppppuStack_160;
    puVar15 = puStack_158;
    goto code_r0x0320d82c;
  }
  lVar10 = func_0x00f78af4();
  puVar1 = &uStack_1b0;
  uStack_1b0 = 0x3eb4000;
  uStack_1a8 = 0x3eb4000;
  lStack_1a0 = 0x3d20028;
  puStack_188 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerHopBoost;
  ppppppuVar14 = &pppppuStack_190;
  lStack_198 = lVar8;
  pppppuStack_190 = &pppppuStack_160;
  if ((bRam0000000003eb4ee4 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee4 = 1;
  }
  lVar8 = *(long *)(lVar10 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x6c);
    puVar2 = &uStack_180;
    lVar9 = lStack_198;
    lVar10 = lStack_1a0;
    uVar12 = uStack_1a8;
    uVar13 = uStack_1b0;
    ppppppuVar14 = (undefined8 ******)pppppuStack_190;
    puVar15 = puStack_188;
    goto code_r0x0320d82c;
  }
  puVar15 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHit;
  auVar17 = func_0x00f78af4();
  lVar10 = auVar17._0_8_;
  if (auVar17._8_4_ != 0) {
    puVar1 = &uStack_1e0;
    uStack_1e0 = 0x3eb4000;
    uStack_1d8 = 0x3eb4000;
    lStack_1d0 = 0x3d20028;
    puStack_1b8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHit;
    lStack_1c8 = lVar8;
    pppppuStack_1c0 = ppppppuVar14;
    if ((bRam0000000003eb4ee6 & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4ee6 = 1;
    }
    lVar8 = *(long *)(lVar10 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar8 != 0) {
      uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x44);
      puVar2 = &uStack_1b0;
      lVar9 = lStack_1c8;
      lVar10 = lStack_1d0;
      uVar12 = uStack_1d8;
      uVar13 = uStack_1e0;
      ppppppuVar14 = (undefined8 ******)pppppuStack_1c0;
      puVar15 = puStack_1b8;
      goto code_r0x0320d82c;
    }
    puVar15 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHitSmall;
    lVar10 = func_0x00f78af4();
    ppppppuVar14 = &pppppuStack_1c0;
  }
  *(undefined8 *)((long)puVar1 + -0x30) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x28) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x20) = 0x3d20028;
  *(undefined8 *)((long)puVar1 + -0x18) = 0;
  *(undefined8 *******)((long)puVar1 + -0x10) = ppppppuVar14;
  *(undefined **)((long)puVar1 + -8) = puVar15;
  if ((bRam0000000003eb4ee5 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee5 = 1;
  }
  lVar8 = *(long *)(lVar10 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x40);
    ppppppuVar14 = *(undefined8 *******)((long)puVar1 + -0x10);
    puVar15 = *(undefined **)((long)puVar1 + -8);
    lVar10 = *(long *)((long)puVar1 + -0x20);
    lVar9 = *(long *)((long)puVar1 + -0x18);
    uVar13 = *(undefined8 *)((long)puVar1 + -0x30);
    uVar12 = *(undefined8 *)((long)puVar1 + -0x28);
    puVar2 = puVar1;
    goto code_r0x0320d82c;
  }
  lVar8 = func_0x00f78af4();
  *(undefined8 *)((long)puVar1 + -0x60) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x58) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x50) = 0x3d20028;
  *(undefined8 *)((long)puVar1 + -0x48) = 0;
  *(undefined1 **)((long)puVar1 + -0x40) = (undefined1 *)((long)puVar1 + -0x10);
  *(undefined **)((long)puVar1 + -0x38) = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIncoming;
  if ((bRam0000000003eb4ee7 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee7 = 1;
  }
  lVar8 = *(long *)(lVar8 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x48);
    ppppppuVar14 = *(undefined8 *******)((long)puVar1 + -0x40);
    puVar15 = *(undefined **)((long)puVar1 + -0x38);
    lVar10 = *(long *)((long)puVar1 + -0x50);
    lVar9 = *(long *)((long)puVar1 + -0x48);
    puVar2 = (undefined8 *)((long)puVar1 + -0x30);
    uVar13 = *(undefined8 *)((long)puVar1 + -0x60);
    uVar12 = *(undefined8 *)((long)puVar1 + -0x58);
    goto code_r0x0320d82c;
  }
  auVar17 = func_0x00f78af4();
  uVar5 = auVar17._0_8_;
  *(undefined8 *)((long)puVar1 + -0x90) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x88) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x80) = 0x3d20028;
  *(undefined8 *)((long)puVar1 + -0x78) = 0;
  *(undefined1 **)((long)puVar1 + -0x70) = (undefined1 *)((long)puVar1 + -0x40);
  *(undefined **)((long)puVar1 + -0x68) = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerSideSneer
  ;
  uVar6 = uVar5;
  if ((bRam0000000003eb4ee8 & 1) == 0) {
    uVar6 = func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee8 = 1;
  }
  if (auVar17._8_4_ == 1) {
    lVar8 = *(long *)(uVar5 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar8 == 0) goto code_r0x01537eec;
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x50);
  }
  else {
    if (auVar17._8_4_ != 0) {
      return uVar6;
    }
    lVar8 = *(long *)(uVar5 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar8 == 0) {
code_r0x01537eec:
      lVar8 = func_0x00f78af4();
      *(undefined8 *)((long)puVar1 + -0xc0) = 0x3eb4000;
      *(undefined8 *)((long)puVar1 + -0xb8) = 0x3eb4000;
      *(undefined8 *)((long)puVar1 + -0xb0) = 0x3d20028;
      *(undefined8 *)((long)puVar1 + -0xa8) = 0;
      *(undefined1 **)((long)puVar1 + -0xa0) = (undefined1 *)((long)puVar1 + -0x70);
      *(undefined **)((long)puVar1 + -0x98) =
           &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaken;
      if ((bRam0000000003eb4ee9 & 1) == 0) {
        func_0x00f78a20(0x3d20028);
        bRam0000000003eb4ee9 = 1;
      }
      lVar8 = *(long *)(lVar8 + 0x18);
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar8 == 0) {
        lVar8 = func_0x00f78af4();
        *(undefined8 *)((long)puVar1 + -0xf0) = 0x3eb4000;
        *(undefined8 *)((long)puVar1 + -0xe8) = 0x3eb4000;
        *(undefined8 *)((long)puVar1 + -0xe0) = 0x3d20028;
        *(undefined8 *)((long)puVar1 + -0xd8) = 0;
        *(undefined1 **)((long)puVar1 + -0xd0) = (undefined1 *)((long)puVar1 + -0xa0);
        *(undefined **)((long)puVar1 + -200) =
             &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaking;
        uVar12 = 0x3eb4000;
        if ((bRam0000000003eb4eea & 1) == 0) {
          func_0x00f78a20(0x3d20028);
          bRam0000000003eb4eea = 1;
        }
        lVar8 = *(long *)(lVar8 + 0x18);
        if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar8 == 0) {
          unaff_x19 = func_0x00f78af4();
          register0x00000008 = (BADSPACEBASE *)((long)puVar1 + -0x1a0);
          puVar2 = (undefined8 *)((long)puVar1 + -0x1a0);
          *(ulong *)((long)puVar1 + -0x140) = unaff_d9;
          *(ulong *)((long)puVar1 + -0x138) = extraout_d0_00 & 0xffffffff;
          *(undefined8 *)((long)puVar1 + -0x130) = unaff_x24;
          *(undefined8 *)((long)puVar1 + -0x128) = unaff_x23;
          *(undefined8 *)((long)puVar1 + -0x120) = 0x3eb4000;
          *(undefined8 *)((long)puVar1 + -0x118) = 0x3eb4000;
          *(undefined8 *)((long)puVar1 + -0x110) = 0x3d20028;
          *(undefined8 *)((long)puVar1 + -0x108) = 0;
          *(undefined1 **)((long)puVar1 + -0x100) = (undefined1 *)((long)puVar1 + -0xd0);
          *(undefined **)((long)puVar1 + -0xf8) =
               &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerImpact;
          unaff_x29 = (undefined8 ******)((long)puVar1 + -0x100);
          unaff_d8 = (ulong)param_2;
          param_1 = (uint)extraout_d0_01;
          unaff_d9 = extraout_d0_01 & 0xffffffff;
          unaff_x20 = 0x3eb4000;
          if ((bRam0000000003eb4eeb & 1) == 0) {
            func_0x00f78a20(0x3d20028);
            bRam0000000003eb4eeb = 1;
          }
          if (*(long *)(unaff_x19 + 0x18) != 0) {
            uVar13 = 0x3d20028;
            unaff_x22 = 0x3d20028;
            /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50((undefined1 *)((long)puVar1 + -0x198),*(long *)(unaff_x19 + 0x18),2,0);
            *(undefined8 *)((long)puVar1 + -0x168) = *(undefined8 *)((long)puVar1 + -400);
            *(undefined8 *)((long)puVar1 + -0x170) = *(undefined8 *)((long)puVar1 + -0x198);
            *(undefined8 *)((long)puVar1 + -0x158) = *(undefined8 *)((long)puVar1 + -0x180);
            *(undefined8 *)((long)puVar1 + -0x160) = *(undefined8 *)((long)puVar1 + -0x188);
            *(undefined4 *)((long)puVar1 + -0x150) = *(undefined4 *)((long)puVar1 + -0x178);
            unaff_x20 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4((undefined1 *)((long)puVar1 + -0x170),0);
            if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if ((int)unaff_x20 == **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8)) {
              return (ulong)((int)unaff_x20 != **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8));
            }
            lVar8 = *(long *)(unaff_x19 + 0x18);
            if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar12 = 0;
            if (lVar8 != 0) {
              uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x60);
              unaff_x30 = &UNK_015380e8;
              unaff_x21 = lVar8;
code_r0x0320d09c:
              *(ulong *)((long)register0x00000008 + -0x40) = unaff_d9;
              *(ulong *)((long)register0x00000008 + -0x38) = unaff_d8;
              *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
              *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
              *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
              *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
              *(undefined8 *******)((long)register0x00000008 + -0x10) = unaff_x29;
              *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
              if (pcRam0000000003ebe400 == (code *)0x0) {
                pcRam0000000003ebe400 =
                     (code *)func_0x00f789d4(
                                            "UnityEngine.Animator::SetFloatID(System.Int32,System.Single)"
                                            );
              }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar6 = (*pcRam0000000003ebe400)(param_1,lVar8,uVar7);
              return uVar6;
            }
          }
          lVar8 = func_0x00f78af4();
          *(undefined8 *)((long)puVar1 + -0x1d0) = uVar13;
          *(undefined8 *)((long)puVar1 + -0x1c8) = uVar12;
          *(undefined8 *)((long)puVar1 + -0x1c0) = unaff_x20;
          *(long *)((long)puVar1 + -0x1b8) = unaff_x19;
          *(undefined8 *******)((long)puVar1 + -0x1b0) = unaff_x29;
          *(undefined **)((long)puVar1 + -0x1a8) =
               &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerCelebrateSmall;
          if ((bRam0000000003eb4eec & 1) == 0) {
            func_0x00f78a20(0x3d20028);
            bRam0000000003eb4eec = 1;
          }
          lVar8 = *(long *)(lVar8 + 0x18);
          if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (lVar8 == 0) {
            lVar8 = func_0x00f78af4();
            *(ulong *)((long)puVar1 + -0x210) = unaff_d9;
            *(ulong *)((long)puVar1 + -0x208) = unaff_d8;
            *(undefined8 *)((long)puVar1 + -0x200) = uVar13;
            *(undefined8 *)((long)puVar1 + -0x1f8) = 0x3eb4000;
            *(undefined8 *)((long)puVar1 + -0x1f0) = 0x3d20028;
            *(undefined8 *)((long)puVar1 + -0x1e8) = 0;
            *(undefined1 **)((long)puVar1 + -0x1e0) = (undefined1 *)((long)puVar1 + -0x1b0);
            *(undefined **)((long)puVar1 + -0x1d8) =
                 &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayAnimatorStateOverride;
            *(undefined4 *)((long)puVar1 + -0x220) = 0;
            *(undefined8 *)((long)puVar1 + -0x238) = 0;
            *(undefined8 *)((long)puVar1 + -0x240) = 0;
            *(undefined8 *)((long)puVar1 + -0x228) = 0;
            *(undefined8 *)((long)puVar1 + -0x230) = 0;
            lVar10 = *(long *)(lVar8 + 0x18);
            if (lVar10 != 0) {
              iVar11 = 0;
              do {
                iVar4 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar10,0);
                lVar10 = *(long *)(lVar8 + 0x18);
                if (iVar4 <= iVar11) {
                  if (lVar10 != 0) {
                    iVar11 = 0;
                    goto code_r0x01538278;
                  }
                  break;
                }
                if (lVar10 == 0) break;
                /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50((undefined1 *)((long)puVar1 + -0x268),lVar10,iVar11,0);
                *(undefined8 *)((long)puVar1 + -0x238) = *(undefined8 *)((long)puVar1 + -0x260);
                *(undefined8 *)((long)puVar1 + -0x240) = *(undefined8 *)((long)puVar1 + -0x268);
                *(undefined8 *)((long)puVar1 + -0x228) = *(undefined8 *)((long)puVar1 + -0x250);
                *(undefined8 *)((long)puVar1 + -0x230) = *(undefined8 *)((long)puVar1 + -600);
                *(undefined4 *)((long)puVar1 + -0x220) = *(undefined4 *)((long)puVar1 + -0x248);
                uVar6 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4((undefined1 *)((long)puVar1 + -0x240),0);
                if ((int)uVar6 == (int)extraout_x1) {
                  return uVar6;
                }
                iVar11 = iVar11 + 1;
                lVar10 = *(long *)(lVar8 + 0x18);
              } while (lVar10 != 0);
            }
code_r0x015382cc:
            uVar6 = func_0x00f78af4();
            return uVar6;
          }
          uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x68);
          ppppppuVar14 = *(undefined8 *******)((long)puVar1 + -0x1b0);
          puVar15 = *(undefined **)((long)puVar1 + -0x1a8);
          lVar10 = *(long *)((long)puVar1 + -0x1c0);
          lVar9 = *(long *)((long)puVar1 + -0x1b8);
          uVar13 = *(undefined8 *)((long)puVar1 + -0x1d0);
          uVar12 = *(undefined8 *)((long)puVar1 + -0x1c8);
        }
        else {
          uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x58);
          ppppppuVar14 = *(undefined8 *******)((long)puVar1 + -0xd0);
          puVar15 = *(undefined **)((long)puVar1 + -200);
          lVar10 = *(long *)((long)puVar1 + -0xe0);
          lVar9 = *(long *)((long)puVar1 + -0xd8);
          puVar2 = (undefined8 *)((long)puVar1 + -0xc0);
          uVar13 = *(undefined8 *)((long)puVar1 + -0xf0);
          uVar12 = *(undefined8 *)((long)puVar1 + -0xe8);
        }
      }
      else {
        uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x54);
        ppppppuVar14 = *(undefined8 *******)((long)puVar1 + -0xa0);
        puVar15 = *(undefined **)((long)puVar1 + -0x98);
        lVar10 = *(long *)((long)puVar1 + -0xb0);
        lVar9 = *(long *)((long)puVar1 + -0xa8);
        puVar2 = (undefined8 *)((long)puVar1 + -0x90);
        uVar13 = *(undefined8 *)((long)puVar1 + -0xc0);
        uVar12 = *(undefined8 *)((long)puVar1 + -0xb8);
      }
      goto code_r0x0320d82c;
    }
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x4c);
  }
  ppppppuVar14 = *(undefined8 *******)((long)puVar1 + -0x70);
  puVar15 = *(undefined **)((long)puVar1 + -0x68);
  lVar10 = *(long *)((long)puVar1 + -0x80);
  lVar9 = *(long *)((long)puVar1 + -0x78);
  puVar2 = (undefined8 *)((long)puVar1 + -0x60);
  uVar13 = *(undefined8 *)((long)puVar1 + -0x90);
  uVar12 = *(undefined8 *)((long)puVar1 + -0x88);
code_r0x0320d82c:
  *(undefined8 *)((long)puVar2 + -0x30) = uVar13;
  *(undefined8 *)((long)puVar2 + -0x28) = uVar12;
  *(long *)((long)puVar2 + -0x20) = lVar10;
  *(long *)((long)puVar2 + -0x18) = lVar9;
  *(undefined8 *******)((long)puVar2 + -0x10) = ppppppuVar14;
  *(undefined **)((long)puVar2 + -8) = puVar15;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*pcRam0000000003ebe460)(lVar8,uVar7);
  return uVar6;
  while( true ) {
    iVar11 = iVar11 + 1;
    lVar10 = *(long *)(lVar8 + 0x18);
    if (lVar10 == 0) break;
code_r0x01538278:
    uVar6 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar10,0);
    if ((int)uVar6 <= iVar11) {
      return uVar6;
    }
    if (*(long *)(lVar8 + 0x18) == 0) break;
    iVar4 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(*(long *)(lVar8 + 0x18),iVar11,extraout_x1,0);
    if (iVar4 != 0) {
      if (*(long *)(lVar8 + 0x18) == 0) break;
      /*UnityEngine.Animator$$Play*/ func_0x03210958(extraout_s0,*(long *)(lVar8 + 0x18),extraout_x1,iVar11,0);
    }
  }
  goto code_r0x015382cc;
}



// ============================================================
// RVA: 0x15378a8 | Atlas.Gameplay.Kart.BaseVisualBehaviour.SetDrift
// ============================================================

/* WARNING: Possible PIC construction at 0x015380e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01538120: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015380e8) */
/* WARNING: Removing unreachable block (ram,0x015380f0) */
/* WARNING: Removing unreachable block (ram,0x01538110) */

ulong Atlas_Gameplay_Kart_BaseVisualBehaviour__SetDrift(uint param_1,uint param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined8 extraout_x1;
  long unaff_x19;
  long lVar8;
  long lVar9;
  undefined8 unaff_x20;
  long lVar10;
  int iVar11;
  long unaff_x21;
  undefined8 uVar12;
  undefined8 unaff_x22;
  undefined8 uVar13;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 ******unaff_x29;
  undefined8 ******ppppppuVar14;
  undefined *unaff_x30;
  undefined *puVar15;
  undefined4 extraout_s0;
  ulong extraout_d0;
  ulong extraout_d0_00;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 *****pppppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 *****pppppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 *****pppppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 *****pppppuStack_f0;
  undefined *puStack_e8;
  undefined8 *****pppppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 *****pppppuStack_80;
  undefined *puStack_78;
  undefined8 *****pppppuStack_50;
  undefined *puStack_48;
  
  uVar6 = (ulong)param_1;
  if ((bRam0000000003eb4ede & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ede = 1;
  }
  lVar8 = *(long *)(param_3 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x10);
    uVar6 = unaff_d8;
    goto code_r0x0320d09c;
  }
  auVar16 = func_0x00f78af4();
  lVar8 = auVar16._8_8_;
  puStack_48 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetBoosting;
  pppppuStack_50 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4edf & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4edf = 1;
  }
  lVar10 = *(long *)(auVar16._0_8_ + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar10 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x20);
    puVar3 = &stack0xffffffffffffffc0;
    unaff_x19 = lVar8;
    lVar8 = 0;
    lVar9 = 0x3d20028;
    uVar13 = 0x3eb4000;
    ppppppuVar14 = (undefined8 ******)pppppuStack_50;
    puVar15 = puStack_48;
UnityEngine_Animator__SetBool:
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x28) = uVar13;
    *(long *)(puVar3 + -0x20) = lVar9;
    *(long *)(puVar3 + -0x18) = lVar8;
    *(undefined8 *******)(puVar3 + -0x10) = ppppppuVar14;
    *(undefined **)(puVar3 + -8) = puVar15;
    if (pcRam0000000003ebe420 == (code *)0x0) {
      pcRam0000000003ebe420 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*pcRam0000000003ebe420)(lVar10,uVar7,unaff_x19);
    return uVar6;
  }
  auVar16 = func_0x00f78af4();
  unaff_x19 = auVar16._8_8_;
  uStack_a0 = 0x3eb4000;
  uStack_98 = 0x3d20028;
  puStack_78 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetInAir;
  lStack_90 = lVar10;
  lStack_88 = lVar8;
  pppppuStack_80 = &pppppuStack_50;
  if ((bRam0000000003eb4ee0 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee0 = 1;
  }
  lVar10 = *(long *)(auVar16._0_8_ + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar10 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x18);
    puVar3 = &stack0xffffffffffffff90;
    lVar8 = lStack_88;
    lVar9 = lStack_90;
    uVar13 = uStack_98;
    unaff_x22 = uStack_a0;
    ppppppuVar14 = (undefined8 ******)pppppuStack_80;
    puVar15 = puStack_78;
    goto UnityEngine_Animator__SetBool;
  }
  lVar8 = func_0x00f78af4();
  puStack_a8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetLandForce;
  param_1 = (uint)extraout_d0;
  pppppuStack_b0 = &pppppuStack_80;
  if ((bRam0000000003eb4ee1 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee1 = 1;
  }
  lVar8 = *(long *)(lVar8 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x80);
    unaff_x22 = 0x3eb4000;
    register0x00000008 = (BADSPACEBASE *)&uStack_a0;
    unaff_x20 = 0;
    unaff_x21 = 0x3d20028;
    unaff_x29 = (undefined8 ******)pppppuStack_b0;
    unaff_x30 = puStack_a8;
    goto code_r0x0320d09c;
  }
  auVar16 = func_0x00f78af4();
  unaff_x19 = auVar16._8_8_;
  uStack_110 = 0x3eb4000;
  uStack_108 = 0x3eb4000;
  lStack_100 = 0x3d20028;
  puStack_e8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetGliding;
  uVar13 = 0x3eb4000;
  lStack_f8 = lVar8;
  pppppuStack_f0 = &pppppuStack_b0;
  if ((bRam0000000003eb4ee2 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee2 = 1;
  }
  lVar10 = *(long *)(auVar16._0_8_ + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar10 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x1c);
    puVar3 = &stack0xffffffffffffff20;
    lVar8 = lStack_f8;
    lVar9 = lStack_100;
    uVar13 = uStack_108;
    unaff_x22 = uStack_110;
    ppppppuVar14 = (undefined8 ******)pppppuStack_f0;
    puVar15 = puStack_e8;
    goto UnityEngine_Animator__SetBool;
  }
  lVar8 = func_0x00f78af4();
  uStack_140 = 0x3eb4000;
  uStack_138 = 0x3d20028;
  puStack_118 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerHop;
  lStack_130 = lVar10;
  lStack_128 = unaff_x19;
  pppppuStack_120 = &pppppuStack_f0;
  if ((bRam0000000003eb4ee3 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee3 = 1;
  }
  lVar8 = *(long *)(lVar8 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x14);
    puVar2 = &uStack_110;
    lVar9 = lStack_128;
    lVar10 = lStack_130;
    uVar12 = uStack_138;
    uVar13 = uStack_140;
    ppppppuVar14 = (undefined8 ******)pppppuStack_120;
    puVar15 = puStack_118;
    goto code_r0x0320d82c;
  }
  lVar10 = func_0x00f78af4();
  puVar1 = &uStack_170;
  uStack_170 = 0x3eb4000;
  uStack_168 = 0x3eb4000;
  lStack_160 = 0x3d20028;
  puStack_148 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerHopBoost;
  ppppppuVar14 = &pppppuStack_150;
  lStack_158 = lVar8;
  pppppuStack_150 = &pppppuStack_120;
  if ((bRam0000000003eb4ee4 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee4 = 1;
  }
  lVar8 = *(long *)(lVar10 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x6c);
    puVar2 = &uStack_140;
    lVar9 = lStack_158;
    lVar10 = lStack_160;
    uVar12 = uStack_168;
    uVar13 = uStack_170;
    ppppppuVar14 = (undefined8 ******)pppppuStack_150;
    puVar15 = puStack_148;
    goto code_r0x0320d82c;
  }
  puVar15 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHit;
  auVar17 = func_0x00f78af4();
  lVar10 = auVar17._0_8_;
  if (auVar17._8_4_ != 0) {
    puVar1 = &uStack_1a0;
    uStack_1a0 = 0x3eb4000;
    uStack_198 = 0x3eb4000;
    lStack_190 = 0x3d20028;
    puStack_178 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHit;
    lStack_188 = lVar8;
    pppppuStack_180 = ppppppuVar14;
    if ((bRam0000000003eb4ee6 & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4ee6 = 1;
    }
    lVar8 = *(long *)(lVar10 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar8 != 0) {
      uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x44);
      puVar2 = &uStack_170;
      lVar9 = lStack_188;
      lVar10 = lStack_190;
      uVar12 = uStack_198;
      uVar13 = uStack_1a0;
      ppppppuVar14 = (undefined8 ******)pppppuStack_180;
      puVar15 = puStack_178;
      goto code_r0x0320d82c;
    }
    puVar15 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHitSmall;
    lVar10 = func_0x00f78af4();
    ppppppuVar14 = &pppppuStack_180;
  }
  *(undefined8 *)((long)puVar1 + -0x30) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x28) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x20) = 0x3d20028;
  *(undefined8 *)((long)puVar1 + -0x18) = 0;
  *(undefined8 *******)((long)puVar1 + -0x10) = ppppppuVar14;
  *(undefined **)((long)puVar1 + -8) = puVar15;
  if ((bRam0000000003eb4ee5 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee5 = 1;
  }
  lVar8 = *(long *)(lVar10 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x40);
    ppppppuVar14 = *(undefined8 *******)((long)puVar1 + -0x10);
    puVar15 = *(undefined **)((long)puVar1 + -8);
    lVar10 = *(long *)((long)puVar1 + -0x20);
    lVar9 = *(long *)((long)puVar1 + -0x18);
    uVar13 = *(undefined8 *)((long)puVar1 + -0x30);
    uVar12 = *(undefined8 *)((long)puVar1 + -0x28);
    puVar2 = puVar1;
    goto code_r0x0320d82c;
  }
  lVar8 = func_0x00f78af4();
  *(undefined8 *)((long)puVar1 + -0x60) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x58) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x50) = 0x3d20028;
  *(undefined8 *)((long)puVar1 + -0x48) = 0;
  *(undefined1 **)((long)puVar1 + -0x40) = (undefined1 *)((long)puVar1 + -0x10);
  *(undefined **)((long)puVar1 + -0x38) = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIncoming;
  if ((bRam0000000003eb4ee7 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee7 = 1;
  }
  lVar8 = *(long *)(lVar8 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x48);
    ppppppuVar14 = *(undefined8 *******)((long)puVar1 + -0x40);
    puVar15 = *(undefined **)((long)puVar1 + -0x38);
    lVar10 = *(long *)((long)puVar1 + -0x50);
    lVar9 = *(long *)((long)puVar1 + -0x48);
    puVar2 = (undefined8 *)((long)puVar1 + -0x30);
    uVar13 = *(undefined8 *)((long)puVar1 + -0x60);
    uVar12 = *(undefined8 *)((long)puVar1 + -0x58);
    goto code_r0x0320d82c;
  }
  auVar17 = func_0x00f78af4();
  uVar5 = auVar17._0_8_;
  *(undefined8 *)((long)puVar1 + -0x90) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x88) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x80) = 0x3d20028;
  *(undefined8 *)((long)puVar1 + -0x78) = 0;
  *(undefined1 **)((long)puVar1 + -0x70) = (undefined1 *)((long)puVar1 + -0x40);
  *(undefined **)((long)puVar1 + -0x68) = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerSideSneer
  ;
  uVar6 = uVar5;
  if ((bRam0000000003eb4ee8 & 1) == 0) {
    uVar6 = func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee8 = 1;
  }
  if (auVar17._8_4_ == 1) {
    lVar8 = *(long *)(uVar5 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar8 == 0) goto code_r0x01537eec;
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x50);
  }
  else {
    if (auVar17._8_4_ != 0) {
      return uVar6;
    }
    lVar8 = *(long *)(uVar5 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar8 == 0) {
code_r0x01537eec:
      lVar8 = func_0x00f78af4();
      *(undefined8 *)((long)puVar1 + -0xc0) = 0x3eb4000;
      *(undefined8 *)((long)puVar1 + -0xb8) = 0x3eb4000;
      *(undefined8 *)((long)puVar1 + -0xb0) = 0x3d20028;
      *(undefined8 *)((long)puVar1 + -0xa8) = 0;
      *(undefined1 **)((long)puVar1 + -0xa0) = (undefined1 *)((long)puVar1 + -0x70);
      *(undefined **)((long)puVar1 + -0x98) =
           &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaken;
      if ((bRam0000000003eb4ee9 & 1) == 0) {
        func_0x00f78a20(0x3d20028);
        bRam0000000003eb4ee9 = 1;
      }
      lVar8 = *(long *)(lVar8 + 0x18);
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar8 == 0) {
        lVar8 = func_0x00f78af4();
        *(undefined8 *)((long)puVar1 + -0xf0) = 0x3eb4000;
        *(undefined8 *)((long)puVar1 + -0xe8) = 0x3eb4000;
        *(undefined8 *)((long)puVar1 + -0xe0) = 0x3d20028;
        *(undefined8 *)((long)puVar1 + -0xd8) = 0;
        *(undefined1 **)((long)puVar1 + -0xd0) = (undefined1 *)((long)puVar1 + -0xa0);
        *(undefined **)((long)puVar1 + -200) =
             &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaking;
        uVar12 = 0x3eb4000;
        if ((bRam0000000003eb4eea & 1) == 0) {
          func_0x00f78a20(0x3d20028);
          bRam0000000003eb4eea = 1;
        }
        lVar8 = *(long *)(lVar8 + 0x18);
        if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar8 == 0) {
          unaff_x19 = func_0x00f78af4();
          register0x00000008 = (BADSPACEBASE *)((long)puVar1 + -0x1a0);
          puVar2 = (undefined8 *)((long)puVar1 + -0x1a0);
          *(ulong *)((long)puVar1 + -0x140) = unaff_d9;
          *(ulong *)((long)puVar1 + -0x138) = extraout_d0 & 0xffffffff;
          *(undefined8 *)((long)puVar1 + -0x130) = unaff_x24;
          *(undefined8 *)((long)puVar1 + -0x128) = unaff_x23;
          *(undefined8 *)((long)puVar1 + -0x120) = 0x3eb4000;
          *(undefined8 *)((long)puVar1 + -0x118) = 0x3eb4000;
          *(undefined8 *)((long)puVar1 + -0x110) = 0x3d20028;
          *(undefined8 *)((long)puVar1 + -0x108) = 0;
          *(undefined1 **)((long)puVar1 + -0x100) = (undefined1 *)((long)puVar1 + -0xd0);
          *(undefined **)((long)puVar1 + -0xf8) =
               &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerImpact;
          unaff_x29 = (undefined8 ******)((long)puVar1 + -0x100);
          uVar6 = (ulong)param_2;
          param_1 = (uint)extraout_d0_00;
          unaff_d9 = extraout_d0_00 & 0xffffffff;
          unaff_x20 = 0x3eb4000;
          if ((bRam0000000003eb4eeb & 1) == 0) {
            func_0x00f78a20(0x3d20028);
            bRam0000000003eb4eeb = 1;
          }
          if (*(long *)(unaff_x19 + 0x18) != 0) {
            uVar13 = 0x3d20028;
            unaff_x22 = 0x3d20028;
            /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50((undefined1 *)((long)puVar1 + -0x198),*(long *)(unaff_x19 + 0x18),2,0);
            *(undefined8 *)((long)puVar1 + -0x168) = *(undefined8 *)((long)puVar1 + -400);
            *(undefined8 *)((long)puVar1 + -0x170) = *(undefined8 *)((long)puVar1 + -0x198);
            *(undefined8 *)((long)puVar1 + -0x158) = *(undefined8 *)((long)puVar1 + -0x180);
            *(undefined8 *)((long)puVar1 + -0x160) = *(undefined8 *)((long)puVar1 + -0x188);
            *(undefined4 *)((long)puVar1 + -0x150) = *(undefined4 *)((long)puVar1 + -0x178);
            unaff_x20 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4((undefined1 *)((long)puVar1 + -0x170),0);
            if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if ((int)unaff_x20 == **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8)) {
              return (ulong)((int)unaff_x20 != **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8));
            }
            lVar8 = *(long *)(unaff_x19 + 0x18);
            if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar12 = 0;
            if (lVar8 != 0) {
              uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x60);
              unaff_x30 = &UNK_015380e8;
              unaff_x21 = lVar8;
code_r0x0320d09c:
              *(ulong *)((long)register0x00000008 + -0x40) = unaff_d9;
              *(ulong *)((long)register0x00000008 + -0x38) = uVar6;
              *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
              *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
              *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
              *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
              *(undefined8 *******)((long)register0x00000008 + -0x10) = unaff_x29;
              *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
              if (pcRam0000000003ebe400 == (code *)0x0) {
                pcRam0000000003ebe400 =
                     (code *)func_0x00f789d4(
                                            "UnityEngine.Animator::SetFloatID(System.Int32,System.Single)"
                                            );
              }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar6 = (*pcRam0000000003ebe400)(param_1,lVar8,uVar7);
              return uVar6;
            }
          }
          lVar8 = func_0x00f78af4();
          *(undefined8 *)((long)puVar1 + -0x1d0) = uVar13;
          *(undefined8 *)((long)puVar1 + -0x1c8) = uVar12;
          *(undefined8 *)((long)puVar1 + -0x1c0) = unaff_x20;
          *(long *)((long)puVar1 + -0x1b8) = unaff_x19;
          *(undefined8 *******)((long)puVar1 + -0x1b0) = unaff_x29;
          *(undefined **)((long)puVar1 + -0x1a8) =
               &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerCelebrateSmall;
          if ((bRam0000000003eb4eec & 1) == 0) {
            func_0x00f78a20(0x3d20028);
            bRam0000000003eb4eec = 1;
          }
          lVar8 = *(long *)(lVar8 + 0x18);
          if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (lVar8 == 0) {
            lVar8 = func_0x00f78af4();
            *(ulong *)((long)puVar1 + -0x210) = unaff_d9;
            *(ulong *)((long)puVar1 + -0x208) = uVar6;
            *(undefined8 *)((long)puVar1 + -0x200) = uVar13;
            *(undefined8 *)((long)puVar1 + -0x1f8) = 0x3eb4000;
            *(undefined8 *)((long)puVar1 + -0x1f0) = 0x3d20028;
            *(undefined8 *)((long)puVar1 + -0x1e8) = 0;
            *(undefined1 **)((long)puVar1 + -0x1e0) = (undefined1 *)((long)puVar1 + -0x1b0);
            *(undefined **)((long)puVar1 + -0x1d8) =
                 &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayAnimatorStateOverride;
            *(undefined4 *)((long)puVar1 + -0x220) = 0;
            *(undefined8 *)((long)puVar1 + -0x238) = 0;
            *(undefined8 *)((long)puVar1 + -0x240) = 0;
            *(undefined8 *)((long)puVar1 + -0x228) = 0;
            *(undefined8 *)((long)puVar1 + -0x230) = 0;
            lVar10 = *(long *)(lVar8 + 0x18);
            if (lVar10 != 0) {
              iVar11 = 0;
              do {
                iVar4 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar10,0);
                lVar10 = *(long *)(lVar8 + 0x18);
                if (iVar4 <= iVar11) {
                  if (lVar10 != 0) {
                    iVar11 = 0;
                    goto code_r0x01538278;
                  }
                  break;
                }
                if (lVar10 == 0) break;
                /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50((undefined1 *)((long)puVar1 + -0x268),lVar10,iVar11,0);
                *(undefined8 *)((long)puVar1 + -0x238) = *(undefined8 *)((long)puVar1 + -0x260);
                *(undefined8 *)((long)puVar1 + -0x240) = *(undefined8 *)((long)puVar1 + -0x268);
                *(undefined8 *)((long)puVar1 + -0x228) = *(undefined8 *)((long)puVar1 + -0x250);
                *(undefined8 *)((long)puVar1 + -0x230) = *(undefined8 *)((long)puVar1 + -600);
                *(undefined4 *)((long)puVar1 + -0x220) = *(undefined4 *)((long)puVar1 + -0x248);
                uVar6 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4((undefined1 *)((long)puVar1 + -0x240),0);
                if ((int)uVar6 == (int)extraout_x1) {
                  return uVar6;
                }
                iVar11 = iVar11 + 1;
                lVar10 = *(long *)(lVar8 + 0x18);
              } while (lVar10 != 0);
            }
code_r0x015382cc:
            uVar6 = func_0x00f78af4();
            return uVar6;
          }
          uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x68);
          ppppppuVar14 = *(undefined8 *******)((long)puVar1 + -0x1b0);
          puVar15 = *(undefined **)((long)puVar1 + -0x1a8);
          lVar10 = *(long *)((long)puVar1 + -0x1c0);
          lVar9 = *(long *)((long)puVar1 + -0x1b8);
          uVar13 = *(undefined8 *)((long)puVar1 + -0x1d0);
          uVar12 = *(undefined8 *)((long)puVar1 + -0x1c8);
        }
        else {
          uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x58);
          ppppppuVar14 = *(undefined8 *******)((long)puVar1 + -0xd0);
          puVar15 = *(undefined **)((long)puVar1 + -200);
          lVar10 = *(long *)((long)puVar1 + -0xe0);
          lVar9 = *(long *)((long)puVar1 + -0xd8);
          puVar2 = (undefined8 *)((long)puVar1 + -0xc0);
          uVar13 = *(undefined8 *)((long)puVar1 + -0xf0);
          uVar12 = *(undefined8 *)((long)puVar1 + -0xe8);
        }
      }
      else {
        uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x54);
        ppppppuVar14 = *(undefined8 *******)((long)puVar1 + -0xa0);
        puVar15 = *(undefined **)((long)puVar1 + -0x98);
        lVar10 = *(long *)((long)puVar1 + -0xb0);
        lVar9 = *(long *)((long)puVar1 + -0xa8);
        puVar2 = (undefined8 *)((long)puVar1 + -0x90);
        uVar13 = *(undefined8 *)((long)puVar1 + -0xc0);
        uVar12 = *(undefined8 *)((long)puVar1 + -0xb8);
      }
      goto code_r0x0320d82c;
    }
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x4c);
  }
  ppppppuVar14 = *(undefined8 *******)((long)puVar1 + -0x70);
  puVar15 = *(undefined **)((long)puVar1 + -0x68);
  lVar10 = *(long *)((long)puVar1 + -0x80);
  lVar9 = *(long *)((long)puVar1 + -0x78);
  puVar2 = (undefined8 *)((long)puVar1 + -0x60);
  uVar13 = *(undefined8 *)((long)puVar1 + -0x90);
  uVar12 = *(undefined8 *)((long)puVar1 + -0x88);
code_r0x0320d82c:
  *(undefined8 *)((long)puVar2 + -0x30) = uVar13;
  *(undefined8 *)((long)puVar2 + -0x28) = uVar12;
  *(long *)((long)puVar2 + -0x20) = lVar10;
  *(long *)((long)puVar2 + -0x18) = lVar9;
  *(undefined8 *******)((long)puVar2 + -0x10) = ppppppuVar14;
  *(undefined **)((long)puVar2 + -8) = puVar15;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*pcRam0000000003ebe460)(lVar8,uVar7);
  return uVar6;
  while( true ) {
    iVar11 = iVar11 + 1;
    lVar10 = *(long *)(lVar8 + 0x18);
    if (lVar10 == 0) break;
code_r0x01538278:
    uVar6 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar10,0);
    if ((int)uVar6 <= iVar11) {
      return uVar6;
    }
    if (*(long *)(lVar8 + 0x18) == 0) break;
    iVar4 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(*(long *)(lVar8 + 0x18),iVar11,extraout_x1,0);
    if (iVar4 != 0) {
      if (*(long *)(lVar8 + 0x18) == 0) break;
      /*UnityEngine.Animator$$Play*/ func_0x03210958(extraout_s0,*(long *)(lVar8 + 0x18),extraout_x1,iVar11,0);
    }
  }
  goto code_r0x015382cc;
}



// ============================================================
// RVA: 0x153793c | Atlas.Gameplay.Kart.BaseVisualBehaviour.SetBoosting
// ============================================================

/* WARNING: Possible PIC construction at 0x015380e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01538120: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015380e8) */
/* WARNING: Removing unreachable block (ram,0x015380f0) */
/* WARNING: Removing unreachable block (ram,0x01538110) */

ulong Atlas_Gameplay_Kart_BaseVisualBehaviour__SetBoosting
                (undefined1 param_1 [16],uint param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined8 extraout_x1;
  long unaff_x19;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 unaff_x21;
  undefined8 uVar14;
  undefined8 unaff_x22;
  undefined8 uVar15;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 ******unaff_x29;
  undefined8 ******ppppppuVar16;
  undefined *unaff_x30;
  undefined *puVar17;
  undefined4 extraout_s0;
  ulong extraout_d0;
  ulong extraout_d0_00;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 *****pppppuStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 *****pppppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 *****pppppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 *****pppppuStack_b0;
  undefined *puStack_a8;
  undefined8 *****pppppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 *****pppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4edf & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4edf = 1;
  }
  lVar11 = *(long *)(param_3 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar11 != 0) {
    uVar10 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x20);
    lVar7 = param_4;
UnityEngine_Animator__SetBool:
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *******)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if (pcRam0000000003ebe420 == (code *)0x0) {
      pcRam0000000003ebe420 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (*pcRam0000000003ebe420)(lVar11,uVar10,lVar7);
    return uVar9;
  }
  auVar18 = func_0x00f78af4();
  lVar7 = auVar18._8_8_;
  uStack_60 = 0x3eb4000;
  uStack_58 = 0x3d20028;
  puStack_38 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetInAir;
  lStack_50 = lVar11;
  lStack_48 = param_4;
  pppppuStack_40 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ee0 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee0 = 1;
  }
  lVar11 = *(long *)(auVar18._0_8_ + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar11 != 0) {
    uVar10 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x18);
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = lStack_48;
    unaff_x20 = lStack_50;
    unaff_x21 = uStack_58;
    unaff_x22 = uStack_60;
    unaff_x29 = (undefined8 ******)pppppuStack_40;
    unaff_x30 = puStack_38;
    goto UnityEngine_Animator__SetBool;
  }
  lVar11 = func_0x00f78af4();
  puStack_68 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetLandForce;
  uVar10 = (undefined4)extraout_d0;
  pppppuStack_70 = &pppppuStack_40;
  if ((bRam0000000003eb4ee1 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee1 = 1;
  }
  lVar11 = *(long *)(lVar11 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar11 != 0) {
    uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x80);
    uVar15 = 0x3eb4000;
    puVar4 = &uStack_60;
    uVar12 = 0;
    lVar6 = 0x3d20028;
    ppppppuVar16 = (undefined8 ******)pppppuStack_70;
    puVar17 = puStack_68;
    goto code_r0x0320d09c;
  }
  auVar18 = func_0x00f78af4();
  lVar7 = auVar18._8_8_;
  uStack_d0 = 0x3eb4000;
  uStack_c8 = 0x3eb4000;
  lStack_c0 = 0x3d20028;
  puStack_a8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetGliding;
  uVar15 = 0x3eb4000;
  lStack_b8 = lVar11;
  pppppuStack_b0 = &pppppuStack_70;
  if ((bRam0000000003eb4ee2 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee2 = 1;
  }
  lVar11 = *(long *)(auVar18._0_8_ + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar11 != 0) {
    uVar10 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x1c);
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff60;
    unaff_x19 = lStack_b8;
    unaff_x20 = lStack_c0;
    unaff_x21 = uStack_c8;
    unaff_x22 = uStack_d0;
    unaff_x29 = (undefined8 ******)pppppuStack_b0;
    unaff_x30 = puStack_a8;
    goto UnityEngine_Animator__SetBool;
  }
  lVar6 = func_0x00f78af4();
  uStack_100 = 0x3eb4000;
  uStack_f8 = 0x3d20028;
  puStack_d8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerHop;
  lStack_f0 = lVar11;
  lStack_e8 = lVar7;
  pppppuStack_e0 = &pppppuStack_b0;
  if ((bRam0000000003eb4ee3 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee3 = 1;
  }
  lVar11 = *(long *)(lVar6 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar11 != 0) {
    uVar10 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x14);
    puVar3 = &uStack_d0;
    lVar6 = lStack_e8;
    lVar7 = lStack_f0;
    uVar12 = uStack_f8;
    uVar15 = uStack_100;
    ppppppuVar16 = (undefined8 ******)pppppuStack_e0;
    puVar17 = puStack_d8;
    goto code_r0x0320d82c;
  }
  lVar7 = func_0x00f78af4();
  puVar2 = &uStack_130;
  uStack_130 = 0x3eb4000;
  uStack_128 = 0x3eb4000;
  lStack_120 = 0x3d20028;
  puStack_108 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerHopBoost;
  ppppppuVar16 = &pppppuStack_110;
  lStack_118 = lVar11;
  pppppuStack_110 = &pppppuStack_e0;
  if ((bRam0000000003eb4ee4 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee4 = 1;
  }
  lVar11 = *(long *)(lVar7 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar11 != 0) {
    uVar10 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x6c);
    puVar3 = &uStack_100;
    lVar6 = lStack_118;
    lVar7 = lStack_120;
    uVar12 = uStack_128;
    uVar15 = uStack_130;
    ppppppuVar16 = (undefined8 ******)pppppuStack_110;
    puVar17 = puStack_108;
    goto code_r0x0320d82c;
  }
  puVar17 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHit;
  auVar19 = func_0x00f78af4();
  lVar7 = auVar19._0_8_;
  if (auVar19._8_4_ != 0) {
    puVar2 = &uStack_160;
    uStack_160 = 0x3eb4000;
    uStack_158 = 0x3eb4000;
    lStack_150 = 0x3d20028;
    puStack_138 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHit;
    lStack_148 = lVar11;
    pppppuStack_140 = ppppppuVar16;
    if ((bRam0000000003eb4ee6 & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4ee6 = 1;
    }
    lVar11 = *(long *)(lVar7 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar11 != 0) {
      uVar10 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x44);
      puVar3 = &uStack_130;
      lVar6 = lStack_148;
      lVar7 = lStack_150;
      uVar12 = uStack_158;
      uVar15 = uStack_160;
      ppppppuVar16 = (undefined8 ******)pppppuStack_140;
      puVar17 = puStack_138;
      goto code_r0x0320d82c;
    }
    puVar17 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHitSmall;
    lVar7 = func_0x00f78af4();
    ppppppuVar16 = &pppppuStack_140;
  }
  *(undefined8 *)((long)puVar2 + -0x30) = 0x3eb4000;
  *(undefined8 *)((long)puVar2 + -0x28) = 0x3eb4000;
  *(undefined8 *)((long)puVar2 + -0x20) = 0x3d20028;
  *(undefined8 *)((long)puVar2 + -0x18) = 0;
  *(undefined8 *******)((long)puVar2 + -0x10) = ppppppuVar16;
  *(undefined **)((long)puVar2 + -8) = puVar17;
  if ((bRam0000000003eb4ee5 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee5 = 1;
  }
  lVar11 = *(long *)(lVar7 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar11 != 0) {
    uVar10 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x40);
    ppppppuVar16 = *(undefined8 *******)((long)puVar2 + -0x10);
    puVar17 = *(undefined **)((long)puVar2 + -8);
    lVar7 = *(long *)((long)puVar2 + -0x20);
    lVar6 = *(long *)((long)puVar2 + -0x18);
    uVar15 = *(undefined8 *)((long)puVar2 + -0x30);
    uVar12 = *(undefined8 *)((long)puVar2 + -0x28);
    puVar3 = puVar2;
    goto code_r0x0320d82c;
  }
  lVar11 = func_0x00f78af4();
  *(undefined8 *)((long)puVar2 + -0x60) = 0x3eb4000;
  *(undefined8 *)((long)puVar2 + -0x58) = 0x3eb4000;
  *(undefined8 *)((long)puVar2 + -0x50) = 0x3d20028;
  *(undefined8 *)((long)puVar2 + -0x48) = 0;
  *(undefined1 **)((long)puVar2 + -0x40) = (undefined1 *)((long)puVar2 + -0x10);
  *(undefined **)((long)puVar2 + -0x38) = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIncoming;
  if ((bRam0000000003eb4ee7 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee7 = 1;
  }
  lVar11 = *(long *)(lVar11 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar11 != 0) {
    uVar10 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x48);
    ppppppuVar16 = *(undefined8 *******)((long)puVar2 + -0x40);
    puVar17 = *(undefined **)((long)puVar2 + -0x38);
    lVar7 = *(long *)((long)puVar2 + -0x50);
    lVar6 = *(long *)((long)puVar2 + -0x48);
    puVar3 = (undefined8 *)((long)puVar2 + -0x30);
    uVar15 = *(undefined8 *)((long)puVar2 + -0x60);
    uVar12 = *(undefined8 *)((long)puVar2 + -0x58);
    goto code_r0x0320d82c;
  }
  auVar19 = func_0x00f78af4();
  uVar8 = auVar19._0_8_;
  *(undefined8 *)((long)puVar2 + -0x90) = 0x3eb4000;
  *(undefined8 *)((long)puVar2 + -0x88) = 0x3eb4000;
  *(undefined8 *)((long)puVar2 + -0x80) = 0x3d20028;
  *(undefined8 *)((long)puVar2 + -0x78) = 0;
  *(undefined1 **)((long)puVar2 + -0x70) = (undefined1 *)((long)puVar2 + -0x40);
  *(undefined **)((long)puVar2 + -0x68) = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerSideSneer
  ;
  uVar9 = uVar8;
  if ((bRam0000000003eb4ee8 & 1) == 0) {
    uVar9 = func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee8 = 1;
  }
  if (auVar19._8_4_ == 1) {
    lVar11 = *(long *)(uVar8 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar11 == 0) goto code_r0x01537eec;
    uVar10 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x50);
  }
  else {
    if (auVar19._8_4_ != 0) {
      return uVar9;
    }
    lVar11 = *(long *)(uVar8 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar11 == 0) {
code_r0x01537eec:
      lVar11 = func_0x00f78af4();
      *(undefined8 *)((long)puVar2 + -0xc0) = 0x3eb4000;
      *(undefined8 *)((long)puVar2 + -0xb8) = 0x3eb4000;
      *(undefined8 *)((long)puVar2 + -0xb0) = 0x3d20028;
      *(undefined8 *)((long)puVar2 + -0xa8) = 0;
      *(undefined1 **)((long)puVar2 + -0xa0) = (undefined1 *)((long)puVar2 + -0x70);
      *(undefined **)((long)puVar2 + -0x98) =
           &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaken;
      if ((bRam0000000003eb4ee9 & 1) == 0) {
        func_0x00f78a20(0x3d20028);
        bRam0000000003eb4ee9 = 1;
      }
      lVar11 = *(long *)(lVar11 + 0x18);
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar11 == 0) {
        lVar11 = func_0x00f78af4();
        *(undefined8 *)((long)puVar2 + -0xf0) = 0x3eb4000;
        *(undefined8 *)((long)puVar2 + -0xe8) = 0x3eb4000;
        *(undefined8 *)((long)puVar2 + -0xe0) = 0x3d20028;
        *(undefined8 *)((long)puVar2 + -0xd8) = 0;
        *(undefined1 **)((long)puVar2 + -0xd0) = (undefined1 *)((long)puVar2 + -0xa0);
        *(undefined **)((long)puVar2 + -200) =
             &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaking;
        uVar14 = 0x3eb4000;
        if ((bRam0000000003eb4eea & 1) == 0) {
          func_0x00f78a20(0x3d20028);
          bRam0000000003eb4eea = 1;
        }
        lVar11 = *(long *)(lVar11 + 0x18);
        if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar11 == 0) {
          lVar7 = func_0x00f78af4();
          puVar4 = (undefined8 *)((long)puVar2 + -0x1a0);
          puVar3 = (undefined8 *)((long)puVar2 + -0x1a0);
          *(ulong *)((long)puVar2 + -0x140) = unaff_d9;
          *(ulong *)((long)puVar2 + -0x138) = extraout_d0 & 0xffffffff;
          *(undefined8 *)((long)puVar2 + -0x130) = unaff_x24;
          *(undefined8 *)((long)puVar2 + -0x128) = unaff_x23;
          *(undefined8 *)((long)puVar2 + -0x120) = 0x3eb4000;
          *(undefined8 *)((long)puVar2 + -0x118) = 0x3eb4000;
          *(undefined8 *)((long)puVar2 + -0x110) = 0x3d20028;
          *(undefined8 *)((long)puVar2 + -0x108) = 0;
          *(undefined1 **)((long)puVar2 + -0x100) = (undefined1 *)((long)puVar2 + -0xd0);
          *(undefined **)((long)puVar2 + -0xf8) =
               &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerImpact;
          ppppppuVar16 = (undefined8 ******)((long)puVar2 + -0x100);
          unaff_d8 = (ulong)param_2;
          uVar10 = (undefined4)extraout_d0_00;
          unaff_d9 = extraout_d0_00 & 0xffffffff;
          uVar12 = 0x3eb4000;
          if ((bRam0000000003eb4eeb & 1) == 0) {
            func_0x00f78a20(0x3d20028);
            bRam0000000003eb4eeb = 1;
          }
          if (*(long *)(lVar7 + 0x18) != 0) {
            uVar15 = 0x3d20028;
            /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50((undefined1 *)((long)puVar2 + -0x198),*(long *)(lVar7 + 0x18),2,0);
            *(undefined8 *)((long)puVar2 + -0x168) = *(undefined8 *)((long)puVar2 + -400);
            *(undefined8 *)((long)puVar2 + -0x170) = *(undefined8 *)((long)puVar2 + -0x198);
            *(undefined8 *)((long)puVar2 + -0x158) = *(undefined8 *)((long)puVar2 + -0x180);
            *(undefined8 *)((long)puVar2 + -0x160) = *(undefined8 *)((long)puVar2 + -0x188);
            *(undefined4 *)((long)puVar2 + -0x150) = *(undefined4 *)((long)puVar2 + -0x178);
            uVar12 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4((undefined1 *)((long)puVar2 + -0x170),0);
            if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if ((int)uVar12 == **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8)) {
              return (ulong)((int)uVar12 != **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8));
            }
            lVar11 = *(long *)(lVar7 + 0x18);
            if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar14 = 0;
            if (lVar11 != 0) {
              uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x60);
              puVar17 = &UNK_015380e8;
              lVar6 = lVar11;
code_r0x0320d09c:
              *(ulong *)((long)puVar4 + -0x40) = unaff_d9;
              *(ulong *)((long)puVar4 + -0x38) = unaff_d8;
              *(undefined8 *)((long)puVar4 + -0x30) = uVar15;
              *(long *)((long)puVar4 + -0x28) = lVar6;
              *(undefined8 *)((long)puVar4 + -0x20) = uVar12;
              *(long *)((long)puVar4 + -0x18) = lVar7;
              *(undefined8 *******)((long)puVar4 + -0x10) = ppppppuVar16;
              *(undefined **)((long)puVar4 + -8) = puVar17;
              if (pcRam0000000003ebe400 == (code *)0x0) {
                pcRam0000000003ebe400 =
                     (code *)func_0x00f789d4(
                                            "UnityEngine.Animator::SetFloatID(System.Int32,System.Single)"
                                            );
              }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar9 = (*pcRam0000000003ebe400)(uVar10,lVar11,uVar1);
              return uVar9;
            }
          }
          lVar11 = func_0x00f78af4();
          *(undefined8 *)((long)puVar2 + -0x1d0) = uVar15;
          *(undefined8 *)((long)puVar2 + -0x1c8) = uVar14;
          *(undefined8 *)((long)puVar2 + -0x1c0) = uVar12;
          *(long *)((long)puVar2 + -0x1b8) = lVar7;
          *(undefined8 *******)((long)puVar2 + -0x1b0) = ppppppuVar16;
          *(undefined **)((long)puVar2 + -0x1a8) =
               &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerCelebrateSmall;
          if ((bRam0000000003eb4eec & 1) == 0) {
            func_0x00f78a20(0x3d20028);
            bRam0000000003eb4eec = 1;
          }
          lVar11 = *(long *)(lVar11 + 0x18);
          if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (lVar11 == 0) {
            lVar11 = func_0x00f78af4();
            *(ulong *)((long)puVar2 + -0x210) = unaff_d9;
            *(ulong *)((long)puVar2 + -0x208) = unaff_d8;
            *(undefined8 *)((long)puVar2 + -0x200) = uVar15;
            *(undefined8 *)((long)puVar2 + -0x1f8) = 0x3eb4000;
            *(undefined8 *)((long)puVar2 + -0x1f0) = 0x3d20028;
            *(undefined8 *)((long)puVar2 + -0x1e8) = 0;
            *(undefined1 **)((long)puVar2 + -0x1e0) = (undefined1 *)((long)puVar2 + -0x1b0);
            *(undefined **)((long)puVar2 + -0x1d8) =
                 &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayAnimatorStateOverride;
            *(undefined4 *)((long)puVar2 + -0x220) = 0;
            *(undefined8 *)((long)puVar2 + -0x238) = 0;
            *(undefined8 *)((long)puVar2 + -0x240) = 0;
            *(undefined8 *)((long)puVar2 + -0x228) = 0;
            *(undefined8 *)((long)puVar2 + -0x230) = 0;
            lVar7 = *(long *)(lVar11 + 0x18);
            if (lVar7 != 0) {
              iVar13 = 0;
              do {
                iVar5 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar7,0);
                lVar7 = *(long *)(lVar11 + 0x18);
                if (iVar5 <= iVar13) {
                  if (lVar7 != 0) {
                    iVar13 = 0;
                    goto code_r0x01538278;
                  }
                  break;
                }
                if (lVar7 == 0) break;
                /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50((undefined1 *)((long)puVar2 + -0x268),lVar7,iVar13,0);
                *(undefined8 *)((long)puVar2 + -0x238) = *(undefined8 *)((long)puVar2 + -0x260);
                *(undefined8 *)((long)puVar2 + -0x240) = *(undefined8 *)((long)puVar2 + -0x268);
                *(undefined8 *)((long)puVar2 + -0x228) = *(undefined8 *)((long)puVar2 + -0x250);
                *(undefined8 *)((long)puVar2 + -0x230) = *(undefined8 *)((long)puVar2 + -600);
                *(undefined4 *)((long)puVar2 + -0x220) = *(undefined4 *)((long)puVar2 + -0x248);
                uVar9 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4((undefined1 *)((long)puVar2 + -0x240),0);
                if ((int)uVar9 == (int)extraout_x1) {
                  return uVar9;
                }
                iVar13 = iVar13 + 1;
                lVar7 = *(long *)(lVar11 + 0x18);
              } while (lVar7 != 0);
            }
code_r0x015382cc:
            uVar9 = func_0x00f78af4();
            return uVar9;
          }
          uVar10 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x68);
          ppppppuVar16 = *(undefined8 *******)((long)puVar2 + -0x1b0);
          puVar17 = *(undefined **)((long)puVar2 + -0x1a8);
          lVar7 = *(long *)((long)puVar2 + -0x1c0);
          lVar6 = *(long *)((long)puVar2 + -0x1b8);
          uVar15 = *(undefined8 *)((long)puVar2 + -0x1d0);
          uVar12 = *(undefined8 *)((long)puVar2 + -0x1c8);
        }
        else {
          uVar10 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x58);
          ppppppuVar16 = *(undefined8 *******)((long)puVar2 + -0xd0);
          puVar17 = *(undefined **)((long)puVar2 + -200);
          lVar7 = *(long *)((long)puVar2 + -0xe0);
          lVar6 = *(long *)((long)puVar2 + -0xd8);
          puVar3 = (undefined8 *)((long)puVar2 + -0xc0);
          uVar15 = *(undefined8 *)((long)puVar2 + -0xf0);
          uVar12 = *(undefined8 *)((long)puVar2 + -0xe8);
        }
      }
      else {
        uVar10 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x54);
        ppppppuVar16 = *(undefined8 *******)((long)puVar2 + -0xa0);
        puVar17 = *(undefined **)((long)puVar2 + -0x98);
        lVar7 = *(long *)((long)puVar2 + -0xb0);
        lVar6 = *(long *)((long)puVar2 + -0xa8);
        puVar3 = (undefined8 *)((long)puVar2 + -0x90);
        uVar15 = *(undefined8 *)((long)puVar2 + -0xc0);
        uVar12 = *(undefined8 *)((long)puVar2 + -0xb8);
      }
      goto code_r0x0320d82c;
    }
    uVar10 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x4c);
  }
  ppppppuVar16 = *(undefined8 *******)((long)puVar2 + -0x70);
  puVar17 = *(undefined **)((long)puVar2 + -0x68);
  lVar7 = *(long *)((long)puVar2 + -0x80);
  lVar6 = *(long *)((long)puVar2 + -0x78);
  puVar3 = (undefined8 *)((long)puVar2 + -0x60);
  uVar15 = *(undefined8 *)((long)puVar2 + -0x90);
  uVar12 = *(undefined8 *)((long)puVar2 + -0x88);
code_r0x0320d82c:
  *(undefined8 *)((long)puVar3 + -0x30) = uVar15;
  *(undefined8 *)((long)puVar3 + -0x28) = uVar12;
  *(long *)((long)puVar3 + -0x20) = lVar7;
  *(long *)((long)puVar3 + -0x18) = lVar6;
  *(undefined8 *******)((long)puVar3 + -0x10) = ppppppuVar16;
  *(undefined **)((long)puVar3 + -8) = puVar17;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar9 = (*pcRam0000000003ebe460)(lVar11,uVar10);
  return uVar9;
  while( true ) {
    iVar13 = iVar13 + 1;
    lVar7 = *(long *)(lVar11 + 0x18);
    if (lVar7 == 0) break;
code_r0x01538278:
    uVar9 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar7,0);
    if ((int)uVar9 <= iVar13) {
      return uVar9;
    }
    if (*(long *)(lVar11 + 0x18) == 0) break;
    iVar5 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(*(long *)(lVar11 + 0x18),iVar13,extraout_x1,0);
    if (iVar5 != 0) {
      if (*(long *)(lVar11 + 0x18) == 0) break;
      /*UnityEngine.Animator$$Play*/ func_0x03210958(extraout_s0,*(long *)(lVar11 + 0x18),extraout_x1,iVar13,0);
    }
  }
  goto code_r0x015382cc;
}



// ============================================================
// RVA: 0x15379c8 | Atlas.Gameplay.Kart.BaseVisualBehaviour.SetInAir
// ============================================================

/* WARNING: Possible PIC construction at 0x015380e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01538120: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015380e8) */
/* WARNING: Removing unreachable block (ram,0x015380f0) */
/* WARNING: Removing unreachable block (ram,0x01538110) */

ulong Atlas_Gameplay_Kart_BaseVisualBehaviour__SetInAir
                (undefined1 param_1 [16],uint param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined8 extraout_x1;
  long unaff_x19;
  long lVar10;
  undefined8 unaff_x20;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 unaff_x21;
  undefined8 uVar14;
  undefined8 unaff_x22;
  undefined8 uVar15;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 *****unaff_x29;
  undefined8 ***pppuVar16;
  undefined8 ******ppppppuVar17;
  undefined *unaff_x30;
  undefined *puVar18;
  undefined4 extraout_s0;
  ulong extraout_d0;
  ulong extraout_d0_00;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 *****pppppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 *****pppppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 *****pppppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 ****ppppuStack_80;
  undefined *puStack_78;
  undefined8 ***pppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4ee0 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee0 = 1;
  }
  lVar11 = *(long *)(param_3 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar11 != 0) {
    uVar9 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x18);
UnityEngine_Animator__SetBool:
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 ******)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if (pcRam0000000003ebe420 == (code *)0x0) {
      pcRam0000000003ebe420 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (*pcRam0000000003ebe420)(lVar11,uVar9,param_4);
    return uVar8;
  }
  lVar11 = func_0x00f78af4();
  puStack_38 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetLandForce;
  uVar9 = (undefined4)extraout_d0;
  pppuStack_40 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ee1 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee1 = 1;
  }
  lVar11 = *(long *)(lVar11 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar11 != 0) {
    uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x80);
    uVar15 = 0x3eb4000;
    puVar4 = &stack0xffffffffffffffd0;
    uVar12 = 0;
    lVar6 = 0x3d20028;
    pppuVar16 = pppuStack_40;
    puVar18 = puStack_38;
    goto code_r0x0320d09c;
  }
  auVar19 = func_0x00f78af4();
  param_4 = auVar19._8_8_;
  uStack_a0 = 0x3eb4000;
  uStack_98 = 0x3eb4000;
  uStack_90 = 0x3d20028;
  puStack_78 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetGliding;
  uVar15 = 0x3eb4000;
  lStack_88 = lVar11;
  ppppuStack_80 = &pppuStack_40;
  if ((bRam0000000003eb4ee2 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee2 = 1;
  }
  lVar11 = *(long *)(auVar19._0_8_ + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar11 != 0) {
    uVar9 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x1c);
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff90;
    unaff_x19 = lStack_88;
    unaff_x20 = uStack_90;
    unaff_x21 = uStack_98;
    unaff_x22 = uStack_a0;
    unaff_x29 = (undefined8 *****)ppppuStack_80;
    unaff_x30 = puStack_78;
    goto UnityEngine_Animator__SetBool;
  }
  lVar6 = func_0x00f78af4();
  uStack_d0 = 0x3eb4000;
  uStack_c8 = 0x3d20028;
  puStack_a8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerHop;
  lStack_c0 = lVar11;
  lStack_b8 = param_4;
  pppppuStack_b0 = &ppppuStack_80;
  if ((bRam0000000003eb4ee3 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee3 = 1;
  }
  lVar11 = *(long *)(lVar6 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar11 != 0) {
    uVar9 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x14);
    puVar3 = &uStack_a0;
    lVar10 = lStack_b8;
    lVar6 = lStack_c0;
    uVar12 = uStack_c8;
    uVar15 = uStack_d0;
    ppppppuVar17 = (undefined8 ******)pppppuStack_b0;
    puVar18 = puStack_a8;
    goto code_r0x0320d82c;
  }
  lVar6 = func_0x00f78af4();
  puVar2 = &uStack_100;
  uStack_100 = 0x3eb4000;
  uStack_f8 = 0x3eb4000;
  lStack_f0 = 0x3d20028;
  puStack_d8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerHopBoost;
  ppppppuVar17 = &pppppuStack_e0;
  lStack_e8 = lVar11;
  pppppuStack_e0 = &pppppuStack_b0;
  if ((bRam0000000003eb4ee4 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee4 = 1;
  }
  lVar11 = *(long *)(lVar6 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar11 != 0) {
    uVar9 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x6c);
    puVar3 = &uStack_d0;
    lVar10 = lStack_e8;
    lVar6 = lStack_f0;
    uVar12 = uStack_f8;
    uVar15 = uStack_100;
    ppppppuVar17 = (undefined8 ******)pppppuStack_e0;
    puVar18 = puStack_d8;
    goto code_r0x0320d82c;
  }
  puVar18 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHit;
  auVar20 = func_0x00f78af4();
  lVar6 = auVar20._0_8_;
  if (auVar20._8_4_ != 0) {
    puVar2 = &uStack_130;
    uStack_130 = 0x3eb4000;
    uStack_128 = 0x3eb4000;
    lStack_120 = 0x3d20028;
    puStack_108 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHit;
    lStack_118 = lVar11;
    pppppuStack_110 = ppppppuVar17;
    if ((bRam0000000003eb4ee6 & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4ee6 = 1;
    }
    lVar11 = *(long *)(lVar6 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar11 != 0) {
      uVar9 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x44);
      puVar3 = &uStack_100;
      lVar10 = lStack_118;
      lVar6 = lStack_120;
      uVar12 = uStack_128;
      uVar15 = uStack_130;
      ppppppuVar17 = (undefined8 ******)pppppuStack_110;
      puVar18 = puStack_108;
      goto code_r0x0320d82c;
    }
    puVar18 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHitSmall;
    lVar6 = func_0x00f78af4();
    ppppppuVar17 = &pppppuStack_110;
  }
  *(undefined8 *)((long)puVar2 + -0x30) = 0x3eb4000;
  *(undefined8 *)((long)puVar2 + -0x28) = 0x3eb4000;
  *(undefined8 *)((long)puVar2 + -0x20) = 0x3d20028;
  *(undefined8 *)((long)puVar2 + -0x18) = 0;
  *(undefined8 *******)((long)puVar2 + -0x10) = ppppppuVar17;
  *(undefined **)((long)puVar2 + -8) = puVar18;
  if ((bRam0000000003eb4ee5 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee5 = 1;
  }
  lVar11 = *(long *)(lVar6 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar11 != 0) {
    uVar9 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x40);
    ppppppuVar17 = *(undefined8 *******)((long)puVar2 + -0x10);
    puVar18 = *(undefined **)((long)puVar2 + -8);
    lVar6 = *(long *)((long)puVar2 + -0x20);
    lVar10 = *(long *)((long)puVar2 + -0x18);
    uVar15 = *(undefined8 *)((long)puVar2 + -0x30);
    uVar12 = *(undefined8 *)((long)puVar2 + -0x28);
    puVar3 = puVar2;
    goto code_r0x0320d82c;
  }
  lVar11 = func_0x00f78af4();
  *(undefined8 *)((long)puVar2 + -0x60) = 0x3eb4000;
  *(undefined8 *)((long)puVar2 + -0x58) = 0x3eb4000;
  *(undefined8 *)((long)puVar2 + -0x50) = 0x3d20028;
  *(undefined8 *)((long)puVar2 + -0x48) = 0;
  *(undefined1 **)((long)puVar2 + -0x40) = (undefined1 *)((long)puVar2 + -0x10);
  *(undefined **)((long)puVar2 + -0x38) = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIncoming;
  if ((bRam0000000003eb4ee7 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee7 = 1;
  }
  lVar11 = *(long *)(lVar11 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar11 != 0) {
    uVar9 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x48);
    ppppppuVar17 = *(undefined8 *******)((long)puVar2 + -0x40);
    puVar18 = *(undefined **)((long)puVar2 + -0x38);
    lVar6 = *(long *)((long)puVar2 + -0x50);
    lVar10 = *(long *)((long)puVar2 + -0x48);
    puVar3 = (undefined8 *)((long)puVar2 + -0x30);
    uVar15 = *(undefined8 *)((long)puVar2 + -0x60);
    uVar12 = *(undefined8 *)((long)puVar2 + -0x58);
    goto code_r0x0320d82c;
  }
  auVar20 = func_0x00f78af4();
  uVar7 = auVar20._0_8_;
  *(undefined8 *)((long)puVar2 + -0x90) = 0x3eb4000;
  *(undefined8 *)((long)puVar2 + -0x88) = 0x3eb4000;
  *(undefined8 *)((long)puVar2 + -0x80) = 0x3d20028;
  *(undefined8 *)((long)puVar2 + -0x78) = 0;
  *(undefined1 **)((long)puVar2 + -0x70) = (undefined1 *)((long)puVar2 + -0x40);
  *(undefined **)((long)puVar2 + -0x68) = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerSideSneer
  ;
  uVar8 = uVar7;
  if ((bRam0000000003eb4ee8 & 1) == 0) {
    uVar8 = func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee8 = 1;
  }
  if (auVar20._8_4_ == 1) {
    lVar11 = *(long *)(uVar7 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar11 == 0) goto code_r0x01537eec;
    uVar9 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x50);
  }
  else {
    if (auVar20._8_4_ != 0) {
      return uVar8;
    }
    lVar11 = *(long *)(uVar7 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar11 == 0) {
code_r0x01537eec:
      lVar11 = func_0x00f78af4();
      *(undefined8 *)((long)puVar2 + -0xc0) = 0x3eb4000;
      *(undefined8 *)((long)puVar2 + -0xb8) = 0x3eb4000;
      *(undefined8 *)((long)puVar2 + -0xb0) = 0x3d20028;
      *(undefined8 *)((long)puVar2 + -0xa8) = 0;
      *(undefined1 **)((long)puVar2 + -0xa0) = (undefined1 *)((long)puVar2 + -0x70);
      *(undefined **)((long)puVar2 + -0x98) =
           &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaken;
      if ((bRam0000000003eb4ee9 & 1) == 0) {
        func_0x00f78a20(0x3d20028);
        bRam0000000003eb4ee9 = 1;
      }
      lVar11 = *(long *)(lVar11 + 0x18);
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar11 == 0) {
        lVar11 = func_0x00f78af4();
        *(undefined8 *)((long)puVar2 + -0xf0) = 0x3eb4000;
        *(undefined8 *)((long)puVar2 + -0xe8) = 0x3eb4000;
        *(undefined8 *)((long)puVar2 + -0xe0) = 0x3d20028;
        *(undefined8 *)((long)puVar2 + -0xd8) = 0;
        *(undefined1 **)((long)puVar2 + -0xd0) = (undefined1 *)((long)puVar2 + -0xa0);
        *(undefined **)((long)puVar2 + -200) =
             &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaking;
        uVar14 = 0x3eb4000;
        if ((bRam0000000003eb4eea & 1) == 0) {
          func_0x00f78a20(0x3d20028);
          bRam0000000003eb4eea = 1;
        }
        lVar11 = *(long *)(lVar11 + 0x18);
        if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar11 == 0) {
          param_4 = func_0x00f78af4();
          puVar4 = (undefined1 *)((long)puVar2 + -0x1a0);
          puVar3 = (undefined8 *)((long)puVar2 + -0x1a0);
          *(ulong *)((long)puVar2 + -0x140) = unaff_d9;
          *(ulong *)((long)puVar2 + -0x138) = extraout_d0 & 0xffffffff;
          *(undefined8 *)((long)puVar2 + -0x130) = unaff_x24;
          *(undefined8 *)((long)puVar2 + -0x128) = unaff_x23;
          *(undefined8 *)((long)puVar2 + -0x120) = 0x3eb4000;
          *(undefined8 *)((long)puVar2 + -0x118) = 0x3eb4000;
          *(undefined8 *)((long)puVar2 + -0x110) = 0x3d20028;
          *(undefined8 *)((long)puVar2 + -0x108) = 0;
          *(undefined1 **)((long)puVar2 + -0x100) = (undefined1 *)((long)puVar2 + -0xd0);
          *(undefined **)((long)puVar2 + -0xf8) =
               &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerImpact;
          pppuVar16 = (undefined8 ***)((long)puVar2 + -0x100);
          unaff_d8 = (ulong)param_2;
          uVar9 = (undefined4)extraout_d0_00;
          unaff_d9 = extraout_d0_00 & 0xffffffff;
          uVar12 = 0x3eb4000;
          if ((bRam0000000003eb4eeb & 1) == 0) {
            func_0x00f78a20(0x3d20028);
            bRam0000000003eb4eeb = 1;
          }
          if (*(long *)(param_4 + 0x18) != 0) {
            uVar15 = 0x3d20028;
            /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50((undefined1 *)((long)puVar2 + -0x198),*(long *)(param_4 + 0x18),2,0);
            *(undefined8 *)((long)puVar2 + -0x168) = *(undefined8 *)((long)puVar2 + -400);
            *(undefined8 *)((long)puVar2 + -0x170) = *(undefined8 *)((long)puVar2 + -0x198);
            *(undefined8 *)((long)puVar2 + -0x158) = *(undefined8 *)((long)puVar2 + -0x180);
            *(undefined8 *)((long)puVar2 + -0x160) = *(undefined8 *)((long)puVar2 + -0x188);
            *(undefined4 *)((long)puVar2 + -0x150) = *(undefined4 *)((long)puVar2 + -0x178);
            uVar12 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4((undefined1 *)((long)puVar2 + -0x170),0);
            if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if ((int)uVar12 == **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8)) {
              return (ulong)((int)uVar12 != **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8));
            }
            lVar11 = *(long *)(param_4 + 0x18);
            if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar14 = 0;
            if (lVar11 != 0) {
              uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x60);
              puVar18 = &UNK_015380e8;
              lVar6 = lVar11;
code_r0x0320d09c:
              *(ulong *)(puVar4 + -0x40) = unaff_d9;
              *(ulong *)(puVar4 + -0x38) = unaff_d8;
              *(undefined8 *)(puVar4 + -0x30) = uVar15;
              *(long *)(puVar4 + -0x28) = lVar6;
              *(undefined8 *)(puVar4 + -0x20) = uVar12;
              *(long *)(puVar4 + -0x18) = param_4;
              *(undefined8 ****)(puVar4 + -0x10) = pppuVar16;
              *(undefined **)(puVar4 + -8) = puVar18;
              if (pcRam0000000003ebe400 == (code *)0x0) {
                pcRam0000000003ebe400 =
                     (code *)func_0x00f789d4(
                                            "UnityEngine.Animator::SetFloatID(System.Int32,System.Single)"
                                            );
              }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar8 = (*pcRam0000000003ebe400)(uVar9,lVar11,uVar1);
              return uVar8;
            }
          }
          lVar11 = func_0x00f78af4();
          *(undefined8 *)((long)puVar2 + -0x1d0) = uVar15;
          *(undefined8 *)((long)puVar2 + -0x1c8) = uVar14;
          *(undefined8 *)((long)puVar2 + -0x1c0) = uVar12;
          *(long *)((long)puVar2 + -0x1b8) = param_4;
          *(undefined8 ****)((long)puVar2 + -0x1b0) = pppuVar16;
          *(undefined **)((long)puVar2 + -0x1a8) =
               &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerCelebrateSmall;
          if ((bRam0000000003eb4eec & 1) == 0) {
            func_0x00f78a20(0x3d20028);
            bRam0000000003eb4eec = 1;
          }
          lVar11 = *(long *)(lVar11 + 0x18);
          if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (lVar11 == 0) {
            lVar11 = func_0x00f78af4();
            *(ulong *)((long)puVar2 + -0x210) = unaff_d9;
            *(ulong *)((long)puVar2 + -0x208) = unaff_d8;
            *(undefined8 *)((long)puVar2 + -0x200) = uVar15;
            *(undefined8 *)((long)puVar2 + -0x1f8) = 0x3eb4000;
            *(undefined8 *)((long)puVar2 + -0x1f0) = 0x3d20028;
            *(undefined8 *)((long)puVar2 + -0x1e8) = 0;
            *(undefined1 **)((long)puVar2 + -0x1e0) = (undefined1 *)((long)puVar2 + -0x1b0);
            *(undefined **)((long)puVar2 + -0x1d8) =
                 &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayAnimatorStateOverride;
            *(undefined4 *)((long)puVar2 + -0x220) = 0;
            *(undefined8 *)((long)puVar2 + -0x238) = 0;
            *(undefined8 *)((long)puVar2 + -0x240) = 0;
            *(undefined8 *)((long)puVar2 + -0x228) = 0;
            *(undefined8 *)((long)puVar2 + -0x230) = 0;
            lVar6 = *(long *)(lVar11 + 0x18);
            if (lVar6 != 0) {
              iVar13 = 0;
              do {
                iVar5 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar6,0);
                lVar6 = *(long *)(lVar11 + 0x18);
                if (iVar5 <= iVar13) {
                  if (lVar6 != 0) {
                    iVar13 = 0;
                    goto code_r0x01538278;
                  }
                  break;
                }
                if (lVar6 == 0) break;
                /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50((undefined1 *)((long)puVar2 + -0x268),lVar6,iVar13,0);
                *(undefined8 *)((long)puVar2 + -0x238) = *(undefined8 *)((long)puVar2 + -0x260);
                *(undefined8 *)((long)puVar2 + -0x240) = *(undefined8 *)((long)puVar2 + -0x268);
                *(undefined8 *)((long)puVar2 + -0x228) = *(undefined8 *)((long)puVar2 + -0x250);
                *(undefined8 *)((long)puVar2 + -0x230) = *(undefined8 *)((long)puVar2 + -600);
                *(undefined4 *)((long)puVar2 + -0x220) = *(undefined4 *)((long)puVar2 + -0x248);
                uVar8 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4((undefined1 *)((long)puVar2 + -0x240),0);
                if ((int)uVar8 == (int)extraout_x1) {
                  return uVar8;
                }
                iVar13 = iVar13 + 1;
                lVar6 = *(long *)(lVar11 + 0x18);
              } while (lVar6 != 0);
            }
code_r0x015382cc:
            uVar8 = func_0x00f78af4();
            return uVar8;
          }
          uVar9 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x68);
          ppppppuVar17 = *(undefined8 *******)((long)puVar2 + -0x1b0);
          puVar18 = *(undefined **)((long)puVar2 + -0x1a8);
          lVar6 = *(long *)((long)puVar2 + -0x1c0);
          lVar10 = *(long *)((long)puVar2 + -0x1b8);
          uVar15 = *(undefined8 *)((long)puVar2 + -0x1d0);
          uVar12 = *(undefined8 *)((long)puVar2 + -0x1c8);
        }
        else {
          uVar9 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x58);
          ppppppuVar17 = *(undefined8 *******)((long)puVar2 + -0xd0);
          puVar18 = *(undefined **)((long)puVar2 + -200);
          lVar6 = *(long *)((long)puVar2 + -0xe0);
          lVar10 = *(long *)((long)puVar2 + -0xd8);
          puVar3 = (undefined8 *)((long)puVar2 + -0xc0);
          uVar15 = *(undefined8 *)((long)puVar2 + -0xf0);
          uVar12 = *(undefined8 *)((long)puVar2 + -0xe8);
        }
      }
      else {
        uVar9 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x54);
        ppppppuVar17 = *(undefined8 *******)((long)puVar2 + -0xa0);
        puVar18 = *(undefined **)((long)puVar2 + -0x98);
        lVar6 = *(long *)((long)puVar2 + -0xb0);
        lVar10 = *(long *)((long)puVar2 + -0xa8);
        puVar3 = (undefined8 *)((long)puVar2 + -0x90);
        uVar15 = *(undefined8 *)((long)puVar2 + -0xc0);
        uVar12 = *(undefined8 *)((long)puVar2 + -0xb8);
      }
      goto code_r0x0320d82c;
    }
    uVar9 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x4c);
  }
  ppppppuVar17 = *(undefined8 *******)((long)puVar2 + -0x70);
  puVar18 = *(undefined **)((long)puVar2 + -0x68);
  lVar6 = *(long *)((long)puVar2 + -0x80);
  lVar10 = *(long *)((long)puVar2 + -0x78);
  puVar3 = (undefined8 *)((long)puVar2 + -0x60);
  uVar15 = *(undefined8 *)((long)puVar2 + -0x90);
  uVar12 = *(undefined8 *)((long)puVar2 + -0x88);
code_r0x0320d82c:
  *(undefined8 *)((long)puVar3 + -0x30) = uVar15;
  *(undefined8 *)((long)puVar3 + -0x28) = uVar12;
  *(long *)((long)puVar3 + -0x20) = lVar6;
  *(long *)((long)puVar3 + -0x18) = lVar10;
  *(undefined8 *******)((long)puVar3 + -0x10) = ppppppuVar17;
  *(undefined **)((long)puVar3 + -8) = puVar18;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (*pcRam0000000003ebe460)(lVar11,uVar9);
  return uVar8;
  while( true ) {
    iVar13 = iVar13 + 1;
    lVar6 = *(long *)(lVar11 + 0x18);
    if (lVar6 == 0) break;
code_r0x01538278:
    uVar8 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar6,0);
    if ((int)uVar8 <= iVar13) {
      return uVar8;
    }
    if (*(long *)(lVar11 + 0x18) == 0) break;
    iVar5 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(*(long *)(lVar11 + 0x18),iVar13,extraout_x1,0);
    if (iVar5 != 0) {
      if (*(long *)(lVar11 + 0x18) == 0) break;
      /*UnityEngine.Animator$$Play*/ func_0x03210958(extraout_s0,*(long *)(lVar11 + 0x18),extraout_x1,iVar13,0);
    }
  }
  goto code_r0x015382cc;
}



// ============================================================
// RVA: 0x1537a54 | Atlas.Gameplay.Kart.BaseVisualBehaviour.SetLandForce
// ============================================================

/* WARNING: Possible PIC construction at 0x015380e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01538120: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015380e8) */
/* WARNING: Removing unreachable block (ram,0x015380f0) */
/* WARNING: Removing unreachable block (ram,0x01538110) */

ulong Atlas_Gameplay_Kart_BaseVisualBehaviour__SetLandForce(uint param_1,uint param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined8 extraout_x1;
  long unaff_x19;
  long lVar8;
  undefined8 unaff_x20;
  long lVar9;
  int iVar10;
  long unaff_x21;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 ******ppppppuVar13;
  undefined *unaff_x30;
  undefined *puVar14;
  undefined4 extraout_s0;
  ulong extraout_d0;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 *****pppppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 *****pppppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 *****pppppuStack_80;
  undefined *puStack_78;
  undefined8 ****ppppuStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb4ee1 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee1 = 1;
  }
  lVar8 = *(long *)(param_3 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x80);
    goto code_r0x0320d09c;
  }
  auVar15 = func_0x00f78af4();
  lVar8 = auVar15._8_8_;
  puStack_48 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetGliding;
  unaff_x22 = 0x3eb4000;
  ppppuStack_50 = (undefined8 ****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ee2 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee2 = 1;
  }
  lVar9 = *(long *)(auVar15._0_8_ + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar9 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x1c);
    if (pcRam0000000003ebe420 == (code *)0x0) {
      pcRam0000000003ebe420 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*pcRam0000000003ebe420)(lVar9,uVar7,lVar8);
    return uVar6;
  }
  lVar4 = func_0x00f78af4();
  uStack_a0 = 0x3eb4000;
  uStack_98 = 0x3d20028;
  puStack_78 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerHop;
  lStack_90 = lVar9;
  lStack_88 = lVar8;
  pppppuStack_80 = &ppppuStack_50;
  if ((bRam0000000003eb4ee3 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee3 = 1;
  }
  lVar8 = *(long *)(lVar4 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x14);
    puVar2 = (undefined8 *)&stack0xffffffffffffff90;
    lVar4 = lStack_88;
    lVar9 = lStack_90;
    uVar12 = uStack_98;
    uVar11 = uStack_a0;
    ppppppuVar13 = (undefined8 ******)pppppuStack_80;
    puVar14 = puStack_78;
    goto code_r0x0320d82c;
  }
  lVar9 = func_0x00f78af4();
  puVar1 = &uStack_d0;
  uStack_d0 = 0x3eb4000;
  uStack_c8 = 0x3eb4000;
  lStack_c0 = 0x3d20028;
  puStack_a8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerHopBoost;
  ppppppuVar13 = &pppppuStack_b0;
  lStack_b8 = lVar8;
  pppppuStack_b0 = &pppppuStack_80;
  if ((bRam0000000003eb4ee4 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee4 = 1;
  }
  lVar8 = *(long *)(lVar9 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x6c);
    puVar2 = &uStack_a0;
    lVar4 = lStack_b8;
    lVar9 = lStack_c0;
    uVar12 = uStack_c8;
    uVar11 = uStack_d0;
    ppppppuVar13 = (undefined8 ******)pppppuStack_b0;
    puVar14 = puStack_a8;
    goto code_r0x0320d82c;
  }
  puVar14 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHit;
  auVar16 = func_0x00f78af4();
  lVar9 = auVar16._0_8_;
  if (auVar16._8_4_ != 0) {
    puVar1 = &uStack_100;
    uStack_100 = 0x3eb4000;
    uStack_f8 = 0x3eb4000;
    lStack_f0 = 0x3d20028;
    puStack_d8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHit;
    lStack_e8 = lVar8;
    pppppuStack_e0 = ppppppuVar13;
    if ((bRam0000000003eb4ee6 & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4ee6 = 1;
    }
    lVar8 = *(long *)(lVar9 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar8 != 0) {
      uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x44);
      puVar2 = &uStack_d0;
      lVar4 = lStack_e8;
      lVar9 = lStack_f0;
      uVar12 = uStack_f8;
      uVar11 = uStack_100;
      ppppppuVar13 = (undefined8 ******)pppppuStack_e0;
      puVar14 = puStack_d8;
      goto code_r0x0320d82c;
    }
    puVar14 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHitSmall;
    lVar9 = func_0x00f78af4();
    ppppppuVar13 = &pppppuStack_e0;
  }
  *(undefined8 *)((long)puVar1 + -0x30) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x28) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x20) = 0x3d20028;
  *(undefined8 *)((long)puVar1 + -0x18) = 0;
  *(undefined8 *******)((long)puVar1 + -0x10) = ppppppuVar13;
  *(undefined **)((long)puVar1 + -8) = puVar14;
  if ((bRam0000000003eb4ee5 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee5 = 1;
  }
  lVar8 = *(long *)(lVar9 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x40);
    ppppppuVar13 = *(undefined8 *******)((long)puVar1 + -0x10);
    puVar14 = *(undefined **)((long)puVar1 + -8);
    lVar9 = *(long *)((long)puVar1 + -0x20);
    lVar4 = *(long *)((long)puVar1 + -0x18);
    uVar11 = *(undefined8 *)((long)puVar1 + -0x30);
    uVar12 = *(undefined8 *)((long)puVar1 + -0x28);
    puVar2 = puVar1;
    goto code_r0x0320d82c;
  }
  lVar8 = func_0x00f78af4();
  *(undefined8 *)((long)puVar1 + -0x60) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x58) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x50) = 0x3d20028;
  *(undefined8 *)((long)puVar1 + -0x48) = 0;
  *(undefined1 **)((long)puVar1 + -0x40) = (undefined1 *)((long)puVar1 + -0x10);
  *(undefined **)((long)puVar1 + -0x38) = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIncoming;
  if ((bRam0000000003eb4ee7 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee7 = 1;
  }
  lVar8 = *(long *)(lVar8 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x48);
    ppppppuVar13 = *(undefined8 *******)((long)puVar1 + -0x40);
    puVar14 = *(undefined **)((long)puVar1 + -0x38);
    lVar9 = *(long *)((long)puVar1 + -0x50);
    lVar4 = *(long *)((long)puVar1 + -0x48);
    puVar2 = (undefined8 *)((long)puVar1 + -0x30);
    uVar11 = *(undefined8 *)((long)puVar1 + -0x60);
    uVar12 = *(undefined8 *)((long)puVar1 + -0x58);
    goto code_r0x0320d82c;
  }
  auVar16 = func_0x00f78af4();
  uVar5 = auVar16._0_8_;
  *(undefined8 *)((long)puVar1 + -0x90) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x88) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x80) = 0x3d20028;
  *(undefined8 *)((long)puVar1 + -0x78) = 0;
  *(undefined1 **)((long)puVar1 + -0x70) = (undefined1 *)((long)puVar1 + -0x40);
  *(undefined **)((long)puVar1 + -0x68) = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerSideSneer
  ;
  uVar6 = uVar5;
  if ((bRam0000000003eb4ee8 & 1) == 0) {
    uVar6 = func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee8 = 1;
  }
  if (auVar16._8_4_ == 1) {
    lVar8 = *(long *)(uVar5 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar8 == 0) goto code_r0x01537eec;
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x50);
  }
  else {
    if (auVar16._8_4_ != 0) {
      return uVar6;
    }
    lVar8 = *(long *)(uVar5 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar8 == 0) {
code_r0x01537eec:
      lVar8 = func_0x00f78af4();
      *(undefined8 *)((long)puVar1 + -0xc0) = 0x3eb4000;
      *(undefined8 *)((long)puVar1 + -0xb8) = 0x3eb4000;
      *(undefined8 *)((long)puVar1 + -0xb0) = 0x3d20028;
      *(undefined8 *)((long)puVar1 + -0xa8) = 0;
      *(undefined1 **)((long)puVar1 + -0xa0) = (undefined1 *)((long)puVar1 + -0x70);
      *(undefined **)((long)puVar1 + -0x98) =
           &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaken;
      if ((bRam0000000003eb4ee9 & 1) == 0) {
        func_0x00f78a20(0x3d20028);
        bRam0000000003eb4ee9 = 1;
      }
      lVar8 = *(long *)(lVar8 + 0x18);
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar8 == 0) {
        lVar8 = func_0x00f78af4();
        *(undefined8 *)((long)puVar1 + -0xf0) = 0x3eb4000;
        *(undefined8 *)((long)puVar1 + -0xe8) = 0x3eb4000;
        *(undefined8 *)((long)puVar1 + -0xe0) = 0x3d20028;
        *(undefined8 *)((long)puVar1 + -0xd8) = 0;
        *(undefined1 **)((long)puVar1 + -0xd0) = (undefined1 *)((long)puVar1 + -0xa0);
        *(undefined **)((long)puVar1 + -200) =
             &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaking;
        uVar11 = 0x3eb4000;
        if ((bRam0000000003eb4eea & 1) == 0) {
          func_0x00f78a20(0x3d20028);
          bRam0000000003eb4eea = 1;
        }
        lVar8 = *(long *)(lVar8 + 0x18);
        if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar8 == 0) {
          unaff_x19 = func_0x00f78af4();
          register0x00000008 = (BADSPACEBASE *)((long)puVar1 + -0x1a0);
          puVar2 = (undefined8 *)((long)puVar1 + -0x1a0);
          *(ulong *)((long)puVar1 + -0x140) = unaff_d9;
          *(ulong *)((long)puVar1 + -0x138) = (ulong)param_1;
          *(undefined8 *)((long)puVar1 + -0x130) = unaff_x24;
          *(undefined8 *)((long)puVar1 + -0x128) = unaff_x23;
          *(undefined8 *)((long)puVar1 + -0x120) = 0x3eb4000;
          *(undefined8 *)((long)puVar1 + -0x118) = 0x3eb4000;
          *(undefined8 *)((long)puVar1 + -0x110) = 0x3d20028;
          *(undefined8 *)((long)puVar1 + -0x108) = 0;
          *(undefined1 **)((long)puVar1 + -0x100) = (undefined1 *)((long)puVar1 + -0xd0);
          *(undefined **)((long)puVar1 + -0xf8) =
               &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerImpact;
          unaff_x29 = (undefined1 *)((long)puVar1 + -0x100);
          unaff_d8 = (ulong)param_2;
          param_1 = (uint)extraout_d0;
          unaff_d9 = extraout_d0 & 0xffffffff;
          unaff_x20 = 0x3eb4000;
          if ((bRam0000000003eb4eeb & 1) == 0) {
            func_0x00f78a20(0x3d20028);
            bRam0000000003eb4eeb = 1;
          }
          if (*(long *)(unaff_x19 + 0x18) != 0) {
            unaff_x22 = 0x3d20028;
            /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50((undefined1 *)((long)puVar1 + -0x198),*(long *)(unaff_x19 + 0x18),2,0);
            *(undefined8 *)((long)puVar1 + -0x168) = *(undefined8 *)((long)puVar1 + -400);
            *(undefined8 *)((long)puVar1 + -0x170) = *(undefined8 *)((long)puVar1 + -0x198);
            *(undefined8 *)((long)puVar1 + -0x158) = *(undefined8 *)((long)puVar1 + -0x180);
            *(undefined8 *)((long)puVar1 + -0x160) = *(undefined8 *)((long)puVar1 + -0x188);
            *(undefined4 *)((long)puVar1 + -0x150) = *(undefined4 *)((long)puVar1 + -0x178);
            unaff_x20 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4((undefined1 *)((long)puVar1 + -0x170),0);
            if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if ((int)unaff_x20 == **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8)) {
              return (ulong)((int)unaff_x20 != **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8));
            }
            lVar8 = *(long *)(unaff_x19 + 0x18);
            if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar11 = 0;
            if (lVar8 != 0) {
              uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x60);
              unaff_x30 = &UNK_015380e8;
              unaff_x21 = lVar8;
code_r0x0320d09c:
              *(ulong *)((long)register0x00000008 + -0x40) = unaff_d9;
              *(ulong *)((long)register0x00000008 + -0x38) = unaff_d8;
              *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
              *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
              *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
              *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
              *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
              *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
              if (pcRam0000000003ebe400 == (code *)0x0) {
                pcRam0000000003ebe400 =
                     (code *)func_0x00f789d4(
                                            "UnityEngine.Animator::SetFloatID(System.Int32,System.Single)"
                                            );
              }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar6 = (*pcRam0000000003ebe400)(param_1,lVar8,uVar7);
              return uVar6;
            }
          }
          lVar8 = func_0x00f78af4();
          *(undefined8 *)((long)puVar1 + -0x1d0) = unaff_x22;
          *(undefined8 *)((long)puVar1 + -0x1c8) = uVar11;
          *(undefined8 *)((long)puVar1 + -0x1c0) = unaff_x20;
          *(long *)((long)puVar1 + -0x1b8) = unaff_x19;
          *(undefined1 **)((long)puVar1 + -0x1b0) = unaff_x29;
          *(undefined **)((long)puVar1 + -0x1a8) =
               &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerCelebrateSmall;
          if ((bRam0000000003eb4eec & 1) == 0) {
            func_0x00f78a20(0x3d20028);
            bRam0000000003eb4eec = 1;
          }
          lVar8 = *(long *)(lVar8 + 0x18);
          if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (lVar8 == 0) {
            lVar8 = func_0x00f78af4();
            *(ulong *)((long)puVar1 + -0x210) = unaff_d9;
            *(ulong *)((long)puVar1 + -0x208) = unaff_d8;
            *(undefined8 *)((long)puVar1 + -0x200) = unaff_x22;
            *(undefined8 *)((long)puVar1 + -0x1f8) = 0x3eb4000;
            *(undefined8 *)((long)puVar1 + -0x1f0) = 0x3d20028;
            *(undefined8 *)((long)puVar1 + -0x1e8) = 0;
            *(undefined1 **)((long)puVar1 + -0x1e0) = (undefined1 *)((long)puVar1 + -0x1b0);
            *(undefined **)((long)puVar1 + -0x1d8) =
                 &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayAnimatorStateOverride;
            *(undefined4 *)((long)puVar1 + -0x220) = 0;
            *(undefined8 *)((long)puVar1 + -0x238) = 0;
            *(undefined8 *)((long)puVar1 + -0x240) = 0;
            *(undefined8 *)((long)puVar1 + -0x228) = 0;
            *(undefined8 *)((long)puVar1 + -0x230) = 0;
            lVar9 = *(long *)(lVar8 + 0x18);
            if (lVar9 != 0) {
              iVar10 = 0;
              do {
                iVar3 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar9,0);
                lVar9 = *(long *)(lVar8 + 0x18);
                if (iVar3 <= iVar10) {
                  if (lVar9 != 0) {
                    iVar10 = 0;
                    goto code_r0x01538278;
                  }
                  break;
                }
                if (lVar9 == 0) break;
                /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50((undefined1 *)((long)puVar1 + -0x268),lVar9,iVar10,0);
                *(undefined8 *)((long)puVar1 + -0x238) = *(undefined8 *)((long)puVar1 + -0x260);
                *(undefined8 *)((long)puVar1 + -0x240) = *(undefined8 *)((long)puVar1 + -0x268);
                *(undefined8 *)((long)puVar1 + -0x228) = *(undefined8 *)((long)puVar1 + -0x250);
                *(undefined8 *)((long)puVar1 + -0x230) = *(undefined8 *)((long)puVar1 + -600);
                *(undefined4 *)((long)puVar1 + -0x220) = *(undefined4 *)((long)puVar1 + -0x248);
                uVar6 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4((undefined1 *)((long)puVar1 + -0x240),0);
                if ((int)uVar6 == (int)extraout_x1) {
                  return uVar6;
                }
                iVar10 = iVar10 + 1;
                lVar9 = *(long *)(lVar8 + 0x18);
              } while (lVar9 != 0);
            }
code_r0x015382cc:
            uVar6 = func_0x00f78af4();
            return uVar6;
          }
          uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x68);
          ppppppuVar13 = *(undefined8 *******)((long)puVar1 + -0x1b0);
          puVar14 = *(undefined **)((long)puVar1 + -0x1a8);
          lVar9 = *(long *)((long)puVar1 + -0x1c0);
          lVar4 = *(long *)((long)puVar1 + -0x1b8);
          uVar11 = *(undefined8 *)((long)puVar1 + -0x1d0);
          uVar12 = *(undefined8 *)((long)puVar1 + -0x1c8);
        }
        else {
          uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x58);
          ppppppuVar13 = *(undefined8 *******)((long)puVar1 + -0xd0);
          puVar14 = *(undefined **)((long)puVar1 + -200);
          lVar9 = *(long *)((long)puVar1 + -0xe0);
          lVar4 = *(long *)((long)puVar1 + -0xd8);
          puVar2 = (undefined8 *)((long)puVar1 + -0xc0);
          uVar11 = *(undefined8 *)((long)puVar1 + -0xf0);
          uVar12 = *(undefined8 *)((long)puVar1 + -0xe8);
        }
      }
      else {
        uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x54);
        ppppppuVar13 = *(undefined8 *******)((long)puVar1 + -0xa0);
        puVar14 = *(undefined **)((long)puVar1 + -0x98);
        lVar9 = *(long *)((long)puVar1 + -0xb0);
        lVar4 = *(long *)((long)puVar1 + -0xa8);
        puVar2 = (undefined8 *)((long)puVar1 + -0x90);
        uVar11 = *(undefined8 *)((long)puVar1 + -0xc0);
        uVar12 = *(undefined8 *)((long)puVar1 + -0xb8);
      }
      goto code_r0x0320d82c;
    }
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x4c);
  }
  ppppppuVar13 = *(undefined8 *******)((long)puVar1 + -0x70);
  puVar14 = *(undefined **)((long)puVar1 + -0x68);
  lVar9 = *(long *)((long)puVar1 + -0x80);
  lVar4 = *(long *)((long)puVar1 + -0x78);
  puVar2 = (undefined8 *)((long)puVar1 + -0x60);
  uVar11 = *(undefined8 *)((long)puVar1 + -0x90);
  uVar12 = *(undefined8 *)((long)puVar1 + -0x88);
code_r0x0320d82c:
  *(undefined8 *)((long)puVar2 + -0x30) = uVar11;
  *(undefined8 *)((long)puVar2 + -0x28) = uVar12;
  *(long *)((long)puVar2 + -0x20) = lVar9;
  *(long *)((long)puVar2 + -0x18) = lVar4;
  *(undefined8 *******)((long)puVar2 + -0x10) = ppppppuVar13;
  *(undefined **)((long)puVar2 + -8) = puVar14;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*pcRam0000000003ebe460)(lVar8,uVar7);
  return uVar6;
  while( true ) {
    iVar10 = iVar10 + 1;
    lVar9 = *(long *)(lVar8 + 0x18);
    if (lVar9 == 0) break;
code_r0x01538278:
    uVar6 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar9,0);
    if ((int)uVar6 <= iVar10) {
      return uVar6;
    }
    if (*(long *)(lVar8 + 0x18) == 0) break;
    iVar3 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(*(long *)(lVar8 + 0x18),iVar10,extraout_x1,0);
    if (iVar3 != 0) {
      if (*(long *)(lVar8 + 0x18) == 0) break;
      /*UnityEngine.Animator$$Play*/ func_0x03210958(extraout_s0,*(long *)(lVar8 + 0x18),extraout_x1,iVar10,0);
    }
  }
  goto code_r0x015382cc;
}



// ============================================================
// RVA: 0x1537ae8 | Atlas.Gameplay.Kart.BaseVisualBehaviour.SetGliding
// ============================================================

/* WARNING: Possible PIC construction at 0x01538120: Changing call to branch */

ulong Atlas_Gameplay_Kart_BaseVisualBehaviour__SetGliding
                (undefined1 param_1 [16],uint param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined8 extraout_x1;
  long lVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 ******ppppppuVar14;
  undefined *puVar15;
  undefined4 extraout_s0;
  ulong extraout_d0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar16 [12];
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 *****pppppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 *****pppppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 *****pppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4ee2 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee2 = 1;
  }
  lVar9 = *(long *)(param_3 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar9 != 0) {
    uVar8 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x1c);
    if (pcRam0000000003ebe420 == (code *)0x0) {
      pcRam0000000003ebe420 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (*pcRam0000000003ebe420)(lVar9,uVar8,param_4);
    return uVar7;
  }
  lVar4 = func_0x00f78af4();
  uStack_60 = 0x3eb4000;
  lStack_58 = 0x3d20028;
  puStack_38 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerHop;
  lStack_50 = lVar9;
  lStack_48 = param_4;
  pppppuStack_40 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ee3 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee3 = 1;
  }
  lVar9 = *(long *)(lVar4 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar9 != 0) {
    uVar8 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x14);
    puVar2 = (undefined8 *)&stack0xffffffffffffffd0;
    lVar6 = lStack_48;
    lVar4 = lStack_50;
    lVar11 = lStack_58;
    uVar12 = uStack_60;
    ppppppuVar14 = (undefined8 ******)pppppuStack_40;
    puVar15 = puStack_38;
    goto code_r0x0320d82c;
  }
  lVar4 = func_0x00f78af4();
  puVar1 = &uStack_90;
  uStack_90 = 0x3eb4000;
  lStack_88 = 0x3eb4000;
  lStack_80 = 0x3d20028;
  puStack_68 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerHopBoost;
  ppppppuVar14 = &pppppuStack_70;
  lStack_78 = lVar9;
  pppppuStack_70 = &pppppuStack_40;
  if ((bRam0000000003eb4ee4 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee4 = 1;
  }
  lVar9 = *(long *)(lVar4 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar9 != 0) {
    uVar8 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x6c);
    puVar2 = &uStack_60;
    lVar6 = lStack_78;
    lVar4 = lStack_80;
    lVar11 = lStack_88;
    uVar12 = uStack_90;
    ppppppuVar14 = (undefined8 ******)pppppuStack_70;
    puVar15 = puStack_68;
    goto code_r0x0320d82c;
  }
  puVar15 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHit;
  auVar16 = func_0x00f78af4();
  lVar4 = auVar16._0_8_;
  if (auVar16._8_4_ != 0) {
    puVar1 = &uStack_c0;
    uStack_c0 = 0x3eb4000;
    lStack_b8 = 0x3eb4000;
    lStack_b0 = 0x3d20028;
    puStack_98 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHit;
    lStack_a8 = lVar9;
    pppppuStack_a0 = ppppppuVar14;
    if ((bRam0000000003eb4ee6 & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4ee6 = 1;
    }
    lVar9 = *(long *)(lVar4 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar9 != 0) {
      uVar8 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x44);
      puVar2 = &uStack_90;
      lVar6 = lStack_a8;
      lVar4 = lStack_b0;
      lVar11 = lStack_b8;
      uVar12 = uStack_c0;
      ppppppuVar14 = (undefined8 ******)pppppuStack_a0;
      puVar15 = puStack_98;
      goto code_r0x0320d82c;
    }
    puVar15 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHitSmall;
    lVar4 = func_0x00f78af4();
    ppppppuVar14 = &pppppuStack_a0;
  }
  *(undefined8 *)((long)puVar1 + -0x30) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x28) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x20) = 0x3d20028;
  *(undefined8 *)((long)puVar1 + -0x18) = 0;
  *(undefined8 *******)((long)puVar1 + -0x10) = ppppppuVar14;
  *(undefined **)((long)puVar1 + -8) = puVar15;
  if ((bRam0000000003eb4ee5 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee5 = 1;
  }
  lVar9 = *(long *)(lVar4 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar9 != 0) {
    uVar8 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x40);
    ppppppuVar14 = *(undefined8 *******)((long)puVar1 + -0x10);
    puVar15 = *(undefined **)((long)puVar1 + -8);
    lVar4 = *(long *)((long)puVar1 + -0x20);
    lVar6 = *(long *)((long)puVar1 + -0x18);
    uVar12 = *(undefined8 *)((long)puVar1 + -0x30);
    lVar11 = *(long *)((long)puVar1 + -0x28);
    puVar2 = puVar1;
    goto code_r0x0320d82c;
  }
  lVar9 = func_0x00f78af4();
  *(undefined8 *)((long)puVar1 + -0x60) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x58) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x50) = 0x3d20028;
  *(undefined8 *)((long)puVar1 + -0x48) = 0;
  *(undefined1 **)((long)puVar1 + -0x40) = (undefined1 *)((long)puVar1 + -0x10);
  *(undefined **)((long)puVar1 + -0x38) = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIncoming;
  if ((bRam0000000003eb4ee7 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee7 = 1;
  }
  lVar9 = *(long *)(lVar9 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar9 != 0) {
    uVar8 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x48);
    ppppppuVar14 = *(undefined8 *******)((long)puVar1 + -0x40);
    puVar15 = *(undefined **)((long)puVar1 + -0x38);
    lVar4 = *(long *)((long)puVar1 + -0x50);
    lVar6 = *(long *)((long)puVar1 + -0x48);
    uVar12 = *(undefined8 *)((long)puVar1 + -0x60);
    lVar11 = *(long *)((long)puVar1 + -0x58);
    puVar2 = (undefined8 *)((long)puVar1 + -0x30);
    goto code_r0x0320d82c;
  }
  auVar16 = func_0x00f78af4();
  uVar5 = auVar16._0_8_;
  *(undefined8 *)((long)puVar1 + -0x90) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x88) = 0x3eb4000;
  *(undefined8 *)((long)puVar1 + -0x80) = 0x3d20028;
  *(undefined8 *)((long)puVar1 + -0x78) = 0;
  *(undefined1 **)((long)puVar1 + -0x70) = (undefined1 *)((long)puVar1 + -0x40);
  *(undefined **)((long)puVar1 + -0x68) = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerSideSneer
  ;
  uVar7 = uVar5;
  if ((bRam0000000003eb4ee8 & 1) == 0) {
    uVar7 = func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee8 = 1;
  }
  if (auVar16._8_4_ == 1) {
    lVar9 = *(long *)(uVar5 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar9 == 0) goto code_r0x01537eec;
    uVar8 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x50);
  }
  else {
    if (auVar16._8_4_ != 0) {
      return uVar7;
    }
    lVar9 = *(long *)(uVar5 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar9 == 0) {
code_r0x01537eec:
      lVar9 = func_0x00f78af4();
      *(undefined8 *)((long)puVar1 + -0xc0) = 0x3eb4000;
      *(undefined8 *)((long)puVar1 + -0xb8) = 0x3eb4000;
      *(undefined8 *)((long)puVar1 + -0xb0) = 0x3d20028;
      *(undefined8 *)((long)puVar1 + -0xa8) = 0;
      *(undefined1 **)((long)puVar1 + -0xa0) = (undefined1 *)((long)puVar1 + -0x70);
      *(undefined **)((long)puVar1 + -0x98) =
           &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaken;
      if ((bRam0000000003eb4ee9 & 1) == 0) {
        func_0x00f78a20(0x3d20028);
        bRam0000000003eb4ee9 = 1;
      }
      lVar9 = *(long *)(lVar9 + 0x18);
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar9 == 0) {
        lVar9 = func_0x00f78af4();
        *(undefined8 *)((long)puVar1 + -0xf0) = 0x3eb4000;
        *(undefined8 *)((long)puVar1 + -0xe8) = 0x3eb4000;
        *(undefined8 *)((long)puVar1 + -0xe0) = 0x3d20028;
        *(undefined8 *)((long)puVar1 + -0xd8) = 0;
        *(undefined1 **)((long)puVar1 + -0xd0) = (undefined1 *)((long)puVar1 + -0xa0);
        *(undefined **)((long)puVar1 + -200) =
             &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaking;
        lVar11 = 0x3eb4000;
        if ((bRam0000000003eb4eea & 1) == 0) {
          func_0x00f78a20(0x3d20028);
          bRam0000000003eb4eea = 1;
        }
        lVar9 = *(long *)(lVar9 + 0x18);
        if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar9 == 0) {
          lVar6 = func_0x00f78af4();
          puVar2 = (undefined8 *)((long)puVar1 + -0x1a0);
          *(undefined8 *)((long)puVar1 + -0x140) = unaff_d9;
          *(undefined8 *)((long)puVar1 + -0x138) = unaff_d8;
          *(undefined8 *)((long)puVar1 + -0x130) = unaff_x24;
          *(undefined8 *)((long)puVar1 + -0x128) = unaff_x23;
          *(undefined8 *)((long)puVar1 + -0x120) = 0x3eb4000;
          *(undefined8 *)((long)puVar1 + -0x118) = 0x3eb4000;
          *(undefined8 *)((long)puVar1 + -0x110) = 0x3d20028;
          *(undefined8 *)((long)puVar1 + -0x108) = 0;
          *(undefined1 **)((long)puVar1 + -0x100) = (undefined1 *)((long)puVar1 + -0xd0);
          *(undefined **)((long)puVar1 + -0xf8) =
               &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerImpact;
          ppppppuVar14 = (undefined8 ******)((long)puVar1 + -0x100);
          lVar4 = 0x3eb4000;
          if ((bRam0000000003eb4eeb & 1) == 0) {
            func_0x00f78a20(0x3d20028);
            bRam0000000003eb4eeb = 1;
          }
          uVar13 = 0x3eb4000;
          if (*(long *)(lVar6 + 0x18) != 0) {
            uVar12 = 0x3d20028;
            /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50((undefined1 *)((long)puVar1 + -0x198),*(long *)(lVar6 + 0x18),2,0);
            *(undefined8 *)((long)puVar1 + -0x168) = *(undefined8 *)((long)puVar1 + -400);
            *(undefined8 *)((long)puVar1 + -0x170) = *(undefined8 *)((long)puVar1 + -0x198);
            *(undefined8 *)((long)puVar1 + -0x158) = *(undefined8 *)((long)puVar1 + -0x180);
            *(undefined8 *)((long)puVar1 + -0x160) = *(undefined8 *)((long)puVar1 + -0x188);
            *(undefined4 *)((long)puVar1 + -0x150) = *(undefined4 *)((long)puVar1 + -0x178);
            lVar4 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4((undefined1 *)((long)puVar1 + -0x170),0);
            if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if ((int)lVar4 == **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8)) {
              return (ulong)((int)lVar4 != **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8));
            }
            lVar11 = *(long *)(lVar6 + 0x18);
            if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar13 = 0x3d20028;
            if (lVar11 != 0) {
              /*UnityEngine.Animator$$SetFloat*/ func_0x0320d09c(extraout_d0 & 0xffffffff,lVar11,
                              *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x60),0);
              if (*(long *)(lVar6 + 0x18) != 0) {
                /*UnityEngine.Animator$$SetFloat*/ func_0x0320d09c(param_2,*(long *)(lVar6 + 0x18),
                                *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 100),0);
                lVar9 = *(long *)(lVar6 + 0x18);
                uVar13 = uVar12;
                if (lVar9 != 0) {
                  uVar8 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x5c);
                  puVar15 = &UNK_01538124;
                  puVar2 = (undefined8 *)((long)puVar1 + -0x1a0);
                  goto code_r0x0320d82c;
                }
              }
            }
          }
          lVar9 = func_0x00f78af4();
          *(undefined8 *)((long)puVar1 + -0x1d0) = uVar13;
          *(long *)((long)puVar1 + -0x1c8) = lVar11;
          *(long *)((long)puVar1 + -0x1c0) = lVar4;
          *(long *)((long)puVar1 + -0x1b8) = lVar6;
          *(undefined8 *******)((long)puVar1 + -0x1b0) = ppppppuVar14;
          *(undefined **)((long)puVar1 + -0x1a8) =
               &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerCelebrateSmall;
          if ((bRam0000000003eb4eec & 1) == 0) {
            func_0x00f78a20(0x3d20028);
            bRam0000000003eb4eec = 1;
          }
          lVar9 = *(long *)(lVar9 + 0x18);
          if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (lVar9 == 0) {
            lVar9 = func_0x00f78af4();
            *(ulong *)((long)puVar1 + -0x210) = extraout_d0 & 0xffffffff;
            *(ulong *)((long)puVar1 + -0x208) = (ulong)param_2;
            *(undefined8 *)((long)puVar1 + -0x200) = uVar13;
            *(undefined8 *)((long)puVar1 + -0x1f8) = 0x3eb4000;
            *(undefined8 *)((long)puVar1 + -0x1f0) = 0x3d20028;
            *(undefined8 *)((long)puVar1 + -0x1e8) = 0;
            *(undefined1 **)((long)puVar1 + -0x1e0) = (undefined1 *)((long)puVar1 + -0x1b0);
            *(undefined **)((long)puVar1 + -0x1d8) =
                 &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayAnimatorStateOverride;
            *(undefined4 *)((long)puVar1 + -0x220) = 0;
            *(undefined8 *)((long)puVar1 + -0x238) = 0;
            *(undefined8 *)((long)puVar1 + -0x240) = 0;
            *(undefined8 *)((long)puVar1 + -0x228) = 0;
            *(undefined8 *)((long)puVar1 + -0x230) = 0;
            lVar4 = *(long *)(lVar9 + 0x18);
            if (lVar4 != 0) {
              iVar10 = 0;
              do {
                iVar3 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar4,0);
                lVar4 = *(long *)(lVar9 + 0x18);
                if (iVar3 <= iVar10) {
                  if (lVar4 != 0) {
                    iVar10 = 0;
                    goto code_r0x01538278;
                  }
                  break;
                }
                if (lVar4 == 0) break;
                /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50((undefined1 *)((long)puVar1 + -0x268),lVar4,iVar10,0);
                *(undefined8 *)((long)puVar1 + -0x238) = *(undefined8 *)((long)puVar1 + -0x260);
                *(undefined8 *)((long)puVar1 + -0x240) = *(undefined8 *)((long)puVar1 + -0x268);
                *(undefined8 *)((long)puVar1 + -0x228) = *(undefined8 *)((long)puVar1 + -0x250);
                *(undefined8 *)((long)puVar1 + -0x230) = *(undefined8 *)((long)puVar1 + -600);
                *(undefined4 *)((long)puVar1 + -0x220) = *(undefined4 *)((long)puVar1 + -0x248);
                uVar7 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4((undefined1 *)((long)puVar1 + -0x240),0);
                if ((int)uVar7 == (int)extraout_x1) {
                  return uVar7;
                }
                iVar10 = iVar10 + 1;
                lVar4 = *(long *)(lVar9 + 0x18);
              } while (lVar4 != 0);
            }
code_r0x015382cc:
            uVar7 = func_0x00f78af4();
            return uVar7;
          }
          uVar8 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x68);
          ppppppuVar14 = *(undefined8 *******)((long)puVar1 + -0x1b0);
          puVar15 = *(undefined **)((long)puVar1 + -0x1a8);
          lVar4 = *(long *)((long)puVar1 + -0x1c0);
          lVar6 = *(long *)((long)puVar1 + -0x1b8);
          uVar12 = *(undefined8 *)((long)puVar1 + -0x1d0);
          lVar11 = *(long *)((long)puVar1 + -0x1c8);
        }
        else {
          uVar8 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x58);
          ppppppuVar14 = *(undefined8 *******)((long)puVar1 + -0xd0);
          puVar15 = *(undefined **)((long)puVar1 + -200);
          lVar4 = *(long *)((long)puVar1 + -0xe0);
          lVar6 = *(long *)((long)puVar1 + -0xd8);
          uVar12 = *(undefined8 *)((long)puVar1 + -0xf0);
          lVar11 = *(long *)((long)puVar1 + -0xe8);
          puVar2 = (undefined8 *)((long)puVar1 + -0xc0);
        }
      }
      else {
        uVar8 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x54);
        ppppppuVar14 = *(undefined8 *******)((long)puVar1 + -0xa0);
        puVar15 = *(undefined **)((long)puVar1 + -0x98);
        lVar4 = *(long *)((long)puVar1 + -0xb0);
        lVar6 = *(long *)((long)puVar1 + -0xa8);
        uVar12 = *(undefined8 *)((long)puVar1 + -0xc0);
        lVar11 = *(long *)((long)puVar1 + -0xb8);
        puVar2 = (undefined8 *)((long)puVar1 + -0x90);
      }
      goto code_r0x0320d82c;
    }
    uVar8 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x4c);
  }
  ppppppuVar14 = *(undefined8 *******)((long)puVar1 + -0x70);
  puVar15 = *(undefined **)((long)puVar1 + -0x68);
  lVar4 = *(long *)((long)puVar1 + -0x80);
  lVar6 = *(long *)((long)puVar1 + -0x78);
  uVar12 = *(undefined8 *)((long)puVar1 + -0x90);
  lVar11 = *(long *)((long)puVar1 + -0x88);
  puVar2 = (undefined8 *)((long)puVar1 + -0x60);
code_r0x0320d82c:
  *(undefined8 *)((long)puVar2 + -0x30) = uVar12;
  *(long *)((long)puVar2 + -0x28) = lVar11;
  *(long *)((long)puVar2 + -0x20) = lVar4;
  *(long *)((long)puVar2 + -0x18) = lVar6;
  *(undefined8 *******)((long)puVar2 + -0x10) = ppppppuVar14;
  *(undefined **)((long)puVar2 + -8) = puVar15;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (*pcRam0000000003ebe460)(lVar9,uVar8);
  return uVar7;
  while( true ) {
    iVar10 = iVar10 + 1;
    lVar4 = *(long *)(lVar9 + 0x18);
    if (lVar4 == 0) break;
code_r0x01538278:
    uVar7 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar4,0);
    if ((int)uVar7 <= iVar10) {
      return uVar7;
    }
    if (*(long *)(lVar9 + 0x18) == 0) break;
    iVar3 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(*(long *)(lVar9 + 0x18),iVar10,extraout_x1,0);
    if (iVar3 != 0) {
      if (*(long *)(lVar9 + 0x18) == 0) break;
      /*UnityEngine.Animator$$Play*/ func_0x03210958(extraout_s0,*(long *)(lVar9 + 0x18),extraout_x1,iVar10,0);
    }
  }
  goto code_r0x015382cc;
}



// ============================================================
// RVA: 0x1537b74 | Atlas.Gameplay.Kart.BaseVisualBehaviour.TriggerHop
// ============================================================

/* WARNING: Possible PIC construction at 0x01538120: Changing call to branch */

ulong Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerHop
                (undefined1 param_1 [16],uint param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined8 extraout_x1;
  long unaff_x19;
  long lVar8;
  undefined8 unaff_x20;
  int iVar9;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar10;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 ******unaff_x29;
  undefined8 ******ppppppuVar11;
  undefined *unaff_x30;
  undefined *puVar12;
  undefined4 extraout_s0;
  ulong extraout_d0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar13 [12];
  undefined8 *****pppppuStack_70;
  undefined *puStack_68;
  undefined8 *****pppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4ee3 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee3 = 1;
  }
  lVar8 = *(long *)(param_3 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x14);
    puVar2 = (undefined1 *)register0x00000008;
    goto code_r0x0320d82c;
  }
  lVar8 = func_0x00f78af4();
  puVar1 = &stack0xffffffffffffffa0;
  puStack_38 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerHopBoost;
  ppppppuVar11 = &pppppuStack_40;
  pppppuStack_40 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ee4 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee4 = 1;
  }
  lVar8 = *(long *)(lVar8 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x6c);
    unaff_x20 = 0x3d20028;
    unaff_x21 = 0x3eb4000;
    unaff_x19 = 0;
    puVar2 = &stack0xffffffffffffffd0;
    unaff_x29 = (undefined8 ******)pppppuStack_40;
    unaff_x30 = puStack_38;
    goto code_r0x0320d82c;
  }
  puVar12 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHit;
  auVar13 = func_0x00f78af4();
  lVar8 = auVar13._0_8_;
  if (auVar13._8_4_ != 0) {
    puVar1 = &stack0xffffffffffffff70;
    puStack_68 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHit;
    pppppuStack_70 = ppppppuVar11;
    if ((bRam0000000003eb4ee6 & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4ee6 = 1;
    }
    lVar8 = *(long *)(lVar8 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar8 != 0) {
      uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x44);
      unaff_x20 = 0x3d20028;
      unaff_x21 = 0x3eb4000;
      unaff_x19 = 0;
      puVar2 = &stack0xffffffffffffffa0;
      unaff_x29 = (undefined8 ******)pppppuStack_70;
      unaff_x30 = puStack_68;
      goto code_r0x0320d82c;
    }
    puVar12 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHitSmall;
    lVar8 = func_0x00f78af4();
    ppppppuVar11 = &pppppuStack_70;
  }
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = 0x3eb4000;
  *(undefined8 *)(puVar1 + -0x20) = 0x3d20028;
  *(undefined8 *)(puVar1 + -0x18) = 0;
  *(undefined8 *******)(puVar1 + -0x10) = ppppppuVar11;
  *(undefined **)(puVar1 + -8) = puVar12;
  if ((bRam0000000003eb4ee5 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee5 = 1;
  }
  lVar8 = *(long *)(lVar8 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x40);
    unaff_x29 = *(undefined8 *******)(puVar1 + -0x10);
    unaff_x30 = *(undefined **)(puVar1 + -8);
    unaff_x20 = *(undefined8 *)(puVar1 + -0x20);
    unaff_x19 = *(long *)(puVar1 + -0x18);
    unaff_x22 = *(undefined8 *)(puVar1 + -0x30);
    unaff_x21 = *(long *)(puVar1 + -0x28);
    puVar2 = puVar1;
    goto code_r0x0320d82c;
  }
  lVar8 = func_0x00f78af4();
  *(undefined8 *)(puVar1 + -0x60) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x58) = 0x3eb4000;
  *(undefined8 *)(puVar1 + -0x50) = 0x3d20028;
  *(undefined8 *)(puVar1 + -0x48) = 0;
  *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x10;
  *(undefined **)(puVar1 + -0x38) = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIncoming;
  if ((bRam0000000003eb4ee7 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee7 = 1;
  }
  lVar8 = *(long *)(lVar8 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x48);
    unaff_x29 = *(undefined8 *******)(puVar1 + -0x40);
    unaff_x30 = *(undefined **)(puVar1 + -0x38);
    unaff_x20 = *(undefined8 *)(puVar1 + -0x50);
    unaff_x19 = *(long *)(puVar1 + -0x48);
    unaff_x22 = *(undefined8 *)(puVar1 + -0x60);
    unaff_x21 = *(long *)(puVar1 + -0x58);
    puVar2 = puVar1 + -0x30;
    goto code_r0x0320d82c;
  }
  auVar13 = func_0x00f78af4();
  uVar4 = auVar13._0_8_;
  *(undefined8 *)(puVar1 + -0x90) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x88) = 0x3eb4000;
  *(undefined8 *)(puVar1 + -0x80) = 0x3d20028;
  *(undefined8 *)(puVar1 + -0x78) = 0;
  *(undefined1 **)(puVar1 + -0x70) = puVar1 + -0x40;
  *(undefined **)(puVar1 + -0x68) = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerSideSneer;
  uVar6 = uVar4;
  if ((bRam0000000003eb4ee8 & 1) == 0) {
    uVar6 = func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee8 = 1;
  }
  if (auVar13._8_4_ == 1) {
    lVar8 = *(long *)(uVar4 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar8 == 0) goto code_r0x01537eec;
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x50);
  }
  else {
    if (auVar13._8_4_ != 0) {
      return uVar6;
    }
    lVar8 = *(long *)(uVar4 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar8 == 0) {
code_r0x01537eec:
      lVar8 = func_0x00f78af4();
      *(undefined8 *)(puVar1 + -0xc0) = unaff_x22;
      *(undefined8 *)(puVar1 + -0xb8) = 0x3eb4000;
      *(undefined8 *)(puVar1 + -0xb0) = 0x3d20028;
      *(undefined8 *)(puVar1 + -0xa8) = 0;
      *(undefined1 **)(puVar1 + -0xa0) = puVar1 + -0x70;
      *(undefined **)(puVar1 + -0x98) = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaken;
      if ((bRam0000000003eb4ee9 & 1) == 0) {
        func_0x00f78a20(0x3d20028);
        bRam0000000003eb4ee9 = 1;
      }
      lVar8 = *(long *)(lVar8 + 0x18);
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar8 == 0) {
        lVar8 = func_0x00f78af4();
        *(undefined8 *)(puVar1 + -0xf0) = unaff_x22;
        *(undefined8 *)(puVar1 + -0xe8) = 0x3eb4000;
        *(undefined8 *)(puVar1 + -0xe0) = 0x3d20028;
        *(undefined8 *)(puVar1 + -0xd8) = 0;
        *(undefined1 **)(puVar1 + -0xd0) = puVar1 + -0xa0;
        *(undefined **)(puVar1 + -200) = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaking
        ;
        unaff_x21 = 0x3eb4000;
        if ((bRam0000000003eb4eea & 1) == 0) {
          func_0x00f78a20(0x3d20028);
          bRam0000000003eb4eea = 1;
        }
        lVar8 = *(long *)(lVar8 + 0x18);
        if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar8 == 0) {
          unaff_x19 = func_0x00f78af4();
          puVar2 = puVar1 + -0x1a0;
          *(undefined8 *)(puVar1 + -0x140) = unaff_d9;
          *(undefined8 *)(puVar1 + -0x138) = unaff_d8;
          *(undefined8 *)(puVar1 + -0x130) = unaff_x24;
          *(undefined8 *)(puVar1 + -0x128) = unaff_x23;
          *(undefined8 *)(puVar1 + -0x120) = unaff_x22;
          *(undefined8 *)(puVar1 + -0x118) = 0x3eb4000;
          *(undefined8 *)(puVar1 + -0x110) = 0x3d20028;
          *(undefined8 *)(puVar1 + -0x108) = 0;
          *(undefined1 **)(puVar1 + -0x100) = puVar1 + -0xd0;
          *(undefined **)(puVar1 + -0xf8) = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerImpact;
          unaff_x29 = (undefined8 ******)(puVar1 + -0x100);
          unaff_x20 = 0x3eb4000;
          if ((bRam0000000003eb4eeb & 1) == 0) {
            func_0x00f78a20(0x3d20028);
            bRam0000000003eb4eeb = 1;
          }
          uVar10 = unaff_x22;
          if (*(long *)(unaff_x19 + 0x18) != 0) {
            unaff_x22 = 0x3d20028;
            /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(puVar1 + -0x198,*(long *)(unaff_x19 + 0x18),2,0);
            *(undefined8 *)(puVar1 + -0x168) = *(undefined8 *)(puVar1 + -400);
            *(undefined8 *)(puVar1 + -0x170) = *(undefined8 *)(puVar1 + -0x198);
            *(undefined8 *)(puVar1 + -0x158) = *(undefined8 *)(puVar1 + -0x180);
            *(undefined8 *)(puVar1 + -0x160) = *(undefined8 *)(puVar1 + -0x188);
            *(undefined4 *)(puVar1 + -0x150) = *(undefined4 *)(puVar1 + -0x178);
            unaff_x20 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(puVar1 + -0x170,0);
            if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if ((int)unaff_x20 == **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8)) {
              return (ulong)((int)unaff_x20 != **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8));
            }
            unaff_x21 = *(long *)(unaff_x19 + 0x18);
            if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar10 = 0x3d20028;
            if (unaff_x21 != 0) {
              /*UnityEngine.Animator$$SetFloat*/ func_0x0320d09c(extraout_d0 & 0xffffffff,unaff_x21,
                              *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x60),0);
              if (*(long *)(unaff_x19 + 0x18) != 0) {
                /*UnityEngine.Animator$$SetFloat*/ func_0x0320d09c(param_2,*(long *)(unaff_x19 + 0x18),
                                *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 100),0);
                lVar8 = *(long *)(unaff_x19 + 0x18);
                uVar10 = unaff_x22;
                if (lVar8 != 0) {
                  uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x5c);
                  unaff_x30 = &UNK_01538124;
                  puVar2 = puVar1 + -0x1a0;
                  goto code_r0x0320d82c;
                }
              }
            }
          }
          lVar8 = func_0x00f78af4();
          *(undefined8 *)(puVar1 + -0x1d0) = uVar10;
          *(long *)(puVar1 + -0x1c8) = unaff_x21;
          *(undefined8 *)(puVar1 + -0x1c0) = unaff_x20;
          *(long *)(puVar1 + -0x1b8) = unaff_x19;
          *(undefined8 *******)(puVar1 + -0x1b0) = unaff_x29;
          *(undefined **)(puVar1 + -0x1a8) =
               &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerCelebrateSmall;
          if ((bRam0000000003eb4eec & 1) == 0) {
            func_0x00f78a20(0x3d20028);
            bRam0000000003eb4eec = 1;
          }
          lVar8 = *(long *)(lVar8 + 0x18);
          if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (lVar8 == 0) {
            lVar8 = func_0x00f78af4();
            *(ulong *)(puVar1 + -0x210) = extraout_d0 & 0xffffffff;
            *(ulong *)(puVar1 + -0x208) = (ulong)param_2;
            *(undefined8 *)(puVar1 + -0x200) = uVar10;
            *(undefined8 *)(puVar1 + -0x1f8) = 0x3eb4000;
            *(undefined8 *)(puVar1 + -0x1f0) = 0x3d20028;
            *(undefined8 *)(puVar1 + -0x1e8) = 0;
            *(undefined1 **)(puVar1 + -0x1e0) = puVar1 + -0x1b0;
            *(undefined **)(puVar1 + -0x1d8) =
                 &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayAnimatorStateOverride;
            *(undefined4 *)(puVar1 + -0x220) = 0;
            *(undefined8 *)(puVar1 + -0x238) = 0;
            *(undefined8 *)(puVar1 + -0x240) = 0;
            *(undefined8 *)(puVar1 + -0x228) = 0;
            *(undefined8 *)(puVar1 + -0x230) = 0;
            lVar5 = *(long *)(lVar8 + 0x18);
            if (lVar5 != 0) {
              iVar9 = 0;
              do {
                iVar3 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar5,0);
                lVar5 = *(long *)(lVar8 + 0x18);
                if (iVar3 <= iVar9) {
                  if (lVar5 != 0) {
                    iVar9 = 0;
                    goto code_r0x01538278;
                  }
                  break;
                }
                if (lVar5 == 0) break;
                /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(puVar1 + -0x268,lVar5,iVar9,0);
                *(undefined8 *)(puVar1 + -0x238) = *(undefined8 *)(puVar1 + -0x260);
                *(undefined8 *)(puVar1 + -0x240) = *(undefined8 *)(puVar1 + -0x268);
                *(undefined8 *)(puVar1 + -0x228) = *(undefined8 *)(puVar1 + -0x250);
                *(undefined8 *)(puVar1 + -0x230) = *(undefined8 *)(puVar1 + -600);
                *(undefined4 *)(puVar1 + -0x220) = *(undefined4 *)(puVar1 + -0x248);
                uVar6 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(puVar1 + -0x240,0);
                if ((int)uVar6 == (int)extraout_x1) {
                  return uVar6;
                }
                iVar9 = iVar9 + 1;
                lVar5 = *(long *)(lVar8 + 0x18);
              } while (lVar5 != 0);
            }
code_r0x015382cc:
            uVar6 = func_0x00f78af4();
            return uVar6;
          }
          uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x68);
          unaff_x29 = *(undefined8 *******)(puVar1 + -0x1b0);
          unaff_x30 = *(undefined **)(puVar1 + -0x1a8);
          unaff_x20 = *(undefined8 *)(puVar1 + -0x1c0);
          unaff_x19 = *(long *)(puVar1 + -0x1b8);
          unaff_x22 = *(undefined8 *)(puVar1 + -0x1d0);
          unaff_x21 = *(long *)(puVar1 + -0x1c8);
        }
        else {
          uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x58);
          unaff_x29 = *(undefined8 *******)(puVar1 + -0xd0);
          unaff_x30 = *(undefined **)(puVar1 + -200);
          unaff_x20 = *(undefined8 *)(puVar1 + -0xe0);
          unaff_x19 = *(long *)(puVar1 + -0xd8);
          unaff_x22 = *(undefined8 *)(puVar1 + -0xf0);
          unaff_x21 = *(long *)(puVar1 + -0xe8);
          puVar2 = puVar1 + -0xc0;
        }
      }
      else {
        uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x54);
        unaff_x29 = *(undefined8 *******)(puVar1 + -0xa0);
        unaff_x30 = *(undefined **)(puVar1 + -0x98);
        unaff_x20 = *(undefined8 *)(puVar1 + -0xb0);
        unaff_x19 = *(long *)(puVar1 + -0xa8);
        unaff_x22 = *(undefined8 *)(puVar1 + -0xc0);
        unaff_x21 = *(long *)(puVar1 + -0xb8);
        puVar2 = puVar1 + -0x90;
      }
      goto code_r0x0320d82c;
    }
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x4c);
  }
  unaff_x29 = *(undefined8 *******)(puVar1 + -0x70);
  unaff_x30 = *(undefined **)(puVar1 + -0x68);
  unaff_x20 = *(undefined8 *)(puVar1 + -0x80);
  unaff_x19 = *(long *)(puVar1 + -0x78);
  unaff_x22 = *(undefined8 *)(puVar1 + -0x90);
  unaff_x21 = *(long *)(puVar1 + -0x88);
  puVar2 = puVar1 + -0x60;
code_r0x0320d82c:
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(long *)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(long *)(puVar2 + -0x18) = unaff_x19;
  *(undefined8 *******)(puVar2 + -0x10) = unaff_x29;
  *(undefined **)(puVar2 + -8) = unaff_x30;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*pcRam0000000003ebe460)(lVar8,uVar7);
  return uVar6;
  while( true ) {
    iVar9 = iVar9 + 1;
    lVar5 = *(long *)(lVar8 + 0x18);
    if (lVar5 == 0) break;
code_r0x01538278:
    uVar6 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar5,0);
    if ((int)uVar6 <= iVar9) {
      return uVar6;
    }
    if (*(long *)(lVar8 + 0x18) == 0) break;
    iVar3 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(*(long *)(lVar8 + 0x18),iVar9,extraout_x1,0);
    if (iVar3 != 0) {
      if (*(long *)(lVar8 + 0x18) == 0) break;
      /*UnityEngine.Animator$$Play*/ func_0x03210958(extraout_s0,*(long *)(lVar8 + 0x18),extraout_x1,iVar9,0);
    }
  }
  goto code_r0x015382cc;
}



// ============================================================
// RVA: 0x1537bf8 | Atlas.Gameplay.Kart.BaseVisualBehaviour.TriggerHopBoost
// ============================================================

/* WARNING: Possible PIC construction at 0x01538120: Changing call to branch */

ulong Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerHopBoost
                (undefined1 param_1 [16],uint param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined8 extraout_x1;
  long unaff_x19;
  long lVar8;
  undefined8 unaff_x20;
  int iVar9;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar10;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 ******unaff_x29;
  undefined8 ******ppppppuVar11;
  undefined *unaff_x30;
  undefined *puVar12;
  undefined4 extraout_s0;
  ulong extraout_d0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar13 [12];
  undefined8 *****pppppuStack_40;
  undefined *puStack_38;
  
  puVar1 = &stack0xffffffffffffffd0;
  ppppppuVar11 = (undefined8 ******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ee4 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee4 = 1;
  }
  lVar8 = *(long *)(param_3 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x6c);
    puVar2 = (undefined1 *)register0x00000008;
    goto code_r0x0320d82c;
  }
  puVar12 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHit;
  auVar13 = func_0x00f78af4();
  lVar8 = auVar13._0_8_;
  if (auVar13._8_4_ != 0) {
    puVar1 = &stack0xffffffffffffffa0;
    puStack_38 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHit;
    pppppuStack_40 = ppppppuVar11;
    if ((bRam0000000003eb4ee6 & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4ee6 = 1;
    }
    lVar8 = *(long *)(lVar8 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar8 != 0) {
      uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x44);
      unaff_x20 = 0x3d20028;
      unaff_x21 = 0x3eb4000;
      unaff_x19 = 0;
      puVar2 = &stack0xffffffffffffffd0;
      unaff_x29 = (undefined8 ******)pppppuStack_40;
      unaff_x30 = puStack_38;
      goto code_r0x0320d82c;
    }
    puVar12 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHitSmall;
    lVar8 = func_0x00f78af4();
    ppppppuVar11 = &pppppuStack_40;
  }
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = 0x3eb4000;
  *(undefined8 *)(puVar1 + -0x20) = 0x3d20028;
  *(undefined8 *)(puVar1 + -0x18) = 0;
  *(undefined8 *******)(puVar1 + -0x10) = ppppppuVar11;
  *(undefined **)(puVar1 + -8) = puVar12;
  if ((bRam0000000003eb4ee5 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee5 = 1;
  }
  lVar8 = *(long *)(lVar8 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x40);
    unaff_x29 = *(undefined8 *******)(puVar1 + -0x10);
    unaff_x30 = *(undefined **)(puVar1 + -8);
    unaff_x20 = *(undefined8 *)(puVar1 + -0x20);
    unaff_x19 = *(long *)(puVar1 + -0x18);
    unaff_x22 = *(undefined8 *)(puVar1 + -0x30);
    unaff_x21 = *(long *)(puVar1 + -0x28);
    puVar2 = puVar1;
    goto code_r0x0320d82c;
  }
  lVar8 = func_0x00f78af4();
  *(undefined8 *)(puVar1 + -0x60) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x58) = 0x3eb4000;
  *(undefined8 *)(puVar1 + -0x50) = 0x3d20028;
  *(undefined8 *)(puVar1 + -0x48) = 0;
  *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x10;
  *(undefined **)(puVar1 + -0x38) = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIncoming;
  if ((bRam0000000003eb4ee7 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee7 = 1;
  }
  lVar8 = *(long *)(lVar8 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x48);
    unaff_x29 = *(undefined8 *******)(puVar1 + -0x40);
    unaff_x30 = *(undefined **)(puVar1 + -0x38);
    unaff_x20 = *(undefined8 *)(puVar1 + -0x50);
    unaff_x19 = *(long *)(puVar1 + -0x48);
    unaff_x22 = *(undefined8 *)(puVar1 + -0x60);
    unaff_x21 = *(long *)(puVar1 + -0x58);
    puVar2 = puVar1 + -0x30;
    goto code_r0x0320d82c;
  }
  auVar13 = func_0x00f78af4();
  uVar4 = auVar13._0_8_;
  *(undefined8 *)(puVar1 + -0x90) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x88) = 0x3eb4000;
  *(undefined8 *)(puVar1 + -0x80) = 0x3d20028;
  *(undefined8 *)(puVar1 + -0x78) = 0;
  *(undefined1 **)(puVar1 + -0x70) = puVar1 + -0x40;
  *(undefined **)(puVar1 + -0x68) = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerSideSneer;
  uVar6 = uVar4;
  if ((bRam0000000003eb4ee8 & 1) == 0) {
    uVar6 = func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee8 = 1;
  }
  if (auVar13._8_4_ == 1) {
    lVar8 = *(long *)(uVar4 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar8 == 0) goto code_r0x01537eec;
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x50);
  }
  else {
    if (auVar13._8_4_ != 0) {
      return uVar6;
    }
    lVar8 = *(long *)(uVar4 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar8 == 0) {
code_r0x01537eec:
      lVar8 = func_0x00f78af4();
      *(undefined8 *)(puVar1 + -0xc0) = unaff_x22;
      *(undefined8 *)(puVar1 + -0xb8) = 0x3eb4000;
      *(undefined8 *)(puVar1 + -0xb0) = 0x3d20028;
      *(undefined8 *)(puVar1 + -0xa8) = 0;
      *(undefined1 **)(puVar1 + -0xa0) = puVar1 + -0x70;
      *(undefined **)(puVar1 + -0x98) = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaken;
      if ((bRam0000000003eb4ee9 & 1) == 0) {
        func_0x00f78a20(0x3d20028);
        bRam0000000003eb4ee9 = 1;
      }
      lVar8 = *(long *)(lVar8 + 0x18);
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar8 == 0) {
        lVar8 = func_0x00f78af4();
        *(undefined8 *)(puVar1 + -0xf0) = unaff_x22;
        *(undefined8 *)(puVar1 + -0xe8) = 0x3eb4000;
        *(undefined8 *)(puVar1 + -0xe0) = 0x3d20028;
        *(undefined8 *)(puVar1 + -0xd8) = 0;
        *(undefined1 **)(puVar1 + -0xd0) = puVar1 + -0xa0;
        *(undefined **)(puVar1 + -200) = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaking
        ;
        unaff_x21 = 0x3eb4000;
        if ((bRam0000000003eb4eea & 1) == 0) {
          func_0x00f78a20(0x3d20028);
          bRam0000000003eb4eea = 1;
        }
        lVar8 = *(long *)(lVar8 + 0x18);
        if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar8 == 0) {
          unaff_x19 = func_0x00f78af4();
          puVar2 = puVar1 + -0x1a0;
          *(undefined8 *)(puVar1 + -0x140) = unaff_d9;
          *(undefined8 *)(puVar1 + -0x138) = unaff_d8;
          *(undefined8 *)(puVar1 + -0x130) = unaff_x24;
          *(undefined8 *)(puVar1 + -0x128) = unaff_x23;
          *(undefined8 *)(puVar1 + -0x120) = unaff_x22;
          *(undefined8 *)(puVar1 + -0x118) = 0x3eb4000;
          *(undefined8 *)(puVar1 + -0x110) = 0x3d20028;
          *(undefined8 *)(puVar1 + -0x108) = 0;
          *(undefined1 **)(puVar1 + -0x100) = puVar1 + -0xd0;
          *(undefined **)(puVar1 + -0xf8) = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerImpact;
          unaff_x29 = (undefined8 ******)(puVar1 + -0x100);
          unaff_x20 = 0x3eb4000;
          if ((bRam0000000003eb4eeb & 1) == 0) {
            func_0x00f78a20(0x3d20028);
            bRam0000000003eb4eeb = 1;
          }
          uVar10 = unaff_x22;
          if (*(long *)(unaff_x19 + 0x18) != 0) {
            unaff_x22 = 0x3d20028;
            /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(puVar1 + -0x198,*(long *)(unaff_x19 + 0x18),2,0);
            *(undefined8 *)(puVar1 + -0x168) = *(undefined8 *)(puVar1 + -400);
            *(undefined8 *)(puVar1 + -0x170) = *(undefined8 *)(puVar1 + -0x198);
            *(undefined8 *)(puVar1 + -0x158) = *(undefined8 *)(puVar1 + -0x180);
            *(undefined8 *)(puVar1 + -0x160) = *(undefined8 *)(puVar1 + -0x188);
            *(undefined4 *)(puVar1 + -0x150) = *(undefined4 *)(puVar1 + -0x178);
            unaff_x20 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(puVar1 + -0x170,0);
            if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if ((int)unaff_x20 == **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8)) {
              return (ulong)((int)unaff_x20 != **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8));
            }
            unaff_x21 = *(long *)(unaff_x19 + 0x18);
            if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar10 = 0x3d20028;
            if (unaff_x21 != 0) {
              /*UnityEngine.Animator$$SetFloat*/ func_0x0320d09c(extraout_d0 & 0xffffffff,unaff_x21,
                              *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x60),0);
              if (*(long *)(unaff_x19 + 0x18) != 0) {
                /*UnityEngine.Animator$$SetFloat*/ func_0x0320d09c(param_2,*(long *)(unaff_x19 + 0x18),
                                *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 100),0);
                lVar8 = *(long *)(unaff_x19 + 0x18);
                uVar10 = unaff_x22;
                if (lVar8 != 0) {
                  uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x5c);
                  unaff_x30 = &UNK_01538124;
                  puVar2 = puVar1 + -0x1a0;
                  goto code_r0x0320d82c;
                }
              }
            }
          }
          lVar8 = func_0x00f78af4();
          *(undefined8 *)(puVar1 + -0x1d0) = uVar10;
          *(long *)(puVar1 + -0x1c8) = unaff_x21;
          *(undefined8 *)(puVar1 + -0x1c0) = unaff_x20;
          *(long *)(puVar1 + -0x1b8) = unaff_x19;
          *(undefined8 *******)(puVar1 + -0x1b0) = unaff_x29;
          *(undefined **)(puVar1 + -0x1a8) =
               &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerCelebrateSmall;
          if ((bRam0000000003eb4eec & 1) == 0) {
            func_0x00f78a20(0x3d20028);
            bRam0000000003eb4eec = 1;
          }
          lVar8 = *(long *)(lVar8 + 0x18);
          if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (lVar8 == 0) {
            lVar8 = func_0x00f78af4();
            *(ulong *)(puVar1 + -0x210) = extraout_d0 & 0xffffffff;
            *(ulong *)(puVar1 + -0x208) = (ulong)param_2;
            *(undefined8 *)(puVar1 + -0x200) = uVar10;
            *(undefined8 *)(puVar1 + -0x1f8) = 0x3eb4000;
            *(undefined8 *)(puVar1 + -0x1f0) = 0x3d20028;
            *(undefined8 *)(puVar1 + -0x1e8) = 0;
            *(undefined1 **)(puVar1 + -0x1e0) = puVar1 + -0x1b0;
            *(undefined **)(puVar1 + -0x1d8) =
                 &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayAnimatorStateOverride;
            *(undefined4 *)(puVar1 + -0x220) = 0;
            *(undefined8 *)(puVar1 + -0x238) = 0;
            *(undefined8 *)(puVar1 + -0x240) = 0;
            *(undefined8 *)(puVar1 + -0x228) = 0;
            *(undefined8 *)(puVar1 + -0x230) = 0;
            lVar5 = *(long *)(lVar8 + 0x18);
            if (lVar5 != 0) {
              iVar9 = 0;
              do {
                iVar3 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar5,0);
                lVar5 = *(long *)(lVar8 + 0x18);
                if (iVar3 <= iVar9) {
                  if (lVar5 != 0) {
                    iVar9 = 0;
                    goto code_r0x01538278;
                  }
                  break;
                }
                if (lVar5 == 0) break;
                /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(puVar1 + -0x268,lVar5,iVar9,0);
                *(undefined8 *)(puVar1 + -0x238) = *(undefined8 *)(puVar1 + -0x260);
                *(undefined8 *)(puVar1 + -0x240) = *(undefined8 *)(puVar1 + -0x268);
                *(undefined8 *)(puVar1 + -0x228) = *(undefined8 *)(puVar1 + -0x250);
                *(undefined8 *)(puVar1 + -0x230) = *(undefined8 *)(puVar1 + -600);
                *(undefined4 *)(puVar1 + -0x220) = *(undefined4 *)(puVar1 + -0x248);
                uVar6 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(puVar1 + -0x240,0);
                if ((int)uVar6 == (int)extraout_x1) {
                  return uVar6;
                }
                iVar9 = iVar9 + 1;
                lVar5 = *(long *)(lVar8 + 0x18);
              } while (lVar5 != 0);
            }
code_r0x015382cc:
            uVar6 = func_0x00f78af4();
            return uVar6;
          }
          uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x68);
          unaff_x29 = *(undefined8 *******)(puVar1 + -0x1b0);
          unaff_x30 = *(undefined **)(puVar1 + -0x1a8);
          unaff_x20 = *(undefined8 *)(puVar1 + -0x1c0);
          unaff_x19 = *(long *)(puVar1 + -0x1b8);
          unaff_x22 = *(undefined8 *)(puVar1 + -0x1d0);
          unaff_x21 = *(long *)(puVar1 + -0x1c8);
        }
        else {
          uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x58);
          unaff_x29 = *(undefined8 *******)(puVar1 + -0xd0);
          unaff_x30 = *(undefined **)(puVar1 + -200);
          unaff_x20 = *(undefined8 *)(puVar1 + -0xe0);
          unaff_x19 = *(long *)(puVar1 + -0xd8);
          unaff_x22 = *(undefined8 *)(puVar1 + -0xf0);
          unaff_x21 = *(long *)(puVar1 + -0xe8);
          puVar2 = puVar1 + -0xc0;
        }
      }
      else {
        uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x54);
        unaff_x29 = *(undefined8 *******)(puVar1 + -0xa0);
        unaff_x30 = *(undefined **)(puVar1 + -0x98);
        unaff_x20 = *(undefined8 *)(puVar1 + -0xb0);
        unaff_x19 = *(long *)(puVar1 + -0xa8);
        unaff_x22 = *(undefined8 *)(puVar1 + -0xc0);
        unaff_x21 = *(long *)(puVar1 + -0xb8);
        puVar2 = puVar1 + -0x90;
      }
      goto code_r0x0320d82c;
    }
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x4c);
  }
  unaff_x29 = *(undefined8 *******)(puVar1 + -0x70);
  unaff_x30 = *(undefined **)(puVar1 + -0x68);
  unaff_x20 = *(undefined8 *)(puVar1 + -0x80);
  unaff_x19 = *(long *)(puVar1 + -0x78);
  unaff_x22 = *(undefined8 *)(puVar1 + -0x90);
  unaff_x21 = *(long *)(puVar1 + -0x88);
  puVar2 = puVar1 + -0x60;
code_r0x0320d82c:
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(long *)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(long *)(puVar2 + -0x18) = unaff_x19;
  *(undefined8 *******)(puVar2 + -0x10) = unaff_x29;
  *(undefined **)(puVar2 + -8) = unaff_x30;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*pcRam0000000003ebe460)(lVar8,uVar7);
  return uVar6;
  while( true ) {
    iVar9 = iVar9 + 1;
    lVar5 = *(long *)(lVar8 + 0x18);
    if (lVar5 == 0) break;
code_r0x01538278:
    uVar6 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar5,0);
    if ((int)uVar6 <= iVar9) {
      return uVar6;
    }
    if (*(long *)(lVar8 + 0x18) == 0) break;
    iVar3 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(*(long *)(lVar8 + 0x18),iVar9,extraout_x1,0);
    if (iVar3 != 0) {
      if (*(long *)(lVar8 + 0x18) == 0) break;
      /*UnityEngine.Animator$$Play*/ func_0x03210958(extraout_s0,*(long *)(lVar8 + 0x18),extraout_x1,iVar9,0);
    }
  }
  goto code_r0x015382cc;
}



// ============================================================
// RVA: 0x1537c7c | Atlas.Gameplay.Kart.BaseVisualBehaviour.TriggerGetHit
// ============================================================

/* WARNING: Possible PIC construction at 0x01538120: Changing call to branch */

ulong Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHit
                (undefined1 param_1 [16],uint param_2,long param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 extraout_x1;
  long unaff_x19;
  long lVar7;
  undefined8 unaff_x20;
  int iVar8;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar9;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined4 extraout_s0;
  ulong extraout_d0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar10 [12];
  
  if (param_4 != 0) {
    puVar1 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb4ee6 & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4ee6 = 1;
    }
    lVar7 = *(long *)(param_3 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar7 != 0) {
      uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x44);
      puVar1 = (undefined1 *)register0x00000008;
      goto code_r0x0320d82c;
    }
    unaff_x30 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHitSmall;
    param_3 = func_0x00f78af4();
    unaff_x19 = 0;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x20 = 0x3d20028;
    unaff_x21 = 0x3eb4000;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb4ee5 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee5 = 1;
  }
  lVar7 = *(long *)(param_3 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 != 0) {
    uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x40);
    unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
    unaff_x30 = *(undefined **)((long)register0x00000008 + -8);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x20);
    unaff_x19 = *(long *)((long)register0x00000008 + -0x18);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x21 = *(long *)((long)register0x00000008 + -0x28);
    puVar1 = (undefined1 *)register0x00000008;
    goto code_r0x0320d82c;
  }
  lVar7 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0x50) = 0x3d20028;
  *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x38) =
       &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIncoming;
  if ((bRam0000000003eb4ee7 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee7 = 1;
  }
  lVar7 = *(long *)(lVar7 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 != 0) {
    uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x48);
    unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x40);
    unaff_x30 = *(undefined **)((long)register0x00000008 + -0x38);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x50);
    unaff_x19 = *(long *)((long)register0x00000008 + -0x48);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x21 = *(long *)((long)register0x00000008 + -0x58);
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x30);
    goto code_r0x0320d82c;
  }
  auVar10 = func_0x00f78af4();
  uVar3 = auVar10._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0x80) = 0x3d20028;
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x40);
  *(undefined **)((long)register0x00000008 + -0x68) =
       &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerSideSneer;
  uVar5 = uVar3;
  if ((bRam0000000003eb4ee8 & 1) == 0) {
    uVar5 = func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee8 = 1;
  }
  if (auVar10._8_4_ == 1) {
    lVar7 = *(long *)(uVar3 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar7 == 0) goto code_r0x01537eec;
    uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x50);
  }
  else {
    if (auVar10._8_4_ != 0) {
      return uVar5;
    }
    lVar7 = *(long *)(uVar3 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar7 == 0) {
code_r0x01537eec:
      lVar7 = func_0x00f78af4();
      *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x3eb4000;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = 0x3d20028;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
      *(undefined1 **)((long)register0x00000008 + -0xa0) =
           (undefined1 *)((long)register0x00000008 + -0x70);
      *(undefined **)((long)register0x00000008 + -0x98) =
           &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaken;
      if ((bRam0000000003eb4ee9 & 1) == 0) {
        func_0x00f78a20(0x3d20028);
        bRam0000000003eb4ee9 = 1;
      }
      lVar7 = *(long *)(lVar7 + 0x18);
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar7 == 0) {
        lVar7 = func_0x00f78af4();
        *(undefined8 *)((long)register0x00000008 + -0xf0) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0xe8) = 0x3eb4000;
        *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x3d20028;
        *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
        *(undefined1 **)((long)register0x00000008 + -0xd0) =
             (undefined1 *)((long)register0x00000008 + -0xa0);
        *(undefined **)((long)register0x00000008 + -200) =
             &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaking;
        unaff_x21 = 0x3eb4000;
        if ((bRam0000000003eb4eea & 1) == 0) {
          func_0x00f78a20(0x3d20028);
          bRam0000000003eb4eea = 1;
        }
        lVar7 = *(long *)(lVar7 + 0x18);
        if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar7 == 0) {
          unaff_x19 = func_0x00f78af4();
          puVar1 = (undefined1 *)((long)register0x00000008 + -0x1a0);
          *(undefined8 *)((long)register0x00000008 + -0x140) = unaff_d9;
          *(undefined8 *)((long)register0x00000008 + -0x138) = unaff_d8;
          *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_x24;
          *(undefined8 *)((long)register0x00000008 + -0x128) = unaff_x23;
          *(undefined8 *)((long)register0x00000008 + -0x120) = unaff_x22;
          *(undefined8 *)((long)register0x00000008 + -0x118) = 0x3eb4000;
          *(undefined8 *)((long)register0x00000008 + -0x110) = 0x3d20028;
          *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
          *(undefined1 **)((long)register0x00000008 + -0x100) =
               (undefined1 *)((long)register0x00000008 + -0xd0);
          *(undefined **)((long)register0x00000008 + -0xf8) =
               &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerImpact;
          unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x100);
          unaff_x20 = 0x3eb4000;
          if ((bRam0000000003eb4eeb & 1) == 0) {
            func_0x00f78a20(0x3d20028);
            bRam0000000003eb4eeb = 1;
          }
          uVar9 = unaff_x22;
          if (*(long *)(unaff_x19 + 0x18) != 0) {
            unaff_x22 = 0x3d20028;
            /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50((undefined1 *)((long)register0x00000008 + -0x198),
                            *(long *)(unaff_x19 + 0x18),2,0);
            *(undefined8 *)((long)register0x00000008 + -0x168) =
                 *(undefined8 *)((long)register0x00000008 + -400);
            *(undefined8 *)((long)register0x00000008 + -0x170) =
                 *(undefined8 *)((long)register0x00000008 + -0x198);
            *(undefined8 *)((long)register0x00000008 + -0x158) =
                 *(undefined8 *)((long)register0x00000008 + -0x180);
            *(undefined8 *)((long)register0x00000008 + -0x160) =
                 *(undefined8 *)((long)register0x00000008 + -0x188);
            *(undefined4 *)((long)register0x00000008 + -0x150) =
                 *(undefined4 *)((long)register0x00000008 + -0x178);
            unaff_x20 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4((undefined1 *)((long)register0x00000008 + -0x170),0);
            if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if ((int)unaff_x20 == **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8)) {
              return (ulong)((int)unaff_x20 != **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8));
            }
            unaff_x21 = *(long *)(unaff_x19 + 0x18);
            if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar9 = 0x3d20028;
            if (unaff_x21 != 0) {
              /*UnityEngine.Animator$$SetFloat*/ func_0x0320d09c(extraout_d0 & 0xffffffff,unaff_x21,
                              *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x60),0);
              if (*(long *)(unaff_x19 + 0x18) != 0) {
                /*UnityEngine.Animator$$SetFloat*/ func_0x0320d09c(param_2,*(long *)(unaff_x19 + 0x18),
                                *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 100),0);
                lVar7 = *(long *)(unaff_x19 + 0x18);
                uVar9 = unaff_x22;
                if (lVar7 != 0) {
                  uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x5c);
                  unaff_x30 = &UNK_01538124;
                  puVar1 = (undefined1 *)((long)register0x00000008 + -0x1a0);
                  goto code_r0x0320d82c;
                }
              }
            }
          }
          lVar7 = func_0x00f78af4();
          *(undefined8 *)((long)register0x00000008 + -0x1d0) = uVar9;
          *(long *)((long)register0x00000008 + -0x1c8) = unaff_x21;
          *(undefined8 *)((long)register0x00000008 + -0x1c0) = unaff_x20;
          *(long *)((long)register0x00000008 + -0x1b8) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x1b0) = unaff_x29;
          *(undefined **)((long)register0x00000008 + -0x1a8) =
               &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerCelebrateSmall;
          if ((bRam0000000003eb4eec & 1) == 0) {
            func_0x00f78a20(0x3d20028);
            bRam0000000003eb4eec = 1;
          }
          lVar7 = *(long *)(lVar7 + 0x18);
          if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (lVar7 == 0) {
            lVar7 = func_0x00f78af4();
            *(ulong *)((long)register0x00000008 + -0x210) = extraout_d0 & 0xffffffff;
            *(ulong *)((long)register0x00000008 + -0x208) = (ulong)param_2;
            *(undefined8 *)((long)register0x00000008 + -0x200) = uVar9;
            *(undefined8 *)((long)register0x00000008 + -0x1f8) = 0x3eb4000;
            *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0x3d20028;
            *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
            *(undefined1 **)((long)register0x00000008 + -0x1e0) =
                 (undefined1 *)((long)register0x00000008 + -0x1b0);
            *(undefined **)((long)register0x00000008 + -0x1d8) =
                 &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayAnimatorStateOverride;
            *(undefined4 *)((long)register0x00000008 + -0x220) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x238) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x240) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x228) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x230) = 0;
            lVar4 = *(long *)(lVar7 + 0x18);
            if (lVar4 != 0) {
              iVar8 = 0;
              do {
                iVar2 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar4,0);
                lVar4 = *(long *)(lVar7 + 0x18);
                if (iVar2 <= iVar8) {
                  if (lVar4 != 0) {
                    iVar8 = 0;
                    goto code_r0x01538278;
                  }
                  break;
                }
                if (lVar4 == 0) break;
                /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50((undefined1 *)((long)register0x00000008 + -0x268),lVar4,iVar8,0);
                *(undefined8 *)((long)register0x00000008 + -0x238) =
                     *(undefined8 *)((long)register0x00000008 + -0x260);
                *(undefined8 *)((long)register0x00000008 + -0x240) =
                     *(undefined8 *)((long)register0x00000008 + -0x268);
                *(undefined8 *)((long)register0x00000008 + -0x228) =
                     *(undefined8 *)((long)register0x00000008 + -0x250);
                *(undefined8 *)((long)register0x00000008 + -0x230) =
                     *(undefined8 *)((long)register0x00000008 + -600);
                *(undefined4 *)((long)register0x00000008 + -0x220) =
                     *(undefined4 *)((long)register0x00000008 + -0x248);
                uVar5 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4((undefined1 *)((long)register0x00000008 + -0x240),0);
                if ((int)uVar5 == (int)extraout_x1) {
                  return uVar5;
                }
                iVar8 = iVar8 + 1;
                lVar4 = *(long *)(lVar7 + 0x18);
              } while (lVar4 != 0);
            }
code_r0x015382cc:
            uVar5 = func_0x00f78af4();
            return uVar5;
          }
          uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x68);
          unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x1b0);
          unaff_x30 = *(undefined **)((long)register0x00000008 + -0x1a8);
          unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x1c0);
          unaff_x19 = *(long *)((long)register0x00000008 + -0x1b8);
          unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x1d0);
          unaff_x21 = *(long *)((long)register0x00000008 + -0x1c8);
        }
        else {
          uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x58);
          unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0xd0);
          unaff_x30 = *(undefined **)((long)register0x00000008 + -200);
          unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0xe0);
          unaff_x19 = *(long *)((long)register0x00000008 + -0xd8);
          unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0xf0);
          unaff_x21 = *(long *)((long)register0x00000008 + -0xe8);
          puVar1 = (undefined1 *)((long)register0x00000008 + -0xc0);
        }
      }
      else {
        uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x54);
        unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0xa0);
        unaff_x30 = *(undefined **)((long)register0x00000008 + -0x98);
        unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0xb0);
        unaff_x19 = *(long *)((long)register0x00000008 + -0xa8);
        unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0xc0);
        unaff_x21 = *(long *)((long)register0x00000008 + -0xb8);
        puVar1 = (undefined1 *)((long)register0x00000008 + -0x90);
      }
      goto code_r0x0320d82c;
    }
    uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x4c);
  }
  unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x70);
  unaff_x30 = *(undefined **)((long)register0x00000008 + -0x68);
  unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
  unaff_x19 = *(long *)((long)register0x00000008 + -0x78);
  unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x90);
  unaff_x21 = *(long *)((long)register0x00000008 + -0x88);
  puVar1 = (undefined1 *)((long)register0x00000008 + -0x60);
code_r0x0320d82c:
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(long *)(puVar1 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
  *(long *)(puVar1 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
  *(undefined **)(puVar1 + -8) = unaff_x30;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*pcRam0000000003ebe460)(lVar7,uVar6);
  return uVar5;
  while( true ) {
    iVar8 = iVar8 + 1;
    lVar4 = *(long *)(lVar7 + 0x18);
    if (lVar4 == 0) break;
code_r0x01538278:
    uVar5 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar4,0);
    if ((int)uVar5 <= iVar8) {
      return uVar5;
    }
    if (*(long *)(lVar7 + 0x18) == 0) break;
    iVar2 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(*(long *)(lVar7 + 0x18),iVar8,extraout_x1,0);
    if (iVar2 != 0) {
      if (*(long *)(lVar7 + 0x18) == 0) break;
      /*UnityEngine.Animator$$Play*/ func_0x03210958(extraout_s0,*(long *)(lVar7 + 0x18),extraout_x1,iVar8,0);
    }
  }
  goto code_r0x015382cc;
}



// ============================================================
// RVA: 0x1537c88 | Atlas.Gameplay.Kart.BaseVisualBehaviour.TriggerGetHitBig
// ============================================================

/* WARNING: Possible PIC construction at 0x01538120: Changing call to branch */

ulong Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHitBig
                (undefined1 param_1 [16],uint param_2,long param_3)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 extraout_x1;
  long unaff_x19;
  long lVar7;
  undefined8 unaff_x20;
  int iVar8;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar9;
  undefined8 ******unaff_x29;
  undefined *unaff_x30;
  undefined4 extraout_s0;
  ulong extraout_d0;
  undefined1 auVar10 [12];
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined4 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  ulong uStack_240;
  ulong uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 *****pppppuStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 *****pppppuStack_1e0;
  undefined *puStack_1d8;
  undefined1 auStack_1d0 [8];
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 *****pppppuStack_130;
  undefined *puStack_128;
  undefined8 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined8 *****pppppuStack_d0;
  undefined *puStack_c8;
  undefined8 *****pppppuStack_a0;
  undefined *puStack_98;
  undefined8 *****pppppuStack_70;
  undefined *puStack_68;
  undefined8 *****pppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4ee6 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee6 = 1;
  }
  lVar7 = *(long *)(param_3 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 != 0) {
    uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x44);
    puVar1 = (undefined1 *)register0x00000008;
    goto code_r0x0320d82c;
  }
  lVar7 = func_0x00f78af4();
  puStack_38 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHitSmall;
  pppppuStack_40 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ee5 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee5 = 1;
  }
  lVar7 = *(long *)(lVar7 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 != 0) {
    uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x40);
    unaff_x20 = 0x3d20028;
    puVar1 = &stack0xffffffffffffffd0;
    unaff_x21 = 0x3eb4000;
    unaff_x19 = 0;
    unaff_x29 = (undefined8 ******)pppppuStack_40;
    unaff_x30 = puStack_38;
    goto code_r0x0320d82c;
  }
  lVar7 = func_0x00f78af4();
  puStack_68 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIncoming;
  pppppuStack_70 = &pppppuStack_40;
  if ((bRam0000000003eb4ee7 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee7 = 1;
  }
  lVar7 = *(long *)(lVar7 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 != 0) {
    uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x48);
    unaff_x20 = 0x3d20028;
    puVar1 = &stack0xffffffffffffffa0;
    unaff_x21 = 0x3eb4000;
    unaff_x19 = 0;
    unaff_x29 = (undefined8 ******)pppppuStack_70;
    unaff_x30 = puStack_68;
    goto code_r0x0320d82c;
  }
  auVar10 = func_0x00f78af4();
  uVar3 = auVar10._0_8_;
  puStack_98 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerSideSneer;
  uVar5 = uVar3;
  pppppuStack_a0 = &pppppuStack_70;
  if ((bRam0000000003eb4ee8 & 1) == 0) {
    uVar5 = func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee8 = 1;
  }
  if (auVar10._8_4_ == 1) {
    lVar7 = *(long *)(uVar3 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar7 == 0) goto code_r0x01537eec;
    uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x50);
  }
  else {
    if (auVar10._8_4_ != 0) {
      return uVar5;
    }
    lVar7 = *(long *)(uVar3 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar7 == 0) {
code_r0x01537eec:
      unaff_x19 = 0;
      lVar7 = func_0x00f78af4();
      puStack_c8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaken;
      pppppuStack_d0 = &pppppuStack_a0;
      if ((bRam0000000003eb4ee9 & 1) == 0) {
        func_0x00f78a20(0x3d20028);
        bRam0000000003eb4ee9 = 1;
      }
      lVar7 = *(long *)(lVar7 + 0x18);
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar7 == 0) {
        lVar7 = func_0x00f78af4();
        puStack_f8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaking;
        unaff_x21 = 0x3eb4000;
        pppppuStack_100 = &pppppuStack_d0;
        if ((bRam0000000003eb4eea & 1) == 0) {
          func_0x00f78a20(0x3d20028);
          bRam0000000003eb4eea = 1;
        }
        lVar7 = *(long *)(lVar7 + 0x18);
        if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar7 == 0) {
          unaff_x19 = func_0x00f78af4();
          puVar1 = auStack_1d0;
          puStack_128 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerImpact;
          unaff_x29 = &pppppuStack_130;
          unaff_x20 = 0x3eb4000;
          pppppuStack_130 = &pppppuStack_100;
          if ((bRam0000000003eb4eeb & 1) == 0) {
            func_0x00f78a20(0x3d20028);
            bRam0000000003eb4eeb = 1;
          }
          uVar9 = unaff_x22;
          if (*(long *)(unaff_x19 + 0x18) != 0) {
            unaff_x22 = 0x3d20028;
            /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_1c8,*(long *)(unaff_x19 + 0x18),2,0);
            uStack_198 = uStack_1c0;
            uStack_1a0 = uStack_1c8;
            uStack_188 = uStack_1b0;
            uStack_190 = uStack_1b8;
            uStack_180 = uStack_1a8;
            unaff_x20 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_1a0,0);
            if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if ((int)unaff_x20 == **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8)) {
              return (ulong)((int)unaff_x20 != **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8));
            }
            unaff_x21 = *(long *)(unaff_x19 + 0x18);
            if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar9 = 0x3d20028;
            if (unaff_x21 != 0) {
              /*UnityEngine.Animator$$SetFloat*/ func_0x0320d09c(extraout_d0 & 0xffffffff,unaff_x21,
                              *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x60),0);
              if (*(long *)(unaff_x19 + 0x18) != 0) {
                /*UnityEngine.Animator$$SetFloat*/ func_0x0320d09c(param_2,*(long *)(unaff_x19 + 0x18),
                                *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 100),0);
                lVar7 = *(long *)(unaff_x19 + 0x18);
                uVar9 = unaff_x22;
                if (lVar7 != 0) {
                  uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x5c);
                  unaff_x30 = &UNK_01538124;
                  goto code_r0x0320d82c;
                }
              }
            }
          }
          lVar7 = func_0x00f78af4();
          puStack_1d8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerCelebrateSmall;
          uStack_200 = uVar9;
          lStack_1f8 = unaff_x21;
          uStack_1f0 = unaff_x20;
          lStack_1e8 = unaff_x19;
          pppppuStack_1e0 = unaff_x29;
          if ((bRam0000000003eb4eec & 1) == 0) {
            func_0x00f78a20(0x3d20028);
            bRam0000000003eb4eec = 1;
          }
          lVar7 = *(long *)(lVar7 + 0x18);
          if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (lVar7 == 0) {
            lVar7 = func_0x00f78af4();
            uStack_228 = 0x3eb4000;
            uStack_220 = 0x3d20028;
            puStack_208 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayAnimatorStateOverride;
            uStack_250 = 0;
            uStack_268 = 0;
            uStack_270 = 0;
            uStack_258 = 0;
            uStack_260 = 0;
            lVar4 = *(long *)(lVar7 + 0x18);
            uStack_218 = 0;
            uStack_240 = extraout_d0 & 0xffffffff;
            uStack_238 = (ulong)param_2;
            uStack_230 = uVar9;
            pppppuStack_210 = &pppppuStack_1e0;
            if (lVar4 != 0) {
              iVar8 = 0;
              do {
                iVar2 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar4,0);
                lVar4 = *(long *)(lVar7 + 0x18);
                if (iVar2 <= iVar8) {
                  if (lVar4 != 0) {
                    iVar8 = 0;
                    goto code_r0x01538278;
                  }
                  break;
                }
                if (lVar4 == 0) break;
                /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_298,lVar4,iVar8,0);
                uStack_268 = uStack_290;
                uStack_270 = uStack_298;
                uStack_258 = uStack_280;
                uStack_260 = uStack_288;
                uStack_250 = uStack_278;
                uVar5 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_270,0);
                if ((int)uVar5 == (int)extraout_x1) {
                  return uVar5;
                }
                iVar8 = iVar8 + 1;
                lVar4 = *(long *)(lVar7 + 0x18);
              } while (lVar4 != 0);
            }
code_r0x015382cc:
            uVar5 = func_0x00f78af4();
            return uVar5;
          }
          uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x68);
          puVar1 = auStack_1d0;
          unaff_x19 = lStack_1e8;
          unaff_x20 = uStack_1f0;
          unaff_x21 = lStack_1f8;
          unaff_x22 = uStack_200;
          unaff_x29 = (undefined8 ******)pppppuStack_1e0;
          unaff_x30 = puStack_1d8;
        }
        else {
          uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x58);
          unaff_x20 = 0x3d20028;
          puVar1 = &stack0xffffffffffffff10;
          unaff_x21 = 0x3eb4000;
          unaff_x19 = 0;
          unaff_x29 = (undefined8 ******)pppppuStack_100;
          unaff_x30 = puStack_f8;
        }
      }
      else {
        uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x54);
        unaff_x20 = 0x3d20028;
        puVar1 = &stack0xffffffffffffff40;
        unaff_x21 = 0x3eb4000;
        unaff_x29 = (undefined8 ******)pppppuStack_d0;
        unaff_x30 = puStack_c8;
      }
      goto code_r0x0320d82c;
    }
    uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x4c);
  }
  unaff_x20 = 0x3d20028;
  puVar1 = &stack0xffffffffffffff70;
  unaff_x21 = 0x3eb4000;
  unaff_x19 = 0;
  unaff_x29 = (undefined8 ******)pppppuStack_a0;
  unaff_x30 = puStack_98;
code_r0x0320d82c:
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(long *)(puVar1 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
  *(long *)(puVar1 + -0x18) = unaff_x19;
  *(undefined8 *******)(puVar1 + -0x10) = unaff_x29;
  *(undefined **)(puVar1 + -8) = unaff_x30;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*pcRam0000000003ebe460)(lVar7,uVar6);
  return uVar5;
  while( true ) {
    iVar8 = iVar8 + 1;
    lVar4 = *(long *)(lVar7 + 0x18);
    if (lVar4 == 0) break;
code_r0x01538278:
    uVar5 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar4,0);
    if ((int)uVar5 <= iVar8) {
      return uVar5;
    }
    if (*(long *)(lVar7 + 0x18) == 0) break;
    iVar2 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(*(long *)(lVar7 + 0x18),iVar8,extraout_x1,0);
    if (iVar2 != 0) {
      if (*(long *)(lVar7 + 0x18) == 0) break;
      /*UnityEngine.Animator$$Play*/ func_0x03210958(extraout_s0,*(long *)(lVar7 + 0x18),extraout_x1,iVar8,0);
    }
  }
  goto code_r0x015382cc;
}



// ============================================================
// RVA: 0x1537d0c | Atlas.Gameplay.Kart.BaseVisualBehaviour.TriggerGetHitSmall
// ============================================================

/* WARNING: Possible PIC construction at 0x01538120: Changing call to branch */

ulong Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHitSmall
                (undefined1 param_1 [16],uint param_2,long param_3)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 extraout_x1;
  long unaff_x19;
  long lVar7;
  undefined8 unaff_x20;
  int iVar8;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar9;
  undefined8 ******unaff_x29;
  undefined *unaff_x30;
  undefined4 extraout_s0;
  ulong extraout_d0;
  undefined1 auVar10 [12];
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  ulong uStack_210;
  ulong uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *****pppppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 *****pppppuStack_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined8 *****pppppuStack_d0;
  undefined *puStack_c8;
  undefined8 *****pppppuStack_a0;
  undefined *puStack_98;
  undefined8 *****pppppuStack_70;
  undefined *puStack_68;
  undefined8 *****pppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4ee5 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee5 = 1;
  }
  lVar7 = *(long *)(param_3 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 != 0) {
    uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x40);
    puVar1 = (undefined1 *)register0x00000008;
    goto code_r0x0320d82c;
  }
  lVar7 = func_0x00f78af4();
  puStack_38 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIncoming;
  pppppuStack_40 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ee7 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee7 = 1;
  }
  lVar7 = *(long *)(lVar7 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 != 0) {
    uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x48);
    unaff_x20 = 0x3d20028;
    puVar1 = &stack0xffffffffffffffd0;
    unaff_x21 = 0x3eb4000;
    unaff_x19 = 0;
    unaff_x29 = (undefined8 ******)pppppuStack_40;
    unaff_x30 = puStack_38;
    goto code_r0x0320d82c;
  }
  auVar10 = func_0x00f78af4();
  uVar3 = auVar10._0_8_;
  puStack_68 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerSideSneer;
  uVar5 = uVar3;
  pppppuStack_70 = &pppppuStack_40;
  if ((bRam0000000003eb4ee8 & 1) == 0) {
    uVar5 = func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee8 = 1;
  }
  if (auVar10._8_4_ == 1) {
    lVar7 = *(long *)(uVar3 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar7 == 0) goto code_r0x01537eec;
    uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x50);
  }
  else {
    if (auVar10._8_4_ != 0) {
      return uVar5;
    }
    lVar7 = *(long *)(uVar3 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar7 == 0) {
code_r0x01537eec:
      unaff_x19 = 0;
      lVar7 = func_0x00f78af4();
      puStack_98 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaken;
      pppppuStack_a0 = &pppppuStack_70;
      if ((bRam0000000003eb4ee9 & 1) == 0) {
        func_0x00f78a20(0x3d20028);
        bRam0000000003eb4ee9 = 1;
      }
      lVar7 = *(long *)(lVar7 + 0x18);
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar7 == 0) {
        lVar7 = func_0x00f78af4();
        puStack_c8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaking;
        unaff_x21 = 0x3eb4000;
        pppppuStack_d0 = &pppppuStack_a0;
        if ((bRam0000000003eb4eea & 1) == 0) {
          func_0x00f78a20(0x3d20028);
          bRam0000000003eb4eea = 1;
        }
        lVar7 = *(long *)(lVar7 + 0x18);
        if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar7 == 0) {
          unaff_x19 = func_0x00f78af4();
          puVar1 = auStack_1a0;
          puStack_f8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerImpact;
          unaff_x29 = &pppppuStack_100;
          unaff_x20 = 0x3eb4000;
          pppppuStack_100 = &pppppuStack_d0;
          if ((bRam0000000003eb4eeb & 1) == 0) {
            func_0x00f78a20(0x3d20028);
            bRam0000000003eb4eeb = 1;
          }
          uVar9 = unaff_x22;
          if (*(long *)(unaff_x19 + 0x18) != 0) {
            unaff_x22 = 0x3d20028;
            /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_198,*(long *)(unaff_x19 + 0x18),2,0);
            uStack_168 = uStack_190;
            uStack_170 = uStack_198;
            uStack_158 = uStack_180;
            uStack_160 = uStack_188;
            uStack_150 = uStack_178;
            unaff_x20 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_170,0);
            if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if ((int)unaff_x20 == **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8)) {
              return (ulong)((int)unaff_x20 != **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8));
            }
            unaff_x21 = *(long *)(unaff_x19 + 0x18);
            if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar9 = 0x3d20028;
            if (unaff_x21 != 0) {
              /*UnityEngine.Animator$$SetFloat*/ func_0x0320d09c(extraout_d0 & 0xffffffff,unaff_x21,
                              *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x60),0);
              if (*(long *)(unaff_x19 + 0x18) != 0) {
                /*UnityEngine.Animator$$SetFloat*/ func_0x0320d09c(param_2,*(long *)(unaff_x19 + 0x18),
                                *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 100),0);
                lVar7 = *(long *)(unaff_x19 + 0x18);
                uVar9 = unaff_x22;
                if (lVar7 != 0) {
                  uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x5c);
                  unaff_x30 = &UNK_01538124;
                  goto code_r0x0320d82c;
                }
              }
            }
          }
          lVar7 = func_0x00f78af4();
          puStack_1a8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerCelebrateSmall;
          uStack_1d0 = uVar9;
          lStack_1c8 = unaff_x21;
          uStack_1c0 = unaff_x20;
          lStack_1b8 = unaff_x19;
          pppppuStack_1b0 = unaff_x29;
          if ((bRam0000000003eb4eec & 1) == 0) {
            func_0x00f78a20(0x3d20028);
            bRam0000000003eb4eec = 1;
          }
          lVar7 = *(long *)(lVar7 + 0x18);
          if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (lVar7 == 0) {
            lVar7 = func_0x00f78af4();
            uStack_1f8 = 0x3eb4000;
            uStack_1f0 = 0x3d20028;
            puStack_1d8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayAnimatorStateOverride;
            uStack_220 = 0;
            uStack_238 = 0;
            uStack_240 = 0;
            uStack_228 = 0;
            uStack_230 = 0;
            lVar4 = *(long *)(lVar7 + 0x18);
            uStack_1e8 = 0;
            uStack_210 = extraout_d0 & 0xffffffff;
            uStack_208 = (ulong)param_2;
            uStack_200 = uVar9;
            pppppuStack_1e0 = &pppppuStack_1b0;
            if (lVar4 != 0) {
              iVar8 = 0;
              do {
                iVar2 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar4,0);
                lVar4 = *(long *)(lVar7 + 0x18);
                if (iVar2 <= iVar8) {
                  if (lVar4 != 0) {
                    iVar8 = 0;
                    goto code_r0x01538278;
                  }
                  break;
                }
                if (lVar4 == 0) break;
                /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_268,lVar4,iVar8,0);
                uStack_238 = uStack_260;
                uStack_240 = uStack_268;
                uStack_228 = uStack_250;
                uStack_230 = uStack_258;
                uStack_220 = uStack_248;
                uVar5 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_240,0);
                if ((int)uVar5 == (int)extraout_x1) {
                  return uVar5;
                }
                iVar8 = iVar8 + 1;
                lVar4 = *(long *)(lVar7 + 0x18);
              } while (lVar4 != 0);
            }
code_r0x015382cc:
            uVar5 = func_0x00f78af4();
            return uVar5;
          }
          uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x68);
          puVar1 = auStack_1a0;
          unaff_x19 = lStack_1b8;
          unaff_x20 = uStack_1c0;
          unaff_x21 = lStack_1c8;
          unaff_x22 = uStack_1d0;
          unaff_x29 = (undefined8 ******)pppppuStack_1b0;
          unaff_x30 = puStack_1a8;
        }
        else {
          uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x58);
          unaff_x20 = 0x3d20028;
          puVar1 = &stack0xffffffffffffff40;
          unaff_x21 = 0x3eb4000;
          unaff_x19 = 0;
          unaff_x29 = (undefined8 ******)pppppuStack_d0;
          unaff_x30 = puStack_c8;
        }
      }
      else {
        uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x54);
        unaff_x20 = 0x3d20028;
        puVar1 = &stack0xffffffffffffff70;
        unaff_x21 = 0x3eb4000;
        unaff_x29 = (undefined8 ******)pppppuStack_a0;
        unaff_x30 = puStack_98;
      }
      goto code_r0x0320d82c;
    }
    uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x4c);
  }
  unaff_x20 = 0x3d20028;
  puVar1 = &stack0xffffffffffffffa0;
  unaff_x21 = 0x3eb4000;
  unaff_x19 = 0;
  unaff_x29 = (undefined8 ******)pppppuStack_70;
  unaff_x30 = puStack_68;
code_r0x0320d82c:
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(long *)(puVar1 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
  *(long *)(puVar1 + -0x18) = unaff_x19;
  *(undefined8 *******)(puVar1 + -0x10) = unaff_x29;
  *(undefined **)(puVar1 + -8) = unaff_x30;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*pcRam0000000003ebe460)(lVar7,uVar6);
  return uVar5;
  while( true ) {
    iVar8 = iVar8 + 1;
    lVar4 = *(long *)(lVar7 + 0x18);
    if (lVar4 == 0) break;
code_r0x01538278:
    uVar5 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar4,0);
    if ((int)uVar5 <= iVar8) {
      return uVar5;
    }
    if (*(long *)(lVar7 + 0x18) == 0) break;
    iVar2 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(*(long *)(lVar7 + 0x18),iVar8,extraout_x1,0);
    if (iVar2 != 0) {
      if (*(long *)(lVar7 + 0x18) == 0) break;
      /*UnityEngine.Animator$$Play*/ func_0x03210958(extraout_s0,*(long *)(lVar7 + 0x18),extraout_x1,iVar8,0);
    }
  }
  goto code_r0x015382cc;
}



// ============================================================
// RVA: 0x1537d90 | Atlas.Gameplay.Kart.BaseVisualBehaviour.TriggerIncoming
// ============================================================

/* WARNING: Possible PIC construction at 0x01538120: Changing call to branch */

ulong Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIncoming
                (undefined1 param_1 [16],uint param_2,long param_3)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 extraout_x1;
  long unaff_x19;
  long lVar7;
  undefined8 unaff_x20;
  int iVar8;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar9;
  undefined8 ******unaff_x29;
  undefined *unaff_x30;
  undefined4 extraout_s0;
  ulong extraout_d0;
  undefined1 auVar10 [12];
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  ulong uStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *****pppppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 *****pppppuStack_180;
  undefined *puStack_178;
  undefined1 auStack_170 [8];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 *****pppppuStack_d0;
  undefined *puStack_c8;
  undefined8 *****pppppuStack_a0;
  undefined *puStack_98;
  undefined8 *****pppppuStack_70;
  undefined *puStack_68;
  undefined8 *****pppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4ee7 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee7 = 1;
  }
  lVar7 = *(long *)(param_3 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 != 0) {
    uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x48);
    puVar1 = (undefined1 *)register0x00000008;
    goto code_r0x0320d82c;
  }
  auVar10 = func_0x00f78af4();
  uVar3 = auVar10._0_8_;
  puStack_38 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerSideSneer;
  uVar5 = uVar3;
  pppppuStack_40 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ee8 & 1) == 0) {
    uVar5 = func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee8 = 1;
  }
  if (auVar10._8_4_ == 1) {
    lVar7 = *(long *)(uVar3 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar7 == 0) goto code_r0x01537eec;
    uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x50);
  }
  else {
    if (auVar10._8_4_ != 0) {
      return uVar5;
    }
    lVar7 = *(long *)(uVar3 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar7 == 0) {
code_r0x01537eec:
      unaff_x19 = 0;
      lVar7 = func_0x00f78af4();
      puStack_68 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaken;
      pppppuStack_70 = &pppppuStack_40;
      if ((bRam0000000003eb4ee9 & 1) == 0) {
        func_0x00f78a20(0x3d20028);
        bRam0000000003eb4ee9 = 1;
      }
      lVar7 = *(long *)(lVar7 + 0x18);
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar7 == 0) {
        lVar7 = func_0x00f78af4();
        puStack_98 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaking;
        unaff_x21 = 0x3eb4000;
        pppppuStack_a0 = &pppppuStack_70;
        if ((bRam0000000003eb4eea & 1) == 0) {
          func_0x00f78a20(0x3d20028);
          bRam0000000003eb4eea = 1;
        }
        lVar7 = *(long *)(lVar7 + 0x18);
        if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar7 == 0) {
          unaff_x19 = func_0x00f78af4();
          puVar1 = auStack_170;
          puStack_c8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerImpact;
          unaff_x29 = &pppppuStack_d0;
          unaff_x20 = 0x3eb4000;
          pppppuStack_d0 = &pppppuStack_a0;
          if ((bRam0000000003eb4eeb & 1) == 0) {
            func_0x00f78a20(0x3d20028);
            bRam0000000003eb4eeb = 1;
          }
          uVar9 = unaff_x22;
          if (*(long *)(unaff_x19 + 0x18) != 0) {
            unaff_x22 = 0x3d20028;
            /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_168,*(long *)(unaff_x19 + 0x18),2,0);
            uStack_138 = uStack_160;
            uStack_140 = uStack_168;
            uStack_128 = uStack_150;
            uStack_130 = uStack_158;
            uStack_120 = uStack_148;
            unaff_x20 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_140,0);
            if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if ((int)unaff_x20 == **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8)) {
              return (ulong)((int)unaff_x20 != **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8));
            }
            unaff_x21 = *(long *)(unaff_x19 + 0x18);
            if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar9 = 0x3d20028;
            if (unaff_x21 != 0) {
              /*UnityEngine.Animator$$SetFloat*/ func_0x0320d09c(extraout_d0 & 0xffffffff,unaff_x21,
                              *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x60),0);
              if (*(long *)(unaff_x19 + 0x18) != 0) {
                /*UnityEngine.Animator$$SetFloat*/ func_0x0320d09c(param_2,*(long *)(unaff_x19 + 0x18),
                                *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 100),0);
                lVar7 = *(long *)(unaff_x19 + 0x18);
                uVar9 = unaff_x22;
                if (lVar7 != 0) {
                  uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x5c);
                  unaff_x30 = &UNK_01538124;
                  goto code_r0x0320d82c;
                }
              }
            }
          }
          lVar7 = func_0x00f78af4();
          puStack_178 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerCelebrateSmall;
          uStack_1a0 = uVar9;
          lStack_198 = unaff_x21;
          uStack_190 = unaff_x20;
          lStack_188 = unaff_x19;
          pppppuStack_180 = unaff_x29;
          if ((bRam0000000003eb4eec & 1) == 0) {
            func_0x00f78a20(0x3d20028);
            bRam0000000003eb4eec = 1;
          }
          lVar7 = *(long *)(lVar7 + 0x18);
          if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (lVar7 == 0) {
            lVar7 = func_0x00f78af4();
            uStack_1c8 = 0x3eb4000;
            uStack_1c0 = 0x3d20028;
            puStack_1a8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayAnimatorStateOverride;
            uStack_1f0 = 0;
            uStack_208 = 0;
            uStack_210 = 0;
            uStack_1f8 = 0;
            uStack_200 = 0;
            lVar4 = *(long *)(lVar7 + 0x18);
            uStack_1b8 = 0;
            uStack_1e0 = extraout_d0 & 0xffffffff;
            uStack_1d8 = (ulong)param_2;
            uStack_1d0 = uVar9;
            pppppuStack_1b0 = &pppppuStack_180;
            if (lVar4 != 0) {
              iVar8 = 0;
              do {
                iVar2 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar4,0);
                lVar4 = *(long *)(lVar7 + 0x18);
                if (iVar2 <= iVar8) {
                  if (lVar4 != 0) {
                    iVar8 = 0;
                    goto code_r0x01538278;
                  }
                  break;
                }
                if (lVar4 == 0) break;
                /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_238,lVar4,iVar8,0);
                uStack_208 = uStack_230;
                uStack_210 = uStack_238;
                uStack_1f8 = uStack_220;
                uStack_200 = uStack_228;
                uStack_1f0 = uStack_218;
                uVar5 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_210,0);
                if ((int)uVar5 == (int)extraout_x1) {
                  return uVar5;
                }
                iVar8 = iVar8 + 1;
                lVar4 = *(long *)(lVar7 + 0x18);
              } while (lVar4 != 0);
            }
code_r0x015382cc:
            uVar5 = func_0x00f78af4();
            return uVar5;
          }
          uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x68);
          puVar1 = auStack_170;
          unaff_x19 = lStack_188;
          unaff_x20 = uStack_190;
          unaff_x21 = lStack_198;
          unaff_x22 = uStack_1a0;
          unaff_x29 = (undefined8 ******)pppppuStack_180;
          unaff_x30 = puStack_178;
        }
        else {
          uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x58);
          unaff_x20 = 0x3d20028;
          puVar1 = &stack0xffffffffffffff70;
          unaff_x21 = 0x3eb4000;
          unaff_x19 = 0;
          unaff_x29 = (undefined8 ******)pppppuStack_a0;
          unaff_x30 = puStack_98;
        }
      }
      else {
        uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x54);
        unaff_x20 = 0x3d20028;
        puVar1 = &stack0xffffffffffffffa0;
        unaff_x21 = 0x3eb4000;
        unaff_x29 = (undefined8 ******)pppppuStack_70;
        unaff_x30 = puStack_68;
      }
      goto code_r0x0320d82c;
    }
    uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x4c);
  }
  unaff_x20 = 0x3d20028;
  puVar1 = &stack0xffffffffffffffd0;
  unaff_x21 = 0x3eb4000;
  unaff_x19 = 0;
  unaff_x29 = (undefined8 ******)pppppuStack_40;
  unaff_x30 = puStack_38;
code_r0x0320d82c:
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(long *)(puVar1 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
  *(long *)(puVar1 + -0x18) = unaff_x19;
  *(undefined8 *******)(puVar1 + -0x10) = unaff_x29;
  *(undefined **)(puVar1 + -8) = unaff_x30;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*pcRam0000000003ebe460)(lVar7,uVar6);
  return uVar5;
  while( true ) {
    iVar8 = iVar8 + 1;
    lVar4 = *(long *)(lVar7 + 0x18);
    if (lVar4 == 0) break;
code_r0x01538278:
    uVar5 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar4,0);
    if ((int)uVar5 <= iVar8) {
      return uVar5;
    }
    if (*(long *)(lVar7 + 0x18) == 0) break;
    iVar2 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(*(long *)(lVar7 + 0x18),iVar8,extraout_x1,0);
    if (iVar2 != 0) {
      if (*(long *)(lVar7 + 0x18) == 0) break;
      /*UnityEngine.Animator$$Play*/ func_0x03210958(extraout_s0,*(long *)(lVar7 + 0x18),extraout_x1,iVar8,0);
    }
  }
  goto code_r0x015382cc;
}



// ============================================================
// RVA: 0x1537e14 | Atlas.Gameplay.Kart.BaseVisualBehaviour.TriggerSideSneer
// ============================================================

/* WARNING: Possible PIC construction at 0x01538120: Changing call to branch */

ulong Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerSideSneer
                (undefined1 param_1 [16],uint param_2,ulong param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 extraout_x1;
  long unaff_x19;
  long lVar5;
  undefined8 unaff_x20;
  int iVar6;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar7;
  undefined8 ******unaff_x29;
  undefined *unaff_x30;
  undefined4 extraout_s0;
  ulong extraout_d0;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  ulong uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *****pppppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 *****pppppuStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 *****pppppuStack_a0;
  undefined *puStack_98;
  undefined8 *****pppppuStack_70;
  undefined *puStack_68;
  undefined8 *****pppppuStack_40;
  undefined *puStack_38;
  
  uVar2 = param_3;
  if ((bRam0000000003eb4ee8 & 1) == 0) {
    uVar2 = func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee8 = 1;
  }
  if (param_4 == 1) {
    lVar5 = *(long *)(param_3 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar5 != 0) {
      uVar4 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x50);
      goto code_r0x0320d82c;
    }
  }
  else {
    if (param_4 != 0) {
      return uVar2;
    }
    lVar5 = *(long *)(param_3 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar5 != 0) {
      uVar4 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x4c);
      goto code_r0x0320d82c;
    }
  }
  lVar5 = func_0x00f78af4();
  puStack_38 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaken;
  pppppuStack_40 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ee9 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee9 = 1;
  }
  lVar5 = *(long *)(lVar5 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar5 == 0) {
    lVar5 = func_0x00f78af4();
    puStack_68 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaking;
    unaff_x21 = 0x3eb4000;
    pppppuStack_70 = &pppppuStack_40;
    if ((bRam0000000003eb4eea & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4eea = 1;
    }
    lVar5 = *(long *)(lVar5 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar5 == 0) {
      unaff_x19 = func_0x00f78af4();
      puStack_98 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerImpact;
      unaff_x29 = &pppppuStack_a0;
      unaff_x20 = 0x3eb4000;
      pppppuStack_a0 = &pppppuStack_70;
      if ((bRam0000000003eb4eeb & 1) == 0) {
        func_0x00f78a20(0x3d20028);
        bRam0000000003eb4eeb = 1;
      }
      uVar7 = unaff_x22;
      if (*(long *)(unaff_x19 + 0x18) != 0) {
        unaff_x22 = 0x3d20028;
        /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_138,*(long *)(unaff_x19 + 0x18),2,0);
        uStack_108 = uStack_130;
        uStack_110 = uStack_138;
        uStack_f8 = uStack_120;
        uStack_100 = uStack_128;
        uStack_f0 = uStack_118;
        unaff_x20 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_110,0);
        if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((int)unaff_x20 == **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8)) {
          return (ulong)((int)unaff_x20 != **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8));
        }
        unaff_x21 = *(long *)(unaff_x19 + 0x18);
        if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar7 = 0x3d20028;
        if (unaff_x21 != 0) {
          /*UnityEngine.Animator$$SetFloat*/ func_0x0320d09c(extraout_d0 & 0xffffffff,unaff_x21,
                          *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x60),0);
          if (*(long *)(unaff_x19 + 0x18) != 0) {
            /*UnityEngine.Animator$$SetFloat*/ func_0x0320d09c(param_2,*(long *)(unaff_x19 + 0x18),
                            *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 100),0);
            lVar5 = *(long *)(unaff_x19 + 0x18);
            uVar7 = unaff_x22;
            if (lVar5 != 0) {
              uVar4 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x5c);
              unaff_x30 = &UNK_01538124;
              register0x00000008 = (BADSPACEBASE *)auStack_140;
              goto code_r0x0320d82c;
            }
          }
        }
      }
      lVar5 = func_0x00f78af4();
      puStack_148 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerCelebrateSmall;
      uStack_170 = uVar7;
      lStack_168 = unaff_x21;
      uStack_160 = unaff_x20;
      lStack_158 = unaff_x19;
      pppppuStack_150 = unaff_x29;
      if ((bRam0000000003eb4eec & 1) == 0) {
        func_0x00f78a20(0x3d20028);
        bRam0000000003eb4eec = 1;
      }
      lVar5 = *(long *)(lVar5 + 0x18);
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar5 == 0) {
        lVar5 = func_0x00f78af4();
        uStack_198 = 0x3eb4000;
        uStack_190 = 0x3d20028;
        puStack_178 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayAnimatorStateOverride;
        uStack_1c0 = 0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        lVar3 = *(long *)(lVar5 + 0x18);
        uStack_188 = 0;
        uStack_1b0 = extraout_d0 & 0xffffffff;
        uStack_1a8 = (ulong)param_2;
        uStack_1a0 = uVar7;
        pppppuStack_180 = &pppppuStack_150;
        if (lVar3 != 0) {
          iVar6 = 0;
          do {
            iVar1 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar3,0);
            lVar3 = *(long *)(lVar5 + 0x18);
            if (iVar1 <= iVar6) {
              if (lVar3 != 0) {
                iVar6 = 0;
                goto code_r0x01538278;
              }
              break;
            }
            if (lVar3 == 0) break;
            /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_208,lVar3,iVar6,0);
            uStack_1d8 = uStack_200;
            uStack_1e0 = uStack_208;
            uStack_1c8 = uStack_1f0;
            uStack_1d0 = uStack_1f8;
            uStack_1c0 = uStack_1e8;
            uVar2 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_1e0,0);
            if ((int)uVar2 == (int)extraout_x1) {
              return uVar2;
            }
            iVar6 = iVar6 + 1;
            lVar3 = *(long *)(lVar5 + 0x18);
          } while (lVar3 != 0);
        }
        goto code_r0x015382cc;
      }
      uVar4 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x68);
      register0x00000008 = (BADSPACEBASE *)auStack_140;
      unaff_x19 = lStack_158;
      unaff_x20 = uStack_160;
      unaff_x21 = lStack_168;
      unaff_x22 = uStack_170;
      unaff_x29 = (undefined8 ******)pppppuStack_150;
      unaff_x30 = puStack_148;
    }
    else {
      uVar4 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x58);
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
      unaff_x19 = 0;
      unaff_x20 = 0x3d20028;
      unaff_x21 = 0x3eb4000;
      unaff_x29 = (undefined8 ******)pppppuStack_70;
      unaff_x30 = puStack_68;
    }
  }
  else {
    uVar4 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x54);
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = 0;
    unaff_x20 = 0x3d20028;
    unaff_x21 = 0x3eb4000;
    unaff_x29 = (undefined8 ******)pppppuStack_40;
    unaff_x30 = puStack_38;
  }
code_r0x0320d82c:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *******)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*pcRam0000000003ebe460)(lVar5,uVar4);
  return uVar2;
  while( true ) {
    iVar6 = iVar6 + 1;
    lVar3 = *(long *)(lVar5 + 0x18);
    if (lVar3 == 0) break;
code_r0x01538278:
    uVar2 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar3,0);
    if ((int)uVar2 <= iVar6) {
      return uVar2;
    }
    if (*(long *)(lVar5 + 0x18) == 0) break;
    iVar1 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(*(long *)(lVar5 + 0x18),iVar6,extraout_x1,0);
    if (iVar1 != 0) {
      if (*(long *)(lVar5 + 0x18) == 0) break;
      /*UnityEngine.Animator$$Play*/ func_0x03210958(extraout_s0,*(long *)(lVar5 + 0x18),extraout_x1,iVar6,0);
    }
  }
code_r0x015382cc:
  uVar2 = func_0x00f78af4();
  return uVar2;
}



// ============================================================
// RVA: 0x1537ef0 | Atlas.Gameplay.Kart.BaseVisualBehaviour.TriggerOvertaken
// ============================================================

/* WARNING: Possible PIC construction at 0x01538120: Changing call to branch */

ulong Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaken
                (undefined1 param_1 [16],uint param_2,long param_3)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 extraout_x1;
  long unaff_x19;
  long lVar6;
  undefined8 unaff_x20;
  int iVar7;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar8;
  undefined8 ******unaff_x29;
  undefined *unaff_x30;
  undefined4 extraout_s0;
  ulong extraout_d0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  ulong uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *****pppppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *****pppppuStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 *****pppppuStack_70;
  undefined *puStack_68;
  undefined8 *****pppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4ee9 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ee9 = 1;
  }
  lVar6 = *(long *)(param_3 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 == 0) {
    lVar6 = func_0x00f78af4();
    puStack_38 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaking;
    unaff_x21 = 0x3eb4000;
    pppppuStack_40 = (undefined8 *****)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb4eea & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4eea = 1;
    }
    lVar6 = *(long *)(lVar6 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar6 == 0) {
      unaff_x19 = func_0x00f78af4();
      puVar1 = auStack_110;
      puStack_68 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerImpact;
      unaff_x29 = &pppppuStack_70;
      unaff_x20 = 0x3eb4000;
      pppppuStack_70 = &pppppuStack_40;
      if ((bRam0000000003eb4eeb & 1) == 0) {
        func_0x00f78a20(0x3d20028);
        bRam0000000003eb4eeb = 1;
      }
      uVar8 = unaff_x22;
      if (*(long *)(unaff_x19 + 0x18) != 0) {
        unaff_x22 = 0x3d20028;
        /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_108,*(long *)(unaff_x19 + 0x18),2,0);
        uStack_d8 = uStack_100;
        uStack_e0 = uStack_108;
        uStack_c8 = uStack_f0;
        uStack_d0 = uStack_f8;
        uStack_c0 = uStack_e8;
        unaff_x20 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_e0,0);
        if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((int)unaff_x20 == **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8)) {
          return (ulong)((int)unaff_x20 != **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8));
        }
        unaff_x21 = *(long *)(unaff_x19 + 0x18);
        if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar8 = 0x3d20028;
        if (unaff_x21 != 0) {
          /*UnityEngine.Animator$$SetFloat*/ func_0x0320d09c(extraout_d0 & 0xffffffff,unaff_x21,
                          *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x60),0);
          if (*(long *)(unaff_x19 + 0x18) != 0) {
            /*UnityEngine.Animator$$SetFloat*/ func_0x0320d09c(param_2,*(long *)(unaff_x19 + 0x18),
                            *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 100),0);
            lVar6 = *(long *)(unaff_x19 + 0x18);
            uVar8 = unaff_x22;
            if (lVar6 != 0) {
              uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x5c);
              unaff_x30 = &UNK_01538124;
              goto code_r0x0320d82c;
            }
          }
        }
      }
      lVar6 = func_0x00f78af4();
      puStack_118 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerCelebrateSmall;
      uStack_140 = uVar8;
      lStack_138 = unaff_x21;
      uStack_130 = unaff_x20;
      lStack_128 = unaff_x19;
      pppppuStack_120 = unaff_x29;
      if ((bRam0000000003eb4eec & 1) == 0) {
        func_0x00f78a20(0x3d20028);
        bRam0000000003eb4eec = 1;
      }
      lVar6 = *(long *)(lVar6 + 0x18);
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar6 == 0) {
        lVar6 = func_0x00f78af4();
        uStack_168 = 0x3eb4000;
        uStack_160 = 0x3d20028;
        puStack_148 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayAnimatorStateOverride;
        uStack_190 = 0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        lVar3 = *(long *)(lVar6 + 0x18);
        uStack_158 = 0;
        uStack_180 = extraout_d0 & 0xffffffff;
        uStack_178 = (ulong)param_2;
        uStack_170 = uVar8;
        pppppuStack_150 = &pppppuStack_120;
        if (lVar3 != 0) {
          iVar7 = 0;
          do {
            iVar2 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar3,0);
            lVar3 = *(long *)(lVar6 + 0x18);
            if (iVar2 <= iVar7) {
              if (lVar3 != 0) {
                iVar7 = 0;
                goto code_r0x01538278;
              }
              break;
            }
            if (lVar3 == 0) break;
            /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_1d8,lVar3,iVar7,0);
            uStack_1a8 = uStack_1d0;
            uStack_1b0 = uStack_1d8;
            uStack_198 = uStack_1c0;
            uStack_1a0 = uStack_1c8;
            uStack_190 = uStack_1b8;
            uVar4 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_1b0,0);
            if ((int)uVar4 == (int)extraout_x1) {
              return uVar4;
            }
            iVar7 = iVar7 + 1;
            lVar3 = *(long *)(lVar6 + 0x18);
          } while (lVar3 != 0);
        }
        goto code_r0x015382cc;
      }
      uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x68);
      puVar1 = auStack_110;
      unaff_x19 = lStack_128;
      unaff_x20 = uStack_130;
      unaff_x21 = lStack_138;
      unaff_x22 = uStack_140;
      unaff_x29 = (undefined8 ******)pppppuStack_120;
      unaff_x30 = puStack_118;
    }
    else {
      uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x58);
      unaff_x20 = 0x3d20028;
      puVar1 = &stack0xffffffffffffffd0;
      unaff_x21 = 0x3eb4000;
      unaff_x19 = 0;
      unaff_x29 = (undefined8 ******)pppppuStack_40;
      unaff_x30 = puStack_38;
    }
  }
  else {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x54);
    puVar1 = (undefined1 *)register0x00000008;
  }
code_r0x0320d82c:
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(long *)(puVar1 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
  *(long *)(puVar1 + -0x18) = unaff_x19;
  *(undefined8 *******)(puVar1 + -0x10) = unaff_x29;
  *(undefined **)(puVar1 + -8) = unaff_x30;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*pcRam0000000003ebe460)(lVar6,uVar5);
  return uVar4;
  while( true ) {
    iVar7 = iVar7 + 1;
    lVar3 = *(long *)(lVar6 + 0x18);
    if (lVar3 == 0) break;
code_r0x01538278:
    uVar4 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar3,0);
    if ((int)uVar4 <= iVar7) {
      return uVar4;
    }
    if (*(long *)(lVar6 + 0x18) == 0) break;
    iVar2 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(*(long *)(lVar6 + 0x18),iVar7,extraout_x1,0);
    if (iVar2 != 0) {
      if (*(long *)(lVar6 + 0x18) == 0) break;
      /*UnityEngine.Animator$$Play*/ func_0x03210958(extraout_s0,*(long *)(lVar6 + 0x18),extraout_x1,iVar7,0);
    }
  }
code_r0x015382cc:
  uVar4 = func_0x00f78af4();
  return uVar4;
}



// ============================================================
// RVA: 0x1537f74 | Atlas.Gameplay.Kart.BaseVisualBehaviour.TriggerOvertaking
// ============================================================

/* WARNING: Possible PIC construction at 0x01538120: Changing call to branch */

ulong Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerOvertaking
                (undefined1 param_1 [16],uint param_2,long param_3)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 extraout_x1;
  long unaff_x19;
  long lVar6;
  undefined8 unaff_x20;
  int iVar7;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar8;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined4 extraout_s0;
  ulong extraout_d0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  ulong uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 ***pppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 **ppuStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4eea & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4eea = 1;
  }
  lVar6 = *(long *)(param_3 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 == 0) {
    unaff_x19 = func_0x00f78af4();
    puVar1 = auStack_e0;
    puStack_38 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerImpact;
    unaff_x29 = &puStack_40;
    unaff_x20 = 0x3eb4000;
    puStack_40 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb4eeb & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4eeb = 1;
    }
    unaff_x21 = 0x3eb4000;
    uVar8 = unaff_x22;
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      unaff_x22 = 0x3d20028;
      /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_d8,*(long *)(unaff_x19 + 0x18),2,0);
      uStack_a8 = uStack_d0;
      uStack_b0 = uStack_d8;
      uStack_98 = uStack_c0;
      uStack_a0 = uStack_c8;
      uStack_90 = uStack_b8;
      unaff_x20 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_b0,0);
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((int)unaff_x20 == **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8)) {
        return (ulong)((int)unaff_x20 != **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8));
      }
      unaff_x21 = *(long *)(unaff_x19 + 0x18);
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = unaff_x22;
      if (unaff_x21 != 0) {
        /*UnityEngine.Animator$$SetFloat*/ func_0x0320d09c(extraout_d0 & 0xffffffff,unaff_x21,
                        *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x60),0);
        if (*(long *)(unaff_x19 + 0x18) != 0) {
          /*UnityEngine.Animator$$SetFloat*/ func_0x0320d09c(param_2,*(long *)(unaff_x19 + 0x18),
                          *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 100),0);
          lVar6 = *(long *)(unaff_x19 + 0x18);
          uVar8 = 0x3d20028;
          if (lVar6 != 0) {
            uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x5c);
            unaff_x30 = &UNK_01538124;
            goto code_r0x0320d82c;
          }
        }
      }
    }
    lVar6 = func_0x00f78af4();
    puStack_e8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerCelebrateSmall;
    uStack_110 = uVar8;
    lStack_108 = unaff_x21;
    uStack_100 = unaff_x20;
    lStack_f8 = unaff_x19;
    ppuStack_f0 = unaff_x29;
    if ((bRam0000000003eb4eec & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4eec = 1;
    }
    lVar6 = *(long *)(lVar6 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar6 == 0) {
      lVar6 = func_0x00f78af4();
      uStack_138 = 0x3eb4000;
      uStack_130 = 0x3d20028;
      puStack_118 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayAnimatorStateOverride;
      uStack_160 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      lVar3 = *(long *)(lVar6 + 0x18);
      uStack_128 = 0;
      uStack_150 = extraout_d0 & 0xffffffff;
      uStack_148 = (ulong)param_2;
      uStack_140 = uVar8;
      pppuStack_120 = &ppuStack_f0;
      if (lVar3 != 0) {
        iVar7 = 0;
        do {
          iVar2 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar3,0);
          lVar3 = *(long *)(lVar6 + 0x18);
          if (iVar2 <= iVar7) {
            if (lVar3 != 0) {
              iVar7 = 0;
              goto code_r0x01538278;
            }
            break;
          }
          if (lVar3 == 0) break;
          /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_1a8,lVar3,iVar7,0);
          uStack_178 = uStack_1a0;
          uStack_180 = uStack_1a8;
          uStack_168 = uStack_190;
          uStack_170 = uStack_198;
          uStack_160 = uStack_188;
          uVar4 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_180,0);
          if ((int)uVar4 == (int)extraout_x1) {
            return uVar4;
          }
          iVar7 = iVar7 + 1;
          lVar3 = *(long *)(lVar6 + 0x18);
        } while (lVar3 != 0);
      }
      goto code_r0x015382cc;
    }
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x68);
    puVar1 = auStack_e0;
    unaff_x19 = lStack_f8;
    unaff_x20 = uStack_100;
    unaff_x21 = lStack_108;
    unaff_x22 = uStack_110;
    unaff_x29 = ppuStack_f0;
    unaff_x30 = puStack_e8;
  }
  else {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x58);
    puVar1 = (undefined1 *)register0x00000008;
  }
code_r0x0320d82c:
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(long *)(puVar1 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
  *(long *)(puVar1 + -0x18) = unaff_x19;
  *(undefined1 ***)(puVar1 + -0x10) = unaff_x29;
  *(undefined **)(puVar1 + -8) = unaff_x30;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*pcRam0000000003ebe460)(lVar6,uVar5);
  return uVar4;
  while( true ) {
    iVar7 = iVar7 + 1;
    lVar3 = *(long *)(lVar6 + 0x18);
    if (lVar3 == 0) break;
code_r0x01538278:
    uVar4 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar3,0);
    if ((int)uVar4 <= iVar7) {
      return uVar4;
    }
    if (*(long *)(lVar6 + 0x18) == 0) break;
    iVar2 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(*(long *)(lVar6 + 0x18),iVar7,extraout_x1,0);
    if (iVar2 != 0) {
      if (*(long *)(lVar6 + 0x18) == 0) break;
      /*UnityEngine.Animator$$Play*/ func_0x03210958(extraout_s0,*(long *)(lVar6 + 0x18),extraout_x1,iVar7,0);
    }
  }
code_r0x015382cc:
  uVar4 = func_0x00f78af4();
  return uVar4;
}



// ============================================================
// RVA: 0x1537ff8 | Atlas.Gameplay.Kart.BaseVisualBehaviour.TriggerImpact
// ============================================================

/* WARNING: Possible PIC construction at 0x01538120: Changing call to branch */

ulong Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerImpact(uint param_1,uint param_2,long param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  undefined8 uVar7;
  int iVar8;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined4 extraout_s0;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  
  uVar7 = 0x3eb4000;
  if ((bRam0000000003eb4eeb & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4eeb = 1;
  }
  puStack_c0 = &stack0xfffffffffffffff0;
  if (*(long *)(param_3 + 0x18) != 0) {
    uVar1 = 0x3d20028;
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_a8,*(long *)(param_3 + 0x18),2,0);
    uStack_78 = uStack_a0;
    uStack_80 = uStack_a8;
    uStack_68 = uStack_90;
    uStack_70 = uStack_98;
    uStack_60 = uStack_88;
    uVar7 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_80,0);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((int)uVar7 == **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8)) {
      return (ulong)((int)uVar7 != **(int **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8));
    }
    unaff_x21 = *(long *)(param_3 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x22 = uVar1;
    if (unaff_x21 != 0) {
      /*UnityEngine.Animator$$SetFloat*/ func_0x0320d09c(param_1,unaff_x21,
                      *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x60),0);
      if (*(long *)(param_3 + 0x18) != 0) {
        /*UnityEngine.Animator$$SetFloat*/ func_0x0320d09c(param_2,*(long *)(param_3 + 0x18),
                        *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 100),0);
        lVar4 = *(long *)(param_3 + 0x18);
        unaff_x22 = 0x3d20028;
        if (lVar4 != 0) {
          uVar2 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x5c);
          puStack_b8 = (undefined *)0x1538124;
          uStack_d0 = uVar7;
          lStack_d8 = unaff_x21;
          uStack_e0 = uVar1;
          goto code_r0x0320d82c;
        }
      }
    }
  }
  lVar4 = func_0x00f78af4();
  puStack_b8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerCelebrateSmall;
  uStack_e0 = unaff_x22;
  lStack_d8 = unaff_x21;
  uStack_d0 = uVar7;
  lStack_c8 = param_3;
  if ((bRam0000000003eb4eec & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4eec = 1;
  }
  lVar4 = *(long *)(lVar4 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar4 != 0) {
    uVar2 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x68);
    param_3 = lStack_c8;
code_r0x0320d82c:
    lStack_c8 = param_3;
    if (pcRam0000000003ebe460 == (code *)0x0) {
      pcRam0000000003ebe460 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*pcRam0000000003ebe460)(lVar4,uVar2);
    return uVar6;
  }
  lVar4 = func_0x00f78af4();
  uStack_108 = 0x3eb4000;
  uStack_100 = 0x3d20028;
  puStack_e8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayAnimatorStateOverride;
  uStack_130 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  lVar5 = *(long *)(lVar4 + 0x18);
  uStack_f8 = 0;
  uStack_120 = (ulong)param_1;
  uStack_118 = (ulong)param_2;
  uStack_110 = unaff_x22;
  ppuStack_f0 = &puStack_c0;
  if (lVar5 != 0) {
    iVar8 = 0;
    do {
      iVar3 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar5,0);
      lVar5 = *(long *)(lVar4 + 0x18);
      if (iVar3 <= iVar8) {
        if (lVar5 != 0) {
          iVar8 = 0;
          goto code_r0x01538278;
        }
        break;
      }
      if (lVar5 == 0) break;
      /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_178,lVar5,iVar8,0);
      uStack_148 = uStack_170;
      uStack_150 = uStack_178;
      uStack_138 = uStack_160;
      uStack_140 = uStack_168;
      uStack_130 = uStack_158;
      uVar6 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_150,0);
      if ((int)uVar6 == (int)extraout_x1) {
        return uVar6;
      }
      iVar8 = iVar8 + 1;
      lVar5 = *(long *)(lVar4 + 0x18);
    } while (lVar5 != 0);
  }
  goto code_r0x015382cc;
  while( true ) {
    iVar8 = iVar8 + 1;
    lVar5 = *(long *)(lVar4 + 0x18);
    if (lVar5 == 0) break;
code_r0x01538278:
    uVar6 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar5,0);
    if ((int)uVar6 <= iVar8) {
      return uVar6;
    }
    if (*(long *)(lVar4 + 0x18) == 0) break;
    iVar3 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(*(long *)(lVar4 + 0x18),iVar8,extraout_x1,0);
    if (iVar3 != 0) {
      if (*(long *)(lVar4 + 0x18) == 0) break;
      /*UnityEngine.Animator$$Play*/ func_0x03210958(extraout_s0,*(long *)(lVar4 + 0x18),extraout_x1,iVar8,0);
    }
  }
code_r0x015382cc:
  uVar6 = func_0x00f78af4();
  return uVar6;
}



// ============================================================
// RVA: 0x153814c | Atlas.Gameplay.Kart.BaseVisualBehaviour.TriggerCelebrateSmall
// ============================================================

void Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerCelebrateSmall(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 extraout_x1;
  long lVar4;
  int iVar5;
  undefined4 extraout_s0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  
  if ((bRam0000000003eb4eec & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4eec = 1;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar4 != 0) {
    uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x68);
    if (pcRam0000000003ebe460 == (code *)0x0) {
      pcRam0000000003ebe460 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebe460)(lVar4,uVar1);
    return;
  }
  lVar4 = func_0x00f78af4();
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lVar3 = *(long *)(lVar4 + 0x18);
  if (lVar3 != 0) {
    iVar5 = 0;
    do {
      iVar2 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar3,0);
      lVar3 = *(long *)(lVar4 + 0x18);
      if (iVar2 <= iVar5) {
        if (lVar3 != 0) {
          iVar5 = 0;
          goto code_r0x01538278;
        }
        break;
      }
      if (lVar3 == 0) break;
      /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_c8,lVar3,iVar5,0);
      uStack_98 = uStack_c0;
      uStack_a0 = uStack_c8;
      uStack_88 = uStack_b0;
      uStack_90 = uStack_b8;
      uStack_80 = uStack_a8;
      iVar2 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_a0,0);
      if (iVar2 == (int)extraout_x1) {
        return;
      }
      iVar5 = iVar5 + 1;
      lVar3 = *(long *)(lVar4 + 0x18);
    } while (lVar3 != 0);
  }
  goto code_r0x015382cc;
  while( true ) {
    iVar5 = iVar5 + 1;
    lVar3 = *(long *)(lVar4 + 0x18);
    if (lVar3 == 0) break;
code_r0x01538278:
    iVar2 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar3,0);
    if (iVar2 <= iVar5) {
      return;
    }
    if (*(long *)(lVar4 + 0x18) == 0) break;
    iVar2 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(*(long *)(lVar4 + 0x18),iVar5,extraout_x1,0);
    if (iVar2 != 0) {
      if (*(long *)(lVar4 + 0x18) == 0) break;
      /*UnityEngine.Animator$$Play*/ func_0x03210958(extraout_s0,*(long *)(lVar4 + 0x18),extraout_x1,iVar5,0);
    }
  }
code_r0x015382cc:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x15381d0 | Atlas.Gameplay.Kart.BaseVisualBehaviour.PlayAnimatorStateOverride
// ============================================================

void Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayAnimatorStateOverride
               (undefined4 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 != 0) {
    iVar3 = 0;
    do {
      iVar1 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar2,0);
      lVar2 = *(long *)(param_2 + 0x18);
      if (iVar1 <= iVar3) {
        if (lVar2 != 0) {
          iVar3 = 0;
          goto code_r0x01538278;
        }
        break;
      }
      if (lVar2 == 0) break;
      /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_98,lVar2,iVar3,0);
      uStack_68 = uStack_90;
      uStack_70 = uStack_98;
      uStack_58 = uStack_80;
      uStack_60 = uStack_88;
      uStack_50 = uStack_78;
      iVar1 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_70,0);
      if (iVar1 == (int)param_3) {
        return;
      }
      iVar3 = iVar3 + 1;
      lVar2 = *(long *)(param_2 + 0x18);
    } while (lVar2 != 0);
  }
  goto LAB_015382cc;
  while( true ) {
    iVar3 = iVar3 + 1;
    lVar2 = *(long *)(param_2 + 0x18);
    if (lVar2 == 0) break;
code_r0x01538278:
    iVar1 = /*UnityEngine.Animator$$get_layerCount*/ func_0x0320fb58(lVar2,0);
    if (iVar1 <= iVar3) {
      return;
    }
    if (*(long *)(param_2 + 0x18) == 0) break;
    iVar1 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(*(long *)(param_2 + 0x18),iVar3,param_3,0);
    if (iVar1 != 0) {
      if (*(long *)(param_2 + 0x18) == 0) break;
      /*UnityEngine.Animator$$Play*/ func_0x03210958(param_1,*(long *)(param_2 + 0x18),param_3,iVar3,0);
    }
  }
LAB_015382cc:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x15382e8 | Atlas.Gameplay.Kart.BaseVisualBehaviour.UnEquipItem
// ============================================================

/* WARNING: Possible PIC construction at 0x015383ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015384b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01538558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01538600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015386a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153874c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015386ac) */
/* WARNING: Removing unreachable block (ram,0x015386b4) */
/* WARNING: Removing unreachable block (ram,0x01538604) */
/* WARNING: Removing unreachable block (ram,0x0153860c) */
/* WARNING: Removing unreachable block (ram,0x0153855c) */
/* WARNING: Removing unreachable block (ram,0x01538564) */
/* WARNING: Removing unreachable block (ram,0x015384b4) */
/* WARNING: Removing unreachable block (ram,0x015384bc) */
/* WARNING: Removing unreachable block (ram,0x01538750) */
/* WARNING: Removing unreachable block (ram,0x01538758) */

undefined1  [16] Atlas_Gameplay_Kart_BaseVisualBehaviour__UnEquipItem(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 unaff_x19;
  long lVar5;
  undefined8 unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 **unaff_x29;
  undefined8 ***pppuVar8;
  undefined *unaff_x30;
  undefined4 extraout_s0;
  undefined1 auVar9 [16];
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined8 **ppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 **ppuStack_190;
  undefined *puStack_188;
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  undefined8 **ppuStack_100;
  undefined *puStack_f8;
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  undefined8 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4eed & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4eed = 1;
  }
  lVar5 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar5 != 0) {
    uVar3 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x34);
    uVar4 = 0;
UnityEngine_Animator__SetBool:
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 ***)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if (pcRam0000000003ebe420 == (code *)0x0) {
      pcRam0000000003ebe420 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar9 = (*pcRam0000000003ebe420)(lVar5,uVar3,uVar4);
    return auVar9;
  }
  auVar9 = func_0x00f78af4();
  lVar5 = auVar9._0_8_;
  puVar1 = (undefined8 *)&stack0xffffffffffffffa0;
  puStack_38 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemPickup;
  puStack_40 = (undefined8 *)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ef5 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef5 = 1;
  }
  if ((auVar9._8_8_ & 1) == 0) {
    lVar6 = *(long *)(lVar5 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar6 != 0) {
      uVar3 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x24);
      lVar7 = lVar6;
      uStack_238 = 0x3d20028;
      pppuVar8 = (undefined8 ***)&puStack_40;
      puStack_218 = &UNK_015383f0;
      goto code_r0x0320d82c;
    }
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar5 != 0) {
      uVar3 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x34);
      uVar4 = 1;
      unaff_x20 = 0x3d20028;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      unaff_x21 = 0x3eb4000;
      unaff_x19 = 0;
      unaff_x29 = (undefined8 **)puStack_40;
      unaff_x30 = puStack_38;
      goto UnityEngine_Animator__SetBool;
    }
  }
  lVar5 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xffffffffffffff70;
  puStack_68 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemActivate;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb4ef6 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef6 = 1;
  }
  lVar6 = *(long *)(lVar5 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar3 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x28);
    lVar7 = lVar6;
    uStack_238 = 0x3d20028;
    pppuVar8 = &ppuStack_70;
    puStack_218 = &UNK_015384b4;
    goto code_r0x0320d82c;
  }
  lVar5 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xffffffffffffff40;
  puStack_98 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemThrowForward;
  ppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eb4ef8 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef8 = 1;
  }
  lVar6 = *(long *)(lVar5 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar3 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x2c);
    lVar7 = lVar6;
    uStack_238 = 0x3d20028;
    pppuVar8 = &ppuStack_a0;
    puStack_218 = &UNK_0153855c;
    goto code_r0x0320d82c;
  }
  lVar5 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xffffffffffffff10;
  puStack_c8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemThrowBackward;
  ppuStack_d0 = &ppuStack_a0;
  if ((bRam0000000003eb4ef9 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef9 = 1;
  }
  lVar6 = *(long *)(lVar5 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar3 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x30);
    lVar7 = lVar6;
    uStack_238 = 0x3d20028;
    pppuVar8 = &ppuStack_d0;
    puStack_218 = &UNK_01538604;
    goto code_r0x0320d82c;
  }
  lVar5 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xfffffffffffffee0;
  puStack_f8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemPropane;
  ppuStack_100 = &ppuStack_d0;
  if ((bRam0000000003eb4ef7 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef7 = 1;
  }
  lVar6 = *(long *)(lVar5 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar3 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x38);
    lVar7 = lVar6;
    uStack_238 = 0x3d20028;
    pppuVar8 = &ppuStack_100;
    puStack_218 = &UNK_015386ac;
    goto code_r0x0320d82c;
  }
  lVar5 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xfffffffffffffeb0;
  puStack_128 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemTimeCheater;
  ppuStack_130 = &ppuStack_100;
  if ((bRam0000000003eb4eee & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4eee = 1;
  }
  lVar7 = *(long *)(lVar5 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 != 0) {
    uVar3 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x3c);
    lVar6 = lVar7;
    uStack_238 = 0x3d20028;
    pppuVar8 = &ppuStack_130;
    puStack_218 = &UNK_01538750;
    goto code_r0x0320d82c;
  }
  lVar6 = func_0x00f78af4();
  puStack_158 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerFinishLineReaction;
  ppuStack_160 = &ppuStack_130;
  if ((bRam0000000003eb4eef & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4eef = 1;
  }
  lVar6 = *(long *)(lVar6 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar3 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x74);
    puVar1 = (undefined8 *)&stack0xfffffffffffffeb0;
    uStack_238 = 0x3d20028;
    pppuVar8 = (undefined8 ***)ppuStack_160;
    puStack_218 = puStack_158;
    goto code_r0x0320d82c;
  }
  auVar9 = func_0x00f78af4();
  lVar5 = auVar9._8_8_;
  puStack_188 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetFinishLineIndexParam;
  ppuStack_190 = &ppuStack_160;
  if ((bRam0000000003eb4ef0 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef0 = 1;
  }
  lVar6 = *(long *)(auVar9._0_8_ + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar3 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x70);
    if (pcRam0000000003ebe440 == (code *)0x0) {
      pcRam0000000003ebe440 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar9 = (*pcRam0000000003ebe440)(lVar6,uVar3,lVar5);
    return auVar9;
  }
  lVar7 = func_0x00f78af4();
  uStack_1e0 = 0x3eb4000;
  uStack_1d8 = 0x3d20028;
  puStack_1b8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerAutoDriveReaction;
  lStack_1d0 = lVar6;
  lStack_1c8 = lVar5;
  ppuStack_1c0 = &ppuStack_190;
  if ((bRam0000000003eb4ef1 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef1 = 1;
  }
  lVar6 = *(long *)(lVar7 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar3 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x78);
    puVar1 = (undefined8 *)&stack0xfffffffffffffe50;
    lVar5 = lStack_1c8;
    lVar7 = lStack_1d0;
    uStack_238 = uStack_1d8;
    unaff_x22 = uStack_1e0;
    pppuVar8 = (undefined8 ***)ppuStack_1c0;
    puStack_218 = puStack_1b8;
    goto code_r0x0320d82c;
  }
  lVar5 = func_0x00f78af4();
  uStack_210 = 0x3eb4000;
  uStack_208 = 0x3eb4000;
  lStack_200 = 0x3d20028;
  puStack_1e8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerStartLineRandomAnimation;
  pppuVar8 = &ppuStack_1f0;
  lStack_1f8 = lVar6;
  ppuStack_1f0 = &ppuStack_1c0;
  if ((bRam0000000003eb4ef2 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef2 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = *(long *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x88);
  if (lVar7 == 0) {
code_r0x015389bc:
    func_0x00f78af4();
  }
  else {
    uVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(lVar7 + 0x18),0);
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
      lVar6 = *(long *)(lVar5 + 0x18);
      if (lVar6 != 0) {
        uVar3 = *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20);
        puVar1 = &uStack_1e0;
        lVar5 = lStack_1f8;
        lVar7 = lStack_200;
        uStack_238 = uStack_208;
        unaff_x22 = uStack_210;
        pppuVar8 = (undefined8 ***)ppuStack_1f0;
        puStack_218 = puStack_1e8;
        goto code_r0x0320d82c;
      }
      goto code_r0x015389bc;
    }
  }
  uVar4 = func_0x00f78b24();
  lVar6 = func_0x00f78ac0(uVar4,0);
  uStack_240 = 0x3eb4000;
  uStack_238 = 0x3eb4000;
  puStack_218 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIdleBreaker;
  if ((bRam0000000003eb4ef3 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef3 = 1;
  }
  lVar6 = *(long *)(lVar6 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 == 0) {
    lVar5 = func_0x00f78af4();
    if ((bRam0000000003eb4ef4 & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4ef4 = 1;
    }
    lVar5 = *(long *)(lVar5 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar5 != 0) {
      uVar3 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x84);
      if (pcRam0000000003ebe400 == (code *)0x0) {
        pcRam0000000003ebe400 =
             (code *)func_0x00f789d4("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)")
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar9 = (*pcRam0000000003ebe400)(extraout_s0,lVar5,uVar3);
      return auVar9;
    }
    auVar9._0_8_ = func_0x00f78af4();
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    auVar9._8_8_ = 0;
    return auVar9;
  }
  uVar3 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x7c);
  puVar1 = &uStack_210;
  unaff_x22 = uStack_240;
code_r0x0320d82c:
  *(undefined8 *)((long)puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar1 + -0x28) = uStack_238;
  *(long *)((long)puVar1 + -0x20) = lVar7;
  *(long *)((long)puVar1 + -0x18) = lVar5;
  *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar8;
  *(undefined **)((long)puVar1 + -8) = puStack_218;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar9 = (*pcRam0000000003ebe460)(lVar6,uVar3);
  return auVar9;
}



// ============================================================
// RVA: 0x1538370 | Atlas.Gameplay.Kart.BaseVisualBehaviour.PlayItemPickup
// ============================================================

/* WARNING: Possible PIC construction at 0x015383ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015384b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01538558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01538600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015386a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153874c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015386ac) */
/* WARNING: Removing unreachable block (ram,0x015386b4) */
/* WARNING: Removing unreachable block (ram,0x01538604) */
/* WARNING: Removing unreachable block (ram,0x0153860c) */
/* WARNING: Removing unreachable block (ram,0x0153855c) */
/* WARNING: Removing unreachable block (ram,0x01538564) */
/* WARNING: Removing unreachable block (ram,0x015384b4) */
/* WARNING: Removing unreachable block (ram,0x015384bc) */
/* WARNING: Removing unreachable block (ram,0x01538750) */
/* WARNING: Removing unreachable block (ram,0x01538758) */

undefined1  [16] Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemPickup(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x22;
  undefined8 ***pppuVar8;
  undefined4 extraout_s0;
  undefined1 auVar9 [16];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 **ppuStack_190;
  undefined *puStack_188;
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  undefined8 **ppuStack_100;
  undefined *puStack_f8;
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  puVar1 = (undefined8 *)&stack0xffffffffffffffd0;
  if ((bRam0000000003eb4ef5 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef5 = 1;
  }
  if ((param_2 & 1) == 0) {
    lVar6 = *(long *)(param_1 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar6 != 0) {
      uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x24);
      lVar7 = lVar6;
      uStack_208 = 0x3d20028;
      pppuVar8 = (undefined8 ***)&stack0xfffffffffffffff0;
      puStack_1e8 = &UNK_015383f0;
      goto code_r0x0320d82c;
    }
  }
  else {
    lVar6 = *(long *)(param_1 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar6 != 0) {
      uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x34);
      if (pcRam0000000003ebe420 == (code *)0x0) {
        pcRam0000000003ebe420 =
             (code *)func_0x00f789d4("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)")
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x0320d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar9 = (*pcRam0000000003ebe420)(lVar6,uVar5,1);
      return auVar9;
    }
  }
  param_1 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xffffffffffffffa0;
  puStack_38 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemActivate;
  ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ef6 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef6 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x28);
    lVar7 = lVar6;
    uStack_208 = 0x3d20028;
    pppuVar8 = &ppuStack_40;
    puStack_1e8 = &UNK_015384b4;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xffffffffffffff70;
  puStack_68 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemThrowForward;
  ppuStack_70 = &ppuStack_40;
  if ((bRam0000000003eb4ef8 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef8 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x2c);
    lVar7 = lVar6;
    uStack_208 = 0x3d20028;
    pppuVar8 = &ppuStack_70;
    puStack_1e8 = &UNK_0153855c;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xffffffffffffff40;
  puStack_98 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemThrowBackward;
  ppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eb4ef9 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef9 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x30);
    lVar7 = lVar6;
    uStack_208 = 0x3d20028;
    pppuVar8 = &ppuStack_a0;
    puStack_1e8 = &UNK_01538604;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xffffffffffffff10;
  puStack_c8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemPropane;
  ppuStack_d0 = &ppuStack_a0;
  if ((bRam0000000003eb4ef7 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef7 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x38);
    lVar7 = lVar6;
    uStack_208 = 0x3d20028;
    pppuVar8 = &ppuStack_d0;
    puStack_1e8 = &UNK_015386ac;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xfffffffffffffee0;
  puStack_f8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemTimeCheater;
  ppuStack_100 = &ppuStack_d0;
  if ((bRam0000000003eb4eee & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4eee = 1;
  }
  lVar7 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x3c);
    lVar6 = lVar7;
    uStack_208 = 0x3d20028;
    pppuVar8 = &ppuStack_100;
    puStack_1e8 = &UNK_01538750;
    goto code_r0x0320d82c;
  }
  lVar6 = func_0x00f78af4();
  puStack_128 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerFinishLineReaction;
  ppuStack_130 = &ppuStack_100;
  if ((bRam0000000003eb4eef & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4eef = 1;
  }
  lVar6 = *(long *)(lVar6 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x74);
    puVar1 = (undefined8 *)&stack0xfffffffffffffee0;
    uStack_208 = 0x3d20028;
    pppuVar8 = (undefined8 ***)ppuStack_130;
    puStack_1e8 = puStack_128;
    goto code_r0x0320d82c;
  }
  auVar9 = func_0x00f78af4();
  lVar6 = auVar9._8_8_;
  puStack_158 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetFinishLineIndexParam;
  ppuStack_160 = &ppuStack_130;
  if ((bRam0000000003eb4ef0 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef0 = 1;
  }
  lVar7 = *(long *)(auVar9._0_8_ + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x70);
    if (pcRam0000000003ebe440 == (code *)0x0) {
      pcRam0000000003ebe440 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar9 = (*pcRam0000000003ebe440)(lVar7,uVar5,lVar6);
    return auVar9;
  }
  lVar3 = func_0x00f78af4();
  uStack_1b0 = 0x3eb4000;
  uStack_1a8 = 0x3d20028;
  puStack_188 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerAutoDriveReaction;
  lStack_1a0 = lVar7;
  lStack_198 = lVar6;
  ppuStack_190 = &ppuStack_160;
  if ((bRam0000000003eb4ef1 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef1 = 1;
  }
  lVar6 = *(long *)(lVar3 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x78);
    puVar1 = (undefined8 *)&stack0xfffffffffffffe80;
    param_1 = lStack_198;
    lVar7 = lStack_1a0;
    uStack_208 = uStack_1a8;
    unaff_x22 = uStack_1b0;
    pppuVar8 = (undefined8 ***)ppuStack_190;
    puStack_1e8 = puStack_188;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  uStack_1e0 = 0x3eb4000;
  uStack_1d8 = 0x3eb4000;
  lStack_1d0 = 0x3d20028;
  puStack_1b8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerStartLineRandomAnimation;
  pppuVar8 = &ppuStack_1c0;
  lStack_1c8 = lVar6;
  ppuStack_1c0 = &ppuStack_190;
  if ((bRam0000000003eb4ef2 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef2 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = *(long *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x88);
  if (lVar7 == 0) {
code_r0x015389bc:
    func_0x00f78af4();
  }
  else {
    uVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(lVar7 + 0x18),0);
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
      lVar6 = *(long *)(param_1 + 0x18);
      if (lVar6 != 0) {
        uVar5 = *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20);
        puVar1 = &uStack_1b0;
        param_1 = lStack_1c8;
        lVar7 = lStack_1d0;
        uStack_208 = uStack_1d8;
        unaff_x22 = uStack_1e0;
        pppuVar8 = (undefined8 ***)ppuStack_1c0;
        puStack_1e8 = puStack_1b8;
        goto code_r0x0320d82c;
      }
      goto code_r0x015389bc;
    }
  }
  uVar4 = func_0x00f78b24();
  lVar6 = func_0x00f78ac0(uVar4,0);
  uStack_210 = 0x3eb4000;
  uStack_208 = 0x3eb4000;
  puStack_1e8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIdleBreaker;
  if ((bRam0000000003eb4ef3 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef3 = 1;
  }
  lVar6 = *(long *)(lVar6 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 == 0) {
    lVar6 = func_0x00f78af4();
    if ((bRam0000000003eb4ef4 & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4ef4 = 1;
    }
    lVar6 = *(long *)(lVar6 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar6 != 0) {
      uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x84);
      if (pcRam0000000003ebe400 == (code *)0x0) {
        pcRam0000000003ebe400 =
             (code *)func_0x00f789d4("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)")
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar9 = (*pcRam0000000003ebe400)(extraout_s0,lVar6,uVar5);
      return auVar9;
    }
    auVar9._0_8_ = func_0x00f78af4();
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    auVar9._8_8_ = 0;
    return auVar9;
  }
  uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x7c);
  puVar1 = &uStack_1e0;
  unaff_x22 = uStack_210;
code_r0x0320d82c:
  *(undefined8 *)((long)puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar1 + -0x28) = uStack_208;
  *(long *)((long)puVar1 + -0x20) = lVar7;
  *(long *)((long)puVar1 + -0x18) = param_1;
  *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar8;
  *(undefined **)((long)puVar1 + -8) = puStack_1e8;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar9 = (*pcRam0000000003ebe460)(lVar6,uVar5);
  return auVar9;
}



// ============================================================
// RVA: 0x1538374 | Atlas.Gameplay.Kart.BaseVisualBehaviour.TriggerItemPickup
// ============================================================

/* WARNING: Possible PIC construction at 0x015383ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015384b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01538558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01538600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015386a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153874c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015386ac) */
/* WARNING: Removing unreachable block (ram,0x015386b4) */
/* WARNING: Removing unreachable block (ram,0x01538604) */
/* WARNING: Removing unreachable block (ram,0x0153860c) */
/* WARNING: Removing unreachable block (ram,0x0153855c) */
/* WARNING: Removing unreachable block (ram,0x01538564) */
/* WARNING: Removing unreachable block (ram,0x015384b4) */
/* WARNING: Removing unreachable block (ram,0x015384bc) */
/* WARNING: Removing unreachable block (ram,0x01538750) */
/* WARNING: Removing unreachable block (ram,0x01538758) */

undefined1  [16]
Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerItemPickup(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x22;
  undefined8 ***pppuVar8;
  undefined4 extraout_s0;
  undefined1 auVar9 [16];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 **ppuStack_190;
  undefined *puStack_188;
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  undefined8 **ppuStack_100;
  undefined *puStack_f8;
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  puVar1 = (undefined8 *)&stack0xffffffffffffffd0;
  if ((bRam0000000003eb4ef5 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef5 = 1;
  }
  if ((param_2 & 1) == 0) {
    lVar6 = *(long *)(param_1 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar6 != 0) {
      uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x24);
      lVar7 = lVar6;
      uStack_208 = 0x3d20028;
      pppuVar8 = (undefined8 ***)&stack0xfffffffffffffff0;
      puStack_1e8 = (undefined *)0x15383f0;
      goto code_r0x0320d82c;
    }
  }
  else {
    lVar6 = *(long *)(param_1 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar6 != 0) {
      uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x34);
      if (pcRam0000000003ebe420 == (code *)0x0) {
        pcRam0000000003ebe420 =
             (code *)func_0x00f789d4("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)")
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x0320d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar9 = (*pcRam0000000003ebe420)(lVar6,uVar5,1);
      return auVar9;
    }
  }
  param_1 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xffffffffffffffa0;
  puStack_38 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemActivate;
  ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ef6 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef6 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x28);
    lVar7 = lVar6;
    uStack_208 = 0x3d20028;
    pppuVar8 = &ppuStack_40;
    puStack_1e8 = &UNK_015384b4;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xffffffffffffff70;
  puStack_68 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemThrowForward;
  ppuStack_70 = &ppuStack_40;
  if ((bRam0000000003eb4ef8 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef8 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x2c);
    lVar7 = lVar6;
    uStack_208 = 0x3d20028;
    pppuVar8 = &ppuStack_70;
    puStack_1e8 = &UNK_0153855c;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xffffffffffffff40;
  puStack_98 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemThrowBackward;
  ppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eb4ef9 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef9 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x30);
    lVar7 = lVar6;
    uStack_208 = 0x3d20028;
    pppuVar8 = &ppuStack_a0;
    puStack_1e8 = &UNK_01538604;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xffffffffffffff10;
  puStack_c8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemPropane;
  ppuStack_d0 = &ppuStack_a0;
  if ((bRam0000000003eb4ef7 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef7 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x38);
    lVar7 = lVar6;
    uStack_208 = 0x3d20028;
    pppuVar8 = &ppuStack_d0;
    puStack_1e8 = &UNK_015386ac;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xfffffffffffffee0;
  puStack_f8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemTimeCheater;
  ppuStack_100 = &ppuStack_d0;
  if ((bRam0000000003eb4eee & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4eee = 1;
  }
  lVar7 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x3c);
    lVar6 = lVar7;
    uStack_208 = 0x3d20028;
    pppuVar8 = &ppuStack_100;
    puStack_1e8 = &UNK_01538750;
    goto code_r0x0320d82c;
  }
  lVar6 = func_0x00f78af4();
  puStack_128 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerFinishLineReaction;
  ppuStack_130 = &ppuStack_100;
  if ((bRam0000000003eb4eef & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4eef = 1;
  }
  lVar6 = *(long *)(lVar6 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x74);
    puVar1 = (undefined8 *)&stack0xfffffffffffffee0;
    uStack_208 = 0x3d20028;
    pppuVar8 = (undefined8 ***)ppuStack_130;
    puStack_1e8 = puStack_128;
    goto code_r0x0320d82c;
  }
  auVar9 = func_0x00f78af4();
  lVar6 = auVar9._8_8_;
  puStack_158 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetFinishLineIndexParam;
  ppuStack_160 = &ppuStack_130;
  if ((bRam0000000003eb4ef0 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef0 = 1;
  }
  lVar7 = *(long *)(auVar9._0_8_ + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x70);
    if (pcRam0000000003ebe440 == (code *)0x0) {
      pcRam0000000003ebe440 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar9 = (*pcRam0000000003ebe440)(lVar7,uVar5,lVar6);
    return auVar9;
  }
  lVar3 = func_0x00f78af4();
  uStack_1b0 = 0x3eb4000;
  uStack_1a8 = 0x3d20028;
  puStack_188 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerAutoDriveReaction;
  lStack_1a0 = lVar7;
  lStack_198 = lVar6;
  ppuStack_190 = &ppuStack_160;
  if ((bRam0000000003eb4ef1 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef1 = 1;
  }
  lVar6 = *(long *)(lVar3 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x78);
    puVar1 = (undefined8 *)&stack0xfffffffffffffe80;
    param_1 = lStack_198;
    lVar7 = lStack_1a0;
    uStack_208 = uStack_1a8;
    unaff_x22 = uStack_1b0;
    pppuVar8 = (undefined8 ***)ppuStack_190;
    puStack_1e8 = puStack_188;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  uStack_1e0 = 0x3eb4000;
  uStack_1d8 = 0x3eb4000;
  lStack_1d0 = 0x3d20028;
  puStack_1b8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerStartLineRandomAnimation;
  pppuVar8 = &ppuStack_1c0;
  lStack_1c8 = lVar6;
  ppuStack_1c0 = &ppuStack_190;
  if ((bRam0000000003eb4ef2 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef2 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = *(long *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x88);
  if (lVar7 == 0) {
code_r0x015389bc:
    func_0x00f78af4();
  }
  else {
    uVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(lVar7 + 0x18),0);
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
      lVar6 = *(long *)(param_1 + 0x18);
      if (lVar6 != 0) {
        uVar5 = *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20);
        puVar1 = &uStack_1b0;
        param_1 = lStack_1c8;
        lVar7 = lStack_1d0;
        uStack_208 = uStack_1d8;
        unaff_x22 = uStack_1e0;
        pppuVar8 = (undefined8 ***)ppuStack_1c0;
        puStack_1e8 = puStack_1b8;
        goto code_r0x0320d82c;
      }
      goto code_r0x015389bc;
    }
  }
  uVar4 = func_0x00f78b24();
  lVar6 = func_0x00f78ac0(uVar4,0);
  uStack_210 = 0x3eb4000;
  uStack_208 = 0x3eb4000;
  puStack_1e8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIdleBreaker;
  if ((bRam0000000003eb4ef3 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef3 = 1;
  }
  lVar6 = *(long *)(lVar6 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 == 0) {
    lVar6 = func_0x00f78af4();
    if ((bRam0000000003eb4ef4 & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4ef4 = 1;
    }
    lVar6 = *(long *)(lVar6 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar6 != 0) {
      uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x84);
      if (pcRam0000000003ebe400 == (code *)0x0) {
        pcRam0000000003ebe400 =
             (code *)func_0x00f789d4("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)")
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar9 = (*pcRam0000000003ebe400)(extraout_s0,lVar6,uVar5);
      return auVar9;
    }
    auVar9._0_8_ = func_0x00f78af4();
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    auVar9._8_8_ = 0;
    return auVar9;
  }
  uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x7c);
  puVar1 = &uStack_1e0;
  unaff_x22 = uStack_210;
code_r0x0320d82c:
  *(undefined8 *)((long)puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar1 + -0x28) = uStack_208;
  *(long *)((long)puVar1 + -0x20) = lVar7;
  *(long *)((long)puVar1 + -0x18) = param_1;
  *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar8;
  *(undefined **)((long)puVar1 + -8) = puStack_1e8;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar9 = (*pcRam0000000003ebe460)(lVar6,uVar5);
  return auVar9;
}



// ============================================================
// RVA: 0x153843c | Atlas.Gameplay.Kart.BaseVisualBehaviour.PlayItemActivate
// ============================================================

/* WARNING: Possible PIC construction at 0x015384b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01538558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01538600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015386a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153874c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015386ac) */
/* WARNING: Removing unreachable block (ram,0x015386b4) */
/* WARNING: Removing unreachable block (ram,0x01538604) */
/* WARNING: Removing unreachable block (ram,0x0153860c) */
/* WARNING: Removing unreachable block (ram,0x0153855c) */
/* WARNING: Removing unreachable block (ram,0x01538564) */
/* WARNING: Removing unreachable block (ram,0x015384b4) */
/* WARNING: Removing unreachable block (ram,0x015384bc) */
/* WARNING: Removing unreachable block (ram,0x01538750) */
/* WARNING: Removing unreachable block (ram,0x01538758) */
/* WARNING: Removing unreachable block (ram,0x0320d43c) */
/* WARNING: Removing unreachable block (ram,0x0320d464) */
/* WARNING: Removing unreachable block (ram,0x0320d478) */

undefined1  [16] Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemActivate(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x22;
  undefined8 ***pppuVar8;
  undefined4 extraout_s0;
  undefined1 auVar9 [16];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 **ppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  undefined8 **ppuStack_100;
  undefined *puStack_f8;
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  puVar1 = (undefined8 *)&stack0xffffffffffffffd0;
  if ((bRam0000000003eb4ef6 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef6 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x28);
    lVar7 = lVar6;
    uStack_1d8 = 0x3d20028;
    pppuVar8 = (undefined8 ***)&stack0xfffffffffffffff0;
    puStack_1b8 = &UNK_015384b4;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xffffffffffffffa0;
  puStack_38 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemThrowForward;
  ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ef8 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef8 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x2c);
    lVar7 = lVar6;
    uStack_1d8 = 0x3d20028;
    pppuVar8 = &ppuStack_40;
    puStack_1b8 = &UNK_0153855c;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xffffffffffffff70;
  puStack_68 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemThrowBackward;
  ppuStack_70 = &ppuStack_40;
  if ((bRam0000000003eb4ef9 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef9 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x30);
    lVar7 = lVar6;
    uStack_1d8 = 0x3d20028;
    pppuVar8 = &ppuStack_70;
    puStack_1b8 = &UNK_01538604;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xffffffffffffff40;
  puStack_98 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemPropane;
  ppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eb4ef7 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef7 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x38);
    lVar7 = lVar6;
    uStack_1d8 = 0x3d20028;
    pppuVar8 = &ppuStack_a0;
    puStack_1b8 = &UNK_015386ac;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xffffffffffffff10;
  puStack_c8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemTimeCheater;
  ppuStack_d0 = &ppuStack_a0;
  if ((bRam0000000003eb4eee & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4eee = 1;
  }
  lVar7 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x3c);
    lVar6 = lVar7;
    uStack_1d8 = 0x3d20028;
    pppuVar8 = &ppuStack_d0;
    puStack_1b8 = &UNK_01538750;
    goto code_r0x0320d82c;
  }
  lVar6 = func_0x00f78af4();
  puStack_f8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerFinishLineReaction;
  ppuStack_100 = &ppuStack_d0;
  if ((bRam0000000003eb4eef & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4eef = 1;
  }
  lVar6 = *(long *)(lVar6 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x74);
    puVar1 = (undefined8 *)&stack0xffffffffffffff10;
    uStack_1d8 = 0x3d20028;
    pppuVar8 = (undefined8 ***)ppuStack_100;
    puStack_1b8 = puStack_f8;
    goto code_r0x0320d82c;
  }
  auVar9 = func_0x00f78af4();
  lVar6 = auVar9._8_8_;
  puStack_128 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetFinishLineIndexParam;
  ppuStack_130 = &ppuStack_100;
  if ((bRam0000000003eb4ef0 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef0 = 1;
  }
  lVar7 = *(long *)(auVar9._0_8_ + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x70);
    if (pcRam0000000003ebe440 == (code *)0x0) {
      pcRam0000000003ebe440 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar9 = (*pcRam0000000003ebe440)(lVar7,uVar5,lVar6);
    return auVar9;
  }
  lVar3 = func_0x00f78af4();
  uStack_180 = 0x3eb4000;
  uStack_178 = 0x3d20028;
  puStack_158 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerAutoDriveReaction;
  lStack_170 = lVar7;
  lStack_168 = lVar6;
  ppuStack_160 = &ppuStack_130;
  if ((bRam0000000003eb4ef1 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef1 = 1;
  }
  lVar6 = *(long *)(lVar3 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x78);
    puVar1 = (undefined8 *)&stack0xfffffffffffffeb0;
    param_1 = lStack_168;
    lVar7 = lStack_170;
    uStack_1d8 = uStack_178;
    unaff_x22 = uStack_180;
    pppuVar8 = (undefined8 ***)ppuStack_160;
    puStack_1b8 = puStack_158;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  uStack_1b0 = 0x3eb4000;
  uStack_1a8 = 0x3eb4000;
  lStack_1a0 = 0x3d20028;
  puStack_188 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerStartLineRandomAnimation;
  pppuVar8 = &ppuStack_190;
  lStack_198 = lVar6;
  ppuStack_190 = &ppuStack_160;
  if ((bRam0000000003eb4ef2 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef2 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = *(long *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x88);
  if (lVar7 == 0) {
code_r0x015389bc:
    func_0x00f78af4();
  }
  else {
    uVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(lVar7 + 0x18),0);
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
      lVar6 = *(long *)(param_1 + 0x18);
      if (lVar6 != 0) {
        uVar5 = *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20);
        puVar1 = &uStack_180;
        param_1 = lStack_198;
        lVar7 = lStack_1a0;
        uStack_1d8 = uStack_1a8;
        unaff_x22 = uStack_1b0;
        pppuVar8 = (undefined8 ***)ppuStack_190;
        puStack_1b8 = puStack_188;
        goto code_r0x0320d82c;
      }
      goto code_r0x015389bc;
    }
  }
  uVar4 = func_0x00f78b24();
  lVar6 = func_0x00f78ac0(uVar4,0);
  uStack_1e0 = 0x3eb4000;
  uStack_1d8 = 0x3eb4000;
  puStack_1b8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIdleBreaker;
  if ((bRam0000000003eb4ef3 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef3 = 1;
  }
  lVar6 = *(long *)(lVar6 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 == 0) {
    lVar6 = func_0x00f78af4();
    if ((bRam0000000003eb4ef4 & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4ef4 = 1;
    }
    lVar6 = *(long *)(lVar6 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar6 != 0) {
      uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x84);
      if (pcRam0000000003ebe400 == (code *)0x0) {
        pcRam0000000003ebe400 =
             (code *)func_0x00f789d4("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)")
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar9 = (*pcRam0000000003ebe400)(extraout_s0,lVar6,uVar5);
      return auVar9;
    }
    auVar9._0_8_ = func_0x00f78af4();
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    auVar9._8_8_ = 0;
    return auVar9;
  }
  uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x7c);
  puVar1 = &uStack_1b0;
  unaff_x22 = uStack_1e0;
code_r0x0320d82c:
  *(undefined8 *)((long)puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar1 + -0x28) = uStack_1d8;
  *(long *)((long)puVar1 + -0x20) = lVar7;
  *(long *)((long)puVar1 + -0x18) = param_1;
  *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar8;
  *(undefined **)((long)puVar1 + -8) = puStack_1b8;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar9 = (*pcRam0000000003ebe460)(lVar6,uVar5);
  return auVar9;
}



// ============================================================
// RVA: 0x1538440 | Atlas.Gameplay.Kart.BaseVisualBehaviour.TriggerItemActivate
// ============================================================

/* WARNING: Possible PIC construction at 0x015384b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01538558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01538600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015386a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153874c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015386ac) */
/* WARNING: Removing unreachable block (ram,0x015386b4) */
/* WARNING: Removing unreachable block (ram,0x01538604) */
/* WARNING: Removing unreachable block (ram,0x0153860c) */
/* WARNING: Removing unreachable block (ram,0x0153855c) */
/* WARNING: Removing unreachable block (ram,0x01538564) */
/* WARNING: Removing unreachable block (ram,0x015384b4) */
/* WARNING: Removing unreachable block (ram,0x015384bc) */
/* WARNING: Removing unreachable block (ram,0x01538750) */
/* WARNING: Removing unreachable block (ram,0x01538758) */
/* WARNING: Removing unreachable block (ram,0x0320d43c) */
/* WARNING: Removing unreachable block (ram,0x0320d464) */
/* WARNING: Removing unreachable block (ram,0x0320d478) */

undefined1  [16] Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerItemActivate(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x22;
  undefined8 ***pppuVar8;
  undefined4 extraout_s0;
  undefined1 auVar9 [16];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 **ppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  undefined8 **ppuStack_100;
  undefined *puStack_f8;
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  puVar1 = (undefined8 *)&stack0xffffffffffffffd0;
  if ((bRam0000000003eb4ef6 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef6 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x28);
    lVar7 = lVar6;
    uStack_1d8 = 0x3d20028;
    pppuVar8 = (undefined8 ***)&stack0xfffffffffffffff0;
    puStack_1b8 = (undefined *)0x15384b4;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xffffffffffffffa0;
  puStack_38 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemThrowForward;
  ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ef8 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef8 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x2c);
    lVar7 = lVar6;
    uStack_1d8 = 0x3d20028;
    pppuVar8 = &ppuStack_40;
    puStack_1b8 = &UNK_0153855c;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xffffffffffffff70;
  puStack_68 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemThrowBackward;
  ppuStack_70 = &ppuStack_40;
  if ((bRam0000000003eb4ef9 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef9 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x30);
    lVar7 = lVar6;
    uStack_1d8 = 0x3d20028;
    pppuVar8 = &ppuStack_70;
    puStack_1b8 = &UNK_01538604;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xffffffffffffff40;
  puStack_98 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemPropane;
  ppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eb4ef7 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef7 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x38);
    lVar7 = lVar6;
    uStack_1d8 = 0x3d20028;
    pppuVar8 = &ppuStack_a0;
    puStack_1b8 = &UNK_015386ac;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xffffffffffffff10;
  puStack_c8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemTimeCheater;
  ppuStack_d0 = &ppuStack_a0;
  if ((bRam0000000003eb4eee & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4eee = 1;
  }
  lVar7 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x3c);
    lVar6 = lVar7;
    uStack_1d8 = 0x3d20028;
    pppuVar8 = &ppuStack_d0;
    puStack_1b8 = &UNK_01538750;
    goto code_r0x0320d82c;
  }
  lVar6 = func_0x00f78af4();
  puStack_f8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerFinishLineReaction;
  ppuStack_100 = &ppuStack_d0;
  if ((bRam0000000003eb4eef & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4eef = 1;
  }
  lVar6 = *(long *)(lVar6 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x74);
    puVar1 = (undefined8 *)&stack0xffffffffffffff10;
    uStack_1d8 = 0x3d20028;
    pppuVar8 = (undefined8 ***)ppuStack_100;
    puStack_1b8 = puStack_f8;
    goto code_r0x0320d82c;
  }
  auVar9 = func_0x00f78af4();
  lVar6 = auVar9._8_8_;
  puStack_128 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetFinishLineIndexParam;
  ppuStack_130 = &ppuStack_100;
  if ((bRam0000000003eb4ef0 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef0 = 1;
  }
  lVar7 = *(long *)(auVar9._0_8_ + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x70);
    if (pcRam0000000003ebe440 == (code *)0x0) {
      pcRam0000000003ebe440 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar9 = (*pcRam0000000003ebe440)(lVar7,uVar5,lVar6);
    return auVar9;
  }
  lVar3 = func_0x00f78af4();
  uStack_180 = 0x3eb4000;
  uStack_178 = 0x3d20028;
  puStack_158 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerAutoDriveReaction;
  lStack_170 = lVar7;
  lStack_168 = lVar6;
  ppuStack_160 = &ppuStack_130;
  if ((bRam0000000003eb4ef1 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef1 = 1;
  }
  lVar6 = *(long *)(lVar3 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x78);
    puVar1 = (undefined8 *)&stack0xfffffffffffffeb0;
    param_1 = lStack_168;
    lVar7 = lStack_170;
    uStack_1d8 = uStack_178;
    unaff_x22 = uStack_180;
    pppuVar8 = (undefined8 ***)ppuStack_160;
    puStack_1b8 = puStack_158;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  uStack_1b0 = 0x3eb4000;
  uStack_1a8 = 0x3eb4000;
  lStack_1a0 = 0x3d20028;
  puStack_188 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerStartLineRandomAnimation;
  pppuVar8 = &ppuStack_190;
  lStack_198 = lVar6;
  ppuStack_190 = &ppuStack_160;
  if ((bRam0000000003eb4ef2 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef2 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = *(long *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x88);
  if (lVar7 == 0) {
code_r0x015389bc:
    func_0x00f78af4();
  }
  else {
    uVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(lVar7 + 0x18),0);
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
      lVar6 = *(long *)(param_1 + 0x18);
      if (lVar6 != 0) {
        uVar5 = *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20);
        puVar1 = &uStack_180;
        param_1 = lStack_198;
        lVar7 = lStack_1a0;
        uStack_1d8 = uStack_1a8;
        unaff_x22 = uStack_1b0;
        pppuVar8 = (undefined8 ***)ppuStack_190;
        puStack_1b8 = puStack_188;
        goto code_r0x0320d82c;
      }
      goto code_r0x015389bc;
    }
  }
  uVar4 = func_0x00f78b24();
  lVar6 = func_0x00f78ac0(uVar4,0);
  uStack_1e0 = 0x3eb4000;
  uStack_1d8 = 0x3eb4000;
  puStack_1b8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIdleBreaker;
  if ((bRam0000000003eb4ef3 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef3 = 1;
  }
  lVar6 = *(long *)(lVar6 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 == 0) {
    lVar6 = func_0x00f78af4();
    if ((bRam0000000003eb4ef4 & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4ef4 = 1;
    }
    lVar6 = *(long *)(lVar6 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar6 != 0) {
      uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x84);
      if (pcRam0000000003ebe400 == (code *)0x0) {
        pcRam0000000003ebe400 =
             (code *)func_0x00f789d4("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)")
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar9 = (*pcRam0000000003ebe400)(extraout_s0,lVar6,uVar5);
      return auVar9;
    }
    auVar9._0_8_ = func_0x00f78af4();
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    auVar9._8_8_ = 0;
    return auVar9;
  }
  uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x7c);
  puVar1 = &uStack_1b0;
  unaff_x22 = uStack_1e0;
code_r0x0320d82c:
  *(undefined8 *)((long)puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar1 + -0x28) = uStack_1d8;
  *(long *)((long)puVar1 + -0x20) = lVar7;
  *(long *)((long)puVar1 + -0x18) = param_1;
  *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar8;
  *(undefined **)((long)puVar1 + -8) = puStack_1b8;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar9 = (*pcRam0000000003ebe460)(lVar6,uVar5);
  return auVar9;
}



// ============================================================
// RVA: 0x15384e4 | Atlas.Gameplay.Kart.BaseVisualBehaviour.PlayItemThrowForward
// ============================================================

/* WARNING: Possible PIC construction at 0x01538558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01538600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015386a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153874c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015386ac) */
/* WARNING: Removing unreachable block (ram,0x015386b4) */
/* WARNING: Removing unreachable block (ram,0x01538604) */
/* WARNING: Removing unreachable block (ram,0x0153860c) */
/* WARNING: Removing unreachable block (ram,0x0153855c) */
/* WARNING: Removing unreachable block (ram,0x01538564) */
/* WARNING: Removing unreachable block (ram,0x01538750) */
/* WARNING: Removing unreachable block (ram,0x01538758) */
/* WARNING: Removing unreachable block (ram,0x0320d43c) */
/* WARNING: Removing unreachable block (ram,0x0320d464) */
/* WARNING: Removing unreachable block (ram,0x0320d478) */

undefined1  [16] Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemThrowForward(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x22;
  undefined8 ***pppuVar8;
  undefined4 extraout_s0;
  undefined1 auVar9 [16];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  undefined8 **ppuStack_100;
  undefined *puStack_f8;
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  puVar1 = (undefined8 *)&stack0xffffffffffffffd0;
  if ((bRam0000000003eb4ef8 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef8 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x2c);
    lVar7 = lVar6;
    uStack_1a8 = 0x3d20028;
    pppuVar8 = (undefined8 ***)&stack0xfffffffffffffff0;
    puStack_188 = &UNK_0153855c;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xffffffffffffffa0;
  puStack_38 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemThrowBackward;
  ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ef9 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef9 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x30);
    lVar7 = lVar6;
    uStack_1a8 = 0x3d20028;
    pppuVar8 = &ppuStack_40;
    puStack_188 = &UNK_01538604;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xffffffffffffff70;
  puStack_68 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemPropane;
  ppuStack_70 = &ppuStack_40;
  if ((bRam0000000003eb4ef7 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef7 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x38);
    lVar7 = lVar6;
    uStack_1a8 = 0x3d20028;
    pppuVar8 = &ppuStack_70;
    puStack_188 = &UNK_015386ac;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xffffffffffffff40;
  puStack_98 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemTimeCheater;
  ppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eb4eee & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4eee = 1;
  }
  lVar7 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x3c);
    lVar6 = lVar7;
    uStack_1a8 = 0x3d20028;
    pppuVar8 = &ppuStack_a0;
    puStack_188 = &UNK_01538750;
    goto code_r0x0320d82c;
  }
  lVar6 = func_0x00f78af4();
  puStack_c8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerFinishLineReaction;
  ppuStack_d0 = &ppuStack_a0;
  if ((bRam0000000003eb4eef & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4eef = 1;
  }
  lVar6 = *(long *)(lVar6 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x74);
    puVar1 = (undefined8 *)&stack0xffffffffffffff40;
    uStack_1a8 = 0x3d20028;
    pppuVar8 = (undefined8 ***)ppuStack_d0;
    puStack_188 = puStack_c8;
    goto code_r0x0320d82c;
  }
  auVar9 = func_0x00f78af4();
  lVar6 = auVar9._8_8_;
  puStack_f8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetFinishLineIndexParam;
  ppuStack_100 = &ppuStack_d0;
  if ((bRam0000000003eb4ef0 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef0 = 1;
  }
  lVar7 = *(long *)(auVar9._0_8_ + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x70);
    if (pcRam0000000003ebe440 == (code *)0x0) {
      pcRam0000000003ebe440 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar9 = (*pcRam0000000003ebe440)(lVar7,uVar5,lVar6);
    return auVar9;
  }
  lVar3 = func_0x00f78af4();
  uStack_150 = 0x3eb4000;
  uStack_148 = 0x3d20028;
  puStack_128 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerAutoDriveReaction;
  lStack_140 = lVar7;
  lStack_138 = lVar6;
  ppuStack_130 = &ppuStack_100;
  if ((bRam0000000003eb4ef1 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef1 = 1;
  }
  lVar6 = *(long *)(lVar3 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x78);
    puVar1 = (undefined8 *)&stack0xfffffffffffffee0;
    param_1 = lStack_138;
    lVar7 = lStack_140;
    uStack_1a8 = uStack_148;
    unaff_x22 = uStack_150;
    pppuVar8 = (undefined8 ***)ppuStack_130;
    puStack_188 = puStack_128;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  uStack_180 = 0x3eb4000;
  uStack_178 = 0x3eb4000;
  lStack_170 = 0x3d20028;
  puStack_158 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerStartLineRandomAnimation;
  pppuVar8 = &ppuStack_160;
  lStack_168 = lVar6;
  ppuStack_160 = &ppuStack_130;
  if ((bRam0000000003eb4ef2 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef2 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = *(long *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x88);
  if (lVar7 == 0) {
code_r0x015389bc:
    func_0x00f78af4();
  }
  else {
    uVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(lVar7 + 0x18),0);
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
      lVar6 = *(long *)(param_1 + 0x18);
      if (lVar6 != 0) {
        uVar5 = *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20);
        puVar1 = &uStack_150;
        param_1 = lStack_168;
        lVar7 = lStack_170;
        uStack_1a8 = uStack_178;
        unaff_x22 = uStack_180;
        pppuVar8 = (undefined8 ***)ppuStack_160;
        puStack_188 = puStack_158;
        goto code_r0x0320d82c;
      }
      goto code_r0x015389bc;
    }
  }
  uVar4 = func_0x00f78b24();
  lVar6 = func_0x00f78ac0(uVar4,0);
  uStack_1b0 = 0x3eb4000;
  uStack_1a8 = 0x3eb4000;
  puStack_188 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIdleBreaker;
  if ((bRam0000000003eb4ef3 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef3 = 1;
  }
  lVar6 = *(long *)(lVar6 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 == 0) {
    lVar6 = func_0x00f78af4();
    if ((bRam0000000003eb4ef4 & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4ef4 = 1;
    }
    lVar6 = *(long *)(lVar6 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar6 != 0) {
      uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x84);
      if (pcRam0000000003ebe400 == (code *)0x0) {
        pcRam0000000003ebe400 =
             (code *)func_0x00f789d4("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)")
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar9 = (*pcRam0000000003ebe400)(extraout_s0,lVar6,uVar5);
      return auVar9;
    }
    auVar9._0_8_ = func_0x00f78af4();
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    auVar9._8_8_ = 0;
    return auVar9;
  }
  uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x7c);
  puVar1 = &uStack_180;
  unaff_x22 = uStack_1b0;
code_r0x0320d82c:
  *(undefined8 *)((long)puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar1 + -0x28) = uStack_1a8;
  *(long *)((long)puVar1 + -0x20) = lVar7;
  *(long *)((long)puVar1 + -0x18) = param_1;
  *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar8;
  *(undefined **)((long)puVar1 + -8) = puStack_188;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar9 = (*pcRam0000000003ebe460)(lVar6,uVar5);
  return auVar9;
}



// ============================================================
// RVA: 0x15384e8 | Atlas.Gameplay.Kart.BaseVisualBehaviour.TriggerItemThrowForward
// ============================================================

/* WARNING: Possible PIC construction at 0x01538558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01538600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015386a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153874c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015386ac) */
/* WARNING: Removing unreachable block (ram,0x015386b4) */
/* WARNING: Removing unreachable block (ram,0x01538604) */
/* WARNING: Removing unreachable block (ram,0x0153860c) */
/* WARNING: Removing unreachable block (ram,0x0153855c) */
/* WARNING: Removing unreachable block (ram,0x01538564) */
/* WARNING: Removing unreachable block (ram,0x01538750) */
/* WARNING: Removing unreachable block (ram,0x01538758) */
/* WARNING: Removing unreachable block (ram,0x0320d43c) */
/* WARNING: Removing unreachable block (ram,0x0320d464) */
/* WARNING: Removing unreachable block (ram,0x0320d478) */

undefined1  [16] Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerItemThrowForward(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x22;
  undefined8 ***pppuVar8;
  undefined4 extraout_s0;
  undefined1 auVar9 [16];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  undefined8 **ppuStack_100;
  undefined *puStack_f8;
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  puVar1 = (undefined8 *)&stack0xffffffffffffffd0;
  if ((bRam0000000003eb4ef8 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef8 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x2c);
    lVar7 = lVar6;
    uStack_1a8 = 0x3d20028;
    pppuVar8 = (undefined8 ***)&stack0xfffffffffffffff0;
    puStack_188 = (undefined *)0x153855c;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xffffffffffffffa0;
  puStack_38 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemThrowBackward;
  ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ef9 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef9 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x30);
    lVar7 = lVar6;
    uStack_1a8 = 0x3d20028;
    pppuVar8 = &ppuStack_40;
    puStack_188 = &UNK_01538604;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xffffffffffffff70;
  puStack_68 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemPropane;
  ppuStack_70 = &ppuStack_40;
  if ((bRam0000000003eb4ef7 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef7 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x38);
    lVar7 = lVar6;
    uStack_1a8 = 0x3d20028;
    pppuVar8 = &ppuStack_70;
    puStack_188 = &UNK_015386ac;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xffffffffffffff40;
  puStack_98 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemTimeCheater;
  ppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eb4eee & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4eee = 1;
  }
  lVar7 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x3c);
    lVar6 = lVar7;
    uStack_1a8 = 0x3d20028;
    pppuVar8 = &ppuStack_a0;
    puStack_188 = &UNK_01538750;
    goto code_r0x0320d82c;
  }
  lVar6 = func_0x00f78af4();
  puStack_c8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerFinishLineReaction;
  ppuStack_d0 = &ppuStack_a0;
  if ((bRam0000000003eb4eef & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4eef = 1;
  }
  lVar6 = *(long *)(lVar6 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x74);
    puVar1 = (undefined8 *)&stack0xffffffffffffff40;
    uStack_1a8 = 0x3d20028;
    pppuVar8 = (undefined8 ***)ppuStack_d0;
    puStack_188 = puStack_c8;
    goto code_r0x0320d82c;
  }
  auVar9 = func_0x00f78af4();
  lVar6 = auVar9._8_8_;
  puStack_f8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetFinishLineIndexParam;
  ppuStack_100 = &ppuStack_d0;
  if ((bRam0000000003eb4ef0 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef0 = 1;
  }
  lVar7 = *(long *)(auVar9._0_8_ + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x70);
    if (pcRam0000000003ebe440 == (code *)0x0) {
      pcRam0000000003ebe440 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar9 = (*pcRam0000000003ebe440)(lVar7,uVar5,lVar6);
    return auVar9;
  }
  lVar3 = func_0x00f78af4();
  uStack_150 = 0x3eb4000;
  uStack_148 = 0x3d20028;
  puStack_128 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerAutoDriveReaction;
  lStack_140 = lVar7;
  lStack_138 = lVar6;
  ppuStack_130 = &ppuStack_100;
  if ((bRam0000000003eb4ef1 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef1 = 1;
  }
  lVar6 = *(long *)(lVar3 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x78);
    puVar1 = (undefined8 *)&stack0xfffffffffffffee0;
    param_1 = lStack_138;
    lVar7 = lStack_140;
    uStack_1a8 = uStack_148;
    unaff_x22 = uStack_150;
    pppuVar8 = (undefined8 ***)ppuStack_130;
    puStack_188 = puStack_128;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  uStack_180 = 0x3eb4000;
  uStack_178 = 0x3eb4000;
  lStack_170 = 0x3d20028;
  puStack_158 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerStartLineRandomAnimation;
  pppuVar8 = &ppuStack_160;
  lStack_168 = lVar6;
  ppuStack_160 = &ppuStack_130;
  if ((bRam0000000003eb4ef2 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef2 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = *(long *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x88);
  if (lVar7 == 0) {
code_r0x015389bc:
    func_0x00f78af4();
  }
  else {
    uVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(lVar7 + 0x18),0);
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
      lVar6 = *(long *)(param_1 + 0x18);
      if (lVar6 != 0) {
        uVar5 = *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20);
        puVar1 = &uStack_150;
        param_1 = lStack_168;
        lVar7 = lStack_170;
        uStack_1a8 = uStack_178;
        unaff_x22 = uStack_180;
        pppuVar8 = (undefined8 ***)ppuStack_160;
        puStack_188 = puStack_158;
        goto code_r0x0320d82c;
      }
      goto code_r0x015389bc;
    }
  }
  uVar4 = func_0x00f78b24();
  lVar6 = func_0x00f78ac0(uVar4,0);
  uStack_1b0 = 0x3eb4000;
  uStack_1a8 = 0x3eb4000;
  puStack_188 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIdleBreaker;
  if ((bRam0000000003eb4ef3 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef3 = 1;
  }
  lVar6 = *(long *)(lVar6 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 == 0) {
    lVar6 = func_0x00f78af4();
    if ((bRam0000000003eb4ef4 & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4ef4 = 1;
    }
    lVar6 = *(long *)(lVar6 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar6 != 0) {
      uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x84);
      if (pcRam0000000003ebe400 == (code *)0x0) {
        pcRam0000000003ebe400 =
             (code *)func_0x00f789d4("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)")
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar9 = (*pcRam0000000003ebe400)(extraout_s0,lVar6,uVar5);
      return auVar9;
    }
    auVar9._0_8_ = func_0x00f78af4();
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    auVar9._8_8_ = 0;
    return auVar9;
  }
  uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x7c);
  puVar1 = &uStack_180;
  unaff_x22 = uStack_1b0;
code_r0x0320d82c:
  *(undefined8 *)((long)puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar1 + -0x28) = uStack_1a8;
  *(long *)((long)puVar1 + -0x20) = lVar7;
  *(long *)((long)puVar1 + -0x18) = param_1;
  *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar8;
  *(undefined **)((long)puVar1 + -8) = puStack_188;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar9 = (*pcRam0000000003ebe460)(lVar6,uVar5);
  return auVar9;
}



// ============================================================
// RVA: 0x153858c | Atlas.Gameplay.Kart.BaseVisualBehaviour.PlayItemThrowBackward
// ============================================================

/* WARNING: Possible PIC construction at 0x01538600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015386a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153874c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015386ac) */
/* WARNING: Removing unreachable block (ram,0x015386b4) */
/* WARNING: Removing unreachable block (ram,0x01538604) */
/* WARNING: Removing unreachable block (ram,0x0153860c) */
/* WARNING: Removing unreachable block (ram,0x01538750) */
/* WARNING: Removing unreachable block (ram,0x01538758) */
/* WARNING: Removing unreachable block (ram,0x0320d43c) */
/* WARNING: Removing unreachable block (ram,0x0320d464) */
/* WARNING: Removing unreachable block (ram,0x0320d478) */

undefined1  [16] Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemThrowBackward(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x22;
  undefined8 ***pppuVar8;
  undefined4 extraout_s0;
  undefined1 auVar9 [16];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 **ppuStack_100;
  undefined *puStack_f8;
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  puVar1 = (undefined8 *)&stack0xffffffffffffffd0;
  if ((bRam0000000003eb4ef9 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef9 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x30);
    lVar7 = lVar6;
    uStack_178 = 0x3d20028;
    pppuVar8 = (undefined8 ***)&stack0xfffffffffffffff0;
    puStack_158 = &UNK_01538604;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xffffffffffffffa0;
  puStack_38 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemPropane;
  ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ef7 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef7 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x38);
    lVar7 = lVar6;
    uStack_178 = 0x3d20028;
    pppuVar8 = &ppuStack_40;
    puStack_158 = &UNK_015386ac;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xffffffffffffff70;
  puStack_68 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemTimeCheater;
  ppuStack_70 = &ppuStack_40;
  if ((bRam0000000003eb4eee & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4eee = 1;
  }
  lVar7 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x3c);
    lVar6 = lVar7;
    uStack_178 = 0x3d20028;
    pppuVar8 = &ppuStack_70;
    puStack_158 = &UNK_01538750;
    goto code_r0x0320d82c;
  }
  lVar6 = func_0x00f78af4();
  puStack_98 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerFinishLineReaction;
  ppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eb4eef & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4eef = 1;
  }
  lVar6 = *(long *)(lVar6 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x74);
    puVar1 = (undefined8 *)&stack0xffffffffffffff70;
    uStack_178 = 0x3d20028;
    pppuVar8 = (undefined8 ***)ppuStack_a0;
    puStack_158 = puStack_98;
    goto code_r0x0320d82c;
  }
  auVar9 = func_0x00f78af4();
  lVar6 = auVar9._8_8_;
  puStack_c8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetFinishLineIndexParam;
  ppuStack_d0 = &ppuStack_a0;
  if ((bRam0000000003eb4ef0 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef0 = 1;
  }
  lVar7 = *(long *)(auVar9._0_8_ + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x70);
    if (pcRam0000000003ebe440 == (code *)0x0) {
      pcRam0000000003ebe440 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar9 = (*pcRam0000000003ebe440)(lVar7,uVar5,lVar6);
    return auVar9;
  }
  lVar3 = func_0x00f78af4();
  uStack_120 = 0x3eb4000;
  uStack_118 = 0x3d20028;
  puStack_f8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerAutoDriveReaction;
  lStack_110 = lVar7;
  lStack_108 = lVar6;
  ppuStack_100 = &ppuStack_d0;
  if ((bRam0000000003eb4ef1 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef1 = 1;
  }
  lVar6 = *(long *)(lVar3 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x78);
    puVar1 = (undefined8 *)&stack0xffffffffffffff10;
    param_1 = lStack_108;
    lVar7 = lStack_110;
    uStack_178 = uStack_118;
    unaff_x22 = uStack_120;
    pppuVar8 = (undefined8 ***)ppuStack_100;
    puStack_158 = puStack_f8;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  uStack_150 = 0x3eb4000;
  uStack_148 = 0x3eb4000;
  lStack_140 = 0x3d20028;
  puStack_128 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerStartLineRandomAnimation;
  pppuVar8 = &ppuStack_130;
  lStack_138 = lVar6;
  ppuStack_130 = &ppuStack_100;
  if ((bRam0000000003eb4ef2 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef2 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = *(long *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x88);
  if (lVar7 == 0) {
code_r0x015389bc:
    func_0x00f78af4();
  }
  else {
    uVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(lVar7 + 0x18),0);
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
      lVar6 = *(long *)(param_1 + 0x18);
      if (lVar6 != 0) {
        uVar5 = *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20);
        puVar1 = &uStack_120;
        param_1 = lStack_138;
        lVar7 = lStack_140;
        uStack_178 = uStack_148;
        unaff_x22 = uStack_150;
        pppuVar8 = (undefined8 ***)ppuStack_130;
        puStack_158 = puStack_128;
        goto code_r0x0320d82c;
      }
      goto code_r0x015389bc;
    }
  }
  uVar4 = func_0x00f78b24();
  lVar6 = func_0x00f78ac0(uVar4,0);
  uStack_180 = 0x3eb4000;
  uStack_178 = 0x3eb4000;
  puStack_158 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIdleBreaker;
  if ((bRam0000000003eb4ef3 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef3 = 1;
  }
  lVar6 = *(long *)(lVar6 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 == 0) {
    lVar6 = func_0x00f78af4();
    if ((bRam0000000003eb4ef4 & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4ef4 = 1;
    }
    lVar6 = *(long *)(lVar6 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar6 != 0) {
      uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x84);
      if (pcRam0000000003ebe400 == (code *)0x0) {
        pcRam0000000003ebe400 =
             (code *)func_0x00f789d4("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)")
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar9 = (*pcRam0000000003ebe400)(extraout_s0,lVar6,uVar5);
      return auVar9;
    }
    auVar9._0_8_ = func_0x00f78af4();
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    auVar9._8_8_ = 0;
    return auVar9;
  }
  uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x7c);
  puVar1 = &uStack_150;
  unaff_x22 = uStack_180;
code_r0x0320d82c:
  *(undefined8 *)((long)puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar1 + -0x28) = uStack_178;
  *(long *)((long)puVar1 + -0x20) = lVar7;
  *(long *)((long)puVar1 + -0x18) = param_1;
  *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar8;
  *(undefined **)((long)puVar1 + -8) = puStack_158;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar9 = (*pcRam0000000003ebe460)(lVar6,uVar5);
  return auVar9;
}



// ============================================================
// RVA: 0x1538590 | Atlas.Gameplay.Kart.BaseVisualBehaviour.TriggerItemThrowBackward
// ============================================================

/* WARNING: Possible PIC construction at 0x01538600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015386a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153874c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015386ac) */
/* WARNING: Removing unreachable block (ram,0x015386b4) */
/* WARNING: Removing unreachable block (ram,0x01538604) */
/* WARNING: Removing unreachable block (ram,0x0153860c) */
/* WARNING: Removing unreachable block (ram,0x01538750) */
/* WARNING: Removing unreachable block (ram,0x01538758) */
/* WARNING: Removing unreachable block (ram,0x0320d43c) */
/* WARNING: Removing unreachable block (ram,0x0320d464) */
/* WARNING: Removing unreachable block (ram,0x0320d478) */

undefined1  [16] Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerItemThrowBackward(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x22;
  undefined8 ***pppuVar8;
  undefined4 extraout_s0;
  undefined1 auVar9 [16];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 **ppuStack_100;
  undefined *puStack_f8;
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  puVar1 = (undefined8 *)&stack0xffffffffffffffd0;
  if ((bRam0000000003eb4ef9 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef9 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x30);
    lVar7 = lVar6;
    uStack_178 = 0x3d20028;
    pppuVar8 = (undefined8 ***)&stack0xfffffffffffffff0;
    puStack_158 = (undefined *)0x1538604;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xffffffffffffffa0;
  puStack_38 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemPropane;
  ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ef7 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef7 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x38);
    lVar7 = lVar6;
    uStack_178 = 0x3d20028;
    pppuVar8 = &ppuStack_40;
    puStack_158 = &UNK_015386ac;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xffffffffffffff70;
  puStack_68 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemTimeCheater;
  ppuStack_70 = &ppuStack_40;
  if ((bRam0000000003eb4eee & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4eee = 1;
  }
  lVar7 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x3c);
    lVar6 = lVar7;
    uStack_178 = 0x3d20028;
    pppuVar8 = &ppuStack_70;
    puStack_158 = &UNK_01538750;
    goto code_r0x0320d82c;
  }
  lVar6 = func_0x00f78af4();
  puStack_98 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerFinishLineReaction;
  ppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eb4eef & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4eef = 1;
  }
  lVar6 = *(long *)(lVar6 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x74);
    puVar1 = (undefined8 *)&stack0xffffffffffffff70;
    uStack_178 = 0x3d20028;
    pppuVar8 = (undefined8 ***)ppuStack_a0;
    puStack_158 = puStack_98;
    goto code_r0x0320d82c;
  }
  auVar9 = func_0x00f78af4();
  lVar6 = auVar9._8_8_;
  puStack_c8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetFinishLineIndexParam;
  ppuStack_d0 = &ppuStack_a0;
  if ((bRam0000000003eb4ef0 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef0 = 1;
  }
  lVar7 = *(long *)(auVar9._0_8_ + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x70);
    if (pcRam0000000003ebe440 == (code *)0x0) {
      pcRam0000000003ebe440 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar9 = (*pcRam0000000003ebe440)(lVar7,uVar5,lVar6);
    return auVar9;
  }
  lVar3 = func_0x00f78af4();
  uStack_120 = 0x3eb4000;
  uStack_118 = 0x3d20028;
  puStack_f8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerAutoDriveReaction;
  lStack_110 = lVar7;
  lStack_108 = lVar6;
  ppuStack_100 = &ppuStack_d0;
  if ((bRam0000000003eb4ef1 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef1 = 1;
  }
  lVar6 = *(long *)(lVar3 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x78);
    puVar1 = (undefined8 *)&stack0xffffffffffffff10;
    param_1 = lStack_108;
    lVar7 = lStack_110;
    uStack_178 = uStack_118;
    unaff_x22 = uStack_120;
    pppuVar8 = (undefined8 ***)ppuStack_100;
    puStack_158 = puStack_f8;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  uStack_150 = 0x3eb4000;
  uStack_148 = 0x3eb4000;
  lStack_140 = 0x3d20028;
  puStack_128 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerStartLineRandomAnimation;
  pppuVar8 = &ppuStack_130;
  lStack_138 = lVar6;
  ppuStack_130 = &ppuStack_100;
  if ((bRam0000000003eb4ef2 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef2 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = *(long *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x88);
  if (lVar7 == 0) {
code_r0x015389bc:
    func_0x00f78af4();
  }
  else {
    uVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(lVar7 + 0x18),0);
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
      lVar6 = *(long *)(param_1 + 0x18);
      if (lVar6 != 0) {
        uVar5 = *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20);
        puVar1 = &uStack_120;
        param_1 = lStack_138;
        lVar7 = lStack_140;
        uStack_178 = uStack_148;
        unaff_x22 = uStack_150;
        pppuVar8 = (undefined8 ***)ppuStack_130;
        puStack_158 = puStack_128;
        goto code_r0x0320d82c;
      }
      goto code_r0x015389bc;
    }
  }
  uVar4 = func_0x00f78b24();
  lVar6 = func_0x00f78ac0(uVar4,0);
  uStack_180 = 0x3eb4000;
  uStack_178 = 0x3eb4000;
  puStack_158 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIdleBreaker;
  if ((bRam0000000003eb4ef3 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef3 = 1;
  }
  lVar6 = *(long *)(lVar6 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 == 0) {
    lVar6 = func_0x00f78af4();
    if ((bRam0000000003eb4ef4 & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4ef4 = 1;
    }
    lVar6 = *(long *)(lVar6 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar6 != 0) {
      uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x84);
      if (pcRam0000000003ebe400 == (code *)0x0) {
        pcRam0000000003ebe400 =
             (code *)func_0x00f789d4("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)")
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar9 = (*pcRam0000000003ebe400)(extraout_s0,lVar6,uVar5);
      return auVar9;
    }
    auVar9._0_8_ = func_0x00f78af4();
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    auVar9._8_8_ = 0;
    return auVar9;
  }
  uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x7c);
  puVar1 = &uStack_150;
  unaff_x22 = uStack_180;
code_r0x0320d82c:
  *(undefined8 *)((long)puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar1 + -0x28) = uStack_178;
  *(long *)((long)puVar1 + -0x20) = lVar7;
  *(long *)((long)puVar1 + -0x18) = param_1;
  *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar8;
  *(undefined **)((long)puVar1 + -8) = puStack_158;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar9 = (*pcRam0000000003ebe460)(lVar6,uVar5);
  return auVar9;
}



// ============================================================
// RVA: 0x1538634 | Atlas.Gameplay.Kart.BaseVisualBehaviour.PlayItemPropane
// ============================================================

/* WARNING: Possible PIC construction at 0x015386a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153874c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015386ac) */
/* WARNING: Removing unreachable block (ram,0x015386b4) */
/* WARNING: Removing unreachable block (ram,0x01538750) */
/* WARNING: Removing unreachable block (ram,0x01538758) */
/* WARNING: Removing unreachable block (ram,0x0320d43c) */
/* WARNING: Removing unreachable block (ram,0x0320d464) */
/* WARNING: Removing unreachable block (ram,0x0320d478) */

undefined1  [16] Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemPropane(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x22;
  undefined8 ***pppuVar8;
  undefined4 extraout_s0;
  undefined1 auVar9 [16];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 **ppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  puVar1 = (undefined8 *)&stack0xffffffffffffffd0;
  if ((bRam0000000003eb4ef7 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef7 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x38);
    lVar7 = lVar6;
    uStack_148 = 0x3d20028;
    pppuVar8 = (undefined8 ***)&stack0xfffffffffffffff0;
    puStack_128 = &UNK_015386ac;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xffffffffffffffa0;
  puStack_38 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemTimeCheater;
  ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4eee & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4eee = 1;
  }
  lVar7 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x3c);
    lVar6 = lVar7;
    uStack_148 = 0x3d20028;
    pppuVar8 = &ppuStack_40;
    puStack_128 = &UNK_01538750;
    goto code_r0x0320d82c;
  }
  lVar6 = func_0x00f78af4();
  puStack_68 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerFinishLineReaction;
  ppuStack_70 = &ppuStack_40;
  if ((bRam0000000003eb4eef & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4eef = 1;
  }
  lVar6 = *(long *)(lVar6 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x74);
    puVar1 = (undefined8 *)&stack0xffffffffffffffa0;
    uStack_148 = 0x3d20028;
    pppuVar8 = (undefined8 ***)ppuStack_70;
    puStack_128 = puStack_68;
    goto code_r0x0320d82c;
  }
  auVar9 = func_0x00f78af4();
  lVar6 = auVar9._8_8_;
  puStack_98 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetFinishLineIndexParam;
  ppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eb4ef0 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef0 = 1;
  }
  lVar7 = *(long *)(auVar9._0_8_ + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x70);
    if (pcRam0000000003ebe440 == (code *)0x0) {
      pcRam0000000003ebe440 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar9 = (*pcRam0000000003ebe440)(lVar7,uVar5,lVar6);
    return auVar9;
  }
  lVar3 = func_0x00f78af4();
  uStack_f0 = 0x3eb4000;
  uStack_e8 = 0x3d20028;
  puStack_c8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerAutoDriveReaction;
  lStack_e0 = lVar7;
  lStack_d8 = lVar6;
  ppuStack_d0 = &ppuStack_a0;
  if ((bRam0000000003eb4ef1 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef1 = 1;
  }
  lVar6 = *(long *)(lVar3 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x78);
    puVar1 = (undefined8 *)&stack0xffffffffffffff40;
    param_1 = lStack_d8;
    lVar7 = lStack_e0;
    uStack_148 = uStack_e8;
    unaff_x22 = uStack_f0;
    pppuVar8 = (undefined8 ***)ppuStack_d0;
    puStack_128 = puStack_c8;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  uStack_120 = 0x3eb4000;
  uStack_118 = 0x3eb4000;
  lStack_110 = 0x3d20028;
  puStack_f8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerStartLineRandomAnimation;
  pppuVar8 = &ppuStack_100;
  lStack_108 = lVar6;
  ppuStack_100 = &ppuStack_d0;
  if ((bRam0000000003eb4ef2 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef2 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = *(long *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x88);
  if (lVar7 == 0) {
code_r0x015389bc:
    func_0x00f78af4();
  }
  else {
    uVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(lVar7 + 0x18),0);
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
      lVar6 = *(long *)(param_1 + 0x18);
      if (lVar6 != 0) {
        uVar5 = *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20);
        puVar1 = &uStack_f0;
        param_1 = lStack_108;
        lVar7 = lStack_110;
        uStack_148 = uStack_118;
        unaff_x22 = uStack_120;
        pppuVar8 = (undefined8 ***)ppuStack_100;
        puStack_128 = puStack_f8;
        goto code_r0x0320d82c;
      }
      goto code_r0x015389bc;
    }
  }
  uVar4 = func_0x00f78b24();
  lVar6 = func_0x00f78ac0(uVar4,0);
  uStack_150 = 0x3eb4000;
  uStack_148 = 0x3eb4000;
  puStack_128 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIdleBreaker;
  if ((bRam0000000003eb4ef3 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef3 = 1;
  }
  lVar6 = *(long *)(lVar6 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 == 0) {
    lVar6 = func_0x00f78af4();
    if ((bRam0000000003eb4ef4 & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4ef4 = 1;
    }
    lVar6 = *(long *)(lVar6 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar6 != 0) {
      uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x84);
      if (pcRam0000000003ebe400 == (code *)0x0) {
        pcRam0000000003ebe400 =
             (code *)func_0x00f789d4("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)")
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar9 = (*pcRam0000000003ebe400)(extraout_s0,lVar6,uVar5);
      return auVar9;
    }
    auVar9._0_8_ = func_0x00f78af4();
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    auVar9._8_8_ = 0;
    return auVar9;
  }
  uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x7c);
  puVar1 = &uStack_120;
  unaff_x22 = uStack_150;
code_r0x0320d82c:
  *(undefined8 *)((long)puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar1 + -0x28) = uStack_148;
  *(long *)((long)puVar1 + -0x20) = lVar7;
  *(long *)((long)puVar1 + -0x18) = param_1;
  *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar8;
  *(undefined **)((long)puVar1 + -8) = puStack_128;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar9 = (*pcRam0000000003ebe460)(lVar6,uVar5);
  return auVar9;
}



// ============================================================
// RVA: 0x1538638 | Atlas.Gameplay.Kart.BaseVisualBehaviour.TriggerItemPropane
// ============================================================

/* WARNING: Possible PIC construction at 0x015386a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153874c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015386ac) */
/* WARNING: Removing unreachable block (ram,0x015386b4) */
/* WARNING: Removing unreachable block (ram,0x01538750) */
/* WARNING: Removing unreachable block (ram,0x01538758) */
/* WARNING: Removing unreachable block (ram,0x0320d43c) */
/* WARNING: Removing unreachable block (ram,0x0320d464) */
/* WARNING: Removing unreachable block (ram,0x0320d478) */

undefined1  [16] Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerItemPropane(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x22;
  undefined8 ***pppuVar8;
  undefined4 extraout_s0;
  undefined1 auVar9 [16];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 **ppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  puVar1 = (undefined8 *)&stack0xffffffffffffffd0;
  if ((bRam0000000003eb4ef7 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef7 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x38);
    lVar7 = lVar6;
    uStack_148 = 0x3d20028;
    pppuVar8 = (undefined8 ***)&stack0xfffffffffffffff0;
    puStack_128 = (undefined *)0x15386ac;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  puVar1 = (undefined8 *)&stack0xffffffffffffffa0;
  puStack_38 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemTimeCheater;
  ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4eee & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4eee = 1;
  }
  lVar7 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x3c);
    lVar6 = lVar7;
    uStack_148 = 0x3d20028;
    pppuVar8 = &ppuStack_40;
    puStack_128 = &UNK_01538750;
    goto code_r0x0320d82c;
  }
  lVar6 = func_0x00f78af4();
  puStack_68 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerFinishLineReaction;
  ppuStack_70 = &ppuStack_40;
  if ((bRam0000000003eb4eef & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4eef = 1;
  }
  lVar6 = *(long *)(lVar6 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x74);
    puVar1 = (undefined8 *)&stack0xffffffffffffffa0;
    uStack_148 = 0x3d20028;
    pppuVar8 = (undefined8 ***)ppuStack_70;
    puStack_128 = puStack_68;
    goto code_r0x0320d82c;
  }
  auVar9 = func_0x00f78af4();
  lVar6 = auVar9._8_8_;
  puStack_98 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetFinishLineIndexParam;
  ppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eb4ef0 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef0 = 1;
  }
  lVar7 = *(long *)(auVar9._0_8_ + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x70);
    if (pcRam0000000003ebe440 == (code *)0x0) {
      pcRam0000000003ebe440 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar9 = (*pcRam0000000003ebe440)(lVar7,uVar5,lVar6);
    return auVar9;
  }
  lVar3 = func_0x00f78af4();
  uStack_f0 = 0x3eb4000;
  uStack_e8 = 0x3d20028;
  puStack_c8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerAutoDriveReaction;
  lStack_e0 = lVar7;
  lStack_d8 = lVar6;
  ppuStack_d0 = &ppuStack_a0;
  if ((bRam0000000003eb4ef1 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef1 = 1;
  }
  lVar6 = *(long *)(lVar3 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x78);
    puVar1 = (undefined8 *)&stack0xffffffffffffff40;
    param_1 = lStack_d8;
    lVar7 = lStack_e0;
    uStack_148 = uStack_e8;
    unaff_x22 = uStack_f0;
    pppuVar8 = (undefined8 ***)ppuStack_d0;
    puStack_128 = puStack_c8;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  uStack_120 = 0x3eb4000;
  uStack_118 = 0x3eb4000;
  lStack_110 = 0x3d20028;
  puStack_f8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerStartLineRandomAnimation;
  pppuVar8 = &ppuStack_100;
  lStack_108 = lVar6;
  ppuStack_100 = &ppuStack_d0;
  if ((bRam0000000003eb4ef2 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef2 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = *(long *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x88);
  if (lVar7 == 0) {
code_r0x015389bc:
    func_0x00f78af4();
  }
  else {
    uVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(lVar7 + 0x18),0);
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
      lVar6 = *(long *)(param_1 + 0x18);
      if (lVar6 != 0) {
        uVar5 = *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20);
        puVar1 = &uStack_f0;
        param_1 = lStack_108;
        lVar7 = lStack_110;
        uStack_148 = uStack_118;
        unaff_x22 = uStack_120;
        pppuVar8 = (undefined8 ***)ppuStack_100;
        puStack_128 = puStack_f8;
        goto code_r0x0320d82c;
      }
      goto code_r0x015389bc;
    }
  }
  uVar4 = func_0x00f78b24();
  lVar6 = func_0x00f78ac0(uVar4,0);
  uStack_150 = 0x3eb4000;
  uStack_148 = 0x3eb4000;
  puStack_128 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIdleBreaker;
  if ((bRam0000000003eb4ef3 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef3 = 1;
  }
  lVar6 = *(long *)(lVar6 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 == 0) {
    lVar6 = func_0x00f78af4();
    if ((bRam0000000003eb4ef4 & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4ef4 = 1;
    }
    lVar6 = *(long *)(lVar6 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar6 != 0) {
      uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x84);
      if (pcRam0000000003ebe400 == (code *)0x0) {
        pcRam0000000003ebe400 =
             (code *)func_0x00f789d4("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)")
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar9 = (*pcRam0000000003ebe400)(extraout_s0,lVar6,uVar5);
      return auVar9;
    }
    auVar9._0_8_ = func_0x00f78af4();
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    auVar9._8_8_ = 0;
    return auVar9;
  }
  uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x7c);
  puVar1 = &uStack_120;
  unaff_x22 = uStack_150;
code_r0x0320d82c:
  *(undefined8 *)((long)puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar1 + -0x28) = uStack_148;
  *(long *)((long)puVar1 + -0x20) = lVar7;
  *(long *)((long)puVar1 + -0x18) = param_1;
  *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar8;
  *(undefined **)((long)puVar1 + -8) = puStack_128;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar9 = (*pcRam0000000003ebe460)(lVar6,uVar5);
  return auVar9;
}



// ============================================================
// RVA: 0x15386dc | Atlas.Gameplay.Kart.BaseVisualBehaviour.PlayItemTimeCheater
// ============================================================

/* WARNING: Possible PIC construction at 0x0153874c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01538750) */
/* WARNING: Removing unreachable block (ram,0x01538758) */
/* WARNING: Removing unreachable block (ram,0x0320d43c) */
/* WARNING: Removing unreachable block (ram,0x0320d464) */
/* WARNING: Removing unreachable block (ram,0x0320d478) */

undefined1  [16] Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemTimeCheater(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 unaff_x22;
  undefined8 ***pppuVar8;
  undefined4 extraout_s0;
  undefined1 auVar9 [16];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  puVar1 = (undefined8 *)&stack0xffffffffffffffd0;
  if ((bRam0000000003eb4eee & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4eee = 1;
  }
  lVar7 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 != 0) {
    uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x3c);
    lVar3 = lVar7;
    uStack_118 = 0x3d20028;
    pppuVar8 = (undefined8 ***)&stack0xfffffffffffffff0;
    puStack_f8 = (undefined *)0x1538750;
    goto code_r0x0320d82c;
  }
  lVar3 = func_0x00f78af4();
  puStack_38 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerFinishLineReaction;
  ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4eef & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4eef = 1;
  }
  lVar3 = *(long *)(lVar3 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar3 != 0) {
    uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x74);
    puVar1 = (undefined8 *)&stack0xffffffffffffffd0;
    uStack_118 = 0x3d20028;
    pppuVar8 = (undefined8 ***)ppuStack_40;
    puStack_f8 = puStack_38;
    goto code_r0x0320d82c;
  }
  auVar9 = func_0x00f78af4();
  lVar7 = auVar9._8_8_;
  puStack_68 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetFinishLineIndexParam;
  ppuStack_70 = &ppuStack_40;
  if ((bRam0000000003eb4ef0 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef0 = 1;
  }
  lVar3 = *(long *)(auVar9._0_8_ + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar3 != 0) {
    uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x70);
    if (pcRam0000000003ebe440 == (code *)0x0) {
      pcRam0000000003ebe440 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar9 = (*pcRam0000000003ebe440)(lVar3,uVar6,lVar7);
    return auVar9;
  }
  lVar4 = func_0x00f78af4();
  uStack_c0 = 0x3eb4000;
  uStack_b8 = 0x3d20028;
  puStack_98 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerAutoDriveReaction;
  lStack_b0 = lVar3;
  lStack_a8 = lVar7;
  ppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eb4ef1 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef1 = 1;
  }
  lVar3 = *(long *)(lVar4 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar3 != 0) {
    uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x78);
    puVar1 = (undefined8 *)&stack0xffffffffffffff70;
    param_1 = lStack_a8;
    lVar7 = lStack_b0;
    uStack_118 = uStack_b8;
    unaff_x22 = uStack_c0;
    pppuVar8 = (undefined8 ***)ppuStack_a0;
    puStack_f8 = puStack_98;
    goto code_r0x0320d82c;
  }
  param_1 = func_0x00f78af4();
  uStack_f0 = 0x3eb4000;
  uStack_e8 = 0x3eb4000;
  lStack_e0 = 0x3d20028;
  puStack_c8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerStartLineRandomAnimation;
  pppuVar8 = &ppuStack_d0;
  lStack_d8 = lVar3;
  ppuStack_d0 = &ppuStack_a0;
  if ((bRam0000000003eb4ef2 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef2 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = *(long *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x88);
  if (lVar7 == 0) {
code_r0x015389bc:
    func_0x00f78af4();
  }
  else {
    uVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(lVar7 + 0x18),0);
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 != 0) {
        uVar6 = *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20);
        puVar1 = &uStack_c0;
        param_1 = lStack_d8;
        lVar7 = lStack_e0;
        uStack_118 = uStack_e8;
        unaff_x22 = uStack_f0;
        pppuVar8 = (undefined8 ***)ppuStack_d0;
        puStack_f8 = puStack_c8;
        goto code_r0x0320d82c;
      }
      goto code_r0x015389bc;
    }
  }
  uVar5 = func_0x00f78b24();
  lVar3 = func_0x00f78ac0(uVar5,0);
  uStack_120 = 0x3eb4000;
  uStack_118 = 0x3eb4000;
  puStack_f8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIdleBreaker;
  if ((bRam0000000003eb4ef3 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef3 = 1;
  }
  lVar3 = *(long *)(lVar3 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar3 == 0) {
    lVar7 = func_0x00f78af4();
    if ((bRam0000000003eb4ef4 & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4ef4 = 1;
    }
    lVar7 = *(long *)(lVar7 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar7 != 0) {
      uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x84);
      if (pcRam0000000003ebe400 == (code *)0x0) {
        pcRam0000000003ebe400 =
             (code *)func_0x00f789d4("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)")
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar9 = (*pcRam0000000003ebe400)(extraout_s0,lVar7,uVar6);
      return auVar9;
    }
    auVar9._0_8_ = func_0x00f78af4();
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    auVar9._8_8_ = 0;
    return auVar9;
  }
  uVar6 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x7c);
  puVar1 = &uStack_f0;
  unaff_x22 = uStack_120;
code_r0x0320d82c:
  *(undefined8 *)((long)puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar1 + -0x28) = uStack_118;
  *(long *)((long)puVar1 + -0x20) = lVar7;
  *(long *)((long)puVar1 + -0x18) = param_1;
  *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar8;
  *(undefined **)((long)puVar1 + -8) = puStack_f8;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar9 = (*pcRam0000000003ebe460)(lVar3,uVar6);
  return auVar9;
}



// ============================================================
// RVA: 0x1538780 | Atlas.Gameplay.Kart.BaseVisualBehaviour.TriggerFinishLineReaction
// ============================================================

undefined1  [16] Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerFinishLineReaction(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long unaff_x19;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 ***unaff_x29;
  undefined *unaff_x30;
  undefined4 extraout_s0;
  undefined1 auVar7 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  undefined8 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4eef & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4eef = 1;
  }
  lVar5 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar5 != 0) {
    uVar4 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x74);
    goto UnityEngine_Animator__SetTrigger;
  }
  auVar7 = func_0x00f78af4();
  lVar5 = auVar7._8_8_;
  puStack_38 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__SetFinishLineIndexParam;
  puStack_40 = (undefined8 *)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ef0 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef0 = 1;
  }
  lVar6 = *(long *)(auVar7._0_8_ + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar4 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x70);
    if (pcRam0000000003ebe440 == (code *)0x0) {
      pcRam0000000003ebe440 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar7 = (*pcRam0000000003ebe440)(lVar6,uVar4,lVar5);
    return auVar7;
  }
  lVar2 = func_0x00f78af4();
  uStack_90 = 0x3eb4000;
  uStack_88 = 0x3d20028;
  puStack_68 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerAutoDriveReaction;
  lStack_80 = lVar6;
  lStack_78 = lVar5;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb4ef1 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef1 = 1;
  }
  lVar5 = *(long *)(lVar2 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar5 != 0) {
    uVar4 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x78);
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
    unaff_x19 = lStack_78;
    unaff_x20 = lStack_80;
    unaff_x21 = uStack_88;
    unaff_x22 = uStack_90;
    unaff_x29 = (undefined8 ***)ppuStack_70;
    unaff_x30 = puStack_68;
    goto UnityEngine_Animator__SetTrigger;
  }
  unaff_x19 = func_0x00f78af4();
  uStack_c0 = 0x3eb4000;
  uStack_b8 = 0x3eb4000;
  lStack_b0 = 0x3d20028;
  puStack_98 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerStartLineRandomAnimation;
  unaff_x29 = &ppuStack_a0;
  lStack_a8 = lVar5;
  ppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eb4ef2 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef2 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  unaff_x20 = *(long *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x88);
  if (unaff_x20 == 0) {
code_r0x015389bc:
    func_0x00f78af4();
  }
  else {
    uVar1 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(unaff_x20 + 0x18),0);
    if (uVar1 < *(uint *)(unaff_x20 + 0x18)) {
      lVar5 = *(long *)(unaff_x19 + 0x18);
      if (lVar5 != 0) {
        uVar4 = *(undefined4 *)(unaff_x20 + (long)(int)uVar1 * 4 + 0x20);
        register0x00000008 = (BADSPACEBASE *)&uStack_90;
        unaff_x19 = lStack_a8;
        unaff_x20 = lStack_b0;
        unaff_x21 = uStack_b8;
        unaff_x22 = uStack_c0;
        unaff_x29 = (undefined8 ***)ppuStack_a0;
        unaff_x30 = puStack_98;
        goto UnityEngine_Animator__SetTrigger;
      }
      goto code_r0x015389bc;
    }
  }
  uVar3 = func_0x00f78b24();
  lVar5 = func_0x00f78ac0(uVar3,0);
  uStack_f0 = 0x3eb4000;
  uStack_e8 = 0x3eb4000;
  puStack_c8 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIdleBreaker;
  if ((bRam0000000003eb4ef3 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef3 = 1;
  }
  lVar5 = *(long *)(lVar5 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar5 == 0) {
    lVar5 = func_0x00f78af4();
    if ((bRam0000000003eb4ef4 & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4ef4 = 1;
    }
    lVar5 = *(long *)(lVar5 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar5 != 0) {
      uVar4 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x84);
      if (pcRam0000000003ebe400 == (code *)0x0) {
        pcRam0000000003ebe400 =
             (code *)func_0x00f789d4("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)")
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar7 = (*pcRam0000000003ebe400)(extraout_s0,lVar5,uVar4);
      return auVar7;
    }
    auVar7._0_8_ = func_0x00f78af4();
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    auVar7._8_8_ = 0;
    return auVar7;
  }
  uVar4 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x7c);
  register0x00000008 = (BADSPACEBASE *)&uStack_c0;
  unaff_x21 = uStack_e8;
  unaff_x22 = uStack_f0;
  unaff_x30 = puStack_c8;
UnityEngine_Animator__SetTrigger:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 ****)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar7 = (*pcRam0000000003ebe460)(lVar5,uVar4);
  return auVar7;
}



// ============================================================
// RVA: 0x1538804 | Atlas.Gameplay.Kart.BaseVisualBehaviour.SetFinishLineIndexParam
// ============================================================

undefined1  [16]
Atlas_Gameplay_Kart_BaseVisualBehaviour__SetFinishLineIndexParam(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 ***pppuVar8;
  undefined4 extraout_s0;
  undefined1 auVar9 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4ef0 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef0 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x70);
    if (pcRam0000000003ebe440 == (code *)0x0) {
      pcRam0000000003ebe440 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar9 = (*pcRam0000000003ebe440)(lVar6,uVar5,param_2);
    return auVar9;
  }
  lVar3 = func_0x00f78af4();
  uStack_60 = 0x3eb4000;
  uStack_58 = 0x3d20028;
  puStack_38 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerAutoDriveReaction;
  lStack_50 = lVar6;
  lStack_48 = param_2;
  ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ef1 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef1 = 1;
  }
  lVar6 = *(long *)(lVar3 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 != 0) {
    uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x78);
    puVar1 = (undefined8 *)&stack0xffffffffffffffd0;
    lVar3 = lStack_48;
    lVar7 = lStack_50;
    uStack_b8 = uStack_58;
    uStack_c0 = uStack_60;
    pppuVar8 = (undefined8 ***)ppuStack_40;
    puStack_98 = puStack_38;
    goto UnityEngine_Animator__SetTrigger;
  }
  lVar3 = func_0x00f78af4();
  uStack_90 = 0x3eb4000;
  uStack_88 = 0x3eb4000;
  lStack_80 = 0x3d20028;
  puStack_68 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerStartLineRandomAnimation;
  pppuVar8 = &ppuStack_70;
  lStack_78 = lVar6;
  ppuStack_70 = &ppuStack_40;
  if ((bRam0000000003eb4ef2 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef2 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = *(long *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x88);
  if (lVar7 == 0) {
code_r0x015389bc:
    func_0x00f78af4();
  }
  else {
    uVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(lVar7 + 0x18),0);
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
      lVar6 = *(long *)(lVar3 + 0x18);
      if (lVar6 != 0) {
        uVar5 = *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20);
        puVar1 = &uStack_60;
        lVar3 = lStack_78;
        lVar7 = lStack_80;
        uStack_b8 = uStack_88;
        uStack_c0 = uStack_90;
        pppuVar8 = (undefined8 ***)ppuStack_70;
        puStack_98 = puStack_68;
        goto UnityEngine_Animator__SetTrigger;
      }
      goto code_r0x015389bc;
    }
  }
  uVar4 = func_0x00f78b24();
  lVar6 = func_0x00f78ac0(uVar4,0);
  uStack_c0 = 0x3eb4000;
  uStack_b8 = 0x3eb4000;
  puStack_98 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIdleBreaker;
  if ((bRam0000000003eb4ef3 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef3 = 1;
  }
  lVar6 = *(long *)(lVar6 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar6 == 0) {
    lVar6 = func_0x00f78af4();
    if ((bRam0000000003eb4ef4 & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4ef4 = 1;
    }
    lVar6 = *(long *)(lVar6 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar6 != 0) {
      uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x84);
      if (pcRam0000000003ebe400 == (code *)0x0) {
        pcRam0000000003ebe400 =
             (code *)func_0x00f789d4("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)")
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar9 = (*pcRam0000000003ebe400)(extraout_s0,lVar6,uVar5);
      return auVar9;
    }
    auVar9._0_8_ = func_0x00f78af4();
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    auVar9._8_8_ = 0;
    return auVar9;
  }
  uVar5 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x7c);
  puVar1 = &uStack_90;
UnityEngine_Animator__SetTrigger:
  *(undefined8 *)((long)puVar1 + -0x30) = uStack_c0;
  *(undefined8 *)((long)puVar1 + -0x28) = uStack_b8;
  *(long *)((long)puVar1 + -0x20) = lVar7;
  *(long *)((long)puVar1 + -0x18) = lVar3;
  *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar8;
  *(undefined **)((long)puVar1 + -8) = puStack_98;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar9 = (*pcRam0000000003ebe460)(lVar6,uVar5);
  return auVar9;
}



// ============================================================
// RVA: 0x1538890 | Atlas.Gameplay.Kart.BaseVisualBehaviour.TriggerAutoDriveReaction
// ============================================================

undefined1  [16] Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerAutoDriveReaction(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long unaff_x19;
  long lVar4;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 ***unaff_x29;
  undefined *unaff_x30;
  undefined4 extraout_s0;
  undefined1 auVar5 [16];
  undefined *puStack_68;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4ef1 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef1 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar4 != 0) {
    uVar3 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x78);
    goto UnityEngine_Animator__SetTrigger;
  }
  unaff_x19 = func_0x00f78af4();
  puStack_38 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerStartLineRandomAnimation;
  unaff_x29 = &ppuStack_40;
  ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ef2 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef2 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  unaff_x20 = *(long *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x88);
  if (unaff_x20 == 0) {
code_r0x015389bc:
    func_0x00f78af4();
  }
  else {
    uVar1 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(unaff_x20 + 0x18),0);
    if (uVar1 < *(uint *)(unaff_x20 + 0x18)) {
      lVar4 = *(long *)(unaff_x19 + 0x18);
      if (lVar4 != 0) {
        uVar3 = *(undefined4 *)(unaff_x20 + (long)(int)uVar1 * 4 + 0x20);
        unaff_x20 = 0x3d20028;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
        unaff_x21 = 0x3eb4000;
        unaff_x19 = 0;
        unaff_x29 = (undefined8 ***)ppuStack_40;
        unaff_x30 = puStack_38;
        goto UnityEngine_Animator__SetTrigger;
      }
      goto code_r0x015389bc;
    }
  }
  uVar2 = func_0x00f78b24();
  lVar4 = func_0x00f78ac0(uVar2,0);
  puStack_68 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIdleBreaker;
  if ((bRam0000000003eb4ef3 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef3 = 1;
  }
  lVar4 = *(long *)(lVar4 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar4 == 0) {
    lVar4 = func_0x00f78af4();
    if ((bRam0000000003eb4ef4 & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4ef4 = 1;
    }
    lVar4 = *(long *)(lVar4 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar4 != 0) {
      uVar3 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x84);
      if (pcRam0000000003ebe400 == (code *)0x0) {
        pcRam0000000003ebe400 =
             (code *)func_0x00f789d4("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)")
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar5 = (*pcRam0000000003ebe400)(extraout_s0,lVar4,uVar3);
      return auVar5;
    }
    auVar5._0_8_ = func_0x00f78af4();
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    auVar5._8_8_ = 0;
    return auVar5;
  }
  uVar3 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x7c);
  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
  unaff_x21 = 0x3eb4000;
  unaff_x30 = puStack_68;
UnityEngine_Animator__SetTrigger:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 ****)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar5 = (*pcRam0000000003ebe460)(lVar4,uVar3);
  return auVar5;
}



// ============================================================
// RVA: 0x1538914 | Atlas.Gameplay.Kart.BaseVisualBehaviour.TriggerStartLineRandomAnimation
// ============================================================

undefined1  [16]
Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerStartLineRandomAnimation(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar6;
  undefined *unaff_x30;
  undefined4 extraout_s0;
  undefined1 auVar7 [16];
  undefined *puStack_38;
  
  puVar6 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ef2 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef2 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar5 = *(long *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x88);
  if (lVar5 == 0) {
LAB_015389bc:
    func_0x00f78af4();
  }
  else {
    uVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(lVar5 + 0x18),0);
    if (uVar2 < *(uint *)(lVar5 + 0x18)) {
      lVar4 = *(long *)(param_1 + 0x18);
      if (lVar4 != 0) {
        uVar1 = *(undefined4 *)(lVar5 + (long)(int)uVar2 * 4 + 0x20);
        param_1 = unaff_x19;
        lVar5 = unaff_x20;
        puVar6 = unaff_x29;
        goto UnityEngine_Animator__SetTrigger;
      }
      goto LAB_015389bc;
    }
  }
  uVar3 = func_0x00f78b24();
  lVar4 = func_0x00f78ac0(uVar3,0);
  puStack_38 = &Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIdleBreaker;
  if ((bRam0000000003eb4ef3 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef3 = 1;
  }
  lVar4 = *(long *)(lVar4 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar4 == 0) {
    lVar5 = func_0x00f78af4();
    if ((bRam0000000003eb4ef4 & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4ef4 = 1;
    }
    lVar5 = *(long *)(lVar5 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar5 != 0) {
      uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x84);
      if (pcRam0000000003ebe400 == (code *)0x0) {
        pcRam0000000003ebe400 =
             (code *)func_0x00f789d4("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)")
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar7 = (*pcRam0000000003ebe400)(extraout_s0,lVar5,uVar1);
      return auVar7;
    }
    auVar7._0_8_ = func_0x00f78af4();
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    auVar7._8_8_ = 0;
    return auVar7;
  }
  uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x7c);
  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
  unaff_x21 = 0x3eb4000;
  unaff_x30 = puStack_38;
UnityEngine_Animator__SetTrigger:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = lVar5;
  *(long *)((long)register0x00000008 + -0x18) = param_1;
  *(undefined1 **)((long)register0x00000008 + -0x10) = puVar6;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar7 = (*pcRam0000000003ebe460)(lVar4,uVar1);
  return auVar7;
}



// ============================================================
// RVA: 0x15389cc | Atlas.Gameplay.Kart.BaseVisualBehaviour.TriggerIdleBreaker
// ============================================================

undefined1  [16] Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIdleBreaker(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 extraout_s0;
  undefined1 auVar3 [16];
  
  if ((bRam0000000003eb4ef3 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef3 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x7c);
    if (pcRam0000000003ebe460 == (code *)0x0) {
      pcRam0000000003ebe460 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*pcRam0000000003ebe460)(lVar2,uVar1);
    return auVar3;
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4ef4 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef4 = 1;
  }
  lVar2 = *(long *)(lVar2 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x84);
    if (pcRam0000000003ebe400 == (code *)0x0) {
      pcRam0000000003ebe400 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*pcRam0000000003ebe400)(extraout_s0,lVar2,uVar1);
    return auVar3;
  }
  auVar3._0_8_ = func_0x00f78af4();
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
// RVA: 0x1538a50 | Atlas.Gameplay.Kart.BaseVisualBehaviour.SetBoostIntensity
// ============================================================

undefined1  [16]
Atlas_Gameplay_Kart_BaseVisualBehaviour__SetBoostIntensity(undefined4 param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if ((bRam0000000003eb4ef4 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb4ef4 = 1;
  }
  lVar2 = *(long *)(param_2 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x84);
    if (pcRam0000000003ebe400 == (code *)0x0) {
      pcRam0000000003ebe400 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*pcRam0000000003ebe400)(param_1,lVar2,uVar1);
    return auVar3;
  }
  auVar3._0_8_ = func_0x00f78af4();
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
// RVA: 0x1538ae4 | Atlas.Gameplay.Kart.BaseVisualBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_Kart_BaseVisualBehaviour___ctor(ulong param_1)

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



// ============================================================
// RVA: 0x1538aec | Atlas.Gameplay.Kart.BaseVisualBehaviour..cctor
// ============================================================

void Atlas_Gameplay_Kart_BaseVisualBehaviour___cctor(void)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  if ((bRam0000000003eb4efa & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d6dce0);
    func_0x00f78a20(0x3d6dcd0);
    func_0x00f78a20(0x3d6cdf0);
    func_0x00f78a20(0x3d69808);
    func_0x00f78a20(0x3d6cdf8);
    func_0x00f78a20(0x3d6a820);
    func_0x00f78a20(0x3d6be58);
    func_0x00f78a20(0x3d6f290);
    func_0x00f78a20(0x3d6dcc8);
    func_0x00f78a20(0x3d697e8);
    func_0x00f78a20(0x3d6dd20);
    func_0x00f78a20(0x3d6ed98);
    func_0x00f78a20(0x3d6d470);
    func_0x00f78a20(0x3d6d378);
    func_0x00f78a20(0x3d72c30);
    func_0x00f78a20(0x3d6dbc0);
    func_0x00f78a20(0x3d6eda8);
    func_0x00f78a20(0x3d6eda0);
    func_0x00f78a20(0x3d6d850);
    func_0x00f78a20(0x3d72dd0);
    func_0x00f78a20(0x3d69500);
    func_0x00f78a20(0x3d6d380);
    func_0x00f78a20(0x3d72ae0);
    func_0x00f78a20(0x3d72ae8);
    func_0x00f78a20(0x3d70de8);
    func_0x00f78a20(0x3d6ed70);
    func_0x00f78a20(0x3d6dd08);
    func_0x00f78a20(0x3d6ed80);
    func_0x00f78a20(0x3d73680);
    func_0x00f78a20(0x3d72dc0);
    func_0x00f78a20(0x3d71958);
    func_0x00f78a20(0x3d6ed90);
    func_0x00f78a20(0x3d6ed88);
    func_0x00f78a20(0x3d6dcd8);
    bRam0000000003eb4efa = 1;
  }
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Impact_BT')*/ uRam0000000003d6dce0,0);
  **(undefined4 **)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Speed')*/ uRam0000000003d72c30,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 4) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Steer')*/ uRam0000000003d72dc0,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 8) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('SteerIntensity')*/ uRam0000000003d72dd0,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0xc) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Drift')*/ uRam0000000003d6be58,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x10) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Hop')*/ uRam0000000003d6d850,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x14) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('InAir')*/ uRam0000000003d6dd08,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x18) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Gliding')*/ uRam0000000003d6d470,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x1c) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Boosting')*/ uRam0000000003d69808,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x20) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('ItemPickup')*/ uRam0000000003d6ed88,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x24) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('ItemActivate')*/ uRam0000000003d6ed70,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x28) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('ItemThrowF')*/ uRam0000000003d6eda0,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x2c) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('ItemThrowB')*/ uRam0000000003d6ed98,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x30) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('ItemHolding')*/ uRam0000000003d6ed80,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x34) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('ItemPropane')*/ uRam0000000003d6ed90,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x38) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('ItemTimeCheater')*/ uRam0000000003d6eda8,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x3c) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('GetHitSmall')*/ uRam0000000003d6d380,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x40) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('GetHitBig')*/ uRam0000000003d6d378,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x44) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Incoming')*/ uRam0000000003d6dd20,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x48) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('SneerL')*/ uRam0000000003d72ae0,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x4c) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('SneerR')*/ uRam0000000003d72ae8,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x50) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Overtaken')*/ uRam0000000003d70de8,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x54) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Taunt')*/ uRam0000000003d73680,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x58) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Impact')*/ uRam0000000003d6dcc8,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x5c) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('ImpactAngle')*/ uRam0000000003d6dcd0,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x60) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('ImpactForce')*/ uRam0000000003d6dcd8,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 100) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('CelebrateSmall')*/ uRam0000000003d6a820,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x68) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('RampBoost')*/ uRam0000000003d71958,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x6c) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('FinishLineIndex')*/ uRam0000000003d6cdf0,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x70) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('FinishLineReaction')*/ uRam0000000003d6cdf8,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x74) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('AutodriveReaction')*/ uRam0000000003d69500,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x78) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('IdleBreaker')*/ uRam0000000003d6dbc0,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x7c) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('LandForce')*/ uRam0000000003d6f290,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x80) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('BoostIntensity')*/ uRam0000000003d697e8,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x84) = uVar5;
  lVar6 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,6);
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (uVar1 != 0) {
      lVar9 = *(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8);
      *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(lVar9 + 0x54);
      if ((((uVar1 != 1) &&
           (*(undefined4 *)(lVar6 + 0x24) = *(undefined4 *)(lVar9 + 0x58), 2 < uVar1)) &&
          (*(undefined4 *)(lVar6 + 0x28) = *(undefined4 *)(lVar9 + 0x48), uVar1 != 3)) &&
         ((*(undefined4 *)(lVar6 + 0x2c) = *(undefined4 *)(lVar9 + 0x4c), 4 < uVar1 &&
          (*(undefined4 *)(lVar6 + 0x30) = *(undefined4 *)(lVar9 + 0x50), uVar1 != 5)))) {
        *(undefined4 *)(lVar6 + 0x34) = *(undefined4 *)(lVar9 + 0x7c);
        *(long *)(lVar9 + 0x88) = lVar6;
        return;
      }
    }
    uVar7 = func_0x00f78b24();
    func_0x00f78ac0(uVar7,0);
  }
  puVar8 = (undefined8 *)func_0x00f78af4();
  uVar19 = puVar8[1];
  uVar7 = *puVar8;
  if (((0 < *(int *)(puVar8 + 4)) &&
      (fVar24 = *(float *)(puVar8 + 5) * *(float *)(puVar8 + 8) + *(float *)((long)puVar8 + 0x3c),
      0.0 < fVar24)) &&
     (lVar6 = (long)*(int *)((long)puVar8 + 0x24),
     *(int *)((long)puVar8 + 0x24) < *(int *)(puVar8 + 4))) {
    bVar4 = 1;
    uVar16 = *(undefined8 *)((long)puVar8 + 0x2c);
    uVar20 = *(undefined8 *)((long)puVar8 + 0x34);
    do {
      puVar2 = (undefined8 *)(puVar8[2] + lVar6 * 0x10);
      uVar19 = puVar2[1];
      uVar7 = *puVar2;
      if (cRam0000000003ca34fc == '\0') {
        func_0x00f78a20(0x3d232c0);
        cRam0000000003ca34fc = '\x01';
      }
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      fVar15 = (float)uVar16;
      fVar10 = fVar15 - (float)uVar7;
      fVar17 = (float)((ulong)uVar16 >> 0x20);
      fVar22 = (float)((ulong)uVar7 >> 0x20);
      fVar11 = fVar17 - fVar22;
      fVar18 = (float)uVar20;
      fVar12 = fVar18 - (float)uVar19;
      fVar21 = (float)((ulong)uVar20 >> 0x20);
      fVar23 = (float)((ulong)uVar19 >> 0x20);
      fVar13 = fVar21 - fVar23;
      fVar10 = fVar10 * fVar10;
      fVar11 = fVar11 * fVar11;
      fVar12 = fVar12 * fVar12;
      fVar13 = fVar13 * fVar13;
      auVar14._4_4_ = fVar11;
      auVar14._0_4_ = fVar10;
      auVar14._8_4_ = fVar12;
      auVar14._12_4_ = fVar13;
      auVar3._4_4_ = fVar11;
      auVar3._0_4_ = fVar10;
      auVar3._8_4_ = fVar12;
      auVar3._12_4_ = fVar13;
      auVar14 = NEON_ext(auVar14,auVar3,8,1);
      fVar10 = SQRT(fVar13 + auVar14._0_4_ + fVar10 + fVar11);
      if (!(bool)(fVar10 <= fVar24 | bVar4)) {
        fVar11 = fVar24 / fVar10;
        uVar7 = CONCAT44(fVar17 + (fVar22 - fVar17) * fVar11,
                         fVar15 + ((float)uVar7 - fVar15) * fVar11);
        uVar19 = CONCAT44(fVar21 + (fVar23 - fVar21) * fVar11,
                          fVar18 + ((float)uVar19 - fVar18) * fVar11);
      }
      fVar24 = fVar24 - fVar10;
      if (fVar24 <= 0.0) break;
      bVar4 = 0;
      lVar6 = lVar6 + 1;
      uVar16 = uVar7;
      uVar20 = uVar19;
    } while (lVar6 < *(int *)(puVar8 + 4));
  }
  puVar8 = (undefined8 *)puVar8[9];
  puVar8[1] = uVar19;
  *puVar8 = uVar7;
  return;
}



