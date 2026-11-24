// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Usables.PlacementHomingProjectile

// ============================================================
// RVA: 0x14bbc1c | Atlas.Gameplay.Usables.PlacementHomingProjectile.get_PlacementHomingBehaviour
// ============================================================

/* WARNING: Possible PIC construction at 0x014bbdec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01523870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bbe48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bbe68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bbfac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bbfbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bbfdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bc168: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bc1a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bc1dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bc26c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bc2b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bc314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bc498: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01523aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014bc49c) */
/* WARNING: Removing unreachable block (ram,0x014cd6ec) */
/* WARNING: Removing unreachable block (ram,0x01570398) */
/* WARNING: Removing unreachable block (ram,0x01523e04) */
/* WARNING: Removing unreachable block (ram,0x014bc318) */
/* WARNING: Removing unreachable block (ram,0x014bc31c) */
/* WARNING: Removing unreachable block (ram,0x014bc344) */
/* WARNING: Removing unreachable block (ram,0x014bc2bc) */
/* WARNING: Removing unreachable block (ram,0x014bc2c0) */
/* WARNING: Removing unreachable block (ram,0x014bc2f0) */
/* WARNING: Removing unreachable block (ram,0x014bc270) */
/* WARNING: Removing unreachable block (ram,0x014bc274) */
/* WARNING: Removing unreachable block (ram,0x014bc1e0) */
/* WARNING: Removing unreachable block (ram,0x014bc1e4) */
/* WARNING: Removing unreachable block (ram,0x014bc214) */
/* WARNING: Removing unreachable block (ram,0x014bc21c) */
/* WARNING: Removing unreachable block (ram,0x014bc224) */
/* WARNING: Removing unreachable block (ram,0x014bc22c) */
/* WARNING: Removing unreachable block (ram,0x014bc244) */
/* WARNING: Removing unreachable block (ram,0x014bc1ac) */
/* WARNING: Removing unreachable block (ram,0x014bc1b0) */
/* WARNING: Removing unreachable block (ram,0x014bc16c) */
/* WARNING: Removing unreachable block (ram,0x014bc170) */
/* WARNING: Removing unreachable block (ram,0x014bc19c) */
/* WARNING: Removing unreachable block (ram,0x014bbfe0) */
/* WARNING: Removing unreachable block (ram,0x014bbff0) */
/* WARNING: Removing unreachable block (ram,0x014bc00c) */
/* WARNING: Removing unreachable block (ram,0x014bc02c) */
/* WARNING: Removing unreachable block (ram,0x014bc064) */
/* WARNING: Removing unreachable block (ram,0x014bc084) */
/* WARNING: Removing unreachable block (ram,0x014bc0ac) */
/* WARNING: Removing unreachable block (ram,0x014bc0cc) */
/* WARNING: Removing unreachable block (ram,0x014bc0d4) */
/* WARNING: Removing unreachable block (ram,0x014bc0f4) */
/* WARNING: Removing unreachable block (ram,0x014bc108) */
/* WARNING: Removing unreachable block (ram,0x014bc124) */
/* WARNING: Removing unreachable block (ram,0x014bc12c) */
/* WARNING: Removing unreachable block (ram,0x014bc144) */
/* WARNING: Removing unreachable block (ram,0x014bc158) */
/* WARNING: Removing unreachable block (ram,0x014bbfc0) */
/* WARNING: Removing unreachable block (ram,0x014bbfcc) */
/* WARNING: Removing unreachable block (ram,0x014bbfd4) */
/* WARNING: Removing unreachable block (ram,0x014bbfb0) */
/* WARNING: Removing unreachable block (ram,0x014bbfbc) */
/* WARNING: Removing unreachable block (ram,0x014bbe6c) */
/* WARNING: Removing unreachable block (ram,0x014bbe74) */
/* WARNING: Removing unreachable block (ram,0x014bbe4c) */
/* WARNING: Removing unreachable block (ram,0x014bbe58) */
/* WARNING: Removing unreachable block (ram,0x014bbe60) */
/* WARNING: Removing unreachable block (ram,0x01523aa4) */
/* WARNING: Removing unreachable block (ram,0x01523aa8) */
/* WARNING: Removing unreachable block (ram,0x01523ab0) */
/* WARNING: Removing unreachable block (ram,0x01523ac8) */
/* WARNING: Removing unreachable block (ram,0x01523ae0) */
/* WARNING: Removing unreachable block (ram,0x01523afc) */
/* WARNING: Removing unreachable block (ram,0x01523b08) */
/* WARNING: Removing unreachable block (ram,0x01523b28) */
/* WARNING: Removing unreachable block (ram,0x01523b40) */
/* WARNING: Removing unreachable block (ram,0x01523b48) */
/* WARNING: Removing unreachable block (ram,0x01523b4c) */
/* WARNING: Removing unreachable block (ram,0x01523b60) */
/* WARNING: Removing unreachable block (ram,0x01523b64) */
/* WARNING: Removing unreachable block (ram,0x01523b6c) */
/* WARNING: Removing unreachable block (ram,0x01523b70) */
/* WARNING: Removing unreachable block (ram,0x01523b8c) */

void Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingBehaviour
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  int extraout_w1;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  bool bVar15;
  long lVar16;
  undefined8 unaff_x26;
  undefined1 ****ppppuVar17;
  undefined1 *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 ***pppuStack_130;
  undefined *puStack_128;
  undefined8 ***pppuStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 ***pppuStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if ((bRam0000000003eb4af1 & 1) == 0) {
    func_0x00f78a20(0x3d23c70);
    bRam0000000003eb4af1 = 1;
  }
  if (*(long **)(param_1 + 0x48) == (long *)0x0) {
    return;
  }
  lVar13 = **(long **)(param_1 + 0x48);
  if ((*(byte *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 300) <= *(byte *)(lVar13 + 300)) &&
     (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 300) * 8 + -8) ==
      /*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70)) {
    return;
  }
  lVar13 = func_0x00f78e5c();
  uStack_40 = 0x3eb4000;
  puStack_28 = &
               Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
  ;
  lStack_38 = param_1;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4af2 & 1) == 0) {
    func_0x00f78a20(0x3d23c78);
    bRam0000000003eb4af2 = 1;
  }
  if (*(long **)(lVar13 + 0x30) == (long *)0x0) {
    return;
  }
  lVar13 = **(long **)(lVar13 + 0x30);
  if ((*(byte *)(/*Atlas.Definitions.PlacementHomingProjectileDefinition_TypeInfo*/ lRam0000000003d23c78 + 300) <= *(byte *)(lVar13 + 300)) &&
     (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.PlacementHomingProjectileDefinition_TypeInfo*/ lRam0000000003d23c78 + 300) * 8 + -8) ==
      /*Atlas.Definitions.PlacementHomingProjectileDefinition_TypeInfo*/ lRam0000000003d23c78)) {
    return;
  }
  auVar21 = func_0x00f78e5c();
  lVar13 = auVar21._0_8_;
  puStack_48 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__Init;
  uVar8 = 0x3d21db0;
  ppuStack_50 = &puStack_30;
  if ((bRam0000000003eb4af3 & 1) == 0) {
    func_0x00f78a20(0x3d21db0);
    bRam0000000003eb4af3 = 1;
  }
  lVar12 = param_3;
  /*Atlas.Gameplay.Usables.ProjectileUsable$$Init*/ func_0x014cd314(lVar13,auVar21._8_8_,param_3,param_4,param_5,0);
  lVar6 = func_0x00f78aec(/*Atlas.Gameplay.Usables.HomingProjectileLogic_TypeInfo*/ uRam0000000003d21db0);
  Atlas_Gameplay_Usables_HomingProjectileLogic___ctor(lVar6,0);
  *(long *)(lVar13 + 0x1a0) = lVar6;
  if (lVar6 != 0) {
    Atlas_Gameplay_Usables_HomingProjectileLogic__Init(lVar6,param_3,0);
    *(undefined1 *)(lVar13 + 0x12d) = 0;
    return;
  }
  lVar6 = func_0x00f78af4();
  plVar10 = &lStack_b0;
  puStack_98 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__DeInit;
  ppppuVar17 = &pppuStack_a0;
  uVar14 = 0;
  lStack_b0 = param_3;
  pppuStack_a0 = &ppuStack_50;
  if (*(char *)(lVar6 + 0x19) != '\0') {
    puVar19 = &UNK_014bbdf0;
    plVar10 = &lStack_b0;
    lVar13 = lVar6;
code_r0x014bbe30:
    while( true ) {
      auVar22._8_8_ = uVar8;
      auVar22._0_8_ = lVar13;
      lStack_a8 = auVar21._0_8_;
      puVar2 = (undefined1 *)((long)plVar10 + -0x20);
      *(long *)((long)plVar10 + -0x20) = param_3;
      *(long *)((long)plVar10 + -0x18) = lVar6;
      *(undefined1 *****)((long)plVar10 + -0x10) = ppppuVar17;
      *(undefined **)((long)plVar10 + -8) = puVar19;
      puVar18 = (undefined1 *)((long)plVar10 + -0x10);
      lVar6 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingBehaviour();
      if (lVar6 == 0) {
        auVar22 = func_0x00f78af4();
        lVar6 = auVar22._0_8_;
        puVar3 = (undefined1 *)((long)plVar10 + -0xe0);
        puVar2 = (undefined1 *)((long)plVar10 + -0xe0);
        *(undefined8 *)((long)plVar10 + -0x80) = unaff_d9;
        *(undefined8 *)((long)plVar10 + -0x78) = unaff_d8;
        *(undefined8 *)((long)plVar10 + -0x70) = unaff_x26;
        *(undefined8 *)((long)plVar10 + -0x68) = 0x3eb4000;
        *(undefined8 *)((long)plVar10 + -0x60) = uVar8;
        *(long *)((long)plVar10 + -0x58) = auVar21._8_8_;
        *(undefined8 *)((long)plVar10 + -0x50) = param_4;
        *(undefined8 *)((long)plVar10 + -0x48) = uVar14;
        *(long *)((long)plVar10 + -0x40) = param_3;
        *(long *)((long)plVar10 + -0x38) = lVar13;
        *(undefined1 **)((long)plVar10 + -0x30) = puVar18;
        *(undefined **)((long)plVar10 + -0x28) =
             &Atlas_Gameplay_Usables_PlacementHomingProjectile__OnExitPool;
        puVar18 = (undefined1 *)((long)plVar10 + -0x30);
        param_3 = 0;
        uVar14 = 0;
        param_4 = 0;
        if ((bRam0000000003eb4af4 & 1) == 0) {
          func_0x00f78a20(0x3d20560);
          func_0x00f78a20(0x3d41598);
          func_0x00f78a20(0x3d1eaf8);
          func_0x00f78a20(0x3d416c0);
          bRam0000000003eb4af4 = 1;
        }
        lVar13 = lVar12;
        /*Atlas.Gameplay.Usables.ProjectileUsable$$OnExitPool*/ func_0x014cd5f8(lVar6,auVar22._8_8_,lVar12,0,0,0,0);
        if ((*(long *)(lVar6 + 0xf8) != 0) &&
           (lVar7 = *(long *)(*(long *)(lVar6 + 0xf8) + 0x18), lVar7 != 0)) {
          uVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar7,0);
          *(undefined8 *)(lVar6 + 0x100) = uVar8;
          *(undefined4 *)(lVar6 + 0x218) = 0x3e99999a;
          lVar7 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingBehaviour
                            (lVar6);
          if ((lVar7 != 0) &&
             ((*(long *)(lVar7 + 0x28) != 0 &&
              (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar7 + 0x28),0), lVar7 != 0)))) {
            uVar11 = 1;
            puVar19 = &UNK_014bbfb0;
            goto code_r0x0322ef1c;
          }
        }
        func_0x00f78af4();
        puVar19 = &Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__ResetAnimState;
        lVar6 = func_0x00f78e5c();
        lVar16 = lVar12;
      }
      else {
        puVar19 = &UNK_014bbe4c;
        lVar13 = lVar12;
        lVar16 = auVar21._8_8_;
      }
      uVar8 = auVar22._8_8_;
      *(undefined8 *)(puVar2 + -0x30) = param_4;
      *(undefined8 *)(puVar2 + -0x28) = uVar14;
      *(long *)(puVar2 + -0x20) = param_3;
      *(long *)(puVar2 + -0x18) = auVar22._0_8_;
      *(undefined1 **)(puVar2 + -0x10) = puVar18;
      *(undefined **)(puVar2 + -8) = puVar19;
      uVar14 = 0x3d23c70;
      lVar12 = lVar13;
      if ((bRam0000000003eb4afd & 1) == 0) {
        func_0x00f78a20(0x3d23c70);
        bRam0000000003eb4afd = 1;
        lVar12 = lVar13;
      }
      param_3 = *(long *)(lVar6 + 0x70);
      if (((*(ushort *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (param_3 != 0) {
        lVar12 = 0;
        /*UnityEngine.Animator$$SetBool*/ func_0x0320d43c(param_3,**(undefined4 **)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8),0,0);
        if (*(long *)(lVar6 + 0x70) != 0) {
          lVar12 = 0;
          /*UnityEngine.Animator$$SetBool*/ func_0x0320d43c(*(long *)(lVar6 + 0x70),
                          *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 0xc),0,0);
          if (*(long *)(lVar6 + 0x70) != 0) {
            lVar12 = 0;
            /*UnityEngine.Animator$$SetBool*/ func_0x0320d43c(*(long *)(lVar6 + 0x70),
                            *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 0x10),0,0);
            lVar13 = *(long *)(lVar6 + 0x70);
            if (lVar13 != 0) {
              uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 8);
              *(undefined8 *)(puVar2 + -0x40) = unaff_d9;
              *(undefined8 *)(puVar2 + -0x38) = unaff_d8;
              *(undefined8 *)(puVar2 + -0x30) = *(undefined8 *)(puVar2 + -0x30);
              *(undefined8 *)(puVar2 + -0x28) = *(undefined8 *)(puVar2 + -0x28);
              *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
              *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
              *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
              *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
              if (pcRam0000000003ebe400 == (code *)0x0) {
                pcRam0000000003ebe400 =
                     (code *)func_0x00f789d4(
                                            "UnityEngine.Animator::SetFloatID(System.Int32,System.Single)"
                                            );
              }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000003ebe400)(0,lVar13,uVar1);
              return;
            }
          }
        }
      }
      auVar21 = func_0x00f78af4();
      uVar11 = auVar21._8_8_;
      *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x38) =
           &Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__SetInFlightVFXActive;
      lVar7 = *(long *)(auVar21._0_8_ + 0x78);
      if (lVar7 != 0) break;
      lVar13 = func_0x00f78af4();
      auVar21._8_8_ = lVar16;
      auVar21._0_8_ = lStack_a8;
      plVar10 = (long *)(puVar2 + -0x60);
      *(long *)(puVar2 + -0x60) = param_3;
      *(long *)(puVar2 + -0x58) = lVar6;
      *(undefined1 **)(puVar2 + -0x50) = puVar2 + -0x40;
      *(undefined **)(puVar2 + -0x48) =
           &Atlas_Gameplay_Usables_PlacementHomingProjectile__OnEnterPool;
      ppppuVar17 = (undefined1 ****)(puVar2 + -0x50);
      puVar19 = &UNK_014bc49c;
      lVar6 = lVar13;
    }
    puVar3 = puVar2 + -0x30;
    puVar18 = *(undefined1 **)(puVar2 + -0x40);
    puVar19 = *(undefined **)(puVar2 + -0x38);
code_r0x0322ef1c:
    *(undefined8 *)(puVar3 + -0x30) = param_4;
    *(undefined8 *)(puVar3 + -0x28) = uVar14;
    *(long *)(puVar3 + -0x20) = param_3;
    *(long *)(puVar3 + -0x18) = lVar6;
    *(undefined1 **)(puVar3 + -0x10) = puVar18;
    *(undefined **)(puVar3 + -8) = puVar19;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf4c0)(lVar7,uVar11);
    return;
  }
  lStack_a8 = lVar13;
  if (*(long *)(lVar6 + 0x1a0) == 0) {
    puVar19 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__OnTearDownParamsInternal;
    lVar13 = func_0x00f78af4();
    auVar21._8_8_ = auVar21._8_8_;
    auVar21._0_8_ = lStack_a8;
    goto code_r0x014bbe30;
  }
  Atlas_Gameplay_Usables_HomingProjectileLogic__DeInit(*(long *)(lVar6 + 0x1a0),0);
  *(undefined8 *)(lVar6 + 0x1a0) = 0;
  if (*(long *)(lVar6 + 0x228) != 0) {
    /*Atlas.Audio.WeaponAudio$$DeInit*/ func_0x01530270(*(long *)(lVar6 + 0x228),0);
  }
  *(undefined8 *)(lVar6 + 0x228) = 0;
  if (*(char *)(lVar6 + 0x19) != '\0') {
    /*Atlas.Gameplay.Usables.ProjectileUsable$$OnTearDownParamsInternal*/ func_0x014cd4e4(lVar6,0);
  }
  *(undefined8 *)(lVar6 + 0xf8) = 0;
  *(undefined4 *)(lVar6 + 0x150) = 0;
  if (*(char *)(lVar6 + 0x19) != '\0') {
    Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(lVar6,0);
  }
  pppuStack_c0 = &pppuStack_a0;
  if (*(char *)(lVar6 + 0x19) == '\0') {
    *(undefined8 *)(lVar6 + 0x10) = 0;
    *(undefined8 *)(lVar6 + 0x20) = 0;
    *(undefined8 *)(lVar6 + 0x58) = 0;
    *(undefined8 *)(lVar6 + 0x38) = 0;
    return;
  }
  lStack_d0 = lStack_b0;
  puStack_b8 = &UNK_01523874;
  lStack_c8 = lVar6;
  if ((bRam0000000003eb4e50 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003eb4e50 = 1;
  }
  if ((*(long *)(lVar6 + 0x48) != 0) &&
     (lVar13 = *(long *)(*(long *)(lVar6 + 0x48) + 0x28), lVar13 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(lVar6 + 100),*(undefined4 *)(lVar6 + 0x68),
                    *(undefined4 *)(lVar6 + 0x6c),lVar13,0);
    if ((*(long *)(lVar6 + 0x48) != 0) &&
       (lVar13 = *(long *)(*(long *)(lVar6 + 0x48) + 0x28), lVar13 != 0)) {
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(lVar6 + 0x70),*(undefined4 *)(lVar6 + 0x74),
                      *(undefined4 *)(lVar6 + 0x78),*(undefined4 *)(lVar6 + 0x7c),lVar13,0);
      if ((*(long *)(lVar6 + 0x48) != 0) &&
         (lVar13 = *(long *)(*(long *)(lVar6 + 0x48) + 0x28), lVar13 != 0)) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(lVar6 + 0x80),*(undefined4 *)(lVar6 + 0x84),
                        *(undefined4 *)(lVar6 + 0x88),lVar13,0);
        *(undefined1 *)(lVar6 + 0x19) = 0;
        *(undefined8 *)(lVar6 + 0x98) = 0;
        *(undefined8 *)(lVar6 + 0x90) = 0;
        *(undefined8 *)(lVar6 + 0xa8) = 0;
        *(undefined8 *)(lVar6 + 0xa0) = 0;
        *(undefined8 *)(lVar6 + 0xb8) = 0;
        *(undefined8 *)(lVar6 + 0xb0) = 0;
        if (*(long *)(lVar6 + 0x48) != 0) {
          lVar13 = *(long *)(*(long *)(lVar6 + 0x48) + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar12 = 0;
          iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar13,0);
          if (iVar4 != 0) {
            if (lVar13 == 0) goto code_r0x015239b0;
            *(undefined2 *)(lVar13 + 0x46) = 0;
            *(undefined4 *)(lVar13 + 0x40) = 0;
            *(undefined1 *)(lVar13 + 0x44) = 0;
          }
          if (*(long *)(lVar6 + 0x48) != 0) {
            *(undefined8 *)(*(long *)(lVar6 + 0x48) + 0x40) = 0;
            *(undefined8 *)(lVar6 + 0x48) = 0;
            *(undefined1 *)(lVar6 + 0x18) = 0;
            *(undefined8 *)(lVar6 + 0x28) = 0;
            *(undefined8 *)(lVar6 + 0x30) = 0;
            *(undefined4 *)(lVar6 + 0x40) = 0xbf800000;
            *(undefined2 *)(lVar6 + 0x60) = 0;
            return;
          }
        }
      }
    }
  }
code_r0x015239b0:
  auVar21 = func_0x00f78af4();
  lVar6 = auVar21._8_8_;
  lVar13 = auVar21._0_8_;
  puStack_d8 = &Atlas_Gameplay_Usables_Usable__OnExitPool;
  pppuStack_e0 = &pppuStack_c0;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(lVar13 + 0x19) = 1;
  *(undefined8 *)(lVar13 + 0x28) = 0;
  *(long *)(lVar13 + 0x30) = lVar6;
  *(long *)(lVar13 + 0x48) = lVar12;
  *(undefined8 *)(lVar13 + 0x50) = 0;
  if ((*(long *)(lVar13 + 0x58) != 0) && (lVar6 != 0)) {
    lVar7 = *(long *)(*(long *)(lVar13 + 0x58) + 0x10);
    lVar6 = *(long *)(lVar6 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar6,0);
    if (lVar7 != 0) {
      uVar8 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar7,uVar8,uRam0000000003d572a0);
      *(undefined8 *)(lVar13 + 0x90) = uVar8;
      puVar19 = &UNK_01523aa4;
      lVar7 = lVar13;
      goto code_r0x01523ba8;
    }
  }
  puVar19 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lVar7 = func_0x00f78af4();
code_r0x01523ba8:
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  lStack_160 = lVar6;
  lStack_158 = lVar12;
  lStack_150 = lVar13;
  pppuStack_130 = &pppuStack_e0;
  puStack_128 = puVar19;
  if ((bRam0000000003eb4e51 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d334e8);
    func_0x00f78a20(0x3d334f0);
    func_0x00f78a20(0x3d334f8);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3d2e8);
    func_0x00f78a20(0x3d3d2f0);
    bRam0000000003eb4e51 = 1;
  }
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  if (*(long *)(lVar7 + 0x28) == 0) {
    return;
  }
  lVar13 = *(long *)(lVar7 + 0x90);
  if (lVar13 != 0) {
    uVar14 = *(undefined8 *)(lVar13 + 0x28);
    uVar8 = *(undefined8 *)(lVar13 + 0x20);
    uVar20 = *(undefined8 *)(lVar13 + 0x38);
    uVar11 = *(undefined8 *)(lVar13 + 0x30);
    *(undefined8 *)(lVar7 + 0xb8) = *(undefined8 *)(lVar13 + 0x40);
    *(undefined8 *)(lVar7 + 0xb0) = uVar20;
    *(undefined8 *)(lVar7 + 0xa8) = uVar11;
    *(undefined8 *)(lVar7 + 0xa0) = uVar14;
    *(undefined8 *)(lVar7 + 0x98) = uVar8;
    if (*(long *)(lVar13 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar13 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar13 = *(long *)(*(long *)(lVar7 + 0x28) + 0x28);
    if (lVar13 != 0) {
      uStack_168 = *(undefined8 *)(lVar13 + 0xc0);
      if (((*(long *)(lVar7 + 0x58) != 0) &&
          (lVar13 = *(long *)(*(long *)(lVar7 + 0x58) + 0x10), lVar13 != 0)) &&
         (lVar13 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar13,uStack_168,uRam0000000003d57270), lVar13 != 0)) {
        uStack_170 = *(undefined8 *)(lVar13 + 0x70);
        if ((*(long *)(lVar7 + 0x90) != 0) &&
           (lVar13 = *(long *)(*(long *)(lVar7 + 0x90) + 0x48), lVar13 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_1b0,lVar13,uRam0000000003d3d2e8);
          bVar15 = false;
          while (uVar9 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_1b0,uRam0000000003d334f0), uVar8 = uStack_1a0,
                (uVar9 & 1) != 0) {
            uStack_1d8 = uStack_190;
            uStack_1e0 = uStack_198;
            uStack_1c8 = uStack_180;
            uStack_1d0 = uStack_188;
            uStack_1c0 = uStack_178;
            uStack_1e8 = uStack_1a0;
            uVar14 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_1e8);
            uVar9 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_168,uVar14,0);
            if ((uVar9 & 1) != 0) {
              *(undefined8 *)(lVar7 + 0xa0) = uStack_1d8;
              *(undefined8 *)(lVar7 + 0x98) = uStack_1e0;
              *(undefined8 *)(lVar7 + 0xb0) = uStack_1c8;
              *(undefined8 *)(lVar7 + 0xa8) = uStack_1d0;
              *(undefined8 *)(lVar7 + 0xb8) = uStack_1c0;
              bVar15 = true;
            }
            uStack_1e8 = uVar8;
            uVar8 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_1e8);
            uVar5 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_170,uVar8,0);
            if (!bVar15 && ((uVar5 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(lVar7 + 0xa0) = uStack_1d8;
              *(undefined8 *)(lVar7 + 0x98) = uStack_1e0;
              *(undefined8 *)(lVar7 + 0xb0) = uStack_1c8;
              *(undefined8 *)(lVar7 + 0xa8) = uStack_1d0;
              *(undefined8 *)(lVar7 + 0xb8) = uStack_1c0;
            }
          }
          /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_1b0,uRam0000000003d334e8);
          return;
        }
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar10 = (long *)___cxa_begin_catch();
    lVar13 = *plVar10;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_1b0,uRam0000000003d334e8);
    if (lVar13 == 0) {
      return;
    }
    func_0x00f78ac0(lVar13,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x14bbc98 | Atlas.Gameplay.Usables.PlacementHomingProjectile.get_PlacementHomingProjectileDefinition
// ============================================================

/* WARNING: Possible PIC construction at 0x014bbdec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01523870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bbe48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bbe68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bbfac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bbfbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bbfdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bc498: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01523aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014bc49c) */
/* WARNING: Removing unreachable block (ram,0x014cd6ec) */
/* WARNING: Removing unreachable block (ram,0x01570398) */
/* WARNING: Removing unreachable block (ram,0x01523e04) */
/* WARNING: Removing unreachable block (ram,0x014bbfe0) */
/* WARNING: Removing unreachable block (ram,0x014bbff0) */
/* WARNING: Removing unreachable block (ram,0x014bc00c) */
/* WARNING: Removing unreachable block (ram,0x014bc02c) */
/* WARNING: Removing unreachable block (ram,0x014bc064) */
/* WARNING: Removing unreachable block (ram,0x014bc084) */
/* WARNING: Removing unreachable block (ram,0x014bc0ac) */
/* WARNING: Removing unreachable block (ram,0x014bc0cc) */
/* WARNING: Removing unreachable block (ram,0x014bc0d4) */
/* WARNING: Removing unreachable block (ram,0x014bc0f4) */
/* WARNING: Removing unreachable block (ram,0x014bc108) */
/* WARNING: Removing unreachable block (ram,0x014bc124) */
/* WARNING: Removing unreachable block (ram,0x014bc12c) */
/* WARNING: Removing unreachable block (ram,0x014bc144) */
/* WARNING: Removing unreachable block (ram,0x014bc158) */
/* WARNING: Removing unreachable block (ram,0x014bc170) */
/* WARNING: Removing unreachable block (ram,0x014bc19c) */
/* WARNING: Removing unreachable block (ram,0x014bc1b0) */
/* WARNING: Removing unreachable block (ram,0x014bc1e4) */
/* WARNING: Removing unreachable block (ram,0x014bc214) */
/* WARNING: Removing unreachable block (ram,0x014bc21c) */
/* WARNING: Removing unreachable block (ram,0x014bc224) */
/* WARNING: Removing unreachable block (ram,0x014bc22c) */
/* WARNING: Removing unreachable block (ram,0x014bc244) */
/* WARNING: Removing unreachable block (ram,0x014bc274) */
/* WARNING: Removing unreachable block (ram,0x014bc2c0) */
/* WARNING: Removing unreachable block (ram,0x014bc2f0) */
/* WARNING: Removing unreachable block (ram,0x014bc31c) */
/* WARNING: Removing unreachable block (ram,0x014bc344) */
/* WARNING: Removing unreachable block (ram,0x014bbfc0) */
/* WARNING: Removing unreachable block (ram,0x014bbfcc) */
/* WARNING: Removing unreachable block (ram,0x014bbfd4) */
/* WARNING: Removing unreachable block (ram,0x014bbfb0) */
/* WARNING: Removing unreachable block (ram,0x014bbfbc) */
/* WARNING: Removing unreachable block (ram,0x014bbe6c) */
/* WARNING: Removing unreachable block (ram,0x014bbe74) */
/* WARNING: Removing unreachable block (ram,0x014bbe4c) */
/* WARNING: Removing unreachable block (ram,0x014bbe58) */
/* WARNING: Removing unreachable block (ram,0x014bbe60) */
/* WARNING: Removing unreachable block (ram,0x01523aa4) */
/* WARNING: Removing unreachable block (ram,0x01523aa8) */
/* WARNING: Removing unreachable block (ram,0x01523ab0) */
/* WARNING: Removing unreachable block (ram,0x01523ac8) */
/* WARNING: Removing unreachable block (ram,0x01523ae0) */
/* WARNING: Removing unreachable block (ram,0x01523afc) */
/* WARNING: Removing unreachable block (ram,0x01523b08) */
/* WARNING: Removing unreachable block (ram,0x01523b28) */
/* WARNING: Removing unreachable block (ram,0x01523b40) */
/* WARNING: Removing unreachable block (ram,0x01523b48) */
/* WARNING: Removing unreachable block (ram,0x01523b4c) */
/* WARNING: Removing unreachable block (ram,0x01523b60) */
/* WARNING: Removing unreachable block (ram,0x01523b64) */
/* WARNING: Removing unreachable block (ram,0x01523b6c) */
/* WARNING: Removing unreachable block (ram,0x01523b70) */
/* WARNING: Removing unreachable block (ram,0x01523b8c) */

void Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  int extraout_w1;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  bool bVar15;
  long lVar16;
  undefined8 unaff_x26;
  undefined1 ***pppuVar17;
  undefined1 *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 ***pppuStack_110;
  undefined *puStack_108;
  undefined8 ***pppuStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if ((bRam0000000003eb4af2 & 1) == 0) {
    func_0x00f78a20(0x3d23c78);
    bRam0000000003eb4af2 = 1;
  }
  if (*(long **)(param_1 + 0x30) == (long *)0x0) {
    return;
  }
  lVar13 = **(long **)(param_1 + 0x30);
  if ((*(byte *)(/*Atlas.Definitions.PlacementHomingProjectileDefinition_TypeInfo*/ lRam0000000003d23c78 + 300) <= *(byte *)(lVar13 + 300)) &&
     (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.PlacementHomingProjectileDefinition_TypeInfo*/ lRam0000000003d23c78 + 300) * 8 + -8) ==
      /*Atlas.Definitions.PlacementHomingProjectileDefinition_TypeInfo*/ lRam0000000003d23c78)) {
    return;
  }
  auVar21 = func_0x00f78e5c();
  lVar13 = auVar21._0_8_;
  puStack_28 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__Init;
  uVar8 = 0x3d21db0;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4af3 & 1) == 0) {
    func_0x00f78a20(0x3d21db0);
    bRam0000000003eb4af3 = 1;
  }
  lVar12 = param_3;
  /*Atlas.Gameplay.Usables.ProjectileUsable$$Init*/ func_0x014cd314(lVar13,auVar21._8_8_,param_3,param_4,param_5,0);
  lVar6 = func_0x00f78aec(/*Atlas.Gameplay.Usables.HomingProjectileLogic_TypeInfo*/ uRam0000000003d21db0);
  Atlas_Gameplay_Usables_HomingProjectileLogic___ctor(lVar6,0);
  *(long *)(lVar13 + 0x1a0) = lVar6;
  if (lVar6 != 0) {
    Atlas_Gameplay_Usables_HomingProjectileLogic__Init(lVar6,param_3,0);
    *(undefined1 *)(lVar13 + 0x12d) = 0;
    return;
  }
  lVar6 = func_0x00f78af4();
  plVar10 = &lStack_90;
  puStack_78 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__DeInit;
  pppuVar17 = &ppuStack_80;
  uVar14 = 0;
  lStack_90 = param_3;
  ppuStack_80 = &puStack_30;
  if (*(char *)(lVar6 + 0x19) != '\0') {
    puVar19 = &UNK_014bbdf0;
    plVar10 = &lStack_90;
    lVar13 = lVar6;
code_r0x014bbe30:
    while( true ) {
      auVar22._8_8_ = uVar8;
      auVar22._0_8_ = lVar13;
      lStack_88 = auVar21._0_8_;
      puVar2 = (undefined1 *)((long)plVar10 + -0x20);
      *(long *)((long)plVar10 + -0x20) = param_3;
      *(long *)((long)plVar10 + -0x18) = lVar6;
      *(undefined1 ****)((long)plVar10 + -0x10) = pppuVar17;
      *(undefined **)((long)plVar10 + -8) = puVar19;
      puVar18 = (undefined1 *)((long)plVar10 + -0x10);
      lVar6 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingBehaviour();
      if (lVar6 == 0) {
        auVar22 = func_0x00f78af4();
        lVar6 = auVar22._0_8_;
        puVar3 = (undefined1 *)((long)plVar10 + -0xe0);
        puVar2 = (undefined1 *)((long)plVar10 + -0xe0);
        *(undefined8 *)((long)plVar10 + -0x80) = unaff_d9;
        *(undefined8 *)((long)plVar10 + -0x78) = unaff_d8;
        *(undefined8 *)((long)plVar10 + -0x70) = unaff_x26;
        *(undefined8 *)((long)plVar10 + -0x68) = 0x3eb4000;
        *(undefined8 *)((long)plVar10 + -0x60) = uVar8;
        *(long *)((long)plVar10 + -0x58) = auVar21._8_8_;
        *(undefined8 *)((long)plVar10 + -0x50) = param_4;
        *(undefined8 *)((long)plVar10 + -0x48) = uVar14;
        *(long *)((long)plVar10 + -0x40) = param_3;
        *(long *)((long)plVar10 + -0x38) = lVar13;
        *(undefined1 **)((long)plVar10 + -0x30) = puVar18;
        *(undefined **)((long)plVar10 + -0x28) =
             &Atlas_Gameplay_Usables_PlacementHomingProjectile__OnExitPool;
        puVar18 = (undefined1 *)((long)plVar10 + -0x30);
        param_3 = 0;
        uVar14 = 0;
        param_4 = 0;
        if ((bRam0000000003eb4af4 & 1) == 0) {
          func_0x00f78a20(0x3d20560);
          func_0x00f78a20(0x3d41598);
          func_0x00f78a20(0x3d1eaf8);
          func_0x00f78a20(0x3d416c0);
          bRam0000000003eb4af4 = 1;
        }
        lVar13 = lVar12;
        /*Atlas.Gameplay.Usables.ProjectileUsable$$OnExitPool*/ func_0x014cd5f8(lVar6,auVar22._8_8_,lVar12,0,0,0,0);
        if ((*(long *)(lVar6 + 0xf8) != 0) &&
           (lVar7 = *(long *)(*(long *)(lVar6 + 0xf8) + 0x18), lVar7 != 0)) {
          uVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar7,0);
          *(undefined8 *)(lVar6 + 0x100) = uVar8;
          *(undefined4 *)(lVar6 + 0x218) = 0x3e99999a;
          lVar7 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingBehaviour
                            (lVar6);
          if ((lVar7 != 0) &&
             ((*(long *)(lVar7 + 0x28) != 0 &&
              (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar7 + 0x28),0), lVar7 != 0)))) {
            uVar11 = 1;
            puVar19 = &UNK_014bbfb0;
            goto code_r0x0322ef1c;
          }
        }
        func_0x00f78af4();
        puVar19 = &Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__ResetAnimState;
        lVar6 = func_0x00f78e5c();
        lVar16 = lVar12;
      }
      else {
        puVar19 = &UNK_014bbe4c;
        lVar13 = lVar12;
        lVar16 = auVar21._8_8_;
      }
      uVar8 = auVar22._8_8_;
      *(undefined8 *)(puVar2 + -0x30) = param_4;
      *(undefined8 *)(puVar2 + -0x28) = uVar14;
      *(long *)(puVar2 + -0x20) = param_3;
      *(long *)(puVar2 + -0x18) = auVar22._0_8_;
      *(undefined1 **)(puVar2 + -0x10) = puVar18;
      *(undefined **)(puVar2 + -8) = puVar19;
      uVar14 = 0x3d23c70;
      lVar12 = lVar13;
      if ((bRam0000000003eb4afd & 1) == 0) {
        func_0x00f78a20(0x3d23c70);
        bRam0000000003eb4afd = 1;
        lVar12 = lVar13;
      }
      param_3 = *(long *)(lVar6 + 0x70);
      if (((*(ushort *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (param_3 != 0) {
        lVar12 = 0;
        /*UnityEngine.Animator$$SetBool*/ func_0x0320d43c(param_3,**(undefined4 **)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8),0,0);
        if (*(long *)(lVar6 + 0x70) != 0) {
          lVar12 = 0;
          /*UnityEngine.Animator$$SetBool*/ func_0x0320d43c(*(long *)(lVar6 + 0x70),
                          *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 0xc),0,0);
          if (*(long *)(lVar6 + 0x70) != 0) {
            lVar12 = 0;
            /*UnityEngine.Animator$$SetBool*/ func_0x0320d43c(*(long *)(lVar6 + 0x70),
                            *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 0x10),0,0);
            lVar13 = *(long *)(lVar6 + 0x70);
            if (lVar13 != 0) {
              uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 8);
              *(undefined8 *)(puVar2 + -0x40) = unaff_d9;
              *(undefined8 *)(puVar2 + -0x38) = unaff_d8;
              *(undefined8 *)(puVar2 + -0x30) = *(undefined8 *)(puVar2 + -0x30);
              *(undefined8 *)(puVar2 + -0x28) = *(undefined8 *)(puVar2 + -0x28);
              *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
              *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
              *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
              *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
              if (pcRam0000000003ebe400 == (code *)0x0) {
                pcRam0000000003ebe400 =
                     (code *)func_0x00f789d4(
                                            "UnityEngine.Animator::SetFloatID(System.Int32,System.Single)"
                                            );
              }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000003ebe400)(0,lVar13,uVar1);
              return;
            }
          }
        }
      }
      auVar21 = func_0x00f78af4();
      uVar11 = auVar21._8_8_;
      *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x38) =
           &Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__SetInFlightVFXActive;
      lVar7 = *(long *)(auVar21._0_8_ + 0x78);
      if (lVar7 != 0) break;
      lVar13 = func_0x00f78af4();
      auVar21._8_8_ = lVar16;
      auVar21._0_8_ = lStack_88;
      plVar10 = (long *)(puVar2 + -0x60);
      *(long *)(puVar2 + -0x60) = param_3;
      *(long *)(puVar2 + -0x58) = lVar6;
      *(undefined1 **)(puVar2 + -0x50) = puVar2 + -0x40;
      *(undefined **)(puVar2 + -0x48) =
           &Atlas_Gameplay_Usables_PlacementHomingProjectile__OnEnterPool;
      pppuVar17 = (undefined1 ***)(puVar2 + -0x50);
      puVar19 = &UNK_014bc49c;
      lVar6 = lVar13;
    }
    puVar3 = puVar2 + -0x30;
    puVar18 = *(undefined1 **)(puVar2 + -0x40);
    puVar19 = *(undefined **)(puVar2 + -0x38);
code_r0x0322ef1c:
    *(undefined8 *)(puVar3 + -0x30) = param_4;
    *(undefined8 *)(puVar3 + -0x28) = uVar14;
    *(long *)(puVar3 + -0x20) = param_3;
    *(long *)(puVar3 + -0x18) = lVar6;
    *(undefined1 **)(puVar3 + -0x10) = puVar18;
    *(undefined **)(puVar3 + -8) = puVar19;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf4c0)(lVar7,uVar11);
    return;
  }
  lStack_88 = lVar13;
  if (*(long *)(lVar6 + 0x1a0) == 0) {
    puVar19 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__OnTearDownParamsInternal;
    lVar13 = func_0x00f78af4();
    auVar21._8_8_ = auVar21._8_8_;
    auVar21._0_8_ = lStack_88;
    goto code_r0x014bbe30;
  }
  Atlas_Gameplay_Usables_HomingProjectileLogic__DeInit(*(long *)(lVar6 + 0x1a0),0);
  *(undefined8 *)(lVar6 + 0x1a0) = 0;
  if (*(long *)(lVar6 + 0x228) != 0) {
    /*Atlas.Audio.WeaponAudio$$DeInit*/ func_0x01530270(*(long *)(lVar6 + 0x228),0);
  }
  *(undefined8 *)(lVar6 + 0x228) = 0;
  if (*(char *)(lVar6 + 0x19) != '\0') {
    /*Atlas.Gameplay.Usables.ProjectileUsable$$OnTearDownParamsInternal*/ func_0x014cd4e4(lVar6,0);
  }
  *(undefined8 *)(lVar6 + 0xf8) = 0;
  *(undefined4 *)(lVar6 + 0x150) = 0;
  if (*(char *)(lVar6 + 0x19) != '\0') {
    Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(lVar6,0);
  }
  pppuStack_a0 = &ppuStack_80;
  if (*(char *)(lVar6 + 0x19) == '\0') {
    *(undefined8 *)(lVar6 + 0x10) = 0;
    *(undefined8 *)(lVar6 + 0x20) = 0;
    *(undefined8 *)(lVar6 + 0x58) = 0;
    *(undefined8 *)(lVar6 + 0x38) = 0;
    return;
  }
  lStack_b0 = lStack_90;
  puStack_98 = &UNK_01523874;
  lStack_a8 = lVar6;
  if ((bRam0000000003eb4e50 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003eb4e50 = 1;
  }
  if ((*(long *)(lVar6 + 0x48) != 0) &&
     (lVar13 = *(long *)(*(long *)(lVar6 + 0x48) + 0x28), lVar13 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(lVar6 + 100),*(undefined4 *)(lVar6 + 0x68),
                    *(undefined4 *)(lVar6 + 0x6c),lVar13,0);
    if ((*(long *)(lVar6 + 0x48) != 0) &&
       (lVar13 = *(long *)(*(long *)(lVar6 + 0x48) + 0x28), lVar13 != 0)) {
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(lVar6 + 0x70),*(undefined4 *)(lVar6 + 0x74),
                      *(undefined4 *)(lVar6 + 0x78),*(undefined4 *)(lVar6 + 0x7c),lVar13,0);
      if ((*(long *)(lVar6 + 0x48) != 0) &&
         (lVar13 = *(long *)(*(long *)(lVar6 + 0x48) + 0x28), lVar13 != 0)) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(lVar6 + 0x80),*(undefined4 *)(lVar6 + 0x84),
                        *(undefined4 *)(lVar6 + 0x88),lVar13,0);
        *(undefined1 *)(lVar6 + 0x19) = 0;
        *(undefined8 *)(lVar6 + 0x98) = 0;
        *(undefined8 *)(lVar6 + 0x90) = 0;
        *(undefined8 *)(lVar6 + 0xa8) = 0;
        *(undefined8 *)(lVar6 + 0xa0) = 0;
        *(undefined8 *)(lVar6 + 0xb8) = 0;
        *(undefined8 *)(lVar6 + 0xb0) = 0;
        if (*(long *)(lVar6 + 0x48) != 0) {
          lVar13 = *(long *)(*(long *)(lVar6 + 0x48) + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar12 = 0;
          iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar13,0);
          if (iVar4 != 0) {
            if (lVar13 == 0) goto code_r0x015239b0;
            *(undefined2 *)(lVar13 + 0x46) = 0;
            *(undefined4 *)(lVar13 + 0x40) = 0;
            *(undefined1 *)(lVar13 + 0x44) = 0;
          }
          if (*(long *)(lVar6 + 0x48) != 0) {
            *(undefined8 *)(*(long *)(lVar6 + 0x48) + 0x40) = 0;
            *(undefined8 *)(lVar6 + 0x48) = 0;
            *(undefined1 *)(lVar6 + 0x18) = 0;
            *(undefined8 *)(lVar6 + 0x28) = 0;
            *(undefined8 *)(lVar6 + 0x30) = 0;
            *(undefined4 *)(lVar6 + 0x40) = 0xbf800000;
            *(undefined2 *)(lVar6 + 0x60) = 0;
            return;
          }
        }
      }
    }
  }
code_r0x015239b0:
  auVar21 = func_0x00f78af4();
  lVar6 = auVar21._8_8_;
  lVar13 = auVar21._0_8_;
  puStack_b8 = &Atlas_Gameplay_Usables_Usable__OnExitPool;
  pppuStack_c0 = &pppuStack_a0;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(lVar13 + 0x19) = 1;
  *(undefined8 *)(lVar13 + 0x28) = 0;
  *(long *)(lVar13 + 0x30) = lVar6;
  *(long *)(lVar13 + 0x48) = lVar12;
  *(undefined8 *)(lVar13 + 0x50) = 0;
  if ((*(long *)(lVar13 + 0x58) != 0) && (lVar6 != 0)) {
    lVar7 = *(long *)(*(long *)(lVar13 + 0x58) + 0x10);
    lVar6 = *(long *)(lVar6 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar6,0);
    if (lVar7 != 0) {
      uVar8 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar7,uVar8,uRam0000000003d572a0);
      *(undefined8 *)(lVar13 + 0x90) = uVar8;
      puVar19 = &UNK_01523aa4;
      lVar7 = lVar13;
      goto code_r0x01523ba8;
    }
  }
  puVar19 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lVar7 = func_0x00f78af4();
code_r0x01523ba8:
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  lStack_140 = lVar6;
  lStack_138 = lVar12;
  lStack_130 = lVar13;
  pppuStack_110 = &pppuStack_c0;
  puStack_108 = puVar19;
  if ((bRam0000000003eb4e51 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d334e8);
    func_0x00f78a20(0x3d334f0);
    func_0x00f78a20(0x3d334f8);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3d2e8);
    func_0x00f78a20(0x3d3d2f0);
    bRam0000000003eb4e51 = 1;
  }
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  if (*(long *)(lVar7 + 0x28) == 0) {
    return;
  }
  lVar13 = *(long *)(lVar7 + 0x90);
  if (lVar13 != 0) {
    uVar14 = *(undefined8 *)(lVar13 + 0x28);
    uVar8 = *(undefined8 *)(lVar13 + 0x20);
    uVar20 = *(undefined8 *)(lVar13 + 0x38);
    uVar11 = *(undefined8 *)(lVar13 + 0x30);
    *(undefined8 *)(lVar7 + 0xb8) = *(undefined8 *)(lVar13 + 0x40);
    *(undefined8 *)(lVar7 + 0xb0) = uVar20;
    *(undefined8 *)(lVar7 + 0xa8) = uVar11;
    *(undefined8 *)(lVar7 + 0xa0) = uVar14;
    *(undefined8 *)(lVar7 + 0x98) = uVar8;
    if (*(long *)(lVar13 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar13 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar13 = *(long *)(*(long *)(lVar7 + 0x28) + 0x28);
    if (lVar13 != 0) {
      uStack_148 = *(undefined8 *)(lVar13 + 0xc0);
      if (((*(long *)(lVar7 + 0x58) != 0) &&
          (lVar13 = *(long *)(*(long *)(lVar7 + 0x58) + 0x10), lVar13 != 0)) &&
         (lVar13 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar13,uStack_148,uRam0000000003d57270), lVar13 != 0)) {
        uStack_150 = *(undefined8 *)(lVar13 + 0x70);
        if ((*(long *)(lVar7 + 0x90) != 0) &&
           (lVar13 = *(long *)(*(long *)(lVar7 + 0x90) + 0x48), lVar13 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_190,lVar13,uRam0000000003d3d2e8);
          bVar15 = false;
          while (uVar9 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_190,uRam0000000003d334f0), uVar8 = uStack_180,
                (uVar9 & 1) != 0) {
            uStack_1b8 = uStack_170;
            uStack_1c0 = uStack_178;
            uStack_1a8 = uStack_160;
            uStack_1b0 = uStack_168;
            uStack_1a0 = uStack_158;
            uStack_1c8 = uStack_180;
            uVar14 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_1c8);
            uVar9 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_148,uVar14,0);
            if ((uVar9 & 1) != 0) {
              *(undefined8 *)(lVar7 + 0xa0) = uStack_1b8;
              *(undefined8 *)(lVar7 + 0x98) = uStack_1c0;
              *(undefined8 *)(lVar7 + 0xb0) = uStack_1a8;
              *(undefined8 *)(lVar7 + 0xa8) = uStack_1b0;
              *(undefined8 *)(lVar7 + 0xb8) = uStack_1a0;
              bVar15 = true;
            }
            uStack_1c8 = uVar8;
            uVar8 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_1c8);
            uVar5 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_150,uVar8,0);
            if (!bVar15 && ((uVar5 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(lVar7 + 0xa0) = uStack_1b8;
              *(undefined8 *)(lVar7 + 0x98) = uStack_1c0;
              *(undefined8 *)(lVar7 + 0xb0) = uStack_1a8;
              *(undefined8 *)(lVar7 + 0xa8) = uStack_1b0;
              *(undefined8 *)(lVar7 + 0xb8) = uStack_1a0;
            }
          }
          /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_190,uRam0000000003d334e8);
          return;
        }
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar10 = (long *)___cxa_begin_catch();
    lVar13 = *plVar10;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_190,uRam0000000003d334e8);
    if (lVar13 == 0) {
      return;
    }
    func_0x00f78ac0(lVar13,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x14bbd14 | Atlas.Gameplay.Usables.PlacementHomingProjectile.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x014bbdec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01523870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bbe48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bbe68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bbfac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bbfbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bbfdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bc498: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01523aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014bc49c) */
/* WARNING: Removing unreachable block (ram,0x014cd6ec) */
/* WARNING: Removing unreachable block (ram,0x01570398) */
/* WARNING: Removing unreachable block (ram,0x01523e04) */
/* WARNING: Removing unreachable block (ram,0x014bbfe0) */
/* WARNING: Removing unreachable block (ram,0x014bbff0) */
/* WARNING: Removing unreachable block (ram,0x014bc00c) */
/* WARNING: Removing unreachable block (ram,0x014bc02c) */
/* WARNING: Removing unreachable block (ram,0x014bc064) */
/* WARNING: Removing unreachable block (ram,0x014bc084) */
/* WARNING: Removing unreachable block (ram,0x014bc0ac) */
/* WARNING: Removing unreachable block (ram,0x014bc0cc) */
/* WARNING: Removing unreachable block (ram,0x014bc0d4) */
/* WARNING: Removing unreachable block (ram,0x014bc0f4) */
/* WARNING: Removing unreachable block (ram,0x014bc108) */
/* WARNING: Removing unreachable block (ram,0x014bc124) */
/* WARNING: Removing unreachable block (ram,0x014bc12c) */
/* WARNING: Removing unreachable block (ram,0x014bc144) */
/* WARNING: Removing unreachable block (ram,0x014bc158) */
/* WARNING: Removing unreachable block (ram,0x014bc170) */
/* WARNING: Removing unreachable block (ram,0x014bc19c) */
/* WARNING: Removing unreachable block (ram,0x014bc1b0) */
/* WARNING: Removing unreachable block (ram,0x014bc1e4) */
/* WARNING: Removing unreachable block (ram,0x014bc214) */
/* WARNING: Removing unreachable block (ram,0x014bc21c) */
/* WARNING: Removing unreachable block (ram,0x014bc224) */
/* WARNING: Removing unreachable block (ram,0x014bc22c) */
/* WARNING: Removing unreachable block (ram,0x014bc244) */
/* WARNING: Removing unreachable block (ram,0x014bc274) */
/* WARNING: Removing unreachable block (ram,0x014bc2c0) */
/* WARNING: Removing unreachable block (ram,0x014bc2f0) */
/* WARNING: Removing unreachable block (ram,0x014bc31c) */
/* WARNING: Removing unreachable block (ram,0x014bc344) */
/* WARNING: Removing unreachable block (ram,0x014bbfc0) */
/* WARNING: Removing unreachable block (ram,0x014bbfcc) */
/* WARNING: Removing unreachable block (ram,0x014bbfd4) */
/* WARNING: Removing unreachable block (ram,0x014bbfb0) */
/* WARNING: Removing unreachable block (ram,0x014bbfbc) */
/* WARNING: Removing unreachable block (ram,0x014bbe6c) */
/* WARNING: Removing unreachable block (ram,0x014bbe74) */
/* WARNING: Removing unreachable block (ram,0x014bbe4c) */
/* WARNING: Removing unreachable block (ram,0x014bbe58) */
/* WARNING: Removing unreachable block (ram,0x014bbe60) */
/* WARNING: Removing unreachable block (ram,0x01523aa4) */
/* WARNING: Removing unreachable block (ram,0x01523aa8) */
/* WARNING: Removing unreachable block (ram,0x01523ab0) */
/* WARNING: Removing unreachable block (ram,0x01523ac8) */
/* WARNING: Removing unreachable block (ram,0x01523ae0) */
/* WARNING: Removing unreachable block (ram,0x01523afc) */
/* WARNING: Removing unreachable block (ram,0x01523b08) */
/* WARNING: Removing unreachable block (ram,0x01523b28) */
/* WARNING: Removing unreachable block (ram,0x01523b40) */
/* WARNING: Removing unreachable block (ram,0x01523b48) */
/* WARNING: Removing unreachable block (ram,0x01523b4c) */
/* WARNING: Removing unreachable block (ram,0x01523b60) */
/* WARNING: Removing unreachable block (ram,0x01523b64) */
/* WARNING: Removing unreachable block (ram,0x01523b6c) */
/* WARNING: Removing unreachable block (ram,0x01523b70) */
/* WARNING: Removing unreachable block (ram,0x01523b8c) */

void Atlas_Gameplay_Usables_PlacementHomingProjectile__Init
               (long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  int extraout_w1;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  bool bVar15;
  undefined8 unaff_x26;
  undefined1 **ppuVar16;
  undefined1 *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar20 [16];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  uVar9 = 0x3d21db0;
  if ((bRam0000000003eb4af3 & 1) == 0) {
    func_0x00f78a20(0x3d21db0);
    bRam0000000003eb4af3 = 1;
  }
  lVar13 = param_3;
  /*Atlas.Gameplay.Usables.ProjectileUsable$$Init*/ func_0x014cd314(param_1,param_2,param_3,param_4,param_5,0);
  lVar6 = func_0x00f78aec(/*Atlas.Gameplay.Usables.HomingProjectileLogic_TypeInfo*/ uRam0000000003d21db0);
  Atlas_Gameplay_Usables_HomingProjectileLogic___ctor(lVar6,0);
  *(long *)(param_1 + 0x1a0) = lVar6;
  if (lVar6 != 0) {
    Atlas_Gameplay_Usables_HomingProjectileLogic__Init(lVar6,param_3,0);
    *(undefined1 *)(param_1 + 0x12d) = 0;
    return;
  }
  lVar6 = func_0x00f78af4();
  plVar11 = &lStack_70;
  puStack_58 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__DeInit;
  ppuVar16 = &puStack_60;
  uVar14 = 0;
  lStack_70 = param_3;
  lStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  if (*(char *)(lVar6 + 0x19) != '\0') {
    puVar18 = &UNK_014bbdf0;
    plVar11 = &lStack_70;
    lVar7 = lVar6;
code_r0x014bbe30:
    while( true ) {
      auVar20._8_8_ = uVar9;
      auVar20._0_8_ = lVar7;
      puVar2 = (undefined1 *)((long)plVar11 + -0x20);
      *(long *)((long)plVar11 + -0x20) = param_3;
      *(long *)((long)plVar11 + -0x18) = lVar6;
      *(undefined1 ***)((long)plVar11 + -0x10) = ppuVar16;
      *(undefined **)((long)plVar11 + -8) = puVar18;
      puVar17 = (undefined1 *)((long)plVar11 + -0x10);
      lVar6 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingBehaviour();
      if (lVar6 == 0) {
        auVar20 = func_0x00f78af4();
        lVar6 = auVar20._0_8_;
        puVar3 = (undefined1 *)((long)plVar11 + -0xe0);
        puVar2 = (undefined1 *)((long)plVar11 + -0xe0);
        *(undefined8 *)((long)plVar11 + -0x80) = unaff_d9;
        *(undefined8 *)((long)plVar11 + -0x78) = unaff_d8;
        *(undefined8 *)((long)plVar11 + -0x70) = unaff_x26;
        *(undefined8 *)((long)plVar11 + -0x68) = 0x3eb4000;
        *(undefined8 *)((long)plVar11 + -0x60) = uVar9;
        *(long *)((long)plVar11 + -0x58) = param_2;
        *(undefined8 *)((long)plVar11 + -0x50) = param_4;
        *(undefined8 *)((long)plVar11 + -0x48) = uVar14;
        *(long *)((long)plVar11 + -0x40) = param_3;
        *(long *)((long)plVar11 + -0x38) = lVar7;
        *(undefined1 **)((long)plVar11 + -0x30) = puVar17;
        *(undefined **)((long)plVar11 + -0x28) =
             &Atlas_Gameplay_Usables_PlacementHomingProjectile__OnExitPool;
        puVar17 = (undefined1 *)((long)plVar11 + -0x30);
        param_3 = 0;
        uVar14 = 0;
        param_4 = 0;
        if ((bRam0000000003eb4af4 & 1) == 0) {
          func_0x00f78a20(0x3d20560);
          func_0x00f78a20(0x3d41598);
          func_0x00f78a20(0x3d1eaf8);
          func_0x00f78a20(0x3d416c0);
          bRam0000000003eb4af4 = 1;
        }
        lVar7 = lVar13;
        /*Atlas.Gameplay.Usables.ProjectileUsable$$OnExitPool*/ func_0x014cd5f8(lVar6,auVar20._8_8_,lVar13,0,0,0,0);
        if ((*(long *)(lVar6 + 0xf8) != 0) &&
           (lVar8 = *(long *)(*(long *)(lVar6 + 0xf8) + 0x18), lVar8 != 0)) {
          uVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar8,0);
          *(undefined8 *)(lVar6 + 0x100) = uVar9;
          *(undefined4 *)(lVar6 + 0x218) = 0x3e99999a;
          lVar8 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingBehaviour
                            (lVar6);
          if ((lVar8 != 0) &&
             ((*(long *)(lVar8 + 0x28) != 0 &&
              (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar8 + 0x28),0), lVar8 != 0)))) {
            uVar12 = 1;
            puVar18 = &UNK_014bbfb0;
            goto code_r0x0322ef1c;
          }
        }
        func_0x00f78af4();
        puVar18 = &Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__ResetAnimState;
        lVar6 = func_0x00f78e5c();
        param_2 = lVar13;
      }
      else {
        puVar18 = &UNK_014bbe4c;
        lVar7 = lVar13;
      }
      uVar9 = auVar20._8_8_;
      *(undefined8 *)(puVar2 + -0x30) = param_4;
      *(undefined8 *)(puVar2 + -0x28) = uVar14;
      *(long *)(puVar2 + -0x20) = param_3;
      *(long *)(puVar2 + -0x18) = auVar20._0_8_;
      *(undefined1 **)(puVar2 + -0x10) = puVar17;
      *(undefined **)(puVar2 + -8) = puVar18;
      uVar14 = 0x3d23c70;
      lVar13 = lVar7;
      if ((bRam0000000003eb4afd & 1) == 0) {
        func_0x00f78a20(0x3d23c70);
        bRam0000000003eb4afd = 1;
        lVar13 = lVar7;
      }
      param_3 = *(long *)(lVar6 + 0x70);
      if (((*(ushort *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (param_3 != 0) {
        lVar13 = 0;
        /*UnityEngine.Animator$$SetBool*/ func_0x0320d43c(param_3,**(undefined4 **)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8),0,0);
        if (*(long *)(lVar6 + 0x70) != 0) {
          lVar13 = 0;
          /*UnityEngine.Animator$$SetBool*/ func_0x0320d43c(*(long *)(lVar6 + 0x70),
                          *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 0xc),0,0);
          if (*(long *)(lVar6 + 0x70) != 0) {
            lVar13 = 0;
            /*UnityEngine.Animator$$SetBool*/ func_0x0320d43c(*(long *)(lVar6 + 0x70),
                            *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 0x10),0,0);
            lVar7 = *(long *)(lVar6 + 0x70);
            if (lVar7 != 0) {
              uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 8);
              *(undefined8 *)(puVar2 + -0x40) = unaff_d9;
              *(undefined8 *)(puVar2 + -0x38) = unaff_d8;
              *(undefined8 *)(puVar2 + -0x30) = *(undefined8 *)(puVar2 + -0x30);
              *(undefined8 *)(puVar2 + -0x28) = *(undefined8 *)(puVar2 + -0x28);
              *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
              *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
              *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
              *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
              if (pcRam0000000003ebe400 == (code *)0x0) {
                pcRam0000000003ebe400 =
                     (code *)func_0x00f789d4(
                                            "UnityEngine.Animator::SetFloatID(System.Int32,System.Single)"
                                            );
              }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000003ebe400)(0,lVar7,uVar1);
              return;
            }
          }
        }
      }
      auVar20 = func_0x00f78af4();
      uVar12 = auVar20._8_8_;
      *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x38) =
           &Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__SetInFlightVFXActive;
      lVar8 = *(long *)(auVar20._0_8_ + 0x78);
      if (lVar8 != 0) break;
      lVar7 = func_0x00f78af4();
      plVar11 = (long *)(puVar2 + -0x60);
      *(long *)(puVar2 + -0x60) = param_3;
      *(long *)(puVar2 + -0x58) = lVar6;
      *(undefined1 **)(puVar2 + -0x50) = puVar2 + -0x40;
      *(undefined **)(puVar2 + -0x48) =
           &Atlas_Gameplay_Usables_PlacementHomingProjectile__OnEnterPool;
      ppuVar16 = (undefined1 **)(puVar2 + -0x50);
      puVar18 = &UNK_014bc49c;
      lVar6 = lVar7;
    }
    puVar3 = puVar2 + -0x30;
    puVar17 = *(undefined1 **)(puVar2 + -0x40);
    puVar18 = *(undefined **)(puVar2 + -0x38);
code_r0x0322ef1c:
    *(undefined8 *)(puVar3 + -0x30) = param_4;
    *(undefined8 *)(puVar3 + -0x28) = uVar14;
    *(long *)(puVar3 + -0x20) = param_3;
    *(long *)(puVar3 + -0x18) = lVar6;
    *(undefined1 **)(puVar3 + -0x10) = puVar17;
    *(undefined **)(puVar3 + -8) = puVar18;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf4c0)(lVar8,uVar12);
    return;
  }
  if (*(long *)(lVar6 + 0x1a0) == 0) {
    puVar18 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__OnTearDownParamsInternal;
    lVar7 = func_0x00f78af4();
    goto code_r0x014bbe30;
  }
  Atlas_Gameplay_Usables_HomingProjectileLogic__DeInit(*(long *)(lVar6 + 0x1a0),0);
  *(undefined8 *)(lVar6 + 0x1a0) = 0;
  if (*(long *)(lVar6 + 0x228) != 0) {
    /*Atlas.Audio.WeaponAudio$$DeInit*/ func_0x01530270(*(long *)(lVar6 + 0x228),0);
  }
  *(undefined8 *)(lVar6 + 0x228) = 0;
  if (*(char *)(lVar6 + 0x19) != '\0') {
    /*Atlas.Gameplay.Usables.ProjectileUsable$$OnTearDownParamsInternal*/ func_0x014cd4e4(lVar6,0);
  }
  *(undefined8 *)(lVar6 + 0xf8) = 0;
  *(undefined4 *)(lVar6 + 0x150) = 0;
  if (*(char *)(lVar6 + 0x19) != '\0') {
    Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(lVar6,0);
  }
  ppuStack_80 = &puStack_60;
  if (*(char *)(lVar6 + 0x19) == '\0') {
    *(undefined8 *)(lVar6 + 0x10) = 0;
    *(undefined8 *)(lVar6 + 0x20) = 0;
    *(undefined8 *)(lVar6 + 0x58) = 0;
    *(undefined8 *)(lVar6 + 0x38) = 0;
    return;
  }
  lStack_90 = lStack_70;
  puStack_78 = &UNK_01523874;
  lStack_88 = lVar6;
  if ((bRam0000000003eb4e50 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003eb4e50 = 1;
  }
  if ((*(long *)(lVar6 + 0x48) != 0) &&
     (lVar7 = *(long *)(*(long *)(lVar6 + 0x48) + 0x28), lVar7 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(lVar6 + 100),*(undefined4 *)(lVar6 + 0x68),
                    *(undefined4 *)(lVar6 + 0x6c),lVar7,0);
    if ((*(long *)(lVar6 + 0x48) != 0) &&
       (lVar7 = *(long *)(*(long *)(lVar6 + 0x48) + 0x28), lVar7 != 0)) {
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(lVar6 + 0x70),*(undefined4 *)(lVar6 + 0x74),
                      *(undefined4 *)(lVar6 + 0x78),*(undefined4 *)(lVar6 + 0x7c),lVar7,0);
      if ((*(long *)(lVar6 + 0x48) != 0) &&
         (lVar7 = *(long *)(*(long *)(lVar6 + 0x48) + 0x28), lVar7 != 0)) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(lVar6 + 0x80),*(undefined4 *)(lVar6 + 0x84),
                        *(undefined4 *)(lVar6 + 0x88),lVar7,0);
        *(undefined1 *)(lVar6 + 0x19) = 0;
        *(undefined8 *)(lVar6 + 0x98) = 0;
        *(undefined8 *)(lVar6 + 0x90) = 0;
        *(undefined8 *)(lVar6 + 0xa8) = 0;
        *(undefined8 *)(lVar6 + 0xa0) = 0;
        *(undefined8 *)(lVar6 + 0xb8) = 0;
        *(undefined8 *)(lVar6 + 0xb0) = 0;
        if (*(long *)(lVar6 + 0x48) != 0) {
          lVar7 = *(long *)(*(long *)(lVar6 + 0x48) + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar13 = 0;
          iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,0);
          if (iVar4 != 0) {
            if (lVar7 == 0) goto code_r0x015239b0;
            *(undefined2 *)(lVar7 + 0x46) = 0;
            *(undefined4 *)(lVar7 + 0x40) = 0;
            *(undefined1 *)(lVar7 + 0x44) = 0;
          }
          if (*(long *)(lVar6 + 0x48) != 0) {
            *(undefined8 *)(*(long *)(lVar6 + 0x48) + 0x40) = 0;
            *(undefined8 *)(lVar6 + 0x48) = 0;
            *(undefined1 *)(lVar6 + 0x18) = 0;
            *(undefined8 *)(lVar6 + 0x28) = 0;
            *(undefined8 *)(lVar6 + 0x30) = 0;
            *(undefined4 *)(lVar6 + 0x40) = 0xbf800000;
            *(undefined2 *)(lVar6 + 0x60) = 0;
            return;
          }
        }
      }
    }
  }
code_r0x015239b0:
  auVar20 = func_0x00f78af4();
  lVar7 = auVar20._8_8_;
  lVar6 = auVar20._0_8_;
  puStack_98 = &Atlas_Gameplay_Usables_Usable__OnExitPool;
  pppuStack_a0 = &ppuStack_80;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(lVar6 + 0x19) = 1;
  *(undefined8 *)(lVar6 + 0x28) = 0;
  *(long *)(lVar6 + 0x30) = lVar7;
  *(long *)(lVar6 + 0x48) = lVar13;
  *(undefined8 *)(lVar6 + 0x50) = 0;
  if ((*(long *)(lVar6 + 0x58) != 0) && (lVar7 != 0)) {
    lVar8 = *(long *)(*(long *)(lVar6 + 0x58) + 0x10);
    lVar7 = *(long *)(lVar7 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar9 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar7,0);
    if (lVar8 != 0) {
      uVar9 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar8,uVar9,uRam0000000003d572a0);
      *(undefined8 *)(lVar6 + 0x90) = uVar9;
      puVar18 = &UNK_01523aa4;
      lVar8 = lVar6;
      goto code_r0x01523ba8;
    }
  }
  puVar18 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lVar8 = func_0x00f78af4();
code_r0x01523ba8:
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  lStack_120 = lVar7;
  lStack_118 = lVar13;
  lStack_110 = lVar6;
  pppuStack_f0 = &pppuStack_a0;
  puStack_e8 = puVar18;
  if ((bRam0000000003eb4e51 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d334e8);
    func_0x00f78a20(0x3d334f0);
    func_0x00f78a20(0x3d334f8);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3d2e8);
    func_0x00f78a20(0x3d3d2f0);
    bRam0000000003eb4e51 = 1;
  }
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  if (*(long *)(lVar8 + 0x28) == 0) {
    return;
  }
  lVar13 = *(long *)(lVar8 + 0x90);
  if (lVar13 != 0) {
    uVar14 = *(undefined8 *)(lVar13 + 0x28);
    uVar9 = *(undefined8 *)(lVar13 + 0x20);
    uVar19 = *(undefined8 *)(lVar13 + 0x38);
    uVar12 = *(undefined8 *)(lVar13 + 0x30);
    *(undefined8 *)(lVar8 + 0xb8) = *(undefined8 *)(lVar13 + 0x40);
    *(undefined8 *)(lVar8 + 0xb0) = uVar19;
    *(undefined8 *)(lVar8 + 0xa8) = uVar12;
    *(undefined8 *)(lVar8 + 0xa0) = uVar14;
    *(undefined8 *)(lVar8 + 0x98) = uVar9;
    if (*(long *)(lVar13 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar13 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar13 = *(long *)(*(long *)(lVar8 + 0x28) + 0x28);
    if (lVar13 != 0) {
      uStack_128 = *(undefined8 *)(lVar13 + 0xc0);
      if (((*(long *)(lVar8 + 0x58) != 0) &&
          (lVar13 = *(long *)(*(long *)(lVar8 + 0x58) + 0x10), lVar13 != 0)) &&
         (lVar13 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar13,uStack_128,uRam0000000003d57270), lVar13 != 0)) {
        uStack_130 = *(undefined8 *)(lVar13 + 0x70);
        if ((*(long *)(lVar8 + 0x90) != 0) &&
           (lVar13 = *(long *)(*(long *)(lVar8 + 0x90) + 0x48), lVar13 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_170,lVar13,uRam0000000003d3d2e8);
          bVar15 = false;
          while (uVar10 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_170,uRam0000000003d334f0), uVar9 = uStack_160,
                (uVar10 & 1) != 0) {
            uStack_198 = uStack_150;
            uStack_1a0 = uStack_158;
            uStack_188 = uStack_140;
            uStack_190 = uStack_148;
            uStack_180 = uStack_138;
            uStack_1a8 = uStack_160;
            uVar14 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_1a8);
            uVar10 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_128,uVar14,0);
            if ((uVar10 & 1) != 0) {
              *(undefined8 *)(lVar8 + 0xa0) = uStack_198;
              *(undefined8 *)(lVar8 + 0x98) = uStack_1a0;
              *(undefined8 *)(lVar8 + 0xb0) = uStack_188;
              *(undefined8 *)(lVar8 + 0xa8) = uStack_190;
              *(undefined8 *)(lVar8 + 0xb8) = uStack_180;
              bVar15 = true;
            }
            uStack_1a8 = uVar9;
            uVar9 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_1a8);
            uVar5 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_130,uVar9,0);
            if (!bVar15 && ((uVar5 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(lVar8 + 0xa0) = uStack_198;
              *(undefined8 *)(lVar8 + 0x98) = uStack_1a0;
              *(undefined8 *)(lVar8 + 0xb0) = uStack_188;
              *(undefined8 *)(lVar8 + 0xa8) = uStack_190;
              *(undefined8 *)(lVar8 + 0xb8) = uStack_180;
            }
          }
          /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_170,uRam0000000003d334e8);
          return;
        }
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar11 = (long *)___cxa_begin_catch();
    lVar13 = *plVar11;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_170,uRam0000000003d334e8);
    if (lVar13 == 0) {
      return;
    }
    func_0x00f78ac0(lVar13,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x14bbdd0 | Atlas.Gameplay.Usables.PlacementHomingProjectile.DeInit
// ============================================================

/* WARNING: Possible PIC construction at 0x014bbdec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01523870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bbe48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bbe68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bbfac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bbfbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bbfdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bc498: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01523aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014bc49c) */
/* WARNING: Removing unreachable block (ram,0x014cd6ec) */
/* WARNING: Removing unreachable block (ram,0x01570398) */
/* WARNING: Removing unreachable block (ram,0x01523e04) */
/* WARNING: Removing unreachable block (ram,0x014bbfe0) */
/* WARNING: Removing unreachable block (ram,0x014bbff0) */
/* WARNING: Removing unreachable block (ram,0x014bc00c) */
/* WARNING: Removing unreachable block (ram,0x014bc02c) */
/* WARNING: Removing unreachable block (ram,0x014bc064) */
/* WARNING: Removing unreachable block (ram,0x014bc084) */
/* WARNING: Removing unreachable block (ram,0x014bc0ac) */
/* WARNING: Removing unreachable block (ram,0x014bc0cc) */
/* WARNING: Removing unreachable block (ram,0x014bc0d4) */
/* WARNING: Removing unreachable block (ram,0x014bc0f4) */
/* WARNING: Removing unreachable block (ram,0x014bc108) */
/* WARNING: Removing unreachable block (ram,0x014bc124) */
/* WARNING: Removing unreachable block (ram,0x014bc12c) */
/* WARNING: Removing unreachable block (ram,0x014bc144) */
/* WARNING: Removing unreachable block (ram,0x014bc158) */
/* WARNING: Removing unreachable block (ram,0x014bc170) */
/* WARNING: Removing unreachable block (ram,0x014bc19c) */
/* WARNING: Removing unreachable block (ram,0x014bc1b0) */
/* WARNING: Removing unreachable block (ram,0x014bc1e4) */
/* WARNING: Removing unreachable block (ram,0x014bc214) */
/* WARNING: Removing unreachable block (ram,0x014bc21c) */
/* WARNING: Removing unreachable block (ram,0x014bc224) */
/* WARNING: Removing unreachable block (ram,0x014bc22c) */
/* WARNING: Removing unreachable block (ram,0x014bc244) */
/* WARNING: Removing unreachable block (ram,0x014bc274) */
/* WARNING: Removing unreachable block (ram,0x014bc2c0) */
/* WARNING: Removing unreachable block (ram,0x014bc2f0) */
/* WARNING: Removing unreachable block (ram,0x014bc31c) */
/* WARNING: Removing unreachable block (ram,0x014bc344) */
/* WARNING: Removing unreachable block (ram,0x014bbfc0) */
/* WARNING: Removing unreachable block (ram,0x014bbfcc) */
/* WARNING: Removing unreachable block (ram,0x014bbfd4) */
/* WARNING: Removing unreachable block (ram,0x014bbfb0) */
/* WARNING: Removing unreachable block (ram,0x014bbfbc) */
/* WARNING: Removing unreachable block (ram,0x014bbe6c) */
/* WARNING: Removing unreachable block (ram,0x014bbe74) */
/* WARNING: Removing unreachable block (ram,0x014bbe4c) */
/* WARNING: Removing unreachable block (ram,0x014bbe58) */
/* WARNING: Removing unreachable block (ram,0x014bbe60) */
/* WARNING: Removing unreachable block (ram,0x01523aa4) */
/* WARNING: Removing unreachable block (ram,0x01523aa8) */
/* WARNING: Removing unreachable block (ram,0x01523ab0) */
/* WARNING: Removing unreachable block (ram,0x01523ac8) */
/* WARNING: Removing unreachable block (ram,0x01523ae0) */
/* WARNING: Removing unreachable block (ram,0x01523afc) */
/* WARNING: Removing unreachable block (ram,0x01523b08) */
/* WARNING: Removing unreachable block (ram,0x01523b28) */
/* WARNING: Removing unreachable block (ram,0x01523b40) */
/* WARNING: Removing unreachable block (ram,0x01523b48) */
/* WARNING: Removing unreachable block (ram,0x01523b4c) */
/* WARNING: Removing unreachable block (ram,0x01523b60) */
/* WARNING: Removing unreachable block (ram,0x01523b64) */
/* WARNING: Removing unreachable block (ram,0x01523b6c) */
/* WARNING: Removing unreachable block (ram,0x01523b70) */
/* WARNING: Removing unreachable block (ram,0x01523b8c) */

void Atlas_Gameplay_Usables_PlacementHomingProjectile__DeInit
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  int extraout_w1;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  bool bVar13;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long lVar14;
  undefined8 unaff_x26;
  undefined1 *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar19 [16];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  long lStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  puVar2 = &stack0xffffffffffffffe0;
  puVar15 = &stack0xfffffffffffffff0;
  if (*(char *)(param_1 + 0x19) != '\0') {
    puVar16 = (undefined *)0x14bbdf0;
    puVar2 = &stack0xffffffffffffffe0;
    lVar7 = param_1;
code_r0x014bbe30:
    while( true ) {
      auVar19._8_8_ = unaff_x24;
      auVar19._0_8_ = lVar7;
      puVar3 = puVar2 + -0x20;
      *(long *)(puVar2 + -0x20) = unaff_x20;
      *(long *)(puVar2 + -0x18) = param_1;
      *(undefined1 **)(puVar2 + -0x10) = puVar15;
      *(undefined **)(puVar2 + -8) = puVar16;
      puVar15 = puVar2 + -0x10;
      lVar8 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingBehaviour();
      if (lVar8 == 0) {
        auVar19 = func_0x00f78af4();
        lVar8 = auVar19._0_8_;
        puVar4 = puVar2 + -0xe0;
        puVar3 = puVar2 + -0xe0;
        *(undefined8 *)(puVar2 + -0x80) = unaff_d9;
        *(undefined8 *)(puVar2 + -0x78) = unaff_d8;
        *(undefined8 *)(puVar2 + -0x70) = unaff_x26;
        *(undefined8 *)(puVar2 + -0x68) = unaff_x25;
        *(undefined8 *)(puVar2 + -0x60) = unaff_x24;
        *(undefined8 *)(puVar2 + -0x58) = unaff_x23;
        *(undefined8 *)(puVar2 + -0x50) = unaff_x22;
        *(undefined8 *)(puVar2 + -0x48) = unaff_x21;
        *(long *)(puVar2 + -0x40) = unaff_x20;
        *(long *)(puVar2 + -0x38) = lVar7;
        *(undefined1 **)(puVar2 + -0x30) = puVar15;
        *(undefined **)(puVar2 + -0x28) =
             &Atlas_Gameplay_Usables_PlacementHomingProjectile__OnExitPool;
        puVar15 = puVar2 + -0x30;
        unaff_x20 = 0;
        unaff_x21 = 0;
        unaff_x22 = 0;
        unaff_x25 = 0x3eb4000;
        if ((bRam0000000003eb4af4 & 1) == 0) {
          func_0x00f78a20(0x3d20560);
          func_0x00f78a20(0x3d41598);
          func_0x00f78a20(0x3d1eaf8);
          func_0x00f78a20(0x3d416c0);
          bRam0000000003eb4af4 = 1;
        }
        uVar12 = param_3;
        /*Atlas.Gameplay.Usables.ProjectileUsable$$OnExitPool*/ func_0x014cd5f8(lVar8,auVar19._8_8_,param_3,0,0,0,0);
        if ((*(long *)(lVar8 + 0xf8) != 0) &&
           (lVar7 = *(long *)(*(long *)(lVar8 + 0xf8) + 0x18), lVar7 != 0)) {
          uVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar7,0);
          *(undefined8 *)(lVar8 + 0x100) = uVar9;
          *(undefined4 *)(lVar8 + 0x218) = 0x3e99999a;
          lVar7 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingBehaviour
                            (lVar8);
          if ((lVar7 != 0) &&
             ((*(long *)(lVar7 + 0x28) != 0 &&
              (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar7 + 0x28),0), lVar7 != 0)))) {
            uVar12 = 1;
            puVar16 = &UNK_014bbfb0;
            goto code_r0x0322ef1c;
          }
        }
        func_0x00f78af4();
        puVar16 = &Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__ResetAnimState;
        lVar8 = func_0x00f78e5c();
        unaff_x23 = param_3;
      }
      else {
        puVar16 = &UNK_014bbe4c;
        uVar12 = param_3;
      }
      unaff_x24 = auVar19._8_8_;
      *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
      *(long *)(puVar3 + -0x20) = unaff_x20;
      *(long *)(puVar3 + -0x18) = auVar19._0_8_;
      *(undefined1 **)(puVar3 + -0x10) = puVar15;
      *(undefined **)(puVar3 + -8) = puVar16;
      unaff_x21 = 0x3d23c70;
      param_3 = uVar12;
      if ((bRam0000000003eb4afd & 1) == 0) {
        func_0x00f78a20(0x3d23c70);
        bRam0000000003eb4afd = 1;
        param_3 = uVar12;
      }
      unaff_x20 = *(long *)(lVar8 + 0x70);
      if (((*(ushort *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (unaff_x20 != 0) {
        param_3 = 0;
        /*UnityEngine.Animator$$SetBool*/ func_0x0320d43c(unaff_x20,**(undefined4 **)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8),0,0);
        if (*(long *)(lVar8 + 0x70) != 0) {
          param_3 = 0;
          /*UnityEngine.Animator$$SetBool*/ func_0x0320d43c(*(long *)(lVar8 + 0x70),
                          *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 0xc),0,0);
          if (*(long *)(lVar8 + 0x70) != 0) {
            param_3 = 0;
            /*UnityEngine.Animator$$SetBool*/ func_0x0320d43c(*(long *)(lVar8 + 0x70),
                            *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 0x10),0,0);
            lVar7 = *(long *)(lVar8 + 0x70);
            if (lVar7 != 0) {
              uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 8);
              *(undefined8 *)(puVar3 + -0x40) = unaff_d9;
              *(undefined8 *)(puVar3 + -0x38) = unaff_d8;
              *(undefined8 *)(puVar3 + -0x30) = *(undefined8 *)(puVar3 + -0x30);
              *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)(puVar3 + -0x28);
              *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
              *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
              *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
              *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
              if (pcRam0000000003ebe400 == (code *)0x0) {
                pcRam0000000003ebe400 =
                     (code *)func_0x00f789d4(
                                            "UnityEngine.Animator::SetFloatID(System.Int32,System.Single)"
                                            );
              }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000003ebe400)(0,lVar7,uVar1);
              return;
            }
          }
        }
      }
      auVar19 = func_0x00f78af4();
      uVar12 = auVar19._8_8_;
      *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
      *(undefined **)(puVar3 + -0x38) =
           &Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__SetInFlightVFXActive;
      lVar7 = *(long *)(auVar19._0_8_ + 0x78);
      if (lVar7 != 0) break;
      lVar7 = func_0x00f78af4();
      puVar2 = puVar3 + -0x60;
      *(long *)(puVar3 + -0x60) = unaff_x20;
      *(long *)(puVar3 + -0x58) = lVar8;
      *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x40;
      *(undefined **)(puVar3 + -0x48) =
           &Atlas_Gameplay_Usables_PlacementHomingProjectile__OnEnterPool;
      puVar15 = puVar3 + -0x50;
      puVar16 = &UNK_014bc49c;
      param_1 = lVar7;
    }
    puVar4 = puVar3 + -0x30;
    puVar15 = *(undefined1 **)(puVar3 + -0x40);
    puVar16 = *(undefined **)(puVar3 + -0x38);
code_r0x0322ef1c:
    *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
    *(long *)(puVar4 + -0x20) = unaff_x20;
    *(long *)(puVar4 + -0x18) = lVar8;
    *(undefined1 **)(puVar4 + -0x10) = puVar15;
    *(undefined **)(puVar4 + -8) = puVar16;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf4c0)(lVar7,uVar12);
    return;
  }
  if (*(long *)(param_1 + 0x1a0) == 0) {
    puVar16 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__OnTearDownParamsInternal;
    lVar7 = func_0x00f78af4();
    goto code_r0x014bbe30;
  }
  Atlas_Gameplay_Usables_HomingProjectileLogic__DeInit(*(long *)(param_1 + 0x1a0),0);
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  if (*(long *)(param_1 + 0x228) != 0) {
    /*Atlas.Audio.WeaponAudio$$DeInit*/ func_0x01530270(*(long *)(param_1 + 0x228),0);
  }
  *(undefined8 *)(param_1 + 0x228) = 0;
  if (*(char *)(param_1 + 0x19) != '\0') {
    /*Atlas.Gameplay.Usables.ProjectileUsable$$OnTearDownParamsInternal*/ func_0x014cd4e4(param_1,0);
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (*(char *)(param_1 + 0x19) != '\0') {
    Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(param_1,0);
  }
  puStack_30 = &stack0xfffffffffffffff0;
  if (*(char *)(param_1 + 0x19) == '\0') {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    return;
  }
  puStack_28 = &UNK_01523874;
  lStack_38 = param_1;
  if ((bRam0000000003eb4e50 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003eb4e50 = 1;
  }
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar7 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar7 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),
                    *(undefined4 *)(param_1 + 0x6c),lVar7,0);
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar7 != 0)) {
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74),
                      *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),lVar7,0);
      if ((*(long *)(param_1 + 0x48) != 0) &&
         (lVar7 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar7 != 0)) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),
                        *(undefined4 *)(param_1 + 0x88),lVar7,0);
        *(undefined1 *)(param_1 + 0x19) = 0;
        *(undefined8 *)(param_1 + 0x98) = 0;
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0xa8) = 0;
        *(undefined8 *)(param_1 + 0xa0) = 0;
        *(undefined8 *)(param_1 + 0xb8) = 0;
        *(undefined8 *)(param_1 + 0xb0) = 0;
        if (*(long *)(param_1 + 0x48) != 0) {
          lVar7 = *(long *)(*(long *)(param_1 + 0x48) + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          param_3 = 0;
          iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,0);
          if (iVar5 != 0) {
            if (lVar7 == 0) goto code_r0x015239b0;
            *(undefined2 *)(lVar7 + 0x46) = 0;
            *(undefined4 *)(lVar7 + 0x40) = 0;
            *(undefined1 *)(lVar7 + 0x44) = 0;
          }
          if (*(long *)(param_1 + 0x48) != 0) {
            *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x40) = 0;
            *(undefined8 *)(param_1 + 0x48) = 0;
            *(undefined1 *)(param_1 + 0x18) = 0;
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined8 *)(param_1 + 0x30) = 0;
            *(undefined4 *)(param_1 + 0x40) = 0xbf800000;
            *(undefined2 *)(param_1 + 0x60) = 0;
            return;
          }
        }
      }
    }
  }
code_r0x015239b0:
  auVar19 = func_0x00f78af4();
  lVar8 = auVar19._8_8_;
  lVar7 = auVar19._0_8_;
  puStack_48 = &Atlas_Gameplay_Usables_Usable__OnExitPool;
  ppuStack_50 = &puStack_30;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(lVar7 + 0x19) = 1;
  *(undefined8 *)(lVar7 + 0x28) = 0;
  *(long *)(lVar7 + 0x30) = lVar8;
  *(undefined8 *)(lVar7 + 0x48) = param_3;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  if ((*(long *)(lVar7 + 0x58) != 0) && (lVar8 != 0)) {
    lVar14 = *(long *)(*(long *)(lVar7 + 0x58) + 0x10);
    lVar8 = *(long *)(lVar8 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar12 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar8,0);
    if (lVar14 != 0) {
      uVar12 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar14,uVar12,uRam0000000003d572a0);
      *(undefined8 *)(lVar7 + 0x90) = uVar12;
      puVar16 = &UNK_01523aa4;
      lVar14 = lVar7;
      goto code_r0x01523ba8;
    }
  }
  puVar16 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lVar14 = func_0x00f78af4();
code_r0x01523ba8:
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  lStack_d0 = lVar8;
  uStack_c8 = param_3;
  lStack_c0 = lVar7;
  pppuStack_a0 = &ppuStack_50;
  puStack_98 = puVar16;
  if ((bRam0000000003eb4e51 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d334e8);
    func_0x00f78a20(0x3d334f0);
    func_0x00f78a20(0x3d334f8);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3d2e8);
    func_0x00f78a20(0x3d3d2f0);
    bRam0000000003eb4e51 = 1;
  }
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  if (*(long *)(lVar14 + 0x28) == 0) {
    return;
  }
  lVar7 = *(long *)(lVar14 + 0x90);
  if (lVar7 != 0) {
    uVar9 = *(undefined8 *)(lVar7 + 0x28);
    uVar12 = *(undefined8 *)(lVar7 + 0x20);
    uVar18 = *(undefined8 *)(lVar7 + 0x38);
    uVar17 = *(undefined8 *)(lVar7 + 0x30);
    *(undefined8 *)(lVar14 + 0xb8) = *(undefined8 *)(lVar7 + 0x40);
    *(undefined8 *)(lVar14 + 0xb0) = uVar18;
    *(undefined8 *)(lVar14 + 0xa8) = uVar17;
    *(undefined8 *)(lVar14 + 0xa0) = uVar9;
    *(undefined8 *)(lVar14 + 0x98) = uVar12;
    if (*(long *)(lVar7 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar7 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar7 = *(long *)(*(long *)(lVar14 + 0x28) + 0x28);
    if (lVar7 != 0) {
      uStack_d8 = *(undefined8 *)(lVar7 + 0xc0);
      if (((*(long *)(lVar14 + 0x58) != 0) &&
          (lVar7 = *(long *)(*(long *)(lVar14 + 0x58) + 0x10), lVar7 != 0)) &&
         (lVar7 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar7,uStack_d8,uRam0000000003d57270), lVar7 != 0)) {
        uStack_e0 = *(undefined8 *)(lVar7 + 0x70);
        if ((*(long *)(lVar14 + 0x90) != 0) &&
           (lVar7 = *(long *)(*(long *)(lVar14 + 0x90) + 0x48), lVar7 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_120,lVar7,uRam0000000003d3d2e8);
          bVar13 = false;
          while (uVar10 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_120,uRam0000000003d334f0), uVar12 = uStack_110,
                (uVar10 & 1) != 0) {
            uStack_148 = uStack_100;
            uStack_150 = uStack_108;
            uStack_138 = uStack_f0;
            uStack_140 = uStack_f8;
            uStack_130 = uStack_e8;
            uStack_158 = uStack_110;
            uVar9 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_158);
            uVar10 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_d8,uVar9,0);
            if ((uVar10 & 1) != 0) {
              *(undefined8 *)(lVar14 + 0xa0) = uStack_148;
              *(undefined8 *)(lVar14 + 0x98) = uStack_150;
              *(undefined8 *)(lVar14 + 0xb0) = uStack_138;
              *(undefined8 *)(lVar14 + 0xa8) = uStack_140;
              *(undefined8 *)(lVar14 + 0xb8) = uStack_130;
              bVar13 = true;
            }
            uStack_158 = uVar12;
            uVar12 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_158);
            uVar6 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_e0,uVar12,0);
            if (!bVar13 && ((uVar6 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(lVar14 + 0xa0) = uStack_148;
              *(undefined8 *)(lVar14 + 0x98) = uStack_150;
              *(undefined8 *)(lVar14 + 0xb0) = uStack_138;
              *(undefined8 *)(lVar14 + 0xa8) = uStack_140;
              *(undefined8 *)(lVar14 + 0xb8) = uStack_130;
            }
          }
          /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_120,uRam0000000003d334e8);
          return;
        }
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar11 = (long *)___cxa_begin_catch();
    lVar7 = *plVar11;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_120,uRam0000000003d334e8);
    if (lVar7 == 0) {
      return;
    }
    func_0x00f78ac0(lVar7,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x14bbe30 | Atlas.Gameplay.Usables.PlacementHomingProjectile.OnTearDownParamsInternal
// ============================================================

/* WARNING: Possible PIC construction at 0x014bbe48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bbe68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bbfac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bbfbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bbfdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01523aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014bbfe0) */
/* WARNING: Removing unreachable block (ram,0x014bbff0) */
/* WARNING: Removing unreachable block (ram,0x014bc00c) */
/* WARNING: Removing unreachable block (ram,0x014bc02c) */
/* WARNING: Removing unreachable block (ram,0x014bc064) */
/* WARNING: Removing unreachable block (ram,0x014bc084) */
/* WARNING: Removing unreachable block (ram,0x014bc0ac) */
/* WARNING: Removing unreachable block (ram,0x014bc0cc) */
/* WARNING: Removing unreachable block (ram,0x014bc0d4) */
/* WARNING: Removing unreachable block (ram,0x014bc0f4) */
/* WARNING: Removing unreachable block (ram,0x014bc108) */
/* WARNING: Removing unreachable block (ram,0x014bc124) */
/* WARNING: Removing unreachable block (ram,0x014bc12c) */
/* WARNING: Removing unreachable block (ram,0x014bc144) */
/* WARNING: Removing unreachable block (ram,0x014bc158) */
/* WARNING: Removing unreachable block (ram,0x014bc170) */
/* WARNING: Removing unreachable block (ram,0x014bc19c) */
/* WARNING: Removing unreachable block (ram,0x014bc1b0) */
/* WARNING: Removing unreachable block (ram,0x014bc1e4) */
/* WARNING: Removing unreachable block (ram,0x014bc214) */
/* WARNING: Removing unreachable block (ram,0x014bc21c) */
/* WARNING: Removing unreachable block (ram,0x014bc224) */
/* WARNING: Removing unreachable block (ram,0x014bc22c) */
/* WARNING: Removing unreachable block (ram,0x014bc244) */
/* WARNING: Removing unreachable block (ram,0x014bc274) */
/* WARNING: Removing unreachable block (ram,0x014bc2c0) */
/* WARNING: Removing unreachable block (ram,0x014bc2f0) */
/* WARNING: Removing unreachable block (ram,0x014bc31c) */
/* WARNING: Removing unreachable block (ram,0x014bc344) */
/* WARNING: Removing unreachable block (ram,0x014bbfc0) */
/* WARNING: Removing unreachable block (ram,0x014bbfcc) */
/* WARNING: Removing unreachable block (ram,0x014bbfd4) */
/* WARNING: Removing unreachable block (ram,0x014bbfb0) */
/* WARNING: Removing unreachable block (ram,0x014bbfbc) */
/* WARNING: Removing unreachable block (ram,0x014bbe6c) */
/* WARNING: Removing unreachable block (ram,0x014bbe74) */
/* WARNING: Removing unreachable block (ram,0x014bbe4c) */
/* WARNING: Removing unreachable block (ram,0x014bbe58) */
/* WARNING: Removing unreachable block (ram,0x014bbe60) */
/* WARNING: Removing unreachable block (ram,0x01523aa4) */
/* WARNING: Removing unreachable block (ram,0x01523aa8) */
/* WARNING: Removing unreachable block (ram,0x01523ab0) */
/* WARNING: Removing unreachable block (ram,0x01523ac8) */
/* WARNING: Removing unreachable block (ram,0x01523ae0) */
/* WARNING: Removing unreachable block (ram,0x01523afc) */
/* WARNING: Removing unreachable block (ram,0x01523b08) */
/* WARNING: Removing unreachable block (ram,0x01523b28) */
/* WARNING: Removing unreachable block (ram,0x01523b40) */
/* WARNING: Removing unreachable block (ram,0x01523b48) */
/* WARNING: Removing unreachable block (ram,0x01523b4c) */
/* WARNING: Removing unreachable block (ram,0x01523b60) */
/* WARNING: Removing unreachable block (ram,0x01523b64) */
/* WARNING: Removing unreachable block (ram,0x01523b6c) */
/* WARNING: Removing unreachable block (ram,0x01523b70) */
/* WARNING: Removing unreachable block (ram,0x01523b8c) */

void Atlas_Gameplay_Usables_PlacementHomingProjectile__OnTearDownParamsInternal
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  int extraout_w1;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  bool bVar13;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar14;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ****ppppuVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_e0 [96];
  undefined8 ***pppuStack_30;
  undefined *puStack_28;
  
  auVar19._8_8_ = unaff_x24;
  auVar19._0_8_ = param_1;
  puVar2 = &stack0xffffffffffffffe0;
  lVar6 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingBehaviour();
  if (lVar6 == 0) {
    auVar19 = func_0x00f78af4();
    lVar6 = auVar19._0_8_;
    puVar3 = auStack_e0;
    puVar2 = auStack_e0;
    puStack_28 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__OnExitPool;
    ppppuVar15 = &pppuStack_30;
    unaff_x20 = 0;
    unaff_x21 = 0;
    unaff_x22 = 0;
    unaff_x25 = 0x3eb4000;
    pppuStack_30 = (undefined8 ***)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb4af4 & 1) == 0) {
      func_0x00f78a20(0x3d20560);
      func_0x00f78a20(0x3d41598);
      func_0x00f78a20(0x3d1eaf8);
      func_0x00f78a20(0x3d416c0);
      bRam0000000003eb4af4 = 1;
    }
    uVar12 = param_3;
    /*Atlas.Gameplay.Usables.ProjectileUsable$$OnExitPool*/ func_0x014cd5f8(lVar6,auVar19._8_8_,param_3,0,0,0,0);
    if ((*(long *)(lVar6 + 0xf8) != 0) &&
       (lVar7 = *(long *)(*(long *)(lVar6 + 0xf8) + 0x18), lVar7 != 0)) {
      uVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar7,0);
      *(undefined8 *)(lVar6 + 0x100) = uVar8;
      *(undefined4 *)(lVar6 + 0x218) = 0x3e99999a;
      lVar7 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingBehaviour(lVar6);
      if ((lVar7 != 0) &&
         ((*(long *)(lVar7 + 0x28) != 0 &&
          (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar7 + 0x28),0), lVar7 != 0)))) {
        uVar8 = 1;
        puVar16 = &UNK_014bbfb0;
        goto code_r0x0322ef1c;
      }
    }
    func_0x00f78af4();
    puVar16 = &Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__ResetAnimState;
    lVar6 = func_0x00f78e5c();
  }
  else {
    puVar16 = (undefined *)0x14bbe4c;
    uVar12 = param_3;
    param_3 = unaff_x23;
    ppppuVar15 = (undefined8 ****)&stack0xfffffffffffffff0;
  }
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
  *(long *)(puVar2 + -0x20) = unaff_x20;
  *(long *)(puVar2 + -0x18) = auVar19._0_8_;
  *(undefined8 *****)(puVar2 + -0x10) = ppppuVar15;
  *(undefined **)(puVar2 + -8) = puVar16;
  unaff_x21 = 0x3d23c70;
  if ((bRam0000000003eb4afd & 1) == 0) {
    func_0x00f78a20(0x3d23c70);
    bRam0000000003eb4afd = 1;
  }
  unaff_x20 = *(long *)(lVar6 + 0x70);
  if (((*(ushort *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (unaff_x20 != 0) {
    uVar12 = 0;
    /*UnityEngine.Animator$$SetBool*/ func_0x0320d43c(unaff_x20,**(undefined4 **)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8),0,0);
    if (*(long *)(lVar6 + 0x70) != 0) {
      uVar12 = 0;
      /*UnityEngine.Animator$$SetBool*/ func_0x0320d43c(*(long *)(lVar6 + 0x70),
                      *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 0xc),0,0);
      if (*(long *)(lVar6 + 0x70) != 0) {
        uVar12 = 0;
        /*UnityEngine.Animator$$SetBool*/ func_0x0320d43c(*(long *)(lVar6 + 0x70),
                        *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 0x10),0,0);
        lVar7 = *(long *)(lVar6 + 0x70);
        if (lVar7 != 0) {
          uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 8);
          *(undefined8 *)(puVar2 + -0x40) = unaff_d9;
          *(undefined8 *)(puVar2 + -0x38) = unaff_d8;
          *(undefined8 *)(puVar2 + -0x30) = *(undefined8 *)(puVar2 + -0x30);
          *(undefined8 *)(puVar2 + -0x28) = *(undefined8 *)(puVar2 + -0x28);
          *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
          *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
          *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
          *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
          if (pcRam0000000003ebe400 == (code *)0x0) {
            pcRam0000000003ebe400 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.Animator::SetFloatID(System.Int32,System.Single)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000003ebe400)(0,lVar7,uVar1);
          return;
        }
      }
    }
  }
  auVar20 = func_0x00f78af4();
  uVar8 = auVar20._8_8_;
  *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0x38) =
       &Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__SetInFlightVFXActive;
  lVar7 = *(long *)(auVar20._0_8_ + 0x78);
  if (lVar7 != 0) {
    puVar3 = puVar2 + -0x30;
    ppppuVar15 = *(undefined8 *****)(puVar2 + -0x40);
    puVar16 = *(undefined **)(puVar2 + -0x38);
code_r0x0322ef1c:
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
    *(long *)(puVar3 + -0x20) = unaff_x20;
    *(long *)(puVar3 + -0x18) = lVar6;
    *(undefined8 *****)(puVar3 + -0x10) = ppppuVar15;
    *(undefined **)(puVar3 + -8) = puVar16;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf4c0)(lVar7,uVar8);
    return;
  }
  lVar7 = func_0x00f78af4();
  *(long *)(puVar2 + -0x60) = unaff_x20;
  *(long *)(puVar2 + -0x58) = lVar6;
  *(undefined1 **)(puVar2 + -0x50) = puVar2 + -0x40;
  *(undefined **)(puVar2 + -0x48) = &Atlas_Gameplay_Usables_PlacementHomingProjectile__OnEnterPool;
  Atlas_Gameplay_Usables_PlacementHomingProjectile__OnTearDownParamsInternal();
  *(undefined8 *)(puVar2 + -0x60) = *(undefined8 *)(puVar2 + -0x60);
  *(undefined8 *)(puVar2 + -0x58) = *(undefined8 *)(puVar2 + -0x58);
  *(undefined8 *)(puVar2 + -0x50) = *(undefined8 *)(puVar2 + -0x50);
  *(undefined8 *)(puVar2 + -0x48) = *(undefined8 *)(puVar2 + -0x48);
  /*Atlas.Gameplay.Usables.ProjectileUsable$$OnTearDownParamsInternal*/ func_0x014cd4e4(lVar7,0);
  *(undefined8 *)(puVar2 + -0x60) = *(undefined8 *)(puVar2 + -0x60);
  *(undefined8 *)(puVar2 + -0x58) = *(undefined8 *)(puVar2 + -0x58);
  *(undefined8 *)(puVar2 + -0x50) = *(undefined8 *)(puVar2 + -0x50);
  *(undefined8 *)(puVar2 + -0x48) = *(undefined8 *)(puVar2 + -0x48);
  Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(lVar7,0);
  *(undefined8 *)(puVar2 + -0x60) = *(undefined8 *)(puVar2 + -0x60);
  *(undefined8 *)(puVar2 + -0x58) = *(undefined8 *)(puVar2 + -0x58);
  *(undefined8 *)(puVar2 + -0x50) = *(undefined8 *)(puVar2 + -0x50);
  *(undefined8 *)(puVar2 + -0x48) = *(undefined8 *)(puVar2 + -0x48);
  lVar6 = 0x3eb4000;
  if ((bRam0000000003eb4e50 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003eb4e50 = 1;
  }
  if ((*(long *)(lVar7 + 0x48) != 0) &&
     (lVar9 = *(long *)(*(long *)(lVar7 + 0x48) + 0x28), lVar9 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(lVar7 + 100),*(undefined4 *)(lVar7 + 0x68),
                    *(undefined4 *)(lVar7 + 0x6c),lVar9,0);
    if ((*(long *)(lVar7 + 0x48) != 0) &&
       (lVar9 = *(long *)(*(long *)(lVar7 + 0x48) + 0x28), lVar9 != 0)) {
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(lVar7 + 0x70),*(undefined4 *)(lVar7 + 0x74),
                      *(undefined4 *)(lVar7 + 0x78),*(undefined4 *)(lVar7 + 0x7c),lVar9,0);
      if ((*(long *)(lVar7 + 0x48) != 0) &&
         (lVar9 = *(long *)(*(long *)(lVar7 + 0x48) + 0x28), lVar9 != 0)) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(lVar7 + 0x80),*(undefined4 *)(lVar7 + 0x84),
                        *(undefined4 *)(lVar7 + 0x88),lVar9,0);
        *(undefined1 *)(lVar7 + 0x19) = 0;
        *(undefined8 *)(lVar7 + 0x98) = 0;
        *(undefined8 *)(lVar7 + 0x90) = 0;
        *(undefined8 *)(lVar7 + 0xa8) = 0;
        *(undefined8 *)(lVar7 + 0xa0) = 0;
        *(undefined8 *)(lVar7 + 0xb8) = 0;
        *(undefined8 *)(lVar7 + 0xb0) = 0;
        if (*(long *)(lVar7 + 0x48) != 0) {
          lVar6 = *(long *)(*(long *)(lVar7 + 0x48) + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar12 = 0;
          iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar6,0);
          if (iVar4 != 0) {
            if (lVar6 == 0) goto code_r0x015239b0;
            *(undefined2 *)(lVar6 + 0x46) = 0;
            *(undefined4 *)(lVar6 + 0x40) = 0;
            *(undefined1 *)(lVar6 + 0x44) = 0;
          }
          if (*(long *)(lVar7 + 0x48) != 0) {
            *(undefined8 *)(*(long *)(lVar7 + 0x48) + 0x40) = 0;
            *(undefined8 *)(lVar7 + 0x48) = 0;
            *(undefined1 *)(lVar7 + 0x18) = 0;
            *(undefined8 *)(lVar7 + 0x28) = 0;
            *(undefined8 *)(lVar7 + 0x30) = 0;
            *(undefined4 *)(lVar7 + 0x40) = 0xbf800000;
            *(undefined2 *)(lVar7 + 0x60) = 0;
            return;
          }
        }
      }
    }
  }
code_r0x015239b0:
  auVar20 = func_0x00f78af4();
  lVar14 = auVar20._8_8_;
  lVar9 = auVar20._0_8_;
  *(undefined8 *)(puVar2 + -0xb0) = unaff_x26;
  *(undefined8 *)(puVar2 + -0xa8) = unaff_x25;
  *(long *)(puVar2 + -0xa0) = auVar19._8_8_;
  *(undefined8 *)(puVar2 + -0x98) = param_3;
  *(undefined8 *)(puVar2 + -0x90) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x88) = 0x3d23c70;
  *(long *)(puVar2 + -0x80) = lVar6;
  *(long *)(puVar2 + -0x78) = lVar7;
  *(undefined1 **)(puVar2 + -0x70) = puVar2 + -0x50;
  *(undefined **)(puVar2 + -0x68) = &Atlas_Gameplay_Usables_Usable__OnExitPool;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(lVar9 + 0x19) = 1;
  *(undefined8 *)(lVar9 + 0x28) = 0;
  *(long *)(lVar9 + 0x30) = lVar14;
  *(undefined8 *)(lVar9 + 0x48) = uVar12;
  *(undefined8 *)(lVar9 + 0x50) = 0;
  if ((*(long *)(lVar9 + 0x58) != 0) && (lVar14 != 0)) {
    lVar6 = *(long *)(*(long *)(lVar9 + 0x58) + 0x10);
    lVar14 = *(long *)(lVar14 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar14,0);
    if (lVar6 != 0) {
      uVar8 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar6,uVar8,uRam0000000003d572a0);
      *(undefined8 *)(lVar9 + 0x90) = uVar8;
      puVar16 = &UNK_01523aa4;
      lVar6 = lVar9;
      goto code_r0x01523ba8;
    }
  }
  puVar16 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lVar6 = func_0x00f78af4();
code_r0x01523ba8:
  *(long *)(puVar2 + -0xf0) = lVar14;
  *(undefined8 *)(puVar2 + -0xe8) = uVar12;
  *(long *)(puVar2 + -0xe0) = lVar9;
  *(undefined8 *)(puVar2 + -0xd8) = 0;
  *(undefined8 *)(puVar2 + -0xd0) = 0;
  *(undefined8 *)(puVar2 + -200) = 0;
  *(undefined1 **)(puVar2 + -0xc0) = puVar2 + -0x70;
  *(undefined **)(puVar2 + -0xb8) = puVar16;
  if ((bRam0000000003eb4e51 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d334e8);
    func_0x00f78a20(0x3d334f0);
    func_0x00f78a20(0x3d334f8);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3d2e8);
    func_0x00f78a20(0x3d3d2f0);
    bRam0000000003eb4e51 = 1;
  }
  *(undefined8 *)(puVar2 + -0x118) = 0;
  *(undefined8 *)(puVar2 + -0x120) = 0;
  *(undefined8 *)(puVar2 + -0x108) = 0;
  *(undefined8 *)(puVar2 + -0x110) = 0;
  *(undefined8 *)(puVar2 + -0x138) = 0;
  *(undefined8 *)(puVar2 + -0x140) = 0;
  *(undefined8 *)(puVar2 + -0x128) = 0;
  *(undefined8 *)(puVar2 + -0x130) = 0;
  if (*(long *)(lVar6 + 0x28) == 0) {
    return;
  }
  lVar7 = *(long *)(lVar6 + 0x90);
  if (lVar7 != 0) {
    uVar8 = *(undefined8 *)(lVar7 + 0x28);
    uVar12 = *(undefined8 *)(lVar7 + 0x20);
    uVar18 = *(undefined8 *)(lVar7 + 0x38);
    uVar17 = *(undefined8 *)(lVar7 + 0x30);
    *(undefined8 *)(lVar6 + 0xb8) = *(undefined8 *)(lVar7 + 0x40);
    *(undefined8 *)(lVar6 + 0xb0) = uVar18;
    *(undefined8 *)(lVar6 + 0xa8) = uVar17;
    *(undefined8 *)(lVar6 + 0xa0) = uVar8;
    *(undefined8 *)(lVar6 + 0x98) = uVar12;
    if (*(long *)(lVar7 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar7 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar7 = *(long *)(*(long *)(lVar6 + 0x28) + 0x28);
    if (lVar7 != 0) {
      uVar12 = *(undefined8 *)(lVar7 + 0xc0);
      *(undefined8 *)(puVar2 + -0xf8) = uVar12;
      if (((*(long *)(lVar6 + 0x58) != 0) &&
          (lVar7 = *(long *)(*(long *)(lVar6 + 0x58) + 0x10), lVar7 != 0)) &&
         (lVar7 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar7,uVar12,uRam0000000003d57270), lVar7 != 0)) {
        *(undefined8 *)(puVar2 + -0x100) = *(undefined8 *)(lVar7 + 0x70);
        if ((*(long *)(lVar6 + 0x90) != 0) &&
           (lVar7 = *(long *)(*(long *)(lVar6 + 0x90) + 0x48), lVar7 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(puVar2 + -0x140,lVar7,uRam0000000003d3d2e8);
          bVar13 = false;
          while (uVar10 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(puVar2 + -0x140,uRam0000000003d334f0), (uVar10 & 1) != 0)
          {
            uVar8 = *(undefined8 *)(puVar2 + -0x130);
            *(undefined8 *)(puVar2 + -0x168) = *(undefined8 *)(puVar2 + -0x120);
            *(undefined8 *)(puVar2 + -0x170) = *(undefined8 *)(puVar2 + -0x128);
            *(undefined8 *)(puVar2 + -0x158) = *(undefined8 *)(puVar2 + -0x110);
            *(undefined8 *)(puVar2 + -0x160) = *(undefined8 *)(puVar2 + -0x118);
            *(undefined8 *)(puVar2 + -0x150) = *(undefined8 *)(puVar2 + -0x108);
            *(undefined8 *)(puVar2 + -0x178) = uVar8;
            uVar12 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,puVar2 + -0x178);
            uVar10 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(puVar2 + -0xf8,uVar12,0);
            if ((uVar10 & 1) != 0) {
              uVar12 = *(undefined8 *)(puVar2 + -0x170);
              uVar18 = *(undefined8 *)(puVar2 + -0x158);
              uVar17 = *(undefined8 *)(puVar2 + -0x160);
              *(undefined8 *)(lVar6 + 0xa0) = *(undefined8 *)(puVar2 + -0x168);
              *(undefined8 *)(lVar6 + 0x98) = uVar12;
              *(undefined8 *)(lVar6 + 0xb0) = uVar18;
              *(undefined8 *)(lVar6 + 0xa8) = uVar17;
              *(undefined8 *)(lVar6 + 0xb8) = *(undefined8 *)(puVar2 + -0x150);
              bVar13 = true;
            }
            *(undefined8 *)(puVar2 + -0x178) = uVar8;
            uVar12 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,puVar2 + -0x178);
            uVar5 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(puVar2 + -0x100,uVar12,0);
            if (!bVar13 && ((uVar5 ^ 0xffffffff) & 1) == 0) {
              uVar12 = *(undefined8 *)(puVar2 + -0x170);
              uVar17 = *(undefined8 *)(puVar2 + -0x158);
              uVar8 = *(undefined8 *)(puVar2 + -0x160);
              *(undefined8 *)(lVar6 + 0xa0) = *(undefined8 *)(puVar2 + -0x168);
              *(undefined8 *)(lVar6 + 0x98) = uVar12;
              *(undefined8 *)(lVar6 + 0xb0) = uVar17;
              *(undefined8 *)(lVar6 + 0xa8) = uVar8;
              *(undefined8 *)(lVar6 + 0xb8) = *(undefined8 *)(puVar2 + -0x150);
            }
          }
          /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(puVar2 + -0x140,uRam0000000003d334e8);
          return;
        }
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar11 = (long *)___cxa_begin_catch();
    lVar6 = *plVar11;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(puVar2 + -0x140,uRam0000000003d334e8);
    if (lVar6 == 0) {
      return;
    }
    func_0x00f78ac0(lVar6,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x14bbeb0 | Atlas.Gameplay.Usables.PlacementHomingProjectile.OnExitPool
// ============================================================

/* WARNING: Possible PIC construction at 0x014bbfac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bbfbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bbfdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01523aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014bbfe0) */
/* WARNING: Removing unreachable block (ram,0x014bbff0) */
/* WARNING: Removing unreachable block (ram,0x014bc00c) */
/* WARNING: Removing unreachable block (ram,0x014bc02c) */
/* WARNING: Removing unreachable block (ram,0x014bc064) */
/* WARNING: Removing unreachable block (ram,0x014bc084) */
/* WARNING: Removing unreachable block (ram,0x014bc0ac) */
/* WARNING: Removing unreachable block (ram,0x014bc0cc) */
/* WARNING: Removing unreachable block (ram,0x014bc0d4) */
/* WARNING: Removing unreachable block (ram,0x014bc0f4) */
/* WARNING: Removing unreachable block (ram,0x014bc108) */
/* WARNING: Removing unreachable block (ram,0x014bc124) */
/* WARNING: Removing unreachable block (ram,0x014bc12c) */
/* WARNING: Removing unreachable block (ram,0x014bc144) */
/* WARNING: Removing unreachable block (ram,0x014bc158) */
/* WARNING: Removing unreachable block (ram,0x014bc170) */
/* WARNING: Removing unreachable block (ram,0x014bc19c) */
/* WARNING: Removing unreachable block (ram,0x014bc1b0) */
/* WARNING: Removing unreachable block (ram,0x014bc1e4) */
/* WARNING: Removing unreachable block (ram,0x014bc214) */
/* WARNING: Removing unreachable block (ram,0x014bc21c) */
/* WARNING: Removing unreachable block (ram,0x014bc224) */
/* WARNING: Removing unreachable block (ram,0x014bc22c) */
/* WARNING: Removing unreachable block (ram,0x014bc244) */
/* WARNING: Removing unreachable block (ram,0x014bc274) */
/* WARNING: Removing unreachable block (ram,0x014bc2c0) */
/* WARNING: Removing unreachable block (ram,0x014bc2f0) */
/* WARNING: Removing unreachable block (ram,0x014bc31c) */
/* WARNING: Removing unreachable block (ram,0x014bc344) */
/* WARNING: Removing unreachable block (ram,0x014bbfc0) */
/* WARNING: Removing unreachable block (ram,0x014bbfcc) */
/* WARNING: Removing unreachable block (ram,0x014bbfd4) */
/* WARNING: Removing unreachable block (ram,0x014bbfb0) */
/* WARNING: Removing unreachable block (ram,0x014bbfbc) */
/* WARNING: Removing unreachable block (ram,0x01523aa4) */
/* WARNING: Removing unreachable block (ram,0x01523aa8) */
/* WARNING: Removing unreachable block (ram,0x01523ab0) */
/* WARNING: Removing unreachable block (ram,0x01523ac8) */
/* WARNING: Removing unreachable block (ram,0x01523ae0) */
/* WARNING: Removing unreachable block (ram,0x01523afc) */
/* WARNING: Removing unreachable block (ram,0x01523b08) */
/* WARNING: Removing unreachable block (ram,0x01523b28) */
/* WARNING: Removing unreachable block (ram,0x01523b40) */
/* WARNING: Removing unreachable block (ram,0x01523b48) */
/* WARNING: Removing unreachable block (ram,0x01523b4c) */
/* WARNING: Removing unreachable block (ram,0x01523b60) */
/* WARNING: Removing unreachable block (ram,0x01523b64) */
/* WARNING: Removing unreachable block (ram,0x01523b6c) */
/* WARNING: Removing unreachable block (ram,0x01523b70) */
/* WARNING: Removing unreachable block (ram,0x01523b8c) */

void Atlas_Gameplay_Usables_PlacementHomingProjectile__OnExitPool
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  int extraout_w1;
  long lVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined8 ****ppppuVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 ***pppuStack_180;
  undefined *puStack_178;
  undefined1 **ppuStack_130;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  undefined1 *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 ***pppuStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [96];
  
  puVar2 = (undefined8 *)auStack_c0;
  lVar10 = 0;
  uVar11 = 0;
  if ((bRam0000000003eb4af4 & 1) == 0) {
    func_0x00f78a20(0x3d20560);
    func_0x00f78a20(0x3d41598);
    func_0x00f78a20(0x3d1eaf8);
    func_0x00f78a20(0x3d416c0);
    bRam0000000003eb4af4 = 1;
  }
  /*Atlas.Gameplay.Usables.ProjectileUsable$$OnExitPool*/ func_0x014cd5f8(param_1,param_2,param_3,0,0,0,0);
  if ((*(long *)(param_1 + 0xf8) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0xf8) + 0x18), lVar5 != 0)) {
    uVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
    *(undefined8 *)(param_1 + 0x100) = uVar6;
    *(undefined4 *)(param_1 + 0x218) = 0x3e99999a;
    lVar5 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingBehaviour(param_1);
    if ((lVar5 != 0) &&
       ((*(long *)(lVar5 + 0x28) != 0 &&
        (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar5 + 0x28),0), lVar5 != 0)))) {
      uVar6 = 1;
      puVar14 = &UNK_014bbfb0;
      lVar7 = param_1;
      ppppuVar13 = (undefined8 ****)&stack0xfffffffffffffff0;
      goto code_r0x0322ef1c;
    }
  }
  func_0x00f78af4();
  lVar7 = func_0x00f78e5c();
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  puStack_c8 = &Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__ResetAnimState;
  ppppuVar13 = &pppuStack_d0;
  uVar11 = 0x3d23c70;
  lStack_d8 = param_1;
  pppuStack_d0 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4afd & 1) == 0) {
    func_0x00f78a20(0x3d23c70);
    bRam0000000003eb4afd = 1;
  }
  lVar10 = *(long *)(lVar7 + 0x70);
  if (((*(ushort *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar10 != 0) {
    param_3 = 0;
    /*UnityEngine.Animator$$SetBool*/ func_0x0320d43c(lVar10,**(undefined4 **)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8),0,0);
    if (*(long *)(lVar7 + 0x70) != 0) {
      param_3 = 0;
      /*UnityEngine.Animator$$SetBool*/ func_0x0320d43c(*(long *)(lVar7 + 0x70),
                      *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 0xc),0,0);
      if (*(long *)(lVar7 + 0x70) != 0) {
        param_3 = 0;
        /*UnityEngine.Animator$$SetBool*/ func_0x0320d43c(*(long *)(lVar7 + 0x70),
                        *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 0x10),0,0);
        lVar5 = *(long *)(lVar7 + 0x70);
        if (lVar5 != 0) {
          uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 8);
          if (pcRam0000000003ebe400 == (code *)0x0) {
            pcRam0000000003ebe400 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.Animator::SetFloatID(System.Int32,System.Single)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000003ebe400)(0,lVar5,uVar1);
          return;
        }
      }
    }
  }
  auVar17 = func_0x00f78af4();
  uVar6 = auVar17._8_8_;
  lVar5 = *(long *)(auVar17._0_8_ + 0x78);
  if (lVar5 != 0) {
    puVar2 = &uStack_f0;
    puVar14 = &Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__SetInFlightVFXActive;
code_r0x0322ef1c:
    *(undefined8 *)((long)puVar2 + -0x30) = 0;
    *(undefined8 *)((long)puVar2 + -0x28) = uVar11;
    *(long *)((long)puVar2 + -0x20) = lVar10;
    *(long *)((long)puVar2 + -0x18) = lVar7;
    *(undefined8 *****)((long)puVar2 + -0x10) = ppppuVar13;
    *(undefined **)((long)puVar2 + -8) = puVar14;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf4c0)(lVar5,uVar6);
    return;
  }
  lVar5 = func_0x00f78af4();
  puStack_108 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__OnEnterPool;
  lStack_120 = lVar10;
  lStack_118 = lVar7;
  puStack_110 = &stack0xffffffffffffff00;
  Atlas_Gameplay_Usables_PlacementHomingProjectile__OnTearDownParamsInternal();
  /*Atlas.Gameplay.Usables.ProjectileUsable$$OnTearDownParamsInternal*/ func_0x014cd4e4(lVar5,0);
  Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(lVar5,0);
  if ((bRam0000000003eb4e50 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003eb4e50 = 1;
  }
  if ((*(long *)(lVar5 + 0x48) != 0) &&
     (lVar10 = *(long *)(*(long *)(lVar5 + 0x48) + 0x28), lVar10 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(lVar5 + 100),*(undefined4 *)(lVar5 + 0x68),
                    *(undefined4 *)(lVar5 + 0x6c),lVar10,0);
    if ((*(long *)(lVar5 + 0x48) != 0) &&
       (lVar10 = *(long *)(*(long *)(lVar5 + 0x48) + 0x28), lVar10 != 0)) {
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(lVar5 + 0x70),*(undefined4 *)(lVar5 + 0x74),
                      *(undefined4 *)(lVar5 + 0x78),*(undefined4 *)(lVar5 + 0x7c),lVar10,0);
      if ((*(long *)(lVar5 + 0x48) != 0) &&
         (lVar10 = *(long *)(*(long *)(lVar5 + 0x48) + 0x28), lVar10 != 0)) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(lVar5 + 0x80),*(undefined4 *)(lVar5 + 0x84),
                        *(undefined4 *)(lVar5 + 0x88),lVar10,0);
        *(undefined1 *)(lVar5 + 0x19) = 0;
        *(undefined8 *)(lVar5 + 0x98) = 0;
        *(undefined8 *)(lVar5 + 0x90) = 0;
        *(undefined8 *)(lVar5 + 0xa8) = 0;
        *(undefined8 *)(lVar5 + 0xa0) = 0;
        *(undefined8 *)(lVar5 + 0xb8) = 0;
        *(undefined8 *)(lVar5 + 0xb0) = 0;
        if (*(long *)(lVar5 + 0x48) != 0) {
          lVar10 = *(long *)(*(long *)(lVar5 + 0x48) + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          param_3 = 0;
          iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0);
          if (iVar3 != 0) {
            if (lVar10 == 0) goto code_r0x015239b0;
            *(undefined2 *)(lVar10 + 0x46) = 0;
            *(undefined4 *)(lVar10 + 0x40) = 0;
            *(undefined1 *)(lVar10 + 0x44) = 0;
          }
          if (*(long *)(lVar5 + 0x48) != 0) {
            *(undefined8 *)(*(long *)(lVar5 + 0x48) + 0x40) = 0;
            *(undefined8 *)(lVar5 + 0x48) = 0;
            *(undefined1 *)(lVar5 + 0x18) = 0;
            *(undefined8 *)(lVar5 + 0x28) = 0;
            *(undefined8 *)(lVar5 + 0x30) = 0;
            *(undefined4 *)(lVar5 + 0x40) = 0xbf800000;
            *(undefined2 *)(lVar5 + 0x60) = 0;
            return;
          }
        }
      }
    }
  }
code_r0x015239b0:
  auVar17 = func_0x00f78af4();
  lVar5 = auVar17._8_8_;
  lVar10 = auVar17._0_8_;
  puStack_128 = &Atlas_Gameplay_Usables_Usable__OnExitPool;
  ppuStack_130 = &puStack_110;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(lVar10 + 0x19) = 1;
  *(undefined8 *)(lVar10 + 0x28) = 0;
  *(long *)(lVar10 + 0x30) = lVar5;
  *(undefined8 *)(lVar10 + 0x48) = param_3;
  *(undefined8 *)(lVar10 + 0x50) = 0;
  if ((*(long *)(lVar10 + 0x58) != 0) && (lVar5 != 0)) {
    lVar7 = *(long *)(*(long *)(lVar10 + 0x58) + 0x10);
    lVar5 = *(long *)(lVar5 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar5,0);
    if (lVar7 != 0) {
      uVar11 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar7,uVar11,uRam0000000003d572a0);
      *(undefined8 *)(lVar10 + 0x90) = uVar11;
      puVar14 = &UNK_01523aa4;
      lVar7 = lVar10;
      goto code_r0x01523ba8;
    }
  }
  puVar14 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lVar7 = func_0x00f78af4();
code_r0x01523ba8:
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  lStack_1b0 = lVar5;
  uStack_1a8 = param_3;
  lStack_1a0 = lVar10;
  pppuStack_180 = &ppuStack_130;
  puStack_178 = puVar14;
  if ((bRam0000000003eb4e51 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d334e8);
    func_0x00f78a20(0x3d334f0);
    func_0x00f78a20(0x3d334f8);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3d2e8);
    func_0x00f78a20(0x3d3d2f0);
    bRam0000000003eb4e51 = 1;
  }
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  if (*(long *)(lVar7 + 0x28) == 0) {
    return;
  }
  lVar10 = *(long *)(lVar7 + 0x90);
  if (lVar10 != 0) {
    uVar6 = *(undefined8 *)(lVar10 + 0x28);
    uVar11 = *(undefined8 *)(lVar10 + 0x20);
    uVar16 = *(undefined8 *)(lVar10 + 0x38);
    uVar15 = *(undefined8 *)(lVar10 + 0x30);
    *(undefined8 *)(lVar7 + 0xb8) = *(undefined8 *)(lVar10 + 0x40);
    *(undefined8 *)(lVar7 + 0xb0) = uVar16;
    *(undefined8 *)(lVar7 + 0xa8) = uVar15;
    *(undefined8 *)(lVar7 + 0xa0) = uVar6;
    *(undefined8 *)(lVar7 + 0x98) = uVar11;
    if (*(long *)(lVar10 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar10 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar10 = *(long *)(*(long *)(lVar7 + 0x28) + 0x28);
    if (lVar10 != 0) {
      uStack_1b8 = *(undefined8 *)(lVar10 + 0xc0);
      if (((*(long *)(lVar7 + 0x58) != 0) &&
          (lVar10 = *(long *)(*(long *)(lVar7 + 0x58) + 0x10), lVar10 != 0)) &&
         (lVar10 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar10,uStack_1b8,uRam0000000003d57270), lVar10 != 0)) {
        uStack_1c0 = *(undefined8 *)(lVar10 + 0x70);
        if ((*(long *)(lVar7 + 0x90) != 0) &&
           (lVar10 = *(long *)(*(long *)(lVar7 + 0x90) + 0x48), lVar10 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_200,lVar10,uRam0000000003d3d2e8);
          bVar12 = false;
          while (uVar8 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_200,uRam0000000003d334f0), uVar11 = uStack_1f0,
                (uVar8 & 1) != 0) {
            uStack_228 = uStack_1e0;
            uStack_230 = uStack_1e8;
            uStack_218 = uStack_1d0;
            uStack_220 = uStack_1d8;
            uStack_210 = uStack_1c8;
            uStack_238 = uStack_1f0;
            uVar6 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_238);
            uVar8 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_1b8,uVar6,0);
            if ((uVar8 & 1) != 0) {
              *(undefined8 *)(lVar7 + 0xa0) = uStack_228;
              *(undefined8 *)(lVar7 + 0x98) = uStack_230;
              *(undefined8 *)(lVar7 + 0xb0) = uStack_218;
              *(undefined8 *)(lVar7 + 0xa8) = uStack_220;
              *(undefined8 *)(lVar7 + 0xb8) = uStack_210;
              bVar12 = true;
            }
            uStack_238 = uVar11;
            uVar11 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_238);
            uVar4 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_1c0,uVar11,0);
            if (!bVar12 && ((uVar4 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(lVar7 + 0xa0) = uStack_228;
              *(undefined8 *)(lVar7 + 0x98) = uStack_230;
              *(undefined8 *)(lVar7 + 0xb0) = uStack_218;
              *(undefined8 *)(lVar7 + 0xa8) = uStack_220;
              *(undefined8 *)(lVar7 + 0xb8) = uStack_210;
            }
          }
          /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_200,uRam0000000003d334e8);
          return;
        }
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar9 = (long *)___cxa_begin_catch();
    lVar10 = *plVar9;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_200,uRam0000000003d334e8);
    if (lVar10 == 0) {
      return;
    }
    func_0x00f78ac0(lVar10,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x14bbec0 | Atlas.Gameplay.Usables.PlacementHomingProjectile.OnExitPool
// ============================================================

/* WARNING: Possible PIC construction at 0x014bbfac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bbfbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bbfdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01523aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014bbfe0) */
/* WARNING: Removing unreachable block (ram,0x014bbff0) */
/* WARNING: Removing unreachable block (ram,0x014bc00c) */
/* WARNING: Removing unreachable block (ram,0x014bc02c) */
/* WARNING: Removing unreachable block (ram,0x014bc064) */
/* WARNING: Removing unreachable block (ram,0x014bc084) */
/* WARNING: Removing unreachable block (ram,0x014bc0ac) */
/* WARNING: Removing unreachable block (ram,0x014bc0cc) */
/* WARNING: Removing unreachable block (ram,0x014bc0d4) */
/* WARNING: Removing unreachable block (ram,0x014bc0f4) */
/* WARNING: Removing unreachable block (ram,0x014bc108) */
/* WARNING: Removing unreachable block (ram,0x014bc124) */
/* WARNING: Removing unreachable block (ram,0x014bc12c) */
/* WARNING: Removing unreachable block (ram,0x014bc144) */
/* WARNING: Removing unreachable block (ram,0x014bc158) */
/* WARNING: Removing unreachable block (ram,0x014bc170) */
/* WARNING: Removing unreachable block (ram,0x014bc19c) */
/* WARNING: Removing unreachable block (ram,0x014bc1b0) */
/* WARNING: Removing unreachable block (ram,0x014bc1e4) */
/* WARNING: Removing unreachable block (ram,0x014bc214) */
/* WARNING: Removing unreachable block (ram,0x014bc21c) */
/* WARNING: Removing unreachable block (ram,0x014bc224) */
/* WARNING: Removing unreachable block (ram,0x014bc22c) */
/* WARNING: Removing unreachable block (ram,0x014bc244) */
/* WARNING: Removing unreachable block (ram,0x014bc274) */
/* WARNING: Removing unreachable block (ram,0x014bc2c0) */
/* WARNING: Removing unreachable block (ram,0x014bc2f0) */
/* WARNING: Removing unreachable block (ram,0x014bc31c) */
/* WARNING: Removing unreachable block (ram,0x014bc344) */
/* WARNING: Removing unreachable block (ram,0x014bbfc0) */
/* WARNING: Removing unreachable block (ram,0x014bbfcc) */
/* WARNING: Removing unreachable block (ram,0x014bbfd4) */
/* WARNING: Removing unreachable block (ram,0x014bbfb0) */
/* WARNING: Removing unreachable block (ram,0x014bbfbc) */
/* WARNING: Removing unreachable block (ram,0x01523aa4) */
/* WARNING: Removing unreachable block (ram,0x01523aa8) */
/* WARNING: Removing unreachable block (ram,0x01523ab0) */
/* WARNING: Removing unreachable block (ram,0x01523ac8) */
/* WARNING: Removing unreachable block (ram,0x01523ae0) */
/* WARNING: Removing unreachable block (ram,0x01523afc) */
/* WARNING: Removing unreachable block (ram,0x01523b08) */
/* WARNING: Removing unreachable block (ram,0x01523b28) */
/* WARNING: Removing unreachable block (ram,0x01523b40) */
/* WARNING: Removing unreachable block (ram,0x01523b48) */
/* WARNING: Removing unreachable block (ram,0x01523b4c) */
/* WARNING: Removing unreachable block (ram,0x01523b60) */
/* WARNING: Removing unreachable block (ram,0x01523b64) */
/* WARNING: Removing unreachable block (ram,0x01523b6c) */
/* WARNING: Removing unreachable block (ram,0x01523b70) */
/* WARNING: Removing unreachable block (ram,0x01523b8c) */

void Atlas_Gameplay_Usables_PlacementHomingProjectile__OnExitPool
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  int extraout_w1;
  undefined8 uVar10;
  bool bVar11;
  long lVar12;
  undefined8 ****ppppuVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 ***pppuStack_180;
  undefined *puStack_178;
  undefined1 **ppuStack_130;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  undefined1 *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 ***pppuStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [96];
  
  puVar2 = (undefined8 *)auStack_c0;
  if ((bRam0000000003eb4af4 & 1) == 0) {
    func_0x00f78a20(0x3d20560);
    func_0x00f78a20(0x3d41598);
    func_0x00f78a20(0x3d1eaf8);
    func_0x00f78a20(0x3d416c0);
    bRam0000000003eb4af4 = 1;
  }
  /*Atlas.Gameplay.Usables.ProjectileUsable$$OnExitPool*/ func_0x014cd5f8(param_1,param_2,param_3,param_4,param_5,param_6,0);
  if ((*(long *)(param_1 + 0xf8) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0xf8) + 0x18), lVar5 != 0)) {
    uVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
    *(undefined8 *)(param_1 + 0x100) = uVar6;
    *(undefined4 *)(param_1 + 0x218) = 0x3e99999a;
    lVar5 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingBehaviour(param_1);
    if ((lVar5 != 0) &&
       ((*(long *)(lVar5 + 0x28) != 0 &&
        (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar5 + 0x28),0), lVar5 != 0)))) {
      uVar10 = 1;
      puVar14 = (undefined *)0x14bbfb0;
      lVar7 = param_1;
      uVar6 = param_5;
      ppppuVar13 = (undefined8 ****)&stack0xfffffffffffffff0;
      goto code_r0x0322ef1c;
    }
  }
  func_0x00f78af4();
  lVar7 = func_0x00f78e5c();
  puStack_c8 = &Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__ResetAnimState;
  ppppuVar13 = &pppuStack_d0;
  uVar6 = 0x3d23c70;
  uStack_f0 = param_4;
  uStack_e8 = param_5;
  lStack_e0 = param_6;
  lStack_d8 = param_1;
  pppuStack_d0 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4afd & 1) == 0) {
    func_0x00f78a20(0x3d23c70);
    bRam0000000003eb4afd = 1;
  }
  param_6 = *(long *)(lVar7 + 0x70);
  if (((*(ushort *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (param_6 != 0) {
    param_3 = 0;
    /*UnityEngine.Animator$$SetBool*/ func_0x0320d43c(param_6,**(undefined4 **)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8),0,0);
    if (*(long *)(lVar7 + 0x70) != 0) {
      param_3 = 0;
      /*UnityEngine.Animator$$SetBool*/ func_0x0320d43c(*(long *)(lVar7 + 0x70),
                      *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 0xc),0,0);
      if (*(long *)(lVar7 + 0x70) != 0) {
        param_3 = 0;
        /*UnityEngine.Animator$$SetBool*/ func_0x0320d43c(*(long *)(lVar7 + 0x70),
                        *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 0x10),0,0);
        lVar5 = *(long *)(lVar7 + 0x70);
        if (lVar5 != 0) {
          uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 8);
          if (pcRam0000000003ebe400 == (code *)0x0) {
            pcRam0000000003ebe400 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.Animator::SetFloatID(System.Int32,System.Single)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000003ebe400)(0,lVar5,uVar1);
          return;
        }
      }
    }
  }
  auVar17 = func_0x00f78af4();
  uVar10 = auVar17._8_8_;
  lVar5 = *(long *)(auVar17._0_8_ + 0x78);
  if (lVar5 != 0) {
    puVar2 = &uStack_f0;
    puVar14 = &Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__SetInFlightVFXActive;
code_r0x0322ef1c:
    *(undefined8 *)((long)puVar2 + -0x30) = param_4;
    *(undefined8 *)((long)puVar2 + -0x28) = uVar6;
    *(long *)((long)puVar2 + -0x20) = param_6;
    *(long *)((long)puVar2 + -0x18) = lVar7;
    *(undefined8 *****)((long)puVar2 + -0x10) = ppppuVar13;
    *(undefined **)((long)puVar2 + -8) = puVar14;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf4c0)(lVar5,uVar10);
    return;
  }
  lVar5 = func_0x00f78af4();
  puStack_108 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__OnEnterPool;
  lStack_120 = param_6;
  lStack_118 = lVar7;
  puStack_110 = &stack0xffffffffffffff00;
  Atlas_Gameplay_Usables_PlacementHomingProjectile__OnTearDownParamsInternal();
  /*Atlas.Gameplay.Usables.ProjectileUsable$$OnTearDownParamsInternal*/ func_0x014cd4e4(lVar5,0);
  Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(lVar5,0);
  if ((bRam0000000003eb4e50 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003eb4e50 = 1;
  }
  if ((*(long *)(lVar5 + 0x48) != 0) &&
     (lVar7 = *(long *)(*(long *)(lVar5 + 0x48) + 0x28), lVar7 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(lVar5 + 100),*(undefined4 *)(lVar5 + 0x68),
                    *(undefined4 *)(lVar5 + 0x6c),lVar7,0);
    if ((*(long *)(lVar5 + 0x48) != 0) &&
       (lVar7 = *(long *)(*(long *)(lVar5 + 0x48) + 0x28), lVar7 != 0)) {
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(lVar5 + 0x70),*(undefined4 *)(lVar5 + 0x74),
                      *(undefined4 *)(lVar5 + 0x78),*(undefined4 *)(lVar5 + 0x7c),lVar7,0);
      if ((*(long *)(lVar5 + 0x48) != 0) &&
         (lVar7 = *(long *)(*(long *)(lVar5 + 0x48) + 0x28), lVar7 != 0)) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(lVar5 + 0x80),*(undefined4 *)(lVar5 + 0x84),
                        *(undefined4 *)(lVar5 + 0x88),lVar7,0);
        *(undefined1 *)(lVar5 + 0x19) = 0;
        *(undefined8 *)(lVar5 + 0x98) = 0;
        *(undefined8 *)(lVar5 + 0x90) = 0;
        *(undefined8 *)(lVar5 + 0xa8) = 0;
        *(undefined8 *)(lVar5 + 0xa0) = 0;
        *(undefined8 *)(lVar5 + 0xb8) = 0;
        *(undefined8 *)(lVar5 + 0xb0) = 0;
        if (*(long *)(lVar5 + 0x48) != 0) {
          lVar7 = *(long *)(*(long *)(lVar5 + 0x48) + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          param_3 = 0;
          iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,0);
          if (iVar3 != 0) {
            if (lVar7 == 0) goto code_r0x015239b0;
            *(undefined2 *)(lVar7 + 0x46) = 0;
            *(undefined4 *)(lVar7 + 0x40) = 0;
            *(undefined1 *)(lVar7 + 0x44) = 0;
          }
          if (*(long *)(lVar5 + 0x48) != 0) {
            *(undefined8 *)(*(long *)(lVar5 + 0x48) + 0x40) = 0;
            *(undefined8 *)(lVar5 + 0x48) = 0;
            *(undefined1 *)(lVar5 + 0x18) = 0;
            *(undefined8 *)(lVar5 + 0x28) = 0;
            *(undefined8 *)(lVar5 + 0x30) = 0;
            *(undefined4 *)(lVar5 + 0x40) = 0xbf800000;
            *(undefined2 *)(lVar5 + 0x60) = 0;
            return;
          }
        }
      }
    }
  }
code_r0x015239b0:
  auVar17 = func_0x00f78af4();
  lVar7 = auVar17._8_8_;
  lVar5 = auVar17._0_8_;
  puStack_128 = &Atlas_Gameplay_Usables_Usable__OnExitPool;
  ppuStack_130 = &puStack_110;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(lVar5 + 0x19) = 1;
  *(undefined8 *)(lVar5 + 0x28) = 0;
  *(long *)(lVar5 + 0x30) = lVar7;
  *(undefined8 *)(lVar5 + 0x48) = param_3;
  *(undefined8 *)(lVar5 + 0x50) = 0;
  if ((*(long *)(lVar5 + 0x58) != 0) && (lVar7 != 0)) {
    lVar12 = *(long *)(*(long *)(lVar5 + 0x58) + 0x10);
    lVar7 = *(long *)(lVar7 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar7,0);
    if (lVar12 != 0) {
      uVar6 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar12,uVar6,uRam0000000003d572a0);
      *(undefined8 *)(lVar5 + 0x90) = uVar6;
      puVar14 = &UNK_01523aa4;
      lVar12 = lVar5;
      goto code_r0x01523ba8;
    }
  }
  puVar14 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lVar12 = func_0x00f78af4();
code_r0x01523ba8:
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  lStack_1b0 = lVar7;
  uStack_1a8 = param_3;
  lStack_1a0 = lVar5;
  pppuStack_180 = &ppuStack_130;
  puStack_178 = puVar14;
  if ((bRam0000000003eb4e51 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d334e8);
    func_0x00f78a20(0x3d334f0);
    func_0x00f78a20(0x3d334f8);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3d2e8);
    func_0x00f78a20(0x3d3d2f0);
    bRam0000000003eb4e51 = 1;
  }
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  if (*(long *)(lVar12 + 0x28) == 0) {
    return;
  }
  lVar5 = *(long *)(lVar12 + 0x90);
  if (lVar5 != 0) {
    uVar10 = *(undefined8 *)(lVar5 + 0x28);
    uVar6 = *(undefined8 *)(lVar5 + 0x20);
    uVar16 = *(undefined8 *)(lVar5 + 0x38);
    uVar15 = *(undefined8 *)(lVar5 + 0x30);
    *(undefined8 *)(lVar12 + 0xb8) = *(undefined8 *)(lVar5 + 0x40);
    *(undefined8 *)(lVar12 + 0xb0) = uVar16;
    *(undefined8 *)(lVar12 + 0xa8) = uVar15;
    *(undefined8 *)(lVar12 + 0xa0) = uVar10;
    *(undefined8 *)(lVar12 + 0x98) = uVar6;
    if (*(long *)(lVar5 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar5 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar5 = *(long *)(*(long *)(lVar12 + 0x28) + 0x28);
    if (lVar5 != 0) {
      uStack_1b8 = *(undefined8 *)(lVar5 + 0xc0);
      if (((*(long *)(lVar12 + 0x58) != 0) &&
          (lVar5 = *(long *)(*(long *)(lVar12 + 0x58) + 0x10), lVar5 != 0)) &&
         (lVar5 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar5,uStack_1b8,uRam0000000003d57270), lVar5 != 0)) {
        uStack_1c0 = *(undefined8 *)(lVar5 + 0x70);
        if ((*(long *)(lVar12 + 0x90) != 0) &&
           (lVar5 = *(long *)(*(long *)(lVar12 + 0x90) + 0x48), lVar5 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_200,lVar5,uRam0000000003d3d2e8);
          bVar11 = false;
          while (uVar8 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_200,uRam0000000003d334f0), uVar6 = uStack_1f0,
                (uVar8 & 1) != 0) {
            uStack_228 = uStack_1e0;
            uStack_230 = uStack_1e8;
            uStack_218 = uStack_1d0;
            uStack_220 = uStack_1d8;
            uStack_210 = uStack_1c8;
            uStack_238 = uStack_1f0;
            uVar10 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_238);
            uVar8 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_1b8,uVar10,0);
            if ((uVar8 & 1) != 0) {
              *(undefined8 *)(lVar12 + 0xa0) = uStack_228;
              *(undefined8 *)(lVar12 + 0x98) = uStack_230;
              *(undefined8 *)(lVar12 + 0xb0) = uStack_218;
              *(undefined8 *)(lVar12 + 0xa8) = uStack_220;
              *(undefined8 *)(lVar12 + 0xb8) = uStack_210;
              bVar11 = true;
            }
            uStack_238 = uVar6;
            uVar6 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_238);
            uVar4 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_1c0,uVar6,0);
            if (!bVar11 && ((uVar4 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(lVar12 + 0xa0) = uStack_228;
              *(undefined8 *)(lVar12 + 0x98) = uStack_230;
              *(undefined8 *)(lVar12 + 0xb0) = uStack_218;
              *(undefined8 *)(lVar12 + 0xa8) = uStack_220;
              *(undefined8 *)(lVar12 + 0xb8) = uStack_210;
            }
          }
          /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_200,uRam0000000003d334e8);
          return;
        }
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar9 = (long *)___cxa_begin_catch();
    lVar5 = *plVar9;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_200,uRam0000000003d334e8);
    if (lVar5 == 0) {
      return;
    }
    func_0x00f78ac0(lVar5,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x14bc488 | Atlas.Gameplay.Usables.PlacementHomingProjectile.OnEnterPool
// ============================================================

/* WARNING: Possible PIC construction at 0x01523aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01523aa4) */
/* WARNING: Removing unreachable block (ram,0x01523aa8) */
/* WARNING: Removing unreachable block (ram,0x01523ab0) */
/* WARNING: Removing unreachable block (ram,0x01523ac8) */
/* WARNING: Removing unreachable block (ram,0x01523ae0) */
/* WARNING: Removing unreachable block (ram,0x01523afc) */
/* WARNING: Removing unreachable block (ram,0x01523b08) */
/* WARNING: Removing unreachable block (ram,0x01523b28) */
/* WARNING: Removing unreachable block (ram,0x01523b40) */
/* WARNING: Removing unreachable block (ram,0x01523b48) */
/* WARNING: Removing unreachable block (ram,0x01523b4c) */
/* WARNING: Removing unreachable block (ram,0x01523b60) */
/* WARNING: Removing unreachable block (ram,0x01523b64) */
/* WARNING: Removing unreachable block (ram,0x01523b6c) */
/* WARNING: Removing unreachable block (ram,0x01523b70) */
/* WARNING: Removing unreachable block (ram,0x01523b8c) */

void Atlas_Gameplay_Usables_PlacementHomingProjectile__OnEnterPool
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  int extraout_w1;
  bool bVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  Atlas_Gameplay_Usables_PlacementHomingProjectile__OnTearDownParamsInternal();
  /*Atlas.Gameplay.Usables.ProjectileUsable$$OnTearDownParamsInternal*/ func_0x014cd4e4(param_1,0);
  Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(param_1,0);
  if ((bRam0000000003eb4e50 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003eb4e50 = 1;
  }
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar3 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),
                    *(undefined4 *)(param_1 + 0x6c),lVar3,0);
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar3 != 0)) {
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74),
                      *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),lVar3,0);
      if ((*(long *)(param_1 + 0x48) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar3 != 0)) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),
                        *(undefined4 *)(param_1 + 0x88),lVar3,0);
        *(undefined1 *)(param_1 + 0x19) = 0;
        *(undefined8 *)(param_1 + 0x98) = 0;
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0xa8) = 0;
        *(undefined8 *)(param_1 + 0xa0) = 0;
        *(undefined8 *)(param_1 + 0xb8) = 0;
        *(undefined8 *)(param_1 + 0xb0) = 0;
        if (*(long *)(param_1 + 0x48) != 0) {
          lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          param_3 = 0;
          iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar3,0);
          if (iVar1 != 0) {
            if (lVar3 == 0) goto code_r0x015239b0;
            *(undefined2 *)(lVar3 + 0x46) = 0;
            *(undefined4 *)(lVar3 + 0x40) = 0;
            *(undefined1 *)(lVar3 + 0x44) = 0;
          }
          if (*(long *)(param_1 + 0x48) != 0) {
            *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x40) = 0;
            *(undefined8 *)(param_1 + 0x48) = 0;
            *(undefined1 *)(param_1 + 0x18) = 0;
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined8 *)(param_1 + 0x30) = 0;
            *(undefined4 *)(param_1 + 0x40) = 0xbf800000;
            *(undefined2 *)(param_1 + 0x60) = 0;
            return;
          }
        }
      }
    }
  }
code_r0x015239b0:
  auVar14 = func_0x00f78af4();
  lVar9 = auVar14._8_8_;
  lVar3 = auVar14._0_8_;
  puStack_28 = &Atlas_Gameplay_Usables_Usable__OnExitPool;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(lVar3 + 0x19) = 1;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(long *)(lVar3 + 0x30) = lVar9;
  *(undefined8 *)(lVar3 + 0x48) = param_3;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  if ((*(long *)(lVar3 + 0x58) != 0) && (lVar9 != 0)) {
    lVar10 = *(long *)(*(long *)(lVar3 + 0x58) + 0x10);
    lVar9 = *(long *)(lVar9 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar9,0);
    if (lVar10 != 0) {
      uVar4 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar10,uVar4,uRam0000000003d572a0);
      *(undefined8 *)(lVar3 + 0x90) = uVar4;
      puVar11 = &UNK_01523aa4;
      lVar10 = lVar3;
      goto code_r0x01523ba8;
    }
  }
  puVar11 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lVar10 = func_0x00f78af4();
code_r0x01523ba8:
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  lStack_b0 = lVar9;
  uStack_a8 = param_3;
  lStack_a0 = lVar3;
  ppuStack_80 = &puStack_30;
  puStack_78 = puVar11;
  if ((bRam0000000003eb4e51 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d334e8);
    func_0x00f78a20(0x3d334f0);
    func_0x00f78a20(0x3d334f8);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3d2e8);
    func_0x00f78a20(0x3d3d2f0);
    bRam0000000003eb4e51 = 1;
  }
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (*(long *)(lVar10 + 0x28) == 0) {
    return;
  }
  lVar3 = *(long *)(lVar10 + 0x90);
  if (lVar3 != 0) {
    uVar6 = *(undefined8 *)(lVar3 + 0x28);
    uVar4 = *(undefined8 *)(lVar3 + 0x20);
    uVar13 = *(undefined8 *)(lVar3 + 0x38);
    uVar12 = *(undefined8 *)(lVar3 + 0x30);
    *(undefined8 *)(lVar10 + 0xb8) = *(undefined8 *)(lVar3 + 0x40);
    *(undefined8 *)(lVar10 + 0xb0) = uVar13;
    *(undefined8 *)(lVar10 + 0xa8) = uVar12;
    *(undefined8 *)(lVar10 + 0xa0) = uVar6;
    *(undefined8 *)(lVar10 + 0x98) = uVar4;
    if (*(long *)(lVar3 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar3 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar3 = *(long *)(*(long *)(lVar10 + 0x28) + 0x28);
    if (lVar3 != 0) {
      uStack_b8 = *(undefined8 *)(lVar3 + 0xc0);
      if (((*(long *)(lVar10 + 0x58) != 0) &&
          (lVar3 = *(long *)(*(long *)(lVar10 + 0x58) + 0x10), lVar3 != 0)) &&
         (lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,uStack_b8,uRam0000000003d57270), lVar3 != 0)) {
        uStack_c0 = *(undefined8 *)(lVar3 + 0x70);
        if ((*(long *)(lVar10 + 0x90) != 0) &&
           (lVar3 = *(long *)(*(long *)(lVar10 + 0x90) + 0x48), lVar3 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_100,lVar3,uRam0000000003d3d2e8);
          bVar8 = false;
          while (uVar5 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_100,uRam0000000003d334f0), uVar4 = uStack_f0,
                (uVar5 & 1) != 0) {
            uStack_128 = uStack_e0;
            uStack_130 = uStack_e8;
            uStack_118 = uStack_d0;
            uStack_120 = uStack_d8;
            uStack_110 = uStack_c8;
            uStack_138 = uStack_f0;
            uVar6 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_138);
            uVar5 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_b8,uVar6,0);
            if ((uVar5 & 1) != 0) {
              *(undefined8 *)(lVar10 + 0xa0) = uStack_128;
              *(undefined8 *)(lVar10 + 0x98) = uStack_130;
              *(undefined8 *)(lVar10 + 0xb0) = uStack_118;
              *(undefined8 *)(lVar10 + 0xa8) = uStack_120;
              *(undefined8 *)(lVar10 + 0xb8) = uStack_110;
              bVar8 = true;
            }
            uStack_138 = uVar4;
            uVar4 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_138);
            uVar2 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_c0,uVar4,0);
            if (!bVar8 && ((uVar2 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(lVar10 + 0xa0) = uStack_128;
              *(undefined8 *)(lVar10 + 0x98) = uStack_130;
              *(undefined8 *)(lVar10 + 0xb0) = uStack_118;
              *(undefined8 *)(lVar10 + 0xa8) = uStack_120;
              *(undefined8 *)(lVar10 + 0xb8) = uStack_110;
            }
          }
          /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_100,uRam0000000003d334e8);
          return;
        }
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar7 = (long *)___cxa_begin_catch();
    lVar3 = *plVar7;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_100,uRam0000000003d334e8);
    if (lVar3 == 0) {
      return;
    }
    func_0x00f78ac0(lVar3,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x14bc4b0 | Atlas.Gameplay.Usables.PlacementHomingProjectile.OnCharacterStartUse
// ============================================================

/* WARNING: Possible PIC construction at 0x014bc4d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bc818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce5c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014ce59c) */
/* WARNING: Removing unreachable block (ram,0x014ce5ac) */
/* WARNING: Removing unreachable block (ram,0x014ce5b4) */
/* WARNING: Removing unreachable block (ram,0x014ce5bc) */
/* WARNING: Removing unreachable block (ram,0x014ce284) */
/* WARNING: Removing unreachable block (ram,0x014ce2ac) */
/* WARNING: Removing unreachable block (ram,0x014ce2b4) */
/* WARNING: Removing unreachable block (ram,0x014ce2b8) */
/* WARNING: Removing unreachable block (ram,0x014ce2cc) */
/* WARNING: Removing unreachable block (ram,0x014ce2d4) */
/* WARNING: Removing unreachable block (ram,0x014ce2dc) */
/* WARNING: Removing unreachable block (ram,0x014ce368) */
/* WARNING: Removing unreachable block (ram,0x014ce2e8) */
/* WARNING: Removing unreachable block (ram,0x014ce2f0) */
/* WARNING: Removing unreachable block (ram,0x014ce378) */
/* WARNING: Removing unreachable block (ram,0x014ce2f8) */
/* WARNING: Removing unreachable block (ram,0x032a304c) */
/* WARNING: Removing unreachable block (ram,0x032a3074) */
/* WARNING: Removing unreachable block (ram,0x032a3088) */
/* WARNING: Removing unreachable block (ram,0x014bc81c) */
/* WARNING: Removing unreachable block (ram,0x014bc824) */
/* WARNING: Removing unreachable block (ram,0x014bc834) */
/* WARNING: Removing unreachable block (ram,0x014bc83c) */
/* WARNING: Removing unreachable block (ram,0x014bc844) */
/* WARNING: Removing unreachable block (ram,0x014bc854) */
/* WARNING: Removing unreachable block (ram,0x014bc4d4) */
/* WARNING: Removing unreachable block (ram,0x014bc4e8) */
/* WARNING: Removing unreachable block (ram,0x014bc4fc) */
/* WARNING: Removing unreachable block (ram,0x014bc554) */
/* WARNING: Removing unreachable block (ram,0x014bc558) */
/* WARNING: Removing unreachable block (ram,0x014bc520) */
/* WARNING: Removing unreachable block (ram,0x014bc524) */
/* WARNING: Removing unreachable block (ram,0x014bc52c) */
/* WARNING: Removing unreachable block (ram,0x014bc534) */
/* WARNING: Removing unreachable block (ram,0x014bc560) */
/* WARNING: Removing unreachable block (ram,0x014bc570) */
/* WARNING: Removing unreachable block (ram,0x014ce5c4) */
/* WARNING: Removing unreachable block (ram,0x014ce5c8) */
/* WARNING: Removing unreachable block (ram,0x014ce5e4) */
/* WARNING: Removing unreachable block (ram,0x014ce5ec) */
/* WARNING: Removing unreachable block (ram,0x014ce5f4) */
/* WARNING: Removing unreachable block (ram,0x014ce614) */
/* WARNING: Removing unreachable block (ram,0x014ce624) */
/* WARNING: Removing unreachable block (ram,0x014ce6d4) */
/* WARNING: Removing unreachable block (ram,0x014ce62c) */
/* WARNING: Removing unreachable block (ram,0x014ce638) */
/* WARNING: Removing unreachable block (ram,0x014ce678) */
/* WARNING: Removing unreachable block (ram,0x014ce6a0) */
/* WARNING: Removing unreachable block (ram,0x014ce654) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_Gameplay_Usables_PlacementHomingProjectile__OnCharacterStartUse
                 (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  int extraout_w1;
  long *plVar8;
  undefined1 uVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *******pppppppuVar14;
  undefined *puVar15;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 extraout_b0_03;
  undefined1 extraout_b0_04;
  undefined1 extraout_b0_05;
  undefined1 extraout_b0_06;
  undefined1 extraout_b0_07;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  float fVar16;
  float fVar17;
  uint uVar18;
  ulong unaff_d8;
  float fVar19;
  ulong unaff_d9;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  long lStack_330;
  long *plStack_328;
  undefined8 *******pppppppuStack_320;
  undefined *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  undefined8 *******pppppppuStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  long *plStack_2d8;
  long lStack_2d0;
  long *plStack_2c8;
  undefined8 *******pppppppuStack_2c0;
  undefined *puStack_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  undefined4 uStack_2a0;
  float fStack_29c;
  float fStack_298;
  undefined4 uStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  undefined8 *******pppppppuStack_220;
  undefined *puStack_218;
  undefined4 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  undefined8 *******pppppppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  undefined8 *******pppppppuStack_150;
  undefined *puStack_148;
  undefined8 *******pppppppuStack_120;
  undefined *puStack_118;
  undefined8 *******pppppppuStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined4 uStack_d8;
  undefined8 *******pppppppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 *******pppppppuStack_80;
  undefined *puStack_78;
  undefined8 *******pppppppuStack_50;
  undefined *puStack_48;
  
  lVar4 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingBehaviour();
  if (lVar4 == 0) {
    puVar15 = &Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__StartTransformAnim;
    lVar4 = func_0x00f78af4();
  }
  else {
    puVar15 = (undefined *)0x14bc4d4;
  }
  pppppppuStack_50 = (undefined8 *******)&stack0xfffffffffffffff0;
  puStack_48 = puVar15;
  if ((bRam0000000003eb4afc & 1) == 0) {
    func_0x00f78a20(0x3d23c70);
    bRam0000000003eb4afc = 1;
  }
  lVar4 = *(long *)(lVar4 + 0x70);
  if (((*(ushort *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar4 != 0) {
    uVar1 = **(undefined4 **)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8);
    plVar3 = (long *)&stack0xffffffffffffffc0;
    pppppppuVar14 = pppppppuStack_50;
    puVar15 = puStack_48;
    goto UnityEngine_Animator__SetBool;
  }
  unaff_x20 = func_0x00f78af4();
  uStack_90 = 0x3d23c70;
  puStack_78 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__GetTarget;
  lStack_88 = lVar4;
  pppppppuStack_80 = &pppppppuStack_50;
  lVar4 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(unaff_x20,0);
  if (lVar4 != 0) {
    lVar12 = *(long *)(lVar4 + 0x40);
    lVar4 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                      (unaff_x20);
    if (((lVar4 != 0) && (lVar12 != 0)) &&
       (lVar4 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetNthPlacedPlayer*/ func_0x015a3554(lVar12,*(undefined4 *)(lVar4 + 0xb8),0), lVar4 != 0)) {
      return *(long **)(lVar4 + 0x10);
    }
  }
  param_5 = func_0x00f78af4();
  puStack_98 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__Use;
  uStack_d8 = 0;
  lStack_e0 = 0;
  pppppppuStack_a0 = &pppppppuStack_80;
  if (*(long *)(param_5 + 0x28) == 0) {
code_r0x014bc80c:
    lVar4 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingBehaviour(param_5);
    if (lVar4 == 0) goto code_r0x014bc878;
    puVar15 = &UNK_014bc81c;
  }
  else {
    /*Atlas.Gameplay.Usables.ProjectileUsable$$SetStartPosition*/ func_0x014cd7ec(param_5,0);
    if (*(long *)(param_5 + 0x100) != 0) {
      /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(param_5 + 0x100),0);
      if (((*(long *)(param_5 + 0x28) != 0) &&
          (lVar4 = *(long *)(*(long *)(param_5 + 0x28) + 0x18), lVar4 != 0)) &&
         (*(long *)(param_5 + 0x100) != 0)) {
        param_4 = *(float *)(param_5 + 0x1b8) - *(float *)(lVar4 + 100);
        param_2 = param_2 + param_4;
        /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(*(long *)(param_5 + 0x100),0);
        if ((*(long *)(param_5 + 0x28) != 0) &&
           (lVar4 = *(long *)(*(long *)(param_5 + 0x28) + 0x10), lVar4 != 0)) {
          fVar17 = *(float *)(param_5 + 0x200);
          fVar19 = *(float *)(param_5 + 0x204);
          fVar20 = *(float *)(param_5 + 0x208);
          lVar4 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar4,0);
          lStack_e0 = (ulong)*(uint *)(lVar4 + 0x104) << 0x20;
          uStack_d8 = 0;
          /*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc(&lStack_e0,0);
          /*Atlas.Gameplay.Usables.ProjectileUsable$$Use*/ func_0x014cdc80(SUB41(fVar17,0),fVar19,fVar20,
                          fVar17 * (float)CONCAT13(extraout_var_17,
                                                   CONCAT12(extraout_var_08,
                                                            CONCAT11(extraout_var,extraout_b0))),
                          fVar19 * (float)CONCAT13(extraout_var_17,
                                                   CONCAT12(extraout_var_08,
                                                            CONCAT11(extraout_var,extraout_b0))),
                          fVar20 * (float)CONCAT13(extraout_var_17,
                                                   CONCAT12(extraout_var_08,
                                                            CONCAT11(extraout_var,extraout_b0))),
                          param_5,0);
          unaff_x20 = *(long *)(param_5 + 0x100);
          uVar18 = *(uint *)(param_5 + 0x200);
          unaff_d8 = (ulong)uVar18;
          param_2 = *(float *)(param_5 + 0x204);
          unaff_d9 = (ulong)(uint)param_2;
          param_3 = *(float *)(param_5 + 0x208);
          /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
          param_4 = (float)CONCAT13(extraout_var_18,
                                    CONCAT12(extraout_var_09,
                                             CONCAT11(extraout_var_00,extraout_b0_00)));
          /*UnityEngine.Quaternion$$LookRotation*/ func_0x03251cec((char)uVar18,0);
          if (unaff_x20 != 0) {
            /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(unaff_x20,0);
            goto code_r0x014bc80c;
          }
        }
      }
    }
code_r0x014bc878:
    puVar15 = &Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__TriggerParentToWorld;
    lVar4 = func_0x00f78af4();
  }
  pppppppuStack_f0 = &pppppppuStack_a0;
  puStack_e8 = puVar15;
  if ((bRam0000000003eb4b01 & 1) == 0) {
    func_0x00f78a20(0x3d23c70);
    bRam0000000003eb4b01 = 1;
  }
  lVar4 = *(long *)(lVar4 + 0x70);
  if (((*(ushort *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar4 != 0) {
    uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 0x10);
    plVar3 = &lStack_e0;
    unaff_x21 = 0x3eb4000;
    pppppppuVar14 = pppppppuStack_f0;
    puVar15 = puStack_e8;
UnityEngine_Animator__SetBool:
    *(undefined8 *)((long)plVar3 + -0x30) = unaff_x22;
    *(undefined8 *)((long)plVar3 + -0x28) = unaff_x21;
    *(long *)((long)plVar3 + -0x20) = unaff_x20;
    *(long *)((long)plVar3 + -0x18) = param_5;
    *(undefined8 ********)((long)plVar3 + -0x10) = pppppppuVar14;
    *(undefined **)((long)plVar3 + -8) = puVar15;
    if (pcRam0000000003ebe420 == (code *)0x0) {
      pcRam0000000003ebe420 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar8 = (long *)(*pcRam0000000003ebe420)(lVar4,uVar1,1);
    return plVar8;
  }
  auVar21 = func_0x00f78af4();
  uStack_160 = auVar21._8_8_;
  plVar8 = auVar21._0_8_;
  if (*(char *)((long)plVar8 + 0x1d4) != '\0') {
    return plVar8;
  }
  puStack_118 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__FixedUpdate;
  pppppppuStack_120 = &pppppppuStack_f0;
  if ((bRam0000000003eb4b6f & 1) == 0) {
    func_0x00f78a20(0x3d23990,uStack_160,0);
    bRam0000000003eb4b6f = 1;
  }
  uStack_170 = 0x3eb4000;
  uStack_168 = 0x3d23990;
  puStack_148 = &UNK_014ce284;
  pppppppuStack_150 = &pppppppuStack_120;
  if ((bRam0000000003eb4b72 & 1) == 0) {
    plStack_158 = plVar8;
    func_0x00f78a20(0x3d23990);
    auVar21._8_8_ = uStack_160;
    auVar21._0_8_ = plStack_158;
    bRam0000000003eb4b72 = 1;
  }
  uStack_160 = auVar21._8_8_;
  plStack_158 = auVar21._0_8_;
  lVar4 = plVar8[0x19];
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar21._8_8_ = uStack_160;
    auVar21._0_8_ = plStack_158;
  }
  uStack_160 = auVar21._8_8_;
  plStack_158 = auVar21._0_8_;
  plVar5 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar4,0,0);
  if (((ulong)plVar5 & 1) != 0) {
    return plVar5;
  }
  lVar4 = plVar8[0x19];
  if (lVar4 != 0) {
    if (*(char *)(lVar4 + 0x44) == '\0') {
      return plVar5;
    }
    *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(lVar4 + 0x48);
    return plVar5;
  }
  auVar22 = func_0x00f78af4();
  plVar5 = auVar22._8_8_;
  plVar8 = auVar22._0_8_;
  puStack_178 = &Atlas_Gameplay_Usables_ProjectileUsable__EarlyUpdate;
  uStack_1c0 = unaff_d9;
  uStack_1b8 = unaff_d8;
  pppppppuStack_180 = &pppppppuStack_150;
  if ((bRam0000000003eb4b70 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d3ae20);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b70 = 1;
  }
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_208 = 0;
  if ((*(char *)((long)plVar8 + 300) == '\0') || ((char)plVar8[0xc] != '\0')) {
code_r0x014ce558:
    lVar4 = plVar8[0x19];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar8 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar4,0,0);
    if ((int)plVar8 == 0) {
      return plVar8;
    }
    puVar15 = &UNK_014ce59c;
  }
  else {
    if (plVar5 != (long *)0x0) {
      fVar17 = *(float *)(plVar8 + 0x2c);
      lVar4 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
            goto code_r0x014ce520;
          }
          piVar11 = piVar11 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar5,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014ce520:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
      fVar17 = fVar17 + (float)CONCAT13(extraout_var_19,
                                        CONCAT12(extraout_var_10,
                                                 CONCAT11(extraout_var_01,extraout_b0_01)));
      *(float *)(plVar8 + 0x2c) = fVar17;
      param_2 = _UNK_033f8508;
      if (_UNK_033f8508 <= fVar17) {
        *(undefined4 *)(plVar8 + 0x2c) = 0;
        uVar9 = 0;
        goto code_r0x01523e20;
      }
      goto code_r0x014ce558;
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar5 = (long *)___cxa_begin_catch();
      lVar4 = *plVar5;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_1d8,uRam0000000003d328c8);
      if (lVar4 == 0) {
        plVar8 = (long *)(**(code **)(*plVar8 + 0x228))(plVar8,*(undefined8 *)(*plVar8 + 0x230));
        return plVar8;
      }
      func_0x00f78ac0(lVar4,0);
    }
    puVar15 = &Atlas_Gameplay_Usables_ProjectileUsable__UpdateReplicator;
    auVar22 = __Unwind_Resume();
  }
  plVar5 = auVar22._8_8_;
  plVar8 = auVar22._0_8_;
  lVar4 = 0x3eb4000;
  pppppppuStack_220 = &pppppppuStack_180;
  puStack_218 = puVar15;
  if ((bRam0000000003eb4b7e & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4b7e = 1;
  }
  if (plVar8[0x19] != 0) {
    plVar7 = (long *)/*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(plVar8[0x19],0);
    if ((int)plVar7 == 0) {
      return plVar7;
    }
    if (plVar5 != (long *)0x0) {
      lVar4 = plVar8[0x19];
      lVar12 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
            goto code_r0x014ce7e4;
          }
          piVar11 = piVar11 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar5,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014ce7e4:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((plVar8[0x1f] != 0) && (lVar12 = *(long *)(plVar8[0x1f] + 0x18), lVar12 != 0)) {
        lVar12 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar12,0);
        if (lVar12 != 0) {
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar12,0);
          if ((plVar8[0x1f] != 0) && (lVar12 = *(long *)(plVar8[0x1f] + 0x18), lVar12 != 0)) {
            fVar17 = param_2;
            fVar19 = param_3;
            /*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar12,0);
            if ((plVar8[0x1f] != 0) && (lVar12 = *(long *)(plVar8[0x1f] + 0x18), lVar12 != 0)) {
              fVar20 = fVar17;
              fVar16 = fVar19;
              lVar12 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar12,0);
              if ((lVar12 != 0) && (/*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar12,0), lVar4 != 0)) {
                uStack_294 = CONCAT13(extraout_var_23,
                                      CONCAT12(extraout_var_14,
                                               CONCAT11(extraout_var_05,extraout_b0_05)));
                uStack_2b0 = CONCAT13(extraout_var_20,
                                      CONCAT12(extraout_var_11,
                                               CONCAT11(extraout_var_02,extraout_b0_02)));
                uStack_2ac = CONCAT13(extraout_var_21,
                                      CONCAT12(extraout_var_12,
                                               CONCAT11(extraout_var_03,extraout_b0_03)));
                fStack_2a8 = param_2;
                fStack_2a4 = param_3;
                uStack_2a0 = CONCAT13(extraout_var_22,
                                      CONCAT12(extraout_var_13,
                                               CONCAT11(extraout_var_04,extraout_b0_04)));
                fStack_29c = fVar17;
                fStack_298 = fVar19;
                fStack_290 = fVar20;
                fStack_28c = fVar16;
                fStack_288 = param_4;
                /*Core.Services.Replicator$$UpdateTransform*/ func_0x0167f264(lVar4,&uStack_2b0,0);
                plVar7 = (long *)plVar8[0x19];
                if (plVar7 != (long *)0x0) {
                  if (*(char *)((long)plVar7 + 0x44) != '\0') {
                    return plVar7;
                  }
                  plVar7 = (long *)/*Core.Services.Replicator$$get_RigidBodyVelocity*/ func_0x0167f248(plVar7,0);
                  if (*(char *)((long)plVar8 + 0x15c) == '\0') {
                    if (((float)CONCAT13(extraout_var_24,
                                         CONCAT12(extraout_var_15,
                                                  CONCAT11(extraout_var_06,extraout_b0_06))) ==
                         _UNK_033f7d80 ||
                         (float)CONCAT13(extraout_var_24,
                                         CONCAT12(extraout_var_15,
                                                  CONCAT11(extraout_var_06,extraout_b0_06))) <
                         _UNK_033f7d80) && (fVar16 <= _UNK_033f7d80)) {
                      return plVar7;
                    }
                    *(undefined1 *)((long)plVar8 + 0x15c) = 1;
                    return plVar7;
                  }
                  if (((((float)CONCAT13(extraout_var_24,
                                         CONCAT12(extraout_var_15,
                                                  CONCAT11(extraout_var_06,extraout_b0_06))) <
                         _UNK_033f7d80) && (fVar20 < _UNK_033f7d80)) && (fVar16 < _UNK_033f7d80)) &&
                     (*(char *)((long)plVar8 + 0x12d) != '\0')) {
                    fVar17 = *(float *)(plVar8 + 0x2b);
                    plVar5 = (long *)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
                    fVar17 = fVar17 + (float)CONCAT13(extraout_var_25,
                                                      CONCAT12(extraout_var_16,
                                                               CONCAT11(extraout_var_07,
                                                                        extraout_b0_07)));
                    *(float *)(plVar8 + 0x2b) = fVar17;
                    if (fVar17 < _UNK_033f83ec) {
                      return plVar5;
                    }
code_r0x014ce940:
                    plVar8 = (long *)(**(code **)(*plVar8 + 0x228))
                                               (plVar8,*(undefined8 *)(*plVar8 + 0x230));
                    return plVar8;
                  }
                  if (plVar8[0x19] != 0) {
                    plVar5 = (long *)/*Core.Services.Replicator$$get_VelocityOnlyMode*/ func_0x0167f208(plVar8[0x19],0);
                    if ((int)plVar5 == 0) {
                      *(undefined4 *)(plVar8 + 0x2b) = 0;
                      return plVar5;
                    }
                    goto code_r0x014ce940;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar12 = func_0x00f78af4();
  uStack_2e0 = 0x3d23990;
  puStack_2b8 = &Atlas_Gameplay_Usables_ProjectileUsable__GetHitNetworkFlag;
  lStack_2d0 = lVar4;
  pppppppuStack_2c0 = &pppppppuStack_220;
  if ((bRam0000000003eb4b76 & 1) == 0) {
    plStack_2d8 = plVar5;
    plStack_2c8 = plVar8;
    func_0x00f78a20(0x3d23990);
    auVar22._8_8_ = plStack_2d8;
    auVar22._0_8_ = plStack_2c8;
    bRam0000000003eb4b76 = 1;
  }
  plStack_2d8 = auVar22._8_8_;
  plStack_2c8 = auVar22._0_8_;
  uVar13 = *(undefined8 *)(lVar12 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar22._8_8_ = plStack_2d8;
    auVar22._0_8_ = plStack_2c8;
  }
  plStack_2d8 = auVar22._8_8_;
  plStack_2c8 = auVar22._0_8_;
  uVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar13,0,0);
  if ((uVar10 & 1) == 0) {
    lVar4 = *(long *)(lVar12 + 200);
    if (lVar4 == 0) {
      plVar5 = (long *)func_0x00f78af4();
      uStack_310 = 0x3d23990;
      uStack_308 = 0x3d23990;
      puStack_2e8 = &Atlas_Gameplay_Usables_ProjectileUsable__GetHitSyncId;
      uStack_300 = uVar13;
      lStack_2f8 = lVar12;
      pppppppuStack_2f0 = &pppppppuStack_2c0;
      if ((bRam0000000003eb4b77 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b77 = 1;
      }
      lVar4 = plVar5[0x19];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar18 = 0;
      uVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar4,0);
      if ((uVar10 & 1) == 0) {
        lVar12 = plVar5[0x19];
        if (lVar12 == 0) {
          plVar8 = (long *)func_0x00f78af4();
          plVar2 = &lStack_330;
          puStack_318 = &Atlas_Gameplay_Usables_ProjectileUsable__Destroy;
          pppppppuVar14 = &pppppppuStack_320;
          lStack_330 = lVar4;
          plStack_328 = plVar5;
          pppppppuStack_320 = &pppppppuStack_2f0;
          plVar5 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar8,0);
          if (((ulong)plVar5 & 1) == 0) {
            plVar5 = (long *)/*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar8,0);
            if ((plVar5 == (long *)0x0) || (plVar5[0x18] == 0)) {
              puVar15 = &Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
              auVar23 = func_0x00f78af4();
code_r0x014ceb60:
              plVar5 = auVar23._0_8_;
              *(long *)((long)plVar2 + -0x20) = lVar4;
              *(long **)((long)plVar2 + -0x18) = plVar8;
              *(undefined8 ********)((long)plVar2 + -0x10) = pppppppuVar14;
              *(undefined **)((long)plVar2 + -8) = puVar15;
              if ((*(char *)((long)plVar5 + 300) != '\0') == uVar18) {
                return plVar5;
              }
              if (auVar23._8_4_ != 0) {
                (**(code **)(*plVar5 + 0x448))(plVar5,*(undefined8 *)(*plVar5 + 0x450));
              }
              *(char *)((long)plVar5 + 300) = (char)uVar18;
              if (((plVar5[9] != 0) && (lVar4 = *(long *)(plVar5[9] + 0x28), lVar4 != 0)) &&
                 (lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar4,0), lVar4 != 0)) {
                *(undefined8 *)((long)plVar2 + -0x30) = 0x3d23990;
                *(undefined8 *)((long)plVar2 + -0x28) = 0x3d23990;
                *(undefined8 *)((long)plVar2 + -0x20) = *(undefined8 *)((long)plVar2 + -0x20);
                *(undefined8 *)((long)plVar2 + -0x18) = *(undefined8 *)((long)plVar2 + -0x18);
                *(undefined8 *)((long)plVar2 + -0x10) = *(undefined8 *)((long)plVar2 + -0x10);
                *(undefined8 *)((long)plVar2 + -8) = *(undefined8 *)((long)plVar2 + -8);
                if (pcRam0000000003ebf4c0 == (code *)0x0) {
                  pcRam0000000003ebf4c0 =
                       (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
                }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar8 = (long *)(*pcRam0000000003ebf4c0)(lVar4,uVar18 ^ 1);
                return plVar8;
              }
              plVar8 = (long *)func_0x00f78af4();
              return plVar8;
            }
            if (*(char *)(plVar5[0x18] + 0x50) == '\0') {
              auVar23._8_4_ = 1;
              auVar23._0_8_ = plVar8;
              uVar18 = 1;
              plVar2 = &uStack_310;
              plVar8 = plStack_328;
              lVar4 = lStack_330;
              pppppppuVar14 = pppppppuStack_320;
              puVar15 = puStack_318;
              goto code_r0x014ceb60;
            }
          }
          if ((char)plVar8[0xc] != '\0') {
            return plVar5;
          }
          uVar9 = 1;
code_r0x01523e20:
          *(undefined1 *)(plVar8 + 0xc) = 1;
          *(undefined1 *)((long)plVar8 + 0x61) = uVar9;
          return plVar8;
        }
        if (*(char *)(lVar12 + 0x44) == '\0') {
          return (long *)(*(ulong *)(lVar12 + 0x28) >>
                         ((ulong)*(uint *)((long)plVar5 + 0x19c) & 0x3f));
        }
      }
      return (long *)0xffffffff;
    }
    if (*(char *)(lVar4 + 0x44) == '\0') {
      return (long *)(ulong)((*(ulong *)(lVar4 + 0x28) >> ((ulong)*(uint *)(lVar12 + 0x198) & 0x3f)
                             & 0xff) == 1);
    }
  }
  return (long *)0x0;
}



// ============================================================
// RVA: 0x14bc690 | Atlas.Gameplay.Usables.PlacementHomingProjectile.GetTarget
// ============================================================

/* WARNING: Possible PIC construction at 0x014bc818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce5c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014ce59c) */
/* WARNING: Removing unreachable block (ram,0x014ce5ac) */
/* WARNING: Removing unreachable block (ram,0x014ce5b4) */
/* WARNING: Removing unreachable block (ram,0x014ce5bc) */
/* WARNING: Removing unreachable block (ram,0x014ce284) */
/* WARNING: Removing unreachable block (ram,0x014ce2ac) */
/* WARNING: Removing unreachable block (ram,0x014ce2b4) */
/* WARNING: Removing unreachable block (ram,0x014ce2b8) */
/* WARNING: Removing unreachable block (ram,0x014ce2cc) */
/* WARNING: Removing unreachable block (ram,0x014ce2d4) */
/* WARNING: Removing unreachable block (ram,0x014ce2dc) */
/* WARNING: Removing unreachable block (ram,0x014ce368) */
/* WARNING: Removing unreachable block (ram,0x014ce2e8) */
/* WARNING: Removing unreachable block (ram,0x014ce2f0) */
/* WARNING: Removing unreachable block (ram,0x014ce378) */
/* WARNING: Removing unreachable block (ram,0x014ce2f8) */
/* WARNING: Removing unreachable block (ram,0x032a304c) */
/* WARNING: Removing unreachable block (ram,0x032a3074) */
/* WARNING: Removing unreachable block (ram,0x032a3088) */
/* WARNING: Removing unreachable block (ram,0x014bc81c) */
/* WARNING: Removing unreachable block (ram,0x014bc824) */
/* WARNING: Removing unreachable block (ram,0x014bc834) */
/* WARNING: Removing unreachable block (ram,0x014bc83c) */
/* WARNING: Removing unreachable block (ram,0x014bc844) */
/* WARNING: Removing unreachable block (ram,0x014bc854) */
/* WARNING: Removing unreachable block (ram,0x014ce5c4) */
/* WARNING: Removing unreachable block (ram,0x014ce5c8) */
/* WARNING: Removing unreachable block (ram,0x014ce5e4) */
/* WARNING: Removing unreachable block (ram,0x014ce5ec) */
/* WARNING: Removing unreachable block (ram,0x014ce5f4) */
/* WARNING: Removing unreachable block (ram,0x014ce614) */
/* WARNING: Removing unreachable block (ram,0x014ce624) */
/* WARNING: Removing unreachable block (ram,0x014ce6d4) */
/* WARNING: Removing unreachable block (ram,0x014ce62c) */
/* WARNING: Removing unreachable block (ram,0x014ce638) */
/* WARNING: Removing unreachable block (ram,0x014ce678) */
/* WARNING: Removing unreachable block (ram,0x014ce6a0) */
/* WARNING: Removing unreachable block (ram,0x014ce654) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_Gameplay_Usables_PlacementHomingProjectile__GetTarget
                 (undefined1 param_1 [16],float param_2,float param_3,float param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  int extraout_w1;
  long *plVar7;
  undefined1 uVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *******pppppppuVar13;
  undefined *puVar14;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 extraout_b0_03;
  undefined1 extraout_b0_04;
  undefined1 extraout_b0_05;
  undefined1 extraout_b0_06;
  undefined1 extraout_b0_07;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  float fVar15;
  float fVar16;
  uint uVar17;
  ulong unaff_d8;
  float fVar18;
  ulong unaff_d9;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  long lStack_2c0;
  long *plStack_2b8;
  undefined8 *******pppppppuStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  undefined8 *******pppppppuStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  long *plStack_268;
  long lStack_260;
  long *plStack_258;
  undefined1 *******pppppppuStack_250;
  undefined *puStack_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  float fStack_238;
  float fStack_234;
  undefined4 uStack_230;
  float fStack_22c;
  float fStack_228;
  undefined4 uStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  undefined1 ******ppppppuStack_1b0;
  undefined *puStack_1a8;
  undefined4 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined1 *****pppppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined1 ****ppppuStack_e0;
  undefined *puStack_d8;
  undefined1 ***pppuStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined4 uStack_68;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  lVar3 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(param_5,0);
  if (lVar3 != 0) {
    lVar11 = *(long *)(lVar3 + 0x40);
    lVar3 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                      (param_5);
    if (((lVar3 != 0) && (lVar11 != 0)) &&
       (lVar3 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetNthPlacedPlayer*/ func_0x015a3554(lVar11,*(undefined4 *)(lVar3 + 0xb8),0), lVar3 != 0)) {
      return *(long **)(lVar3 + 0x10);
    }
  }
  lVar3 = func_0x00f78af4();
  puStack_28 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__Use;
  uStack_68 = 0;
  lStack_70 = 0;
  puStack_30 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar3 + 0x28) == 0) {
code_r0x014bc80c:
    lVar3 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingBehaviour(lVar3);
    if (lVar3 == 0) goto code_r0x014bc878;
    puVar14 = &UNK_014bc81c;
  }
  else {
    /*Atlas.Gameplay.Usables.ProjectileUsable$$SetStartPosition*/ func_0x014cd7ec(lVar3,0);
    if (*(long *)(lVar3 + 0x100) != 0) {
      /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar3 + 0x100),0);
      if (((*(long *)(lVar3 + 0x28) != 0) &&
          (lVar11 = *(long *)(*(long *)(lVar3 + 0x28) + 0x18), lVar11 != 0)) &&
         (*(long *)(lVar3 + 0x100) != 0)) {
        param_4 = *(float *)(lVar3 + 0x1b8) - *(float *)(lVar11 + 100);
        param_2 = param_2 + param_4;
        /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(*(long *)(lVar3 + 0x100),0);
        if ((*(long *)(lVar3 + 0x28) != 0) &&
           (lVar11 = *(long *)(*(long *)(lVar3 + 0x28) + 0x10), lVar11 != 0)) {
          fVar16 = *(float *)(lVar3 + 0x200);
          fVar18 = *(float *)(lVar3 + 0x204);
          fVar19 = *(float *)(lVar3 + 0x208);
          lVar11 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar11,0);
          lStack_70 = (ulong)*(uint *)(lVar11 + 0x104) << 0x20;
          uStack_68 = 0;
          /*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc(&lStack_70,0);
          /*Atlas.Gameplay.Usables.ProjectileUsable$$Use*/ func_0x014cdc80(SUB41(fVar16,0),fVar18,fVar19,
                          fVar16 * (float)CONCAT13(extraout_var_17,
                                                   CONCAT12(extraout_var_08,
                                                            CONCAT11(extraout_var,extraout_b0))),
                          fVar18 * (float)CONCAT13(extraout_var_17,
                                                   CONCAT12(extraout_var_08,
                                                            CONCAT11(extraout_var,extraout_b0))),
                          fVar19 * (float)CONCAT13(extraout_var_17,
                                                   CONCAT12(extraout_var_08,
                                                            CONCAT11(extraout_var,extraout_b0))),
                          lVar3,0);
          lVar11 = *(long *)(lVar3 + 0x100);
          uVar17 = *(uint *)(lVar3 + 0x200);
          unaff_d8 = (ulong)uVar17;
          param_2 = *(float *)(lVar3 + 0x204);
          unaff_d9 = (ulong)(uint)param_2;
          param_3 = *(float *)(lVar3 + 0x208);
          /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
          param_4 = (float)CONCAT13(extraout_var_18,
                                    CONCAT12(extraout_var_09,
                                             CONCAT11(extraout_var_00,extraout_b0_00)));
          /*UnityEngine.Quaternion$$LookRotation*/ func_0x03251cec((char)uVar17,0);
          if (lVar11 != 0) {
            /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(lVar11,0);
            goto code_r0x014bc80c;
          }
        }
      }
    }
code_r0x014bc878:
    puVar14 = &Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__TriggerParentToWorld;
    lVar3 = func_0x00f78af4();
  }
  ppuStack_80 = &puStack_30;
  puStack_78 = puVar14;
  if ((bRam0000000003eb4b01 & 1) == 0) {
    func_0x00f78a20(0x3d23c70);
    bRam0000000003eb4b01 = 1;
  }
  lVar3 = *(long *)(lVar3 + 0x70);
  if (((*(ushort *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar3 != 0) {
    uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 0x10);
    if (pcRam0000000003ebe420 == (code *)0x0) {
      pcRam0000000003ebe420 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar7 = (long *)(*pcRam0000000003ebe420)(lVar3,uVar1,1);
    return plVar7;
  }
  auVar20 = func_0x00f78af4();
  uStack_f0 = auVar20._8_8_;
  plVar7 = auVar20._0_8_;
  if (*(char *)((long)plVar7 + 0x1d4) != '\0') {
    return plVar7;
  }
  puStack_a8 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__FixedUpdate;
  pppuStack_b0 = &ppuStack_80;
  if ((bRam0000000003eb4b6f & 1) == 0) {
    func_0x00f78a20(0x3d23990,uStack_f0,0);
    bRam0000000003eb4b6f = 1;
  }
  uStack_100 = 0x3eb4000;
  uStack_f8 = 0x3d23990;
  puStack_d8 = &UNK_014ce284;
  ppppuStack_e0 = &pppuStack_b0;
  if ((bRam0000000003eb4b72 & 1) == 0) {
    plStack_e8 = plVar7;
    func_0x00f78a20(0x3d23990);
    auVar20._8_8_ = uStack_f0;
    auVar20._0_8_ = plStack_e8;
    bRam0000000003eb4b72 = 1;
  }
  uStack_f0 = auVar20._8_8_;
  plStack_e8 = auVar20._0_8_;
  lVar3 = plVar7[0x19];
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar20._8_8_ = uStack_f0;
    auVar20._0_8_ = plStack_e8;
  }
  uStack_f0 = auVar20._8_8_;
  plStack_e8 = auVar20._0_8_;
  plVar4 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar3,0,0);
  if (((ulong)plVar4 & 1) != 0) {
    return plVar4;
  }
  lVar3 = plVar7[0x19];
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x44) == '\0') {
      return plVar4;
    }
    *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(lVar3 + 0x48);
    return plVar4;
  }
  auVar21 = func_0x00f78af4();
  plVar4 = auVar21._8_8_;
  plVar7 = auVar21._0_8_;
  puStack_108 = &Atlas_Gameplay_Usables_ProjectileUsable__EarlyUpdate;
  uStack_150 = unaff_d9;
  uStack_148 = unaff_d8;
  pppppuStack_110 = &ppppuStack_e0;
  if ((bRam0000000003eb4b70 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d3ae20);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b70 = 1;
  }
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_198 = 0;
  if ((*(char *)((long)plVar7 + 300) == '\0') || ((char)plVar7[0xc] != '\0')) {
code_r0x014ce558:
    lVar3 = plVar7[0x19];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar7 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar3,0,0);
    if ((int)plVar7 == 0) {
      return plVar7;
    }
    puVar14 = &UNK_014ce59c;
  }
  else {
    if (plVar4 != (long *)0x0) {
      fVar16 = *(float *)(plVar7 + 0x2c);
      lVar3 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
            goto code_r0x014ce520;
          }
          piVar10 = piVar10 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014ce520:
      (*(code *)*puVar5)(plVar4,puVar5[1]);
      fVar16 = fVar16 + (float)CONCAT13(extraout_var_19,
                                        CONCAT12(extraout_var_10,
                                                 CONCAT11(extraout_var_01,extraout_b0_01)));
      *(float *)(plVar7 + 0x2c) = fVar16;
      param_2 = _UNK_033f8508;
      if (_UNK_033f8508 <= fVar16) {
        *(undefined4 *)(plVar7 + 0x2c) = 0;
        uVar8 = 0;
        goto code_r0x01523e20;
      }
      goto code_r0x014ce558;
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar4 = (long *)___cxa_begin_catch();
      lVar3 = *plVar4;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_168,uRam0000000003d328c8);
      if (lVar3 == 0) {
        plVar7 = (long *)(**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
        return plVar7;
      }
      func_0x00f78ac0(lVar3,0);
    }
    puVar14 = &Atlas_Gameplay_Usables_ProjectileUsable__UpdateReplicator;
    auVar21 = __Unwind_Resume();
  }
  plVar4 = auVar21._8_8_;
  plVar7 = auVar21._0_8_;
  lVar3 = 0x3eb4000;
  ppppppuStack_1b0 = &pppppuStack_110;
  puStack_1a8 = puVar14;
  if ((bRam0000000003eb4b7e & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4b7e = 1;
  }
  if (plVar7[0x19] != 0) {
    plVar6 = (long *)/*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(plVar7[0x19],0);
    if ((int)plVar6 == 0) {
      return plVar6;
    }
    if (plVar4 != (long *)0x0) {
      lVar3 = plVar7[0x19];
      lVar11 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto code_r0x014ce7e4;
          }
          piVar10 = piVar10 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014ce7e4:
      (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((plVar7[0x1f] != 0) && (lVar11 = *(long *)(plVar7[0x1f] + 0x18), lVar11 != 0)) {
        lVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar11,0);
        if (lVar11 != 0) {
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar11,0);
          if ((plVar7[0x1f] != 0) && (lVar11 = *(long *)(plVar7[0x1f] + 0x18), lVar11 != 0)) {
            fVar16 = param_2;
            fVar18 = param_3;
            /*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar11,0);
            if ((plVar7[0x1f] != 0) && (lVar11 = *(long *)(plVar7[0x1f] + 0x18), lVar11 != 0)) {
              fVar19 = fVar16;
              fVar15 = fVar18;
              lVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar11,0);
              if ((lVar11 != 0) && (/*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar11,0), lVar3 != 0)) {
                uStack_224 = CONCAT13(extraout_var_23,
                                      CONCAT12(extraout_var_14,
                                               CONCAT11(extraout_var_05,extraout_b0_05)));
                uStack_240 = CONCAT13(extraout_var_20,
                                      CONCAT12(extraout_var_11,
                                               CONCAT11(extraout_var_02,extraout_b0_02)));
                uStack_23c = CONCAT13(extraout_var_21,
                                      CONCAT12(extraout_var_12,
                                               CONCAT11(extraout_var_03,extraout_b0_03)));
                fStack_238 = param_2;
                fStack_234 = param_3;
                uStack_230 = CONCAT13(extraout_var_22,
                                      CONCAT12(extraout_var_13,
                                               CONCAT11(extraout_var_04,extraout_b0_04)));
                fStack_22c = fVar16;
                fStack_228 = fVar18;
                fStack_220 = fVar19;
                fStack_21c = fVar15;
                fStack_218 = param_4;
                /*Core.Services.Replicator$$UpdateTransform*/ func_0x0167f264(lVar3,&uStack_240,0);
                plVar6 = (long *)plVar7[0x19];
                if (plVar6 != (long *)0x0) {
                  if (*(char *)((long)plVar6 + 0x44) != '\0') {
                    return plVar6;
                  }
                  plVar6 = (long *)/*Core.Services.Replicator$$get_RigidBodyVelocity*/ func_0x0167f248(plVar6,0);
                  if (*(char *)((long)plVar7 + 0x15c) == '\0') {
                    if (((float)CONCAT13(extraout_var_24,
                                         CONCAT12(extraout_var_15,
                                                  CONCAT11(extraout_var_06,extraout_b0_06))) ==
                         _UNK_033f7d80 ||
                         (float)CONCAT13(extraout_var_24,
                                         CONCAT12(extraout_var_15,
                                                  CONCAT11(extraout_var_06,extraout_b0_06))) <
                         _UNK_033f7d80) && (fVar15 <= _UNK_033f7d80)) {
                      return plVar6;
                    }
                    *(undefined1 *)((long)plVar7 + 0x15c) = 1;
                    return plVar6;
                  }
                  if (((((float)CONCAT13(extraout_var_24,
                                         CONCAT12(extraout_var_15,
                                                  CONCAT11(extraout_var_06,extraout_b0_06))) <
                         _UNK_033f7d80) && (fVar19 < _UNK_033f7d80)) && (fVar15 < _UNK_033f7d80)) &&
                     (*(char *)((long)plVar7 + 0x12d) != '\0')) {
                    fVar16 = *(float *)(plVar7 + 0x2b);
                    plVar4 = (long *)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
                    fVar16 = fVar16 + (float)CONCAT13(extraout_var_25,
                                                      CONCAT12(extraout_var_16,
                                                               CONCAT11(extraout_var_07,
                                                                        extraout_b0_07)));
                    *(float *)(plVar7 + 0x2b) = fVar16;
                    if (fVar16 < _UNK_033f83ec) {
                      return plVar4;
                    }
code_r0x014ce940:
                    plVar7 = (long *)(**(code **)(*plVar7 + 0x228))
                                               (plVar7,*(undefined8 *)(*plVar7 + 0x230));
                    return plVar7;
                  }
                  if (plVar7[0x19] != 0) {
                    plVar4 = (long *)/*Core.Services.Replicator$$get_VelocityOnlyMode*/ func_0x0167f208(plVar7[0x19],0);
                    if ((int)plVar4 == 0) {
                      *(undefined4 *)(plVar7 + 0x2b) = 0;
                      return plVar4;
                    }
                    goto code_r0x014ce940;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar11 = func_0x00f78af4();
  uStack_270 = 0x3d23990;
  puStack_248 = &Atlas_Gameplay_Usables_ProjectileUsable__GetHitNetworkFlag;
  lStack_260 = lVar3;
  pppppppuStack_250 = &ppppppuStack_1b0;
  if ((bRam0000000003eb4b76 & 1) == 0) {
    plStack_268 = plVar4;
    plStack_258 = plVar7;
    func_0x00f78a20(0x3d23990);
    auVar21._8_8_ = plStack_268;
    auVar21._0_8_ = plStack_258;
    bRam0000000003eb4b76 = 1;
  }
  plStack_268 = auVar21._8_8_;
  plStack_258 = auVar21._0_8_;
  uVar12 = *(undefined8 *)(lVar11 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar21._8_8_ = plStack_268;
    auVar21._0_8_ = plStack_258;
  }
  plStack_268 = auVar21._8_8_;
  plStack_258 = auVar21._0_8_;
  uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar12,0,0);
  if ((uVar9 & 1) == 0) {
    lVar3 = *(long *)(lVar11 + 200);
    if (lVar3 == 0) {
      plVar4 = (long *)func_0x00f78af4();
      uStack_2a0 = 0x3d23990;
      uStack_298 = 0x3d23990;
      puStack_278 = &Atlas_Gameplay_Usables_ProjectileUsable__GetHitSyncId;
      uStack_290 = uVar12;
      lStack_288 = lVar11;
      pppppppuStack_280 = &pppppppuStack_250;
      if ((bRam0000000003eb4b77 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b77 = 1;
      }
      lVar3 = plVar4[0x19];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar17 = 0;
      uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar3,0);
      if ((uVar9 & 1) == 0) {
        lVar11 = plVar4[0x19];
        if (lVar11 == 0) {
          plVar7 = (long *)func_0x00f78af4();
          plVar2 = &lStack_2c0;
          puStack_2a8 = &Atlas_Gameplay_Usables_ProjectileUsable__Destroy;
          pppppppuVar13 = &pppppppuStack_2b0;
          lStack_2c0 = lVar3;
          plStack_2b8 = plVar4;
          pppppppuStack_2b0 = &pppppppuStack_280;
          plVar4 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar7,0);
          if (((ulong)plVar4 & 1) == 0) {
            plVar4 = (long *)/*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar7,0);
            if ((plVar4 == (long *)0x0) || (plVar4[0x18] == 0)) {
              puVar14 = &Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
              auVar22 = func_0x00f78af4();
code_r0x014ceb60:
              plVar4 = auVar22._0_8_;
              *(long *)((long)plVar2 + -0x20) = lVar3;
              *(long **)((long)plVar2 + -0x18) = plVar7;
              *(undefined8 ********)((long)plVar2 + -0x10) = pppppppuVar13;
              *(undefined **)((long)plVar2 + -8) = puVar14;
              if ((*(char *)((long)plVar4 + 300) != '\0') == uVar17) {
                return plVar4;
              }
              if (auVar22._8_4_ != 0) {
                (**(code **)(*plVar4 + 0x448))(plVar4,*(undefined8 *)(*plVar4 + 0x450));
              }
              *(char *)((long)plVar4 + 300) = (char)uVar17;
              if (((plVar4[9] != 0) && (lVar3 = *(long *)(plVar4[9] + 0x28), lVar3 != 0)) &&
                 (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar3,0), lVar3 != 0)) {
                *(undefined8 *)((long)plVar2 + -0x30) = 0x3d23990;
                *(undefined8 *)((long)plVar2 + -0x28) = 0x3d23990;
                *(undefined8 *)((long)plVar2 + -0x20) = *(undefined8 *)((long)plVar2 + -0x20);
                *(undefined8 *)((long)plVar2 + -0x18) = *(undefined8 *)((long)plVar2 + -0x18);
                *(undefined8 *)((long)plVar2 + -0x10) = *(undefined8 *)((long)plVar2 + -0x10);
                *(undefined8 *)((long)plVar2 + -8) = *(undefined8 *)((long)plVar2 + -8);
                if (pcRam0000000003ebf4c0 == (code *)0x0) {
                  pcRam0000000003ebf4c0 =
                       (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
                }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar7 = (long *)(*pcRam0000000003ebf4c0)(lVar3,uVar17 ^ 1);
                return plVar7;
              }
              plVar7 = (long *)func_0x00f78af4();
              return plVar7;
            }
            if (*(char *)(plVar4[0x18] + 0x50) == '\0') {
              auVar22._8_4_ = 1;
              auVar22._0_8_ = plVar7;
              uVar17 = 1;
              plVar2 = &uStack_2a0;
              plVar7 = plStack_2b8;
              lVar3 = lStack_2c0;
              pppppppuVar13 = pppppppuStack_2b0;
              puVar14 = puStack_2a8;
              goto code_r0x014ceb60;
            }
          }
          if ((char)plVar7[0xc] != '\0') {
            return plVar4;
          }
          uVar8 = 1;
code_r0x01523e20:
          *(undefined1 *)(plVar7 + 0xc) = 1;
          *(undefined1 *)((long)plVar7 + 0x61) = uVar8;
          return plVar7;
        }
        if (*(char *)(lVar11 + 0x44) == '\0') {
          return (long *)(*(ulong *)(lVar11 + 0x28) >>
                         ((ulong)*(uint *)((long)plVar4 + 0x19c) & 0x3f));
        }
      }
      return (long *)0xffffffff;
    }
    if (*(char *)(lVar3 + 0x44) == '\0') {
      return (long *)(ulong)((*(ulong *)(lVar3 + 0x28) >> ((ulong)*(uint *)(lVar11 + 0x198) & 0x3f)
                             & 0xff) == 1);
    }
  }
  return (long *)0x0;
}



// ============================================================
// RVA: 0x14bc6e8 | Atlas.Gameplay.Usables.PlacementHomingProjectile.Use
// ============================================================

/* WARNING: Possible PIC construction at 0x014bc818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce5c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014ce59c) */
/* WARNING: Removing unreachable block (ram,0x014ce5ac) */
/* WARNING: Removing unreachable block (ram,0x014ce5b4) */
/* WARNING: Removing unreachable block (ram,0x014ce5bc) */
/* WARNING: Removing unreachable block (ram,0x014ce284) */
/* WARNING: Removing unreachable block (ram,0x014ce2ac) */
/* WARNING: Removing unreachable block (ram,0x014ce2b4) */
/* WARNING: Removing unreachable block (ram,0x014ce2b8) */
/* WARNING: Removing unreachable block (ram,0x014ce2cc) */
/* WARNING: Removing unreachable block (ram,0x014ce2d4) */
/* WARNING: Removing unreachable block (ram,0x014ce2dc) */
/* WARNING: Removing unreachable block (ram,0x014ce368) */
/* WARNING: Removing unreachable block (ram,0x014ce2e8) */
/* WARNING: Removing unreachable block (ram,0x014ce2f0) */
/* WARNING: Removing unreachable block (ram,0x014ce378) */
/* WARNING: Removing unreachable block (ram,0x014ce2f8) */
/* WARNING: Removing unreachable block (ram,0x032a304c) */
/* WARNING: Removing unreachable block (ram,0x032a3074) */
/* WARNING: Removing unreachable block (ram,0x032a3088) */
/* WARNING: Removing unreachable block (ram,0x014bc81c) */
/* WARNING: Removing unreachable block (ram,0x014bc824) */
/* WARNING: Removing unreachable block (ram,0x014bc834) */
/* WARNING: Removing unreachable block (ram,0x014bc83c) */
/* WARNING: Removing unreachable block (ram,0x014bc844) */
/* WARNING: Removing unreachable block (ram,0x014bc854) */
/* WARNING: Removing unreachable block (ram,0x014ce5c4) */
/* WARNING: Removing unreachable block (ram,0x014ce5c8) */
/* WARNING: Removing unreachable block (ram,0x014ce5e4) */
/* WARNING: Removing unreachable block (ram,0x014ce5ec) */
/* WARNING: Removing unreachable block (ram,0x014ce5f4) */
/* WARNING: Removing unreachable block (ram,0x014ce614) */
/* WARNING: Removing unreachable block (ram,0x014ce624) */
/* WARNING: Removing unreachable block (ram,0x014ce6d4) */
/* WARNING: Removing unreachable block (ram,0x014ce62c) */
/* WARNING: Removing unreachable block (ram,0x014ce638) */
/* WARNING: Removing unreachable block (ram,0x014ce678) */
/* WARNING: Removing unreachable block (ram,0x014ce6a0) */
/* WARNING: Removing unreachable block (ram,0x014ce654) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_Gameplay_Usables_PlacementHomingProjectile__Use
                 (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  int extraout_w1;
  long *plVar6;
  undefined1 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 *******pppppppuVar13;
  undefined *puVar14;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 extraout_b0_03;
  undefined1 extraout_b0_04;
  undefined1 extraout_b0_05;
  undefined1 extraout_b0_06;
  undefined1 extraout_b0_07;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  float fVar15;
  float fVar16;
  uint uVar17;
  ulong unaff_d8;
  float fVar18;
  ulong unaff_d9;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  long lStack_2a0;
  long *plStack_298;
  undefined8 *******pppppppuStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined1 *******pppppppuStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  long *plStack_248;
  long lStack_240;
  long *plStack_238;
  undefined1 ******ppppppuStack_230;
  undefined *puStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  float fStack_218;
  float fStack_214;
  undefined4 uStack_210;
  float fStack_20c;
  float fStack_208;
  undefined4 uStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  undefined1 *****pppppuStack_190;
  undefined *puStack_188;
  undefined4 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined1 ****ppppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined1 ***pppuStack_c0;
  undefined *puStack_b8;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined1 *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined4 uStack_48;
  
  uStack_48 = 0;
  lStack_50 = 0;
  if (*(long *)(param_5 + 0x28) == 0) {
LAB_014bc80c:
    lVar8 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingBehaviour(param_5);
    if (lVar8 == 0) goto LAB_014bc878;
    puVar14 = (undefined *)0x14bc81c;
  }
  else {
    /*Atlas.Gameplay.Usables.ProjectileUsable$$SetStartPosition*/ func_0x014cd7ec(param_5,0);
    if (*(long *)(param_5 + 0x100) != 0) {
      /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(param_5 + 0x100),0);
      if (((*(long *)(param_5 + 0x28) != 0) &&
          (lVar8 = *(long *)(*(long *)(param_5 + 0x28) + 0x18), lVar8 != 0)) &&
         (*(long *)(param_5 + 0x100) != 0)) {
        param_4 = *(float *)(param_5 + 0x1b8) - *(float *)(lVar8 + 100);
        param_2 = param_2 + param_4;
        /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(*(long *)(param_5 + 0x100),0);
        if ((*(long *)(param_5 + 0x28) != 0) &&
           (lVar8 = *(long *)(*(long *)(param_5 + 0x28) + 0x10), lVar8 != 0)) {
          fVar16 = *(float *)(param_5 + 0x200);
          fVar18 = *(float *)(param_5 + 0x204);
          fVar19 = *(float *)(param_5 + 0x208);
          lVar8 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar8,0);
          lStack_50 = (ulong)*(uint *)(lVar8 + 0x104) << 0x20;
          uStack_48 = 0;
          /*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc(&lStack_50,0);
          /*Atlas.Gameplay.Usables.ProjectileUsable$$Use*/ func_0x014cdc80(SUB41(fVar16,0),fVar18,fVar19,
                          fVar16 * (float)CONCAT13(extraout_var_17,
                                                   CONCAT12(extraout_var_08,
                                                            CONCAT11(extraout_var,extraout_b0))),
                          fVar18 * (float)CONCAT13(extraout_var_17,
                                                   CONCAT12(extraout_var_08,
                                                            CONCAT11(extraout_var,extraout_b0))),
                          fVar19 * (float)CONCAT13(extraout_var_17,
                                                   CONCAT12(extraout_var_08,
                                                            CONCAT11(extraout_var,extraout_b0))),
                          param_5,0);
          lVar8 = *(long *)(param_5 + 0x100);
          uVar17 = *(uint *)(param_5 + 0x200);
          unaff_d8 = (ulong)uVar17;
          param_2 = *(float *)(param_5 + 0x204);
          unaff_d9 = (ulong)(uint)param_2;
          param_3 = *(float *)(param_5 + 0x208);
          /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
          param_4 = (float)CONCAT13(extraout_var_18,
                                    CONCAT12(extraout_var_09,
                                             CONCAT11(extraout_var_00,extraout_b0_00)));
          /*UnityEngine.Quaternion$$LookRotation*/ func_0x03251cec((char)uVar17,0);
          if (lVar8 != 0) {
            /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(lVar8,0);
            goto LAB_014bc80c;
          }
        }
      }
    }
LAB_014bc878:
    puVar14 = &Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__TriggerParentToWorld;
    lVar8 = func_0x00f78af4();
  }
  puStack_60 = &stack0xfffffffffffffff0;
  puStack_58 = puVar14;
  if ((bRam0000000003eb4b01 & 1) == 0) {
    func_0x00f78a20(0x3d23c70);
    bRam0000000003eb4b01 = 1;
  }
  lVar8 = *(long *)(lVar8 + 0x70);
  if (((*(ushort *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar8 != 0) {
    uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 0x10);
    if (pcRam0000000003ebe420 == (code *)0x0) {
      pcRam0000000003ebe420 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar6 = (long *)(*pcRam0000000003ebe420)(lVar8,uVar1,1);
    return plVar6;
  }
  auVar20 = func_0x00f78af4();
  uStack_d0 = auVar20._8_8_;
  plVar6 = auVar20._0_8_;
  if (*(char *)((long)plVar6 + 0x1d4) != '\0') {
    return plVar6;
  }
  puStack_88 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__FixedUpdate;
  ppuStack_90 = &puStack_60;
  if ((bRam0000000003eb4b6f & 1) == 0) {
    func_0x00f78a20(0x3d23990,uStack_d0,0);
    bRam0000000003eb4b6f = 1;
  }
  uStack_e0 = 0x3eb4000;
  uStack_d8 = 0x3d23990;
  puStack_b8 = &UNK_014ce284;
  pppuStack_c0 = &ppuStack_90;
  if ((bRam0000000003eb4b72 & 1) == 0) {
    plStack_c8 = plVar6;
    func_0x00f78a20(0x3d23990);
    auVar20._8_8_ = uStack_d0;
    auVar20._0_8_ = plStack_c8;
    bRam0000000003eb4b72 = 1;
  }
  uStack_d0 = auVar20._8_8_;
  plStack_c8 = auVar20._0_8_;
  lVar8 = plVar6[0x19];
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar20._8_8_ = uStack_d0;
    auVar20._0_8_ = plStack_c8;
  }
  uStack_d0 = auVar20._8_8_;
  plStack_c8 = auVar20._0_8_;
  plVar3 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar8,0,0);
  if (((ulong)plVar3 & 1) != 0) {
    return plVar3;
  }
  lVar8 = plVar6[0x19];
  if (lVar8 != 0) {
    if (*(char *)(lVar8 + 0x44) == '\0') {
      return plVar3;
    }
    *(undefined8 *)(lVar8 + 0x48) = *(undefined8 *)(lVar8 + 0x48);
    return plVar3;
  }
  auVar21 = func_0x00f78af4();
  plVar3 = auVar21._8_8_;
  plVar6 = auVar21._0_8_;
  puStack_e8 = &Atlas_Gameplay_Usables_ProjectileUsable__EarlyUpdate;
  uStack_130 = unaff_d9;
  uStack_128 = unaff_d8;
  ppppuStack_f0 = &pppuStack_c0;
  if ((bRam0000000003eb4b70 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d3ae20);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b70 = 1;
  }
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_178 = 0;
  if ((*(char *)((long)plVar6 + 300) == '\0') || ((char)plVar6[0xc] != '\0')) {
code_r0x014ce558:
    lVar8 = plVar6[0x19];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar6 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar8,0,0);
    if ((int)plVar6 == 0) {
      return plVar6;
    }
    puVar14 = &UNK_014ce59c;
  }
  else {
    if (plVar3 != (long *)0x0) {
      fVar16 = *(float *)(plVar6 + 0x2c);
      lVar8 = *plVar3;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto code_r0x014ce520;
          }
          piVar11 = piVar11 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014ce520:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
      fVar16 = fVar16 + (float)CONCAT13(extraout_var_19,
                                        CONCAT12(extraout_var_10,
                                                 CONCAT11(extraout_var_01,extraout_b0_01)));
      *(float *)(plVar6 + 0x2c) = fVar16;
      param_2 = _UNK_033f8508;
      if (_UNK_033f8508 <= fVar16) {
        *(undefined4 *)(plVar6 + 0x2c) = 0;
        uVar7 = 0;
        goto code_r0x01523e20;
      }
      goto code_r0x014ce558;
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar3 = (long *)___cxa_begin_catch();
      lVar8 = *plVar3;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_148,uRam0000000003d328c8);
      if (lVar8 == 0) {
        plVar6 = (long *)(**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
        return plVar6;
      }
      func_0x00f78ac0(lVar8,0);
    }
    puVar14 = &Atlas_Gameplay_Usables_ProjectileUsable__UpdateReplicator;
    auVar21 = __Unwind_Resume();
  }
  plVar3 = auVar21._8_8_;
  plVar6 = auVar21._0_8_;
  lVar8 = 0x3eb4000;
  pppppuStack_190 = &ppppuStack_f0;
  puStack_188 = puVar14;
  if ((bRam0000000003eb4b7e & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4b7e = 1;
  }
  if (plVar6[0x19] != 0) {
    plVar5 = (long *)/*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(plVar6[0x19],0);
    if ((int)plVar5 == 0) {
      return plVar5;
    }
    if (plVar3 != (long *)0x0) {
      lVar8 = plVar6[0x19];
      lVar9 = *plVar3;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto code_r0x014ce7e4;
          }
          piVar11 = piVar11 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014ce7e4:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((plVar6[0x1f] != 0) && (lVar9 = *(long *)(plVar6[0x1f] + 0x18), lVar9 != 0)) {
        lVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar9,0);
        if (lVar9 != 0) {
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar9,0);
          if ((plVar6[0x1f] != 0) && (lVar9 = *(long *)(plVar6[0x1f] + 0x18), lVar9 != 0)) {
            fVar16 = param_2;
            fVar18 = param_3;
            /*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar9,0);
            if ((plVar6[0x1f] != 0) && (lVar9 = *(long *)(plVar6[0x1f] + 0x18), lVar9 != 0)) {
              fVar19 = fVar16;
              fVar15 = fVar18;
              lVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar9,0);
              if ((lVar9 != 0) && (/*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar9,0), lVar8 != 0)) {
                uStack_204 = CONCAT13(extraout_var_23,
                                      CONCAT12(extraout_var_14,
                                               CONCAT11(extraout_var_05,extraout_b0_05)));
                uStack_220 = CONCAT13(extraout_var_20,
                                      CONCAT12(extraout_var_11,
                                               CONCAT11(extraout_var_02,extraout_b0_02)));
                uStack_21c = CONCAT13(extraout_var_21,
                                      CONCAT12(extraout_var_12,
                                               CONCAT11(extraout_var_03,extraout_b0_03)));
                fStack_218 = param_2;
                fStack_214 = param_3;
                uStack_210 = CONCAT13(extraout_var_22,
                                      CONCAT12(extraout_var_13,
                                               CONCAT11(extraout_var_04,extraout_b0_04)));
                fStack_20c = fVar16;
                fStack_208 = fVar18;
                fStack_200 = fVar19;
                fStack_1fc = fVar15;
                fStack_1f8 = param_4;
                /*Core.Services.Replicator$$UpdateTransform*/ func_0x0167f264(lVar8,&uStack_220,0);
                plVar5 = (long *)plVar6[0x19];
                if (plVar5 != (long *)0x0) {
                  if (*(char *)((long)plVar5 + 0x44) != '\0') {
                    return plVar5;
                  }
                  plVar5 = (long *)/*Core.Services.Replicator$$get_RigidBodyVelocity*/ func_0x0167f248(plVar5,0);
                  if (*(char *)((long)plVar6 + 0x15c) == '\0') {
                    if (((float)CONCAT13(extraout_var_24,
                                         CONCAT12(extraout_var_15,
                                                  CONCAT11(extraout_var_06,extraout_b0_06))) ==
                         _UNK_033f7d80 ||
                         (float)CONCAT13(extraout_var_24,
                                         CONCAT12(extraout_var_15,
                                                  CONCAT11(extraout_var_06,extraout_b0_06))) <
                         _UNK_033f7d80) && (fVar15 <= _UNK_033f7d80)) {
                      return plVar5;
                    }
                    *(undefined1 *)((long)plVar6 + 0x15c) = 1;
                    return plVar5;
                  }
                  if (((((float)CONCAT13(extraout_var_24,
                                         CONCAT12(extraout_var_15,
                                                  CONCAT11(extraout_var_06,extraout_b0_06))) <
                         _UNK_033f7d80) && (fVar19 < _UNK_033f7d80)) && (fVar15 < _UNK_033f7d80)) &&
                     (*(char *)((long)plVar6 + 0x12d) != '\0')) {
                    fVar16 = *(float *)(plVar6 + 0x2b);
                    plVar3 = (long *)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
                    fVar16 = fVar16 + (float)CONCAT13(extraout_var_25,
                                                      CONCAT12(extraout_var_16,
                                                               CONCAT11(extraout_var_07,
                                                                        extraout_b0_07)));
                    *(float *)(plVar6 + 0x2b) = fVar16;
                    if (fVar16 < _UNK_033f83ec) {
                      return plVar3;
                    }
code_r0x014ce940:
                    plVar6 = (long *)(**(code **)(*plVar6 + 0x228))
                                               (plVar6,*(undefined8 *)(*plVar6 + 0x230));
                    return plVar6;
                  }
                  if (plVar6[0x19] != 0) {
                    plVar3 = (long *)/*Core.Services.Replicator$$get_VelocityOnlyMode*/ func_0x0167f208(plVar6[0x19],0);
                    if ((int)plVar3 == 0) {
                      *(undefined4 *)(plVar6 + 0x2b) = 0;
                      return plVar3;
                    }
                    goto code_r0x014ce940;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar9 = func_0x00f78af4();
  uStack_250 = 0x3d23990;
  puStack_228 = &Atlas_Gameplay_Usables_ProjectileUsable__GetHitNetworkFlag;
  lStack_240 = lVar8;
  ppppppuStack_230 = &pppppuStack_190;
  if ((bRam0000000003eb4b76 & 1) == 0) {
    plStack_248 = plVar3;
    plStack_238 = plVar6;
    func_0x00f78a20(0x3d23990);
    auVar21._8_8_ = plStack_248;
    auVar21._0_8_ = plStack_238;
    bRam0000000003eb4b76 = 1;
  }
  plStack_248 = auVar21._8_8_;
  plStack_238 = auVar21._0_8_;
  uVar12 = *(undefined8 *)(lVar9 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar21._8_8_ = plStack_248;
    auVar21._0_8_ = plStack_238;
  }
  plStack_248 = auVar21._8_8_;
  plStack_238 = auVar21._0_8_;
  uVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar12,0,0);
  if ((uVar10 & 1) == 0) {
    lVar8 = *(long *)(lVar9 + 200);
    if (lVar8 == 0) {
      plVar3 = (long *)func_0x00f78af4();
      uStack_280 = 0x3d23990;
      uStack_278 = 0x3d23990;
      puStack_258 = &Atlas_Gameplay_Usables_ProjectileUsable__GetHitSyncId;
      uStack_270 = uVar12;
      lStack_268 = lVar9;
      pppppppuStack_260 = &ppppppuStack_230;
      if ((bRam0000000003eb4b77 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b77 = 1;
      }
      lVar8 = plVar3[0x19];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar17 = 0;
      uVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar8,0);
      if ((uVar10 & 1) == 0) {
        lVar9 = plVar3[0x19];
        if (lVar9 == 0) {
          plVar6 = (long *)func_0x00f78af4();
          plVar2 = &lStack_2a0;
          puStack_288 = &Atlas_Gameplay_Usables_ProjectileUsable__Destroy;
          pppppppuVar13 = &pppppppuStack_290;
          lStack_2a0 = lVar8;
          plStack_298 = plVar3;
          pppppppuStack_290 = &pppppppuStack_260;
          plVar3 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar6,0);
          if (((ulong)plVar3 & 1) == 0) {
            plVar3 = (long *)/*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar6,0);
            if ((plVar3 == (long *)0x0) || (plVar3[0x18] == 0)) {
              puVar14 = &Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
              auVar22 = func_0x00f78af4();
code_r0x014ceb60:
              plVar3 = auVar22._0_8_;
              *(long *)((long)plVar2 + -0x20) = lVar8;
              *(long **)((long)plVar2 + -0x18) = plVar6;
              *(undefined8 ********)((long)plVar2 + -0x10) = pppppppuVar13;
              *(undefined **)((long)plVar2 + -8) = puVar14;
              if ((*(char *)((long)plVar3 + 300) != '\0') == uVar17) {
                return plVar3;
              }
              if (auVar22._8_4_ != 0) {
                (**(code **)(*plVar3 + 0x448))(plVar3,*(undefined8 *)(*plVar3 + 0x450));
              }
              *(char *)((long)plVar3 + 300) = (char)uVar17;
              if (((plVar3[9] != 0) && (lVar8 = *(long *)(plVar3[9] + 0x28), lVar8 != 0)) &&
                 (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar8,0), lVar8 != 0)) {
                *(undefined8 *)((long)plVar2 + -0x30) = 0x3d23990;
                *(undefined8 *)((long)plVar2 + -0x28) = 0x3d23990;
                *(undefined8 *)((long)plVar2 + -0x20) = *(undefined8 *)((long)plVar2 + -0x20);
                *(undefined8 *)((long)plVar2 + -0x18) = *(undefined8 *)((long)plVar2 + -0x18);
                *(undefined8 *)((long)plVar2 + -0x10) = *(undefined8 *)((long)plVar2 + -0x10);
                *(undefined8 *)((long)plVar2 + -8) = *(undefined8 *)((long)plVar2 + -8);
                if (pcRam0000000003ebf4c0 == (code *)0x0) {
                  pcRam0000000003ebf4c0 =
                       (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
                }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar6 = (long *)(*pcRam0000000003ebf4c0)(lVar8,uVar17 ^ 1);
                return plVar6;
              }
              plVar6 = (long *)func_0x00f78af4();
              return plVar6;
            }
            if (*(char *)(plVar3[0x18] + 0x50) == '\0') {
              auVar22._8_4_ = 1;
              auVar22._0_8_ = plVar6;
              uVar17 = 1;
              plVar2 = &uStack_280;
              plVar6 = plStack_298;
              lVar8 = lStack_2a0;
              pppppppuVar13 = pppppppuStack_290;
              puVar14 = puStack_288;
              goto code_r0x014ceb60;
            }
          }
          if ((char)plVar6[0xc] != '\0') {
            return plVar3;
          }
          uVar7 = 1;
code_r0x01523e20:
          *(undefined1 *)(plVar6 + 0xc) = 1;
          *(undefined1 *)((long)plVar6 + 0x61) = uVar7;
          return plVar6;
        }
        if (*(char *)(lVar9 + 0x44) == '\0') {
          return (long *)(*(ulong *)(lVar9 + 0x28) >>
                         ((ulong)*(uint *)((long)plVar3 + 0x19c) & 0x3f));
        }
      }
      return (long *)0xffffffff;
    }
    if (*(char *)(lVar8 + 0x44) == '\0') {
      return (long *)(ulong)((*(ulong *)(lVar8 + 0x28) >> ((ulong)*(uint *)(lVar9 + 0x198) & 0x3f) &
                             0xff) == 1);
    }
  }
  return (long *)0x0;
}



// ============================================================
// RVA: 0x14bc904 | Atlas.Gameplay.Usables.PlacementHomingProjectile.FixedUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x014ce280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce5c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014ce59c) */
/* WARNING: Removing unreachable block (ram,0x014ce5ac) */
/* WARNING: Removing unreachable block (ram,0x014ce5b4) */
/* WARNING: Removing unreachable block (ram,0x014ce5bc) */
/* WARNING: Removing unreachable block (ram,0x014ce284) */
/* WARNING: Removing unreachable block (ram,0x014ce2ac) */
/* WARNING: Removing unreachable block (ram,0x014ce2b4) */
/* WARNING: Removing unreachable block (ram,0x014ce2b8) */
/* WARNING: Removing unreachable block (ram,0x014ce2cc) */
/* WARNING: Removing unreachable block (ram,0x014ce2d4) */
/* WARNING: Removing unreachable block (ram,0x014ce2dc) */
/* WARNING: Removing unreachable block (ram,0x014ce368) */
/* WARNING: Removing unreachable block (ram,0x014ce2e8) */
/* WARNING: Removing unreachable block (ram,0x014ce2f0) */
/* WARNING: Removing unreachable block (ram,0x014ce378) */
/* WARNING: Removing unreachable block (ram,0x014ce2f8) */
/* WARNING: Removing unreachable block (ram,0x032a304c) */
/* WARNING: Removing unreachable block (ram,0x032a3074) */
/* WARNING: Removing unreachable block (ram,0x032a3088) */
/* WARNING: Removing unreachable block (ram,0x014ce5c4) */
/* WARNING: Removing unreachable block (ram,0x014ce5c8) */
/* WARNING: Removing unreachable block (ram,0x014ce5e4) */
/* WARNING: Removing unreachable block (ram,0x014ce5ec) */
/* WARNING: Removing unreachable block (ram,0x014ce5f4) */
/* WARNING: Removing unreachable block (ram,0x014ce614) */
/* WARNING: Removing unreachable block (ram,0x014ce624) */
/* WARNING: Removing unreachable block (ram,0x014ce6d4) */
/* WARNING: Removing unreachable block (ram,0x014ce62c) */
/* WARNING: Removing unreachable block (ram,0x014ce638) */
/* WARNING: Removing unreachable block (ram,0x014ce678) */
/* WARNING: Removing unreachable block (ram,0x014ce6a0) */
/* WARNING: Removing unreachable block (ram,0x014ce654) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_Gameplay_Usables_PlacementHomingProjectile__FixedUpdate
                 (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,
                 long *param_5,undefined8 param_6)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  int extraout_w1;
  undefined1 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *******pppppppuVar13;
  undefined *puVar14;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 extraout_b0_03;
  undefined1 extraout_b0_04;
  undefined1 extraout_b0_05;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  long lStack_220;
  long *plStack_218;
  undefined8 *******pppppppuStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 ******ppppppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c8;
  long lStack_1c0;
  long *plStack_1b8;
  undefined8 *****pppppuStack_1b0;
  undefined *puStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  float fStack_198;
  float fStack_194;
  undefined4 uStack_190;
  float fStack_18c;
  float fStack_188;
  undefined4 uStack_184;
  float fStack_180;
  float fStack_17c;
  undefined4 uStack_178;
  undefined8 ***pppuStack_110;
  undefined *puStack_108;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if (*(char *)((long)param_5 + 0x1d4) != '\0') {
    return param_5;
  }
  if ((bRam0000000003eb4b6f & 1) == 0) {
    func_0x00f78a20(0x3d23990,param_6,0);
    bRam0000000003eb4b6f = 1;
  }
  uStack_60 = 0x3eb4000;
  uStack_58 = 0x3d23990;
  puStack_38 = &UNK_014ce284;
  uStack_50 = param_6;
  plStack_48 = param_5;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b72 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b72 = 1;
  }
  lVar12 = param_5[0x19];
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar2 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar12,0,0);
  if (((ulong)plVar2 & 1) != 0) {
    return plVar2;
  }
  lVar12 = param_5[0x19];
  if (lVar12 != 0) {
    if (*(char *)(lVar12 + 0x44) == '\0') {
      return plVar2;
    }
    *(undefined8 *)(lVar12 + 0x48) = *(undefined8 *)(lVar12 + 0x48);
    return plVar2;
  }
  auVar19 = func_0x00f78af4();
  plVar4 = auVar19._8_8_;
  plVar2 = auVar19._0_8_;
  puStack_68 = &Atlas_Gameplay_Usables_ProjectileUsable__EarlyUpdate;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb4b70 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d3ae20);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b70 = 1;
  }
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  if ((*(char *)((long)plVar2 + 300) == '\0') || ((char)plVar2[0xc] != '\0')) {
code_r0x014ce558:
    lVar12 = plVar2[0x19];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar2 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar12,0,0);
    if ((int)plVar2 == 0) {
      return plVar2;
    }
    puVar14 = &UNK_014ce59c;
  }
  else {
    if (plVar4 != (long *)0x0) {
      fVar18 = *(float *)(plVar2 + 0x2c);
      lVar12 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar3 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
            goto code_r0x014ce520;
          }
          piVar10 = piVar10 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014ce520:
      (*(code *)*puVar3)(plVar4,puVar3[1]);
      fVar18 = fVar18 + (float)CONCAT13(extraout_var_13,
                                        CONCAT12(extraout_var_06,CONCAT11(extraout_var,extraout_b0))
                                       );
      *(float *)(plVar2 + 0x2c) = fVar18;
      param_2 = _UNK_033f8508;
      if (_UNK_033f8508 <= fVar18) {
        *(undefined4 *)(plVar2 + 0x2c) = 0;
        uVar6 = 0;
        goto code_r0x01523e20;
      }
      goto code_r0x014ce558;
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar4 = (long *)___cxa_begin_catch();
      lVar12 = *plVar4;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c8,uRam0000000003d328c8);
      if (lVar12 == 0) {
        plVar2 = (long *)(**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230));
        return plVar2;
      }
      func_0x00f78ac0(lVar12,0);
    }
    puVar14 = &Atlas_Gameplay_Usables_ProjectileUsable__UpdateReplicator;
    auVar19 = __Unwind_Resume();
  }
  plVar4 = auVar19._8_8_;
  plVar2 = auVar19._0_8_;
  lVar12 = 0x3eb4000;
  pppuStack_110 = (undefined8 ***)&ppuStack_70;
  puStack_108 = puVar14;
  if ((bRam0000000003eb4b7e & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4b7e = 1;
  }
  if (plVar2[0x19] != 0) {
    plVar5 = (long *)/*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(plVar2[0x19],0);
    if ((int)plVar5 == 0) {
      return plVar5;
    }
    if (plVar4 != (long *)0x0) {
      lVar12 = plVar2[0x19];
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto code_r0x014ce7e4;
          }
          piVar10 = piVar10 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014ce7e4:
      (*(code *)*puVar3)(plVar4,puVar3[1]);
      if ((plVar2[0x1f] != 0) && (lVar8 = *(long *)(plVar2[0x1f] + 0x18), lVar8 != 0)) {
        lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar8,0);
        if (lVar8 != 0) {
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar8,0);
          if ((plVar2[0x1f] != 0) && (lVar8 = *(long *)(plVar2[0x1f] + 0x18), lVar8 != 0)) {
            fVar18 = param_2;
            fVar16 = param_3;
            /*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar8,0);
            if ((plVar2[0x1f] != 0) && (lVar8 = *(long *)(plVar2[0x1f] + 0x18), lVar8 != 0)) {
              fVar15 = fVar18;
              fVar17 = fVar16;
              lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar8,0);
              if ((lVar8 != 0) && (/*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar8,0), lVar12 != 0)) {
                uStack_184 = CONCAT13(extraout_var_17,
                                      CONCAT12(extraout_var_10,
                                               CONCAT11(extraout_var_03,extraout_b0_03)));
                uStack_1a0 = CONCAT13(extraout_var_14,
                                      CONCAT12(extraout_var_07,
                                               CONCAT11(extraout_var_00,extraout_b0_00)));
                uStack_19c = CONCAT13(extraout_var_15,
                                      CONCAT12(extraout_var_08,
                                               CONCAT11(extraout_var_01,extraout_b0_01)));
                fStack_198 = param_2;
                fStack_194 = param_3;
                uStack_190 = CONCAT13(extraout_var_16,
                                      CONCAT12(extraout_var_09,
                                               CONCAT11(extraout_var_02,extraout_b0_02)));
                fStack_18c = fVar18;
                fStack_188 = fVar16;
                fStack_180 = fVar15;
                fStack_17c = fVar17;
                uStack_178 = param_4;
                /*Core.Services.Replicator$$UpdateTransform*/ func_0x0167f264(lVar12,&uStack_1a0,0);
                plVar5 = (long *)plVar2[0x19];
                if (plVar5 != (long *)0x0) {
                  if (*(char *)((long)plVar5 + 0x44) != '\0') {
                    return plVar5;
                  }
                  plVar5 = (long *)/*Core.Services.Replicator$$get_RigidBodyVelocity*/ func_0x0167f248(plVar5,0);
                  if (*(char *)((long)plVar2 + 0x15c) == '\0') {
                    if (((float)CONCAT13(extraout_var_18,
                                         CONCAT12(extraout_var_11,
                                                  CONCAT11(extraout_var_04,extraout_b0_04))) ==
                         _UNK_033f7d80 ||
                         (float)CONCAT13(extraout_var_18,
                                         CONCAT12(extraout_var_11,
                                                  CONCAT11(extraout_var_04,extraout_b0_04))) <
                         _UNK_033f7d80) && (fVar17 <= _UNK_033f7d80)) {
                      return plVar5;
                    }
                    *(undefined1 *)((long)plVar2 + 0x15c) = 1;
                    return plVar5;
                  }
                  if (((((float)CONCAT13(extraout_var_18,
                                         CONCAT12(extraout_var_11,
                                                  CONCAT11(extraout_var_04,extraout_b0_04))) <
                         _UNK_033f7d80) && (fVar15 < _UNK_033f7d80)) && (fVar17 < _UNK_033f7d80)) &&
                     (*(char *)((long)plVar2 + 0x12d) != '\0')) {
                    fVar18 = *(float *)(plVar2 + 0x2b);
                    plVar4 = (long *)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
                    fVar18 = fVar18 + (float)CONCAT13(extraout_var_19,
                                                      CONCAT12(extraout_var_12,
                                                               CONCAT11(extraout_var_05,
                                                                        extraout_b0_05)));
                    *(float *)(plVar2 + 0x2b) = fVar18;
                    if (fVar18 < _UNK_033f83ec) {
                      return plVar4;
                    }
code_r0x014ce940:
                    plVar2 = (long *)(**(code **)(*plVar2 + 0x228))
                                               (plVar2,*(undefined8 *)(*plVar2 + 0x230));
                    return plVar2;
                  }
                  if (plVar2[0x19] != 0) {
                    plVar4 = (long *)/*Core.Services.Replicator$$get_VelocityOnlyMode*/ func_0x0167f208(plVar2[0x19],0);
                    if ((int)plVar4 == 0) {
                      *(undefined4 *)(plVar2 + 0x2b) = 0;
                      return plVar4;
                    }
                    goto code_r0x014ce940;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar8 = func_0x00f78af4();
  uStack_1d0 = 0x3d23990;
  puStack_1a8 = &Atlas_Gameplay_Usables_ProjectileUsable__GetHitNetworkFlag;
  lStack_1c0 = lVar12;
  pppppuStack_1b0 = (undefined8 *****)&pppuStack_110;
  if ((bRam0000000003eb4b76 & 1) == 0) {
    plStack_1c8 = plVar4;
    plStack_1b8 = plVar2;
    func_0x00f78a20(0x3d23990);
    auVar19._8_8_ = plStack_1c8;
    auVar19._0_8_ = plStack_1b8;
    bRam0000000003eb4b76 = 1;
  }
  plStack_1c8 = auVar19._8_8_;
  plStack_1b8 = auVar19._0_8_;
  uVar11 = *(undefined8 *)(lVar8 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar19._8_8_ = plStack_1c8;
    auVar19._0_8_ = plStack_1b8;
  }
  plStack_1c8 = auVar19._8_8_;
  plStack_1b8 = auVar19._0_8_;
  uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar11,0,0);
  if ((uVar9 & 1) == 0) {
    lVar12 = *(long *)(lVar8 + 200);
    if (lVar12 == 0) {
      plVar4 = (long *)func_0x00f78af4();
      uStack_200 = 0x3d23990;
      uStack_1f8 = 0x3d23990;
      puStack_1d8 = &Atlas_Gameplay_Usables_ProjectileUsable__GetHitSyncId;
      uStack_1f0 = uVar11;
      lStack_1e8 = lVar8;
      ppppppuStack_1e0 = &pppppuStack_1b0;
      if ((bRam0000000003eb4b77 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b77 = 1;
      }
      lVar12 = plVar4[0x19];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = 0;
      uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar12,0);
      if ((uVar9 & 1) == 0) {
        lVar8 = plVar4[0x19];
        if (lVar8 == 0) {
          plVar2 = (long *)func_0x00f78af4();
          plVar1 = &lStack_220;
          puStack_208 = &Atlas_Gameplay_Usables_ProjectileUsable__Destroy;
          pppppppuVar13 = &pppppppuStack_210;
          lStack_220 = lVar12;
          plStack_218 = plVar4;
          pppppppuStack_210 = &ppppppuStack_1e0;
          plVar4 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar2,0);
          if (((ulong)plVar4 & 1) == 0) {
            plVar4 = (long *)/*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar2,0);
            if ((plVar4 == (long *)0x0) || (plVar4[0x18] == 0)) {
              puVar14 = &Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
              auVar20 = func_0x00f78af4();
code_r0x014ceb60:
              plVar4 = auVar20._0_8_;
              *(long *)((long)plVar1 + -0x20) = lVar12;
              *(long **)((long)plVar1 + -0x18) = plVar2;
              *(undefined8 ********)((long)plVar1 + -0x10) = pppppppuVar13;
              *(undefined **)((long)plVar1 + -8) = puVar14;
              if ((*(char *)((long)plVar4 + 300) != '\0') == uVar7) {
                return plVar4;
              }
              if (auVar20._8_4_ != 0) {
                (**(code **)(*plVar4 + 0x448))(plVar4,*(undefined8 *)(*plVar4 + 0x450));
              }
              *(char *)((long)plVar4 + 300) = (char)uVar7;
              if (((plVar4[9] != 0) && (lVar12 = *(long *)(plVar4[9] + 0x28), lVar12 != 0)) &&
                 (lVar12 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar12,0), lVar12 != 0)) {
                *(undefined8 *)((long)plVar1 + -0x30) = 0x3d23990;
                *(undefined8 *)((long)plVar1 + -0x28) = 0x3d23990;
                *(undefined8 *)((long)plVar1 + -0x20) = *(undefined8 *)((long)plVar1 + -0x20);
                *(undefined8 *)((long)plVar1 + -0x18) = *(undefined8 *)((long)plVar1 + -0x18);
                *(undefined8 *)((long)plVar1 + -0x10) = *(undefined8 *)((long)plVar1 + -0x10);
                *(undefined8 *)((long)plVar1 + -8) = *(undefined8 *)((long)plVar1 + -8);
                if (pcRam0000000003ebf4c0 == (code *)0x0) {
                  pcRam0000000003ebf4c0 =
                       (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
                }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar2 = (long *)(*pcRam0000000003ebf4c0)(lVar12,uVar7 ^ 1);
                return plVar2;
              }
              plVar2 = (long *)func_0x00f78af4();
              return plVar2;
            }
            if (*(char *)(plVar4[0x18] + 0x50) == '\0') {
              auVar20._8_4_ = 1;
              auVar20._0_8_ = plVar2;
              uVar7 = 1;
              plVar1 = &uStack_200;
              plVar2 = plStack_218;
              lVar12 = lStack_220;
              pppppppuVar13 = pppppppuStack_210;
              puVar14 = puStack_208;
              goto code_r0x014ceb60;
            }
          }
          if ((char)plVar2[0xc] != '\0') {
            return plVar4;
          }
          uVar6 = 1;
code_r0x01523e20:
          *(undefined1 *)(plVar2 + 0xc) = 1;
          *(undefined1 *)((long)plVar2 + 0x61) = uVar6;
          return plVar2;
        }
        if (*(char *)(lVar8 + 0x44) == '\0') {
          return (long *)(*(ulong *)(lVar8 + 0x28) >>
                         ((ulong)*(uint *)((long)plVar4 + 0x19c) & 0x3f));
        }
      }
      return (long *)0xffffffff;
    }
    if (*(char *)(lVar12 + 0x44) == '\0') {
      return (long *)(ulong)((*(ulong *)(lVar12 + 0x28) >> ((ulong)*(uint *)(lVar8 + 0x198) & 0x3f)
                             & 0xff) == 1);
    }
  }
  return (long *)0x0;
}



// ============================================================
// RVA: 0x14bc918 | Atlas.Gameplay.Usables.PlacementHomingProjectile.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x014bcf60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bca4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bca70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bd21c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bdb6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014be48c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bd164: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bd2ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bd080: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014bd2b0) */
/* WARNING: Removing unreachable block (ram,0x014bd2b8) */
/* WARNING: Removing unreachable block (ram,0x014bd2c0) */
/* WARNING: Removing unreachable block (ram,0x014bd2c8) */
/* WARNING: Removing unreachable block (ram,0x014bd2e8) */
/* WARNING: Removing unreachable block (ram,0x014bd2fc) */
/* WARNING: Removing unreachable block (ram,0x014bd310) */
/* WARNING: Removing unreachable block (ram,0x014bd338) */
/* WARNING: Removing unreachable block (ram,0x014bd340) */
/* WARNING: Removing unreachable block (ram,0x014bd3ac) */
/* WARNING: Removing unreachable block (ram,0x014bd34c) */
/* WARNING: Removing unreachable block (ram,0x014bd358) */
/* WARNING: Removing unreachable block (ram,0x014bd3bc) */
/* WARNING: Removing unreachable block (ram,0x014bdb70) */
/* WARNING: Removing unreachable block (ram,0x014bdb88) */
/* WARNING: Removing unreachable block (ram,0x014bdb90) */
/* WARNING: Removing unreachable block (ram,0x014bdbac) */
/* WARNING: Removing unreachable block (ram,0x014bdbb4) */
/* WARNING: Removing unreachable block (ram,0x014bdbd0) */
/* WARNING: Removing unreachable block (ram,0x014bdbe0) */
/* WARNING: Removing unreachable block (ram,0x014bdbf4) */
/* WARNING: Removing unreachable block (ram,0x014bdbfc) */
/* WARNING: Removing unreachable block (ram,0x014bdc04) */
/* WARNING: Removing unreachable block (ram,0x014bdc10) */
/* WARNING: Removing unreachable block (ram,0x014bdc18) */
/* WARNING: Removing unreachable block (ram,0x014bdc20) */
/* WARNING: Removing unreachable block (ram,0x014bdc28) */
/* WARNING: Removing unreachable block (ram,0x014bdc30) */
/* WARNING: Removing unreachable block (ram,0x014bdc48) */
/* WARNING: Removing unreachable block (ram,0x014bdc50) */
/* WARNING: Removing unreachable block (ram,0x014bdc58) */
/* WARNING: Removing unreachable block (ram,0x014bdc60) */
/* WARNING: Removing unreachable block (ram,0x014bdc68) */
/* WARNING: Removing unreachable block (ram,0x014bd220) */
/* WARNING: Removing unreachable block (ram,0x014bd228) */
/* WARNING: Removing unreachable block (ram,0x014bd230) */
/* WARNING: Removing unreachable block (ram,0x014bd238) */
/* WARNING: Removing unreachable block (ram,0x014bd25c) */
/* WARNING: Removing unreachable block (ram,0x014bd264) */
/* WARNING: Removing unreachable block (ram,0x014bd368) */
/* WARNING: Removing unreachable block (ram,0x014bd270) */
/* WARNING: Removing unreachable block (ram,0x014bd27c) */
/* WARNING: Removing unreachable block (ram,0x014bd378) */
/* WARNING: Removing unreachable block (ram,0x014bd3ec) */
/* WARNING: Removing unreachable block (ram,0x014bd3fc) */
/* WARNING: Removing unreachable block (ram,0x014bd404) */
/* WARNING: Removing unreachable block (ram,0x014bd414) */
/* WARNING: Removing unreachable block (ram,0x014bd41c) */
/* WARNING: Removing unreachable block (ram,0x014bd424) */
/* WARNING: Removing unreachable block (ram,0x014bd42c) */
/* WARNING: Removing unreachable block (ram,0x014bd43c) */
/* WARNING: Removing unreachable block (ram,0x014bd444) */
/* WARNING: Removing unreachable block (ram,0x014bd44c) */
/* WARNING: Removing unreachable block (ram,0x014bd458) */
/* WARNING: Removing unreachable block (ram,0x014bd460) */
/* WARNING: Removing unreachable block (ram,0x014bd468) */
/* WARNING: Removing unreachable block (ram,0x014bd470) */
/* WARNING: Removing unreachable block (ram,0x014bd478) */
/* WARNING: Removing unreachable block (ram,0x014bd490) */
/* WARNING: Removing unreachable block (ram,0x014bd498) */
/* WARNING: Removing unreachable block (ram,0x014bd4a0) */
/* WARNING: Removing unreachable block (ram,0x014bd4a8) */
/* WARNING: Removing unreachable block (ram,0x014bd4b0) */
/* WARNING: Removing unreachable block (ram,0x014bd4c4) */
/* WARNING: Removing unreachable block (ram,0x014bd4c8) */
/* WARNING: Removing unreachable block (ram,0x014bd4e0) */
/* WARNING: Removing unreachable block (ram,0x014bd4e8) */
/* WARNING: Removing unreachable block (ram,0x014bd510) */
/* WARNING: Removing unreachable block (ram,0x014bd4f4) */
/* WARNING: Removing unreachable block (ram,0x014bd500) */
/* WARNING: Removing unreachable block (ram,0x014bd51c) */
/* WARNING: Removing unreachable block (ram,0x014bda68) */
/* WARNING: Removing unreachable block (ram,0x014bda90) */
/* WARNING: Removing unreachable block (ram,0x014bdab0) */
/* WARNING: Removing unreachable block (ram,0x014bdab8) */
/* WARNING: Removing unreachable block (ram,0x014bdac8) */
/* WARNING: Removing unreachable block (ram,0x014bdad0) */
/* WARNING: Removing unreachable block (ram,0x014bdadc) */
/* WARNING: Removing unreachable block (ram,0x014bdb00) */
/* WARNING: Removing unreachable block (ram,0x014bdb2c) */
/* WARNING: Removing unreachable block (ram,0x014bdb34) */
/* WARNING: Removing unreachable block (ram,0x014bdb38) */
/* WARNING: Removing unreachable block (ram,0x014bdb3c) */
/* WARNING: Removing unreachable block (ram,0x014bdb40) */
/* WARNING: Removing unreachable block (ram,0x014bdb44) */
/* WARNING: Removing unreachable block (ram,0x014bdb48) */
/* WARNING: Removing unreachable block (ram,0x014bdb58) */
/* WARNING: Removing unreachable block (ram,0x014bdb5c) */
/* WARNING: Removing unreachable block (ram,0x014bdc7c) */
/* WARNING: Removing unreachable block (ram,0x014bdb60) */
/* WARNING: Removing unreachable block (ram,0x014bdc94) */
/* WARNING: Removing unreachable block (ram,0x014bdcfc) */
/* WARNING: Removing unreachable block (ram,0x014bdd1c) */
/* WARNING: Removing unreachable block (ram,0x014bdd24) */
/* WARNING: Removing unreachable block (ram,0x014bdd28) */
/* WARNING: Removing unreachable block (ram,0x014bdd2c) */
/* WARNING: Removing unreachable block (ram,0x014bdd34) */
/* WARNING: Removing unreachable block (ram,0x014bdd40) */
/* WARNING: Removing unreachable block (ram,0x014bdda0) */
/* WARNING: Removing unreachable block (ram,0x014bdd48) */
/* WARNING: Removing unreachable block (ram,0x014bdd60) */
/* WARNING: Removing unreachable block (ram,0x014bdd64) */
/* WARNING: Removing unreachable block (ram,0x014bdd68) */
/* WARNING: Removing unreachable block (ram,0x014bdd70) */
/* WARNING: Removing unreachable block (ram,0x014bdd74) */
/* WARNING: Removing unreachable block (ram,0x014bdd7c) */
/* WARNING: Removing unreachable block (ram,0x014bdd8c) */
/* WARNING: Removing unreachable block (ram,0x014bdcb8) */
/* WARNING: Removing unreachable block (ram,0x014bdcc0) */
/* WARNING: Removing unreachable block (ram,0x014bdcf0) */
/* WARNING: Removing unreachable block (ram,0x014bdcd0) */
/* WARNING: Removing unreachable block (ram,0x014bdb6c) */
/* WARNING: Removing unreachable block (ram,0x014bdda4) */
/* WARNING: Removing unreachable block (ram,0x014bddcc) */
/* WARNING: Removing unreachable block (ram,0x014bdde0) */
/* WARNING: Removing unreachable block (ram,0x014bddf0) */
/* WARNING: Removing unreachable block (ram,0x014bddf8) */
/* WARNING: Removing unreachable block (ram,0x014bddfc) */
/* WARNING: Removing unreachable block (ram,0x014bde28) */
/* WARNING: Removing unreachable block (ram,0x014bde64) */
/* WARNING: Removing unreachable block (ram,0x014bde78) */
/* WARNING: Removing unreachable block (ram,0x014bde80) */
/* WARNING: Removing unreachable block (ram,0x014bde88) */
/* WARNING: Removing unreachable block (ram,0x014bde94) */
/* WARNING: Removing unreachable block (ram,0x014bdeb0) */
/* WARNING: Removing unreachable block (ram,0x014bdff0) */
/* WARNING: Removing unreachable block (ram,0x014bdffc) */
/* WARNING: Removing unreachable block (ram,0x014bdeb8) */
/* WARNING: Removing unreachable block (ram,0x014bdebc) */
/* WARNING: Removing unreachable block (ram,0x014bded8) */
/* WARNING: Removing unreachable block (ram,0x014bdee0) */
/* WARNING: Removing unreachable block (ram,0x014bdf08) */
/* WARNING: Removing unreachable block (ram,0x014bdeec) */
/* WARNING: Removing unreachable block (ram,0x014bdef8) */
/* WARNING: Removing unreachable block (ram,0x014bdf18) */
/* WARNING: Removing unreachable block (ram,0x014bdf34) */
/* WARNING: Removing unreachable block (ram,0x014be020) */
/* WARNING: Removing unreachable block (ram,0x014be04c) */
/* WARNING: Removing unreachable block (ram,0x014be084) */
/* WARNING: Removing unreachable block (ram,0x014be0a4) */
/* WARNING: Removing unreachable block (ram,0x014be0ac) */
/* WARNING: Removing unreachable block (ram,0x014be0b0) */
/* WARNING: Removing unreachable block (ram,0x014be0d4) */
/* WARNING: Removing unreachable block (ram,0x014be0dc) */
/* WARNING: Removing unreachable block (ram,0x014be0e0) */
/* WARNING: Removing unreachable block (ram,0x014be0f4) */
/* WARNING: Removing unreachable block (ram,0x014be104) */
/* WARNING: Removing unreachable block (ram,0x014be118) */
/* WARNING: Removing unreachable block (ram,0x014be134) */
/* WARNING: Removing unreachable block (ram,0x014be13c) */
/* WARNING: Removing unreachable block (ram,0x014be164) */
/* WARNING: Removing unreachable block (ram,0x014be148) */
/* WARNING: Removing unreachable block (ram,0x014be154) */
/* WARNING: Removing unreachable block (ram,0x014be170) */
/* WARNING: Removing unreachable block (ram,0x014be180) */
/* WARNING: Removing unreachable block (ram,0x014be1a0) */
/* WARNING: Removing unreachable block (ram,0x014be1b0) */
/* WARNING: Removing unreachable block (ram,0x014be1b8) */
/* WARNING: Removing unreachable block (ram,0x014be1c0) */
/* WARNING: Removing unreachable block (ram,0x014be1cc) */
/* WARNING: Removing unreachable block (ram,0x014be1d0) */
/* WARNING: Removing unreachable block (ram,0x014be1ec) */
/* WARNING: Removing unreachable block (ram,0x014be1f8) */
/* WARNING: Removing unreachable block (ram,0x014be218) */
/* WARNING: Removing unreachable block (ram,0x014be220) */
/* WARNING: Removing unreachable block (ram,0x014be248) */
/* WARNING: Removing unreachable block (ram,0x014be27c) */
/* WARNING: Removing unreachable block (ram,0x014be290) */
/* WARNING: Removing unreachable block (ram,0x014be2ac) */
/* WARNING: Removing unreachable block (ram,0x014be2b4) */
/* WARNING: Removing unreachable block (ram,0x014be2e0) */
/* WARNING: Removing unreachable block (ram,0x014be36c) */
/* WARNING: Removing unreachable block (ram,0x014be370) */
/* WARNING: Removing unreachable block (ram,0x014be38c) */
/* WARNING: Removing unreachable block (ram,0x014be3ac) */
/* WARNING: Removing unreachable block (ram,0x014be3b4) */
/* WARNING: Removing unreachable block (ram,0x014be3c0) */
/* WARNING: Removing unreachable block (ram,0x014be3c8) */
/* WARNING: Removing unreachable block (ram,0x014be3d0) */
/* WARNING: Removing unreachable block (ram,0x014be3d8) */
/* WARNING: Removing unreachable block (ram,0x014be3e4) */
/* WARNING: Removing unreachable block (ram,0x014be3ec) */
/* WARNING: Removing unreachable block (ram,0x014be3f4) */
/* WARNING: Removing unreachable block (ram,0x014be3fc) */
/* WARNING: Removing unreachable block (ram,0x014be404) */
/* WARNING: Removing unreachable block (ram,0x014be41c) */
/* WARNING: Removing unreachable block (ram,0x014be424) */
/* WARNING: Removing unreachable block (ram,0x014be42c) */
/* WARNING: Removing unreachable block (ram,0x014be434) */
/* WARNING: Removing unreachable block (ram,0x014be43c) */
/* WARNING: Removing unreachable block (ram,0x014be450) */
/* WARNING: Removing unreachable block (ram,0x014be468) */
/* WARNING: Removing unreachable block (ram,0x014be490) */
/* WARNING: Removing unreachable block (ram,0x014ceadc) */
/* WARNING: Removing unreachable block (ram,0x014ceaf8) */
/* WARNING: Removing unreachable block (ram,0x014ceb08) */
/* WARNING: Removing unreachable block (ram,0x014ceb5c) */
/* WARNING: Removing unreachable block (ram,0x014ceb10) */
/* WARNING: Removing unreachable block (ram,0x014ceb44) */
/* WARNING: Removing unreachable block (ram,0x014ceb60) */
/* WARNING: Removing unreachable block (ram,0x014cebd4) */
/* WARNING: Removing unreachable block (ram,0x014ceb80) */
/* WARNING: Removing unreachable block (ram,0x014ceb8c) */
/* WARNING: Removing unreachable block (ram,0x014ceba0) */
/* WARNING: Removing unreachable block (ram,0x014cebac) */
/* WARNING: Removing unreachable block (ram,0x014cebb4) */
/* WARNING: Removing unreachable block (ram,0x014cebe0) */
/* WARNING: Removing unreachable block (ram,0x014cebc0) */
/* WARNING: Removing unreachable block (ram,0x014ceb18) */
/* WARNING: Removing unreachable block (ram,0x014ceb2c) */
/* WARNING: Removing unreachable block (ram,0x01523e20) */
/* WARNING: Removing unreachable block (ram,0x014ceb20) */
/* WARNING: Removing unreachable block (ram,0x014be488) */
/* WARNING: Removing unreachable block (ram,0x014be458) */
/* WARNING: Removing unreachable block (ram,0x014be45c) */
/* WARNING: Removing unreachable block (ram,0x014be328) */
/* WARNING: Removing unreachable block (ram,0x014be228) */
/* WARNING: Removing unreachable block (ram,0x014be234) */
/* WARNING: Removing unreachable block (ram,0x014bdf3c) */
/* WARNING: Removing unreachable block (ram,0x032a33dc) */
/* WARNING: Removing unreachable block (ram,0x032a3404) */
/* WARNING: Removing unreachable block (ram,0x032a3418) */
/* WARNING: Removing unreachable block (ram,0x014bde00) */
/* WARNING: Removing unreachable block (ram,0x0320d43c) */
/* WARNING: Removing unreachable block (ram,0x0320d464) */
/* WARNING: Removing unreachable block (ram,0x0320d478) */
/* WARNING: Removing unreachable block (ram,0x014bca50) */
/* WARNING: Removing unreachable block (ram,0x014bca74) */
/* WARNING: Removing unreachable block (ram,0x014bca7c) */
/* WARNING: Removing unreachable block (ram,0x014bca90) */
/* WARNING: Removing unreachable block (ram,0x014bcbf0) */
/* WARNING: Removing unreachable block (ram,0x014bcbf4) */
/* WARNING: Removing unreachable block (ram,0x014bcc0c) */
/* WARNING: Removing unreachable block (ram,0x014bcc14) */
/* WARNING: Removing unreachable block (ram,0x014bd060) */
/* WARNING: Removing unreachable block (ram,0x014bcc20) */
/* WARNING: Removing unreachable block (ram,0x014bcc2c) */
/* WARNING: Removing unreachable block (ram,0x014bd070) */
/* WARNING: Removing unreachable block (ram,0x014bca9c) */
/* WARNING: Removing unreachable block (ram,0x014bcaa8) */
/* WARNING: Removing unreachable block (ram,0x014bcac4) */
/* WARNING: Removing unreachable block (ram,0x014bcad4) */
/* WARNING: Removing unreachable block (ram,0x014bcadc) */
/* WARNING: Removing unreachable block (ram,0x014bcae4) */
/* WARNING: Removing unreachable block (ram,0x014bcaec) */
/* WARNING: Removing unreachable block (ram,0x014bcaf4) */
/* WARNING: Removing unreachable block (ram,0x014bcb00) */
/* WARNING: Removing unreachable block (ram,0x014bcb08) */
/* WARNING: Removing unreachable block (ram,0x014bcb10) */
/* WARNING: Removing unreachable block (ram,0x014bcb18) */
/* WARNING: Removing unreachable block (ram,0x014bcb20) */
/* WARNING: Removing unreachable block (ram,0x014bcb38) */
/* WARNING: Removing unreachable block (ram,0x014bcb40) */
/* WARNING: Removing unreachable block (ram,0x014bcb48) */
/* WARNING: Removing unreachable block (ram,0x014bcb50) */
/* WARNING: Removing unreachable block (ram,0x014bcb58) */
/* WARNING: Removing unreachable block (ram,0x014bcb6c) */
/* WARNING: Removing unreachable block (ram,0x014bcb74) */
/* WARNING: Removing unreachable block (ram,0x014bcfc4) */
/* WARNING: Removing unreachable block (ram,0x014bd1b0) */
/* WARNING: Removing unreachable block (ram,0x014bcfc8) */
/* WARNING: Removing unreachable block (ram,0x014bcfcc) */
/* WARNING: Removing unreachable block (ram,0x014bd1b4) */
/* WARNING: Removing unreachable block (ram,0x014bd1cc) */
/* WARNING: Removing unreachable block (ram,0x014bd1d4) */
/* WARNING: Removing unreachable block (ram,0x014bd28c) */
/* WARNING: Removing unreachable block (ram,0x014bd1e0) */
/* WARNING: Removing unreachable block (ram,0x014bd1ec) */
/* WARNING: Removing unreachable block (ram,0x014bd29c) */
/* WARNING: Removing unreachable block (ram,0x014bcb98) */
/* WARNING: Removing unreachable block (ram,0x014bd144) */
/* WARNING: Removing unreachable block (ram,0x014bd148) */
/* WARNING: Removing unreachable block (ram,0x014bcb9c) */
/* WARNING: Removing unreachable block (ram,0x014bd168) */
/* WARNING: Removing unreachable block (ram,0x014bd180) */
/* WARNING: Removing unreachable block (ram,0x014bd188) */
/* WARNING: Removing unreachable block (ram,0x014bd1fc) */
/* WARNING: Removing unreachable block (ram,0x014bd194) */
/* WARNING: Removing unreachable block (ram,0x014bd1a0) */
/* WARNING: Removing unreachable block (ram,0x014bd20c) */
/* WARNING: Removing unreachable block (ram,0x014bcba0) */
/* WARNING: Removing unreachable block (ram,0x014bca54) */
/* WARNING: Removing unreachable block (ram,0x014bca60) */
/* WARNING: Removing unreachable block (ram,0x014bca68) */
/* WARNING: Removing unreachable block (ram,0x0322ef1c) */
/* WARNING: Removing unreachable block (ram,0x0322ef40) */
/* WARNING: Removing unreachable block (ram,0x0322ef54) */
/* WARNING: Removing unreachable block (ram,0x014bcf64) */
/* WARNING: Removing unreachable block (ram,0x014bcf68) */
/* WARNING: Removing unreachable block (ram,0x014bcf6c) */
/* WARNING: Removing unreachable block (ram,0x014bcf70) */
/* WARNING: Removing unreachable block (ram,0x014bcf78) */
/* WARNING: Removing unreachable block (ram,0x014bd084) */

ulong Atlas_Gameplay_Usables_PlacementHomingProjectile__Update(ulong param_1,long *param_2)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  undefined8 unaff_x22;
  undefined8 uVar10;
  undefined8 ******ppppppuVar11;
  undefined *puVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  float fVar18;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  float extraout_s0_03;
  undefined4 extraout_s0_04;
  undefined4 extraout_s0_05;
  ulong extraout_d0;
  ulong extraout_d0_00;
  undefined8 uVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined4 in_s3;
  undefined4 uVar24;
  float fVar25;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long *plStack_90;
  ulong uStack_88;
  undefined8 *****pppppuStack_80;
  undefined *puStack_78;
  uint auStack_70 [4];
  
  puVar1 = (ulong *)auStack_70;
  ppppppuVar11 = (undefined8 ******)&stack0xfffffffffffffff0;
  lVar9 = 0x3eb4000;
  uVar3 = param_1;
  if ((bRam0000000003eb4af5 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d3b878);
    func_0x00f78a20(0x3d3b888);
    func_0x00f78a20(0x3d3b890);
    uVar3 = func_0x00f78a20(0x3d24070);
    bRam0000000003eb4af5 = 1;
  }
  if (*(char *)(param_1 + 0x60) != '\0') {
    return uVar3;
  }
  if (*(char *)(param_1 + 0x1d4) == '\0') {
    Atlas_Gameplay_Usables_CollidableUsable__Update(param_1,param_2,0);
    if (*(char *)(param_1 + 0x18) == '\0') {
      if (param_2 != (long *)0x0) {
        lVar9 = 0x3d22618;
        lVar7 = *param_2;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar3 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 4) * 0x10 + 0x138);
              goto code_r0x014bd004;
            }
            piVar8 = piVar8 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,4);
code_r0x014bd004:
        uVar3 = (*(code *)*puVar4)(param_2,puVar4[1]);
        *(undefined4 *)(param_1 + 0x21c) = extraout_s0;
        if (*(char *)(param_1 + 0x20c) == '\0') {
          return uVar3;
        }
        fVar25 = *(float *)(param_1 + 0x210);
        unaff_d8 = (ulong)(uint)fVar25;
        lVar7 = *param_2;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar3 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto code_r0x014bd0b4;
            }
            piVar8 = piVar8 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014bd0b4:
        fVar13 = (float)(*(code *)*puVar4)(param_2,puVar4[1]);
        *(float *)(param_1 + 0x210) = fVar25 + fVar13;
        /*UnityEngine.Mathf$$InverseLerp*/ func_0x0323d5e4(0,*(undefined4 *)(param_1 + 0x214),0);
        uVar14 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(0);
        lVar7 = *(long *)(param_1 + 0x100);
        param_2 = (long *)0x0;
        if (lVar7 != 0) {
          /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar7,0);
          auStack_70[0] = uVar14;
          /*UnityEngine.Quaternion$$Slerp*/ func_0x0325174c(0);
          if (pcRam0000000003ec1988 == (code *)0x0) {
            pcRam0000000003ec1988 =
                 (code *)func_0x00f789d4("UnityEngine.Transform::set_rotation_Injected(UnityEngine.Quaternion&)"
                                         ,0);
          }
          uVar3 = (*pcRam0000000003ec1988)(lVar7,&stack0xffffffffffffffd0);
          return uVar3;
        }
      }
      goto code_r0x014bd554;
    }
    *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_1 + 0xe0);
    *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_1 + 0xe8);
    lVar7 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingBehaviour(param_1);
    if (lVar7 == 0) goto code_r0x014bd554;
    puVar12 = &UNK_014bca50;
  }
  else {
    if (*(char *)(param_1 + 300) != '\0') {
      return uVar3;
    }
    if (param_2 == (long *)0x0) {
code_r0x014bd554:
      func_0x00f78af4();
      puVar12 = &Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__SetSteerParam;
      lVar7 = func_0x00f78e5c();
      uVar3 = extraout_d0;
    }
    else {
      fVar25 = *(float *)(param_1 + 0x1e4);
      unaff_d8 = (ulong)(uint)fVar25;
      uVar19 = 0x3d22618;
      uVar10 = 0x3d22618;
      lVar7 = *param_2;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto code_r0x014bcc48;
          }
          piVar8 = piVar8 + 4;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014bcc48:
      fVar13 = (float)(*(code *)*puVar4)(param_2,puVar4[1]);
      *(float *)(param_1 + 0x1e4) = fVar25 + fVar13;
      /*UnityEngine.Mathf$$InverseLerp*/ func_0x0323d5e4(0,*(undefined4 *)(param_1 + 0x1e8),0);
      uVar14 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(0);
      unaff_x22 = uVar19;
      if ((*(long *)(param_1 + 0xf8) == 0) ||
         (lVar7 = *(long *)(*(long *)(param_1 + 0xf8) + 0x18), lVar7 == 0)) goto code_r0x014bd554;
      unaff_d8 = (ulong)uVar14;
      uVar15 = /*UnityEngine.Rigidbody$$get_position*/ func_0x032a2e48(lVar7,0);
      unaff_x22 = uVar10;
      if ((*(long *)(param_1 + 0x1a0) == 0) ||
         ((lVar7 = *(long *)(*(long *)(param_1 + 0x1a0) + 0x20), lVar7 == 0 ||
          (lVar7 = *(long *)(lVar7 + 0x10), lVar7 == 0)))) goto code_r0x014bd554;
      unaff_d9 = (ulong)uVar15;
      lVar7 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar7,0);
      uVar20 = *(uint *)(lVar7 + 0x13c);
      uVar15 = /*UnityEngine.Mathf$$SmoothStep*/ func_0x0323d408(uVar15,uVar20,uVar14,0);
      if ((*(long *)(param_1 + 0xf8) == 0) ||
         (lVar7 = *(long *)(*(long *)(param_1 + 0xf8) + 0x18), lVar7 == 0)) goto code_r0x014bd554;
      unaff_d9 = (ulong)uVar15;
      /*UnityEngine.Rigidbody$$get_position*/ func_0x032a2e48(lVar7,0);
      if (((*(long *)(param_1 + 0x1a0) == 0) ||
          (lVar7 = *(long *)(*(long *)(param_1 + 0x1a0) + 0x20), lVar7 == 0)) ||
         (lVar7 = *(long *)(lVar7 + 0x10), lVar7 == 0)) goto code_r0x014bd554;
      unaff_d10 = (ulong)uVar20;
      lVar7 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar7,0);
      uVar16 = uVar14;
      uVar20 = /*UnityEngine.Mathf$$SmoothStep*/ func_0x0323d408(uVar20,*(undefined4 *)(lVar7 + 0x140),0);
      if ((*(long *)(param_1 + 0xf8) == 0) ||
         (lVar7 = *(long *)(*(long *)(param_1 + 0xf8) + 0x18), lVar7 == 0)) goto code_r0x014bd554;
      unaff_d10 = (ulong)uVar20;
      /*UnityEngine.Rigidbody$$get_position*/ func_0x032a2e48(lVar7,0);
      if ((*(long *)(param_1 + 0x1a0) == 0) ||
         ((lVar7 = *(long *)(*(long *)(param_1 + 0x1a0) + 0x20), lVar7 == 0 ||
          (lVar7 = *(long *)(lVar7 + 0x10), lVar7 == 0)))) goto code_r0x014bd554;
      unaff_d11 = (ulong)uVar16;
      lVar7 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar7,0);
      uVar16 = /*UnityEngine.Mathf$$SmoothStep*/ func_0x0323d408(uVar16,*(undefined4 *)(lVar7 + 0x144),uVar14,0);
      if ((*(long *)(param_1 + 0xf8) == 0) || (*(long *)(param_1 + 0x100) == 0))
      goto code_r0x014bd554;
      unaff_d11 = (ulong)uVar16;
      lVar9 = *(long *)(*(long *)(param_1 + 0xf8) + 0x18);
      /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(uVar15,uVar20,uVar16,*(long *)(param_1 + 0x100),0);
      if (lVar9 == 0) goto code_r0x014bd554;
      /*UnityEngine.Rigidbody$$set_position*/ func_0x032a2ef8(uVar15,uVar20,uVar16,lVar9,0);
      fVar25 = *(float *)(param_1 + 0x1dc);
      unaff_d9 = (ulong)(uint)fVar25;
      lVar7 = *param_2;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto code_r0x014bce08;
          }
          piVar8 = piVar8 + 4;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014bce08:
      fVar13 = (float)(*(code *)*puVar4)(param_2,puVar4[1]);
      fVar25 = fVar25 + fVar13;
      *(float *)(param_1 + 0x1dc) = fVar25;
      uVar20 = *(uint *)(param_1 + 0x1e0);
      /*UnityEngine.Mathf$$InverseLerp*/ func_0x0323d5e4(0,0);
      uVar15 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(0);
      if ((*(long *)(param_1 + 0xf8) == 0) ||
         (lVar9 = *(long *)(*(long *)(param_1 + 0xf8) + 0x18), lVar9 == 0)) goto code_r0x014bd554;
      unaff_d9 = (ulong)uVar15;
      uVar16 = /*UnityEngine.Rigidbody$$get_rotation*/ func_0x032a2fa0(lVar9,0);
      if ((*(long *)(param_1 + 0x1a0) == 0) ||
         ((lVar7 = *(long *)(*(long *)(param_1 + 0x1a0) + 0x20), lVar7 == 0 ||
          (lVar7 = *(long *)(lVar7 + 0x10), lVar7 == 0)))) goto code_r0x014bd554;
      unaff_d10 = (ulong)uVar16;
      unaff_d11 = (ulong)uVar20;
      lVar7 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar7,0);
      uVar21 = *(undefined4 *)(lVar7 + 0x14c);
      uVar23 = *(undefined4 *)(lVar7 + 0x150);
      uVar24 = *(undefined4 *)(lVar7 + 0x154);
      uVar17 = /*Unity.Mathematics.quaternion$$op_Implicit*/ func_0x030c6310(*(undefined4 *)(lVar7 + 0x148),uVar21,uVar23,uVar24,0);
      auStack_70[0] = uVar15;
      /*UnityEngine.Quaternion$$Slerp*/ func_0x0325174c(uVar16,uVar20,fVar25,in_s3,uVar17,uVar21,uVar23,uVar24,0);
      /*UnityEngine.Rigidbody$$set_rotation*/ func_0x032a304c(lVar9,0);
      fVar25 = *(float *)(param_1 + 0x1d8);
      unaff_d9 = (ulong)(uint)fVar25;
      lVar7 = *param_2;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto code_r0x014bcf24;
          }
          piVar8 = piVar8 + 4;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014bcf24:
      fVar13 = (float)(*(code *)*puVar4)(param_2,puVar4[1]);
      *(float *)(param_1 + 0x1d8) = fVar25 - fVar13;
      uVar17 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(*(undefined4 *)(param_1 + 0x1c4),0,uVar14,0);
      *(undefined4 *)(param_1 + 0x1c4) = uVar17;
      lVar7 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingBehaviour
                        (param_1);
      if (lVar7 == 0) goto code_r0x014bd554;
      uVar3 = (ulong)*(uint *)(param_1 + 0x1c4);
      puVar12 = &UNK_014bcf64;
      unaff_x22 = uVar19;
    }
    puVar1 = &uStack_b0;
    uStack_b0 = unaff_d9;
    uStack_a8 = unaff_d8;
    uStack_a0 = unaff_x22;
    lStack_98 = lVar9;
    plStack_90 = param_2;
    uStack_88 = param_1;
    pppppuStack_80 = ppppppuVar11;
    puStack_78 = puVar12;
    if ((bRam0000000003eb4aff & 1) == 0) {
      func_0x00f78a20(0x3d23c70);
      bRam0000000003eb4aff = 1;
    }
    lVar9 = *(long *)(lVar7 + 0x70);
    if (((*(ushort *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar9 != 0) {
      uVar17 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 8);
      if (pcRam0000000003ebe400 == (code *)0x0) {
        pcRam0000000003ebe400 =
             (code *)func_0x00f789d4("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)")
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*pcRam0000000003ebe400)(uVar3 & 0xffffffff,lVar9,uVar17);
      return uVar3;
    }
    puVar12 = &Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__IsInFlightAnim;
    lVar7 = func_0x00f78af4();
    param_1 = 0;
    param_2 = (long *)0x3d23c70;
    ppppppuVar11 = &pppppuStack_80;
    unaff_d8 = uVar3 & 0xffffffff;
  }
  *(long **)((long)puVar1 + -0x20) = param_2;
  *(ulong *)((long)puVar1 + -0x18) = param_1;
  *(undefined8 *******)((long)puVar1 + -0x10) = ppppppuVar11;
  *(undefined **)((long)puVar1 + -8) = puVar12;
  if ((bRam0000000003eb4afe & 1) == 0) {
    func_0x00f78a20(0x3d23c70);
    bRam0000000003eb4afe = 1;
  }
  if (*(long *)(lVar7 + 0x70) != 0) {
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50((undefined1 *)((long)puVar1 + -0x78),*(long *)(lVar7 + 0x70),0,0);
    *(undefined8 *)((long)puVar1 + -0x48) = *(undefined8 *)((long)puVar1 + -0x70);
    *(undefined8 *)((long)puVar1 + -0x50) = *(undefined8 *)((long)puVar1 + -0x78);
    *(undefined8 *)((long)puVar1 + -0x38) = *(undefined8 *)((long)puVar1 + -0x60);
    *(undefined8 *)((long)puVar1 + -0x40) = *(undefined8 *)((long)puVar1 + -0x68);
    *(undefined4 *)((long)puVar1 + -0x30) = *(undefined4 *)((long)puVar1 + -0x58);
    iVar2 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4((undefined1 *)((long)puVar1 + -0x50),0);
    if (((*(ushort *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return (ulong)(iVar2 == *(int *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 4));
  }
  lVar9 = func_0x00f78af4();
  *(ulong *)((long)puVar1 + -0xc0) = unaff_d11;
  *(ulong *)((long)puVar1 + -0xb8) = unaff_d10;
  *(ulong *)((long)puVar1 + -0xb0) = unaff_d9;
  *(ulong *)((long)puVar1 + -0xa8) = unaff_d8;
  *(undefined8 *)((long)puVar1 + -0xa0) = 0x3eb4000;
  *(long *)((long)puVar1 + -0x98) = lVar7;
  *(undefined1 **)((long)puVar1 + -0x90) = (undefined1 *)((long)puVar1 + -0x10);
  *(undefined **)((long)puVar1 + -0x88) =
       &Atlas_Gameplay_Usables_PlacementHomingProjectile__UpdateToInFlightSpeed;
  uVar3 = extraout_d0_00 & 0xffffffff;
  lVar7 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                    ();
  if (lVar7 != 0) {
    if (*(float *)(lVar7 + 0xc0) <= 0.0) {
      uVar5 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                        (lVar9);
      if (uVar5 != 0) {
        uVar17 = *(undefined4 *)(uVar5 + 0x88);
code_r0x014bd728:
        *(undefined4 *)(lVar9 + 0x128) = uVar17;
        return uVar5;
      }
    }
    else {
      fVar25 = *(float *)(lVar9 + 0x21c);
      unaff_d10 = (ulong)(uint)fVar25;
      lVar7 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                        (lVar9);
      if (lVar7 != 0) {
        fVar13 = *(float *)(lVar7 + 0xc0);
        unaff_d11 = (ulong)(uint)fVar13;
        uVar14 = *(uint *)(lVar9 + 0x128);
        unaff_d9 = (ulong)uVar14;
        lVar7 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                          (lVar9);
        if (lVar7 != 0) {
          uVar5 = /*UnityEngine.Mathf$$SmoothStep*/ func_0x0323d408(uVar14,*(undefined4 *)(lVar7 + 0x88),
                                  ((float)extraout_d0_00 - fVar25) / fVar13,0);
          uVar17 = extraout_s0_00;
          goto code_r0x014bd728;
        }
      }
    }
  }
  lVar7 = func_0x00f78af4();
  *(ulong *)((long)puVar1 + -0x100) = unaff_d11;
  *(ulong *)((long)puVar1 + -0xf8) = unaff_d10;
  *(ulong *)((long)puVar1 + -0xf0) = unaff_d9;
  *(ulong *)((long)puVar1 + -0xe8) = uVar3;
  *(undefined8 *)((long)puVar1 + -0xe0) = 0x3eb4000;
  *(long *)((long)puVar1 + -0xd8) = lVar9;
  *(undefined1 **)((long)puVar1 + -0xd0) = (undefined1 *)((long)puVar1 + -0x90);
  *(undefined **)((long)puVar1 + -200) =
       &Atlas_Gameplay_Usables_PlacementHomingProjectile__UpdateFloorPerimeterGap;
  lVar9 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                    ();
  if (lVar9 != 0) {
    uVar19 = *(undefined8 *)(lVar9 + 0xd0);
    uVar22 = *(undefined8 *)(lVar9 + 0xe8);
    uVar10 = *(undefined8 *)(lVar9 + 0xe0);
    *(undefined8 *)((long)puVar1 + -0x138) = *(undefined8 *)(lVar9 + 0xd8);
    *(undefined8 *)((long)puVar1 + -0x140) = uVar19;
    *(undefined8 *)((long)puVar1 + -0x128) = uVar22;
    *(undefined8 *)((long)puVar1 + -0x130) = uVar10;
    uVar19 = *(undefined8 *)(lVar9 + 0xf0);
    uVar22 = *(undefined8 *)(lVar9 + 0x108);
    uVar10 = *(undefined8 *)(lVar9 + 0x100);
    *(undefined8 *)((long)puVar1 + -0x118) = *(undefined8 *)(lVar9 + 0xf8);
    *(undefined8 *)((long)puVar1 + -0x120) = uVar19;
    *(undefined8 *)((long)puVar1 + -0x108) = uVar22;
    *(undefined8 *)((long)puVar1 + -0x110) = uVar10;
    uVar19 = *(undefined8 *)(lVar9 + 0xb0);
    uVar22 = *(undefined8 *)(lVar9 + 200);
    uVar10 = *(undefined8 *)(lVar9 + 0xc0);
    *(undefined8 *)((long)puVar1 + -0x158) = *(undefined8 *)(lVar9 + 0xb8);
    *(undefined8 *)((long)puVar1 + -0x160) = uVar19;
    *(undefined8 *)((long)puVar1 + -0x148) = uVar22;
    *(undefined8 *)((long)puVar1 + -0x150) = uVar10;
    fVar25 = (float)/*Atlas.Definitions.PlacementHomingProjectileDefinition.PlacementHomingProjectileData$$get_StartTrackingInAirTimer*/ func_0x01561f7c((undefined1 *)((long)puVar1 + -0x160),0);
    uVar3 = (ulong)(uint)fVar25;
    uVar5 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                      (lVar7);
    if (fVar25 <= 0.0) {
      if (uVar5 != 0) {
        uVar17 = *(undefined4 *)(uVar5 + 0x8c);
code_r0x014bd840:
        *(undefined4 *)(lVar7 + 0x1b8) = uVar17;
        return uVar5;
      }
    }
    else if (uVar5 != 0) {
      uVar19 = *(undefined8 *)(uVar5 + 0xd0);
      uVar22 = *(undefined8 *)(uVar5 + 0xe8);
      uVar10 = *(undefined8 *)(uVar5 + 0xe0);
      *(undefined8 *)((long)puVar1 + -0x138) = *(undefined8 *)(uVar5 + 0xd8);
      *(undefined8 *)((long)puVar1 + -0x140) = uVar19;
      *(undefined8 *)((long)puVar1 + -0x128) = uVar22;
      *(undefined8 *)((long)puVar1 + -0x130) = uVar10;
      uVar19 = *(undefined8 *)(uVar5 + 0xf0);
      uVar22 = *(undefined8 *)(uVar5 + 0x108);
      uVar10 = *(undefined8 *)(uVar5 + 0x100);
      *(undefined8 *)((long)puVar1 + -0x118) = *(undefined8 *)(uVar5 + 0xf8);
      *(undefined8 *)((long)puVar1 + -0x120) = uVar19;
      *(undefined8 *)((long)puVar1 + -0x108) = uVar22;
      *(undefined8 *)((long)puVar1 + -0x110) = uVar10;
      uVar19 = *(undefined8 *)(uVar5 + 0xb0);
      uVar22 = *(undefined8 *)(uVar5 + 200);
      uVar10 = *(undefined8 *)(uVar5 + 0xc0);
      *(undefined8 *)((long)puVar1 + -0x158) = *(undefined8 *)(uVar5 + 0xb8);
      *(undefined8 *)((long)puVar1 + -0x160) = uVar19;
      *(undefined8 *)((long)puVar1 + -0x148) = uVar22;
      *(undefined8 *)((long)puVar1 + -0x150) = uVar10;
      fVar25 = (float)/*Atlas.Definitions.PlacementHomingProjectileDefinition.PlacementHomingProjectileData$$get_StartTrackingInAirTimer*/ func_0x01561f7c((undefined1 *)((long)puVar1 + -0x160),0);
      if (*(long *)(lVar7 + 0x1a0) != 0) {
        uVar3 = (ulong)(uint)fVar25;
        fVar13 = *(float *)(*(long *)(lVar7 + 0x1a0) + 0x28);
        unaff_d11 = (ulong)(uint)fVar13;
        lVar9 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                          (lVar7);
        if (lVar9 != 0) {
          uVar19 = *(undefined8 *)(lVar9 + 0xd0);
          uVar22 = *(undefined8 *)(lVar9 + 0xe8);
          uVar10 = *(undefined8 *)(lVar9 + 0xe0);
          *(undefined8 *)((long)puVar1 + -0x138) = *(undefined8 *)(lVar9 + 0xd8);
          *(undefined8 *)((long)puVar1 + -0x140) = uVar19;
          *(undefined8 *)((long)puVar1 + -0x128) = uVar22;
          *(undefined8 *)((long)puVar1 + -0x130) = uVar10;
          uVar19 = *(undefined8 *)(lVar9 + 0xf0);
          uVar22 = *(undefined8 *)(lVar9 + 0x108);
          uVar10 = *(undefined8 *)(lVar9 + 0x100);
          *(undefined8 *)((long)puVar1 + -0x118) = *(undefined8 *)(lVar9 + 0xf8);
          *(undefined8 *)((long)puVar1 + -0x120) = uVar19;
          *(undefined8 *)((long)puVar1 + -0x108) = uVar22;
          *(undefined8 *)((long)puVar1 + -0x110) = uVar10;
          uVar19 = *(undefined8 *)(lVar9 + 0xb0);
          uVar22 = *(undefined8 *)(lVar9 + 200);
          uVar10 = *(undefined8 *)(lVar9 + 0xc0);
          *(undefined8 *)((long)puVar1 + -0x158) = *(undefined8 *)(lVar9 + 0xb8);
          *(undefined8 *)((long)puVar1 + -0x160) = uVar19;
          *(undefined8 *)((long)puVar1 + -0x148) = uVar22;
          *(undefined8 *)((long)puVar1 + -0x150) = uVar10;
          fVar18 = (float)/*Atlas.Definitions.PlacementHomingProjectileDefinition.PlacementHomingProjectileData$$get_StartTrackingInAirTimer*/ func_0x01561f7c((undefined1 *)((long)puVar1 + -0x160),0);
          unaff_d10 = (ulong)(uint)fVar18;
          uVar14 = *(uint *)(lVar7 + 0x1b8);
          unaff_d9 = (ulong)uVar14;
          lVar9 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                            (lVar7);
          if (lVar9 != 0) {
            uVar5 = /*UnityEngine.Mathf$$SmoothStep*/ func_0x0323d408(uVar14,*(undefined4 *)(lVar9 + 0x8c),(fVar25 - fVar13) / fVar18,
                                    0);
            uVar17 = extraout_s0_01;
            goto code_r0x014bd840;
          }
        }
      }
    }
  }
  lVar9 = func_0x00f78af4();
  *(ulong *)((long)puVar1 + -400) = unaff_d9;
  *(ulong *)((long)puVar1 + -0x188) = uVar3;
  *(undefined8 *)((long)puVar1 + -0x180) = 0x3eb4000;
  *(long *)((long)puVar1 + -0x178) = lVar7;
  *(undefined1 **)((long)puVar1 + -0x170) = (undefined1 *)((long)puVar1 + -0xd0);
  *(undefined **)((long)puVar1 + -0x168) =
       &Atlas_Gameplay_Usables_PlacementHomingProjectile__StartTrackingKartTarget;
  if ((*(long *)(lVar9 + 0xf8) != 0) &&
     (lVar6 = *(long *)(*(long *)(lVar9 + 0xf8) + 0x18), lVar7 = lVar9, lVar6 != 0)) {
    uVar3 = /*UnityEngine.Rigidbody$$set_useGravity*/ func_0x032a25e4(lVar6,0,0);
    *(undefined1 *)(lVar9 + 0xf0) = 0;
    *(undefined2 *)(lVar9 + 0x124) = 0x100;
    *(undefined4 *)(lVar9 + 0x220) = extraout_s0_02;
    return uVar3;
  }
  lVar9 = func_0x00f78af4();
  *(ulong *)((long)puVar1 + -0x1d0) = unaff_d11;
  *(ulong *)((long)puVar1 + -0x1c8) = unaff_d10;
  *(ulong *)((long)puVar1 + -0x1c0) = unaff_d9;
  *(ulong *)((long)puVar1 + -0x1b8) = uVar3;
  *(undefined8 *)((long)puVar1 + -0x1b0) = 0x3eb4000;
  *(long *)((long)puVar1 + -0x1a8) = lVar7;
  *(undefined1 **)((long)puVar1 + -0x1a0) = (undefined1 *)((long)puVar1 + -0x170);
  *(undefined **)((long)puVar1 + -0x198) =
       &Atlas_Gameplay_Usables_PlacementHomingProjectile__UpdateToEndSpeed;
  lVar7 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                    ();
  if (lVar7 != 0) {
    if (*(float *)(lVar7 + 200) <= 0.0) {
      uVar3 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                        (lVar9);
      if (uVar3 != 0) {
        uVar17 = *(undefined4 *)(uVar3 + 0x88);
code_r0x014bd938:
        *(undefined4 *)(lVar9 + 0x128) = uVar17;
        return uVar3;
      }
    }
    else {
      fVar25 = *(float *)(lVar9 + 0x220);
      lVar7 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                        (lVar9);
      if (lVar7 != 0) {
        fVar13 = *(float *)(lVar7 + 200);
        uVar17 = *(undefined4 *)(lVar9 + 0x128);
        lVar7 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                          (lVar9);
        if (lVar7 != 0) {
          uVar3 = /*UnityEngine.Mathf$$SmoothStep*/ func_0x0323d408(uVar17,*(undefined4 *)(lVar7 + 0xc4),
                                  (extraout_s0_03 - fVar25) / fVar13,0);
          uVar17 = extraout_s0_04;
          goto code_r0x014bd938;
        }
      }
    }
  }
  uVar3 = func_0x00f78af4();
  *(undefined2 *)(uVar3 + 0x124) = 1;
  *(undefined4 *)(uVar3 + 0x21c) = extraout_s0_05;
  return uVar3;
}



// ============================================================
// RVA: 0x14bd6a8 | Atlas.Gameplay.Usables.PlacementHomingProjectile.UpdateToInFlightSpeed
// ============================================================

void Atlas_Gameplay_Usables_PlacementHomingProjectile__UpdateToInFlightSpeed
               (float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 extraout_s0;
  float extraout_s0_00;
  undefined4 extraout_s0_01;
  uint uVar5;
  ulong unaff_d9;
  float fVar6;
  ulong unaff_d10;
  float fVar7;
  ulong unaff_d11;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  lVar1 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                    ();
  if (lVar1 != 0) {
    if (*(float *)(lVar1 + 0xc0) <= 0.0) {
      lVar1 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                        (param_2);
      if (lVar1 != 0) {
        uVar3 = *(undefined4 *)(lVar1 + 0x88);
LAB_014bd728:
        *(undefined4 *)(param_2 + 0x128) = uVar3;
        return;
      }
    }
    else {
      fVar6 = *(float *)(param_2 + 0x21c);
      unaff_d10 = (ulong)(uint)fVar6;
      lVar1 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                        (param_2);
      if (lVar1 != 0) {
        fVar7 = *(float *)(lVar1 + 0xc0);
        unaff_d11 = (ulong)(uint)fVar7;
        uVar5 = *(uint *)(param_2 + 0x128);
        unaff_d9 = (ulong)uVar5;
        lVar1 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                          (param_2);
        if (lVar1 != 0) {
          uVar3 = /*UnityEngine.Mathf$$SmoothStep*/ func_0x0323d408(uVar5,*(undefined4 *)(lVar1 + 0x88),(param_1 - fVar6) / fVar7,0);
          goto LAB_014bd728;
        }
      }
    }
  }
  lVar1 = func_0x00f78af4();
  uStack_80 = unaff_d11;
  uStack_78 = unaff_d10;
  uStack_70 = unaff_d9;
  uStack_68 = (ulong)(uint)param_1;
  lVar2 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                    ();
  if (lVar2 != 0) {
    uStack_b8 = *(undefined8 *)(lVar2 + 0xd8);
    uStack_c0 = *(undefined8 *)(lVar2 + 0xd0);
    uStack_a8 = *(undefined8 *)(lVar2 + 0xe8);
    uStack_b0 = *(undefined8 *)(lVar2 + 0xe0);
    uStack_98 = *(undefined8 *)(lVar2 + 0xf8);
    uStack_a0 = *(undefined8 *)(lVar2 + 0xf0);
    uStack_88 = *(undefined8 *)(lVar2 + 0x108);
    uStack_90 = *(undefined8 *)(lVar2 + 0x100);
    uStack_d8 = *(undefined8 *)(lVar2 + 0xb8);
    uStack_e0 = *(undefined8 *)(lVar2 + 0xb0);
    uStack_c8 = *(undefined8 *)(lVar2 + 200);
    uStack_d0 = *(undefined8 *)(lVar2 + 0xc0);
    fVar6 = (float)/*Atlas.Definitions.PlacementHomingProjectileDefinition.PlacementHomingProjectileData$$get_StartTrackingInAirTimer*/ func_0x01561f7c(&uStack_e0,0);
    lVar2 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                      (lVar1);
    if (fVar6 <= 0.0) {
      if (lVar2 != 0) {
        uVar3 = *(undefined4 *)(lVar2 + 0x8c);
code_r0x014bd840:
        *(undefined4 *)(lVar1 + 0x1b8) = uVar3;
        return;
      }
    }
    else if (lVar2 != 0) {
      uStack_b8 = *(undefined8 *)(lVar2 + 0xd8);
      uStack_c0 = *(undefined8 *)(lVar2 + 0xd0);
      uStack_a8 = *(undefined8 *)(lVar2 + 0xe8);
      uStack_b0 = *(undefined8 *)(lVar2 + 0xe0);
      uStack_98 = *(undefined8 *)(lVar2 + 0xf8);
      uStack_a0 = *(undefined8 *)(lVar2 + 0xf0);
      uStack_88 = *(undefined8 *)(lVar2 + 0x108);
      uStack_90 = *(undefined8 *)(lVar2 + 0x100);
      uStack_d8 = *(undefined8 *)(lVar2 + 0xb8);
      uStack_e0 = *(undefined8 *)(lVar2 + 0xb0);
      uStack_c8 = *(undefined8 *)(lVar2 + 200);
      uStack_d0 = *(undefined8 *)(lVar2 + 0xc0);
      fVar6 = (float)/*Atlas.Definitions.PlacementHomingProjectileDefinition.PlacementHomingProjectileData$$get_StartTrackingInAirTimer*/ func_0x01561f7c(&uStack_e0,0);
      if (*(long *)(lVar1 + 0x1a0) != 0) {
        fVar7 = *(float *)(*(long *)(lVar1 + 0x1a0) + 0x28);
        lVar2 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                          (lVar1);
        if (lVar2 != 0) {
          uStack_b8 = *(undefined8 *)(lVar2 + 0xd8);
          uStack_c0 = *(undefined8 *)(lVar2 + 0xd0);
          uStack_a8 = *(undefined8 *)(lVar2 + 0xe8);
          uStack_b0 = *(undefined8 *)(lVar2 + 0xe0);
          uStack_98 = *(undefined8 *)(lVar2 + 0xf8);
          uStack_a0 = *(undefined8 *)(lVar2 + 0xf0);
          uStack_88 = *(undefined8 *)(lVar2 + 0x108);
          uStack_90 = *(undefined8 *)(lVar2 + 0x100);
          uStack_d8 = *(undefined8 *)(lVar2 + 0xb8);
          uStack_e0 = *(undefined8 *)(lVar2 + 0xb0);
          uStack_c8 = *(undefined8 *)(lVar2 + 200);
          uStack_d0 = *(undefined8 *)(lVar2 + 0xc0);
          fVar4 = (float)/*Atlas.Definitions.PlacementHomingProjectileDefinition.PlacementHomingProjectileData$$get_StartTrackingInAirTimer*/ func_0x01561f7c(&uStack_e0,0);
          uVar3 = *(undefined4 *)(lVar1 + 0x1b8);
          lVar2 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                            (lVar1);
          if (lVar2 != 0) {
            uVar3 = /*UnityEngine.Mathf$$SmoothStep*/ func_0x0323d408(uVar3,*(undefined4 *)(lVar2 + 0x8c),(fVar6 - fVar7) / fVar4,0);
            goto code_r0x014bd840;
          }
        }
      }
    }
  }
  lVar1 = func_0x00f78af4();
  if ((*(long *)(lVar1 + 0xf8) != 0) &&
     (lVar2 = *(long *)(*(long *)(lVar1 + 0xf8) + 0x18), lVar2 != 0)) {
    /*UnityEngine.Rigidbody$$set_useGravity*/ func_0x032a25e4(lVar2,0,0);
    *(undefined1 *)(lVar1 + 0xf0) = 0;
    *(undefined2 *)(lVar1 + 0x124) = 0x100;
    *(undefined4 *)(lVar1 + 0x220) = extraout_s0;
    return;
  }
  lVar1 = func_0x00f78af4();
  lVar2 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                    ();
  if (lVar2 != 0) {
    if (*(float *)(lVar2 + 200) <= 0.0) {
      lVar2 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                        (lVar1);
      if (lVar2 != 0) {
        uVar3 = *(undefined4 *)(lVar2 + 0x88);
code_r0x014bd938:
        *(undefined4 *)(lVar1 + 0x128) = uVar3;
        return;
      }
    }
    else {
      fVar6 = *(float *)(lVar1 + 0x220);
      lVar2 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                        (lVar1);
      if (lVar2 != 0) {
        fVar7 = *(float *)(lVar2 + 200);
        uVar3 = *(undefined4 *)(lVar1 + 0x128);
        lVar2 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                          (lVar1);
        if (lVar2 != 0) {
          uVar3 = /*UnityEngine.Mathf$$SmoothStep*/ func_0x0323d408(uVar3,*(undefined4 *)(lVar2 + 0xc4),
                                  (extraout_s0_00 - fVar6) / fVar7,0);
          goto code_r0x014bd938;
        }
      }
    }
  }
  lVar1 = func_0x00f78af4();
  *(undefined2 *)(lVar1 + 0x124) = 1;
  *(undefined4 *)(lVar1 + 0x21c) = extraout_s0_01;
  return;
}



// ============================================================
// RVA: 0x14bd744 | Atlas.Gameplay.Usables.PlacementHomingProjectile.UpdateFloorPerimeterGap
// ============================================================

void Atlas_Gameplay_Usables_PlacementHomingProjectile__UpdateFloorPerimeterGap(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 extraout_s0;
  float extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 uVar5;
  float fVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                    ();
  if (lVar1 != 0) {
    uStack_78 = *(undefined8 *)(lVar1 + 0xd8);
    uStack_80 = *(undefined8 *)(lVar1 + 0xd0);
    uStack_68 = *(undefined8 *)(lVar1 + 0xe8);
    uStack_70 = *(undefined8 *)(lVar1 + 0xe0);
    uStack_58 = *(undefined8 *)(lVar1 + 0xf8);
    uStack_60 = *(undefined8 *)(lVar1 + 0xf0);
    uStack_48 = *(undefined8 *)(lVar1 + 0x108);
    uStack_50 = *(undefined8 *)(lVar1 + 0x100);
    uStack_98 = *(undefined8 *)(lVar1 + 0xb8);
    uStack_a0 = *(undefined8 *)(lVar1 + 0xb0);
    uStack_88 = *(undefined8 *)(lVar1 + 200);
    uStack_90 = *(undefined8 *)(lVar1 + 0xc0);
    fVar3 = (float)/*Atlas.Definitions.PlacementHomingProjectileDefinition.PlacementHomingProjectileData$$get_StartTrackingInAirTimer*/ func_0x01561f7c(&uStack_a0,0);
    lVar1 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                      (param_1);
    if (fVar3 <= 0.0) {
      if (lVar1 != 0) {
        uVar5 = *(undefined4 *)(lVar1 + 0x8c);
LAB_014bd840:
        *(undefined4 *)(param_1 + 0x1b8) = uVar5;
        return;
      }
    }
    else if (lVar1 != 0) {
      uStack_78 = *(undefined8 *)(lVar1 + 0xd8);
      uStack_80 = *(undefined8 *)(lVar1 + 0xd0);
      uStack_68 = *(undefined8 *)(lVar1 + 0xe8);
      uStack_70 = *(undefined8 *)(lVar1 + 0xe0);
      uStack_58 = *(undefined8 *)(lVar1 + 0xf8);
      uStack_60 = *(undefined8 *)(lVar1 + 0xf0);
      uStack_48 = *(undefined8 *)(lVar1 + 0x108);
      uStack_50 = *(undefined8 *)(lVar1 + 0x100);
      uStack_98 = *(undefined8 *)(lVar1 + 0xb8);
      uStack_a0 = *(undefined8 *)(lVar1 + 0xb0);
      uStack_88 = *(undefined8 *)(lVar1 + 200);
      uStack_90 = *(undefined8 *)(lVar1 + 0xc0);
      fVar3 = (float)/*Atlas.Definitions.PlacementHomingProjectileDefinition.PlacementHomingProjectileData$$get_StartTrackingInAirTimer*/ func_0x01561f7c(&uStack_a0,0);
      if (*(long *)(param_1 + 0x1a0) != 0) {
        fVar6 = *(float *)(*(long *)(param_1 + 0x1a0) + 0x28);
        lVar1 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                          (param_1);
        if (lVar1 != 0) {
          uStack_78 = *(undefined8 *)(lVar1 + 0xd8);
          uStack_80 = *(undefined8 *)(lVar1 + 0xd0);
          uStack_68 = *(undefined8 *)(lVar1 + 0xe8);
          uStack_70 = *(undefined8 *)(lVar1 + 0xe0);
          uStack_58 = *(undefined8 *)(lVar1 + 0xf8);
          uStack_60 = *(undefined8 *)(lVar1 + 0xf0);
          uStack_48 = *(undefined8 *)(lVar1 + 0x108);
          uStack_50 = *(undefined8 *)(lVar1 + 0x100);
          uStack_98 = *(undefined8 *)(lVar1 + 0xb8);
          uStack_a0 = *(undefined8 *)(lVar1 + 0xb0);
          uStack_88 = *(undefined8 *)(lVar1 + 200);
          uStack_90 = *(undefined8 *)(lVar1 + 0xc0);
          fVar4 = (float)/*Atlas.Definitions.PlacementHomingProjectileDefinition.PlacementHomingProjectileData$$get_StartTrackingInAirTimer*/ func_0x01561f7c(&uStack_a0,0);
          uVar5 = *(undefined4 *)(param_1 + 0x1b8);
          lVar1 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                            (param_1);
          if (lVar1 != 0) {
            uVar5 = /*UnityEngine.Mathf$$SmoothStep*/ func_0x0323d408(uVar5,*(undefined4 *)(lVar1 + 0x8c),(fVar3 - fVar6) / fVar4,0);
            goto LAB_014bd840;
          }
        }
      }
    }
  }
  lVar1 = func_0x00f78af4();
  if ((*(long *)(lVar1 + 0xf8) != 0) &&
     (lVar2 = *(long *)(*(long *)(lVar1 + 0xf8) + 0x18), lVar2 != 0)) {
    /*UnityEngine.Rigidbody$$set_useGravity*/ func_0x032a25e4(lVar2,0,0);
    *(undefined1 *)(lVar1 + 0xf0) = 0;
    *(undefined2 *)(lVar1 + 0x124) = 0x100;
    *(undefined4 *)(lVar1 + 0x220) = extraout_s0;
    return;
  }
  lVar1 = func_0x00f78af4();
  lVar2 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                    ();
  if (lVar2 != 0) {
    if (*(float *)(lVar2 + 200) <= 0.0) {
      lVar2 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                        (lVar1);
      if (lVar2 != 0) {
        uVar5 = *(undefined4 *)(lVar2 + 0x88);
code_r0x014bd938:
        *(undefined4 *)(lVar1 + 0x128) = uVar5;
        return;
      }
    }
    else {
      fVar3 = *(float *)(lVar1 + 0x220);
      lVar2 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                        (lVar1);
      if (lVar2 != 0) {
        fVar6 = *(float *)(lVar2 + 200);
        uVar5 = *(undefined4 *)(lVar1 + 0x128);
        lVar2 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                          (lVar1);
        if (lVar2 != 0) {
          uVar5 = /*UnityEngine.Mathf$$SmoothStep*/ func_0x0323d408(uVar5,*(undefined4 *)(lVar2 + 0xc4),
                                  (extraout_s0_00 - fVar3) / fVar6,0);
          goto code_r0x014bd938;
        }
      }
    }
  }
  lVar1 = func_0x00f78af4();
  *(undefined2 *)(lVar1 + 0x124) = 1;
  *(undefined4 *)(lVar1 + 0x21c) = extraout_s0_01;
  return;
}



// ============================================================
// RVA: 0x14bd860 | Atlas.Gameplay.Usables.PlacementHomingProjectile.StartTrackingKartTarget
// ============================================================

void Atlas_Gameplay_Usables_PlacementHomingProjectile__StartTrackingKartTarget
               (undefined4 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  float extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  if ((*(long *)(param_2 + 0xf8) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_2 + 0xf8) + 0x18), lVar1 != 0)) {
    /*UnityEngine.Rigidbody$$set_useGravity*/ func_0x032a25e4(lVar1,0,0);
    *(undefined1 *)(param_2 + 0xf0) = 0;
    *(undefined2 *)(param_2 + 0x124) = 0x100;
    *(undefined4 *)(param_2 + 0x220) = param_1;
    return;
  }
  lVar1 = func_0x00f78af4();
  lVar2 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                    ();
  if (lVar2 != 0) {
    if (*(float *)(lVar2 + 200) <= 0.0) {
      lVar2 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                        (lVar1);
      if (lVar2 != 0) {
        uVar3 = *(undefined4 *)(lVar2 + 0x88);
code_r0x014bd938:
        *(undefined4 *)(lVar1 + 0x128) = uVar3;
        return;
      }
    }
    else {
      fVar4 = *(float *)(lVar1 + 0x220);
      lVar2 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                        (lVar1);
      if (lVar2 != 0) {
        fVar5 = *(float *)(lVar2 + 200);
        uVar3 = *(undefined4 *)(lVar1 + 0x128);
        lVar2 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                          (lVar1);
        if (lVar2 != 0) {
          uVar3 = /*UnityEngine.Mathf$$SmoothStep*/ func_0x0323d408(uVar3,*(undefined4 *)(lVar2 + 0xc4),(extraout_s0 - fVar4) / fVar5,
                                  0);
          goto code_r0x014bd938;
        }
      }
    }
  }
  lVar1 = func_0x00f78af4();
  *(undefined2 *)(lVar1 + 0x124) = 1;
  *(undefined4 *)(lVar1 + 0x21c) = extraout_s0_00;
  return;
}



// ============================================================
// RVA: 0x14bd8b8 | Atlas.Gameplay.Usables.PlacementHomingProjectile.UpdateToEndSpeed
// ============================================================

void Atlas_Gameplay_Usables_PlacementHomingProjectile__UpdateToEndSpeed(float param_1,long param_2)

{
  long lVar1;
  undefined4 extraout_s0;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                    ();
  if (lVar1 != 0) {
    if (*(float *)(lVar1 + 200) <= 0.0) {
      lVar1 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                        (param_2);
      if (lVar1 != 0) {
        uVar2 = *(undefined4 *)(lVar1 + 0x88);
LAB_014bd938:
        *(undefined4 *)(param_2 + 0x128) = uVar2;
        return;
      }
    }
    else {
      fVar3 = *(float *)(param_2 + 0x220);
      lVar1 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                        (param_2);
      if (lVar1 != 0) {
        fVar4 = *(float *)(lVar1 + 200);
        uVar2 = *(undefined4 *)(param_2 + 0x128);
        lVar1 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                          (param_2);
        if (lVar1 != 0) {
          uVar2 = /*UnityEngine.Mathf$$SmoothStep*/ func_0x0323d408(uVar2,*(undefined4 *)(lVar1 + 0xc4),(param_1 - fVar3) / fVar4,0);
          goto LAB_014bd938;
        }
      }
    }
  }
  lVar1 = func_0x00f78af4();
  *(undefined2 *)(lVar1 + 0x124) = 1;
  *(undefined4 *)(lVar1 + 0x21c) = extraout_s0;
  return;
}



// ============================================================
// RVA: 0x14bd954 | Atlas.Gameplay.Usables.PlacementHomingProjectile.StopTrackingKartTarget
// ============================================================

void Atlas_Gameplay_Usables_PlacementHomingProjectile__StopTrackingKartTarget
               (undefined4 param_1,long param_2)

{
  *(undefined2 *)(param_2 + 0x124) = 1;
  *(undefined4 *)(param_2 + 0x21c) = param_1;
  return;
}



// ============================================================
// RVA: 0x14bd964 | Atlas.Gameplay.Usables.PlacementHomingProjectile.ComputeVisualSteering
// ============================================================

/* WARNING: Possible PIC construction at 0x014bdb6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014be48c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014bdb70) */
/* WARNING: Removing unreachable block (ram,0x014bdb88) */
/* WARNING: Removing unreachable block (ram,0x014bdb90) */
/* WARNING: Removing unreachable block (ram,0x014bdbac) */
/* WARNING: Removing unreachable block (ram,0x014bdbb4) */
/* WARNING: Removing unreachable block (ram,0x014bdbd0) */
/* WARNING: Removing unreachable block (ram,0x014bdbe0) */
/* WARNING: Removing unreachable block (ram,0x014bdbf4) */
/* WARNING: Removing unreachable block (ram,0x014bdbfc) */
/* WARNING: Removing unreachable block (ram,0x014bdc04) */
/* WARNING: Removing unreachable block (ram,0x014bdc10) */
/* WARNING: Removing unreachable block (ram,0x014bdc18) */
/* WARNING: Removing unreachable block (ram,0x014bdc20) */
/* WARNING: Removing unreachable block (ram,0x014bdc28) */
/* WARNING: Removing unreachable block (ram,0x014bdc30) */
/* WARNING: Removing unreachable block (ram,0x014bdc48) */
/* WARNING: Removing unreachable block (ram,0x014bdc50) */
/* WARNING: Removing unreachable block (ram,0x014bdc58) */
/* WARNING: Removing unreachable block (ram,0x014bdc60) */
/* WARNING: Removing unreachable block (ram,0x014bdc68) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_Gameplay_Usables_PlacementHomingProjectile__ComputeVisualSteering
                 (float param_1,float param_2,float param_3,long param_4)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  int *piVar16;
  long unaff_x20;
  undefined1 *puVar17;
  undefined8 unaff_x21;
  undefined8 uVar18;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 *******pppppppuVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  float extraout_s0_02;
  undefined4 extraout_s0_03;
  undefined4 extraout_s0_04;
  float fVar22;
  undefined4 uVar23;
  uint uVar24;
  float extraout_s0_05;
  float extraout_s0_06;
  undefined4 uVar25;
  ulong extraout_d0;
  float fVar26;
  float fVar27;
  long lVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  ulong uVar32;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong uVar33;
  ulong unaff_d11;
  ulong uVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  undefined8 unaff_d15;
  undefined1 auVar39 [16];
  undefined1 auVar40 [12];
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  ulong uStack_f8;
  undefined1 *puStack_f0;
  long *plStack_e8;
  undefined8 *******pppppppuStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 *******pppppppuStack_c0;
  undefined *puStack_b8;
  float afStack_b0 [4];
  ulong uStack_a0;
  ulong uStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 ******ppppppuStack_70;
  undefined *puStack_68;
  
  uVar15 = (ulong)(uint)param_1;
  /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
  uVar31 = *(undefined4 *)(param_4 + 0x1c8);
  fVar22 = (float)/*UnityEngine.Vector3$$Cross*/ func_0x0327b588(0);
  uVar33 = (ulong)(uint)fVar22;
  uVar34 = (ulong)(uint)param_2;
  puVar21 = (undefined *)(ulong)(uint)param_3;
  fVar36 = *(float *)(param_4 + 0xe0);
  fVar38 = *(float *)(param_4 + 0xe4);
  fVar35 = *(float *)(param_4 + 0xe8);
  fVar29 = param_3;
  fVar27 = param_2;
  lVar5 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                    (param_4);
  if (lVar5 != 0) {
    if (*(float *)(lVar5 + 0x108) <= ABS(param_3 * fVar35 + fVar22 * fVar36 + param_2 * fVar38)) {
      fVar29 = (float)/*UnityEngine.Mathf$$Sign*/ func_0x0323d304(0);
      fVar26 = fVar29 * param_1 * *(float *)(lVar5 + 0x104);
      fVar22 = *(float *)(param_4 + 0x1c4);
    }
    else {
      fVar22 = *(float *)(param_4 + 0x1c4);
      fVar26 = -fVar22 * param_1 * *(float *)(lVar5 + 0x104);
    }
    *(float *)(param_4 + 0x1c4) = fVar26 + fVar22;
    fVar29 = *(float *)(lVar5 + 0x100);
    fVar27 = -fVar29;
    uVar23 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(fVar26 + fVar22,fVar27,0);
    *(undefined4 *)(param_4 + 0x1c4) = uVar23;
    lVar6 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingBehaviour(param_4);
    unaff_x20 = lVar5;
    if (lVar6 != 0) {
      uVar24 = *(uint *)(param_4 + 0x1c4);
      if ((bRam0000000003eb4aff & 1) == 0) {
        func_0x00f78a20(0x3d23c70);
        bRam0000000003eb4aff = 1;
      }
      lVar5 = *(long *)(lVar6 + 0x70);
      if (((*(ushort *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar5 != 0) {
        uVar31 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 8);
        if (pcRam0000000003ebe400 == (code *)0x0) {
          pcRam0000000003ebe400 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.Animator::SetFloatID(System.Int32,System.Single)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar12 = (long *)(*pcRam0000000003ebe400)(uVar24,lVar5,uVar31);
        return plVar12;
      }
      lVar5 = func_0x00f78af4();
      if ((bRam0000000003eb4afe & 1) == 0) {
        func_0x00f78a20(0x3d23c70);
        bRam0000000003eb4afe = 1;
      }
      if (*(long *)(lVar5 + 0x70) != 0) {
        /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&puStack_b8,*(long *)(lVar5 + 0x70),0,0);
        puStack_90 = puStack_b8;
        lStack_78 = uStack_a0;
        ppppppuStack_70 = (undefined8 ******)CONCAT44(ppppppuStack_70._4_4_,(undefined4)uStack_98);
        iVar4 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&puStack_90,0);
        if (((*(ushort *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return (long *)(ulong)(iVar4 == *(int *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 4));
      }
      lVar6 = func_0x00f78af4();
      pppppppuStack_e0 = (undefined8 *******)0x3eb4000;
      pcStack_c8 = Atlas_Gameplay_Usables_PlacementHomingProjectile__UpdateToInFlightSpeed;
      plStack_e8 = (long *)(ulong)uVar24;
      puStack_d8 = (undefined *)lVar5;
      puStack_d0 = &stack0xffffffffffffffb0;
      lVar5 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                        ();
      if (lVar5 != 0) {
        if (*(float *)(lVar5 + 0xc0) <= 0.0) {
          plVar12 = (long *)Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                                      (lVar6);
          if (plVar12 != (long *)0x0) {
            uVar31 = (undefined4)plVar12[0x11];
LAB_014bd728:
            *(undefined4 *)(lVar6 + 0x128) = uVar31;
            return plVar12;
          }
        }
        else {
          fVar29 = *(float *)(lVar6 + 0x21c);
          unaff_d10 = (ulong)(uint)fVar29;
          lVar5 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                            (lVar6);
          if (lVar5 != 0) {
            fVar27 = *(float *)(lVar5 + 0xc0);
            unaff_d11 = (ulong)(uint)fVar27;
            uVar24 = *(uint *)(lVar6 + 0x128);
            unaff_d9 = (ulong)uVar24;
            lVar5 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                              (lVar6);
            if (lVar5 != 0) {
              plVar12 = (long *)/*UnityEngine.Mathf$$SmoothStep*/ func_0x0323d408(uVar24,*(undefined4 *)(lVar5 + 0x88),
                                                ((float)extraout_d0 - fVar29) / fVar27,0);
              uVar31 = extraout_s0;
              goto LAB_014bd728;
            }
          }
        }
      }
      lVar5 = func_0x00f78af4();
      uStack_120 = 0x3eb4000;
      pcStack_108 = Atlas_Gameplay_Usables_PlacementHomingProjectile__UpdateFloorPerimeterGap;
      uStack_140 = unaff_d11;
      uStack_138 = unaff_d10;
      uStack_130 = unaff_d9;
      uStack_128 = extraout_d0 & 0xffffffff;
      lStack_118 = lVar6;
      ppuStack_110 = &puStack_d0;
      lVar6 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                        ();
      if (lVar6 != 0) {
        lStack_178 = *(long *)(lVar6 + 0xd8);
        lStack_180 = *(long *)(lVar6 + 0xd0);
        lStack_168 = *(long *)(lVar6 + 0xe8);
        lStack_170 = *(long *)(lVar6 + 0xe0);
        lStack_158 = *(long *)(lVar6 + 0xf8);
        lStack_160 = *(long *)(lVar6 + 0xf0);
        lStack_148 = *(long *)(lVar6 + 0x108);
        lStack_150 = *(long *)(lVar6 + 0x100);
        lStack_198 = *(long *)(lVar6 + 0xb8);
        lStack_1a0 = *(long *)(lVar6 + 0xb0);
        lStack_188 = *(long *)(lVar6 + 200);
        lStack_190 = *(long *)(lVar6 + 0xc0);
        fVar29 = (float)/*Atlas.Definitions.PlacementHomingProjectileDefinition.PlacementHomingProjectileData$$get_StartTrackingInAirTimer*/ func_0x01561f7c(&lStack_1a0,0);
        plVar12 = (long *)Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                                    (lVar5);
        if (fVar29 <= 0.0) {
          if (plVar12 != (long *)0x0) {
            uVar31 = *(undefined4 *)((long)plVar12 + 0x8c);
LAB_014bd840:
            *(undefined4 *)(lVar5 + 0x1b8) = uVar31;
            return plVar12;
          }
        }
        else if (plVar12 != (long *)0x0) {
          lStack_178 = plVar12[0x1b];
          lStack_180 = plVar12[0x1a];
          lStack_168 = plVar12[0x1d];
          lStack_170 = plVar12[0x1c];
          lStack_158 = plVar12[0x1f];
          lStack_160 = plVar12[0x1e];
          lStack_148 = plVar12[0x21];
          lStack_150 = plVar12[0x20];
          lStack_198 = plVar12[0x17];
          lStack_1a0 = plVar12[0x16];
          lStack_188 = plVar12[0x19];
          lStack_190 = plVar12[0x18];
          fVar29 = (float)/*Atlas.Definitions.PlacementHomingProjectileDefinition.PlacementHomingProjectileData$$get_StartTrackingInAirTimer*/ func_0x01561f7c(&lStack_1a0,0);
          if (*(long *)(lVar5 + 0x1a0) != 0) {
            fVar27 = *(float *)(*(long *)(lVar5 + 0x1a0) + 0x28);
            lVar6 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                              (lVar5);
            if (lVar6 != 0) {
              lStack_178 = *(long *)(lVar6 + 0xd8);
              lStack_180 = *(long *)(lVar6 + 0xd0);
              lStack_168 = *(long *)(lVar6 + 0xe8);
              lStack_170 = *(long *)(lVar6 + 0xe0);
              lStack_158 = *(long *)(lVar6 + 0xf8);
              lStack_160 = *(long *)(lVar6 + 0xf0);
              lStack_148 = *(long *)(lVar6 + 0x108);
              lStack_150 = *(long *)(lVar6 + 0x100);
              lStack_198 = *(long *)(lVar6 + 0xb8);
              lStack_1a0 = *(long *)(lVar6 + 0xb0);
              lStack_188 = *(long *)(lVar6 + 200);
              lStack_190 = *(long *)(lVar6 + 0xc0);
              fVar22 = (float)/*Atlas.Definitions.PlacementHomingProjectileDefinition.PlacementHomingProjectileData$$get_StartTrackingInAirTimer*/ func_0x01561f7c(&lStack_1a0,0);
              uVar31 = *(undefined4 *)(lVar5 + 0x1b8);
              lVar6 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                                (lVar5);
              if (lVar6 != 0) {
                plVar12 = (long *)/*UnityEngine.Mathf$$SmoothStep*/ func_0x0323d408(uVar31,*(undefined4 *)(lVar6 + 0x8c),
                                                  (fVar29 - fVar27) / fVar22,0);
                uVar31 = extraout_s0_00;
                goto LAB_014bd840;
              }
            }
          }
        }
      }
      lVar5 = func_0x00f78af4();
      if ((*(long *)(lVar5 + 0xf8) != 0) &&
         (lVar6 = *(long *)(*(long *)(lVar5 + 0xf8) + 0x18), lVar6 != 0)) {
        plVar12 = (long *)/*UnityEngine.Rigidbody$$set_useGravity*/ func_0x032a25e4(lVar6,0,0);
        *(undefined1 *)(lVar5 + 0xf0) = 0;
        *(undefined2 *)(lVar5 + 0x124) = 0x100;
        *(undefined4 *)(lVar5 + 0x220) = extraout_s0_01;
        return plVar12;
      }
      lVar5 = func_0x00f78af4();
      lVar6 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                        ();
      if (lVar6 != 0) {
        if (*(float *)(lVar6 + 200) <= 0.0) {
          plVar12 = (long *)Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                                      (lVar5);
          if (plVar12 != (long *)0x0) {
            uVar31 = (undefined4)plVar12[0x11];
LAB_014bd938:
            *(undefined4 *)(lVar5 + 0x128) = uVar31;
            return plVar12;
          }
        }
        else {
          fVar29 = *(float *)(lVar5 + 0x220);
          lVar6 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                            (lVar5);
          if (lVar6 != 0) {
            fVar27 = *(float *)(lVar6 + 200);
            uVar31 = *(undefined4 *)(lVar5 + 0x128);
            lVar6 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                              (lVar5);
            if (lVar6 != 0) {
              plVar12 = (long *)/*UnityEngine.Mathf$$SmoothStep*/ func_0x0323d408(uVar31,*(undefined4 *)(lVar6 + 0xc4),
                                                (extraout_s0_02 - fVar29) / fVar27,0);
              uVar31 = extraout_s0_03;
              goto LAB_014bd938;
            }
          }
        }
      }
      plVar12 = (long *)func_0x00f78af4();
      *(undefined2 *)((long)plVar12 + 0x124) = 1;
      *(undefined4 *)((long)plVar12 + 0x21c) = extraout_s0_04;
      return plVar12;
    }
  }
  plVar7 = (long *)func_0x00f78af4();
  ppuVar1 = (undefined **)afStack_b0;
  puStack_68 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__UpdateHitTargetAnim;
  pppppppuVar19 = &ppppppuStack_70;
  plVar12 = plVar7;
  uStack_a0 = uVar34;
  uStack_98 = uVar33;
  puStack_90 = puVar21;
  uStack_88 = uVar15;
  lStack_80 = unaff_x20;
  lStack_78 = param_4;
  ppppppuStack_70 = (undefined8 ******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4af6 & 1) == 0) {
    func_0x00f78a20(0x3d3b888);
    plVar12 = (long *)func_0x00f78a20(0x3d3b890);
    bRam0000000003eb4af6 = 1;
  }
  if (*(char *)((long)plVar7 + 0x1d4) != '\0') {
    return plVar12;
  }
  puVar8 = (undefined1 *)
           Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                     (plVar7);
  puVar17 = (undefined1 *)0x3eb4000;
  if (((plVar7[0x34] == 0) || (lVar5 = *(long *)(plVar7[0x34] + 0x20), lVar5 == 0)) ||
     (lVar5 = *(long *)(lVar5 + 0x10), puVar17 = puVar8, lVar5 == 0)) {
code_r0x014bdc94:
    auVar39 = func_0x00f78af4();
    plVar12 = auVar39._0_8_;
    puStack_b8 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__EarlyUpdate;
    puStack_d0 = puVar17;
    pcStack_c8 = (code *)plVar7;
    pppppppuStack_c0 = pppppppuVar19;
    plVar7 = (long *)/*Atlas.Gameplay.Usables.ProjectileUsable$$EarlyUpdate*/ func_0x014ce420(plVar12,auVar39._8_8_,0);
    if (plVar12[0x19] != 0) {
      if ((*(char *)(plVar12[0x19] + 0x44) == '\0') &&
         (plVar7 = (long *)/*Atlas.Gameplay.Usables.ProjectileUsable$$GetForceToFloorNetworkFlag*/ func_0x014cf58c(plVar12,0), (int)plVar7 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x014bdcec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar12 = (long *)(**(code **)(*plVar12 + 0x428))
                                    ((int)plVar12[0x35],plVar12,*(undefined8 *)(*plVar12 + 0x430));
        return plVar12;
      }
      return plVar7;
    }
    plVar7 = (long *)func_0x00f78af4();
    ppuVar1 = &puStack_100;
    puStack_d8 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__GetDistanceRatioToTarget;
    pppppppuVar19 = &pppppppuStack_e0;
    uVar32 = 0;
    if (((char)plVar7[0xc] != '\0') || (*(float *)(plVar7 + 0x38) <= 0.0)) {
      return plVar7;
    }
    if (plVar7[0x34] == 0) {
      return (long *)0x0;
    }
    puStack_100 = puVar21;
    uStack_f8 = uVar15;
    puStack_f0 = puVar17;
    plStack_e8 = plVar12;
    pppppppuStack_e0 = &pppppppuStack_c0;
    plVar12 = (long *)Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasKartTarget
                                (plVar7[0x34],0);
    if ((int)plVar12 == 0) {
      return plVar12;
    }
    lVar5 = plVar7[0x34];
    if (lVar5 != 0) {
      plVar12 = (long *)Atlas_Gameplay_Usables_HomingProjectileLogic__DistToTargetSquared
                                  (lVar5,*(undefined8 *)(lVar5 + 0x20),0);
      return plVar12;
    }
    puVar20 = &Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__TriggerImpactAnim;
    lVar5 = func_0x00f78af4();
  }
  else {
    lVar5 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar5,0);
    fVar26 = *(float *)(lVar5 + 0x140);
    fVar30 = *(float *)(lVar5 + 0x144);
    fVar22 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar5 + 0x13c),0);
    fVar29 = fVar30;
    fVar27 = fVar26;
    if (plVar7[0x20] == 0) goto code_r0x014bdc94;
    uVar33 = (ulong)(uint)fVar22;
    uVar15 = (ulong)(uint)fVar26;
    puVar21 = (undefined *)(ulong)(uint)fVar30;
    plVar12 = (long *)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(plVar7[0x20],0);
    afStack_b0[0] = fVar22 - extraout_s0_05;
    afStack_b0[2] = fVar30 - fVar29;
    afStack_b0[1] = 0.0;
    if (puVar8 == (undefined1 *)0x0) goto code_r0x014bdc94;
    if ((fVar27 - fVar26 <= *(float *)(puVar8 + 0xe8)) ||
       (*(float *)(puVar8 + 0xec) <= fVar27 - fVar26)) {
      return plVar12;
    }
    plVar12 = (long *)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(afStack_b0,0);
    fVar27 = *(float *)((long)plVar7 + 0x1ec);
    if (fVar27 <= extraout_s0_06) {
      return plVar12;
    }
    lVar5 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingBehaviour(plVar7);
    if (lVar5 == 0) goto code_r0x014bdc94;
    puVar20 = &UNK_014bdb70;
    uVar32 = uVar15;
  }
  *(undefined8 *)((long)ppuVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)ppuVar1 + -0x28) = unaff_x21;
  *(undefined1 **)((long)ppuVar1 + -0x20) = puVar17;
  *(long **)((long)ppuVar1 + -0x18) = plVar7;
  *(undefined8 ********)((long)ppuVar1 + -0x10) = pppppppuVar19;
  *(undefined **)((long)ppuVar1 + -8) = puVar20;
  if ((bRam0000000003eb4b00 & 1) == 0) {
    func_0x00f78a20(0x3d23c70);
    bRam0000000003eb4b00 = 1;
  }
  lVar5 = *(long *)(lVar5 + 0x70);
  if (((*(ushort *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar5 != 0) {
    uVar31 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 0xc);
    *(undefined8 *)((long)ppuVar1 + -0x30) = *(undefined8 *)((long)ppuVar1 + -0x30);
    *(undefined8 *)((long)ppuVar1 + -0x28) = *(undefined8 *)((long)ppuVar1 + -0x28);
    *(undefined8 *)((long)ppuVar1 + -0x20) = *(undefined8 *)((long)ppuVar1 + -0x20);
    *(undefined8 *)((long)ppuVar1 + -0x18) = *(undefined8 *)((long)ppuVar1 + -0x18);
    *(undefined8 *)((long)ppuVar1 + -0x10) = *(undefined8 *)((long)ppuVar1 + -0x10);
    *(undefined8 *)((long)ppuVar1 + -8) = *(undefined8 *)((long)ppuVar1 + -8);
    if (pcRam0000000003ebe420 == (code *)0x0) {
      pcRam0000000003ebe420 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar12 = (long *)(*pcRam0000000003ebe420)(lVar5,uVar31,1);
    return plVar12;
  }
  auVar39 = func_0x00f78af4();
  plVar12 = auVar39._8_8_;
  plVar10 = auVar39._0_8_;
  *(undefined8 *)((long)ppuVar1 + -0xa0) = unaff_d15;
  *(ulong *)((long)ppuVar1 + -0x98) = (ulong)(uint)fVar38;
  *(ulong *)((long)ppuVar1 + -0x90) = (ulong)(uint)fVar36;
  *(ulong *)((long)ppuVar1 + -0x88) = (ulong)(uint)fVar35;
  *(ulong *)((long)ppuVar1 + -0x80) = uVar34;
  *(ulong *)((long)ppuVar1 + -0x78) = uVar33;
  *(undefined **)((long)ppuVar1 + -0x70) = puVar21;
  *(ulong *)((long)ppuVar1 + -0x68) = uVar32;
  *(undefined8 *)((long)ppuVar1 + -0x60) = unaff_x22;
  *(undefined8 *)((long)ppuVar1 + -0x58) = 0x3eb4000;
  *(undefined8 *)((long)ppuVar1 + -0x50) = 0x3d23c70;
  *(undefined8 *)((long)ppuVar1 + -0x48) = 0;
  *(undefined1 **)((long)ppuVar1 + -0x40) = (undefined1 *)((long)ppuVar1 + -0x10);
  *(undefined **)((long)ppuVar1 + -0x38) =
       &Atlas_Gameplay_Usables_PlacementHomingProjectile__FixedUpdateGameplay;
  plVar7 = plVar10;
  if ((bRam0000000003eb4af7 & 1) == 0) {
    plVar7 = (long *)func_0x00f78a20(0x3d22618);
    bRam0000000003eb4af7 = 1;
  }
  if ((char)plVar10[3] != '\0') {
    bVar3 = false;
    if (*(char *)((long)plVar10 + 0x11c) != '\0') {
      bVar3 = *(char *)((long)plVar10 + 0x1b4) == '\0';
    }
    *(bool *)((long)plVar10 + 0x11c) = bVar3;
    plVar7 = (long *)/*Atlas.Gameplay.Usables.ProjectileUsable$$FixedUpdateGameplay*/ func_0x014cdd74(plVar10,plVar12,0);
    if ((*(char *)((long)plVar10 + 0x125) != '\0') || ((char)plVar10[0x1e] != '\0')) {
      if (plVar12 != (long *)0x0) {
        fVar22 = *(float *)(plVar10 + 0x43);
        uVar32 = (ulong)(uint)fVar22;
        lVar5 = *plVar12;
        uVar15 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
              puVar9 = (undefined8 *)(lVar5 + (long)(*piVar16 + 3) * 0x10 + 0x138);
              goto code_r0x014bdf18;
            }
            piVar16 = piVar16 + 4;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar12,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,3);
code_r0x014bdf18:
        fVar35 = (float)(*(code *)*puVar9)(plVar12,puVar9[1]);
        fVar22 = fVar22 - fVar35;
        *(float *)(plVar10 + 0x43) = fVar22;
        if (plVar10[0x1f] != 0) {
          lVar5 = *(long *)(plVar10[0x1f] + 0x18);
          plVar12 = (long *)0x0;
          if (lVar5 != 0) {
            fVar36 = (_UNK_033f83fc - fVar22) / _UNK_033f83fc;
            fVar35 = _UNK_033f83fc;
            uVar23 = /*UnityEngine.Rigidbody$$get_rotation*/ func_0x032a2fa0(lVar5,0);
            lVar6 = plVar10[0x1c];
            uVar37 = *(undefined4 *)((long)plVar10 + 0xe4);
            lVar28 = plVar10[0x1d];
            fVar27 = fVar29;
            fVar22 = fVar35;
            uVar25 = /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
            /*UnityEngine.Quaternion$$LookRotation*/ func_0x03251cec((int)lVar6,uVar37,(int)lVar28,uVar25,fVar22,fVar27,0);
            *(float *)((long)ppuVar1 + -0xb0) = fVar36;
            uVar23 = /*UnityEngine.Quaternion$$Slerp*/ func_0x0325174c(uVar23,0);
            *(undefined8 *)((long)ppuVar1 + -0x50) = *(undefined8 *)((long)ppuVar1 + -0x50);
            *(undefined8 *)((long)ppuVar1 + -0x48) = *(undefined8 *)((long)ppuVar1 + -0x48);
            *(undefined8 *)((long)ppuVar1 + -0x40) = *(undefined8 *)((long)ppuVar1 + -0x40);
            *(undefined8 *)((long)ppuVar1 + -0x38) = *(undefined8 *)((long)ppuVar1 + -0x38);
            *(undefined4 *)((long)ppuVar1 + -0x60) = uVar23;
            *(float *)((long)ppuVar1 + -0x5c) = fVar35;
            *(float *)((long)ppuVar1 + -0x58) = fVar29;
            *(undefined4 *)((long)ppuVar1 + -0x54) = uVar31;
            if (pcRam0000000003ec2948 == (code *)0x0) {
              pcRam0000000003ec2948 =
                   (code *)func_0x00f789d4("UnityEngine.Rigidbody::MoveRotation_Injected(UnityEngine.Quaternion&)"
                                           ,0);
            }
            plVar12 = (long *)(*pcRam0000000003ec2948)(lVar5,(undefined1 *)((long)ppuVar1 + -0x60));
            return plVar12;
          }
        }
      }
      auVar39 = func_0x00f78af4();
      plVar13 = auVar39._8_8_;
      plVar7 = auVar39._0_8_;
      *(undefined8 *)((long)ppuVar1 + -0xe0) = unaff_x22;
      *(undefined8 *)((long)ppuVar1 + -0xd8) = 0x3eb4000;
      *(long **)((long)ppuVar1 + -0xd0) = plVar12;
      *(long **)((long)ppuVar1 + -200) = plVar10;
      *(undefined1 **)((long)ppuVar1 + -0xc0) = (undefined1 *)((long)ppuVar1 + -0x40);
      *(undefined **)((long)ppuVar1 + -0xb8) =
           &Atlas_Gameplay_Usables_PlacementHomingProjectile__OnTriggerEnter;
      uVar18 = 0x3eb4000;
      if ((bRam0000000003eb4af8 & 1) == 0) {
        func_0x00f78a20(0x3d534a0);
        func_0x00f78a20(0x3d21fc8);
        func_0x00f78a20(0x3d22c78);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4af8 = 1;
      }
      *(undefined8 *)((long)ppuVar1 + -0xf8) = 0;
      *(undefined8 *)((long)ppuVar1 + -0x100) = 0;
      *(undefined8 *)((long)ppuVar1 + -0xe8) = 0;
      *(undefined8 *)((long)ppuVar1 + -0xf0) = 0;
      uVar14 = 0;
      plVar12 = (long *)Atlas_Gameplay_Usables_CollidableUsable__OnTriggerEnter(plVar7,plVar13);
      if (((char)plVar7[0xc] == '\0') && (*(char *)((long)plVar7 + 300) == '\0')) {
        plVar12 = plVar13;
        if (plVar13 == (long *)0x0) {
code_r0x014be248:
          plVar10 = (long *)func_0x00f78af4();
          *(ulong *)((long)ppuVar1 + -0x160) = uVar34;
          *(ulong *)((long)ppuVar1 + -0x158) = uVar33;
          *(undefined **)((long)ppuVar1 + -0x150) = puVar21;
          *(ulong *)((long)ppuVar1 + -0x148) = uVar32;
          *(undefined8 *)((long)ppuVar1 + -0x140) = unaff_x24;
          *(undefined8 *)((long)ppuVar1 + -0x138) = unaff_x23;
          *(undefined8 *)((long)ppuVar1 + -0x130) = unaff_x22;
          *(undefined8 *)((long)ppuVar1 + -0x128) = uVar18;
          *(long **)((long)ppuVar1 + -0x120) = plVar12;
          *(long **)((long)ppuVar1 + -0x118) = plVar7;
          *(undefined1 **)((long)ppuVar1 + -0x110) = (undefined1 *)((long)ppuVar1 + -0xc0);
          *(undefined **)((long)ppuVar1 + -0x108) =
               &Atlas_Gameplay_Usables_PlacementHomingProjectile__CreateDeSpawnVfx;
          puVar17 = (undefined1 *)((long)ppuVar1 + -0x110);
          if ((bRam0000000003eb4af9 & 1) == 0) {
            func_0x00f78a20(0x3d6b360);
            bRam0000000003eb4af9 = 1;
          }
          lVar5 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar10,0);
          lVar6 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                            (plVar10);
          if ((lVar6 != 0) && (plVar10[0x20] != 0)) {
            uVar18 = *(undefined8 *)(lVar6 + 0xd8);
            unaff_x22 = *(undefined8 *)(lVar6 + 0xe0);
            uVar31 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(plVar10[0x20],0);
            lVar6 = plVar10[5];
            uVar11 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                               (plVar10);
            if (lVar5 != 0) {
              uVar14 = uVar18;
              lVar5 = /*Atlas.Contexts.GameContextBase$$SpawnAoE*/ func_0x0159a63c(uVar31,fVar27,fVar29,lVar5,/*STR('CulturePodExplosionVFX')*/ uRam0000000003d6b360,uVar18,
                                      unaff_x22,lVar6,uVar11,plVar10[10],0);
              lVar6 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                                (plVar10);
              if (lVar6 != 0) {
                uVar18 = *(undefined8 *)(lVar6 + 0x98);
                *(undefined8 *)((long)ppuVar1 + -0x178) = *(undefined8 *)(lVar6 + 0xa0);
                *(undefined8 *)((long)ppuVar1 + -0x180) = uVar18;
                *(undefined4 *)((long)ppuVar1 + -0x170) = *(undefined4 *)(lVar6 + 0xa8);
                plVar12 = (long *)/*Atlas.Gameplay.Usables.ProjectileUsable$$SetupDespawnVFX*/ func_0x014cf800(plVar10,lVar5,
                                                  (undefined1 *)((long)ppuVar1 + -0x180),0);
                return plVar12;
              }
            }
          }
          puVar21 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__LoseTarget;
          plVar12 = (long *)func_0x00f78af4();
          puVar8 = (undefined1 *)((long)ppuVar1 + -0x180);
          do {
            *(long *)(puVar8 + -0x20) = lVar5;
            *(long **)(puVar8 + -0x18) = plVar10;
            *(undefined1 **)(puVar8 + -0x10) = puVar17;
            *(undefined **)(puVar8 + -8) = puVar21;
            lVar5 = 0x3eb4000;
            if ((bRam0000000003eb4afa & 1) == 0) {
              func_0x00f78a20(0x3d3b888);
              func_0x00f78a20(0x3d3b890);
              bRam0000000003eb4afa = 1;
            }
            if (plVar12[0x34] != 0) {
              plVar7 = (long *)Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasKartTarget
                                         (plVar12[0x34],0);
              if ((int)plVar7 == 0) {
                return plVar7;
              }
              if (((plVar12[0x34] != 0) && (lVar6 = *(long *)(plVar12[0x34] + 0x20), lVar6 != 0)) &&
                 (lVar6 = *(long *)(lVar6 + 0x90), lVar6 != 0)) {
                plVar7 = (long *)/*Atlas.Gameplay.Player.GameContextPlayer$$get_IsLocalPlayer*/ func_0x0159dd28(lVar6,0);
                if ((int)plVar7 != 0) {
                  if (((plVar12[0x34] == 0) || (lVar6 = *(long *)(plVar12[0x34] + 0x20), lVar6 == 0)
                      ) || ((lVar6 = *(long *)(lVar6 + 0x90), lVar6 == 0 ||
                            (lVar6 = *(long *)(lVar6 + 200), lVar6 == 0)))) goto code_r0x014be468;
                  uVar14 = uRam0000000003d3b888;
                  plVar7 = (long *)/*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(lVar6,plVar12);
                  if ((int)plVar7 != 0) {
                    if (((plVar12[0x34] == 0) ||
                        (lVar6 = *(long *)(plVar12[0x34] + 0x20), lVar6 == 0)) ||
                       ((lVar6 = *(long *)(lVar6 + 0x90), lVar6 == 0 ||
                        (lVar6 = *(long *)(lVar6 + 200), lVar6 == 0)))) goto code_r0x014be468;
                    uVar14 = uRam0000000003d3b890;
                    plVar7 = (long *)/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(lVar6,plVar12);
                  }
                }
                if (plVar12[0x34] != 0) {
                  *(undefined8 *)(plVar12[0x34] + 0x20) = 0;
                  return plVar7;
                }
              }
            }
code_r0x014be468:
            plVar10 = (long *)func_0x00f78af4();
            *(undefined8 *)(puVar8 + -0x40) = 0x3eb4000;
            *(long **)(puVar8 + -0x38) = plVar12;
            *(undefined1 **)(puVar8 + -0x30) = puVar8 + -0x10;
            *(undefined **)(puVar8 + -0x28) =
                 &Atlas_Gameplay_Usables_PlacementHomingProjectile__Destroy;
            puVar17 = puVar8 + -0x30;
            uVar15 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar10,0);
            uVar24 = (uint)uVar14;
            if ((uVar15 & 1) != 0) goto code_r0x014be490;
            puVar21 = &UNK_014be490;
            puVar8 = puVar8 + -0x40;
            plVar12 = plVar10;
          } while( true );
        }
        uVar18 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(plVar13,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar14 = 0;
        plVar12 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar18,0);
        if ((int)plVar12 != 0) {
          lVar5 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(plVar13,0);
          plVar12 = plVar13;
          if (lVar5 == 0) goto code_r0x014be248;
          plVar10 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar5,uRam0000000003d534a0);
          plVar12 = (long *)0x0;
          if (plVar10 != (long *)0x0) {
            lVar5 = *plVar10;
            uVar15 = (ulong)*(ushort *)(lVar5 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == /*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ lRam0000000003d21fc8) {
                  puVar9 = (undefined8 *)(lVar5 + (long)*piVar16 * 0x10 + 0x138);
                  goto code_r0x014be170;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            uVar14 = 0;
            puVar9 = (undefined8 *)func_0x00fac1f0(plVar10);
code_r0x014be170:
            plVar12 = (long *)(*(code *)*puVar9)(plVar10,puVar9[1]);
            if (plVar12 != (long *)0x0) {
              if ((*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) <= *(byte *)(*plVar12 + 300)) &&
                 (*(long *)(*(long *)(*plVar12 + 200) +
                            (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8 + -8) ==
                  /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78)) {
                if (plVar7[0x34] != 0) {
                  if (plVar12 != *(long **)(plVar7[0x34] + 0x20)) {
                    if (plVar12 == (long *)0x0) goto code_r0x014be248;
                    lVar5 = plVar12[9];
                    lVar28 = plVar12[0xc];
                    lVar6 = plVar12[0xb];
                    *(long *)((long)ppuVar1 + -0xf8) = plVar12[10];
                    *(long *)((long)ppuVar1 + -0x100) = lVar5;
                    *(long *)((long)ppuVar1 + -0xe8) = lVar28;
                    *(long *)((long)ppuVar1 + -0xf0) = lVar6;
                    iVar4 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90((undefined1 *)((long)ppuVar1 + -0x100),0);
                    fVar27 = (float)lVar6;
                    if (iVar4 != 0) {
                      lVar5 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                                        (plVar7);
                      if (lVar5 == 0) goto code_r0x014be248;
                      uVar14 = *(undefined8 *)(lVar5 + 0xd0);
                      (**(code **)(*plVar7 + 0x338))
                                (plVar7,plVar12,uVar14,0,*(undefined8 *)(*plVar7 + 0x340));
                    }
                  }
                  if ((plVar12[0xe] != 0) && (plVar7[0x45] != 0)) {
                    plVar12 = (long *)/*Atlas.Audio.WeaponAudio$$Explode*/ func_0x01530004(plVar7[0x45],
                                                      *(undefined8 *)(plVar12[0xe] + 0xb8),0);
                    return plVar12;
                  }
                }
                goto code_r0x014be248;
              }
            }
          }
        }
      }
      return plVar12;
    }
    *(undefined4 *)(plVar10 + 0x43) = 0x3e99999a;
  }
  return plVar7;
code_r0x014be490:
  uVar14 = *(undefined8 *)(puVar8 + -0x40);
  puVar2 = puVar8 + -0x40;
  *(undefined8 *)(puVar8 + -0x40) = uVar14;
  *(undefined8 *)(puVar8 + -0x38) = *(undefined8 *)(puVar8 + -0x38);
  *(undefined8 *)(puVar8 + -0x30) = *(undefined8 *)(puVar8 + -0x30);
  *(undefined8 *)(puVar8 + -0x28) = *(undefined8 *)(puVar8 + -0x28);
  puVar17 = puVar8 + -0x30;
  plVar12 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar10,0);
  if (((ulong)plVar12 & 1) != 0) {
code_r0x014ceb18:
    if ((char)plVar10[0xc] == '\0') {
      *(undefined1 *)(plVar10 + 0xc) = 1;
      *(undefined1 *)((long)plVar10 + 0x61) = 1;
      return plVar10;
    }
    return plVar12;
  }
  plVar12 = (long *)/*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar10,0);
  if ((plVar12 == (long *)0x0) || (plVar12[0x18] == 0)) {
    puVar21 = &Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
    auVar40 = func_0x00f78af4();
  }
  else {
    if (*(char *)(plVar12[0x18] + 0x50) != '\0') goto code_r0x014ceb18;
    auVar40._8_4_ = 1;
    auVar40._0_8_ = plVar10;
    uVar24 = 1;
    puVar17 = *(undefined1 **)(puVar8 + -0x30);
    puVar21 = *(undefined **)(puVar8 + -0x28);
    puVar2 = puVar8 + -0x20;
    uVar14 = *(undefined8 *)(puVar8 + -0x40);
    plVar10 = *(long **)(puVar8 + -0x38);
  }
  plVar12 = auVar40._0_8_;
  *(undefined8 *)(puVar2 + -0x20) = uVar14;
  *(long **)(puVar2 + -0x18) = plVar10;
  *(undefined1 **)(puVar2 + -0x10) = puVar17;
  *(undefined **)(puVar2 + -8) = puVar21;
  if ((*(char *)((long)plVar12 + 300) != '\0') == uVar24) {
    return plVar12;
  }
  if (auVar40._8_4_ != 0) {
    (**(code **)(*plVar12 + 0x448))(plVar12,*(undefined8 *)(*plVar12 + 0x450));
  }
  *(char *)((long)plVar12 + 300) = (char)uVar24;
  if (((plVar12[9] != 0) && (lVar5 = *(long *)(plVar12[9] + 0x28), lVar5 != 0)) &&
     (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar5,0), lVar5 != 0)) {
    *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = uVar18;
    *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
    *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
    *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
    *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar12 = (long *)(*pcRam0000000003ebf4c0)(lVar5,uVar24 ^ 1);
    return plVar12;
  }
  plVar12 = (long *)func_0x00f78af4();
  return plVar12;
}



// ============================================================
// RVA: 0x14bda68 | Atlas.Gameplay.Usables.PlacementHomingProjectile.UpdateHitTargetAnim
// ============================================================

/* WARNING: Possible PIC construction at 0x014bdb6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014be48c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014bdb70) */
/* WARNING: Removing unreachable block (ram,0x014bdb88) */
/* WARNING: Removing unreachable block (ram,0x014bdb90) */
/* WARNING: Removing unreachable block (ram,0x014bdbac) */
/* WARNING: Removing unreachable block (ram,0x014bdbb4) */
/* WARNING: Removing unreachable block (ram,0x014bdbd0) */
/* WARNING: Removing unreachable block (ram,0x014bdbe0) */
/* WARNING: Removing unreachable block (ram,0x014bdbf4) */
/* WARNING: Removing unreachable block (ram,0x014bdbfc) */
/* WARNING: Removing unreachable block (ram,0x014bdc04) */
/* WARNING: Removing unreachable block (ram,0x014bdc10) */
/* WARNING: Removing unreachable block (ram,0x014bdc18) */
/* WARNING: Removing unreachable block (ram,0x014bdc20) */
/* WARNING: Removing unreachable block (ram,0x014bdc28) */
/* WARNING: Removing unreachable block (ram,0x014bdc30) */
/* WARNING: Removing unreachable block (ram,0x014bdc48) */
/* WARNING: Removing unreachable block (ram,0x014bdc50) */
/* WARNING: Removing unreachable block (ram,0x014bdc58) */
/* WARNING: Removing unreachable block (ram,0x014bdc60) */
/* WARNING: Removing unreachable block (ram,0x014bdc68) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
Atlas_Gameplay_Usables_PlacementHomingProjectile__UpdateHitTargetAnim
          (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,long param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float *pfVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  int extraout_w1;
  long *extraout_x1;
  uint uVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  long lVar21;
  undefined8 unaff_x21;
  undefined8 uVar22;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 *******pppppppuVar23;
  undefined1 *puVar24;
  undefined *puVar25;
  float fVar26;
  undefined8 extraout_d0;
  undefined8 extraout_d0_07;
  undefined8 extraout_d0_08;
  undefined8 extraout_d0_09;
  undefined1 auVar29 [16];
  undefined8 extraout_var;
  undefined1 auVar30 [16];
  undefined8 extraout_d0_00;
  undefined8 extraout_var_00;
  undefined1 auVar31 [16];
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auVar32 [16];
  undefined8 extraout_d0_01;
  undefined8 extraout_d0_02;
  undefined8 extraout_d0_03;
  undefined8 extraout_d0_04;
  undefined8 extraout_d0_05;
  undefined8 extraout_d0_06;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  undefined8 extraout_var_05;
  undefined8 extraout_var_06;
  undefined1 auVar33 [16];
  undefined8 extraout_var_07;
  undefined8 extraout_var_08;
  undefined1 auVar34 [16];
  undefined8 extraout_var_09;
  undefined8 uVar37;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar38;
  float fVar39;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  undefined8 unaff_d11;
  undefined4 uVar40;
  undefined8 unaff_d12;
  undefined4 uVar41;
  undefined8 unaff_d13;
  undefined4 uVar42;
  undefined8 unaff_d14;
  float fVar43;
  undefined8 unaff_d15;
  ulong uStack_a0;
  ulong uStack_98;
  long lStack_90;
  long *plStack_88;
  undefined8 *******pppppppuStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 *******pppppppuStack_60;
  undefined *puStack_58;
  float afStack_50 [4];
  
  pfVar4 = afStack_50;
  pppppppuVar23 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4af6 & 1) == 0) {
    func_0x00f78a20(0x3d3b888);
    param_1 = func_0x00f78a20(0x3d3b890);
    bRam0000000003eb4af6 = 1;
  }
  if (*(char *)(param_5 + 0x1d4) != '\0') {
    return param_1;
  }
  lVar9 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                    (param_5);
  lVar21 = 0x3eb4000;
  if (((*(long *)(param_5 + 0x1a0) == 0) ||
      (lVar18 = *(long *)(*(long *)(param_5 + 0x1a0) + 0x20), lVar18 == 0)) ||
     (lVar18 = *(long *)(lVar18 + 0x10), lVar21 = lVar9, lVar18 == 0)) {
LAB_014bdc94:
    auVar29 = func_0x00f78af4();
    plVar11 = auVar29._0_8_;
    puStack_58 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__EarlyUpdate;
    lStack_70 = lVar21;
    lStack_68 = param_5;
    pppppppuStack_60 = pppppppuVar23;
    auVar29 = /*Atlas.Gameplay.Usables.ProjectileUsable$$EarlyUpdate*/ func_0x014ce420(plVar11,auVar29._8_8_,0);
    if (plVar11[0x19] != 0) {
      if (*(char *)(plVar11[0x19] + 0x44) == '\0') {
        iVar8 = /*Atlas.Gameplay.Usables.ProjectileUsable$$GetForceToFloorNetworkFlag*/ func_0x014cf58c(plVar11,0);
        auVar29._8_8_ = extraout_var;
        auVar29._0_8_ = extraout_d0;
        if (iVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x014bdcec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar29 = (**(code **)(*plVar11 + 0x428))
                              ((int)plVar11[0x35],plVar11,*(undefined8 *)(*plVar11 + 0x430));
          return auVar29;
        }
      }
      return auVar29;
    }
    param_5 = func_0x00f78af4();
    pfVar4 = (float *)&uStack_a0;
    puStack_78 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__GetDistanceRatioToTarget;
    pppppppuVar23 = &pppppppuStack_80;
    uVar15 = 0;
    if (((*(char *)(param_5 + 0x60) != '\0') || (*(float *)(param_5 + 0x1c0) <= 0.0)) ||
       ((*(long *)(param_5 + 0x1a0) == 0 ||
        (uStack_a0 = unaff_d9, uStack_98 = unaff_d8, lStack_90 = lVar21, plStack_88 = plVar11,
        pppppppuStack_80 = &pppppppuStack_60,
        iVar8 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasKartTarget
                          (*(long *)(param_5 + 0x1a0),0), iVar8 == 0)))) {
code_r0x014bdd8c:
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar15;
      return auVar30;
    }
    lVar9 = *(long *)(param_5 + 0x1a0);
    if (lVar9 != 0) {
      fVar26 = (float)Atlas_Gameplay_Usables_HomingProjectileLogic__DistToTargetSquared
                                (lVar9,*(undefined8 *)(lVar9 + 0x20),0);
      fVar38 = *(float *)(param_5 + 0x1c0);
      uVar15 = 0x3f800000;
      if (fVar26 < fVar38 * fVar38) {
        fVar39 = *(float *)(param_5 + 0x1bc);
        uVar15 = 0;
        if (fVar39 * fVar39 < fVar26) {
          uVar15 = (ulong)(uint)((SQRT(fVar26) - fVar39) / (fVar38 - fVar39));
        }
      }
      goto code_r0x014bdd8c;
    }
    puVar25 = &Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__TriggerImpactAnim;
    lVar9 = func_0x00f78af4();
  }
  else {
    lVar18 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar18,0);
    fVar38 = *(float *)(lVar18 + 0x140);
    fVar39 = *(float *)(lVar18 + 0x144);
    fVar26 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar18 + 0x13c),0);
    param_3 = fVar39;
    param_2 = fVar38;
    if (*(long *)(param_5 + 0x100) == 0) goto LAB_014bdc94;
    unaff_d10 = (ulong)(uint)fVar26;
    unaff_d8 = (ulong)(uint)fVar38;
    unaff_d9 = (ulong)(uint)fVar39;
    afStack_50[0] = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(param_5 + 0x100),0);
    afStack_50[0] = fVar26 - afStack_50[0];
    afStack_50[2] = fVar39 - param_3;
    afStack_50[1] = 0.0;
    if (lVar9 == 0) goto LAB_014bdc94;
    param_2 = param_2 - fVar38;
    if ((param_2 <= *(float *)(lVar9 + 0xe8)) || (*(float *)(lVar9 + 0xec) <= param_2)) {
      return ZEXT416((uint)param_2);
    }
    auVar29 = /*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(afStack_50,0);
    param_2 = *(float *)(param_5 + 0x1ec);
    if (param_2 <= auVar29._0_4_) {
      return auVar29;
    }
    lVar9 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingBehaviour(param_5);
    if (lVar9 == 0) goto LAB_014bdc94;
    puVar25 = (undefined *)0x14bdb70;
    uVar15 = unaff_d8;
  }
  *(undefined8 *)((long)pfVar4 + -0x30) = unaff_x22;
  *(undefined8 *)((long)pfVar4 + -0x28) = unaff_x21;
  *(long *)((long)pfVar4 + -0x20) = lVar21;
  *(long *)((long)pfVar4 + -0x18) = param_5;
  *(undefined8 ********)((long)pfVar4 + -0x10) = pppppppuVar23;
  *(undefined **)((long)pfVar4 + -8) = puVar25;
  if ((bRam0000000003eb4b00 & 1) == 0) {
    func_0x00f78a20(0x3d23c70);
    bRam0000000003eb4b00 = 1;
  }
  lVar21 = *(long *)(lVar9 + 0x70);
  if (((*(ushort *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar21 != 0) {
    uVar27 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 0xc);
    *(undefined8 *)((long)pfVar4 + -0x30) = *(undefined8 *)((long)pfVar4 + -0x30);
    *(undefined8 *)((long)pfVar4 + -0x28) = *(undefined8 *)((long)pfVar4 + -0x28);
    *(undefined8 *)((long)pfVar4 + -0x20) = *(undefined8 *)((long)pfVar4 + -0x20);
    *(undefined8 *)((long)pfVar4 + -0x18) = *(undefined8 *)((long)pfVar4 + -0x18);
    *(undefined8 *)((long)pfVar4 + -0x10) = *(undefined8 *)((long)pfVar4 + -0x10);
    *(undefined8 *)((long)pfVar4 + -8) = *(undefined8 *)((long)pfVar4 + -8);
    if (pcRam0000000003ebe420 == (code *)0x0) {
      pcRam0000000003ebe420 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar29 = (*pcRam0000000003ebe420)(lVar21,uVar27,1);
    return auVar29;
  }
  lVar21 = func_0x00f78af4();
  auVar31._8_8_ = extraout_var_00;
  auVar31._0_8_ = extraout_d0_00;
  *(undefined8 *)((long)pfVar4 + -0xa0) = unaff_d15;
  *(undefined8 *)((long)pfVar4 + -0x98) = unaff_d14;
  *(undefined8 *)((long)pfVar4 + -0x90) = unaff_d13;
  *(undefined8 *)((long)pfVar4 + -0x88) = unaff_d12;
  *(undefined8 *)((long)pfVar4 + -0x80) = unaff_d11;
  *(ulong *)((long)pfVar4 + -0x78) = unaff_d10;
  *(ulong *)((long)pfVar4 + -0x70) = unaff_d9;
  *(ulong *)((long)pfVar4 + -0x68) = uVar15;
  *(undefined8 *)((long)pfVar4 + -0x60) = unaff_x22;
  *(undefined8 *)((long)pfVar4 + -0x58) = 0x3eb4000;
  *(undefined8 *)((long)pfVar4 + -0x50) = 0x3d23c70;
  *(undefined8 *)((long)pfVar4 + -0x48) = 0;
  *(undefined1 **)((long)pfVar4 + -0x40) = (undefined1 *)((long)pfVar4 + -0x10);
  *(undefined **)((long)pfVar4 + -0x38) =
       &Atlas_Gameplay_Usables_PlacementHomingProjectile__FixedUpdateGameplay;
  if ((bRam0000000003eb4af7 & 1) == 0) {
    auVar31 = func_0x00f78a20(0x3d22618);
    bRam0000000003eb4af7 = 1;
  }
  if (*(char *)(lVar21 + 0x18) != '\0') {
    bVar7 = false;
    if (*(char *)(lVar21 + 0x11c) != '\0') {
      bVar7 = *(char *)(lVar21 + 0x1b4) == '\0';
    }
    *(bool *)(lVar21 + 0x11c) = bVar7;
    auVar31 = /*Atlas.Gameplay.Usables.ProjectileUsable$$FixedUpdateGameplay*/ func_0x014cdd74(lVar21,extraout_x1,0);
    if ((*(char *)(lVar21 + 0x125) != '\0') || (*(char *)(lVar21 + 0xf0) != '\0')) {
      plVar11 = extraout_x1;
      if (extraout_x1 != (long *)0x0) {
        fVar26 = *(float *)(lVar21 + 0x218);
        uVar15 = (ulong)(uint)fVar26;
        lVar9 = *extraout_x1;
        uVar19 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
              puVar10 = (undefined8 *)(lVar9 + (long)(*piVar20 + 3) * 0x10 + 0x138);
              goto code_r0x014bdf18;
            }
            piVar20 = piVar20 + 4;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        puVar10 = (undefined8 *)func_0x00fac1f0(extraout_x1,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,3);
code_r0x014bdf18:
        fVar38 = (float)(*(code *)*puVar10)(extraout_x1,puVar10[1]);
        fVar26 = fVar26 - fVar38;
        *(float *)(lVar21 + 0x218) = fVar26;
        if (*(long *)(lVar21 + 0xf8) != 0) {
          lVar9 = *(long *)(*(long *)(lVar21 + 0xf8) + 0x18);
          plVar11 = (long *)0x0;
          if (lVar9 != 0) {
            fVar43 = (_UNK_033f83fc - fVar26) / _UNK_033f83fc;
            fVar39 = _UNK_033f83fc;
            uVar27 = /*UnityEngine.Rigidbody$$get_rotation*/ func_0x032a2fa0(lVar9,0);
            uVar40 = *(undefined4 *)(lVar21 + 0xe0);
            uVar41 = *(undefined4 *)(lVar21 + 0xe4);
            uVar42 = *(undefined4 *)(lVar21 + 0xe8);
            fVar26 = param_3;
            fVar38 = fVar39;
            uVar28 = /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
            /*UnityEngine.Quaternion$$LookRotation*/ func_0x03251cec(uVar40,uVar41,uVar42,uVar28,fVar38,fVar26,0);
            *(float *)((long)pfVar4 + -0xb0) = fVar43;
            uVar27 = /*UnityEngine.Quaternion$$Slerp*/ func_0x0325174c(uVar27,0);
            *(undefined8 *)((long)pfVar4 + -0x50) = *(undefined8 *)((long)pfVar4 + -0x50);
            *(undefined8 *)((long)pfVar4 + -0x48) = *(undefined8 *)((long)pfVar4 + -0x48);
            *(undefined8 *)((long)pfVar4 + -0x40) = *(undefined8 *)((long)pfVar4 + -0x40);
            *(undefined8 *)((long)pfVar4 + -0x38) = *(undefined8 *)((long)pfVar4 + -0x38);
            *(undefined4 *)((long)pfVar4 + -0x60) = uVar27;
            *(float *)((long)pfVar4 + -0x5c) = fVar39;
            *(float *)((long)pfVar4 + -0x58) = param_3;
            *(undefined4 *)((long)pfVar4 + -0x54) = param_4;
            if (pcRam0000000003ec2948 == (code *)0x0) {
              pcRam0000000003ec2948 =
                   (code *)func_0x00f789d4("UnityEngine.Rigidbody::MoveRotation_Injected(UnityEngine.Quaternion&)"
                                           ,0);
            }
            auVar29 = (*pcRam0000000003ec2948)(lVar9,(undefined1 *)((long)pfVar4 + -0x60));
            return auVar29;
          }
        }
      }
      auVar29 = func_0x00f78af4();
      plVar12 = auVar29._8_8_;
      plVar14 = auVar29._0_8_;
      *(undefined8 *)((long)pfVar4 + -0xe0) = unaff_x22;
      *(undefined8 *)((long)pfVar4 + -0xd8) = 0x3eb4000;
      *(long **)((long)pfVar4 + -0xd0) = plVar11;
      *(long *)((long)pfVar4 + -200) = lVar21;
      *(undefined1 **)((long)pfVar4 + -0xc0) = (undefined1 *)((long)pfVar4 + -0x40);
      *(undefined **)((long)pfVar4 + -0xb8) =
           &Atlas_Gameplay_Usables_PlacementHomingProjectile__OnTriggerEnter;
      uVar22 = 0x3eb4000;
      if ((bRam0000000003eb4af8 & 1) == 0) {
        func_0x00f78a20(0x3d534a0);
        func_0x00f78a20(0x3d21fc8);
        func_0x00f78a20(0x3d22c78);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4af8 = 1;
      }
      *(undefined8 *)((long)pfVar4 + -0xf8) = 0;
      *(undefined8 *)((long)pfVar4 + -0x100) = 0;
      *(undefined8 *)((long)pfVar4 + -0xe8) = 0;
      *(undefined8 *)((long)pfVar4 + -0xf0) = 0;
      uVar17 = 0;
      auVar32 = Atlas_Gameplay_Usables_CollidableUsable__OnTriggerEnter(plVar14,plVar12);
      if (((char)plVar14[0xc] == '\0') && (*(char *)((long)plVar14 + 300) == '\0')) {
        if (plVar12 == (long *)0x0) {
code_r0x014be248:
          plVar11 = (long *)func_0x00f78af4();
          *(undefined8 *)((long)pfVar4 + -0x160) = unaff_d11;
          *(ulong *)((long)pfVar4 + -0x158) = unaff_d10;
          *(ulong *)((long)pfVar4 + -0x150) = unaff_d9;
          *(ulong *)((long)pfVar4 + -0x148) = uVar15;
          *(undefined8 *)((long)pfVar4 + -0x140) = unaff_x24;
          *(undefined8 *)((long)pfVar4 + -0x138) = unaff_x23;
          *(undefined8 *)((long)pfVar4 + -0x130) = unaff_x22;
          *(undefined8 *)((long)pfVar4 + -0x128) = uVar22;
          *(long **)((long)pfVar4 + -0x120) = plVar12;
          *(long **)((long)pfVar4 + -0x118) = plVar14;
          *(undefined1 **)((long)pfVar4 + -0x110) = (undefined1 *)((long)pfVar4 + -0xc0);
          *(undefined **)((long)pfVar4 + -0x108) =
               &Atlas_Gameplay_Usables_PlacementHomingProjectile__CreateDeSpawnVfx;
          puVar24 = (undefined1 *)((long)pfVar4 + -0x110);
          if ((bRam0000000003eb4af9 & 1) == 0) {
            func_0x00f78a20(0x3d6b360);
            bRam0000000003eb4af9 = 1;
          }
          lVar21 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar11,0);
          lVar9 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                            (plVar11);
          if ((lVar9 != 0) && (plVar11[0x20] != 0)) {
            uVar22 = *(undefined8 *)(lVar9 + 0xd8);
            unaff_x22 = *(undefined8 *)(lVar9 + 0xe0);
            uVar27 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(plVar11[0x20],0);
            lVar9 = plVar11[5];
            uVar13 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                               (plVar11);
            if (lVar21 != 0) {
              uVar17 = uVar22;
              lVar21 = /*Atlas.Contexts.GameContextBase$$SpawnAoE*/ func_0x0159a63c(uVar27,param_2,param_3,lVar21,/*STR('CulturePodExplosionVFX')*/ uRam0000000003d6b360,uVar22,
                                       unaff_x22,lVar9,uVar13,plVar11[10],0);
              lVar9 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                                (plVar11);
              if (lVar9 != 0) {
                uVar22 = *(undefined8 *)(lVar9 + 0x98);
                *(undefined8 *)((long)pfVar4 + -0x178) = *(undefined8 *)(lVar9 + 0xa0);
                *(undefined8 *)((long)pfVar4 + -0x180) = uVar22;
                *(undefined4 *)((long)pfVar4 + -0x170) = *(undefined4 *)(lVar9 + 0xa8);
                auVar29 = /*Atlas.Gameplay.Usables.ProjectileUsable$$SetupDespawnVFX*/ func_0x014cf800(plVar11,lVar21,(undefined1 *)((long)pfVar4 + -0x180),0);
                return auVar29;
              }
            }
          }
          puVar25 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__LoseTarget;
          plVar14 = (long *)func_0x00f78af4();
          puVar5 = (undefined1 *)((long)pfVar4 + -0x180);
          do {
            *(long *)(puVar5 + -0x20) = lVar21;
            *(long **)(puVar5 + -0x18) = plVar11;
            *(undefined1 **)(puVar5 + -0x10) = puVar24;
            *(undefined **)(puVar5 + -8) = puVar25;
            lVar21 = 0x3eb4000;
            if ((bRam0000000003eb4afa & 1) == 0) {
              func_0x00f78a20(0x3d3b888);
              func_0x00f78a20(0x3d3b890);
              bRam0000000003eb4afa = 1;
            }
            if (plVar14[0x34] != 0) {
              iVar8 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasKartTarget
                                (plVar14[0x34],0);
              auVar3._8_8_ = extraout_var_04;
              auVar3._0_8_ = extraout_d0_04;
              if (iVar8 == 0) {
                return auVar3;
              }
              if (((plVar14[0x34] != 0) && (lVar9 = *(long *)(plVar14[0x34] + 0x20), lVar9 != 0)) &&
                 (lVar9 = *(long *)(lVar9 + 0x90), lVar9 != 0)) {
                iVar8 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_IsLocalPlayer*/ func_0x0159dd28(lVar9,0);
                auVar33._8_8_ = extraout_var_05;
                auVar33._0_8_ = extraout_d0_05;
                if (iVar8 != 0) {
                  if (((plVar14[0x34] == 0) || (lVar9 = *(long *)(plVar14[0x34] + 0x20), lVar9 == 0)
                      ) || ((lVar9 = *(long *)(lVar9 + 0x90), lVar9 == 0 ||
                            (lVar9 = *(long *)(lVar9 + 200), lVar9 == 0)))) goto code_r0x014be468;
                  uVar17 = uRam0000000003d3b888;
                  iVar8 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(lVar9,plVar14);
                  auVar33._8_8_ = extraout_var_06;
                  auVar33._0_8_ = extraout_d0_06;
                  if (iVar8 != 0) {
                    if (((plVar14[0x34] == 0) ||
                        (lVar9 = *(long *)(plVar14[0x34] + 0x20), lVar9 == 0)) ||
                       ((lVar9 = *(long *)(lVar9 + 0x90), lVar9 == 0 ||
                        (lVar9 = *(long *)(lVar9 + 200), lVar9 == 0)))) goto code_r0x014be468;
                    uVar17 = uRam0000000003d3b890;
                    auVar33 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(lVar9,plVar14);
                  }
                }
                if (plVar14[0x34] != 0) {
                  *(undefined8 *)(plVar14[0x34] + 0x20) = 0;
                  return auVar33;
                }
              }
            }
code_r0x014be468:
            plVar11 = (long *)func_0x00f78af4();
            *(undefined8 *)(puVar5 + -0x40) = 0x3eb4000;
            *(long **)(puVar5 + -0x38) = plVar14;
            *(undefined1 **)(puVar5 + -0x30) = puVar5 + -0x10;
            *(undefined **)(puVar5 + -0x28) =
                 &Atlas_Gameplay_Usables_PlacementHomingProjectile__Destroy;
            puVar24 = puVar5 + -0x30;
            uVar15 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar11,0);
            uVar16 = (uint)uVar17;
            if ((uVar15 & 1) != 0) goto code_r0x014be490;
            puVar25 = &UNK_014be490;
            puVar5 = puVar5 + -0x40;
            plVar14 = plVar11;
          } while( true );
        }
        uVar22 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(plVar12,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar17 = 0;
        iVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar22,0);
        auVar32._8_8_ = extraout_var_01;
        auVar32._0_8_ = extraout_d0_01;
        if (iVar8 != 0) {
          lVar21 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(plVar12,0);
          if (lVar21 == 0) goto code_r0x014be248;
          plVar11 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar21,uRam0000000003d534a0);
          auVar32._8_8_ = extraout_var_02;
          auVar32._0_8_ = extraout_d0_02;
          if (plVar11 != (long *)0x0) {
            lVar21 = *plVar11;
            uVar19 = (ulong)*(ushort *)(lVar21 + 0x12a);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == /*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ lRam0000000003d21fc8) {
                  puVar10 = (undefined8 *)(lVar21 + (long)*piVar20 * 0x10 + 0x138);
                  goto code_r0x014be170;
                }
                piVar20 = piVar20 + 4;
                uVar19 = uVar19 - 1;
              } while (uVar19 != 0);
            }
            uVar17 = 0;
            puVar10 = (undefined8 *)func_0x00fac1f0(plVar11);
code_r0x014be170:
            plVar12 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
            auVar2._8_8_ = extraout_var_03;
            auVar2._0_8_ = extraout_d0_03;
            auVar1._8_8_ = extraout_var_03;
            auVar1._0_8_ = extraout_d0_03;
            auVar32._8_8_ = extraout_var_03;
            auVar32._0_8_ = extraout_d0_03;
            if (plVar12 != (long *)0x0) {
              auVar32 = auVar1;
              if ((*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) <= *(byte *)(*plVar12 + 300)) &&
                 (auVar32 = auVar2,
                 *(long *)(*(long *)(*plVar12 + 200) +
                           (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8 + -8) ==
                 /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78)) {
                if (plVar14[0x34] != 0) {
                  if (plVar12 != *(long **)(plVar14[0x34] + 0x20)) {
                    if (plVar12 == (long *)0x0) goto code_r0x014be248;
                    lVar21 = plVar12[9];
                    lVar18 = plVar12[0xc];
                    lVar9 = plVar12[0xb];
                    *(long *)((long)pfVar4 + -0xf8) = plVar12[10];
                    *(long *)((long)pfVar4 + -0x100) = lVar21;
                    *(long *)((long)pfVar4 + -0xe8) = lVar18;
                    *(long *)((long)pfVar4 + -0xf0) = lVar9;
                    iVar8 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90((undefined1 *)((long)pfVar4 + -0x100),0);
                    param_2 = (float)lVar9;
                    if (iVar8 != 0) {
                      lVar21 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                                         (plVar14);
                      if (lVar21 == 0) goto code_r0x014be248;
                      uVar17 = *(undefined8 *)(lVar21 + 0xd0);
                      (**(code **)(*plVar14 + 0x338))
                                (plVar14,plVar12,uVar17,0,*(undefined8 *)(*plVar14 + 0x340));
                    }
                  }
                  if ((plVar12[0xe] != 0) && (plVar14[0x45] != 0)) {
                    auVar29 = /*Atlas.Audio.WeaponAudio$$Explode*/ func_0x01530004(plVar14[0x45],*(undefined8 *)(plVar12[0xe] + 0xb8),0);
                    return auVar29;
                  }
                }
                goto code_r0x014be248;
              }
            }
          }
        }
      }
      return auVar32;
    }
    *(undefined4 *)(lVar21 + 0x218) = 0x3e99999a;
  }
  return auVar31;
code_r0x014be490:
  uVar17 = *(undefined8 *)(puVar5 + -0x40);
  puVar6 = puVar5 + -0x40;
  *(undefined8 *)(puVar5 + -0x40) = uVar17;
  *(undefined8 *)(puVar5 + -0x38) = *(undefined8 *)(puVar5 + -0x38);
  *(undefined8 *)(puVar5 + -0x30) = *(undefined8 *)(puVar5 + -0x30);
  *(undefined8 *)(puVar5 + -0x28) = *(undefined8 *)(puVar5 + -0x28);
  puVar24 = puVar5 + -0x30;
  uVar15 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar11,0);
  uVar13 = extraout_d0_07;
  uVar37 = extraout_var_07;
  if ((uVar15 & 1) == 0) {
    lVar21 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar11,0);
    if ((lVar21 == 0) || (*(long *)(lVar21 + 0xc0) == 0)) {
      puVar25 = &Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
      plVar14 = (long *)func_0x00f78af4();
      uVar13 = extraout_d0_09;
      uVar37 = extraout_var_09;
      iVar8 = extraout_w1;
    }
    else {
      uVar13 = extraout_d0_08;
      uVar37 = extraout_var_08;
      if (*(char *)(*(long *)(lVar21 + 0xc0) + 0x50) != '\0') goto code_r0x014ceb18;
      iVar8 = 1;
      uVar16 = 1;
      puVar24 = *(undefined1 **)(puVar5 + -0x30);
      puVar25 = *(undefined **)(puVar5 + -0x28);
      puVar6 = puVar5 + -0x20;
      uVar17 = *(undefined8 *)(puVar5 + -0x40);
      plVar14 = plVar11;
      plVar11 = *(long **)(puVar5 + -0x38);
    }
    *(undefined8 *)(puVar6 + -0x20) = uVar17;
    *(long **)(puVar6 + -0x18) = plVar11;
    *(undefined1 **)(puVar6 + -0x10) = puVar24;
    *(undefined **)(puVar6 + -8) = puVar25;
    if ((*(char *)((long)plVar14 + 300) != '\0') == uVar16) {
      auVar35._8_8_ = uVar37;
      auVar35._0_8_ = uVar13;
      return auVar35;
    }
    if (iVar8 != 0) {
      (**(code **)(*plVar14 + 0x448))(plVar14,*(undefined8 *)(*plVar14 + 0x450));
    }
    *(char *)((long)plVar14 + 300) = (char)uVar16;
    if (((plVar14[9] != 0) && (lVar21 = *(long *)(plVar14[9] + 0x28), lVar21 != 0)) &&
       (lVar21 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar21,0), lVar21 != 0)) {
      *(undefined8 *)(puVar6 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar6 + -0x28) = uVar22;
      *(undefined8 *)(puVar6 + -0x20) = *(undefined8 *)(puVar6 + -0x20);
      *(undefined8 *)(puVar6 + -0x18) = *(undefined8 *)(puVar6 + -0x18);
      *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar6 + -0x10);
      *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
      if (pcRam0000000003ebf4c0 == (code *)0x0) {
        pcRam0000000003ebf4c0 =
             (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar29 = (*pcRam0000000003ebf4c0)(lVar21,uVar16 ^ 1);
      return auVar29;
    }
    auVar29 = func_0x00f78af4();
    return auVar29;
  }
code_r0x014ceb18:
  if ((char)plVar11[0xc] != '\0') {
    auVar34._8_8_ = uVar37;
    auVar34._0_8_ = uVar13;
    return auVar34;
  }
  *(undefined1 *)(plVar11 + 0xc) = 1;
  *(undefined1 *)((long)plVar11 + 0x61) = 1;
  auVar36._8_8_ = uVar37;
  auVar36._0_8_ = uVar13;
  return auVar36;
}



// ============================================================
// RVA: 0x14bdc98 | Atlas.Gameplay.Usables.PlacementHomingProjectile.EarlyUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x014be48c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
Atlas_Gameplay_Usables_PlacementHomingProjectile__EarlyUpdate
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long *param_4,
          undefined8 param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  int extraout_w1;
  long *extraout_x1;
  uint uVar13;
  undefined8 uVar14;
  ulong uVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined8 unaff_x22;
  undefined1 ******ppppppuVar18;
  undefined1 *puVar19;
  undefined *puVar20;
  float fVar21;
  undefined8 extraout_d0;
  undefined8 extraout_d0_07;
  undefined8 extraout_d0_08;
  undefined8 extraout_d0_09;
  undefined1 auVar24 [16];
  undefined8 extraout_var;
  undefined1 auVar25 [16];
  undefined8 extraout_d0_00;
  undefined8 extraout_var_00;
  undefined1 auVar26 [16];
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auVar27 [16];
  undefined8 extraout_d0_01;
  undefined8 extraout_d0_02;
  undefined8 extraout_d0_03;
  undefined8 extraout_d0_04;
  undefined8 extraout_d0_05;
  undefined8 extraout_d0_06;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  undefined8 extraout_var_05;
  undefined8 extraout_var_06;
  undefined1 auVar28 [16];
  undefined8 extraout_var_07;
  undefined8 extraout_var_08;
  undefined1 auVar29 [16];
  undefined8 extraout_var_09;
  undefined8 uVar32;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined1 *****pppppuStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 ****ppppuStack_110;
  undefined *puStack_108;
  float fStack_100;
  undefined1 ***pppuStack_90;
  undefined *puStack_88;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  auVar24 = /*Atlas.Gameplay.Usables.ProjectileUsable$$EarlyUpdate*/ func_0x014ce420(param_4,param_5,0);
  if (param_4[0x19] != 0) {
    if (*(char *)(param_4[0x19] + 0x44) == '\0') {
      iVar6 = /*Atlas.Gameplay.Usables.ProjectileUsable$$GetForceToFloorNetworkFlag*/ func_0x014cf58c(param_4,0);
      auVar24._8_8_ = extraout_var;
      auVar24._0_8_ = extraout_d0;
      if (iVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x014bdcec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar24 = (**(code **)(*param_4 + 0x428))
                            ((int)param_4[0x35],param_4,*(undefined8 *)(*param_4 + 0x430));
        return auVar24;
      }
    }
    return auVar24;
  }
  lVar7 = func_0x00f78af4();
  puStack_28 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__GetDistanceRatioToTarget;
  uVar15 = 0;
  if ((((*(char *)(lVar7 + 0x60) == '\0') && (0.0 < *(float *)(lVar7 + 0x1c0))) &&
      (*(long *)(lVar7 + 0x1a0) != 0)) &&
     (puStack_30 = &stack0xfffffffffffffff0,
     iVar6 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasKartTarget
                       (*(long *)(lVar7 + 0x1a0),0), iVar6 != 0)) {
    lVar8 = *(long *)(lVar7 + 0x1a0);
    if (lVar8 == 0) {
      lVar7 = func_0x00f78af4();
      puStack_58 = &Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__TriggerImpactAnim;
      ppuStack_60 = &puStack_30;
      if ((bRam0000000003eb4b00 & 1) == 0) {
        func_0x00f78a20(0x3d23c70);
        bRam0000000003eb4b00 = 1;
      }
      lVar7 = *(long *)(lVar7 + 0x70);
      if (((*(ushort *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar7 != 0) {
        uVar22 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 0xc);
        if (pcRam0000000003ebe420 == (code *)0x0) {
          pcRam0000000003ebe420 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x0320d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar24 = (*pcRam0000000003ebe420)(lVar7,uVar22,1);
        return auVar24;
      }
      lVar7 = func_0x00f78af4();
      auVar26._8_8_ = extraout_var_00;
      auVar26._0_8_ = extraout_d0_00;
      puStack_88 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__FixedUpdateGameplay;
      pppuStack_90 = &ppuStack_60;
      if ((bRam0000000003eb4af7 & 1) == 0) {
        auVar26 = func_0x00f78a20(0x3d22618);
        bRam0000000003eb4af7 = 1;
      }
      if (*(char *)(lVar7 + 0x18) != '\0') {
        bVar5 = false;
        if (*(char *)(lVar7 + 0x11c) != '\0') {
          bVar5 = *(char *)(lVar7 + 0x1b4) == '\0';
        }
        *(bool *)(lVar7 + 0x11c) = bVar5;
        auVar26 = /*Atlas.Gameplay.Usables.ProjectileUsable$$FixedUpdateGameplay*/ func_0x014cdd74(lVar7,extraout_x1,0);
        if ((*(char *)(lVar7 + 0x125) != '\0') || (*(char *)(lVar7 + 0xf0) != '\0')) {
          if (extraout_x1 != (long *)0x0) {
            fVar21 = *(float *)(lVar7 + 0x218);
            lVar8 = *extraout_x1;
            uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
                  puVar9 = (undefined8 *)(lVar8 + (long)(*piVar16 + 3) * 0x10 + 0x138);
                  goto code_r0x014bdf18;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            puVar9 = (undefined8 *)func_0x00fac1f0(extraout_x1,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,3);
code_r0x014bdf18:
            fVar33 = (float)(*(code *)*puVar9)(extraout_x1,puVar9[1]);
            fVar21 = fVar21 - fVar33;
            *(float *)(lVar7 + 0x218) = fVar21;
            if ((*(long *)(lVar7 + 0xf8) != 0) &&
               (lVar8 = *(long *)(*(long *)(lVar7 + 0xf8) + 0x18), lVar8 != 0)) {
              fVar33 = (_UNK_033f83fc - fVar21) / _UNK_033f83fc;
              fVar21 = _UNK_033f83fc;
              uVar22 = /*UnityEngine.Rigidbody$$get_rotation*/ func_0x032a2fa0(lVar8,0);
              uVar35 = *(undefined4 *)(lVar7 + 0xe0);
              uVar36 = *(undefined4 *)(lVar7 + 0xe4);
              uVar37 = *(undefined4 *)(lVar7 + 0xe8);
              uVar23 = /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
              /*UnityEngine.Quaternion$$LookRotation*/ func_0x03251cec(uVar35,uVar36,uVar37,uVar23,fVar21,param_3,0);
              fStack_100 = fVar33;
              /*UnityEngine.Quaternion$$Slerp*/ func_0x0325174c(uVar22,0);
              if (pcRam0000000003ec2948 == (code *)0x0) {
                pcRam0000000003ec2948 =
                     (code *)func_0x00f789d4("UnityEngine.Rigidbody::MoveRotation_Injected(UnityEngine.Quaternion&)"
                                             ,0);
              }
              auVar24 = (*pcRam0000000003ec2948)(lVar8,&stack0xffffffffffffff50);
              return auVar24;
            }
          }
          auVar24 = func_0x00f78af4();
          lVar7 = auVar24._8_8_;
          plVar11 = auVar24._0_8_;
          puStack_108 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__OnTriggerEnter;
          uVar17 = 0x3eb4000;
          ppppuStack_110 = &pppuStack_90;
          if ((bRam0000000003eb4af8 & 1) == 0) {
            func_0x00f78a20(0x3d534a0);
            func_0x00f78a20(0x3d21fc8);
            func_0x00f78a20(0x3d22c78);
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb4af8 = 1;
          }
          lStack_148 = 0;
          lStack_150 = 0;
          lStack_138 = 0;
          lStack_140 = 0;
          uVar14 = 0;
          auVar27 = Atlas_Gameplay_Usables_CollidableUsable__OnTriggerEnter(plVar11,lVar7);
          if (((char)plVar11[0xc] == '\0') && (*(char *)((long)plVar11 + 300) == '\0')) {
            if (lVar7 == 0) {
code_r0x014be248:
              plVar11 = (long *)func_0x00f78af4();
              puStack_158 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__CreateDeSpawnVfx;
              ppppppuVar18 = &pppppuStack_160;
              pppppuStack_160 = &ppppuStack_110;
              if ((bRam0000000003eb4af9 & 1) == 0) {
                func_0x00f78a20(0x3d6b360);
                bRam0000000003eb4af9 = 1;
              }
              lVar7 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar11,0);
              lVar8 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                                (plVar11);
              if ((lVar8 != 0) && (plVar11[0x20] != 0)) {
                uVar17 = *(undefined8 *)(lVar8 + 0xd8);
                unaff_x22 = *(undefined8 *)(lVar8 + 0xe0);
                uVar22 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(plVar11[0x20],0);
                lVar8 = plVar11[5];
                uVar12 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                                   (plVar11);
                if (lVar7 != 0) {
                  uVar14 = uVar17;
                  lVar7 = /*Atlas.Contexts.GameContextBase$$SpawnAoE*/ func_0x0159a63c(uVar22,param_2,param_3,lVar7,/*STR('CulturePodExplosionVFX')*/ uRam0000000003d6b360,uVar17,
                                          unaff_x22,lVar8,uVar12,plVar11[10],0);
                  lVar8 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                                    (plVar11);
                  if (lVar8 != 0) {
                    uStack_1c8 = *(undefined8 *)(lVar8 + 0xa0);
                    uStack_1d0 = *(undefined8 *)(lVar8 + 0x98);
                    uStack_1c0 = *(undefined4 *)(lVar8 + 0xa8);
                    auVar24 = /*Atlas.Gameplay.Usables.ProjectileUsable$$SetupDespawnVFX*/ func_0x014cf800(plVar11,lVar7,&uStack_1d0,0);
                    return auVar24;
                  }
                }
              }
              puVar20 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__LoseTarget;
              plVar10 = (long *)func_0x00f78af4();
              puVar9 = &uStack_1d0;
              do {
                *(long *)((long)puVar9 + -0x20) = lVar7;
                *(long **)((long)puVar9 + -0x18) = plVar11;
                *(undefined1 *******)((long)puVar9 + -0x10) = ppppppuVar18;
                *(undefined **)((long)puVar9 + -8) = puVar20;
                lVar7 = 0x3eb4000;
                if ((bRam0000000003eb4afa & 1) == 0) {
                  func_0x00f78a20(0x3d3b888);
                  func_0x00f78a20(0x3d3b890);
                  bRam0000000003eb4afa = 1;
                }
                if (plVar10[0x34] != 0) {
                  iVar6 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasKartTarget
                                    (plVar10[0x34],0);
                  auVar3._8_8_ = extraout_var_04;
                  auVar3._0_8_ = extraout_d0_04;
                  if (iVar6 == 0) {
                    return auVar3;
                  }
                  if (((plVar10[0x34] != 0) && (lVar8 = *(long *)(plVar10[0x34] + 0x20), lVar8 != 0)
                      ) && (lVar8 = *(long *)(lVar8 + 0x90), lVar8 != 0)) {
                    iVar6 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_IsLocalPlayer*/ func_0x0159dd28(lVar8,0);
                    auVar28._8_8_ = extraout_var_05;
                    auVar28._0_8_ = extraout_d0_05;
                    if (iVar6 != 0) {
                      if (((plVar10[0x34] == 0) ||
                          (lVar8 = *(long *)(plVar10[0x34] + 0x20), lVar8 == 0)) ||
                         ((lVar8 = *(long *)(lVar8 + 0x90), lVar8 == 0 ||
                          (lVar8 = *(long *)(lVar8 + 200), lVar8 == 0)))) goto code_r0x014be468;
                      uVar14 = uRam0000000003d3b888;
                      iVar6 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(lVar8,plVar10);
                      auVar28._8_8_ = extraout_var_06;
                      auVar28._0_8_ = extraout_d0_06;
                      if (iVar6 != 0) {
                        if (((plVar10[0x34] == 0) ||
                            (lVar8 = *(long *)(plVar10[0x34] + 0x20), lVar8 == 0)) ||
                           ((lVar8 = *(long *)(lVar8 + 0x90), lVar8 == 0 ||
                            (lVar8 = *(long *)(lVar8 + 200), lVar8 == 0)))) goto code_r0x014be468;
                        uVar14 = uRam0000000003d3b890;
                        auVar28 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(lVar8,plVar10);
                      }
                    }
                    if (plVar10[0x34] != 0) {
                      *(undefined8 *)(plVar10[0x34] + 0x20) = 0;
                      return auVar28;
                    }
                  }
                }
code_r0x014be468:
                plVar11 = (long *)func_0x00f78af4();
                *(undefined8 *)((long)puVar9 + -0x40) = 0x3eb4000;
                *(long **)((long)puVar9 + -0x38) = plVar10;
                *(undefined1 **)((long)puVar9 + -0x30) = (undefined1 *)((long)puVar9 + -0x10);
                *(undefined **)((long)puVar9 + -0x28) =
                     &Atlas_Gameplay_Usables_PlacementHomingProjectile__Destroy;
                ppppppuVar18 = (undefined1 ******)((long)puVar9 + -0x30);
                uVar15 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar11,0);
                uVar13 = (uint)uVar14;
                if ((uVar15 & 1) != 0) goto code_r0x014be490;
                puVar20 = &UNK_014be490;
                puVar9 = (undefined8 *)((long)puVar9 + -0x40);
                plVar10 = plVar11;
              } while( true );
            }
            uVar17 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(lVar7,0);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar14 = 0;
            iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar17,0);
            auVar27._8_8_ = extraout_var_01;
            auVar27._0_8_ = extraout_d0_01;
            if (iVar6 != 0) {
              lVar7 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(lVar7,0);
              if (lVar7 == 0) goto code_r0x014be248;
              plVar10 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar7,uRam0000000003d534a0);
              auVar27._8_8_ = extraout_var_02;
              auVar27._0_8_ = extraout_d0_02;
              if (plVar10 != (long *)0x0) {
                lVar7 = *plVar10;
                uVar15 = (ulong)*(ushort *)(lVar7 + 0x12a);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == /*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ lRam0000000003d21fc8) {
                      puVar9 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
                      goto code_r0x014be170;
                    }
                    piVar16 = piVar16 + 4;
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                }
                uVar14 = 0;
                puVar9 = (undefined8 *)func_0x00fac1f0(plVar10);
code_r0x014be170:
                plVar10 = (long *)(*(code *)*puVar9)(plVar10,puVar9[1]);
                auVar2._8_8_ = extraout_var_03;
                auVar2._0_8_ = extraout_d0_03;
                auVar1._8_8_ = extraout_var_03;
                auVar1._0_8_ = extraout_d0_03;
                auVar27._8_8_ = extraout_var_03;
                auVar27._0_8_ = extraout_d0_03;
                if (plVar10 != (long *)0x0) {
                  auVar27 = auVar1;
                  if ((*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) <= *(byte *)(*plVar10 + 300)) &&
                     (auVar27 = auVar2,
                     *(long *)(*(long *)(*plVar10 + 200) +
                               (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8 + -8) ==
                     /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78)) {
                    if (plVar11[0x34] != 0) {
                      if (plVar10 != *(long **)(plVar11[0x34] + 0x20)) {
                        if (plVar10 == (long *)0x0) goto code_r0x014be248;
                        lStack_148 = plVar10[10];
                        lStack_150 = plVar10[9];
                        lStack_138 = plVar10[0xc];
                        lVar7 = plVar10[0xb];
                        lStack_140 = lVar7;
                        iVar6 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&lStack_150,0);
                        param_2 = (undefined4)lVar7;
                        if (iVar6 != 0) {
                          lVar7 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                                            (plVar11);
                          if (lVar7 == 0) goto code_r0x014be248;
                          uVar14 = *(undefined8 *)(lVar7 + 0xd0);
                          (**(code **)(*plVar11 + 0x338))
                                    (plVar11,plVar10,uVar14,0,*(undefined8 *)(*plVar11 + 0x340));
                        }
                      }
                      if ((plVar10[0xe] != 0) && (plVar11[0x45] != 0)) {
                        auVar24 = /*Atlas.Audio.WeaponAudio$$Explode*/ func_0x01530004(plVar11[0x45],*(undefined8 *)(plVar10[0xe] + 0xb8)
                                                  ,0);
                        return auVar24;
                      }
                    }
                    goto code_r0x014be248;
                  }
                }
              }
            }
          }
          return auVar27;
        }
        *(undefined4 *)(lVar7 + 0x218) = 0x3e99999a;
      }
      return auVar26;
    }
    fVar21 = (float)Atlas_Gameplay_Usables_HomingProjectileLogic__DistToTargetSquared
                              (lVar8,*(undefined8 *)(lVar8 + 0x20),0);
    fVar33 = *(float *)(lVar7 + 0x1c0);
    uVar15 = 0x3f800000;
    if (fVar21 < fVar33 * fVar33) {
      fVar34 = *(float *)(lVar7 + 0x1bc);
      uVar15 = 0;
      if (fVar34 * fVar34 < fVar21) {
        uVar15 = (ulong)(uint)((SQRT(fVar21) - fVar34) / (fVar33 - fVar34));
      }
    }
  }
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar15;
  return auVar25;
code_r0x014be490:
  uVar14 = *(undefined8 *)((long)puVar9 + -0x40);
  puVar4 = (undefined1 *)((long)puVar9 + -0x40);
  *(undefined8 *)((long)puVar9 + -0x40) = uVar14;
  *(undefined8 *)((long)puVar9 + -0x38) = *(undefined8 *)((long)puVar9 + -0x38);
  *(undefined8 *)((long)puVar9 + -0x30) = *(undefined8 *)((long)puVar9 + -0x30);
  *(undefined8 *)((long)puVar9 + -0x28) = *(undefined8 *)((long)puVar9 + -0x28);
  puVar19 = (undefined1 *)((long)puVar9 + -0x30);
  uVar15 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar11,0);
  uVar12 = extraout_d0_07;
  uVar32 = extraout_var_07;
  if ((uVar15 & 1) == 0) {
    lVar7 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar11,0);
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0xc0) == 0)) {
      puVar20 = &Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
      plVar10 = (long *)func_0x00f78af4();
      uVar12 = extraout_d0_09;
      uVar32 = extraout_var_09;
      iVar6 = extraout_w1;
    }
    else {
      uVar12 = extraout_d0_08;
      uVar32 = extraout_var_08;
      if (*(char *)(*(long *)(lVar7 + 0xc0) + 0x50) != '\0') goto code_r0x014ceb18;
      iVar6 = 1;
      uVar13 = 1;
      puVar19 = *(undefined1 **)((long)puVar9 + -0x30);
      puVar20 = *(undefined **)((long)puVar9 + -0x28);
      puVar4 = (undefined1 *)((long)puVar9 + -0x20);
      uVar14 = *(undefined8 *)((long)puVar9 + -0x40);
      plVar10 = plVar11;
      plVar11 = *(long **)((long)puVar9 + -0x38);
    }
    *(undefined8 *)(puVar4 + -0x20) = uVar14;
    *(long **)(puVar4 + -0x18) = plVar11;
    *(undefined1 **)(puVar4 + -0x10) = puVar19;
    *(undefined **)(puVar4 + -8) = puVar20;
    if ((*(char *)((long)plVar10 + 300) != '\0') == uVar13) {
      auVar30._8_8_ = uVar32;
      auVar30._0_8_ = uVar12;
      return auVar30;
    }
    if (iVar6 != 0) {
      (**(code **)(*plVar10 + 0x448))(plVar10,*(undefined8 *)(*plVar10 + 0x450));
    }
    *(char *)((long)plVar10 + 300) = (char)uVar13;
    if (((plVar10[9] != 0) && (lVar7 = *(long *)(plVar10[9] + 0x28), lVar7 != 0)) &&
       (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar7,0), lVar7 != 0)) {
      *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar4 + -0x28) = uVar17;
      *(undefined8 *)(puVar4 + -0x20) = *(undefined8 *)(puVar4 + -0x20);
      *(undefined8 *)(puVar4 + -0x18) = *(undefined8 *)(puVar4 + -0x18);
      *(undefined8 *)(puVar4 + -0x10) = *(undefined8 *)(puVar4 + -0x10);
      *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
      if (pcRam0000000003ebf4c0 == (code *)0x0) {
        pcRam0000000003ebf4c0 =
             (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar24 = (*pcRam0000000003ebf4c0)(lVar7,uVar13 ^ 1);
      return auVar24;
    }
    auVar24 = func_0x00f78af4();
    return auVar24;
  }
code_r0x014ceb18:
  if ((char)plVar11[0xc] != '\0') {
    auVar29._8_8_ = uVar32;
    auVar29._0_8_ = uVar12;
    return auVar29;
  }
  *(undefined1 *)(plVar11 + 0xc) = 1;
  *(undefined1 *)((long)plVar11 + 0x61) = 1;
  auVar31._8_8_ = uVar32;
  auVar31._0_8_ = uVar12;
  return auVar31;
}



// ============================================================
// RVA: 0x14bdd00 | Atlas.Gameplay.Usables.PlacementHomingProjectile.GetDistanceRatioToTarget
// ============================================================

/* WARNING: Possible PIC construction at 0x014be48c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
Atlas_Gameplay_Usables_PlacementHomingProjectile__GetDistanceRatioToTarget
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  int extraout_w1;
  long *extraout_x1;
  uint uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined8 unaff_x22;
  undefined1 *****pppppuVar18;
  undefined1 *puVar19;
  undefined *puVar20;
  float fVar21;
  undefined8 extraout_d0;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined8 extraout_var;
  undefined1 auVar25 [16];
  undefined8 extraout_d0_00;
  undefined8 extraout_d0_01;
  undefined8 extraout_d0_02;
  undefined8 extraout_d0_03;
  undefined8 extraout_d0_04;
  undefined8 extraout_d0_05;
  undefined8 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  undefined8 extraout_var_05;
  undefined1 auVar26 [16];
  undefined8 extraout_d0_06;
  undefined8 extraout_d0_07;
  undefined8 extraout_var_06;
  undefined8 extraout_var_07;
  undefined1 auVar27 [16];
  undefined8 extraout_d0_08;
  undefined8 extraout_var_08;
  undefined8 uVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined1 ****ppppuStack_140;
  undefined *puStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined1 ***pppuStack_f0;
  undefined *puStack_e8;
  float fStack_e0;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  uVar15 = 0;
  if ((((*(char *)(param_4 + 0x60) == '\0') && (0.0 < *(float *)(param_4 + 0x1c0))) &&
      (*(long *)(param_4 + 0x1a0) != 0)) &&
     (iVar6 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasKartTarget
                        (*(long *)(param_4 + 0x1a0),0), iVar6 != 0)) {
    lVar7 = *(long *)(param_4 + 0x1a0);
    if (lVar7 == 0) {
      lVar7 = func_0x00f78af4();
      puStack_38 = &Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__TriggerImpactAnim;
      puStack_40 = &stack0xfffffffffffffff0;
      if ((bRam0000000003eb4b00 & 1) == 0) {
        func_0x00f78a20(0x3d23c70);
        bRam0000000003eb4b00 = 1;
      }
      lVar7 = *(long *)(lVar7 + 0x70);
      if (((*(ushort *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar7 != 0) {
        uVar22 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 0xc);
        if (pcRam0000000003ebe420 == (code *)0x0) {
          pcRam0000000003ebe420 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x0320d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar30 = (*pcRam0000000003ebe420)(lVar7,uVar22,1);
        return auVar30;
      }
      lVar7 = func_0x00f78af4();
      auVar30._8_8_ = extraout_var;
      auVar30._0_8_ = extraout_d0;
      puStack_68 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__FixedUpdateGameplay;
      ppuStack_70 = &puStack_40;
      if ((bRam0000000003eb4af7 & 1) == 0) {
        auVar30 = func_0x00f78a20(0x3d22618);
        bRam0000000003eb4af7 = 1;
      }
      if (*(char *)(lVar7 + 0x18) != '\0') {
        bVar5 = false;
        if (*(char *)(lVar7 + 0x11c) != '\0') {
          bVar5 = *(char *)(lVar7 + 0x1b4) == '\0';
        }
        *(bool *)(lVar7 + 0x11c) = bVar5;
        auVar30 = /*Atlas.Gameplay.Usables.ProjectileUsable$$FixedUpdateGameplay*/ func_0x014cdd74(lVar7,extraout_x1,0);
        if ((*(char *)(lVar7 + 0x125) != '\0') || (*(char *)(lVar7 + 0xf0) != '\0')) {
          if (extraout_x1 != (long *)0x0) {
            fVar21 = *(float *)(lVar7 + 0x218);
            lVar14 = *extraout_x1;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
                  puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 3) * 0x10 + 0x138);
                  goto code_r0x014bdf18;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            puVar8 = (undefined8 *)func_0x00fac1f0(extraout_x1,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,3);
code_r0x014bdf18:
            fVar32 = (float)(*(code *)*puVar8)(extraout_x1,puVar8[1]);
            fVar21 = fVar21 - fVar32;
            *(float *)(lVar7 + 0x218) = fVar21;
            if ((*(long *)(lVar7 + 0xf8) != 0) &&
               (lVar14 = *(long *)(*(long *)(lVar7 + 0xf8) + 0x18), lVar14 != 0)) {
              fVar32 = (_UNK_033f83fc - fVar21) / _UNK_033f83fc;
              fVar21 = _UNK_033f83fc;
              uVar22 = /*UnityEngine.Rigidbody$$get_rotation*/ func_0x032a2fa0(lVar14,0);
              uVar34 = *(undefined4 *)(lVar7 + 0xe0);
              uVar35 = *(undefined4 *)(lVar7 + 0xe4);
              uVar36 = *(undefined4 *)(lVar7 + 0xe8);
              uVar23 = /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
              /*UnityEngine.Quaternion$$LookRotation*/ func_0x03251cec(uVar34,uVar35,uVar36,uVar23,fVar21,param_3,0);
              fStack_e0 = fVar32;
              /*UnityEngine.Quaternion$$Slerp*/ func_0x0325174c(uVar22,0);
              if (pcRam0000000003ec2948 == (code *)0x0) {
                pcRam0000000003ec2948 =
                     (code *)func_0x00f789d4("UnityEngine.Rigidbody::MoveRotation_Injected(UnityEngine.Quaternion&)"
                                             ,0);
              }
              auVar30 = (*pcRam0000000003ec2948)(lVar14,&stack0xffffffffffffff70);
              return auVar30;
            }
          }
          auVar30 = func_0x00f78af4();
          lVar7 = auVar30._8_8_;
          plVar10 = auVar30._0_8_;
          puStack_e8 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__OnTriggerEnter;
          uVar17 = 0x3eb4000;
          pppuStack_f0 = &ppuStack_70;
          if ((bRam0000000003eb4af8 & 1) == 0) {
            func_0x00f78a20(0x3d534a0);
            func_0x00f78a20(0x3d21fc8);
            func_0x00f78a20(0x3d22c78);
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb4af8 = 1;
          }
          lStack_128 = 0;
          lStack_130 = 0;
          lStack_118 = 0;
          lStack_120 = 0;
          uVar13 = 0;
          auVar25 = Atlas_Gameplay_Usables_CollidableUsable__OnTriggerEnter(plVar10,lVar7);
          if (((char)plVar10[0xc] == '\0') && (*(char *)((long)plVar10 + 300) == '\0')) {
            if (lVar7 == 0) {
code_r0x014be248:
              plVar10 = (long *)func_0x00f78af4();
              puStack_138 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__CreateDeSpawnVfx;
              pppppuVar18 = &ppppuStack_140;
              ppppuStack_140 = &pppuStack_f0;
              if ((bRam0000000003eb4af9 & 1) == 0) {
                func_0x00f78a20(0x3d6b360);
                bRam0000000003eb4af9 = 1;
              }
              lVar7 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar10,0);
              lVar14 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                                 (plVar10);
              if ((lVar14 != 0) && (plVar10[0x20] != 0)) {
                uVar17 = *(undefined8 *)(lVar14 + 0xd8);
                unaff_x22 = *(undefined8 *)(lVar14 + 0xe0);
                uVar22 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(plVar10[0x20],0);
                lVar14 = plVar10[5];
                uVar11 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                                   (plVar10);
                if (lVar7 != 0) {
                  uVar13 = uVar17;
                  lVar7 = /*Atlas.Contexts.GameContextBase$$SpawnAoE*/ func_0x0159a63c(uVar22,param_2,param_3,lVar7,/*STR('CulturePodExplosionVFX')*/ uRam0000000003d6b360,uVar17,
                                          unaff_x22,lVar14,uVar11,plVar10[10],0);
                  lVar14 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                                     (plVar10);
                  if (lVar14 != 0) {
                    uStack_1a8 = *(undefined8 *)(lVar14 + 0xa0);
                    uStack_1b0 = *(undefined8 *)(lVar14 + 0x98);
                    uStack_1a0 = *(undefined4 *)(lVar14 + 0xa8);
                    auVar30 = /*Atlas.Gameplay.Usables.ProjectileUsable$$SetupDespawnVFX*/ func_0x014cf800(plVar10,lVar7,&uStack_1b0,0);
                    return auVar30;
                  }
                }
              }
              puVar20 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__LoseTarget;
              plVar9 = (long *)func_0x00f78af4();
              puVar8 = &uStack_1b0;
              do {
                *(long *)((long)puVar8 + -0x20) = lVar7;
                *(long **)((long)puVar8 + -0x18) = plVar10;
                *(undefined1 ******)((long)puVar8 + -0x10) = pppppuVar18;
                *(undefined **)((long)puVar8 + -8) = puVar20;
                lVar7 = 0x3eb4000;
                if ((bRam0000000003eb4afa & 1) == 0) {
                  func_0x00f78a20(0x3d3b888);
                  func_0x00f78a20(0x3d3b890);
                  bRam0000000003eb4afa = 1;
                }
                if (plVar9[0x34] != 0) {
                  iVar6 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasKartTarget
                                    (plVar9[0x34],0);
                  auVar3._8_8_ = extraout_var_03;
                  auVar3._0_8_ = extraout_d0_03;
                  if (iVar6 == 0) {
                    return auVar3;
                  }
                  if (((plVar9[0x34] != 0) && (lVar14 = *(long *)(plVar9[0x34] + 0x20), lVar14 != 0)
                      ) && (lVar14 = *(long *)(lVar14 + 0x90), lVar14 != 0)) {
                    iVar6 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_IsLocalPlayer*/ func_0x0159dd28(lVar14,0);
                    auVar26._8_8_ = extraout_var_04;
                    auVar26._0_8_ = extraout_d0_04;
                    if (iVar6 != 0) {
                      if (((plVar9[0x34] == 0) ||
                          (lVar14 = *(long *)(plVar9[0x34] + 0x20), lVar14 == 0)) ||
                         ((lVar14 = *(long *)(lVar14 + 0x90), lVar14 == 0 ||
                          (lVar14 = *(long *)(lVar14 + 200), lVar14 == 0)))) goto code_r0x014be468;
                      uVar13 = uRam0000000003d3b888;
                      iVar6 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(lVar14,plVar9);
                      auVar26._8_8_ = extraout_var_05;
                      auVar26._0_8_ = extraout_d0_05;
                      if (iVar6 != 0) {
                        if (((plVar9[0x34] == 0) ||
                            (lVar14 = *(long *)(plVar9[0x34] + 0x20), lVar14 == 0)) ||
                           ((lVar14 = *(long *)(lVar14 + 0x90), lVar14 == 0 ||
                            (lVar14 = *(long *)(lVar14 + 200), lVar14 == 0))))
                        goto code_r0x014be468;
                        uVar13 = uRam0000000003d3b890;
                        auVar26 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(lVar14,plVar9);
                      }
                    }
                    if (plVar9[0x34] != 0) {
                      *(undefined8 *)(plVar9[0x34] + 0x20) = 0;
                      return auVar26;
                    }
                  }
                }
code_r0x014be468:
                plVar10 = (long *)func_0x00f78af4();
                *(undefined8 *)((long)puVar8 + -0x40) = 0x3eb4000;
                *(long **)((long)puVar8 + -0x38) = plVar9;
                *(undefined1 **)((long)puVar8 + -0x30) = (undefined1 *)((long)puVar8 + -0x10);
                *(undefined **)((long)puVar8 + -0x28) =
                     &Atlas_Gameplay_Usables_PlacementHomingProjectile__Destroy;
                pppppuVar18 = (undefined1 *****)((long)puVar8 + -0x30);
                uVar15 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar10,0);
                uVar12 = (uint)uVar13;
                if ((uVar15 & 1) != 0) goto code_r0x014be490;
                puVar20 = &UNK_014be490;
                puVar8 = (undefined8 *)((long)puVar8 + -0x40);
                plVar9 = plVar10;
              } while( true );
            }
            uVar17 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(lVar7,0);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar13 = 0;
            iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar17,0);
            auVar25._8_8_ = extraout_var_00;
            auVar25._0_8_ = extraout_d0_00;
            if (iVar6 != 0) {
              lVar7 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(lVar7,0);
              if (lVar7 == 0) goto code_r0x014be248;
              plVar9 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar7,uRam0000000003d534a0);
              auVar25._8_8_ = extraout_var_01;
              auVar25._0_8_ = extraout_d0_01;
              if (plVar9 != (long *)0x0) {
                lVar7 = *plVar9;
                uVar15 = (ulong)*(ushort *)(lVar7 + 0x12a);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == /*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ lRam0000000003d21fc8) {
                      puVar8 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
                      goto code_r0x014be170;
                    }
                    piVar16 = piVar16 + 4;
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                }
                uVar13 = 0;
                puVar8 = (undefined8 *)func_0x00fac1f0(plVar9);
code_r0x014be170:
                plVar9 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
                auVar2._8_8_ = extraout_var_02;
                auVar2._0_8_ = extraout_d0_02;
                auVar1._8_8_ = extraout_var_02;
                auVar1._0_8_ = extraout_d0_02;
                auVar25._8_8_ = extraout_var_02;
                auVar25._0_8_ = extraout_d0_02;
                if (plVar9 != (long *)0x0) {
                  auVar25 = auVar1;
                  if ((*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) <= *(byte *)(*plVar9 + 300)) &&
                     (auVar25 = auVar2,
                     *(long *)(*(long *)(*plVar9 + 200) +
                               (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8 + -8) ==
                     /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78)) {
                    if (plVar10[0x34] != 0) {
                      if (plVar9 != *(long **)(plVar10[0x34] + 0x20)) {
                        if (plVar9 == (long *)0x0) goto code_r0x014be248;
                        lStack_128 = plVar9[10];
                        lStack_130 = plVar9[9];
                        lStack_118 = plVar9[0xc];
                        lVar7 = plVar9[0xb];
                        lStack_120 = lVar7;
                        iVar6 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&lStack_130,0);
                        param_2 = (undefined4)lVar7;
                        if (iVar6 != 0) {
                          lVar7 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                                            (plVar10);
                          if (lVar7 == 0) goto code_r0x014be248;
                          uVar13 = *(undefined8 *)(lVar7 + 0xd0);
                          (**(code **)(*plVar10 + 0x338))
                                    (plVar10,plVar9,uVar13,0,*(undefined8 *)(*plVar10 + 0x340));
                        }
                      }
                      if ((plVar9[0xe] != 0) && (plVar10[0x45] != 0)) {
                        auVar30 = /*Atlas.Audio.WeaponAudio$$Explode*/ func_0x01530004(plVar10[0x45],*(undefined8 *)(plVar9[0xe] + 0xb8),
                                                  0);
                        return auVar30;
                      }
                    }
                    goto code_r0x014be248;
                  }
                }
              }
            }
          }
          return auVar25;
        }
        *(undefined4 *)(lVar7 + 0x218) = 0x3e99999a;
      }
      return auVar30;
    }
    fVar21 = (float)Atlas_Gameplay_Usables_HomingProjectileLogic__DistToTargetSquared
                              (lVar7,*(undefined8 *)(lVar7 + 0x20),0);
    fVar32 = *(float *)(param_4 + 0x1c0);
    uVar15 = 0x3f800000;
    if (fVar21 < fVar32 * fVar32) {
      fVar33 = *(float *)(param_4 + 0x1bc);
      uVar15 = 0;
      if (fVar33 * fVar33 < fVar21) {
        uVar15 = (ulong)(uint)((SQRT(fVar21) - fVar33) / (fVar32 - fVar33));
      }
    }
  }
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar15;
  return auVar24;
code_r0x014be490:
  uVar13 = *(undefined8 *)((long)puVar8 + -0x40);
  puVar4 = (undefined1 *)((long)puVar8 + -0x40);
  *(undefined8 *)((long)puVar8 + -0x40) = uVar13;
  *(undefined8 *)((long)puVar8 + -0x38) = *(undefined8 *)((long)puVar8 + -0x38);
  *(undefined8 *)((long)puVar8 + -0x30) = *(undefined8 *)((long)puVar8 + -0x30);
  *(undefined8 *)((long)puVar8 + -0x28) = *(undefined8 *)((long)puVar8 + -0x28);
  puVar19 = (undefined1 *)((long)puVar8 + -0x30);
  uVar15 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar10,0);
  uVar11 = extraout_d0_06;
  uVar31 = extraout_var_06;
  if ((uVar15 & 1) == 0) {
    lVar7 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar10,0);
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0xc0) == 0)) {
      puVar20 = &Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
      plVar9 = (long *)func_0x00f78af4();
      uVar11 = extraout_d0_08;
      uVar31 = extraout_var_08;
      iVar6 = extraout_w1;
    }
    else {
      uVar11 = extraout_d0_07;
      uVar31 = extraout_var_07;
      if (*(char *)(*(long *)(lVar7 + 0xc0) + 0x50) != '\0') goto code_r0x014ceb18;
      iVar6 = 1;
      uVar12 = 1;
      puVar19 = *(undefined1 **)((long)puVar8 + -0x30);
      puVar20 = *(undefined **)((long)puVar8 + -0x28);
      puVar4 = (undefined1 *)((long)puVar8 + -0x20);
      uVar13 = *(undefined8 *)((long)puVar8 + -0x40);
      plVar9 = plVar10;
      plVar10 = *(long **)((long)puVar8 + -0x38);
    }
    *(undefined8 *)(puVar4 + -0x20) = uVar13;
    *(long **)(puVar4 + -0x18) = plVar10;
    *(undefined1 **)(puVar4 + -0x10) = puVar19;
    *(undefined **)(puVar4 + -8) = puVar20;
    if ((*(char *)((long)plVar9 + 300) != '\0') == uVar12) {
      auVar28._8_8_ = uVar31;
      auVar28._0_8_ = uVar11;
      return auVar28;
    }
    if (iVar6 != 0) {
      (**(code **)(*plVar9 + 0x448))(plVar9,*(undefined8 *)(*plVar9 + 0x450));
    }
    *(char *)((long)plVar9 + 300) = (char)uVar12;
    if (((plVar9[9] != 0) && (lVar7 = *(long *)(plVar9[9] + 0x28), lVar7 != 0)) &&
       (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar7,0), lVar7 != 0)) {
      *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar4 + -0x28) = uVar17;
      *(undefined8 *)(puVar4 + -0x20) = *(undefined8 *)(puVar4 + -0x20);
      *(undefined8 *)(puVar4 + -0x18) = *(undefined8 *)(puVar4 + -0x18);
      *(undefined8 *)(puVar4 + -0x10) = *(undefined8 *)(puVar4 + -0x10);
      *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
      if (pcRam0000000003ebf4c0 == (code *)0x0) {
        pcRam0000000003ebf4c0 =
             (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar30 = (*pcRam0000000003ebf4c0)(lVar7,uVar12 ^ 1);
      return auVar30;
    }
    auVar30 = func_0x00f78af4();
    return auVar30;
  }
code_r0x014ceb18:
  if ((char)plVar10[0xc] != '\0') {
    auVar27._8_8_ = uVar31;
    auVar27._0_8_ = uVar11;
    return auVar27;
  }
  *(undefined1 *)(plVar10 + 0xc) = 1;
  *(undefined1 *)((long)plVar10 + 0x61) = 1;
  auVar29._8_8_ = uVar31;
  auVar29._0_8_ = uVar11;
  return auVar29;
}



// ============================================================
// RVA: 0x14bde2c | Atlas.Gameplay.Usables.PlacementHomingProjectile.FixedUpdateGameplay
// ============================================================

/* WARNING: Possible PIC construction at 0x014be48c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Usables_PlacementHomingProjectile__FixedUpdateGameplay
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               long *param_5)

{
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 unaff_x22;
  undefined8 uVar16;
  undefined1 ***pppuVar17;
  undefined1 *puVar18;
  undefined *puVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined1 **ppuStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  float fStack_80;
  
  if ((bRam0000000003eb4af7 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4af7 = 1;
  }
  if (*(char *)(param_4 + 0x18) != '\0') {
    bVar2 = false;
    if (*(char *)(param_4 + 0x11c) != '\0') {
      bVar2 = *(char *)(param_4 + 0x1b4) == '\0';
    }
    *(bool *)(param_4 + 0x11c) = bVar2;
    /*Atlas.Gameplay.Usables.ProjectileUsable$$FixedUpdateGameplay*/ func_0x014cdd74(param_4,param_5,0);
    if ((*(char *)(param_4 + 0x125) != '\0') || (*(char *)(param_4 + 0xf0) != '\0')) {
      if (param_5 != (long *)0x0) {
        fVar23 = *(float *)(param_4 + 0x218);
        lVar12 = *param_5;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
              puVar4 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
              goto LAB_014bdf18;
            }
            piVar14 = piVar14 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(param_5,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,3);
LAB_014bdf18:
        fVar20 = (float)(*(code *)*puVar4)(param_5,puVar4[1]);
        fVar23 = fVar23 - fVar20;
        *(float *)(param_4 + 0x218) = fVar23;
        if ((*(long *)(param_4 + 0xf8) != 0) &&
           (lVar12 = *(long *)(*(long *)(param_4 + 0xf8) + 0x18), lVar12 != 0)) {
          fVar20 = (_UNK_033f83fc - fVar23) / _UNK_033f83fc;
          fVar23 = _UNK_033f83fc;
          uVar21 = /*UnityEngine.Rigidbody$$get_rotation*/ func_0x032a2fa0(lVar12,0);
          uVar24 = *(undefined4 *)(param_4 + 0xe0);
          uVar25 = *(undefined4 *)(param_4 + 0xe4);
          uVar26 = *(undefined4 *)(param_4 + 0xe8);
          uVar22 = /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
          /*UnityEngine.Quaternion$$LookRotation*/ func_0x03251cec(uVar24,uVar25,uVar26,uVar22,fVar23,param_3,0);
          fStack_80 = fVar20;
          /*UnityEngine.Quaternion$$Slerp*/ func_0x0325174c(uVar21,0);
          if (pcRam0000000003ec2948 == (code *)0x0) {
            pcRam0000000003ec2948 =
                 (code *)func_0x00f789d4("UnityEngine.Rigidbody::MoveRotation_Injected(UnityEngine.Quaternion&)"
                                         ,0);
          }
          (*pcRam0000000003ec2948)(lVar12,&stack0xffffffffffffffd0);
          return;
        }
      }
      auVar27 = func_0x00f78af4();
      lVar12 = auVar27._8_8_;
      plVar9 = auVar27._0_8_;
      puStack_88 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__OnTriggerEnter;
      uVar15 = 0x3eb4000;
      puStack_90 = &stack0xfffffffffffffff0;
      if ((bRam0000000003eb4af8 & 1) == 0) {
        func_0x00f78a20(0x3d534a0);
        func_0x00f78a20(0x3d21fc8);
        func_0x00f78a20(0x3d22c78);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4af8 = 1;
      }
      lStack_c8 = 0;
      lStack_d0 = 0;
      lStack_b8 = 0;
      lStack_c0 = 0;
      uVar11 = 0;
      Atlas_Gameplay_Usables_CollidableUsable__OnTriggerEnter(plVar9,lVar12);
      if (((char)plVar9[0xc] == '\0') && (*(char *)((long)plVar9 + 300) == '\0')) {
        if (lVar12 == 0) {
code_r0x014be248:
          lVar12 = func_0x00f78af4();
          puStack_d8 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__CreateDeSpawnVfx;
          pppuVar17 = &ppuStack_e0;
          ppuStack_e0 = &puStack_90;
          if ((bRam0000000003eb4af9 & 1) == 0) {
            func_0x00f78a20(0x3d6b360);
            bRam0000000003eb4af9 = 1;
          }
          lVar6 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(lVar12,0);
          lVar7 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                            (lVar12);
          if ((lVar7 != 0) && (*(long *)(lVar12 + 0x100) != 0)) {
            uVar15 = *(undefined8 *)(lVar7 + 0xd8);
            unaff_x22 = *(undefined8 *)(lVar7 + 0xe0);
            uVar21 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar12 + 0x100),0);
            uVar16 = *(undefined8 *)(lVar12 + 0x28);
            uVar8 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                              (lVar12);
            if (lVar6 != 0) {
              uVar11 = uVar15;
              lVar6 = /*Atlas.Contexts.GameContextBase$$SpawnAoE*/ func_0x0159a63c(uVar21,param_2,param_3,lVar6,/*STR('CulturePodExplosionVFX')*/ uRam0000000003d6b360,uVar15,
                                      unaff_x22,uVar16,uVar8,*(undefined8 *)(lVar12 + 0x50),0);
              lVar7 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                                (lVar12);
              if (lVar7 != 0) {
                uStack_148 = *(undefined8 *)(lVar7 + 0xa0);
                uStack_150 = *(undefined8 *)(lVar7 + 0x98);
                uStack_140 = *(undefined4 *)(lVar7 + 0xa8);
                /*Atlas.Gameplay.Usables.ProjectileUsable$$SetupDespawnVFX*/ func_0x014cf800(lVar12,lVar6,&uStack_150,0);
                return;
              }
            }
          }
          puVar19 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__LoseTarget;
          lVar7 = func_0x00f78af4();
          puVar4 = &uStack_150;
          do {
            *(long *)((long)puVar4 + -0x20) = lVar6;
            *(long *)((long)puVar4 + -0x18) = lVar12;
            *(undefined1 ****)((long)puVar4 + -0x10) = pppuVar17;
            *(undefined **)((long)puVar4 + -8) = puVar19;
            lVar6 = 0x3eb4000;
            if ((bRam0000000003eb4afa & 1) == 0) {
              func_0x00f78a20(0x3d3b888);
              func_0x00f78a20(0x3d3b890);
              bRam0000000003eb4afa = 1;
            }
            if (*(long *)(lVar7 + 0x1a0) != 0) {
              iVar3 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasKartTarget
                                (*(long *)(lVar7 + 0x1a0),0);
              if (iVar3 == 0) {
                return;
              }
              if (((*(long *)(lVar7 + 0x1a0) != 0) &&
                  (lVar12 = *(long *)(*(long *)(lVar7 + 0x1a0) + 0x20), lVar12 != 0)) &&
                 (lVar12 = *(long *)(lVar12 + 0x90), lVar12 != 0)) {
                iVar3 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_IsLocalPlayer*/ func_0x0159dd28(lVar12,0);
                if (iVar3 != 0) {
                  if (((*(long *)(lVar7 + 0x1a0) == 0) ||
                      (lVar12 = *(long *)(*(long *)(lVar7 + 0x1a0) + 0x20), lVar12 == 0)) ||
                     ((lVar12 = *(long *)(lVar12 + 0x90), lVar12 == 0 ||
                      (lVar12 = *(long *)(lVar12 + 200), lVar12 == 0)))) goto code_r0x014be468;
                  uVar11 = uRam0000000003d3b888;
                  iVar3 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(lVar12,lVar7);
                  if (iVar3 != 0) {
                    if (((*(long *)(lVar7 + 0x1a0) == 0) ||
                        (lVar12 = *(long *)(*(long *)(lVar7 + 0x1a0) + 0x20), lVar12 == 0)) ||
                       ((lVar12 = *(long *)(lVar12 + 0x90), lVar12 == 0 ||
                        (lVar12 = *(long *)(lVar12 + 200), lVar12 == 0)))) goto code_r0x014be468;
                    uVar11 = uRam0000000003d3b890;
                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(lVar12,lVar7);
                  }
                }
                if (*(long *)(lVar7 + 0x1a0) != 0) {
                  *(undefined8 *)(*(long *)(lVar7 + 0x1a0) + 0x20) = 0;
                  return;
                }
              }
            }
code_r0x014be468:
            lVar12 = func_0x00f78af4();
            *(undefined8 *)((long)puVar4 + -0x40) = 0x3eb4000;
            *(long *)((long)puVar4 + -0x38) = lVar7;
            *(undefined1 **)((long)puVar4 + -0x30) = (undefined1 *)((long)puVar4 + -0x10);
            *(undefined **)((long)puVar4 + -0x28) =
                 &Atlas_Gameplay_Usables_PlacementHomingProjectile__Destroy;
            pppuVar17 = (undefined1 ***)((long)puVar4 + -0x30);
            uVar13 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(lVar12,0);
            uVar10 = (uint)uVar11;
            if ((uVar13 & 1) != 0) goto code_r0x014be490;
            puVar19 = &UNK_014be490;
            puVar4 = (undefined8 *)((long)puVar4 + -0x40);
            lVar7 = lVar12;
          } while( true );
        }
        uVar15 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(lVar12,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar11 = 0;
        iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar15,0);
        if (iVar3 != 0) {
          lVar12 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(lVar12,0);
          if (lVar12 == 0) goto code_r0x014be248;
          plVar5 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar12,uRam0000000003d534a0);
          if (plVar5 != (long *)0x0) {
            lVar12 = *plVar5;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == /*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ lRam0000000003d21fc8) {
                  puVar4 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                  goto code_r0x014be170;
                }
                piVar14 = piVar14 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            uVar11 = 0;
            puVar4 = (undefined8 *)func_0x00fac1f0(plVar5);
code_r0x014be170:
            plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
            if (plVar5 != (long *)0x0) {
              if ((*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) <= *(byte *)(*plVar5 + 300)) &&
                 (*(long *)(*(long *)(*plVar5 + 200) +
                            (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8 + -8) ==
                  /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78)) {
                if (plVar9[0x34] != 0) {
                  if (plVar5 != *(long **)(plVar9[0x34] + 0x20)) {
                    if (plVar5 == (long *)0x0) goto code_r0x014be248;
                    lStack_c8 = plVar5[10];
                    lStack_d0 = plVar5[9];
                    lStack_b8 = plVar5[0xc];
                    lVar12 = plVar5[0xb];
                    lStack_c0 = lVar12;
                    iVar3 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&lStack_d0,0);
                    param_2 = (undefined4)lVar12;
                    if (iVar3 != 0) {
                      lVar12 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                                         (plVar9);
                      if (lVar12 == 0) goto code_r0x014be248;
                      uVar11 = *(undefined8 *)(lVar12 + 0xd0);
                      (**(code **)(*plVar9 + 0x338))
                                (plVar9,plVar5,uVar11,0,*(undefined8 *)(*plVar9 + 0x340));
                    }
                  }
                  if ((plVar5[0xe] != 0) && (plVar9[0x45] != 0)) {
                    /*Atlas.Audio.WeaponAudio$$Explode*/ func_0x01530004(plVar9[0x45],*(undefined8 *)(plVar5[0xe] + 0xb8),0);
                    return;
                  }
                }
                goto code_r0x014be248;
              }
            }
          }
        }
      }
      return;
    }
    *(undefined4 *)(param_4 + 0x218) = 0x3e99999a;
  }
  return;
code_r0x014be490:
  uVar11 = *(undefined8 *)((long)puVar4 + -0x40);
  puVar1 = (undefined1 *)((long)puVar4 + -0x40);
  *(undefined8 *)((long)puVar4 + -0x40) = uVar11;
  *(undefined8 *)((long)puVar4 + -0x38) = *(undefined8 *)((long)puVar4 + -0x38);
  *(undefined8 *)((long)puVar4 + -0x30) = *(undefined8 *)((long)puVar4 + -0x30);
  *(undefined8 *)((long)puVar4 + -0x28) = *(undefined8 *)((long)puVar4 + -0x28);
  puVar18 = (undefined1 *)((long)puVar4 + -0x30);
  uVar13 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(lVar12,0);
  if ((uVar13 & 1) != 0) {
code_r0x014ceb18:
    if (*(char *)(lVar12 + 0x60) == '\0') {
      *(undefined1 *)(lVar12 + 0x60) = 1;
      *(undefined1 *)(lVar12 + 0x61) = 1;
      return;
    }
    return;
  }
  lVar6 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(lVar12,0);
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0xc0) == 0)) {
    puVar19 = &Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
    auVar28 = func_0x00f78af4();
  }
  else {
    if (*(char *)(*(long *)(lVar6 + 0xc0) + 0x50) != '\0') goto code_r0x014ceb18;
    auVar28._8_4_ = 1;
    auVar28._0_8_ = lVar12;
    uVar10 = 1;
    puVar18 = *(undefined1 **)((long)puVar4 + -0x30);
    puVar19 = *(undefined **)((long)puVar4 + -0x28);
    puVar1 = (undefined1 *)((long)puVar4 + -0x20);
    uVar11 = *(undefined8 *)((long)puVar4 + -0x40);
    lVar12 = *(long *)((long)puVar4 + -0x38);
  }
  plVar9 = auVar28._0_8_;
  *(undefined8 *)(puVar1 + -0x20) = uVar11;
  *(long *)(puVar1 + -0x18) = lVar12;
  *(undefined1 **)(puVar1 + -0x10) = puVar18;
  *(undefined **)(puVar1 + -8) = puVar19;
  if ((*(char *)((long)plVar9 + 300) != '\0') == uVar10) {
    return;
  }
  if (auVar28._8_4_ != 0) {
    (**(code **)(*plVar9 + 0x448))(plVar9,*(undefined8 *)(*plVar9 + 0x450));
  }
  *(char *)((long)plVar9 + 300) = (char)uVar10;
  if (((plVar9[9] != 0) && (lVar12 = *(long *)(plVar9[9] + 0x28), lVar12 != 0)) &&
     (lVar12 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar12,0), lVar12 != 0)) {
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = uVar15;
    *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
    *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
    *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
    *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf4c0)(lVar12,uVar10 ^ 1);
    return;
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14be024 | Atlas.Gameplay.Usables.PlacementHomingProjectile.OnTriggerEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x014be48c: Changing call to branch */

void Atlas_Gameplay_Usables_PlacementHomingProjectile__OnTriggerEnter
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long *param_4,
               long param_5)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 unaff_x22;
  undefined8 uVar14;
  undefined1 **ppuVar15;
  undefined1 *puVar16;
  undefined *puVar17;
  undefined4 uVar18;
  undefined1 auVar19 [12];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined1 *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  uVar13 = 0x3eb4000;
  if ((bRam0000000003eb4af8 & 1) == 0) {
    func_0x00f78a20(0x3d534a0);
    func_0x00f78a20(0x3d21fc8);
    func_0x00f78a20(0x3d22c78);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4af8 = 1;
  }
  lStack_48 = 0;
  lStack_50 = 0;
  lStack_38 = 0;
  lStack_40 = 0;
  uVar10 = 0;
  Atlas_Gameplay_Usables_CollidableUsable__OnTriggerEnter(param_4,param_5);
  if (((char)param_4[0xc] == '\0') && (*(char *)((long)param_4 + 300) == '\0')) {
    if (param_5 == 0) {
LAB_014be248:
      lVar3 = func_0x00f78af4();
      puStack_58 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__CreateDeSpawnVfx;
      ppuVar15 = &puStack_60;
      puStack_60 = &stack0xfffffffffffffff0;
      if ((bRam0000000003eb4af9 & 1) == 0) {
        func_0x00f78a20(0x3d6b360);
        bRam0000000003eb4af9 = 1;
      }
      lVar6 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(lVar3,0);
      lVar7 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                        (lVar3);
      if ((lVar7 != 0) && (*(long *)(lVar3 + 0x100) != 0)) {
        uVar13 = *(undefined8 *)(lVar7 + 0xd8);
        unaff_x22 = *(undefined8 *)(lVar7 + 0xe0);
        uVar18 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar3 + 0x100),0);
        uVar14 = *(undefined8 *)(lVar3 + 0x28);
        uVar8 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                          (lVar3);
        if (lVar6 != 0) {
          uVar10 = uVar13;
          lVar6 = /*Atlas.Contexts.GameContextBase$$SpawnAoE*/ func_0x0159a63c(uVar18,param_2,param_3,lVar6,/*STR('CulturePodExplosionVFX')*/ uRam0000000003d6b360,uVar13,unaff_x22
                                  ,uVar14,uVar8,*(undefined8 *)(lVar3 + 0x50),0);
          lVar7 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                            (lVar3);
          if (lVar7 != 0) {
            uStack_c8 = *(undefined8 *)(lVar7 + 0xa0);
            uStack_d0 = *(undefined8 *)(lVar7 + 0x98);
            uStack_c0 = *(undefined4 *)(lVar7 + 0xa8);
            /*Atlas.Gameplay.Usables.ProjectileUsable$$SetupDespawnVFX*/ func_0x014cf800(lVar3,lVar6,&uStack_d0,0);
            return;
          }
        }
      }
      puVar17 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__LoseTarget;
      lVar7 = func_0x00f78af4();
      puVar5 = &uStack_d0;
      do {
        *(long *)((long)puVar5 + -0x20) = lVar6;
        *(long *)((long)puVar5 + -0x18) = lVar3;
        *(undefined1 ***)((long)puVar5 + -0x10) = ppuVar15;
        *(undefined **)((long)puVar5 + -8) = puVar17;
        lVar6 = 0x3eb4000;
        if ((bRam0000000003eb4afa & 1) == 0) {
          func_0x00f78a20(0x3d3b888);
          func_0x00f78a20(0x3d3b890);
          bRam0000000003eb4afa = 1;
        }
        if (*(long *)(lVar7 + 0x1a0) != 0) {
          iVar2 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasKartTarget
                            (*(long *)(lVar7 + 0x1a0),0);
          if (iVar2 == 0) {
            return;
          }
          if (((*(long *)(lVar7 + 0x1a0) != 0) &&
              (lVar3 = *(long *)(*(long *)(lVar7 + 0x1a0) + 0x20), lVar3 != 0)) &&
             (lVar3 = *(long *)(lVar3 + 0x90), lVar3 != 0)) {
            iVar2 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_IsLocalPlayer*/ func_0x0159dd28(lVar3,0);
            if (iVar2 != 0) {
              if (((*(long *)(lVar7 + 0x1a0) == 0) ||
                  (lVar3 = *(long *)(*(long *)(lVar7 + 0x1a0) + 0x20), lVar3 == 0)) ||
                 ((lVar3 = *(long *)(lVar3 + 0x90), lVar3 == 0 ||
                  (lVar3 = *(long *)(lVar3 + 200), lVar3 == 0)))) goto code_r0x014be468;
              uVar10 = uRam0000000003d3b888;
              iVar2 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(lVar3,lVar7);
              if (iVar2 != 0) {
                if (((*(long *)(lVar7 + 0x1a0) == 0) ||
                    (lVar3 = *(long *)(*(long *)(lVar7 + 0x1a0) + 0x20), lVar3 == 0)) ||
                   ((lVar3 = *(long *)(lVar3 + 0x90), lVar3 == 0 ||
                    (lVar3 = *(long *)(lVar3 + 200), lVar3 == 0)))) goto code_r0x014be468;
                uVar10 = uRam0000000003d3b890;
                /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(lVar3,lVar7);
              }
            }
            if (*(long *)(lVar7 + 0x1a0) != 0) {
              *(undefined8 *)(*(long *)(lVar7 + 0x1a0) + 0x20) = 0;
              return;
            }
          }
        }
code_r0x014be468:
        lVar3 = func_0x00f78af4();
        *(undefined8 *)((long)puVar5 + -0x40) = 0x3eb4000;
        *(long *)((long)puVar5 + -0x38) = lVar7;
        *(undefined1 **)((long)puVar5 + -0x30) = (undefined1 *)((long)puVar5 + -0x10);
        *(undefined **)((long)puVar5 + -0x28) =
             &Atlas_Gameplay_Usables_PlacementHomingProjectile__Destroy;
        ppuVar15 = (undefined1 **)((long)puVar5 + -0x30);
        uVar11 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(lVar3,0);
        uVar9 = (uint)uVar10;
        if ((uVar11 & 1) != 0) goto code_r0x014be490;
        puVar17 = &UNK_014be490;
        puVar5 = (undefined8 *)((long)puVar5 + -0x40);
        lVar7 = lVar3;
      } while( true );
    }
    uVar13 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(param_5,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar10 = 0;
    iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar13,0);
    if (iVar2 != 0) {
      lVar3 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(param_5,0);
      if (lVar3 == 0) goto LAB_014be248;
      plVar4 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar3,uRam0000000003d534a0);
      if (plVar4 != (long *)0x0) {
        lVar3 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar3 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == /*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ lRam0000000003d21fc8) {
              puVar5 = (undefined8 *)(lVar3 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_014be170;
            }
            piVar12 = piVar12 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        uVar10 = 0;
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar4);
LAB_014be170:
        plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (plVar4 != (long *)0x0) {
          if ((*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) <= *(byte *)(*plVar4 + 300)) &&
             (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8
                       + -8) == /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78)) {
            if (param_4[0x34] != 0) {
              if (plVar4 != *(long **)(param_4[0x34] + 0x20)) {
                if (plVar4 == (long *)0x0) goto LAB_014be248;
                lStack_48 = plVar4[10];
                lStack_50 = plVar4[9];
                lStack_38 = plVar4[0xc];
                lVar3 = plVar4[0xb];
                lStack_40 = lVar3;
                iVar2 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&lStack_50,0);
                param_2 = (undefined4)lVar3;
                if (iVar2 != 0) {
                  lVar3 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                                    (param_4);
                  if (lVar3 == 0) goto LAB_014be248;
                  uVar10 = *(undefined8 *)(lVar3 + 0xd0);
                  (**(code **)(*param_4 + 0x338))
                            (param_4,plVar4,uVar10,0,*(undefined8 *)(*param_4 + 0x340));
                }
              }
              if ((plVar4[0xe] != 0) && (param_4[0x45] != 0)) {
                /*Atlas.Audio.WeaponAudio$$Explode*/ func_0x01530004(param_4[0x45],*(undefined8 *)(plVar4[0xe] + 0xb8),0);
                return;
              }
            }
            goto LAB_014be248;
          }
        }
      }
    }
  }
  return;
code_r0x014be490:
  uVar10 = *(undefined8 *)((long)puVar5 + -0x40);
  puVar1 = (undefined1 *)((long)puVar5 + -0x40);
  *(undefined8 *)((long)puVar5 + -0x40) = uVar10;
  *(undefined8 *)((long)puVar5 + -0x38) = *(undefined8 *)((long)puVar5 + -0x38);
  *(undefined8 *)((long)puVar5 + -0x30) = *(undefined8 *)((long)puVar5 + -0x30);
  *(undefined8 *)((long)puVar5 + -0x28) = *(undefined8 *)((long)puVar5 + -0x28);
  puVar16 = (undefined1 *)((long)puVar5 + -0x30);
  uVar11 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(lVar3,0);
  if ((uVar11 & 1) != 0) {
code_r0x014ceb18:
    if (*(char *)(lVar3 + 0x60) == '\0') {
      *(undefined1 *)(lVar3 + 0x60) = 1;
      *(undefined1 *)(lVar3 + 0x61) = 1;
      return;
    }
    return;
  }
  lVar6 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(lVar3,0);
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0xc0) == 0)) {
    puVar17 = &Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
    auVar19 = func_0x00f78af4();
  }
  else {
    if (*(char *)(*(long *)(lVar6 + 0xc0) + 0x50) != '\0') goto code_r0x014ceb18;
    auVar19._8_4_ = 1;
    auVar19._0_8_ = lVar3;
    uVar9 = 1;
    puVar16 = *(undefined1 **)((long)puVar5 + -0x30);
    puVar17 = *(undefined **)((long)puVar5 + -0x28);
    puVar1 = (undefined1 *)((long)puVar5 + -0x20);
    uVar10 = *(undefined8 *)((long)puVar5 + -0x40);
    lVar3 = *(long *)((long)puVar5 + -0x38);
  }
  plVar4 = auVar19._0_8_;
  *(undefined8 *)(puVar1 + -0x20) = uVar10;
  *(long *)(puVar1 + -0x18) = lVar3;
  *(undefined1 **)(puVar1 + -0x10) = puVar16;
  *(undefined **)(puVar1 + -8) = puVar17;
  if ((*(char *)((long)plVar4 + 300) != '\0') == uVar9) {
    return;
  }
  if (auVar19._8_4_ != 0) {
    (**(code **)(*plVar4 + 0x448))(plVar4,*(undefined8 *)(*plVar4 + 0x450));
  }
  *(char *)((long)plVar4 + 300) = (char)uVar9;
  if (((plVar4[9] != 0) && (lVar3 = *(long *)(plVar4[9] + 0x28), lVar3 != 0)) &&
     (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar3,0), lVar3 != 0)) {
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = uVar13;
    *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
    *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
    *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
    *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf4c0)(lVar3,uVar9 ^ 1);
    return;
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14be24c | Atlas.Gameplay.Usables.PlacementHomingProjectile.CreateDeSpawnVfx
// ============================================================

/* WARNING: Possible PIC construction at 0x014be48c: Changing call to branch */

void Atlas_Gameplay_Usables_PlacementHomingProjectile__CreateDeSpawnVfx
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  undefined4 uVar14;
  undefined1 auVar15 [12];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  puVar12 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4af9 & 1) == 0) {
    func_0x00f78a20(0x3d6b360);
    bRam0000000003eb4af9 = 1;
  }
  lVar4 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(param_4,0);
  lVar5 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                    (param_4);
  if ((lVar5 != 0) && (*(long *)(param_4 + 0x100) != 0)) {
    unaff_x21 = *(undefined8 *)(lVar5 + 0xd8);
    unaff_x22 = *(undefined8 *)(lVar5 + 0xe0);
    uVar14 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(param_4 + 0x100),0);
    uVar11 = *(undefined8 *)(param_4 + 0x28);
    uVar6 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                      (param_4);
    if (lVar4 != 0) {
      param_6 = unaff_x21;
      lVar4 = /*Atlas.Contexts.GameContextBase$$SpawnAoE*/ func_0x0159a63c(uVar14,param_2,param_3,lVar4,/*STR('CulturePodExplosionVFX')*/ uRam0000000003d6b360,unaff_x21,unaff_x22,
                              uVar11,uVar6,*(undefined8 *)(param_4 + 0x50),0);
      lVar5 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                        (param_4);
      if (lVar5 != 0) {
        uStack_78 = *(undefined8 *)(lVar5 + 0xa0);
        uStack_80 = *(undefined8 *)(lVar5 + 0x98);
        uStack_70 = *(undefined4 *)(lVar5 + 0xa8);
        /*Atlas.Gameplay.Usables.ProjectileUsable$$SetupDespawnVFX*/ func_0x014cf800(param_4,lVar4,&uStack_80,0);
        return;
      }
    }
  }
  puVar13 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__LoseTarget;
  lVar5 = func_0x00f78af4();
  puVar1 = &uStack_80;
  do {
    *(long *)((long)puVar1 + -0x20) = lVar4;
    *(long *)((long)puVar1 + -0x18) = param_4;
    *(undefined1 **)((long)puVar1 + -0x10) = puVar12;
    *(undefined **)((long)puVar1 + -8) = puVar13;
    lVar4 = 0x3eb4000;
    if ((bRam0000000003eb4afa & 1) == 0) {
      func_0x00f78a20(0x3d3b888);
      func_0x00f78a20(0x3d3b890);
      bRam0000000003eb4afa = 1;
    }
    if (*(long *)(lVar5 + 0x1a0) != 0) {
      iVar3 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasKartTarget
                        (*(long *)(lVar5 + 0x1a0),0);
      if (iVar3 == 0) {
        return;
      }
      if (((*(long *)(lVar5 + 0x1a0) != 0) &&
          (lVar10 = *(long *)(*(long *)(lVar5 + 0x1a0) + 0x20), lVar10 != 0)) &&
         (lVar10 = *(long *)(lVar10 + 0x90), lVar10 != 0)) {
        iVar3 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_IsLocalPlayer*/ func_0x0159dd28(lVar10,0);
        if (iVar3 != 0) {
          if (((*(long *)(lVar5 + 0x1a0) == 0) ||
              (lVar10 = *(long *)(*(long *)(lVar5 + 0x1a0) + 0x20), lVar10 == 0)) ||
             ((lVar10 = *(long *)(lVar10 + 0x90), lVar10 == 0 ||
              (lVar10 = *(long *)(lVar10 + 200), lVar10 == 0)))) goto code_r0x014be468;
          param_6 = uRam0000000003d3b888;
          iVar3 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(lVar10,lVar5);
          if (iVar3 != 0) {
            if (((*(long *)(lVar5 + 0x1a0) == 0) ||
                (lVar10 = *(long *)(*(long *)(lVar5 + 0x1a0) + 0x20), lVar10 == 0)) ||
               ((lVar10 = *(long *)(lVar10 + 0x90), lVar10 == 0 ||
                (lVar10 = *(long *)(lVar10 + 200), lVar10 == 0)))) goto code_r0x014be468;
            param_6 = uRam0000000003d3b890;
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(lVar10,lVar5);
          }
        }
        if (*(long *)(lVar5 + 0x1a0) != 0) {
          *(undefined8 *)(*(long *)(lVar5 + 0x1a0) + 0x20) = 0;
          return;
        }
      }
    }
code_r0x014be468:
    param_4 = func_0x00f78af4();
    *(undefined8 *)((long)puVar1 + -0x40) = 0x3eb4000;
    *(long *)((long)puVar1 + -0x38) = lVar5;
    *(undefined1 **)((long)puVar1 + -0x30) = (undefined1 *)((long)puVar1 + -0x10);
    *(undefined **)((long)puVar1 + -0x28) =
         &Atlas_Gameplay_Usables_PlacementHomingProjectile__Destroy;
    puVar12 = (undefined1 *)((long)puVar1 + -0x30);
    uVar7 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(param_4,0);
    uVar9 = (uint)param_6;
    if ((uVar7 & 1) != 0) break;
    puVar13 = &UNK_014be490;
    puVar1 = (undefined8 *)((long)puVar1 + -0x40);
    lVar5 = param_4;
  } while( true );
  uVar6 = *(undefined8 *)((long)puVar1 + -0x40);
  puVar2 = (undefined1 *)((long)puVar1 + -0x40);
  *(undefined8 *)((long)puVar1 + -0x40) = uVar6;
  *(undefined8 *)((long)puVar1 + -0x38) = *(undefined8 *)((long)puVar1 + -0x38);
  *(undefined8 *)((long)puVar1 + -0x30) = *(undefined8 *)((long)puVar1 + -0x30);
  *(undefined8 *)((long)puVar1 + -0x28) = *(undefined8 *)((long)puVar1 + -0x28);
  puVar12 = (undefined1 *)((long)puVar1 + -0x30);
  uVar7 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(param_4,0);
  if ((uVar7 & 1) != 0) {
code_r0x014ceb18:
    if (*(char *)(param_4 + 0x60) == '\0') {
      *(undefined1 *)(param_4 + 0x60) = 1;
      *(undefined1 *)(param_4 + 0x61) = 1;
      return;
    }
    return;
  }
  lVar4 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(param_4,0);
  if ((lVar4 == 0) || (*(long *)(lVar4 + 0xc0) == 0)) {
    puVar13 = &Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
    auVar15 = func_0x00f78af4();
  }
  else {
    if (*(char *)(*(long *)(lVar4 + 0xc0) + 0x50) != '\0') goto code_r0x014ceb18;
    auVar15._8_4_ = 1;
    auVar15._0_8_ = param_4;
    uVar9 = 1;
    puVar12 = *(undefined1 **)((long)puVar1 + -0x30);
    puVar13 = *(undefined **)((long)puVar1 + -0x28);
    puVar2 = (undefined1 *)((long)puVar1 + -0x20);
    uVar6 = *(undefined8 *)((long)puVar1 + -0x40);
    param_4 = *(long *)((long)puVar1 + -0x38);
  }
  plVar8 = auVar15._0_8_;
  *(undefined8 *)(puVar2 + -0x20) = uVar6;
  *(long *)(puVar2 + -0x18) = param_4;
  *(undefined1 **)(puVar2 + -0x10) = puVar12;
  *(undefined **)(puVar2 + -8) = puVar13;
  if ((*(char *)((long)plVar8 + 300) != '\0') == uVar9) {
    return;
  }
  if (auVar15._8_4_ != 0) {
    (**(code **)(*plVar8 + 0x448))(plVar8,*(undefined8 *)(*plVar8 + 0x450));
  }
  *(char *)((long)plVar8 + 300) = (char)uVar9;
  if (((plVar8[9] != 0) && (lVar4 = *(long *)(plVar8[9] + 0x28), lVar4 != 0)) &&
     (lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar4,0), lVar4 != 0)) {
    *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
    *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
    *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
    *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf4c0)(lVar4,uVar9 ^ 1);
    return;
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14be370 | Atlas.Gameplay.Usables.PlacementHomingProjectile.LoseTarget
// ============================================================

void Atlas_Gameplay_Usables_PlacementHomingProjectile__LoseTarget
               (long param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 ****ppppuVar8;
  undefined *puVar9;
  undefined1 auVar10 [12];
  undefined8 uStack_40;
  long lStack_38;
  undefined8 ***pppuStack_30;
  undefined *puStack_28;
  
  if ((bRam0000000003eb4afa & 1) == 0) {
    func_0x00f78a20(0x3d3b888);
    func_0x00f78a20(0x3d3b890);
    bRam0000000003eb4afa = 1;
  }
  if (*(long *)(param_1 + 0x1a0) != 0) {
    iVar2 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasKartTarget
                      (*(long *)(param_1 + 0x1a0),0);
    if (iVar2 == 0) {
      return;
    }
    if (((*(long *)(param_1 + 0x1a0) != 0) &&
        (lVar7 = *(long *)(*(long *)(param_1 + 0x1a0) + 0x20), lVar7 != 0)) &&
       (lVar7 = *(long *)(lVar7 + 0x90), lVar7 != 0)) {
      iVar2 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_IsLocalPlayer*/ func_0x0159dd28(lVar7,0);
      if (iVar2 != 0) {
        if (((*(long *)(param_1 + 0x1a0) == 0) ||
            (lVar7 = *(long *)(*(long *)(param_1 + 0x1a0) + 0x20), lVar7 == 0)) ||
           ((lVar7 = *(long *)(lVar7 + 0x90), lVar7 == 0 ||
            (lVar7 = *(long *)(lVar7 + 200), lVar7 == 0)))) goto LAB_014be468;
        uVar6 = uRam0000000003d3b888;
        iVar2 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(lVar7,param_1);
        param_3 = (uint)uVar6;
        if (iVar2 != 0) {
          if (((*(long *)(param_1 + 0x1a0) == 0) ||
              (lVar7 = *(long *)(*(long *)(param_1 + 0x1a0) + 0x20), lVar7 == 0)) ||
             ((lVar7 = *(long *)(lVar7 + 0x90), lVar7 == 0 ||
              (lVar7 = *(long *)(lVar7 + 200), lVar7 == 0)))) goto LAB_014be468;
          uVar6 = uRam0000000003d3b890;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(lVar7,param_1);
          param_3 = (uint)uVar6;
        }
      }
      if (*(long *)(param_1 + 0x1a0) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x20) = 0;
        return;
      }
    }
  }
LAB_014be468:
  lVar7 = func_0x00f78af4();
  uStack_40 = 0x3eb4000;
  puStack_28 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__Destroy;
  lStack_38 = param_1;
  pppuStack_30 = (undefined8 ***)&stack0xfffffffffffffff0;
  uVar3 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(lVar7,0);
  if ((uVar3 & 1) == 0) {
    Atlas_Gameplay_Usables_PlacementHomingProjectile__LoseTarget(lVar7);
  }
  uVar6 = uStack_40;
  puVar1 = &uStack_40;
  ppppuVar8 = &pppuStack_30;
  uVar3 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(lVar7,0);
  if ((uVar3 & 1) != 0) {
code_r0x014ceb18:
    if (*(char *)(lVar7 + 0x60) == '\0') {
      *(undefined1 *)(lVar7 + 0x60) = 1;
      *(undefined1 *)(lVar7 + 0x61) = 1;
      return;
    }
    return;
  }
  lVar4 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(lVar7,0);
  if ((lVar4 == 0) || (*(long *)(lVar4 + 0xc0) == 0)) {
    puVar9 = &Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
    auVar10 = func_0x00f78af4();
  }
  else {
    if (*(char *)(*(long *)(lVar4 + 0xc0) + 0x50) != '\0') goto code_r0x014ceb18;
    auVar10._8_4_ = 1;
    auVar10._0_8_ = lVar7;
    param_3 = 1;
    puVar1 = (undefined8 *)&stack0xffffffffffffffe0;
    lVar7 = lStack_38;
    uVar6 = uStack_40;
    ppppuVar8 = (undefined8 ****)pppuStack_30;
    puVar9 = puStack_28;
  }
  plVar5 = auVar10._0_8_;
  *(undefined8 *)((long)puVar1 + -0x20) = uVar6;
  *(long *)((long)puVar1 + -0x18) = lVar7;
  *(undefined8 *****)((long)puVar1 + -0x10) = ppppuVar8;
  *(undefined **)((long)puVar1 + -8) = puVar9;
  if ((*(char *)((long)plVar5 + 300) != '\0') == param_3) {
    return;
  }
  if (auVar10._8_4_ != 0) {
    (**(code **)(*plVar5 + 0x448))(plVar5,*(undefined8 *)(*plVar5 + 0x450));
  }
  *(char *)((long)plVar5 + 300) = (char)param_3;
  if (((plVar5[9] != 0) && (lVar7 = *(long *)(plVar5[9] + 0x28), lVar7 != 0)) &&
     (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar7,0), lVar7 != 0)) {
    *(undefined8 *)((long)puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)((long)puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)((long)puVar1 + -0x20) = *(undefined8 *)((long)puVar1 + -0x20);
    *(undefined8 *)((long)puVar1 + -0x18) = *(undefined8 *)((long)puVar1 + -0x18);
    *(undefined8 *)((long)puVar1 + -0x10) = *(undefined8 *)((long)puVar1 + -0x10);
    *(undefined8 *)((long)puVar1 + -8) = *(undefined8 *)((long)puVar1 + -8);
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf4c0)(lVar7,param_3 ^ 1);
    return;
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14be46c | Atlas.Gameplay.Usables.PlacementHomingProjectile.Destroy
// ============================================================

void Atlas_Gameplay_Usables_PlacementHomingProjectile__Destroy
               (long *param_1,undefined8 param_2,uint param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar6;
  undefined *unaff_x30;
  undefined1 auVar7 [12];
  
  uVar2 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(param_1,0);
  if ((uVar2 & 1) == 0) {
    Atlas_Gameplay_Usables_PlacementHomingProjectile__LoseTarget(param_1);
  }
  puVar1 = &stack0xffffffffffffffe0;
  puVar6 = &stack0xfffffffffffffff0;
  uVar2 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(param_1,0);
  if ((uVar2 & 1) == 0) {
    lVar3 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(param_1,0);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0xc0) == 0)) {
      unaff_x30 = &Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
      auVar7 = func_0x00f78af4();
      iVar5 = auVar7._8_4_;
      plVar4 = auVar7._0_8_;
    }
    else {
      if (*(char *)(*(long *)(lVar3 + 0xc0) + 0x50) != '\0') goto code_r0x014ceb18;
      iVar5 = 1;
      param_3 = 1;
      puVar1 = (undefined1 *)register0x00000008;
      plVar4 = param_1;
      param_1 = unaff_x19;
      puVar6 = unaff_x29;
    }
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(long **)(puVar1 + -0x18) = param_1;
    *(undefined1 **)(puVar1 + -0x10) = puVar6;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    if ((*(char *)((long)plVar4 + 300) != '\0') == param_3) {
      return;
    }
    if (iVar5 != 0) {
      (**(code **)(*plVar4 + 0x448))(plVar4,*(undefined8 *)(*plVar4 + 0x450));
    }
    *(char *)((long)plVar4 + 300) = (char)param_3;
    if (((plVar4[9] != 0) && (lVar3 = *(long *)(plVar4[9] + 0x28), lVar3 != 0)) &&
       (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar3,0), lVar3 != 0)) {
      *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
      *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
      *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
      *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
      if (pcRam0000000003ebf4c0 == (code *)0x0) {
        pcRam0000000003ebf4c0 =
             (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003ebf4c0)(lVar3,param_3 ^ 1);
      return;
    }
    func_0x00f78af4();
    return;
  }
code_r0x014ceb18:
  if ((char)param_1[0xc] != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(undefined1 *)((long)param_1 + 0x61) = 1;
  return;
}



// ============================================================
// RVA: 0x14be4a4 | Atlas.Gameplay.Usables.PlacementHomingProjectile.DeSpawn
// ============================================================

long * Atlas_Gameplay_Usables_PlacementHomingProjectile__DeSpawn
                 (long *param_1,int param_2,undefined8 param_3,undefined8 *param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  int extraout_w1;
  int extraout_w1_00;
  long extraout_x1;
  long lVar12;
  int *piVar13;
  long lVar14;
  long *unaff_x24;
  long lVar15;
  long *unaff_x25;
  undefined1 auVar16 [16];
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long *plStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  if ((bRam0000000003eb4afb & 1) == 0) {
    func_0x00f78a20(0x3d5ff08);
    bRam0000000003eb4afb = 1;
  }
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x448))(param_1,*(undefined8 *)(*param_1 + 0x450));
  }
  Atlas_Gameplay_Usables_PlacementHomingProjectile__LoseTarget(param_1);
  lVar12 = lRam0000000003d5ff08;
  lVar2 = param_1[2];
  if (lVar2 == 0) {
    plVar4 = (long *)func_0x00f78af4();
    return plVar4;
  }
  lVar9 = lRam0000000003d5ff08;
  if ((bRam0000000003eb6a8c & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6a8c = 1;
  }
  if (param_1 == (long *)0x0) goto code_r0x01a3f500;
  lVar14 = param_1[9];
  lVar15 = *(long *)(*(long *)(lVar12 + 0x30) + 8);
  if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar15);
  }
  if (lVar14 == 0) {
code_r0x01a3f450:
    lVar3 = 0;
  }
  else {
    lVar3 = func_0x00f78adc(lVar14,lVar15);
    if (lVar3 == 0) {
      func_0x00f78e5c(lVar14,lVar15);
      goto code_r0x01a3f450;
    }
  }
  unaff_x25 = (long *)0x3d25000;
  (**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
  lVar14 = *(long *)(lVar2 + 0x18);
  unaff_x24 = *(long **)(*(long *)(lVar12 + 0x30) + 0x10);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x24,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (lVar14 != 0) {
      param_4 = *(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x18);
      (*(code *)*param_4)(lVar14,uVar5);
      lVar9 = lVar3;
      if (*(long *)(lVar2 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a3f4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar4 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x20))
                                   (*(long *)(lVar2 + 0x10),param_1);
        return plVar4;
      }
    }
  }
code_r0x01a3f500:
  func_0x00f78af4();
  puStack_58 = &Atlas_Gameplay_Usables_UsableManager__GetActiveUsablesBelongingToKart_Usable_;
  lVar14 = 0x3eb6000;
  lVar12 = lVar9;
  puVar10 = param_4;
  lVar2 = param_5;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb6a8d & 1) == 0) {
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d1c740);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3c750);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb6a8d = 1;
  }
  if (param_4 == (undefined8 *)0x0) {
    func_0x00f78af4();
    goto code_r0x01a3f6f8;
  }
  unaff_x25 = (long *)0x3d1c740;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_e8,param_4,uRam0000000003d3a7d0);
  uStack_c8 = uStack_e0;
  lStack_d0 = lStack_e8;
  puStack_c0 = puStack_d8;
  while (uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_d0,uRam0000000003d325c8), puVar7 = puStack_c0,
        (uVar6 & 1) != 0) {
    lVar14 = **(long **)(param_5 + 0x30);
    if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar14);
    }
    if (puVar7 == (undefined8 *)0x0) {
      func_0x00f78af4();
      goto code_r0x01a3f6f0;
    }
    lVar15 = func_0x00f78adc(puVar7,lVar14);
    if (lVar15 == 0) {
      func_0x00f78e5c(puVar7,lVar14);
      goto code_r0x01a3f6f0;
    }
    param_4 = puVar7;
    if ((*(long *)(lVar15 + 0x28) == extraout_x1) && (*(char *)(lVar15 + 0x18) != '\0')) {
      if (lVar9 == 0) {
        func_0x00f78af4();
code_r0x01a3f6f0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f6f4);
        (*pcVar1)();
      }
      lVar12 = lRam0000000003d3c750;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar9);
    }
  }
  param_5 = 0;
  do {
    lStack_e8 = *unaff_x25;
    uVar6 = (ulong)*(ushort *)(lStack_e8 + 0x12a);
    if (uVar6 != 0) {
      piVar13 = (int *)(*(long *)(lStack_e8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x24) {
          puVar7 = (undefined8 *)(lStack_e8 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x01a3f69c;
        }
        piVar13 = piVar13 + 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    lVar12 = 0;
    puVar7 = (undefined8 *)func_0x00fac1f0(&lStack_e8);
code_r0x01a3f69c:
    plVar4 = (long *)(*(code *)*puVar7)(&uStack_e0,puVar7[1]);
    if (param_5 == 0) {
      return plVar4;
    }
code_r0x01a3f6f8:
    func_0x00f78ac0(param_5,0);
    if (extraout_w1 != 1) break;
    plVar4 = (long *)___cxa_begin_catch();
    param_5 = *plVar4;
    ___cxa_end_catch();
  } while( true );
  auVar16 = __Unwind_Resume();
  lVar3 = auVar16._0_8_;
  puStack_f8 = &Atlas_Gameplay_Usables_UsableManager__GetUsedUsablesBelongingToKart_object_;
  lVar15 = lVar12;
  puVar7 = puVar10;
  puStack_120 = param_4;
  lStack_118 = extraout_x1;
  lStack_110 = lVar9;
  lStack_108 = param_5;
  ppuStack_100 = &puStack_60;
  if ((*(long *)(lVar3 + 0x20) != 0) &&
     (lVar8 = (*(code *)**(undefined8 **)puVar10[6])(), param_5 = lVar12, lVar9 = auVar16._8_8_,
     param_4 = puVar10, lVar8 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01a3f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar4 = (long *)(*(code *)**(undefined8 **)(puVar10[6] + 8))
                               (lVar3,auVar16._8_8_,lVar12,*(undefined8 *)(lVar8 + 0x10));
    return plVar4;
  }
  auVar16 = func_0x00f78af4();
  lVar8 = auVar16._8_8_;
  puStack_128 = &Atlas_Gameplay_Usables_UsableManager__InitLightMembers_SuperShieldUsableBehaviour_;
  plVar4 = (long *)0x3eb6000;
  lVar12 = lVar15;
  plStack_160 = unaff_x24;
  lStack_158 = lVar14;
  puStack_150 = param_4;
  lStack_148 = lVar3;
  lStack_140 = lVar9;
  lStack_138 = param_5;
  ppuStack_130 = &ppuStack_100;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(auVar16._0_8_ + 0x18) == 0) ||
       (lVar9 = (**(code **)**(undefined8 **)(lVar2 + 0x30))(), lVar9 == 0)) ||
      (lVar9 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 8))(), lVar9 == 0)) ||
     (lVar9 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x10))(), lVar9 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar4 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x18))(&lStack_198);
  uStack_178 = uStack_190;
  lStack_180 = lStack_198;
  uStack_170 = uStack_188;
  do {
    uVar6 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&lStack_180,*(undefined8 *)(*(long *)(lVar2 + 0x30) + 0x30));
    if ((uVar6 & 1) == 0) {
      puVar7 = (undefined8 *)0x0;
      do {
        lVar2 = *(long *)(*(long *)(lVar2 + 0x30) + 0x38);
        if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar2);
        }
        uVar6 = (ulong)*(ushort *)(lVar2 + 0x12a);
        lStack_198 = lVar2;
        if (uVar6 != 0) {
          piVar13 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *plVar4) {
              puVar10 = (undefined8 *)(lVar2 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar13 = piVar13 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        lVar12 = 0;
        puVar10 = (undefined8 *)func_0x00fac1f0(&lStack_198);
code_r0x01a3f920:
        plVar11 = (long *)(*(code *)*puVar10)(&uStack_190,puVar10[1]);
        if (puVar7 == (undefined8 *)0x0) {
          return plVar11;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(puVar7,0);
        if (extraout_w1_00 != 1) {
          auVar16 = __Unwind_Resume();
          lVar9 = auVar16._0_8_;
          plVar4 = (long *)(**(code **)**(undefined8 **)(lVar12 + 0x30))();
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x1e8))
                      (plVar4,lVar9,auVar16._8_8_,*(undefined8 *)(lVar9 + 0x38),
                       *(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(*plVar4 + 0x1f0),param_7,
                       param_8,lVar8,lVar15,puVar7,lVar2);
            return plVar4;
          }
          puVar10 = (undefined8 *)func_0x00f78af4();
          plVar4 = (long *)*puVar10;
          func_0x00f78a30();
          return plVar4;
        }
        puVar7 = (undefined8 *)___cxa_begin_catch();
        puVar7 = (undefined8 *)*puVar7;
        ___cxa_end_catch();
      } while( true );
    }
    lVar9 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&lStack_180,*(undefined8 *)(*(long *)(lVar2 + 0x30) + 0x20));
    if (lVar15 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(lVar15,0);
    if (lVar9 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(undefined8 **)(lVar9 + 0x48) = puVar7;
    if (lVar8 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar12 = *(long *)(lVar8 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar9,lVar15,lVar12,0);
  } while( true );
}



// ============================================================
// RVA: 0x14be528 | Atlas.Gameplay.Usables.PlacementHomingProjectile.OnAoEHit
// ============================================================

void Atlas_Gameplay_Usables_PlacementHomingProjectile__OnAoEHit(void)

{
  return;
}



// ============================================================
// RVA: 0x14be52c | Atlas.Gameplay.Usables.PlacementHomingProjectile.ForceToFloor
// ============================================================

/* WARNING: Possible PIC construction at 0x014be548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014be824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014be89c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014be828) */
/* WARNING: Removing unreachable block (ram,0x014be830) */
/* WARNING: Removing unreachable block (ram,0x014be838) */
/* WARNING: Removing unreachable block (ram,0x014be8b4) */
/* WARNING: Removing unreachable block (ram,0x014be844) */
/* WARNING: Removing unreachable block (ram,0x014be8b8) */
/* WARNING: Removing unreachable block (ram,0x014be8d4) */
/* WARNING: Removing unreachable block (ram,0x014be8e0) */
/* WARNING: Removing unreachable block (ram,0x014be8ec) */
/* WARNING: Removing unreachable block (ram,0x014be8fc) */
/* WARNING: Removing unreachable block (ram,0x014be900) */
/* WARNING: Removing unreachable block (ram,0x014be904) */
/* WARNING: Removing unreachable block (ram,0x014be950) */
/* WARNING: Removing unreachable block (ram,0x014be908) */
/* WARNING: Removing unreachable block (ram,0x014be910) */
/* WARNING: Removing unreachable block (ram,0x014be918) */
/* WARNING: Removing unreachable block (ram,0x014be964) */
/* WARNING: Removing unreachable block (ram,0x014be990) */
/* WARNING: Removing unreachable block (ram,0x014be984) */
/* WARNING: Removing unreachable block (ram,0x014be92c) */
/* WARNING: Removing unreachable block (ram,0x03274fd0) */
/* WARNING: Removing unreachable block (ram,0x03274ff8) */
/* WARNING: Removing unreachable block (ram,0x0327500c) */
/* WARNING: Removing unreachable block (ram,0x014be54c) */
/* WARNING: Removing unreachable block (ram,0x014be554) */
/* WARNING: Removing unreachable block (ram,0x014be5c8) */
/* WARNING: Removing unreachable block (ram,0x014be55c) */
/* WARNING: Removing unreachable block (ram,0x014be8a0) */

void Atlas_Gameplay_Usables_PlacementHomingProjectile__ForceToFloor
               (undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  byte bVar6;
  bool bVar7;
  long lVar8;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined *puVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  undefined4 uVar13;
  ulong extraout_d0;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  ulong unaff_d8;
  float fVar22;
  ulong unaff_d9;
  ulong unaff_d10;
  float fVar23;
  ulong unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  undefined1 auStack_70 [64];
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  puVar9 = (undefined *)0x14be54c;
  puVar3 = auStack_70;
  puVar4 = (undefined1 *)register0x00000008;
  do {
    puVar5 = puVar3 + -0xb0;
    *(ulong *)(puVar3 + -0x70) = unaff_d13;
    *(ulong *)(puVar3 + -0x68) = unaff_d12;
    *(ulong *)(puVar3 + -0x60) = unaff_d11;
    *(ulong *)(puVar3 + -0x58) = unaff_d10;
    *(ulong *)(puVar3 + -0x50) = unaff_d9;
    *(ulong *)(puVar3 + -0x48) = unaff_d8;
    *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
    *(ulong *)(puVar3 + -0x30) = unaff_x22;
    *(ulong *)(puVar3 + -0x28) = unaff_x21;
    *(long *)(puVar3 + -0x20) = unaff_x20;
    *(long *)(puVar3 + -0x18) = param_4;
    *(undefined1 **)(puVar3 + -0x10) = puVar4 + -0x10;
    *(undefined **)(puVar3 + -8) = puVar9;
    if ((*(long *)(param_4 + 0xf8) != 0) &&
       (lVar8 = *(long *)(*(long *)(param_4 + 0xf8) + 0x18), unaff_x20 = param_4, lVar8 != 0)) {
      fVar10 = (float)/*UnityEngine.Rigidbody$$get_position*/ func_0x032a2e48(lVar8,0);
      fVar23 = (float)param_3;
      fVar15 = (float)param_2;
      if (*(long *)(param_4 + 0x100) != 0) {
        unaff_d12 = param_3 & 0xffffffff;
        fVar14 = fVar15;
        fVar21 = fVar23;
        fVar11 = (float)/*UnityEngine.Transform$$get_forward*/ func_0x03275810(*(long *)(param_4 + 0x100),0);
        fVar20 = *(float *)(param_4 + 0x1ac);
        fVar11 = fVar11 * fVar20 * 0.5;
        fVar14 = fVar14 * fVar20 * 0.5;
        fVar21 = fVar21 * fVar20 * 0.5;
        fVar20 = fVar10 - fVar11;
        unaff_d8 = (ulong)(uint)fVar20;
        fVar22 = fVar23 - fVar21;
        unaff_d9 = (ulong)(uint)fVar22;
        fVar10 = fVar10 + fVar11;
        unaff_d10 = (ulong)(uint)fVar10;
        fVar11 = fVar15 + fVar14;
        unaff_d13 = (ulong)(uint)fVar11;
        fVar23 = fVar23 + fVar21;
        unaff_d11 = (ulong)(uint)fVar23;
        /*Atlas.Gameplay.Usables.ProjectileUsable$$RaycastProjectedNTimes*/ func_0x014ced40(puVar3 + -0x88,*(undefined4 *)(param_4 + 0x1a8),fVar20,fVar15 - fVar14,
                        fVar22,param_4,0,0);
        uVar1 = *(uint *)(puVar3 + -0x88);
        unaff_x21 = (ulong)uVar1;
        *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(puVar3 + -0x7c);
        *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(puVar3 + -0x84);
        /*Atlas.Gameplay.Usables.ProjectileUsable$$RaycastProjectedNTimes*/ func_0x014ced40(puVar3 + -0x88,*(undefined4 *)(param_4 + 0x1a8),fVar10,fVar11,fVar23,param_4
                        ,0,0);
        uVar2 = *(uint *)(puVar3 + -0x88);
        unaff_x22 = (ulong)uVar2;
        uVar18 = *(undefined8 *)(puVar3 + -0x7c);
        uVar17 = *(undefined8 *)(puVar3 + -0x84);
        bVar6 = (uVar1 & 0xff) != 0;
        if ((uVar2 & 0xff) != 0) {
          bVar6 = bVar6 + 1;
        }
        if (bVar6 != 2) {
          puVar3[-0x72] = 0;
          *(undefined2 *)(puVar3 + -0x74) = 0;
          if (bVar6 != 0) goto code_r0x014be798;
          bVar7 = false;
          uVar17 = 0;
          uVar18 = 0;
          goto code_r0x014be7b8;
        }
        *(undefined8 *)(puVar3 + -0xa8) = uVar18;
        *(undefined8 *)(puVar3 + -0xb0) = uVar17;
        fVar15 = (float)uVar17 - (float)*(undefined8 *)(puVar3 + -0xa0);
        *(float *)(puVar3 + -0x88) = fVar20 - fVar10;
        *(float *)(puVar3 + -0x84) = fVar15;
        *(float *)(puVar3 + -0x80) = fVar22 - fVar23;
        /*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(puVar3 + -0x88,0);
        fVar10 = *(float *)(param_4 + 0xe8);
        param_3 = *(ulong *)(param_4 + 0xe0);
        param_2 = CONCAT44(fVar15 + (float)(param_3 >> 0x20),(float)param_3 + 0.0);
        *(ulong *)(puVar3 + -0x88) = param_2;
        *(float *)(puVar3 + -0x80) = fVar10 + 0.0;
        uVar12 = /*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(puVar3 + -0x88,0);
        uVar19 = (undefined4)param_3;
        uVar16 = (undefined4)param_2;
        unaff_x23 = 2;
        if (*(long *)(param_4 + 0xf8) != 0) {
          unaff_d8 = (ulong)uVar12;
          unaff_d9 = param_2 & 0xffffffff;
          unaff_d10 = param_3 & 0xffffffff;
          unaff_x20 = *(long *)(*(long *)(param_4 + 0xf8) + 0x18);
          uVar13 = /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
          param_2 = param_2 & 0xffffffff;
          param_3 = param_3 & 0xffffffff;
          /*UnityEngine.Quaternion$$LookRotation*/ func_0x03251cec(uVar12,param_2,param_3,uVar13,uVar16,uVar19,0);
          if (unaff_x20 != 0) {
            /*UnityEngine.Rigidbody$$MoveRotation*/ func_0x032a33dc(unaff_x20,0);
            puVar3[-0x72] = 0;
            *(undefined2 *)(puVar3 + -0x74) = 0;
            uVar18 = *(undefined8 *)(puVar3 + -0xa8);
            uVar17 = *(undefined8 *)(puVar3 + -0xb0);
code_r0x014be798:
            bVar7 = ((uVar1 | uVar2) & 0xff) != 0;
            fVar10 = (float)bVar6;
            uVar17 = CONCAT44(((float)((ulong)*(undefined8 *)(puVar3 + -0xa0) >> 0x20) +
                              (float)((ulong)uVar17 >> 0x20)) / fVar10,
                              ((float)*(undefined8 *)(puVar3 + -0xa0) + (float)uVar17) / fVar10);
            uVar18 = CONCAT44(((float)((ulong)*(undefined8 *)(puVar3 + -0x98) >> 0x20) +
                              (float)((ulong)uVar18 >> 0x20)) / fVar10,
                              ((float)*(undefined8 *)(puVar3 + -0x98) + (float)uVar18) / fVar10);
code_r0x014be7b8:
            puVar4[-0x68] = bVar7;
            *(undefined2 *)(puVar4 + -0x67) = *(undefined2 *)(puVar3 + -0x74);
            puVar4[-0x65] = puVar3[-0x72];
            *(undefined8 *)(puVar4 + -0x5c) = uVar18;
            *(undefined8 *)(puVar4 + -100) = uVar17;
            return;
          }
        }
      }
    }
    param_4 = func_0x00f78af4();
    *(ulong *)(puVar3 + -0xe0) = unaff_d9;
    *(ulong *)(puVar3 + -0xd8) = unaff_d8;
    *(long *)(puVar3 + -0xd0) = unaff_x20;
    *(undefined1 **)(puVar3 + -200) = puVar4 + -0x68;
    *(undefined1 **)(puVar3 + -0xc0) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0xb8) =
         &Atlas_Gameplay_Usables_PlacementHomingProjectile__ForceToFloorRemote;
    unaff_d8 = extraout_d0 & 0xffffffff;
    puVar9 = &UNK_014be828;
    puVar3 = puVar3 + -0x120;
    puVar4 = puVar5;
  } while( true );
}



// ============================================================
// RVA: 0x14be5cc | Atlas.Gameplay.Usables.PlacementHomingProjectile.ForceToFloorLogic
// ============================================================

/* WARNING: Possible PIC construction at 0x014be89c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014be8a0) */

void Atlas_Gameplay_Usables_PlacementHomingProjectile__ForceToFloorLogic
               (long param_1,undefined1 param_2 [16],float param_3,float param_4,long param_5)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long unaff_x20;
  undefined *puVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  ulong extraout_d0;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  ulong unaff_d8;
  float fVar19;
  ulong unaff_d9;
  undefined8 uStack_150;
  ulong uStack_148;
  long lStack_140;
  long *plStack_138;
  undefined1 **ppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  ulong uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  float fStack_b0;
  float fStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined8 uStack_7c;
  
  if ((*(long *)(param_5 + 0xf8) == 0) ||
     (lVar3 = *(long *)(*(long *)(param_5 + 0xf8) + 0x18), unaff_x20 = param_5, lVar3 == 0)) {
LAB_014be800:
    plVar4 = (long *)func_0x00f78af4();
    puStack_b8 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__ForceToFloorRemote;
    uVar6 = extraout_d0 & 0xffffffff;
    uStack_e0 = unaff_d9;
    uStack_d8 = unaff_d8;
    lStack_d0 = unaff_x20;
    lStack_c8 = param_1;
    puStack_c0 = &stack0xfffffffffffffff0;
    Atlas_Gameplay_Usables_PlacementHomingProjectile__ForceToFloorLogic(&uStack_118);
    if (((plVar4[0x1f] == 0) || (lVar3 = *(long *)(plVar4[0x1f] + 0x18), lVar3 == 0)) ||
       (lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar3,0), lVar3 == 0)) {
      puVar7 = &Atlas_Gameplay_Usables_PlacementHomingProjectile__HandleMinY;
      plVar5 = (long *)func_0x00f78af4();
    }
    else {
      fVar8 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar3,0);
      uStack_f8 = uStack_110;
      uStack_100 = uStack_118;
      uStack_f0 = uStack_108;
      (**(code **)(*plVar4 + 0x438))
                (extraout_d0 & 0xffffffff,fVar8,param_3,param_4,(int)plVar4[0x37],plVar4,&uStack_100
                 ,1,*(undefined8 *)(*plVar4 + 0x440));
      param_4 = param_3;
      param_3 = fVar8;
      puVar7 = &UNK_014be8a0;
      plVar5 = plVar4;
    }
    uStack_150 = unaff_d9;
    uStack_148 = uVar6;
    lStack_140 = unaff_x20;
    plStack_138 = plVar4;
    ppuStack_130 = &puStack_c0;
    puStack_128 = puVar7;
    if (((plVar5[0x1f] != 0) && (lVar3 = *(long *)(plVar5[0x1f] + 0x18), lVar3 != 0)) &&
       (lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar3,0), lVar3 != 0)) {
      uVar11 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar3,0);
      if ((*(char *)((long)plVar5 + 0x11c) == '\0') ||
         (fVar8 = *(float *)(plVar5 + 0x24), fVar8 <= param_3)) {
        return;
      }
      if ((plVar5[0x1f] != 0) &&
         ((lVar3 = *(long *)(plVar5[0x1f] + 0x18), lVar3 != 0 &&
          (lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar3,0), lVar3 != 0)))) {
        uStack_150 = CONCAT44(fVar8,uVar11);
        uStack_148 = CONCAT44(uStack_148._4_4_,param_4);
        if (pcRam0000000003ec1950 == (code *)0x0) {
          pcRam0000000003ec1950 =
               (code *)func_0x00f789d4("UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)"
                                       ,0);
        }
        (*pcRam0000000003ec1950)(lVar3,&uStack_150);
        return;
      }
    }
    plVar4 = (long *)func_0x00f78af4();
    uVar6 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar4,0);
    if ((uVar6 & 1) != 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x014be9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
    return;
  }
  fVar8 = (float)/*UnityEngine.Rigidbody$$get_position*/ func_0x032a2e48(lVar3,0);
  if (*(long *)(param_5 + 0x100) == 0) goto LAB_014be800;
  fVar18 = param_3;
  fVar15 = param_4;
  fVar9 = (float)/*UnityEngine.Transform$$get_forward*/ func_0x03275810(*(long *)(param_5 + 0x100),0);
  fVar17 = *(float *)(param_5 + 0x1ac);
  fVar9 = fVar9 * fVar17 * 0.5;
  fVar14 = fVar18 * fVar17 * 0.5;
  fVar18 = fVar15 * fVar17 * 0.5;
  fVar17 = fVar8 - fVar9;
  unaff_d8 = (ulong)(uint)fVar17;
  fVar19 = param_4 - fVar18;
  unaff_d9 = (ulong)(uint)fVar19;
  fVar8 = fVar8 + fVar9;
  param_4 = param_4 + fVar18;
  /*Atlas.Gameplay.Usables.ProjectileUsable$$RaycastProjectedNTimes*/ func_0x014ced40(&fStack_88,*(undefined4 *)(param_5 + 0x1a8),fVar17,param_3 - fVar14,fVar19,param_5
                  ,0,0);
  fVar18 = fStack_88;
  uStack_a0 = CONCAT44(fStack_80,fStack_84);
  uStack_98 = uStack_7c;
  /*Atlas.Gameplay.Usables.ProjectileUsable$$RaycastProjectedNTimes*/ func_0x014ced40(&fStack_88,*(undefined4 *)(param_5 + 0x1a8),fVar8,param_3 + fVar14,param_4,param_5
                  ,0,0);
  fVar15 = fStack_88;
  fStack_b0 = fStack_84;
  fStack_ac = fStack_80;
  bVar1 = ((uint)fVar18 & 0xff) != 0;
  if (((uint)fStack_88 & 0xff) != 0) {
    bVar1 = bVar1 + 1;
  }
  if (bVar1 == 2) {
    fStack_88 = fVar17 - fVar8;
    uStack_a8 = uStack_7c;
    fStack_84 = fStack_84 - (float)uStack_a0;
    fStack_80 = fVar19 - param_4;
    /*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&fStack_88,0);
    fStack_80 = *(float *)(param_5 + 0xe8) + 0.0;
    uVar16 = *(ulong *)(param_5 + 0xe0);
    fStack_88 = (float)uVar16 + 0.0;
    fStack_84 = fStack_84 + (float)(uVar16 >> 0x20);
    uVar6 = CONCAT44(fStack_84,fStack_88);
    uVar10 = /*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&fStack_88,0);
    param_4 = (float)uVar16;
    param_3 = (float)uVar6;
    if (*(long *)(param_5 + 0xf8) == 0) goto LAB_014be800;
    unaff_d8 = (ulong)uVar10;
    unaff_d9 = uVar6 & 0xffffffff;
    lVar3 = *(long *)(*(long *)(param_5 + 0xf8) + 0x18);
    fVar8 = param_3;
    fVar9 = param_4;
    uVar11 = /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
    /*UnityEngine.Quaternion$$LookRotation*/ func_0x03251cec(uVar10,uVar6 & 0xffffffff,uVar16 & 0xffffffff,uVar11,fVar8,fVar9,0);
    unaff_x20 = 0;
    if (lVar3 == 0) goto LAB_014be800;
    /*UnityEngine.Rigidbody$$MoveRotation*/ func_0x032a33dc(lVar3,0);
  }
  else {
    uStack_a8 = uStack_7c;
    if (bVar1 == 0) {
      bVar2 = false;
      uVar12 = 0;
      uVar13 = 0;
      goto code_r0x014be7b8;
    }
  }
  bVar2 = (((uint)fVar18 | (uint)fVar15) & 0xff) != 0;
  fVar8 = (float)bVar1;
  uVar12 = CONCAT44(((float)((ulong)uStack_a0 >> 0x20) + fStack_ac) / fVar8,
                    ((float)uStack_a0 + fStack_b0) / fVar8);
  uVar13 = CONCAT44(((float)((ulong)uStack_98 >> 0x20) + (float)((ulong)uStack_a8 >> 0x20)) / fVar8,
                    ((float)uStack_98 + (float)uStack_a8) / fVar8);
code_r0x014be7b8:
  *(bool *)param_1 = bVar2;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 0xc) = uVar13;
  *(undefined8 *)(param_1 + 4) = uVar12;
  return;
}



// ============================================================
// RVA: 0x14be804 | Atlas.Gameplay.Usables.PlacementHomingProjectile.ForceToFloorRemote
// ============================================================

/* WARNING: Possible PIC construction at 0x014be89c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014be8a0) */

void Atlas_Gameplay_Usables_PlacementHomingProjectile__ForceToFloorRemote
               (undefined4 param_1,float param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  float fVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  Atlas_Gameplay_Usables_PlacementHomingProjectile__ForceToFloorLogic(&uStack_68);
  fVar4 = param_2;
  if (((param_4[0x1f] == 0) || (lVar1 = *(long *)(param_4[0x1f] + 0x18), lVar1 == 0)) ||
     (lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar1,0), fVar4 = param_2, lVar1 == 0)) {
    param_4 = (long *)func_0x00f78af4();
  }
  else {
    fVar4 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar1,0);
    uStack_48 = uStack_60;
    uStack_50 = uStack_68;
    uStack_40 = uStack_58;
    (**(code **)(*param_4 + 0x438))
              (param_1,fVar4,param_2,param_3,(int)param_4[0x37],param_4,&uStack_50,1,
               *(undefined8 *)(*param_4 + 0x440));
  }
  if (((param_4[0x1f] != 0) && (lVar1 = *(long *)(param_4[0x1f] + 0x18), lVar1 != 0)) &&
     (lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar1,0), lVar1 != 0)) {
    /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar1,0);
    if ((*(char *)((long)param_4 + 0x11c) == '\0') || (*(float *)(param_4 + 0x24) <= fVar4)) {
      return;
    }
    if ((param_4[0x1f] != 0) &&
       ((lVar1 = *(long *)(param_4[0x1f] + 0x18), lVar1 != 0 &&
        (lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar1,0), lVar1 != 0)))) {
      if (pcRam0000000003ec1950 == (code *)0x0) {
        pcRam0000000003ec1950 =
             (code *)func_0x00f789d4("UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)"
                                     ,0);
      }
      (*pcRam0000000003ec1950)(lVar1,&stack0xffffffffffffff60);
      return;
    }
  }
  plVar2 = (long *)func_0x00f78af4();
  uVar3 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar2,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x014be9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230));
  return;
}



// ============================================================
// RVA: 0x14be8b8 | Atlas.Gameplay.Usables.PlacementHomingProjectile.HandleMinY
// ============================================================

void Atlas_Gameplay_Usables_PlacementHomingProjectile__HandleMinY
               (undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  if (((*(long *)(param_3 + 0xf8) != 0) &&
      (lVar1 = *(long *)(*(long *)(param_3 + 0xf8) + 0x18), lVar1 != 0)) &&
     (lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar1,0), lVar1 != 0)) {
    /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar1,0);
    if ((*(char *)(param_3 + 0x11c) == '\0') || (*(float *)(param_3 + 0x120) <= param_2)) {
      return;
    }
    if ((*(long *)(param_3 + 0xf8) != 0) &&
       ((lVar1 = *(long *)(*(long *)(param_3 + 0xf8) + 0x18), lVar1 != 0 &&
        (lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar1,0), lVar1 != 0)))) {
      if (pcRam0000000003ec1950 == (code *)0x0) {
        pcRam0000000003ec1950 =
             (code *)func_0x00f789d4("UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)"
                                     ,0);
      }
      (*pcRam0000000003ec1950)(lVar1,&stack0xffffffffffffffd0);
      return;
    }
  }
  plVar2 = (long *)func_0x00f78af4();
  uVar3 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar2,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x014be9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230));
  return;
}



// ============================================================
// RVA: 0x14be968 | Atlas.Gameplay.Usables.PlacementHomingProjectile.CollideWithEnvironment
// ============================================================

void Atlas_Gameplay_Usables_PlacementHomingProjectile__CollideWithEnvironment(long *param_1)

{
  ulong uVar1;
  
  uVar1 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(param_1,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x014be9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
  return;
}



// ============================================================
// RVA: 0x14be9ac | Atlas.Gameplay.Usables.PlacementHomingProjectile.CollideWithFloor
// ============================================================

/* WARNING: Possible PIC construction at 0x014ce554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce5c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014ce59c) */
/* WARNING: Removing unreachable block (ram,0x014ce5ac) */
/* WARNING: Removing unreachable block (ram,0x014ce5b4) */
/* WARNING: Removing unreachable block (ram,0x014ce5bc) */
/* WARNING: Removing unreachable block (ram,0x014ce5c4) */
/* WARNING: Removing unreachable block (ram,0x014ce5c8) */
/* WARNING: Removing unreachable block (ram,0x014ce5e4) */
/* WARNING: Removing unreachable block (ram,0x014ce5ec) */
/* WARNING: Removing unreachable block (ram,0x014ce5f4) */
/* WARNING: Removing unreachable block (ram,0x014ce614) */
/* WARNING: Removing unreachable block (ram,0x014ce624) */
/* WARNING: Removing unreachable block (ram,0x014ce6d4) */
/* WARNING: Removing unreachable block (ram,0x014ce62c) */
/* WARNING: Removing unreachable block (ram,0x014ce638) */
/* WARNING: Removing unreachable block (ram,0x014ce678) */
/* WARNING: Removing unreachable block (ram,0x014ce6a0) */
/* WARNING: Removing unreachable block (ram,0x014ce654) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_Gameplay_Usables_PlacementHomingProjectile__CollideWithFloor
                 (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,
                 long *param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  int extraout_w1;
  undefined1 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *******pppppppuVar13;
  undefined *puVar14;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 extraout_b0_03;
  undefined1 extraout_b0_04;
  undefined1 extraout_b0_05;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  long lStack_1f0;
  long *plStack_1e8;
  undefined8 *******pppppppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 ******ppppppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long lStack_190;
  long *plStack_188;
  undefined8 *****pppppuStack_180;
  undefined *puStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  float fStack_168;
  float fStack_164;
  undefined4 uStack_160;
  float fStack_15c;
  float fStack_158;
  undefined4 uStack_154;
  float fStack_150;
  float fStack_14c;
  undefined4 uStack_148;
  undefined8 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_40;
  undefined *puStack_38;
  
  plVar2 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(param_5,0);
  if (((ulong)plVar2 & 1) != 0) {
    return plVar2;
  }
  (**(code **)(*param_5 + 0x3f8))(param_5,*(undefined8 *)(*param_5 + 0x400));
  if ((bRam0000000003eb4b72 & 1) == 0) {
    func_0x00f78a20(0x3d23990,1,0);
    bRam0000000003eb4b72 = 1;
  }
  lVar12 = param_5[0x19];
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar2 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar12,0,0);
  if (((ulong)plVar2 & 1) != 0) {
    return plVar2;
  }
  lVar12 = param_5[0x19];
  if (lVar12 != 0) {
    if (*(char *)(lVar12 + 0x44) == '\0') {
      return plVar2;
    }
    *(ulong *)(lVar12 + 0x48) = *(ulong *)(lVar12 + 0x48) | 1;
    return plVar2;
  }
  auVar19 = func_0x00f78af4();
  plVar4 = auVar19._8_8_;
  plVar2 = auVar19._0_8_;
  puStack_38 = &Atlas_Gameplay_Usables_ProjectileUsable__EarlyUpdate;
  puStack_40 = (undefined8 *)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b70 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d3ae20);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b70 = 1;
  }
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  if ((*(char *)((long)plVar2 + 300) == '\0') || ((char)plVar2[0xc] != '\0')) {
code_r0x014ce558:
    lVar12 = plVar2[0x19];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar2 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar12,0,0);
    if ((int)plVar2 == 0) {
      return plVar2;
    }
    puVar14 = &UNK_014ce59c;
  }
  else {
    if (plVar4 != (long *)0x0) {
      fVar18 = *(float *)(plVar2 + 0x2c);
      lVar12 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar3 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
            goto code_r0x014ce520;
          }
          piVar10 = piVar10 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014ce520:
      (*(code *)*puVar3)(plVar4,puVar3[1]);
      fVar18 = fVar18 + (float)CONCAT13(extraout_var_13,
                                        CONCAT12(extraout_var_06,CONCAT11(extraout_var,extraout_b0))
                                       );
      *(float *)(plVar2 + 0x2c) = fVar18;
      param_2 = _UNK_033f8508;
      if (_UNK_033f8508 <= fVar18) {
        *(undefined4 *)(plVar2 + 0x2c) = 0;
        uVar6 = 0;
        goto code_r0x01523e20;
      }
      goto code_r0x014ce558;
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar4 = (long *)___cxa_begin_catch();
      lVar12 = *plVar4;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_98,uRam0000000003d328c8);
      if (lVar12 == 0) {
        plVar2 = (long *)(**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230));
        return plVar2;
      }
      func_0x00f78ac0(lVar12,0);
    }
    puVar14 = &Atlas_Gameplay_Usables_ProjectileUsable__UpdateReplicator;
    auVar19 = __Unwind_Resume();
  }
  plVar4 = auVar19._8_8_;
  plVar2 = auVar19._0_8_;
  lVar12 = 0x3eb4000;
  pppuStack_e0 = (undefined8 ***)&puStack_40;
  puStack_d8 = puVar14;
  if ((bRam0000000003eb4b7e & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4b7e = 1;
  }
  if (plVar2[0x19] != 0) {
    plVar5 = (long *)/*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(plVar2[0x19],0);
    if ((int)plVar5 == 0) {
      return plVar5;
    }
    if (plVar4 != (long *)0x0) {
      lVar12 = plVar2[0x19];
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto code_r0x014ce7e4;
          }
          piVar10 = piVar10 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014ce7e4:
      (*(code *)*puVar3)(plVar4,puVar3[1]);
      if ((plVar2[0x1f] != 0) && (lVar8 = *(long *)(plVar2[0x1f] + 0x18), lVar8 != 0)) {
        lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar8,0);
        if (lVar8 != 0) {
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar8,0);
          if ((plVar2[0x1f] != 0) && (lVar8 = *(long *)(plVar2[0x1f] + 0x18), lVar8 != 0)) {
            fVar18 = param_2;
            fVar16 = param_3;
            /*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar8,0);
            if ((plVar2[0x1f] != 0) && (lVar8 = *(long *)(plVar2[0x1f] + 0x18), lVar8 != 0)) {
              fVar15 = fVar18;
              fVar17 = fVar16;
              lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar8,0);
              if ((lVar8 != 0) && (/*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar8,0), lVar12 != 0)) {
                uStack_154 = CONCAT13(extraout_var_17,
                                      CONCAT12(extraout_var_10,
                                               CONCAT11(extraout_var_03,extraout_b0_03)));
                uStack_170 = CONCAT13(extraout_var_14,
                                      CONCAT12(extraout_var_07,
                                               CONCAT11(extraout_var_00,extraout_b0_00)));
                uStack_16c = CONCAT13(extraout_var_15,
                                      CONCAT12(extraout_var_08,
                                               CONCAT11(extraout_var_01,extraout_b0_01)));
                fStack_168 = param_2;
                fStack_164 = param_3;
                uStack_160 = CONCAT13(extraout_var_16,
                                      CONCAT12(extraout_var_09,
                                               CONCAT11(extraout_var_02,extraout_b0_02)));
                fStack_15c = fVar18;
                fStack_158 = fVar16;
                fStack_150 = fVar15;
                fStack_14c = fVar17;
                uStack_148 = param_4;
                /*Core.Services.Replicator$$UpdateTransform*/ func_0x0167f264(lVar12,&uStack_170,0);
                plVar5 = (long *)plVar2[0x19];
                if (plVar5 != (long *)0x0) {
                  if (*(char *)((long)plVar5 + 0x44) != '\0') {
                    return plVar5;
                  }
                  plVar5 = (long *)/*Core.Services.Replicator$$get_RigidBodyVelocity*/ func_0x0167f248(plVar5,0);
                  if (*(char *)((long)plVar2 + 0x15c) == '\0') {
                    if (((float)CONCAT13(extraout_var_18,
                                         CONCAT12(extraout_var_11,
                                                  CONCAT11(extraout_var_04,extraout_b0_04))) ==
                         _UNK_033f7d80 ||
                         (float)CONCAT13(extraout_var_18,
                                         CONCAT12(extraout_var_11,
                                                  CONCAT11(extraout_var_04,extraout_b0_04))) <
                         _UNK_033f7d80) && (fVar17 <= _UNK_033f7d80)) {
                      return plVar5;
                    }
                    *(undefined1 *)((long)plVar2 + 0x15c) = 1;
                    return plVar5;
                  }
                  if (((((float)CONCAT13(extraout_var_18,
                                         CONCAT12(extraout_var_11,
                                                  CONCAT11(extraout_var_04,extraout_b0_04))) <
                         _UNK_033f7d80) && (fVar15 < _UNK_033f7d80)) && (fVar17 < _UNK_033f7d80)) &&
                     (*(char *)((long)plVar2 + 0x12d) != '\0')) {
                    fVar18 = *(float *)(plVar2 + 0x2b);
                    plVar4 = (long *)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
                    fVar18 = fVar18 + (float)CONCAT13(extraout_var_19,
                                                      CONCAT12(extraout_var_12,
                                                               CONCAT11(extraout_var_05,
                                                                        extraout_b0_05)));
                    *(float *)(plVar2 + 0x2b) = fVar18;
                    if (fVar18 < _UNK_033f83ec) {
                      return plVar4;
                    }
code_r0x014ce940:
                    plVar2 = (long *)(**(code **)(*plVar2 + 0x228))
                                               (plVar2,*(undefined8 *)(*plVar2 + 0x230));
                    return plVar2;
                  }
                  if (plVar2[0x19] != 0) {
                    plVar4 = (long *)/*Core.Services.Replicator$$get_VelocityOnlyMode*/ func_0x0167f208(plVar2[0x19],0);
                    if ((int)plVar4 == 0) {
                      *(undefined4 *)(plVar2 + 0x2b) = 0;
                      return plVar4;
                    }
                    goto code_r0x014ce940;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar8 = func_0x00f78af4();
  uStack_1a0 = 0x3d23990;
  puStack_178 = &Atlas_Gameplay_Usables_ProjectileUsable__GetHitNetworkFlag;
  lStack_190 = lVar12;
  pppppuStack_180 = (undefined8 *****)&pppuStack_e0;
  if ((bRam0000000003eb4b76 & 1) == 0) {
    plStack_198 = plVar4;
    plStack_188 = plVar2;
    func_0x00f78a20(0x3d23990);
    auVar19._8_8_ = plStack_198;
    auVar19._0_8_ = plStack_188;
    bRam0000000003eb4b76 = 1;
  }
  plStack_198 = auVar19._8_8_;
  plStack_188 = auVar19._0_8_;
  uVar11 = *(undefined8 *)(lVar8 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar19._8_8_ = plStack_198;
    auVar19._0_8_ = plStack_188;
  }
  plStack_198 = auVar19._8_8_;
  plStack_188 = auVar19._0_8_;
  uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar11,0,0);
  if ((uVar9 & 1) == 0) {
    lVar12 = *(long *)(lVar8 + 200);
    if (lVar12 == 0) {
      plVar4 = (long *)func_0x00f78af4();
      uStack_1d0 = 0x3d23990;
      uStack_1c8 = 0x3d23990;
      puStack_1a8 = &Atlas_Gameplay_Usables_ProjectileUsable__GetHitSyncId;
      uStack_1c0 = uVar11;
      lStack_1b8 = lVar8;
      ppppppuStack_1b0 = &pppppuStack_180;
      if ((bRam0000000003eb4b77 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b77 = 1;
      }
      lVar12 = plVar4[0x19];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = 0;
      uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar12,0);
      if ((uVar9 & 1) == 0) {
        lVar8 = plVar4[0x19];
        if (lVar8 == 0) {
          plVar2 = (long *)func_0x00f78af4();
          plVar1 = &lStack_1f0;
          puStack_1d8 = &Atlas_Gameplay_Usables_ProjectileUsable__Destroy;
          pppppppuVar13 = &pppppppuStack_1e0;
          lStack_1f0 = lVar12;
          plStack_1e8 = plVar4;
          pppppppuStack_1e0 = &ppppppuStack_1b0;
          plVar4 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar2,0);
          if (((ulong)plVar4 & 1) == 0) {
            plVar4 = (long *)/*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar2,0);
            if ((plVar4 == (long *)0x0) || (plVar4[0x18] == 0)) {
              puVar14 = &Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
              auVar20 = func_0x00f78af4();
code_r0x014ceb60:
              plVar4 = auVar20._0_8_;
              *(long *)((long)plVar1 + -0x20) = lVar12;
              *(long **)((long)plVar1 + -0x18) = plVar2;
              *(undefined8 ********)((long)plVar1 + -0x10) = pppppppuVar13;
              *(undefined **)((long)plVar1 + -8) = puVar14;
              if ((*(char *)((long)plVar4 + 300) != '\0') == uVar7) {
                return plVar4;
              }
              if (auVar20._8_4_ != 0) {
                (**(code **)(*plVar4 + 0x448))(plVar4,*(undefined8 *)(*plVar4 + 0x450));
              }
              *(char *)((long)plVar4 + 300) = (char)uVar7;
              if (((plVar4[9] != 0) && (lVar12 = *(long *)(plVar4[9] + 0x28), lVar12 != 0)) &&
                 (lVar12 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar12,0), lVar12 != 0)) {
                *(undefined8 *)((long)plVar1 + -0x30) = 0x3d23990;
                *(undefined8 *)((long)plVar1 + -0x28) = 0x3d23990;
                *(undefined8 *)((long)plVar1 + -0x20) = *(undefined8 *)((long)plVar1 + -0x20);
                *(undefined8 *)((long)plVar1 + -0x18) = *(undefined8 *)((long)plVar1 + -0x18);
                *(undefined8 *)((long)plVar1 + -0x10) = *(undefined8 *)((long)plVar1 + -0x10);
                *(undefined8 *)((long)plVar1 + -8) = *(undefined8 *)((long)plVar1 + -8);
                if (pcRam0000000003ebf4c0 == (code *)0x0) {
                  pcRam0000000003ebf4c0 =
                       (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
                }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar2 = (long *)(*pcRam0000000003ebf4c0)(lVar12,uVar7 ^ 1);
                return plVar2;
              }
              plVar2 = (long *)func_0x00f78af4();
              return plVar2;
            }
            if (*(char *)(plVar4[0x18] + 0x50) == '\0') {
              auVar20._8_4_ = 1;
              auVar20._0_8_ = plVar2;
              uVar7 = 1;
              plVar1 = &uStack_1d0;
              plVar2 = plStack_1e8;
              lVar12 = lStack_1f0;
              pppppppuVar13 = pppppppuStack_1e0;
              puVar14 = puStack_1d8;
              goto code_r0x014ceb60;
            }
          }
          if ((char)plVar2[0xc] != '\0') {
            return plVar4;
          }
          uVar6 = 1;
code_r0x01523e20:
          *(undefined1 *)(plVar2 + 0xc) = 1;
          *(undefined1 *)((long)plVar2 + 0x61) = uVar6;
          return plVar2;
        }
        if (*(char *)(lVar8 + 0x44) == '\0') {
          return (long *)(*(ulong *)(lVar8 + 0x28) >>
                         ((ulong)*(uint *)((long)plVar4 + 0x19c) & 0x3f));
        }
      }
      return (long *)0xffffffff;
    }
    if (*(char *)(lVar12 + 0x44) == '\0') {
      return (long *)(ulong)((*(ulong *)(lVar12 + 0x28) >> ((ulong)*(uint *)(lVar8 + 0x198) & 0x3f)
                             & 0xff) == 1);
    }
  }
  return (long *)0x0;
}



// ============================================================
// RVA: 0x14bea00 | Atlas.Gameplay.Usables.PlacementHomingProjectile..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Usables_PlacementHomingProjectile___ctor(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 0xd8) = uVar1;
  *(undefined1 *)(param_1 + 0x12d) = 1;
  *(undefined8 *)(param_1 + 0x198) = _UNK_033f8520;
  return;
}



