// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartVisualBehaviour

// ============================================================
// RVA: 0x15e5634 | Atlas.Gameplay.Kart.KartVisualBehaviour.SetHopBoostSuccessVFX
// ============================================================

/* WARNING: Possible PIC construction at 0x015e57f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e5870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e58ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e7e80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e7f50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015e58f0) */

ulong Atlas_Gameplay_Kart_KartVisualBehaviour__SetHopBoostSuccessVFX(long param_1,ulong param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  long extraout_x1_00;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulong unaff_x19;
  long *plVar11;
  long *plVar12;
  long unaff_x20;
  int *piVar13;
  ulong unaff_x21;
  undefined8 uVar14;
  long unaff_x22;
  uint uVar15;
  long lVar16;
  undefined8 ***unaff_x29;
  undefined8 ******ppppppuVar17;
  undefined *unaff_x30;
  undefined *puVar18;
  float extraout_s0;
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  long lStack_230;
  undefined8 uStack_228;
  int *piStack_220;
  long *plStack_218;
  undefined8 *****pppppuStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
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
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 ****ppppuStack_e0;
  undefined *puStack_d8;
  undefined8 ***pppuStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [4];
  uint uStack_9c;
  uint uStack_98;
  int iStack_94;
  undefined8 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb53e4 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb53e4 = 1;
  }
  uVar14 = *(undefined8 *)(param_1 + 0xc0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar15 = 0;
  uVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar14,0);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  lVar5 = *(long *)(param_1 + 0xc0);
  if (lVar5 != 0) {
code_r0x0322ef1c:
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 ****)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*pcRam0000000003ebf4c0)(lVar5,param_2);
    return uVar4;
  }
  uStack_98 = uVar15;
  auVar20 = func_0x00f78af4();
  iStack_94 = auVar20._8_4_;
  lVar5 = auVar20._0_8_;
  puStack_38 = &Atlas_Gameplay_Kart_KartVisualBehaviour__SetDriftLevel;
  unaff_x29 = (undefined8 ***)&puStack_40;
  puStack_40 = (undefined8 *)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb53df & 1) == 0) {
    uVar14 = func_0x00f78a20(0x3d23990);
    auVar20._8_4_ = iStack_94;
    auVar20._0_8_ = uVar14;
    bRam0000000003eb53df = 1;
  }
  uVar4 = auVar20._0_8_;
  if (*(long *)(lVar5 + 0x80) != 0) {
    lVar7 = *(long *)(lVar5 + 0x80);
    if (*(long *)(lVar5 + 0x1a0) != 0) {
      lVar7 = *(long *)(lVar5 + 0x1a0);
    }
    *(long *)(lVar5 + 0x1a8) = lVar7;
    uVar15 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar15) {
      uVar10 = 0;
      uStack_9c = uStack_98 ^ 1;
      do {
        iStack_94 = auVar20._8_4_;
        if (uVar15 <= uVar10) {
code_r0x015e58b4:
          uVar14 = func_0x00f78b24();
          func_0x00f78ac0(uVar14,0);
code_r0x015e58c0:
          lVar5 = func_0x00f78af4();
          puStack_a8 = &Atlas_Gameplay_Kart_KartVisualBehaviour__UpdateKickUp;
          ppppuStack_e0 = &pppuStack_b0;
          lVar7 = *(long *)(lVar5 + 0x98);
          plVar12 = (long *)(lVar5 + 0x138);
          piVar13 = (int *)(lVar5 + 0x130);
          puVar2 = &uStack_200;
          plVar1 = &uStack_200;
          puStack_d8 = &UNK_015e58f0;
          ppppppuVar17 = (undefined8 ******)&ppppuStack_e0;
          pppuStack_b0 = unaff_x29;
          if ((bRam0000000003eb53e6 & 1) == 0) {
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb53e6 = 1;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar7,0,0);
          if ((uVar4 & 1) != 0) {
            return uVar4;
          }
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_168 = 0;
          uStack_170 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
          uStack_188 = 0;
          uStack_190 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_1a8 = 0;
          uStack_1b0 = 0;
          uStack_198 = 0;
          uStack_1a0 = 0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          uStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          uStack_1e0 = 0;
          lStack_1f8 = 0;
          uStack_200 = 0;
          iVar3 = 0;
          if (((int)extraout_x1 == 0) || (extraout_s0 < 10.0)) goto code_r0x015e7d98;
          if (lVar7 == 0) {
            func_0x00f78af4();
            goto code_r0x015e7ebc;
          }
          lVar5 = *(long *)(lVar7 + 0x18);
          if ((lVar5 == 0) || (uVar15 = *(uint *)(lVar5 + 0x18), (int)uVar15 < 1))
          goto code_r0x015e7d94;
          uVar10 = 0;
          puVar9 = (undefined8 *)(lVar5 + 0x20);
          goto code_r0x015e7d24;
        }
        lVar5 = lVar7 + (long)(int)uVar10 * 0x18;
        unaff_x19 = *(ulong *)(lVar5 + 0x28);
        if (unaff_x19 == 0) goto code_r0x015e58c0;
        lVar16 = *(long *)(lVar5 + 0x30);
        uVar15 = (uint)(*(int *)(lVar5 + 0x20) == iStack_94);
        if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
          uVar4 = 0;
          param_2 = (ulong)(uVar15 & uStack_98);
          uVar8 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
          unaff_x20 = unaff_x19 + 0x20;
          do {
            if (uVar8 <= uVar4) goto code_r0x015e58b4;
            lVar5 = *(long *)(unaff_x20 + uVar4 * 8);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar14 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,0);
            auVar20._8_4_ = iStack_94;
            auVar20._0_8_ = uVar14;
            if ((int)uVar14 != 0) {
              if (lVar5 == 0) goto code_r0x015e58c0;
              unaff_x30 = &UNK_015e57f4;
              register0x00000008 = (BADSPACEBASE *)auStack_a0;
              unaff_x21 = param_2;
              unaff_x22 = lVar5;
              goto code_r0x0322ef1c;
            }
            uVar4 = uVar4 + 1;
            uVar8 = (ulong)*(uint *)(unaff_x19 + 0x18);
          } while ((long)uVar4 < (long)(int)*(uint *)(unaff_x19 + 0x18));
        }
        iStack_94 = auVar20._8_4_;
        if (lVar16 == 0) goto code_r0x015e58c0;
        if (0 < (int)*(ulong *)(lVar16 + 0x18)) {
          unaff_x19 = 0;
          param_2 = (ulong)(uVar15 & uStack_9c);
          uVar4 = *(ulong *)(lVar16 + 0x18) & 0xffffffff;
          unaff_x20 = lVar16 + 0x20;
          do {
            if (uVar4 <= unaff_x19) goto code_r0x015e58b4;
            lVar5 = *(long *)(unaff_x20 + unaff_x19 * 8);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar14 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,0);
            auVar20._8_4_ = iStack_94;
            auVar20._0_8_ = uVar14;
            if ((int)uVar14 != 0) {
              if (lVar5 == 0) goto code_r0x015e58c0;
              unaff_x30 = &UNK_015e5874;
              register0x00000008 = (BADSPACEBASE *)auStack_a0;
              unaff_x21 = param_2;
              unaff_x22 = lVar5;
              goto code_r0x0322ef1c;
            }
            unaff_x19 = unaff_x19 + 1;
            uVar4 = (ulong)*(uint *)(lVar16 + 0x18);
          } while ((long)unaff_x19 < (long)(int)*(uint *)(lVar16 + 0x18));
        }
        uVar4 = auVar20._0_8_;
        uVar10 = uVar10 + 1;
        uVar15 = *(uint *)(lVar7 + 0x18);
      } while ((int)uVar10 < (int)uVar15);
    }
  }
  return uVar4;
  while( true ) {
    uVar10 = uVar10 + 1;
    puVar9 = puVar9 + 0x1a;
    if (uVar15 == uVar10) break;
code_r0x015e7d24:
    if (*(int *)(lVar5 + (long)(int)uVar10 * 0xd0 + 0x20) == (int)extraout_x1) {
      if (-1 < (int)uVar10) {
        if (uVar15 <= uVar10) goto code_r0x015e7ebc;
        uStack_158 = puVar9[0x15];
        uStack_160 = puVar9[0x14];
        uStack_148 = puVar9[0x17];
        uStack_150 = puVar9[0x16];
        uStack_138 = puVar9[0x19];
        uStack_140 = puVar9[0x18];
        uStack_198 = puVar9[0xd];
        uStack_1a0 = puVar9[0xc];
        uStack_188 = puVar9[0xf];
        uStack_190 = puVar9[0xe];
        uStack_178 = puVar9[0x11];
        uStack_180 = puVar9[0x10];
        uStack_168 = puVar9[0x13];
        uStack_170 = puVar9[0x12];
        uStack_1d8 = puVar9[5];
        uStack_1e0 = puVar9[4];
        uStack_1c8 = puVar9[7];
        uStack_1d0 = puVar9[6];
        uStack_1b8 = puVar9[9];
        uStack_1c0 = puVar9[8];
        uStack_1a8 = puVar9[0xb];
        uStack_1b0 = puVar9[10];
        lStack_1f8 = puVar9[1];
        uStack_200 = *puVar9;
        uStack_1e8 = puVar9[3];
        uStack_1f0 = puVar9[2];
        iVar3 = (int)uStack_200;
        goto code_r0x015e7d98;
      }
      break;
    }
  }
code_r0x015e7d94:
  iVar3 = 0;
code_r0x015e7d98:
  if (iVar3 != *piVar13) {
    if ((char)uStack_1e0 != '\0') {
      /*Atlas.Gameplay.Kart.KartVisualBehaviour$$SetStartColour*/ func_0x015e80f4(uVar4,lStack_1f8,&uStack_1d8);
      uVar14 = uStack_1f0;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar14,0,0);
      if ((int)uVar6 != 0) {
        /*Atlas.Gameplay.Kart.KartVisualBehaviour$$SetStartColour*/ func_0x015e80f4(uVar6,uVar14,&uStack_1a0);
      }
      uVar14 = uStack_1e8;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar14,0,0);
      if ((int)uVar6 != 0) {
        /*Atlas.Gameplay.Kart.KartVisualBehaviour$$SetStartColour*/ func_0x015e80f4(uVar6,uVar14,&uStack_168);
      }
    }
    *piVar13 = iVar3;
  }
  lVar5 = lStack_1f8;
  lVar7 = *plVar12;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,lVar7,0);
  if ((int)uVar4 != 0) {
    lVar7 = *plVar12;
    if (lVar7 != 0) {
      puVar18 = &UNK_015e7e84;
code_r0x03298a54:
      *(long *)((long)puVar2 + -0x20) = lVar5;
      *(long **)((long)puVar2 + -0x18) = plVar12;
      *(undefined8 *******)((long)puVar2 + -0x10) = ppppppuVar17;
      *(undefined **)((long)puVar2 + -8) = puVar18;
      if (pcRam0000000003ec2158 == (code *)0x0) {
        pcRam0000000003ec2158 =
             (code *)func_0x00f789d4("UnityEngine.ParticleSystem::Stop(System.Boolean,UnityEngine.ParticleSystemStopBehavior)"
                                     ,0);
      }
                    /* WARNING: Could not recover jumptable at 0x03298a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*pcRam0000000003ec2158)(lVar7,1,1);
      return uVar4;
    }
    uVar4 = 0;
    if (lVar5 != 0) {
      uVar4 = /*UnityEngine.ParticleSystem$$Play*/ func_0x032988d0(lVar5,0);
    }
    *plVar12 = lVar5;
  }
  return uVar4;
code_r0x015e7ebc:
  uVar14 = func_0x00f78b24();
  auVar19 = func_0x00f78ac0(uVar14,0);
  plVar11 = auVar19._0_8_;
  puStack_208 = &Atlas_Gameplay_Kart_KartVisualBehaviour__ConfigureEffectsForPlayer;
  lStack_230 = lVar7;
  uStack_228 = extraout_x1;
  piStack_220 = piVar13;
  plStack_218 = plVar12;
  pppppuStack_210 = ppppppuVar17;
  if ((bRam0000000003eb53e2 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb53e2 = 1;
  }
  uVar4 = /*Core.Networking.NetworkPlayer$$IsRemote*/ func_0x0165aba0(auVar19._8_8_,0);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  piVar13 = (int *)plVar11[0x11];
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(piVar13,0);
  if (iVar3 == 0) {
    lVar5 = plVar11[0x12];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar5,0);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    lVar5 = plVar11[0x12];
    plVar11 = plStack_218;
    piVar13 = piStack_220;
    ppppppuVar17 = (undefined8 ******)pppppuStack_210;
    puVar18 = puStack_208;
  }
  else {
    lVar5 = plVar11[0x11];
    plVar1 = &lStack_230;
    ppppppuVar17 = &pppppuStack_210;
    puVar18 = &UNK_015e7f54;
  }
  iVar3 = 0x28;
  puVar2 = (undefined8 *)((long)plVar1 + -0xb0);
  *(int **)((long)plVar1 + -0x20) = piVar13;
  *(long **)((long)plVar1 + -0x18) = plVar11;
  *(undefined8 *******)((long)plVar1 + -0x10) = ppppppuVar17;
  *(undefined **)((long)plVar1 + -8) = puVar18;
  if (lVar5 != 0) {
    uVar14 = /*UnityEngine.ParticleSystem$$get_emission*/ func_0x032965e4(lVar5,0);
    *(undefined8 *)((long)plVar1 + -0x28) = uVar14;
    /*UnityEngine.ParticleSystem.MinMaxCurve$$op_Implicit*/ func_0x032967b8((undefined1 *)((long)plVar1 + -0x48),0x42200000,0);
    *(undefined8 *)((long)plVar1 + -0x68) = *(undefined8 *)((long)plVar1 + -0x40);
    *(undefined8 *)((long)plVar1 + -0x70) = *(undefined8 *)((long)plVar1 + -0x48);
    *(undefined8 *)((long)plVar1 + -0x58) = *(undefined8 *)((long)plVar1 + -0x30);
    *(undefined8 *)((long)plVar1 + -0x60) = *(undefined8 *)((long)plVar1 + -0x38);
    /*UnityEngine.ParticleSystem.EmissionModule$$set_rateOverTime*/ func_0x032967cc((undefined1 *)((long)plVar1 + -0x28),(undefined1 *)((long)plVar1 + -0x70),0);
    /*UnityEngine.ParticleSystem.MinMaxCurve$$op_Implicit*/ func_0x032967b8((undefined1 *)((long)plVar1 + -0x90),0,0);
    *(undefined8 *)((long)plVar1 + -0xa8) = *(undefined8 *)((long)plVar1 + -0x88);
    *(undefined8 *)((long)plVar1 + -0xb0) = *(undefined8 *)((long)plVar1 + -0x90);
    *(undefined8 *)((long)plVar1 + -0x98) = *(undefined8 *)((long)plVar1 + -0x78);
    *(undefined8 *)((long)plVar1 + -0xa0) = *(undefined8 *)((long)plVar1 + -0x80);
    uVar4 = /*UnityEngine.ParticleSystem.EmissionModule$$set_rateOverDistance*/ func_0x0329b0fc((undefined1 *)((long)plVar1 + -0x28),
                            (undefined1 *)((long)plVar1 + -0xb0),0);
    return uVar4;
  }
  func_0x00f78af4();
  *(int **)((long)plVar1 + -0xd0) = piVar13;
  *(long **)((long)plVar1 + -200) = plVar11;
  *(undefined1 **)((long)plVar1 + -0xc0) = (undefined1 *)((long)plVar1 + -0x10);
  *(undefined **)((long)plVar1 + -0xb8) =
       &Atlas_Gameplay_Kart_KartVisualBehaviour__SetParticleSystemEmitting;
  if (iVar3 == 0) {
    if (extraout_x1_00 == 0) goto code_r0x015e80b0;
    uVar4 = /*UnityEngine.ParticleSystem$$get_isEmitting*/ func_0x032977f0(extraout_x1_00,0);
    if ((int)uVar4 != 0) {
      ppppppuVar17 = *(undefined8 *******)((long)plVar1 + -0xc0);
      puVar18 = *(undefined **)((long)plVar1 + -0xb8);
      lVar5 = *(long *)((long)plVar1 + -0xd0);
      plVar12 = *(long **)((long)plVar1 + -200);
      lVar7 = extraout_x1_00;
      goto code_r0x03298a54;
    }
  }
  else {
    if (extraout_x1_00 == 0) {
code_r0x015e80b0:
      auVar20 = func_0x00f78af4();
      lVar5 = *(long *)(auVar20._0_8_ + 0x18);
      if ((lVar5 != 0) && (0 < (int)*(uint *)(lVar5 + 0x18))) {
        uVar4 = 0;
        do {
          if (*(int *)(lVar5 + (long)(int)uVar4 * 0xd0 + 0x20) == auVar20._8_4_) {
            return uVar4;
          }
          uVar15 = (int)uVar4 + 1;
          uVar4 = (ulong)uVar15;
        } while (*(uint *)(lVar5 + 0x18) != uVar15);
      }
      return 0xffffffff;
    }
    uVar4 = /*UnityEngine.ParticleSystem$$get_isEmitting*/ func_0x032977f0(extraout_x1_00,0);
    if ((uVar4 & 1) == 0) {
      *(undefined8 *)((long)plVar1 + -0xd0) = *(undefined8 *)((long)plVar1 + -0xd0);
      *(undefined8 *)((long)plVar1 + -200) = *(undefined8 *)((long)plVar1 + -200);
      *(undefined8 *)((long)plVar1 + -0xc0) = *(undefined8 *)((long)plVar1 + -0xc0);
      *(undefined8 *)((long)plVar1 + -0xb8) = *(undefined8 *)((long)plVar1 + -0xb8);
      if (pcRam0000000003ec2148 == (code *)0x0) {
        pcRam0000000003ec2148 =
             (code *)func_0x00f789d4("UnityEngine.ParticleSystem::Play(System.Boolean)",0);
      }
                    /* WARNING: Could not recover jumptable at 0x03298910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*pcRam0000000003ec2148)(extraout_x1_00,1);
      return uVar4;
    }
  }
  return uVar4;
}



// ============================================================
// RVA: 0x15e56d8 | Atlas.Gameplay.Kart.KartVisualBehaviour.SetDriftLevel
// ============================================================

/* WARNING: Possible PIC construction at 0x015e58ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e7e80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e7f50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015e58f0) */

ulong Atlas_Gameplay_Kart_KartVisualBehaviour__SetDriftLevel(ulong param_1,int param_2,uint param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  long extraout_x1_00;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  int *piVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  undefined8 ******ppppppuVar20;
  undefined *puVar21;
  float extraout_s0;
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  long lStack_200;
  undefined8 uStack_1f8;
  int *piStack_1f0;
  long *plStack_1e8;
  undefined8 *****pppppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
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
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 ****ppppuStack_b0;
  undefined *puStack_a8;
  undefined8 ***pppuStack_80;
  undefined *puStack_78;
  uint uStack_6c;
  uint uStack_68;
  int iStack_64;
  
  uVar5 = param_1;
  uStack_68 = param_3;
  iStack_64 = param_2;
  if ((bRam0000000003eb53df & 1) == 0) {
    uVar5 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb53df = 1;
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    lVar6 = *(long *)(param_1 + 0x80);
    if (*(long *)(param_1 + 0x1a0) != 0) {
      lVar6 = *(long *)(param_1 + 0x1a0);
    }
    *(long *)(param_1 + 0x1a8) = lVar6;
    uVar18 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar18) {
      uVar12 = 0;
      uStack_6c = uStack_68 ^ 1;
      do {
        if (uVar18 <= uVar12) {
LAB_015e58b4:
          uVar8 = func_0x00f78b24();
          func_0x00f78ac0(uVar8,0);
LAB_015e58c0:
          lVar6 = func_0x00f78af4();
          puStack_78 = &Atlas_Gameplay_Kart_KartVisualBehaviour__UpdateKickUp;
          ppppuStack_b0 = &pppuStack_80;
          lVar9 = *(long *)(lVar6 + 0x98);
          plVar15 = (long *)(lVar6 + 0x138);
          piVar16 = (int *)(lVar6 + 0x130);
          puVar3 = &uStack_1d0;
          plVar2 = &uStack_1d0;
          puStack_a8 = &UNK_015e58f0;
          ppppppuVar20 = (undefined8 ******)&ppppuStack_b0;
          pppuStack_80 = (undefined8 ***)&stack0xfffffffffffffff0;
          if ((bRam0000000003eb53e6 & 1) == 0) {
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb53e6 = 1;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar9,0,0);
          if ((uVar5 & 1) != 0) {
            return uVar5;
          }
          uStack_118 = 0;
          uStack_120 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_168 = 0;
          uStack_170 = 0;
          uStack_198 = 0;
          uStack_1a0 = 0;
          uStack_188 = 0;
          uStack_190 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          uStack_1a8 = 0;
          uStack_1b0 = 0;
          lStack_1c8 = 0;
          uStack_1d0 = 0;
          iVar4 = 0;
          if (((int)extraout_x1 == 0) || (extraout_s0 < 10.0)) goto code_r0x015e7d98;
          if (lVar9 == 0) {
            func_0x00f78af4();
            goto code_r0x015e7ebc;
          }
          lVar6 = *(long *)(lVar9 + 0x18);
          if ((lVar6 == 0) || (uVar18 = *(uint *)(lVar6 + 0x18), (int)uVar18 < 1))
          goto code_r0x015e7d94;
          uVar12 = 0;
          puVar11 = (undefined8 *)(lVar6 + 0x20);
          goto code_r0x015e7d24;
        }
        lVar9 = lVar6 + (long)(int)uVar12 * 0x18;
        lVar13 = *(long *)(lVar9 + 0x28);
        if (lVar13 == 0) goto LAB_015e58c0;
        lVar19 = *(long *)(lVar9 + 0x30);
        uVar18 = (uint)(*(int *)(lVar9 + 0x20) == iStack_64);
        if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
          uVar17 = 0;
          uVar1 = uVar18 & uStack_68;
          uVar10 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
          do {
            if (uVar10 <= uVar17) goto LAB_015e58b4;
            lVar9 = *(long *)(lVar13 + 0x20 + uVar17 * 8);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0);
            if ((int)uVar5 != 0) {
              if (lVar9 == 0) goto LAB_015e58c0;
              uVar5 = /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar9,uVar1);
            }
            uVar17 = uVar17 + 1;
            uVar10 = (ulong)*(uint *)(lVar13 + 0x18);
          } while ((long)uVar17 < (long)(int)*(uint *)(lVar13 + 0x18));
        }
        if (lVar19 == 0) goto LAB_015e58c0;
        if (0 < (int)*(ulong *)(lVar19 + 0x18)) {
          uVar17 = 0;
          uVar18 = uVar18 & uStack_6c;
          uVar10 = *(ulong *)(lVar19 + 0x18) & 0xffffffff;
          do {
            if (uVar10 <= uVar17) goto LAB_015e58b4;
            lVar9 = *(long *)(lVar19 + 0x20 + uVar17 * 8);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0);
            if ((int)uVar5 != 0) {
              if (lVar9 == 0) goto LAB_015e58c0;
              uVar5 = /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar9,uVar18);
            }
            uVar17 = uVar17 + 1;
            uVar10 = (ulong)*(uint *)(lVar19 + 0x18);
          } while ((long)uVar17 < (long)(int)*(uint *)(lVar19 + 0x18));
        }
        uVar12 = uVar12 + 1;
        uVar18 = *(uint *)(lVar6 + 0x18);
      } while ((int)uVar12 < (int)uVar18);
    }
  }
  return uVar5;
  while( true ) {
    uVar12 = uVar12 + 1;
    puVar11 = puVar11 + 0x1a;
    if (uVar18 == uVar12) break;
code_r0x015e7d24:
    if (*(int *)(lVar6 + (long)(int)uVar12 * 0xd0 + 0x20) == (int)extraout_x1) {
      if (-1 < (int)uVar12) {
        if (uVar18 <= uVar12) goto code_r0x015e7ebc;
        uStack_128 = puVar11[0x15];
        uStack_130 = puVar11[0x14];
        uStack_118 = puVar11[0x17];
        uStack_120 = puVar11[0x16];
        uStack_108 = puVar11[0x19];
        uStack_110 = puVar11[0x18];
        uStack_168 = puVar11[0xd];
        uStack_170 = puVar11[0xc];
        uStack_158 = puVar11[0xf];
        uStack_160 = puVar11[0xe];
        uStack_148 = puVar11[0x11];
        uStack_150 = puVar11[0x10];
        uStack_138 = puVar11[0x13];
        uStack_140 = puVar11[0x12];
        uStack_1a8 = puVar11[5];
        uStack_1b0 = puVar11[4];
        uStack_198 = puVar11[7];
        uStack_1a0 = puVar11[6];
        uStack_188 = puVar11[9];
        uStack_190 = puVar11[8];
        uStack_178 = puVar11[0xb];
        uStack_180 = puVar11[10];
        lStack_1c8 = puVar11[1];
        uStack_1d0 = *puVar11;
        uStack_1b8 = puVar11[3];
        uStack_1c0 = puVar11[2];
        iVar4 = (int)uStack_1d0;
        goto code_r0x015e7d98;
      }
      break;
    }
  }
code_r0x015e7d94:
  iVar4 = 0;
code_r0x015e7d98:
  if (iVar4 != *piVar16) {
    if ((char)uStack_1b0 != '\0') {
      /*Atlas.Gameplay.Kart.KartVisualBehaviour$$SetStartColour*/ func_0x015e80f4(uVar5,lStack_1c8,&uStack_1a8);
      uVar8 = uStack_1c0;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
      if ((int)uVar7 != 0) {
        /*Atlas.Gameplay.Kart.KartVisualBehaviour$$SetStartColour*/ func_0x015e80f4(uVar7,uVar8,&uStack_170);
      }
      uVar8 = uStack_1b8;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
      if ((int)uVar7 != 0) {
        /*Atlas.Gameplay.Kart.KartVisualBehaviour$$SetStartColour*/ func_0x015e80f4(uVar7,uVar8,&uStack_138);
      }
    }
    *piVar16 = iVar4;
  }
  lVar6 = lStack_1c8;
  lVar9 = *plVar15;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar6,lVar9,0);
  if ((int)uVar5 != 0) {
    lVar9 = *plVar15;
    if (lVar9 != 0) {
      puVar21 = &UNK_015e7e84;
code_r0x03298a54:
      *(long *)((long)puVar3 + -0x20) = lVar6;
      *(long **)((long)puVar3 + -0x18) = plVar15;
      *(undefined8 *******)((long)puVar3 + -0x10) = ppppppuVar20;
      *(undefined **)((long)puVar3 + -8) = puVar21;
      if (pcRam0000000003ec2158 == (code *)0x0) {
        pcRam0000000003ec2158 =
             (code *)func_0x00f789d4("UnityEngine.ParticleSystem::Stop(System.Boolean,UnityEngine.ParticleSystemStopBehavior)"
                                     ,0);
      }
                    /* WARNING: Could not recover jumptable at 0x03298a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*pcRam0000000003ec2158)(lVar9,1,1);
      return uVar5;
    }
    uVar5 = 0;
    if (lVar6 != 0) {
      uVar5 = /*UnityEngine.ParticleSystem$$Play*/ func_0x032988d0(lVar6,0);
    }
    *plVar15 = lVar6;
  }
  return uVar5;
code_r0x015e7ebc:
  uVar8 = func_0x00f78b24();
  auVar22 = func_0x00f78ac0(uVar8,0);
  plVar14 = auVar22._0_8_;
  puStack_1d8 = &Atlas_Gameplay_Kart_KartVisualBehaviour__ConfigureEffectsForPlayer;
  lStack_200 = lVar9;
  uStack_1f8 = extraout_x1;
  piStack_1f0 = piVar16;
  plStack_1e8 = plVar15;
  pppppuStack_1e0 = ppppppuVar20;
  if ((bRam0000000003eb53e2 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb53e2 = 1;
  }
  uVar5 = /*Core.Networking.NetworkPlayer$$IsRemote*/ func_0x0165aba0(auVar22._8_8_,0);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  piVar16 = (int *)plVar14[0x11];
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(piVar16,0);
  if (iVar4 == 0) {
    lVar6 = plVar14[0x12];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar6,0);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    lVar6 = plVar14[0x12];
    plVar14 = plStack_1e8;
    piVar16 = piStack_1f0;
    ppppppuVar20 = (undefined8 ******)pppppuStack_1e0;
    puVar21 = puStack_1d8;
  }
  else {
    lVar6 = plVar14[0x11];
    plVar2 = &lStack_200;
    ppppppuVar20 = &pppppuStack_1e0;
    puVar21 = &UNK_015e7f54;
  }
  iVar4 = 0x28;
  puVar3 = (undefined8 *)((long)plVar2 + -0xb0);
  *(int **)((long)plVar2 + -0x20) = piVar16;
  *(long **)((long)plVar2 + -0x18) = plVar14;
  *(undefined8 *******)((long)plVar2 + -0x10) = ppppppuVar20;
  *(undefined **)((long)plVar2 + -8) = puVar21;
  if (lVar6 != 0) {
    uVar8 = /*UnityEngine.ParticleSystem$$get_emission*/ func_0x032965e4(lVar6,0);
    *(undefined8 *)((long)plVar2 + -0x28) = uVar8;
    /*UnityEngine.ParticleSystem.MinMaxCurve$$op_Implicit*/ func_0x032967b8((undefined1 *)((long)plVar2 + -0x48),0x42200000,0);
    *(undefined8 *)((long)plVar2 + -0x68) = *(undefined8 *)((long)plVar2 + -0x40);
    *(undefined8 *)((long)plVar2 + -0x70) = *(undefined8 *)((long)plVar2 + -0x48);
    *(undefined8 *)((long)plVar2 + -0x58) = *(undefined8 *)((long)plVar2 + -0x30);
    *(undefined8 *)((long)plVar2 + -0x60) = *(undefined8 *)((long)plVar2 + -0x38);
    /*UnityEngine.ParticleSystem.EmissionModule$$set_rateOverTime*/ func_0x032967cc((undefined1 *)((long)plVar2 + -0x28),(undefined1 *)((long)plVar2 + -0x70),0);
    /*UnityEngine.ParticleSystem.MinMaxCurve$$op_Implicit*/ func_0x032967b8((undefined1 *)((long)plVar2 + -0x90),0,0);
    *(undefined8 *)((long)plVar2 + -0xa8) = *(undefined8 *)((long)plVar2 + -0x88);
    *(undefined8 *)((long)plVar2 + -0xb0) = *(undefined8 *)((long)plVar2 + -0x90);
    *(undefined8 *)((long)plVar2 + -0x98) = *(undefined8 *)((long)plVar2 + -0x78);
    *(undefined8 *)((long)plVar2 + -0xa0) = *(undefined8 *)((long)plVar2 + -0x80);
    uVar5 = /*UnityEngine.ParticleSystem.EmissionModule$$set_rateOverDistance*/ func_0x0329b0fc((undefined1 *)((long)plVar2 + -0x28),
                            (undefined1 *)((long)plVar2 + -0xb0),0);
    return uVar5;
  }
  func_0x00f78af4();
  *(int **)((long)plVar2 + -0xd0) = piVar16;
  *(long **)((long)plVar2 + -200) = plVar14;
  *(undefined1 **)((long)plVar2 + -0xc0) = (undefined1 *)((long)plVar2 + -0x10);
  *(undefined **)((long)plVar2 + -0xb8) =
       &Atlas_Gameplay_Kart_KartVisualBehaviour__SetParticleSystemEmitting;
  if (iVar4 == 0) {
    if (extraout_x1_00 == 0) goto code_r0x015e80b0;
    uVar5 = /*UnityEngine.ParticleSystem$$get_isEmitting*/ func_0x032977f0(extraout_x1_00,0);
    if ((int)uVar5 != 0) {
      ppppppuVar20 = *(undefined8 *******)((long)plVar2 + -0xc0);
      puVar21 = *(undefined **)((long)plVar2 + -0xb8);
      lVar6 = *(long *)((long)plVar2 + -0xd0);
      plVar15 = *(long **)((long)plVar2 + -200);
      lVar9 = extraout_x1_00;
      goto code_r0x03298a54;
    }
  }
  else {
    if (extraout_x1_00 == 0) {
code_r0x015e80b0:
      auVar23 = func_0x00f78af4();
      lVar6 = *(long *)(auVar23._0_8_ + 0x18);
      if ((lVar6 != 0) && (0 < (int)*(uint *)(lVar6 + 0x18))) {
        uVar5 = 0;
        do {
          if (*(int *)(lVar6 + (long)(int)uVar5 * 0xd0 + 0x20) == auVar23._8_4_) {
            return uVar5;
          }
          uVar18 = (int)uVar5 + 1;
          uVar5 = (ulong)uVar18;
        } while (*(uint *)(lVar6 + 0x18) != uVar18);
      }
      return 0xffffffff;
    }
    uVar5 = /*UnityEngine.ParticleSystem$$get_isEmitting*/ func_0x032977f0(extraout_x1_00,0);
    if ((uVar5 & 1) == 0) {
      *(undefined8 *)((long)plVar2 + -0xd0) = *(undefined8 *)((long)plVar2 + -0xd0);
      *(undefined8 *)((long)plVar2 + -200) = *(undefined8 *)((long)plVar2 + -200);
      *(undefined8 *)((long)plVar2 + -0xc0) = *(undefined8 *)((long)plVar2 + -0xc0);
      *(undefined8 *)((long)plVar2 + -0xb8) = *(undefined8 *)((long)plVar2 + -0xb8);
      if (pcRam0000000003ec2148 == (code *)0x0) {
        pcRam0000000003ec2148 =
             (code *)func_0x00f789d4("UnityEngine.ParticleSystem::Play(System.Boolean)",0);
      }
                    /* WARNING: Could not recover jumptable at 0x03298910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*pcRam0000000003ec2148)(extraout_x1_00,1);
      return uVar5;
    }
  }
  return uVar5;
}



// ============================================================
// RVA: 0x15e58c4 | Atlas.Gameplay.Kart.KartVisualBehaviour.UpdateKickUp
// ============================================================

/* WARNING: Possible PIC construction at 0x015e58ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e7e80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e7f50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015e58f0) */

ulong Atlas_Gameplay_Kart_KartVisualBehaviour__UpdateKickUp
                (float param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x1;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  uint uVar11;
  long *plVar12;
  long *plVar13;
  int *piVar14;
  undefined8 *******pppppppuVar15;
  undefined *puVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  long lStack_190;
  undefined8 uStack_188;
  int *piStack_180;
  long *plStack_178;
  undefined8 ******ppppppuStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *****pppppuStack_40;
  undefined8 uStack_38;
  
  pppppuStack_40 = (undefined8 *****)&stack0xfffffffffffffff0;
  lVar8 = *(long *)(param_2 + 0x98);
  plVar13 = (long *)(param_2 + 0x138);
  piVar14 = (int *)(param_2 + 0x130);
  puVar3 = &uStack_160;
  uStack_38 = 0x15e58f0;
  pppppppuVar15 = (undefined8 *******)&pppppuStack_40;
  if ((bRam0000000003eb53e6 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb53e6 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar8,0,0);
  if ((uVar5 & 1) == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    lStack_158 = 0;
    uStack_160 = 0;
    iVar4 = 0;
    if (((int)param_3 != 0) && (10.0 <= param_1)) {
      if (lVar8 == 0) {
        func_0x00f78af4();
code_r0x015e7ebc:
        uVar7 = func_0x00f78b24();
        auVar17 = func_0x00f78ac0(uVar7,0);
        plVar12 = auVar17._0_8_;
        plVar2 = &lStack_190;
        puStack_168 = &Atlas_Gameplay_Kart_KartVisualBehaviour__ConfigureEffectsForPlayer;
        lStack_190 = lVar8;
        uStack_188 = param_3;
        piStack_180 = piVar14;
        plStack_178 = plVar13;
        ppppppuStack_170 = pppppppuVar15;
        if ((bRam0000000003eb53e2 & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb53e2 = 1;
        }
        uVar5 = /*Core.Networking.NetworkPlayer$$IsRemote*/ func_0x0165aba0(auVar17._8_8_,0);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
        piVar14 = (int *)plVar12[0x11];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(piVar14,0);
        if (iVar4 == 0) {
          lVar8 = plVar12[0x12];
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar8,0);
          if ((int)uVar5 == 0) {
            return uVar5;
          }
          lVar8 = plVar12[0x12];
          plVar2 = &uStack_160;
          plVar12 = plStack_178;
          piVar14 = piStack_180;
          pppppppuVar15 = (undefined8 *******)ppppppuStack_170;
          puVar16 = puStack_168;
        }
        else {
          lVar8 = plVar12[0x11];
          pppppppuVar15 = &ppppppuStack_170;
          puVar16 = &UNK_015e7f54;
        }
        iVar4 = 0x28;
        puVar3 = (undefined8 *)((long)plVar2 + -0xb0);
        *(int **)((long)plVar2 + -0x20) = piVar14;
        *(long **)((long)plVar2 + -0x18) = plVar12;
        *(undefined8 ********)((long)plVar2 + -0x10) = pppppppuVar15;
        *(undefined **)((long)plVar2 + -8) = puVar16;
        if (lVar8 != 0) {
          uVar7 = /*UnityEngine.ParticleSystem$$get_emission*/ func_0x032965e4(lVar8,0);
          *(undefined8 *)((long)plVar2 + -0x28) = uVar7;
          /*UnityEngine.ParticleSystem.MinMaxCurve$$op_Implicit*/ func_0x032967b8((undefined1 *)((long)plVar2 + -0x48),0x42200000,0);
          *(undefined8 *)((long)plVar2 + -0x68) = *(undefined8 *)((long)plVar2 + -0x40);
          *(undefined8 *)((long)plVar2 + -0x70) = *(undefined8 *)((long)plVar2 + -0x48);
          *(undefined8 *)((long)plVar2 + -0x58) = *(undefined8 *)((long)plVar2 + -0x30);
          *(undefined8 *)((long)plVar2 + -0x60) = *(undefined8 *)((long)plVar2 + -0x38);
          /*UnityEngine.ParticleSystem.EmissionModule$$set_rateOverTime*/ func_0x032967cc((undefined1 *)((long)plVar2 + -0x28),(undefined1 *)((long)plVar2 + -0x70),
                          0);
          /*UnityEngine.ParticleSystem.MinMaxCurve$$op_Implicit*/ func_0x032967b8((undefined1 *)((long)plVar2 + -0x90),0,0);
          *(undefined8 *)((long)plVar2 + -0xa8) = *(undefined8 *)((long)plVar2 + -0x88);
          *(undefined8 *)((long)plVar2 + -0xb0) = *(undefined8 *)((long)plVar2 + -0x90);
          *(undefined8 *)((long)plVar2 + -0x98) = *(undefined8 *)((long)plVar2 + -0x78);
          *(undefined8 *)((long)plVar2 + -0xa0) = *(undefined8 *)((long)plVar2 + -0x80);
          uVar5 = /*UnityEngine.ParticleSystem.EmissionModule$$set_rateOverDistance*/ func_0x0329b0fc((undefined1 *)((long)plVar2 + -0x28),
                                  (undefined1 *)((long)plVar2 + -0xb0),0);
          return uVar5;
        }
        func_0x00f78af4();
        *(int **)((long)plVar2 + -0xd0) = piVar14;
        *(long **)((long)plVar2 + -200) = plVar12;
        *(undefined1 **)((long)plVar2 + -0xc0) = (undefined1 *)((long)plVar2 + -0x10);
        *(undefined **)((long)plVar2 + -0xb8) =
             &Atlas_Gameplay_Kart_KartVisualBehaviour__SetParticleSystemEmitting;
        if (iVar4 != 0) {
          if (extraout_x1 != 0) {
            uVar5 = /*UnityEngine.ParticleSystem$$get_isEmitting*/ func_0x032977f0(extraout_x1,0);
            if ((uVar5 & 1) != 0) {
              return uVar5;
            }
            *(undefined8 *)((long)plVar2 + -0xd0) = *(undefined8 *)((long)plVar2 + -0xd0);
            *(undefined8 *)((long)plVar2 + -200) = *(undefined8 *)((long)plVar2 + -200);
            *(undefined8 *)((long)plVar2 + -0xc0) = *(undefined8 *)((long)plVar2 + -0xc0);
            *(undefined8 *)((long)plVar2 + -0xb8) = *(undefined8 *)((long)plVar2 + -0xb8);
            if (pcRam0000000003ec2148 == (code *)0x0) {
              pcRam0000000003ec2148 =
                   (code *)func_0x00f789d4("UnityEngine.ParticleSystem::Play(System.Boolean)",0);
            }
                    /* WARNING: Could not recover jumptable at 0x03298910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar5 = (*pcRam0000000003ec2148)(extraout_x1,1);
            return uVar5;
          }
code_r0x015e80b0:
          auVar18 = func_0x00f78af4();
          lVar8 = *(long *)(auVar18._0_8_ + 0x18);
          if ((lVar8 != 0) && (0 < (int)*(uint *)(lVar8 + 0x18))) {
            uVar5 = 0;
            do {
              if (*(int *)(lVar8 + (long)(int)uVar5 * 0xd0 + 0x20) == auVar18._8_4_) {
                return uVar5;
              }
              uVar1 = (int)uVar5 + 1;
              uVar5 = (ulong)uVar1;
            } while (*(uint *)(lVar8 + 0x18) != uVar1);
          }
          return 0xffffffff;
        }
        if (extraout_x1 == 0) goto code_r0x015e80b0;
        uVar5 = /*UnityEngine.ParticleSystem$$get_isEmitting*/ func_0x032977f0(extraout_x1,0);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
        pppppppuVar15 = *(undefined8 ********)((long)plVar2 + -0xc0);
        puVar16 = *(undefined **)((long)plVar2 + -0xb8);
        lVar8 = *(long *)((long)plVar2 + -0xd0);
        plVar13 = *(long **)((long)plVar2 + -200);
        lVar10 = extraout_x1;
        goto code_r0x03298a54;
      }
      lVar10 = *(long *)(lVar8 + 0x18);
      if ((lVar10 != 0) && (uVar1 = *(uint *)(lVar10 + 0x18), 0 < (int)uVar1)) {
        uVar11 = 0;
        puVar9 = (undefined8 *)(lVar10 + 0x20);
        do {
          if (*(int *)(lVar10 + (long)(int)uVar11 * 0xd0 + 0x20) == (int)param_3) {
            if (-1 < (int)uVar11) {
              if (uVar1 <= uVar11) goto code_r0x015e7ebc;
              uStack_b8 = puVar9[0x15];
              uStack_c0 = puVar9[0x14];
              uStack_a8 = puVar9[0x17];
              uStack_b0 = puVar9[0x16];
              uStack_98 = puVar9[0x19];
              uStack_a0 = puVar9[0x18];
              uStack_f8 = puVar9[0xd];
              uStack_100 = puVar9[0xc];
              uStack_e8 = puVar9[0xf];
              uStack_f0 = puVar9[0xe];
              uStack_d8 = puVar9[0x11];
              uStack_e0 = puVar9[0x10];
              uStack_c8 = puVar9[0x13];
              uStack_d0 = puVar9[0x12];
              uStack_138 = puVar9[5];
              uStack_140 = puVar9[4];
              uStack_128 = puVar9[7];
              uStack_130 = puVar9[6];
              uStack_118 = puVar9[9];
              uStack_120 = puVar9[8];
              uStack_108 = puVar9[0xb];
              uStack_110 = puVar9[10];
              lStack_158 = puVar9[1];
              uStack_160 = *puVar9;
              uStack_148 = puVar9[3];
              uStack_150 = puVar9[2];
              iVar4 = (int)uStack_160;
              goto code_r0x015e7d98;
            }
            break;
          }
          uVar11 = uVar11 + 1;
          puVar9 = puVar9 + 0x1a;
        } while (uVar1 != uVar11);
      }
      iVar4 = 0;
    }
code_r0x015e7d98:
    if (iVar4 != *piVar14) {
      if ((char)uStack_140 != '\0') {
        /*Atlas.Gameplay.Kart.KartVisualBehaviour$$SetStartColour*/ func_0x015e80f4(uVar5,lStack_158,&uStack_138);
        uVar7 = uStack_150;
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
        if ((int)uVar6 != 0) {
          /*Atlas.Gameplay.Kart.KartVisualBehaviour$$SetStartColour*/ func_0x015e80f4(uVar6,uVar7,&uStack_100);
        }
        uVar7 = uStack_148;
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
        if ((int)uVar6 != 0) {
          /*Atlas.Gameplay.Kart.KartVisualBehaviour$$SetStartColour*/ func_0x015e80f4(uVar6,uVar7,&uStack_c8);
        }
      }
      *piVar14 = iVar4;
    }
    lVar8 = lStack_158;
    lVar10 = *plVar13;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar8,lVar10,0);
    if ((int)uVar5 != 0) {
      lVar10 = *plVar13;
      if (lVar10 != 0) {
        puVar16 = &UNK_015e7e84;
code_r0x03298a54:
        *(long *)((long)puVar3 + -0x20) = lVar8;
        *(long **)((long)puVar3 + -0x18) = plVar13;
        *(undefined8 ********)((long)puVar3 + -0x10) = pppppppuVar15;
        *(undefined **)((long)puVar3 + -8) = puVar16;
        if (pcRam0000000003ec2158 == (code *)0x0) {
          pcRam0000000003ec2158 =
               (code *)func_0x00f789d4("UnityEngine.ParticleSystem::Stop(System.Boolean,UnityEngine.ParticleSystemStopBehavior)"
                                       ,0);
        }
                    /* WARNING: Could not recover jumptable at 0x03298a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*pcRam0000000003ec2158)(lVar10,1,1);
        return uVar5;
      }
      uVar5 = 0;
      if (lVar8 != 0) {
        uVar5 = /*UnityEngine.ParticleSystem$$Play*/ func_0x032988d0(lVar8,0);
      }
      *plVar13 = lVar8;
    }
  }
  return uVar5;
}



// ============================================================
// RVA: 0x15e59c4 | Atlas.Gameplay.Kart.KartVisualBehaviour.UpdateTyreSmoke
// ============================================================

/* WARNING: Possible PIC construction at 0x015e5b40: Changing call to branch */

void Atlas_Gameplay_Kart_KartVisualBehaviour__UpdateTyreSmoke(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long *extraout_x8;
  long *plVar7;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  long lVar9;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined4 auStack_90 [4];
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb53e3 & 1) == 0) {
    func_0x00f78a20(0x3d22d20);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb53e3 = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x88);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar8,0);
  iVar3 = (int)param_2;
  if ((int)uVar8 != 0) {
    uVar6 = param_2;
    /*Atlas.Gameplay.Kart.KartVisualBehaviour$$SetParticleSystemEmitting*/ func_0x015e8040(uVar8,*(undefined8 *)(param_1 + 0x88));
    iVar5 = (int)uVar6;
    if (iVar3 != 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x148);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar8,0);
      if (iVar2 != 0) {
        uVar11 = *(undefined4 *)(param_1 + 0x15c);
        uVar12 = *(undefined4 *)(param_1 + 0x160);
        uVar13 = *(undefined4 *)(param_1 + 0x164);
        auStack_90[0] = 0x3dcccccd;
        uVar10 = /*UnityEngine.Color$$Lerp*/ func_0x032234c0(*(undefined4 *)(param_1 + 0x158),0);
        *(undefined4 *)(param_1 + 0x158) = uVar10;
        *(undefined4 *)(param_1 + 0x15c) = uVar11;
        *(undefined4 *)(param_1 + 0x160) = uVar12;
        *(undefined4 *)(param_1 + 0x164) = uVar13;
        lVar9 = *(long *)(param_1 + 0x148);
        if (((*(byte *)(/*Atlas.Gameplay.Kart.KartVisualBehaviour_TypeInfo*/ lRam0000000003d22d20 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.Kart.KartVisualBehaviour_TypeInfo*/ lRam0000000003d22d20 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar9 == 0) goto LAB_015e5c8c;
        uVar14 = *(undefined4 *)(param_1 + 0x164);
        uVar13 = *(undefined4 *)(param_1 + 0x160);
        uVar12 = *(undefined4 *)(param_1 + 0x15c);
        uVar11 = *(undefined4 *)(param_1 + 0x158);
        uVar10 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartVisualBehaviour_TypeInfo*/ lRam0000000003d22d20 + 0xb8) + 4);
        unaff_x30 = 0x15e5b44;
        register0x00000008 = (BADSPACEBASE *)auStack_90;
        unaff_x19 = param_1;
        unaff_x20 = param_2;
        unaff_x21 = lVar9;
        unaff_x22 = 0x3d23990;
        unaff_x29 = puVar1;
        goto code_r0x03237f38;
      }
    }
  }
  uVar8 = *(undefined8 *)(param_1 + 0x90);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar8,0);
  if ((int)uVar8 != 0) {
    /*Atlas.Gameplay.Kart.KartVisualBehaviour$$SetParticleSystemEmitting*/ func_0x015e8040(uVar8,*(undefined8 *)(param_1 + 0x90));
    iVar5 = (int)param_2;
    if (iVar3 != 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x150);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar8,0);
      if (iVar3 != 0) {
        uVar11 = *(undefined4 *)(param_1 + 0x16c);
        uVar12 = *(undefined4 *)(param_1 + 0x170);
        uVar13 = *(undefined4 *)(param_1 + 0x174);
        auStack_90[0] = 0x3dcccccd;
        uVar10 = /*UnityEngine.Color$$Lerp*/ func_0x032234c0(*(undefined4 *)(param_1 + 0x168),0);
        *(undefined4 *)(param_1 + 0x168) = uVar10;
        *(undefined4 *)(param_1 + 0x16c) = uVar11;
        *(undefined4 *)(param_1 + 0x170) = uVar12;
        *(undefined4 *)(param_1 + 0x174) = uVar13;
        lVar9 = *(long *)(param_1 + 0x150);
        if (((*(byte *)(/*Atlas.Gameplay.Kart.KartVisualBehaviour_TypeInfo*/ lRam0000000003d22d20 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.Kart.KartVisualBehaviour_TypeInfo*/ lRam0000000003d22d20 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar9 == 0) {
LAB_015e5c8c:
          auVar15 = func_0x00f78af4();
          lVar9 = auVar15._0_8_;
          if ((bRam0000000003eb53e0 & 1) == 0) {
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb53e0 = 1;
          }
          plVar7 = (long *)0x3d23990;
          if (iVar5 == 0) goto code_r0x015e5d14;
          uVar8 = *(undefined8 *)(lVar9 + 0xb0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
          if (iVar3 != 0) {
            lVar4 = *(long *)(lVar9 + 0xb0);
            while( true ) {
              if (lVar4 != 0) {
                if (pcRam0000000003ebf4c0 == (code *)0x0) {
                  pcRam0000000003ebf4c0 =
                       (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
                }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam0000000003ebf4c0)(lVar4,auVar15._8_8_);
                return;
              }
              func_0x00f78af4();
              plVar7 = extraout_x8;
code_r0x015e5d14:
              uVar8 = *(undefined8 *)(lVar9 + 0xa8);
              if (((*(ushort *)(*plVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(*plVar7 + 0xe0) == 0)
                 ) {
                func_0x00f78ad0();
              }
              iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
              if (iVar3 == 0) break;
              lVar4 = *(long *)(lVar9 + 0xa8);
            }
          }
          return;
        }
        uVar14 = *(undefined4 *)(param_1 + 0x174);
        uVar13 = *(undefined4 *)(param_1 + 0x170);
        uVar12 = *(undefined4 *)(param_1 + 0x16c);
        uVar11 = *(undefined4 *)(param_1 + 0x168);
        uVar10 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartVisualBehaviour_TypeInfo*/ lRam0000000003d22d20 + 0xb8) + 4);
code_r0x03237f38:
        *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        *(undefined4 *)((long)register0x00000008 + -0x40) = uVar11;
        *(undefined4 *)((long)register0x00000008 + -0x3c) = uVar12;
        *(undefined4 *)((long)register0x00000008 + -0x38) = uVar13;
        *(undefined4 *)((long)register0x00000008 + -0x34) = uVar14;
        if (pcRam0000000003ebfd28 == (code *)0x0) {
          pcRam0000000003ebfd28 =
               (code *)func_0x00f789d4("UnityEngine.Material::SetColorImpl_Injected(System.Int32,UnityEngine.Color&)"
                                       ,uVar10,0);
        }
        (*pcRam0000000003ebfd28)(lVar9,uVar10,(undefined1 *)((long)register0x00000008 + -0x40));
        return;
      }
    }
  }
  return;
}



// ============================================================
// RVA: 0x15e5c90 | Atlas.Gameplay.Kart.KartVisualBehaviour.TriggerSatelliteTargetVFX
// ============================================================

void Atlas_Gameplay_Kart_KartVisualBehaviour__TriggerSatelliteTargetVFX
               (long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long *extraout_x8;
  long *plVar3;
  undefined8 uVar4;
  
  if ((bRam0000000003eb53e0 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb53e0 = 1;
  }
  plVar3 = (long *)0x3d23990;
  if (param_3 == 0) goto LAB_015e5d14;
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0xb0);
    while( true ) {
      if (lVar2 != 0) {
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000003ebf4c0)(lVar2,param_2);
        return;
      }
      func_0x00f78af4();
      plVar3 = extraout_x8;
LAB_015e5d14:
      uVar4 = *(undefined8 *)(param_1 + 0xa8);
      if (((*(ushort *)(*plVar3 + 0x132) >> 10 & 1) != 0) && (*(int *)(*plVar3 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
      if (iVar1 == 0) break;
      lVar2 = *(long *)(param_1 + 0xa8);
    }
  }
  return;
}



// ============================================================
// RVA: 0x15e5d74 | Atlas.Gameplay.Kart.KartVisualBehaviour.SetLaserWheelVFX
// ============================================================

void Atlas_Gameplay_Kart_KartVisualBehaviour__SetLaserWheelVFX(long param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  if ((bRam0000000003eb53e1 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb53e1 = 1;
  }
  lVar7 = *(long *)(param_1 + 0xb8);
  if (lVar7 != 0) {
    uVar5 = *(ulong *)(lVar7 + 0x18);
    bVar1 = true;
    bVar2 = false;
    if (uVar5 != 0) {
      bVar2 = SBORROW4((int)uVar5,1);
      bVar1 = (int)uVar5 + -1 < 0;
    }
    if (bVar1 == bVar2) {
      uVar8 = 0;
      do {
        if ((uVar5 & 0xffffffff) <= uVar8) {
          uVar4 = func_0x00f78b24();
          func_0x00f78ac0(uVar4,0);
LAB_015e5e54:
          auVar9 = func_0x00f78af4();
          *(long *)(auVar9._0_8_ + 0x38) = auVar9._8_8_;
          return;
        }
        lVar6 = *(long *)(lVar7 + 0x20 + uVar8 * 8);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar6,0,0);
        if (iVar3 != 0) {
          if (lVar6 == 0) goto LAB_015e5e54;
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar6,param_2,0);
        }
        uVar8 = uVar8 + 1;
        uVar5 = (ulong)*(uint *)(lVar7 + 0x18);
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
  }
  return;
}



// ============================================================
// RVA: 0x15e6268 | Atlas.Gameplay.Kart.KartVisualBehaviour.SetWheelSteerAngle
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e636c | Atlas.Gameplay.Kart.KartVisualBehaviour.SetWheelRotation
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e6508 | Atlas.Gameplay.Kart.KartVisualBehaviour.SetWheelVerticalOffset
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e66f4 | Atlas.Gameplay.Kart.KartVisualBehaviour.SetSatellitePosition
// ============================================================

/* WARNING: Possible PIC construction at 0x015e67a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ac54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ace4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ae70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b1d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b3a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b3ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe408: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b8c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ba64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145c1dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145aa54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0145bf54) */
/* WARNING: Removing unreachable block (ram,0x0145bf58) */
/* WARNING: Removing unreachable block (ram,0x0145bdac) */
/* WARNING: Removing unreachable block (ram,0x0145bdb0) */
/* WARNING: Removing unreachable block (ram,0x0145ba68) */
/* WARNING: Removing unreachable block (ram,0x0145ba6c) */
/* WARNING: Removing unreachable block (ram,0x0145b924) */
/* WARNING: Removing unreachable block (ram,0x0145b8cc) */
/* WARNING: Removing unreachable block (ram,0x0145b8d0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e8) */
/* WARNING: Removing unreachable block (ram,0x0145b8ec) */
/* WARNING: Removing unreachable block (ram,0x0145b8f0) */
/* WARNING: Removing unreachable block (ram,0x0145b660) */
/* WARNING: Removing unreachable block (ram,0x0145b664) */
/* WARNING: Removing unreachable block (ram,0x014fe40c) */
/* WARNING: Removing unreachable block (ram,0x014fe374) */
/* WARNING: Removing unreachable block (ram,0x014fe3e4) */
/* WARNING: Removing unreachable block (ram,0x014fe384) */
/* WARNING: Removing unreachable block (ram,0x0145b3ac) */
/* WARNING: Removing unreachable block (ram,0x0145b3b0) */
/* WARNING: Removing unreachable block (ram,0x0145b1dc) */
/* WARNING: Removing unreachable block (ram,0x0145b1e0) */
/* WARNING: Removing unreachable block (ram,0x0145b02c) */
/* WARNING: Removing unreachable block (ram,0x0145b030) */
/* WARNING: Removing unreachable block (ram,0x0145ae74) */
/* WARNING: Removing unreachable block (ram,0x0145ae78) */
/* WARNING: Removing unreachable block (ram,0x0145ace8) */
/* WARNING: Removing unreachable block (ram,0x0145acec) */
/* WARNING: Removing unreachable block (ram,0x0145ac58) */
/* WARNING: Removing unreachable block (ram,0x0145ac60) */
/* WARNING: Removing unreachable block (ram,0x0145ac74) */
/* WARNING: Removing unreachable block (ram,0x0145ac7c) */
/* WARNING: Removing unreachable block (ram,0x0145ac84) */
/* WARNING: Removing unreachable block (ram,0x014fe4b4) */
/* WARNING: Removing unreachable block (ram,0x014fe4b8) */
/* WARNING: Removing unreachable block (ram,0x014fe4c0) */
/* WARNING: Removing unreachable block (ram,0x014fe4cc) */
/* WARNING: Removing unreachable block (ram,0x014fe568) */
/* WARNING: Removing unreachable block (ram,0x014fe570) */
/* WARNING: Removing unreachable block (ram,0x014fe578) */
/* WARNING: Removing unreachable block (ram,0x014fe544) */
/* WARNING: Removing unreachable block (ram,0x014fe50c) */
/* WARNING: Removing unreachable block (ram,0x014fe534) */
/* WARNING: Removing unreachable block (ram,0x014fe4e4) */
/* WARNING: Removing unreachable block (ram,0x014fe4ec) */
/* WARNING: Removing unreachable block (ram,0x014fe560) */
/* WARNING: Removing unreachable block (ram,0x0145aa58) */
/* WARNING: Removing unreachable block (ram,0x0145aa5c) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
Atlas_Gameplay_Kart_KartVisualBehaviour__SetSatellitePosition
          (float param_1,float param_2,float param_3,long param_4)

{
  undefined8 *******pppppppuVar1;
  code *pcVar2;
  undefined1 **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  undefined1 ***pppuVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long lVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *extraout_x1;
  long lVar20;
  ulong extraout_x1_00;
  long lVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  int *piVar25;
  undefined8 uVar26;
  long unaff_x19;
  undefined1 *puVar27;
  long unaff_x20;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  code *pcVar31;
  undefined1 *puVar32;
  undefined8 uVar33;
  undefined8 unaff_x22;
  undefined1 **ppuVar34;
  undefined8 uVar35;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar36;
  undefined8 *******unaff_x29;
  undefined8 uVar37;
  undefined *puVar38;
  undefined8 unaff_x30;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 extraout_s0;
  float fVar42;
  float fVar43;
  float fVar44;
  ulong extraout_d0;
  float fVar45;
  undefined8 unaff_d11;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  long *plStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_78;
  undefined8 *******pppppppuStack_60;
  code *pcStack_58;
  
  pppppppuVar1 = (undefined8 *******)&stack0xfffffffffffffff0;
  puVar19 = (undefined1 *)(ulong)(uint)param_2;
  uVar15 = (ulong)(uint)param_1;
  fVar42 = param_2;
  fVar43 = param_3;
  if ((bRam0000000003eb53e5 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb53e5 = 1;
  }
  lVar28 = *(long *)(param_4 + 0xa8);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar22 = (long *)0x0;
  iVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar28,0);
  if (iVar10 == 0) {
    lVar28 = *(long *)(param_4 + 0xb0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar22 = (long *)0x0;
    puVar18 = (undefined1 *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar28,0);
    if ((int)puVar18 == 0) {
      return puVar18;
    }
    if ((*(long *)(param_4 + 0xb0) != 0) &&
       (lVar17 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(param_4 + 0xb0),0), lVar17 != 0)) {
      fVar42 = *(float *)(param_4 + 400);
      fVar43 = *(float *)(param_4 + 0x18c);
      fVar44 = *(float *)(param_4 + 0x188);
      goto code_r0x03274fd0;
    }
  }
  else if ((*(long *)(param_4 + 0xa8) != 0) &&
          (lVar17 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(param_4 + 0xa8),0), lVar17 != 0)) {
    fVar42 = *(float *)(param_4 + 0x184);
    fVar43 = *(float *)(param_4 + 0x180);
    fVar44 = *(float *)(param_4 + 0x17c);
    unaff_x30 = 0x15e67a8;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
    unaff_x19 = param_4;
    unaff_x20 = lVar28;
    unaff_x29 = pppppppuVar1;
code_r0x03274fd0:
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(float *)((long)register0x00000008 + -0x30) = param_1 + fVar44;
    *(float *)((long)register0x00000008 + -0x2c) = param_2 + fVar43;
    *(float *)((long)register0x00000008 + -0x28) = param_3 + fVar42;
    if (pcRam0000000003ec1950 == (code *)0x0) {
      pcRam0000000003ec1950 =
           (code *)func_0x00f789d4("UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)"
                                   ,0);
    }
    puVar19 = (undefined1 *)
              (*pcRam0000000003ec1950)(lVar17,(undefined1 *)((long)register0x00000008 + -0x30));
    return puVar19;
  }
  lVar17 = func_0x00f78af4();
  uStack_78 = 0x3d23990;
  pcStack_58 = Atlas_Gameplay_Kart_KartVisualAnimation__OnHitOtherKartWithUsable;
  pppppppuVar36 = &pppppppuStack_60;
  uVar30 = 0x3eb5000;
  auVar46._8_8_ = lVar17;
  auVar46._0_8_ = 0x3eb5000;
  uVar35 = 0x3d23990;
  pppppppuStack_60 = pppppppuVar1;
  if ((bRam0000000003eb53d0 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb53d0 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar18 = (undefined1 *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar22,0,0);
  if (((ulong)puVar18 & 1) != 0) {
    return puVar18;
  }
  if (*(long *)(lVar17 + 0x38) == 0) {
code_r0x015e6938:
    puVar18 = (undefined1 *)func_0x00f78af4();
    pcVar2 = Atlas_Gameplay_Kart_KartVisualAnimation__OnHomingProjectileIncoming;
    if (0.0 < *(float *)(puVar18 + 0x78)) {
      return puVar18;
    }
    if (*(long *)(puVar18 + 0x38) != 0) {
      Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIncoming(*(long *)(puVar18 + 0x38),0);
      if (*(long *)(puVar18 + 0x30) != 0) {
        Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIncoming(*(long *)(puVar18 + 0x30),0);
        *(undefined4 *)(puVar18 + 0x78) = 0x40800000;
        lVar28 = *(long *)(puVar18 + 0x20);
        if ((lVar28 != 0) &&
           (auVar51._8_8_ = lVar28, auVar51._0_8_ = *(long *)(lVar28 + 0x90),
           *(long *)(lVar28 + 0x90) != 0)) {
          puVar5 = &stack0xffffffffffffff80;
code_r0x0145be28:
          lVar17 = auVar51._8_8_;
          lVar28 = auVar51._0_8_;
          ppuVar6 = (undefined1 **)(puVar5 + -0x60);
          *(undefined1 **)(puVar5 + -0x60) = puVar19;
          *(ulong *)(puVar5 + -0x58) = uVar15;
          *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
          *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
          *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
          *(undefined8 *)(puVar5 + -0x38) = unaff_x23;
          *(undefined8 *)(puVar5 + -0x30) = uVar35;
          *(long *)(puVar5 + -0x28) = auVar46._0_8_;
          *(long **)(puVar5 + -0x20) = plVar22;
          *(long *)(puVar5 + -0x18) = auVar46._8_8_;
          *(undefined8 ********)(puVar5 + -0x10) = pppppppuVar36;
          *(code **)(puVar5 + -8) = pcVar2;
          pppppppuVar36 = (undefined8 *******)(puVar5 + -0x10);
          lVar21 = 0x3eb4000;
          if ((bRam0000000003eb47e4 & 1) == 0) {
            func_0x00f78a20(0x3d1ff28);
            func_0x00f78a20(0x3d3bf08);
            func_0x00f78a20(0x3d3bf00);
            func_0x00f78a20(0x3d1de10);
            func_0x00f78a20(0x3d24b48);
            bRam0000000003eb47e4 = 1;
          }
          if (lVar17 != 0) {
            puVar18 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar17,0);
            lVar21 = 0x28;
            if ((int)puVar18 == 0) {
              lVar21 = 0x30;
            }
            lVar21 = *(long *)(lVar28 + lVar21);
            auVar49._8_8_ = lVar21;
            auVar49._0_8_ = lVar17;
            if (lVar21 == 0) {
              return puVar18;
            }
            unaff_x24 = 0x3d1ff28;
            if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (*(long *)(lVar28 + 0x48) != 0) {
              puVar18 = *(undefined1 **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x350);
              lVar28 = *(long *)(*(long *)(lVar28 + 0x48) + 0xb8);
              uVar35 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar35,uRam0000000003d3bf00);
              puVar19 = (undefined1 *)func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
              puVar38 = &UNK_0145bf54;
code_r0x014fe3e8:
              *(long *)((long)ppuVar6 + -0x30) = lVar28;
              *(undefined1 **)((long)ppuVar6 + -0x28) = puVar18;
              *(long *)((long)ppuVar6 + -0x20) = auVar49._8_8_;
              *(long *)((long)ppuVar6 + -0x18) = auVar49._0_8_;
              *(undefined8 ********)((long)ppuVar6 + -0x10) = pppppppuVar36;
              *(undefined **)((long)ppuVar6 + -8) = puVar38;
              return puVar19;
            }
          }
          lVar23 = func_0x00f78af4();
          auVar50._8_8_ = extraout_x1;
          auVar50._0_8_ = lVar23;
          puVar4 = puVar5 + -0xa0;
          *(undefined1 **)(puVar5 + -0xa0) = puVar19;
          *(ulong *)(puVar5 + -0x98) = uVar15;
          *(undefined8 *)(puVar5 + -0x90) = uVar35;
          *(long *)(puVar5 + -0x88) = lVar28;
          *(long *)(puVar5 + -0x80) = lVar21;
          *(long *)(puVar5 + -0x78) = lVar17;
          *(undefined8 ********)(puVar5 + -0x70) = pppppppuVar36;
          *(undefined **)(puVar5 + -0x68) = &Atlas_Audio_AtlasAudioManager__RandomAISpeech;
          puVar12 = puVar5 + -0x70;
          uVar15 = extraout_d0 & 0xffffffff;
          if ((bRam0000000003eb47e5 & 1) == 0) {
            func_0x00f78a20(0x3d1ff28);
            bRam0000000003eb47e5 = 1;
          }
          if (extraout_x1 == (undefined1 *)0x0) {
code_r0x0145c21c:
            fVar42 = (float)func_0x00f78af4();
            *(undefined1 **)(puVar5 + -0xd0) = puVar19;
            *(ulong *)(puVar5 + -200) = uVar15;
            *(undefined1 **)(puVar5 + -0xc0) = extraout_x1;
            *(long *)(puVar5 + -0xb8) = lVar23;
            *(undefined1 **)(puVar5 + -0xb0) = puVar12;
            *(undefined **)(puVar5 + -0xa8) = &Atlas_Audio_AtlasAudioManager__SetMusicVolume;
            if ((bRam0000000003eb47e6 & 1) == 0) {
              func_0x00f78a20(0x3d1ff28);
              func_0x00f78a20(0x3d24568);
              bRam0000000003eb47e6 = 1;
            }
            if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar35 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
            *(undefined8 *)(puVar5 + -0xd8) = uVar35;
            if ((((byte)/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28[0x133] >> 2 & 1) != 0) &&
               (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            fVar43 = _UNK_033f8148;
            if (fVar42 != 0.0) {
              fVar43 = fVar42;
            }
            fVar42 = INFINITY;
            if (fVar43 != -INFINITY) {
              fVar42 = ABS(SQRT(fVar43));
            }
            puVar19 = (undefined1 *)
                      /*FMOD.Studio.System$$setParameterByName*/ func_0x016f69b4(fVar42,puVar5 + -0xd8,
                                      *(undefined8 *)
                                       (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x388),1,0);
            return puVar19;
          }
          iVar10 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(extraout_x1,0);
          if ((iVar10 != 0) &&
             (puVar18 = (undefined1 *)/*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(extraout_x1,0), (int)puVar18 == 0)) {
            return puVar18;
          }
          if (*(long *)(lVar23 + 0x30) == 0) goto code_r0x0145c21c;
          puVar18 = (undefined1 *)/*Atlas.Audio.SpeechManager$$IsPlaying*/ func_0x014ff334(*(long *)(lVar23 + 0x30),0);
          if ((((ulong)puVar18 & 1) != 0) || (*(int *)(lVar23 + 0x50) != 1)) {
            return puVar18;
          }
          puVar32 = (undefined1 *)0x3d1ff28;
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar28 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8);
          if (*(float *)(lVar28 + 0x30) <= (float)extraout_d0) {
            return /*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28;
          }
          if (0.0 <= *(float *)(lVar23 + 0x88)) {
            return /*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28;
          }
          if (extraout_x1[0x38] == '\0') {
            return /*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28;
          }
          fVar42 = *(float *)(lVar23 + 0x8c);
          uVar15 = (ulong)(uint)fVar42;
          puVar18 = /*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28;
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
            puVar18 = (undefined1 *)func_0x00f78ad0();
            lVar28 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8);
          }
          if (fVar42 <= *(float *)(lVar28 + 800)) {
            return puVar18;
          }
          iVar10 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,3,0);
          if (iVar10 == 2) {
            puVar27 = *(undefined1 **)(lVar23 + 0x30);
            if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar17 = *(long *)(lVar23 + 0x48);
            if ((lVar17 == 0) || (puVar27 == (undefined1 *)0x0)) goto code_r0x0145c21c;
            lVar21 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x350);
            lVar28 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x310);
            lVar23 = *(long *)(lVar17 + 0xb8);
            uVar39 = *(undefined4 *)(lVar17 + 0x180);
            uVar40 = 0x3f800000;
          }
          else if (iVar10 == 1) {
            puVar27 = *(undefined1 **)(lVar23 + 0x30);
            if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (puVar27 == (undefined1 *)0x0) goto code_r0x0145c21c;
            lVar23 = *(long *)(extraout_x1 + 0xb8);
            uVar39 = *(undefined4 *)(extraout_x1 + 0x180);
            lVar21 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x378);
            uVar40 = 0;
            lVar28 = lVar21;
          }
          else {
            if (iVar10 != 0) {
              if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              puVar19 = /*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28;
              *(undefined4 *)(lVar23 + 0x88) =
                   *(undefined4 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x34);
              return puVar19;
            }
            puVar27 = *(undefined1 **)(lVar23 + 0x30);
            if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (puVar27 == (undefined1 *)0x0) goto code_r0x0145c21c;
            lVar23 = *(long *)(extraout_x1 + 0xb8);
            uVar39 = *(undefined4 *)(extraout_x1 + 0x180);
            lVar21 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x378);
            uVar40 = 0;
            lVar28 = lVar21;
          }
          uVar41 = 4;
          puVar38 = &UNK_0145c1e0;
          puVar13 = extraout_x1;
          puVar18 = puVar27;
          goto code_r0x014fe2a8;
        }
      }
    }
    lVar28 = func_0x00f78af4();
    pcStack_a8 = Atlas_Gameplay_Kart_KartVisualAnimation__FinishResultsUpdated;
    plStack_c0 = plVar22;
    puStack_b8 = puVar18;
    puStack_b0 = &stack0xffffffffffffff70;
    Atlas_Gameplay_Kart_KartVisualAnimation__SetFinishLineIndexParam();
    if (*(long *)(lVar28 + 0x38) == 0) {
LAB_015e69ec:
      auVar46 = func_0x00f78af4();
      pcStack_c8 = Atlas_Gameplay_Kart_KartVisualAnimation__SetFinishLineIndexParam;
      ppuStack_d0 = &puStack_b0;
      uVar35 = Atlas_Gameplay_Kart_KartVisualAnimation__GetFinishLineIndexParamIdFromFinishingPosition
                         (auVar46._8_8_);
      lVar17 = *(long *)(auVar46._0_8_ + 0x38);
      if (lVar17 == 0) {
LAB_015e6a3c:
        uVar9 = func_0x00f78af4();
        if (uVar9 < 0xd) {
          return (undefined1 *)(ulong)*(uint *)(&UNK_033f8dc0 + (long)(int)uVar9 * 4);
        }
        return (undefined1 *)((long)&MACH_HEADER.magic + 3);
      }
      Atlas_Gameplay_Kart_BaseVisualBehaviour__SetFinishLineIndexParam(lVar17,uVar35,0);
      lVar17 = *(long *)(auVar46._0_8_ + 0x30);
      auVar53._8_8_ = uVar35;
      auVar53._0_8_ = lVar17;
      if (lVar17 == 0) goto LAB_015e6a3c;
      pppuVar7 = (undefined1 ***)&plStack_c0;
      ppuVar34 = ppuStack_d0;
      pcVar2 = pcStack_c8;
    }
    else {
      Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerFinishLineReaction(*(long *)(lVar28 + 0x38),0)
      ;
      lVar17 = *(long *)(lVar28 + 0x30);
      if (lVar17 == 0) goto LAB_015e69ec;
      pppuVar7 = &ppuStack_d0;
      ppuStack_d0 = (undefined1 **)0x3d23990;
      pcStack_c8 = (code *)0x3eb5000;
      uVar30 = 0x3eb4000;
      plVar22 = (long *)0x3d20028;
      if ((bRam0000000003eb4eef & 1) == 0) {
        func_0x00f78a20(0x3d20028,0);
        bRam0000000003eb4eef = 1;
      }
      lVar28 = *(long *)(lVar17 + 0x18);
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar28 != 0) {
        uVar40 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x74);
        puVar8 = &stack0xffffffffffffff60;
        puVar18 = puStack_b8;
        plVar22 = plStack_c0;
        pcVar31 = pcStack_c8;
        ppuVar34 = ppuStack_d0;
        puVar19 = puStack_b0;
        pcVar2 = pcStack_a8;
        goto UnityEngine_Animator__SetTrigger;
      }
      auVar53 = func_0x00f78af4();
      lVar28 = 0;
      ppuVar34 = &puStack_b0;
      pcVar2 = Atlas_Gameplay_Kart_BaseVisualBehaviour__SetFinishLineIndexParam;
    }
    *(undefined8 *)((long)pppuVar7 + -0x30) = 0x3d23990;
    *(undefined8 *)((long)pppuVar7 + -0x28) = uVar30;
    *(long **)((long)pppuVar7 + -0x20) = plVar22;
    *(long *)((long)pppuVar7 + -0x18) = lVar28;
    *(undefined1 ***)((long)pppuVar7 + -0x10) = ppuVar34;
    *(code **)((long)pppuVar7 + -8) = pcVar2;
    if ((bRam0000000003eb4ef0 & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4ef0 = 1;
    }
    lVar28 = *(long *)(auVar53._0_8_ + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar28 != 0) {
      uVar40 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x70);
      *(undefined8 *)((long)pppuVar7 + -0x30) = *(undefined8 *)((long)pppuVar7 + -0x30);
      *(undefined8 *)((long)pppuVar7 + -0x28) = *(undefined8 *)((long)pppuVar7 + -0x28);
      *(undefined8 *)((long)pppuVar7 + -0x20) = *(undefined8 *)((long)pppuVar7 + -0x20);
      *(undefined8 *)((long)pppuVar7 + -0x18) = *(undefined8 *)((long)pppuVar7 + -0x18);
      *(undefined8 *)((long)pppuVar7 + -0x10) = *(undefined8 *)((long)pppuVar7 + -0x10);
      *(undefined8 *)((long)pppuVar7 + -8) = *(undefined8 *)((long)pppuVar7 + -8);
      if (pcRam0000000003ebe440 == (code *)0x0) {
        pcRam0000000003ebe440 =
             (code *)func_0x00f789d4("UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x0320d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar19 = (undefined1 *)(*pcRam0000000003ebe440)(lVar28,uVar40,auVar53._8_8_);
      return puVar19;
    }
    lVar28 = func_0x00f78af4();
    *(undefined8 *)((long)pppuVar7 + -0x60) = 0x3eb4000;
    *(undefined8 *)((long)pppuVar7 + -0x58) = 0x3d20028;
    *(undefined8 *)((long)pppuVar7 + -0x50) = 0;
    *(long *)((long)pppuVar7 + -0x48) = auVar53._8_8_;
    *(undefined1 **)((long)pppuVar7 + -0x40) = (undefined1 *)((long)pppuVar7 + -0x10);
    *(code **)((long)pppuVar7 + -0x38) =
         Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerAutoDriveReaction;
    if ((bRam0000000003eb4ef1 & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4ef1 = 1;
    }
    lVar28 = *(long *)(lVar28 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar28 != 0) {
      uVar40 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x78);
      puVar19 = *(undefined1 **)((long)pppuVar7 + -0x40);
      pcVar2 = *(code **)((long)pppuVar7 + -0x38);
      plVar22 = *(long **)((long)pppuVar7 + -0x50);
      puVar18 = *(undefined1 **)((long)pppuVar7 + -0x48);
      puVar8 = (undefined1 *)((long)pppuVar7 + -0x30);
      ppuVar34 = *(undefined1 ***)((long)pppuVar7 + -0x60);
      pcVar31 = *(code **)((long)pppuVar7 + -0x58);
      goto UnityEngine_Animator__SetTrigger;
    }
    lVar17 = func_0x00f78af4();
    *(undefined8 *)((long)pppuVar7 + -0x90) = 0x3eb4000;
    *(undefined8 *)((long)pppuVar7 + -0x88) = 0x3eb4000;
    *(undefined8 *)((long)pppuVar7 + -0x80) = 0x3d20028;
    *(undefined8 *)((long)pppuVar7 + -0x78) = 0;
    *(undefined1 **)((long)pppuVar7 + -0x70) = (undefined1 *)((long)pppuVar7 + -0x40);
    *(code **)((long)pppuVar7 + -0x68) =
         Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerStartLineRandomAnimation;
    if ((bRam0000000003eb4ef2 & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4ef2 = 1;
    }
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar21 = *(long *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x88);
    if (lVar21 == 0) {
LAB_015389bc:
      func_0x00f78af4();
    }
    else {
      uVar9 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(lVar21 + 0x18),0);
      if (uVar9 < *(uint *)(lVar21 + 0x18)) {
        lVar28 = *(long *)(lVar17 + 0x18);
        if (lVar28 != 0) {
          uVar40 = *(undefined4 *)(lVar21 + (long)(int)uVar9 * 4 + 0x20);
          puVar19 = *(undefined1 **)((long)pppuVar7 + -0x70);
          pcVar2 = *(code **)((long)pppuVar7 + -0x68);
          plVar22 = *(long **)((long)pppuVar7 + -0x80);
          puVar18 = *(undefined1 **)((long)pppuVar7 + -0x78);
          puVar8 = (undefined1 *)((long)pppuVar7 + -0x60);
          ppuVar34 = *(undefined1 ***)((long)pppuVar7 + -0x90);
          pcVar31 = *(code **)((long)pppuVar7 + -0x88);
          goto UnityEngine_Animator__SetTrigger;
        }
        goto LAB_015389bc;
      }
    }
    uVar35 = func_0x00f78b24();
    lVar28 = func_0x00f78ac0(uVar35,0);
    *(undefined8 *)((long)pppuVar7 + -0xc0) = 0x3eb4000;
    *(undefined8 *)((long)pppuVar7 + -0xb8) = 0x3eb4000;
    *(long *)((long)pppuVar7 + -0xb0) = lVar21;
    *(long *)((long)pppuVar7 + -0xa8) = lVar17;
    *(undefined1 **)((long)pppuVar7 + -0xa0) = (undefined1 *)((long)pppuVar7 + -0x70);
    *(code **)((long)pppuVar7 + -0x98) = Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIdleBreaker
    ;
    if ((bRam0000000003eb4ef3 & 1) == 0) {
      func_0x00f78a20(0x3d20028);
      bRam0000000003eb4ef3 = 1;
    }
    lVar28 = *(long *)(lVar28 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar28 == 0) {
      lVar28 = func_0x00f78af4();
      *(undefined1 **)((long)pppuVar7 + -0x100) = puVar19;
      *(ulong *)((long)pppuVar7 + -0xf8) = uVar15;
      *(undefined8 *)((long)pppuVar7 + -0xf0) = 0x3eb4000;
      *(undefined8 *)((long)pppuVar7 + -0xe8) = 0x3eb4000;
      *(undefined8 *)((long)pppuVar7 + -0xe0) = 0x3d20028;
      *(undefined8 *)((long)pppuVar7 + -0xd8) = 0;
      *(undefined1 **)((long)pppuVar7 + -0xd0) = (undefined1 *)((long)pppuVar7 + -0xa0);
      *(code **)((long)pppuVar7 + -200) = Atlas_Gameplay_Kart_BaseVisualBehaviour__SetBoostIntensity
      ;
      if ((bRam0000000003eb4ef4 & 1) == 0) {
        func_0x00f78a20(0x3d20028);
        bRam0000000003eb4ef4 = 1;
      }
      lVar28 = *(long *)(lVar28 + 0x18);
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar28 != 0) {
        uVar40 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x84);
        *(undefined8 *)((long)pppuVar7 + -0x100) = *(undefined8 *)((long)pppuVar7 + -0x100);
        *(undefined8 *)((long)pppuVar7 + -0xf8) = *(undefined8 *)((long)pppuVar7 + -0xf8);
        *(undefined8 *)((long)pppuVar7 + -0xf0) = *(undefined8 *)((long)pppuVar7 + -0xf0);
        *(undefined8 *)((long)pppuVar7 + -0xe8) = *(undefined8 *)((long)pppuVar7 + -0xe8);
        *(undefined8 *)((long)pppuVar7 + -0xe0) = *(undefined8 *)((long)pppuVar7 + -0xe0);
        *(undefined8 *)((long)pppuVar7 + -0xd8) = *(undefined8 *)((long)pppuVar7 + -0xd8);
        *(undefined8 *)((long)pppuVar7 + -0xd0) = *(undefined8 *)((long)pppuVar7 + -0xd0);
        *(undefined8 *)((long)pppuVar7 + -200) = *(undefined8 *)((long)pppuVar7 + -200);
        if (pcRam0000000003ebe400 == (code *)0x0) {
          pcRam0000000003ebe400 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.Animator::SetFloatID(System.Int32,System.Single)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar19 = (undefined1 *)(*pcRam0000000003ebe400)(extraout_s0,lVar28,uVar40);
        return puVar19;
      }
      puVar19 = (undefined1 *)func_0x00f78af4();
      *(undefined8 *)((long)pppuVar7 + -0x130) = 0x3eb4000;
      *(undefined8 *)((long)pppuVar7 + -0x128) = 0x3eb4000;
      *(undefined8 *)((long)pppuVar7 + -0x120) = 0x3d20028;
      *(undefined8 *)((long)pppuVar7 + -0x118) = 0;
      *(undefined1 **)((long)pppuVar7 + -0x110) = (undefined1 *)((long)pppuVar7 + -0xd0);
      *(code **)((long)pppuVar7 + -0x108) = Atlas_Gameplay_Kart_BaseVisualBehaviour___ctor;
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return puVar19;
    }
    uVar40 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x7c);
    puVar19 = *(undefined1 **)((long)pppuVar7 + -0xa0);
    pcVar2 = *(code **)((long)pppuVar7 + -0x98);
    plVar22 = *(long **)((long)pppuVar7 + -0xb0);
    puVar18 = *(undefined1 **)((long)pppuVar7 + -0xa8);
    puVar8 = (undefined1 *)((long)pppuVar7 + -0x90);
    ppuVar34 = *(undefined1 ***)((long)pppuVar7 + -0xc0);
    pcVar31 = *(code **)((long)pppuVar7 + -0xb8);
UnityEngine_Animator__SetTrigger:
    *(undefined1 ***)(puVar8 + -0x30) = ppuVar34;
    *(code **)(puVar8 + -0x28) = pcVar31;
    *(long **)(puVar8 + -0x20) = plVar22;
    *(undefined1 **)(puVar8 + -0x18) = puVar18;
    *(undefined1 **)(puVar8 + -0x10) = puVar19;
    *(code **)(puVar8 + -8) = pcVar2;
    if (pcRam0000000003ebe460 == (code *)0x0) {
      pcRam0000000003ebe460 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar19 = (undefined1 *)(*pcRam0000000003ebe460)(lVar28,uVar40);
    return puVar19;
  }
  Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerCelebrateSmall(*(long *)(lVar17 + 0x38),0);
  if ((*(long *)(lVar17 + 0x30) == 0) ||
     (Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerCelebrateSmall(*(long *)(lVar17 + 0x30),0),
     plVar22 == (long *)0x0)) goto code_r0x015e6938;
  iVar10 = (**(code **)(*plVar22 + 0x188))(plVar22,*(undefined8 *)(*plVar22 + 400));
  lVar17 = *(long *)(lVar17 + 0x20);
  if (iVar10 == 5) {
    if ((lVar17 == 0) ||
       (auVar48._8_8_ = lVar17, auVar48._0_8_ = *(long *)(lVar17 + 0x90),
       *(long *)(lVar17 + 0x90) == 0)) goto code_r0x015e6938;
    puVar18 = (undefined1 *)0x0;
    ppuVar3 = (undefined1 **)&stack0xffffffffffffffb0;
    pppppppuVar36 = pppppppuStack_60;
    pcVar2 = pcStack_58;
  }
  else {
    if ((lVar17 == 0) || (lVar28 = *(long *)(lVar17 + 0x90), lVar28 == 0)) goto code_r0x015e6938;
    puVar18 = (undefined1 *)0x0;
    ppuVar3 = &puStack_b0;
    ppuVar6 = &puStack_b0;
    pppppppuVar36 = &pppppppuStack_60;
    uStack_78 = 0x3eb4000;
    puStack_b0 = puVar19;
    pcStack_a8 = (code *)uVar15;
    if ((bRam0000000003eb47d6 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d3bf08);
      func_0x00f78a20(0x3d3bf00);
      func_0x00f78a20(0x3d1de10);
      func_0x00f78a20(0x3d24b48);
      bRam0000000003eb47d6 = 1;
    }
    if (lVar17 != 0) {
      puVar19 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar17,0);
      lVar21 = 0x28;
      if ((int)puVar19 == 0) {
        lVar21 = 0x30;
      }
      auVar49._8_8_ = *(long *)(lVar28 + lVar21);
      auVar49._0_8_ = lVar17;
      if (*(long *)(lVar28 + lVar21) == 0) {
        return puVar19;
      }
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar18 = *(undefined1 **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x350);
      lVar28 = *(long *)(lVar17 + 0xb8);
      uVar35 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar35,uRam0000000003d3bf00);
      puVar19 = (undefined1 *)func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
      puVar38 = &UNK_0145aa58;
      goto code_r0x014fe3e8;
    }
    pcVar2 = (code *)&Atlas_Audio_AtlasAudioManager__SpeakHitOtherKartTurd;
    auVar48 = func_0x00f78af4();
    param_4 = 0;
  }
  lVar17 = auVar48._8_8_;
  *(undefined8 *)((long)ppuVar3 + -0x30) = unaff_x22;
  *(undefined8 *)((long)ppuVar3 + -0x28) = uStack_78;
  *(long *)((long)ppuVar3 + -0x20) = lVar28;
  *(long *)((long)ppuVar3 + -0x18) = param_4;
  *(undefined8 ********)((long)ppuVar3 + -0x10) = pppppppuVar36;
  *(code **)((long)ppuVar3 + -8) = pcVar2;
  if ((bRam0000000003eb47d7 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb47d7 = 1;
  }
  if (lVar17 == 0) {
    auVar46 = func_0x00f78af4();
    auVar47._8_8_ = puVar18;
    auVar47._0_8_ = auVar46._0_8_;
    *(undefined1 **)((long)ppuVar3 + -0x90) = puVar19;
    *(ulong *)((long)ppuVar3 + -0x88) = uVar15;
    *(undefined8 *)((long)ppuVar3 + -0x80) = unaff_x26;
    *(undefined8 *)((long)ppuVar3 + -0x78) = unaff_x25;
    *(undefined8 *)((long)ppuVar3 + -0x70) = unaff_x24;
    *(undefined8 *)((long)ppuVar3 + -0x68) = unaff_x23;
    *(undefined8 *)((long)ppuVar3 + -0x60) = unaff_x22;
    *(undefined8 *)((long)ppuVar3 + -0x58) = 0x3eb4000;
    *(long *)((long)ppuVar3 + -0x50) = auVar48._0_8_;
    *(undefined8 *)((long)ppuVar3 + -0x48) = 0;
    *(undefined1 **)((long)ppuVar3 + -0x40) = (undefined1 *)((long)ppuVar3 + -0x10);
    *(undefined **)((long)ppuVar3 + -0x38) = &Atlas_Audio_AtlasAudioManager__SpeakHitOtherKart;
    puVar12 = puVar18;
    if ((bRam0000000003eb47d8 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d3bf08);
      func_0x00f78a20(0x3d3bf00);
      func_0x00f78a20(0x3d1de10);
      func_0x00f78a20(0x3d24b48);
      bRam0000000003eb47d8 = 1;
    }
    if (auVar46._8_8_ == 0) {
code_r0x0145ad60:
      puVar38 = &Atlas_Audio_AtlasAudioManager__SpeakCollisionAI;
      auVar47 = func_0x00f78af4();
    }
    else {
      uVar11 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(auVar46._8_8_,0);
      if ((uVar11 & 1) == 0) {
        if (puVar18 == (undefined1 *)0x0) goto code_r0x0145ad60;
        puVar12 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(puVar18,0);
        if ((int)puVar12 == 0) {
          return puVar12;
        }
      }
      puVar12 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
      puVar38 = &UNK_0145ac58;
    }
    auVar49._8_8_ = puVar12;
    auVar49._0_8_ = auVar47._8_8_;
    ppuVar6 = (undefined1 **)((long)ppuVar3 + -0x100);
    *(undefined1 **)((long)ppuVar3 + -0x100) = puVar19;
    *(ulong *)((long)ppuVar3 + -0xf8) = uVar15;
    *(undefined8 *)((long)ppuVar3 + -0xf0) = unaff_x28;
    *(undefined8 *)((long)ppuVar3 + -0xe8) = unaff_x27;
    *(undefined8 *)((long)ppuVar3 + -0xe0) = unaff_x26;
    *(undefined8 *)((long)ppuVar3 + -0xd8) = unaff_x25;
    *(undefined8 *)((long)ppuVar3 + -0xd0) = unaff_x24;
    *(undefined8 *)((long)ppuVar3 + -200) = unaff_x23;
    *(undefined8 *)((long)ppuVar3 + -0xc0) = 0x3eb4000;
    *(undefined1 **)((long)ppuVar3 + -0xb8) = puVar18;
    *(undefined1 (*) [16])((long)ppuVar3 + -0xb0) = auVar46;
    *(undefined1 **)((long)ppuVar3 + -0xa0) = (undefined1 *)((long)ppuVar3 + -0x40);
    *(undefined **)((long)ppuVar3 + -0x98) = puVar38;
    pppppppuVar36 = (undefined8 *******)((long)ppuVar3 + -0xa0);
    puVar13 = auVar47._0_8_;
    puVar18 = puVar12;
    if ((bRam0000000003eb47dc & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d3bf08);
      func_0x00f78a20(0x3d3bf00);
      func_0x00f78a20(0x3d1de10);
      puVar13 = (undefined1 *)func_0x00f78a20(0x3d24b48);
      bRam0000000003eb47dc = 1;
    }
    puVar27 = *(undefined1 **)(auVar47._0_8_ + 0x30);
    if (puVar27 == (undefined1 *)0x0) {
      return puVar13;
    }
    unaff_x25 = 0x3d1ff28;
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (auVar47._8_8_ != 0) {
      lVar28 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x368);
      uVar35 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar35,uRam0000000003d3bf00);
      puVar19 = (undefined1 *)func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
      puVar38 = &UNK_0145ae74;
      puVar18 = puVar27;
      goto code_r0x014fe3e8;
    }
    auVar46 = func_0x00f78af4();
    lVar28 = auVar46._8_8_;
    ppuVar6 = (undefined1 **)((long)ppuVar3 + -0x160);
    *(undefined1 **)((long)ppuVar3 + -0x160) = puVar19;
    *(ulong *)((long)ppuVar3 + -0x158) = uVar15;
    *(undefined8 *)((long)ppuVar3 + -0x150) = unaff_x26;
    *(undefined8 *)((long)ppuVar3 + -0x148) = 0x3d1ff28;
    *(undefined8 *)((long)ppuVar3 + -0x140) = unaff_x24;
    *(undefined8 *)((long)ppuVar3 + -0x138) = unaff_x23;
    *(undefined8 *)((long)ppuVar3 + -0x130) = 0x3eb4000;
    *(undefined1 **)((long)ppuVar3 + -0x128) = puVar27;
    *(undefined1 **)((long)ppuVar3 + -0x120) = puVar12;
    *(undefined8 *)((long)ppuVar3 + -0x118) = 0;
    *(undefined8 ********)((long)ppuVar3 + -0x110) = pppppppuVar36;
    *(undefined **)((long)ppuVar3 + -0x108) = &Atlas_Audio_AtlasAudioManager__SpeakThrowProjectile;
    pppppppuVar36 = (undefined8 *******)((long)ppuVar3 + -0x110);
    if ((bRam0000000003eb47d9 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d3bf08);
      func_0x00f78a20(0x3d3bf00);
      func_0x00f78a20(0x3d1de10);
      func_0x00f78a20(0x3d24b48);
      bRam0000000003eb47d9 = 1;
    }
    if (lVar28 != 0) {
      puVar19 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar28,0);
      if ((int)puVar19 == 0) {
        return puVar19;
      }
      puVar19 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar28,0);
      lVar17 = 0x28;
      if ((int)puVar19 == 0) {
        lVar17 = 0x30;
      }
      lVar17 = *(long *)(auVar46._0_8_ + lVar17);
      auVar49._8_8_ = lVar17;
      auVar49._0_8_ = lVar28;
      if (lVar17 == 0) {
        return puVar19;
      }
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar18 = *(undefined1 **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x350);
      lVar28 = *(long *)(lVar28 + 0xb8);
      uVar35 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar35,uRam0000000003d3bf00);
      puVar19 = (undefined1 *)func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
      puVar38 = &UNK_0145b02c;
      goto code_r0x014fe3e8;
    }
    auVar48 = func_0x00f78af4();
    lVar28 = auVar48._8_8_;
    ppuVar6 = (undefined1 **)((long)ppuVar3 + -0x1c0);
    *(undefined1 **)((long)ppuVar3 + -0x1c0) = puVar19;
    *(ulong *)((long)ppuVar3 + -0x1b8) = uVar15;
    *(undefined8 *)((long)ppuVar3 + -0x1b0) = unaff_x26;
    *(undefined8 *)((long)ppuVar3 + -0x1a8) = 0x3d1ff28;
    *(undefined8 *)((long)ppuVar3 + -0x1a0) = unaff_x24;
    *(undefined8 *)((long)ppuVar3 + -0x198) = unaff_x23;
    *(undefined8 *)((long)ppuVar3 + -400) = 0x3eb4000;
    *(undefined8 *)((long)ppuVar3 + -0x188) = 0x3eb4000;
    *(long *)((long)ppuVar3 + -0x180) = auVar46._0_8_;
    *(undefined8 *)((long)ppuVar3 + -0x178) = 0;
    *(undefined8 ********)((long)ppuVar3 + -0x170) = pppppppuVar36;
    *(undefined **)((long)ppuVar3 + -0x168) = &Atlas_Audio_AtlasAudioManager__SpeakPickupUsable;
    pppppppuVar36 = (undefined8 *******)((long)ppuVar3 + -0x170);
    if ((bRam0000000003eb47da & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d3bf08);
      func_0x00f78a20(0x3d3bf00);
      func_0x00f78a20(0x3d1de10);
      func_0x00f78a20(0x3d24b48);
      bRam0000000003eb47da = 1;
    }
    if (lVar28 != 0) {
      puVar19 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar28,0);
      if ((int)puVar19 == 0) {
        return puVar19;
      }
      puVar19 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar28,0);
      lVar17 = 0x28;
      if ((int)puVar19 == 0) {
        lVar17 = 0x30;
      }
      lVar17 = *(long *)(auVar48._0_8_ + lVar17);
      auVar49._8_8_ = lVar17;
      auVar49._0_8_ = lVar28;
      if (lVar17 == 0) {
        return puVar19;
      }
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar18 = *(undefined1 **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x360);
      lVar28 = *(long *)(lVar28 + 0xb8);
      uVar35 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar35,uRam0000000003d3bf00);
      puVar19 = (undefined1 *)func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
      puVar38 = &UNK_0145b1dc;
      goto code_r0x014fe3e8;
    }
    auVar49 = func_0x00f78af4();
    lVar28 = auVar49._8_8_;
    puVar27 = auVar49._0_8_;
    ppuVar6 = (undefined1 **)((long)ppuVar3 + -0x230);
    *(undefined1 **)((long)ppuVar3 + -0x230) = puVar19;
    *(ulong *)((long)ppuVar3 + -0x228) = uVar15;
    *(undefined8 *)((long)ppuVar3 + -0x220) = unaff_x28;
    *(undefined8 *)((long)ppuVar3 + -0x218) = unaff_x27;
    *(undefined8 *)((long)ppuVar3 + -0x210) = unaff_x26;
    *(undefined8 *)((long)ppuVar3 + -0x208) = 0x3d1ff28;
    *(undefined8 *)((long)ppuVar3 + -0x200) = unaff_x24;
    *(undefined8 *)((long)ppuVar3 + -0x1f8) = unaff_x23;
    *(undefined8 *)((long)ppuVar3 + -0x1f0) = 0x3eb4000;
    *(undefined8 *)((long)ppuVar3 + -0x1e8) = 0x3eb4000;
    *(long *)((long)ppuVar3 + -0x1e0) = auVar48._0_8_;
    *(undefined8 *)((long)ppuVar3 + -0x1d8) = 0;
    *(undefined8 ********)((long)ppuVar3 + -0x1d0) = pppppppuVar36;
    *(undefined **)((long)ppuVar3 + -0x1c8) = &Atlas_Audio_AtlasAudioManager__SpeakCollision;
    pppppppuVar36 = (undefined8 *******)((long)ppuVar3 + -0x1d0);
    puVar12 = puVar27;
    puVar13 = puVar18;
    if ((bRam0000000003eb47db & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d3bf08);
      func_0x00f78a20(0x3d3bf00);
      func_0x00f78a20(0x3d1de10);
      puVar12 = (undefined1 *)func_0x00f78a20(0x3d24b48);
      bRam0000000003eb47db = 1;
    }
    if ((int)puVar18 < 2) {
      return puVar12;
    }
    if (lVar28 != 0) {
      puVar19 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar28,0);
      if (((int)puVar19 == 0) || (*(float *)(puVar27 + 0x70) <= 3.0)) {
        return puVar19;
      }
      puVar19 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar28,0);
      lVar28 = 0x28;
      if ((int)puVar19 == 0) {
        lVar28 = 0x30;
      }
      lVar28 = *(long *)(puVar27 + lVar28);
      if (lVar28 == 0) {
        *(undefined4 *)(puVar27 + 0x70) = 0;
        return puVar19;
      }
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar35 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar35,uRam0000000003d3bf00);
      puVar19 = (undefined1 *)func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
      puVar38 = &UNK_0145b3ac;
      goto code_r0x014fe3e8;
    }
    auVar46 = func_0x00f78af4();
    lVar17 = auVar46._8_8_;
    lVar28 = auVar46._0_8_;
    *(undefined1 **)((long)ppuVar3 + -0x270) = puVar19;
    *(ulong *)((long)ppuVar3 + -0x268) = uVar15;
    *(undefined8 *)((long)ppuVar3 + -0x260) = 0x3eb4000;
    *(undefined1 **)((long)ppuVar3 + -600) = puVar18;
    *(undefined8 *)((long)ppuVar3 + -0x250) = 0;
    *(undefined1 **)((long)ppuVar3 + -0x248) = puVar27;
    *(undefined8 ********)((long)ppuVar3 + -0x240) = pppppppuVar36;
    *(undefined **)((long)ppuVar3 + -0x238) = &Atlas_Audio_AtlasAudioManager__SpeakWinOrLose;
    puVar18 = puVar13;
    if ((bRam0000000003eb47dd & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      bRam0000000003eb47dd = 1;
    }
    if (lVar17 == 0) {
      puVar27 = (undefined1 *)func_0x00f78af4();
      ppuVar6 = (undefined1 **)((long)ppuVar3 + -0x2d0);
      *(undefined1 **)((long)ppuVar3 + -0x2d0) = puVar19;
      *(ulong *)((long)ppuVar3 + -0x2c8) = uVar15;
      *(undefined8 *)((long)ppuVar3 + -0x2c0) = unaff_x26;
      *(undefined8 *)((long)ppuVar3 + -0x2b8) = 0x3d1ff28;
      *(undefined8 *)((long)ppuVar3 + -0x2b0) = unaff_x24;
      *(undefined8 *)((long)ppuVar3 + -0x2a8) = unaff_x23;
      *(undefined8 *)((long)ppuVar3 + -0x2a0) = 0x3eb4000;
      *(undefined1 **)((long)ppuVar3 + -0x298) = puVar13;
      *(long *)((long)ppuVar3 + -0x290) = lVar28;
      *(undefined8 *)((long)ppuVar3 + -0x288) = 0;
      *(undefined1 **)((long)ppuVar3 + -0x280) = (undefined1 *)((long)ppuVar3 + -0x240);
      *(undefined **)((long)ppuVar3 + -0x278) = &Atlas_Audio_AtlasAudioManager__SpeakIntro;
      pppppppuVar36 = (undefined8 *******)((long)ppuVar3 + -0x280);
      puVar12 = puVar27;
      if ((bRam0000000003eb47de & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d3bf08);
        func_0x00f78a20(0x3d3bf00);
        func_0x00f78a20(0x3d1de10);
        puVar12 = (undefined1 *)func_0x00f78a20(0x3d24b48);
        bRam0000000003eb47de = 1;
      }
      lVar28 = *(long *)(puVar27 + 0x48);
      if (lVar28 == 0) {
        return puVar12;
      }
      lVar17 = *(long *)(puVar27 + 0x28);
      auVar49._8_8_ = lVar17;
      auVar49._0_8_ = lVar28;
      if (lVar17 == 0) {
        return puVar12;
      }
      unaff_x24 = 0x3d1ff28;
      lVar21 = lVar28;
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) == 0) ||
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) != 0)) {
code_r0x0145b5fc:
        puVar18 = *(undefined1 **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x350);
        lVar28 = *(long *)(lVar21 + 0xb8);
        uVar35 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar35,uRam0000000003d3bf00);
        puVar19 = (undefined1 *)func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
        puVar38 = &UNK_0145b660;
        goto code_r0x014fe3e8;
      }
      func_0x00f78ad0();
      lVar21 = *(long *)(puVar27 + 0x48);
      if (lVar21 != 0) goto code_r0x0145b5fc;
      auVar50 = func_0x00f78af4();
      puVar13 = auVar50._8_8_;
      puVar32 = auVar50._0_8_;
      puVar4 = (undefined1 *)((long)ppuVar3 + -0x330);
      *(undefined8 *)((long)ppuVar3 + -0x330) = unaff_d11;
      *(ulong *)((long)ppuVar3 + -0x328) = (ulong)(uint)param_3;
      *(undefined1 **)((long)ppuVar3 + -800) = puVar19;
      *(ulong *)((long)ppuVar3 + -0x318) = uVar15;
      *(undefined8 *)((long)ppuVar3 + -0x310) = 0x3d1ff28;
      *(undefined8 *)((long)ppuVar3 + -0x308) = unaff_x23;
      *(undefined8 *)((long)ppuVar3 + -0x300) = 0x3eb4000;
      *(undefined1 **)((long)ppuVar3 + -0x2f8) = puVar27;
      *(long *)((long)ppuVar3 + -0x2f0) = lVar17;
      *(long *)((long)ppuVar3 + -0x2e8) = lVar28;
      *(undefined8 ********)((long)ppuVar3 + -0x2e0) = pppppppuVar36;
      *(undefined **)((long)ppuVar3 + -0x2d8) = &Atlas_Audio_AtlasAudioManager__SpeakOvertake;
      puVar12 = (undefined1 *)((long)ppuVar3 + -0x2e0);
      uVar35 = 0x3eb4000;
      puVar27 = puVar32;
      if ((bRam0000000003eb47df & 1) == 0) {
        puVar27 = (undefined1 *)func_0x00f78a20(0x3d1ff28);
        bRam0000000003eb47df = 1;
      }
      if (*(int *)(puVar32 + 0x50) != 0) {
        return puVar27;
      }
      lVar28 = *(long *)(puVar32 + 0x68);
      if (lVar28 == 0) {
        return puVar27;
      }
      if ((int)(*(uint *)(lVar28 + 0x18) - 1) <= (int)puVar18) {
        return puVar27;
      }
      lVar17 = (long)(int)puVar18 + 1;
      if ((uint)lVar17 < *(uint *)(lVar28 + 0x18)) {
        lVar28 = *(long *)(lVar28 + lVar17 * 8 + 0x20);
        if (((lVar28 != 0) && (lVar28 = *(long *)(lVar28 + 0x10), lVar28 != 0)) &&
           (puVar13 != (undefined1 *)0x0)) {
          puVar18 = *(undefined1 **)(lVar28 + 0x70);
          uVar11 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(puVar13,0);
          if ((uVar11 & 1) == 0) {
            if (puVar18 == (undefined1 *)0x0) goto code_r0x0145b92c;
            puVar27 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(puVar18,0);
            if ((int)puVar27 == 0) {
              return puVar27;
            }
          }
          if (((*(long *)(puVar13 + 0xb8) != 0) &&
              (uVar40 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(puVar13 + 0xb8),0), puVar18 != (undefined1 *)0x0))
             && (*(long *)(puVar18 + 0xb8) != 0)) {
            puVar19 = (undefined1 *)(ulong)(uint)fVar42;
            fVar44 = fVar42;
            fVar45 = fVar43;
            uVar41 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(puVar18 + 0xb8),0);
            fVar42 = (float)/*UnityEngine.Vector3$$Distance*/ func_0x0327bcbc(uVar40,fVar42,fVar43,uVar41,fVar44,fVar45,0);
            unaff_x23 = 0x3d1ff28;
            if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar28 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8);
            if (*(float *)(lVar28 + 0x31c) <= fVar42 || puVar18 == puVar13) {
              return /*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28;
            }
            fVar42 = *(float *)(puVar32 + 0x74);
            uVar15 = (ulong)(uint)fVar42;
            if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
              func_0x00f78ad0();
              lVar28 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8);
            }
            if (fVar42 < *(float *)(lVar28 + 0x318)) {
              return /*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28;
            }
            puVar27 = *(undefined1 **)(puVar32 + 0x28);
            if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar35 = 0;
            if (puVar27 != (undefined1 *)0x0) {
              lVar23 = *(long *)(puVar13 + 0xb8);
              uVar39 = *(undefined4 *)(puVar13 + 0x180);
              lVar21 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x378);
              uVar41 = 4;
              puVar38 = &UNK_0145b8cc;
              lVar28 = lVar21;
              puVar32 = puVar27;
              uVar40 = 0;
              goto code_r0x014fe2a8;
            }
          }
        }
code_r0x0145b92c:
        func_0x00f78af4();
      }
      uVar30 = func_0x00f78b24();
      auVar46 = func_0x00f78ac0(uVar30,0);
      lVar17 = auVar46._8_8_;
      lVar28 = auVar46._0_8_;
      ppuVar6 = (undefined1 **)((long)ppuVar3 + -0x390);
      *(undefined1 **)((long)ppuVar3 + -0x390) = puVar19;
      *(ulong *)((long)ppuVar3 + -0x388) = uVar15;
      *(undefined8 *)((long)ppuVar3 + -0x380) = unaff_x26;
      *(undefined8 *)((long)ppuVar3 + -0x378) = 0x3d1ff28;
      *(undefined8 *)((long)ppuVar3 + -0x370) = 0x3d1ff28;
      *(undefined8 *)((long)ppuVar3 + -0x368) = unaff_x23;
      *(undefined8 *)((long)ppuVar3 + -0x360) = uVar35;
      *(undefined1 **)((long)ppuVar3 + -0x358) = puVar18;
      *(undefined1 **)((long)ppuVar3 + -0x350) = puVar13;
      *(undefined1 **)((long)ppuVar3 + -0x348) = puVar32;
      *(undefined1 **)((long)ppuVar3 + -0x340) = puVar12;
      *(undefined **)((long)ppuVar3 + -0x338) = &Atlas_Audio_AtlasAudioManager__SpeakRespawning;
      pppppppuVar36 = (undefined8 *******)((long)ppuVar3 + -0x340);
      lVar21 = 0x3eb4000;
      if ((bRam0000000003eb47e0 & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d3bf08);
        func_0x00f78a20(0x3d3bf00);
        func_0x00f78a20(0x3d1de10);
        func_0x00f78a20(0x3d24b48);
        bRam0000000003eb47e0 = 1;
      }
      if (lVar17 != 0) {
        puVar18 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar17,0);
        lVar21 = 0x28;
        if ((int)puVar18 == 0) {
          lVar21 = 0x30;
        }
        lVar21 = *(long *)(lVar28 + lVar21);
        auVar49._8_8_ = lVar21;
        auVar49._0_8_ = lVar17;
        if (lVar21 == 0) {
          return puVar18;
        }
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(long *)(lVar28 + 0x48) != 0) {
          puVar18 = *(undefined1 **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x350);
          lVar28 = *(long *)(*(long *)(lVar28 + 0x48) + 0xb8);
          uVar35 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar35,uRam0000000003d3bf00);
          puVar19 = (undefined1 *)func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
          puVar38 = &UNK_0145ba68;
          goto code_r0x014fe3e8;
        }
      }
      unaff_x24 = 0x3d1ff28;
      puVar12 = (undefined1 *)func_0x00f78af4();
      *(undefined8 *)((long)ppuVar3 + -0x3c0) = uVar35;
      *(long *)((long)ppuVar3 + -0x3b8) = lVar28;
      *(long *)((long)ppuVar3 + -0x3b0) = lVar21;
      *(long *)((long)ppuVar3 + -0x3a8) = lVar17;
      *(undefined8 ********)((long)ppuVar3 + -0x3a0) = pppppppuVar36;
      *(undefined **)((long)ppuVar3 + -0x398) = &Atlas_Audio_AtlasAudioManager__SpeakShield;
      puVar18 = puVar12;
      if ((bRam0000000003eb47e1 & 1) == 0) {
        puVar18 = (undefined1 *)func_0x00f78a20(0x3d1ff28);
        bRam0000000003eb47e1 = 1;
      }
      lVar17 = *(long *)(puVar12 + 0x48);
      if (lVar17 == 0) {
        return puVar18;
      }
      puVar27 = *(undefined1 **)(puVar12 + 0x28);
      lVar24 = lVar17;
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) == 0) ||
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) != 0)) {
joined_r0x0145bb44:
        if (puVar27 != (undefined1 *)0x0) {
          lVar21 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x350);
          lVar28 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x310);
          lVar23 = *(long *)(lVar24 + 0xb8);
          uVar39 = *(undefined4 *)(lVar24 + 0x180);
          uVar41 = 1;
          puVar12 = *(undefined1 **)((long)ppuVar3 + -0x3a0);
          puVar38 = *(undefined **)((long)ppuVar3 + -0x398);
          puVar13 = *(undefined1 **)((long)ppuVar3 + -0x3b0);
          auVar50._8_8_ = lVar17;
          auVar50._0_8_ = *(undefined8 *)((long)ppuVar3 + -0x3a8);
          puVar4 = (undefined1 *)((long)ppuVar3 + -0x390);
          puVar32 = *(undefined1 **)((long)ppuVar3 + -0x3c0);
          puVar18 = *(undefined1 **)((long)ppuVar3 + -0x3b8);
          unaff_x25 = 0x3d1ff28;
          uVar40 = _UNK_033f813c;
          goto code_r0x014fe2a8;
        }
      }
      else {
        func_0x00f78ad0();
        lVar24 = *(long *)(puVar12 + 0x48);
        if (lVar24 != 0) goto joined_r0x0145bb44;
      }
      auVar49 = func_0x00f78af4();
      lVar24 = auVar49._8_8_;
      *(undefined8 *)((long)ppuVar3 + -0x3f0) = 0x3d1ff28;
      *(undefined1 **)((long)ppuVar3 + -1000) = puVar12;
      *(undefined1 **)((long)ppuVar3 + -0x3e0) = puVar27;
      *(long *)((long)ppuVar3 + -0x3d8) = lVar17;
      *(undefined1 **)((long)ppuVar3 + -0x3d0) = (undefined1 *)((long)ppuVar3 + -0x3a0);
      *(undefined **)((long)ppuVar3 + -0x3c8) = &Atlas_Audio_AtlasAudioManager__SpeakOffRoad;
      puVar27 = (undefined1 *)0x3eb4000;
      if ((bRam0000000003eb47e2 & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        bRam0000000003eb47e2 = 1;
      }
      if (lVar24 != 0) {
        puVar18 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar24,0);
        if ((int)puVar18 == 0) {
          return puVar18;
        }
        puVar27 = *(undefined1 **)(auVar49._0_8_ + 0x28);
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar17 = *(long *)(auVar49._0_8_ + 0x48);
        if ((lVar17 != 0) && (puVar27 != (undefined1 *)0x0)) {
          lVar21 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x350);
          lVar28 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x310);
          lVar23 = *(long *)(lVar17 + 0xb8);
          uVar39 = *(undefined4 *)(lVar17 + 0x180);
          uVar40 = 0;
          uVar41 = 3;
          puVar12 = *(undefined1 **)((long)ppuVar3 + -0x3d0);
          puVar38 = *(undefined **)((long)ppuVar3 + -0x3c8);
          puVar13 = *(undefined1 **)((long)ppuVar3 + -0x3e0);
          auVar50._8_8_ = lVar24;
          auVar50._0_8_ = *(undefined8 *)((long)ppuVar3 + -0x3d8);
          puVar4 = (undefined1 *)((long)ppuVar3 + -0x3c0);
          puVar32 = *(undefined1 **)((long)ppuVar3 + -0x3f0);
          puVar18 = *(undefined1 **)((long)ppuVar3 + -1000);
          unaff_x25 = 0x3d1ff28;
          goto code_r0x014fe2a8;
        }
      }
      uVar35 = 0x3d1ff28;
      auVar46 = func_0x00f78af4();
      lVar28 = auVar46._8_8_;
      ppuVar6 = (undefined1 **)((long)ppuVar3 + -0x450);
      puVar5 = (undefined1 *)((long)ppuVar3 + -0x450);
      *(undefined1 **)((long)ppuVar3 + -0x450) = puVar19;
      *(ulong *)((long)ppuVar3 + -0x448) = uVar15;
      *(undefined8 *)((long)ppuVar3 + -0x440) = unaff_x26;
      *(undefined8 *)((long)ppuVar3 + -0x438) = 0x3d1ff28;
      *(undefined8 *)((long)ppuVar3 + -0x430) = 0x3d1ff28;
      *(undefined8 *)((long)ppuVar3 + -0x428) = unaff_x23;
      *(undefined8 *)((long)ppuVar3 + -0x420) = 0x3d1ff28;
      *(undefined1 **)((long)ppuVar3 + -0x418) = puVar27;
      *(undefined1 (*) [16])((long)ppuVar3 + -0x410) = auVar49;
      *(undefined1 **)((long)ppuVar3 + -0x400) = (undefined1 *)((long)ppuVar3 + -0x3d0);
      *(undefined **)((long)ppuVar3 + -0x3f8) = &Atlas_Audio_AtlasAudioManager__SpeakSneer;
      pppppppuVar36 = (undefined8 *******)((long)ppuVar3 + -0x400);
      plVar22 = (long *)0x3eb4000;
      if ((bRam0000000003eb47e3 & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d3bf08);
        func_0x00f78a20(0x3d3bf00);
        func_0x00f78a20(0x3d1de10);
        func_0x00f78a20(0x3d24b48);
        bRam0000000003eb47e3 = 1;
      }
      if (lVar28 != 0) {
        puVar18 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar28,0);
        lVar17 = 0x28;
        if ((int)puVar18 == 0) {
          lVar17 = 0x30;
        }
        plVar22 = *(long **)(auVar46._0_8_ + lVar17);
        auVar49._8_8_ = plVar22;
        auVar49._0_8_ = lVar28;
        if (plVar22 == (long *)0x0) {
          return puVar18;
        }
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar28 = *(long *)(auVar46._0_8_ + 0x48);
        if (lVar28 != 0) {
          puVar18 = *(undefined1 **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x350);
          lVar28 = *(long *)(lVar28 + 0xb8);
          uVar35 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar35,uRam0000000003d3bf00);
          puVar19 = (undefined1 *)func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
          puVar38 = &UNK_0145bdac;
          goto code_r0x014fe3e8;
        }
      }
      unaff_x24 = 0x3d1ff28;
      pcVar2 = (code *)&Atlas_Audio_AtlasAudioManager__SpeakIncoming;
      auVar51 = func_0x00f78af4();
      goto code_r0x0145be28;
    }
    puVar19 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar17,0);
    if ((int)puVar19 == 0) {
      return puVar19;
    }
    uVar9 = (uint)puVar13;
    uVar40 = 0x40000000;
    if (8 < uVar9) {
      uVar40 = 0x40400000;
    }
    uVar41 = 0x3f800000;
    if (3 < uVar9) {
      uVar41 = uVar40;
    }
    uVar40 = 0;
    if (1 < (int)uVar9) {
      uVar40 = uVar41;
    }
    /*Atlas.Audio.KartAudio$$OnRaceFinished*/ func_0x015c133c(lVar17,0);
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar19 = (undefined1 *)
              /*Core.Audio.AudioManager$$SetGlobalParameter*/ func_0x01639e60(uVar40,lVar28,
                              *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x370),0,0);
    puVar27 = *(undefined1 **)(lVar28 + 0x28);
    if (puVar27 == (undefined1 *)0x0) {
      return puVar19;
    }
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar23 = *(long *)(lVar17 + 0xb8);
    uVar39 = *(undefined4 *)(lVar17 + 0x180);
    lVar21 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x370);
    uVar41 = 1;
    puVar12 = *(undefined1 **)((long)ppuVar3 + -0x240);
    puVar38 = *(undefined **)((long)ppuVar3 + -0x238);
    puVar13 = *(undefined1 **)((long)ppuVar3 + -0x250);
    auVar50._8_8_ = lVar17;
    auVar50._0_8_ = *(undefined8 *)((long)ppuVar3 + -0x248);
    puVar4 = (undefined1 *)((long)ppuVar3 + -0x230);
    puVar19 = *(undefined1 **)((long)ppuVar3 + -0x270);
    uVar15 = *(ulong *)((long)ppuVar3 + -0x268);
    lVar28 = 0;
    puVar18 = *(undefined1 **)((long)ppuVar3 + -600);
    puVar32 = *(undefined1 **)((long)ppuVar3 + -0x260);
    uVar40 = 0;
code_r0x014fe2a8:
    lVar17 = auVar50._8_8_;
    *(undefined1 **)(puVar4 + -0x70) = puVar19;
    *(ulong *)(puVar4 + -0x68) = uVar15;
    *(undefined8 *)(puVar4 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar4 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
    *(undefined1 **)(puVar4 + -0x30) = puVar32;
    *(undefined1 **)(puVar4 + -0x28) = puVar18;
    *(undefined1 **)(puVar4 + -0x20) = puVar13;
    *(long *)(puVar4 + -0x18) = auVar50._0_8_;
    *(undefined1 **)(puVar4 + -0x10) = puVar12;
    *(undefined **)(puVar4 + -8) = puVar38;
    if ((bRam0000000003eb4cd9 & 1) == 0) {
      func_0x00f78a20(0x3d3bf08);
      func_0x00f78a20(0x3d3bf00);
      func_0x00f78a20(0x3d1de10);
      func_0x00f78a20(0x3d24b48);
      bRam0000000003eb4cd9 = 1;
    }
    if (lVar28 != 0) {
      uVar35 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar35,uRam0000000003d3bf00);
      puVar19 = (undefined1 *)func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
      return puVar19;
    }
    uVar35 = *(undefined8 *)(puVar4 + -0x10);
    uVar37 = *(undefined8 *)(puVar4 + -8);
    uVar30 = *(undefined8 *)(puVar4 + -0x20);
    uVar26 = *(undefined8 *)(puVar4 + -0x18);
    uVar33 = *(undefined8 *)(puVar4 + -0x30);
    uVar29 = *(undefined8 *)(puVar4 + -0x28);
    unaff_x24 = *(undefined8 *)(puVar4 + -0x40);
    unaff_x23 = *(undefined8 *)(puVar4 + -0x38);
    unaff_x26 = *(undefined8 *)(puVar4 + -0x50);
    unaff_x25 = *(undefined8 *)(puVar4 + -0x48);
    unaff_x28 = *(undefined8 *)(puVar4 + -0x60);
    unaff_x27 = *(undefined8 *)(puVar4 + -0x58);
    puVar19 = *(undefined1 **)(puVar4 + -0x70);
    uVar15 = *(ulong *)(puVar4 + -0x68);
  }
  else {
    puVar18 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar17,0);
    lVar28 = 0x28;
    if ((int)puVar18 == 0) {
      lVar28 = 0x30;
    }
    puVar27 = *(undefined1 **)(auVar48._0_8_ + lVar28);
    if (puVar27 == (undefined1 *)0x0) {
      return puVar18;
    }
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar23 = *(long *)(lVar17 + 0xb8);
    uVar39 = *(undefined4 *)(lVar17 + 0x180);
    lVar21 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x358);
    uVar40 = 0;
    uVar41 = 1;
    uVar35 = *(undefined8 *)((long)ppuVar3 + -0x10);
    uVar37 = *(undefined8 *)((long)ppuVar3 + -8);
    uVar30 = *(undefined8 *)((long)ppuVar3 + -0x20);
    uVar26 = *(undefined8 *)((long)ppuVar3 + -0x18);
    uVar33 = *(undefined8 *)((long)ppuVar3 + -0x30);
    uVar29 = *(undefined8 *)((long)ppuVar3 + -0x28);
    puVar4 = (undefined1 *)ppuVar3;
  }
  auVar52._8_8_ = lVar17;
  auVar52._0_8_ = puVar27;
  piVar25 = (int *)0x0;
  *(undefined1 **)(puVar4 + -0x50) = puVar19;
  *(ulong *)(puVar4 + -0x48) = uVar15;
  *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar4 + -0x30) = uVar33;
  *(undefined8 *)(puVar4 + -0x28) = uVar29;
  *(undefined8 *)(puVar4 + -0x20) = uVar30;
  *(undefined8 *)(puVar4 + -0x18) = uVar26;
  *(undefined8 *)(puVar4 + -0x10) = uVar35;
  *(undefined8 *)(puVar4 + -8) = uVar37;
  *(undefined4 *)(puVar4 + -0x54) = uVar41;
  lVar28 = lVar21;
  lVar24 = lVar23;
  if ((bRam0000000003eb4cda & 1) == 0) {
    func_0x00f78a20(uVar39,uVar40,0x3d3da38);
    bRam0000000003eb4cda = 1;
  }
  if (puVar27[0x34] == '\0') {
code_r0x014fe49c:
    piVar25 = (int *)(puVar4 + -0x54);
    lVar24 = 0;
    puVar38 = &UNK_014fe4b4;
    lVar28 = lVar21;
  }
  else {
    if (*(long *)(puVar27 + 0x10) != 0) {
      if (*(char *)(*(long *)(puVar27 + 0x10) + 0xcb) == '\0') {
        return (undefined1 *)0x0;
      }
      goto code_r0x014fe49c;
    }
    puVar38 = &Atlas_Audio_SpeechManager__CheckSpeechRules;
    auVar52 = func_0x00f78af4();
  }
  lVar20 = auVar52._8_8_;
  lVar14 = auVar52._0_8_;
  *(undefined8 *)(puVar4 + -0xc0) = unaff_x28;
  *(undefined8 *)(puVar4 + -0xb8) = unaff_x27;
  *(undefined8 *)(puVar4 + -0xb0) = unaff_x26;
  *(undefined8 *)(puVar4 + -0xa8) = unaff_x25;
  *(undefined8 *)(puVar4 + -0xa0) = 0x3eb4000;
  *(long *)(puVar4 + -0x98) = lVar17;
  *(long *)(puVar4 + -0x90) = lVar21;
  *(undefined1 **)(puVar4 + -0x88) = puVar27;
  *(long *)(puVar4 + -0x80) = lVar23;
  *(undefined8 *)(puVar4 + -0x78) = 0;
  *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x68) = puVar38;
  if ((bRam0000000003eb4cde & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d30020);
    func_0x00f78a20(0x3d30028);
    func_0x00f78a20(0x3d32f50);
    func_0x00f78a20(0x3d32f58);
    func_0x00f78a20(0x3d32f60);
    func_0x00f78a20(0x3d3bf10);
    func_0x00f78a20(0x3d269f8);
    bRam0000000003eb4cde = 1;
  }
  *(undefined8 *)(puVar4 + -0xe0) = 0;
  *(undefined8 *)(puVar4 + -0xd8) = 0;
  *(undefined8 *)(puVar4 + -0xd0) = 0;
  *(undefined4 *)(puVar4 + -0xe4) = 0;
  if (*(long *)(lVar14 + 0x10) == 0) goto code_r0x014fe8f8;
  if (*(char *)(*(long *)(lVar14 + 0x10) + 0x90) != '\0') {
    return (undefined1 *)0x0;
  }
  if (lVar20 == 0) goto code_r0x014fe8f8;
  uVar15 = /*Atlas.Audio.KartAudio$$IsFarAI*/ func_0x015c1344(lVar20,0);
  if ((uVar15 & 1) != 0) {
    return (undefined1 *)0x0;
  }
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar10 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar28,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x350),0
                          );
  if (iVar10 != 0) {
    if (lVar24 == 0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar4 + -0x100,lVar24,uRam0000000003d3bf10);
    *(undefined8 *)(puVar4 + -0xd8) = *(undefined8 *)(puVar4 + -0xf8);
    *(undefined8 *)(puVar4 + -0xe0) = *(undefined8 *)(puVar4 + -0x100);
    *(undefined8 *)(puVar4 + -0xd0) = *(undefined8 *)(puVar4 + -0xf0);
    while (uVar15 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar4 + -0xe0,uRam0000000003d32f58), (uVar15 & 1) != 0) {
      lVar17 = *(long *)(puVar4 + -0xd0);
      if (lVar17 == 0) {
        func_0x00f78af4();
        goto code_r0x014fe900;
      }
      uVar35 = *(undefined8 *)(lVar17 + 0x10);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar15 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar35,*(undefined8 *)
                                       (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x310),0);
      if ((uVar15 & 1) != 0) {
        fVar43 = *(float *)(lVar17 + 0x18);
        fVar42 = -fVar43;
        if (fVar43 != INFINITY) {
          fVar42 = fVar43;
        }
        *(int *)(puVar4 + -0xe4) = (int)fVar42;
        plVar22 = (long *)func_0x00f78ae0(/*Atlas.Audio.AtlasAudioManager.RaceEvent_TypeInfo*/ uRam0000000003d269f8,puVar4 + -0xe4);
        if (plVar22 == (long *)0x0) goto code_r0x014fe8fc;
        uVar35 = (**(code **)(*plVar22 + 0x168))(plVar22,*(undefined8 *)(*plVar22 + 0x170));
        puVar16 = (undefined4 *)func_0x00f78ae4(plVar22);
        *(undefined4 *)(puVar4 + -0xe4) = *puVar16;
        lVar28 = /*System.String$$Concat*/ func_0x029bdb88(lVar28,uVar35,0);
      }
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar4 + -0xe0,uRam0000000003d32f50);
  }
  if (*(long *)(lVar14 + 0x28) == 0) goto code_r0x014fe8f8;
  iVar10 = /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$ContainsKey*/ func_0x01ef3924(*(long *)(lVar14 + 0x28),lVar28,uRam0000000003d30020);
  if (iVar10 == 0) {
code_r0x014fe888:
    puVar19 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (*(long *)(lVar14 + 0x28) == 0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$get_Item*/ func_0x01ef35d0(*(long *)(lVar14 + 0x28),lVar28,uRam0000000003d30028);
    if ((extraout_x1_00 & 0xff00000000) == 0) {
      if (*piVar25 - 1U < 2) {
        iVar10 = 4;
        goto code_r0x014fe860;
      }
    }
    else {
      iVar10 = 1;
code_r0x014fe860:
      *piVar25 = iVar10;
    }
    iVar10 = (int)extraout_x1_00;
    if (iVar10 == 3) {
      if ((*(long *)(lVar20 + 0xa0) == 0) ||
         (lVar28 = *(long *)(*(long *)(lVar20 + 0xa0) + 0x90), lVar28 == 0)) {
code_r0x014fe8f8:
        func_0x00f78af4();
code_r0x014fe8fc:
        func_0x00f78af4();
code_r0x014fe900:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x14fe904);
        (*pcVar2)();
      }
      iVar10 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar28,0);
      if (1 < iVar10) {
        iVar10 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,4,0);
        return (undefined1 *)(ulong)(iVar10 < 3);
      }
      uVar15 = 2;
    }
    else {
      uVar15 = extraout_x1_00;
      if (iVar10 != 2) {
        if (iVar10 == 0) {
          puVar19 = (undefined1 *)/*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(lVar20,0);
          return puVar19;
        }
        goto code_r0x014fe888;
      }
    }
    iVar10 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar15,0);
    puVar19 = (undefined1 *)(ulong)(iVar10 == 0);
  }
  return puVar19;
}



// ============================================================
// RVA: 0x15e73e0 | Atlas.Gameplay.Kart.KartVisualBehaviour.get_WheelSteerFL
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartVisualBehaviour__get_WheelSteerFL(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x15e73e8 | Atlas.Gameplay.Kart.KartVisualBehaviour.get_WheelSteerFR
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartVisualBehaviour__get_WheelSteerFR(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x15e73f0 | Atlas.Gameplay.Kart.KartVisualBehaviour.get_WheelRotFL
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartVisualBehaviour__get_WheelRotFL(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x15e73f8 | Atlas.Gameplay.Kart.KartVisualBehaviour.get_WheelRotFR
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartVisualBehaviour__get_WheelRotFR(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x15e7400 | Atlas.Gameplay.Kart.KartVisualBehaviour.get_WheelRotRL
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartVisualBehaviour__get_WheelRotRL(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x15e7408 | Atlas.Gameplay.Kart.KartVisualBehaviour.get_WheelRotRR
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartVisualBehaviour__get_WheelRotRR(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x15e7410 | Atlas.Gameplay.Kart.KartVisualBehaviour.get_SteeringWheel
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartVisualBehaviour__get_SteeringWheel(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x15e7418 | Atlas.Gameplay.Kart.KartVisualBehaviour.get_DropShadowMeshRenderer
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartVisualBehaviour__get_DropShadowMeshRenderer(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x15e7420 | Atlas.Gameplay.Kart.KartVisualBehaviour.get_SteeringWheelVisualRoot
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartVisualBehaviour__get_SteeringWheelVisualRoot(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x15e7428 | Atlas.Gameplay.Kart.KartVisualBehaviour.get_CharacterFollowTransform
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartVisualBehaviour__get_CharacterFollowTransform(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x15e7430 | Atlas.Gameplay.Kart.KartVisualBehaviour.get_AntennaAttachmentPoint
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartVisualBehaviour__get_AntennaAttachmentPoint(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x15e7438 | Atlas.Gameplay.Kart.KartVisualBehaviour.get_HopBoostSuccessDuration
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartVisualBehaviour__get_HopBoostSuccessDuration(long param_1)

{
  return *(undefined4 *)(param_1 + 0x178);
}



// ============================================================
// RVA: 0x15e7440 | Atlas.Gameplay.Kart.KartVisualBehaviour.get_VfxBoostObjects
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartVisualBehaviour__get_VfxBoostObjects(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x15e7448 | Atlas.Gameplay.Kart.KartVisualBehaviour.get_VfxBoostLeft1
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartVisualBehaviour__get_VfxBoostLeft1(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



// ============================================================
// RVA: 0x15e7450 | Atlas.Gameplay.Kart.KartVisualBehaviour.get_VfxBoostRight1
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartVisualBehaviour__get_VfxBoostRight1(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



// ============================================================
// RVA: 0x15e7458 | Atlas.Gameplay.Kart.KartVisualBehaviour.get_VfxBoostLeft2
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartVisualBehaviour__get_VfxBoostLeft2(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



// ============================================================
// RVA: 0x15e7460 | Atlas.Gameplay.Kart.KartVisualBehaviour.get_VfxBoostRight2
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartVisualBehaviour__get_VfxBoostRight2(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



// ============================================================
// RVA: 0x15e7468 | Atlas.Gameplay.Kart.KartVisualBehaviour.get_VfxBoostLeft3
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartVisualBehaviour__get_VfxBoostLeft3(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



// ============================================================
// RVA: 0x15e7470 | Atlas.Gameplay.Kart.KartVisualBehaviour.get_VfxBoostRight3
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartVisualBehaviour__get_VfxBoostRight3(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



// ============================================================
// RVA: 0x15e7478 | Atlas.Gameplay.Kart.KartVisualBehaviour.get_VfxBoostSparks
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartVisualBehaviour__get_VfxBoostSparks(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



// ============================================================
// RVA: 0x15e7480 | Atlas.Gameplay.Kart.KartVisualBehaviour.Init
// ============================================================

void Atlas_Gameplay_Kart_KartVisualBehaviour__Init
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  long unaff_x22;
  long lVar10;
  uint uVar11;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
  ulong uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb53da & 1) == 0) {
    func_0x00f78a20(0x3d53518);
    func_0x00f78a20(0x3d579b0);
    func_0x00f78a20(0x3d578b0);
    func_0x00f78a20(0x3d22d20);
    func_0x00f78a20(0x3d3c778);
    func_0x00f78a20(0x3d3c770);
    func_0x00f78a20(0x3d1df98);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb53da = 1;
  }
  uStack_58 = 0;
  Atlas_Gameplay_Kart_BaseVisualBehaviour__Init(param_5,0);
  lVar9 = *(long *)(param_5 + 0x30);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = 0;
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
  if (iVar2 == 0) {
LAB_015e7584:
    lVar9 = *(long *)(param_5 + 0x38);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = 0;
    iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
    if (iVar2 != 0) {
      if ((*(long *)(param_5 + 0x38) == 0) ||
         (lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_5 + 0x38),0), lVar3 == 0)) goto LAB_015e7a28;
      uVar13 = /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(lVar3,0);
      *(undefined4 *)(param_5 + 0x10c) = uVar13;
      *(undefined4 *)(param_5 + 0x110) = param_2;
      *(undefined4 *)(param_5 + 0x114) = param_3;
    }
    lVar9 = *(long *)(param_5 + 0x40);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = 0;
    iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
    if (iVar2 != 0) {
      if ((*(long *)(param_5 + 0x40) == 0) ||
         (lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_5 + 0x40),0), lVar3 == 0)) goto LAB_015e7a28;
      uVar13 = /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(lVar3,0);
      *(undefined4 *)(param_5 + 0x118) = uVar13;
      *(undefined4 *)(param_5 + 0x11c) = param_2;
      *(undefined4 *)(param_5 + 0x120) = param_3;
    }
    lVar9 = *(long *)(param_5 + 0x48);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = 0;
    iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
    if (iVar2 != 0) {
      if ((*(long *)(param_5 + 0x48) == 0) ||
         (lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_5 + 0x48),0), lVar3 == 0)) goto LAB_015e7a28;
      uVar13 = /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(lVar3,0);
      *(undefined4 *)(param_5 + 0x124) = uVar13;
      *(undefined4 *)(param_5 + 0x128) = param_2;
      *(undefined4 *)(param_5 + 300) = param_3;
    }
    lVar9 = *(long *)(param_5 + 0xc0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = 0;
    iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
    if (iVar2 != 0) {
      if ((*(long *)(param_5 + 0xc0) == 0) ||
         (lVar3 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(*(long *)(param_5 + 0xc0),uRam0000000003d578b0), lVar3 == 0))
      goto LAB_015e7a28;
      uStack_58 = /*UnityEngine.ParticleSystem$$get_main*/ func_0x03296084(lVar3,0);
      uVar13 = /*UnityEngine.ParticleSystem.MainModule$$get_duration*/ func_0x03296420(&uStack_58,0);
      *(undefined4 *)(param_5 + 0x178) = uVar13;
    }
    lVar9 = *(long *)(param_5 + 0x88);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = 0;
    iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
    if (iVar2 == 0) {
LAB_015e779c:
      lVar9 = *(long *)(param_5 + 0x90);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = 0;
      iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
      if (iVar2 == 0) {
LAB_015e7844:
        lVar9 = *(long *)(param_5 + 0xa8);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar7 = 0;
        iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
        if (iVar2 == 0) {
LAB_015e78c0:
          lVar9 = *(long *)(param_5 + 0xb0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar7 = 0;
          iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
          if (iVar2 == 0) {
LAB_015e793c:
            lVar9 = func_0x00f78aec(/*System.Collections.Generic.List<VFXBoostTiedBehaviour>_TypeInfo*/ uRam0000000003d1df98);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar9,uRam0000000003d3c770);
            *(long *)(param_5 + 0x198) = lVar9;
            unaff_x22 = *(long *)(param_5 + 0x78);
            if (unaff_x22 != 0) {
              uVar8 = *(uint *)(unaff_x22 + 0x18);
              if (0 < (int)uVar8) {
                unaff_x23 = 0;
                uVar12 = 0x3d579b0;
                do {
                  uVar11 = (uint)unaff_x23;
                  if (uVar8 <= uVar11) goto LAB_015e7a2c;
                  lVar3 = *(long *)(unaff_x22 + (long)(int)uVar11 * 8 + 0x20);
                  unaff_x24 = uVar12;
                  if (lVar3 == 0) goto LAB_015e7a28;
                  lVar9 = /*UnityEngine.GameObject$$GetComponentInChildren<TMP_Dropdown.DropdownItem>*/ func_0x0185d228(lVar3,uRam0000000003d579b0);
                  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar7 = 0;
                  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
                  if (iVar2 != 0) {
                    if (lVar9 == 0) goto LAB_015e7a28;
                    /*Atlas.Gameplay.Kart.VFXBoostTiedBehaviour$$Init*/ func_0x0152724c(lVar9,0);
                    unaff_x24 = 0x3d579b0;
                    if (*(long *)(param_5 + 0x198) == 0) goto LAB_015e7a28;
                    uVar7 = uRam0000000003d3c778;
                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_5 + 0x198),lVar9);
                  }
                  unaff_x23 = (ulong)(uVar11 + 1);
                  uVar8 = *(uint *)(unaff_x22 + 0x18);
                } while ((int)(uVar11 + 1) < (int)uVar8);
              }
              return;
            }
          }
          else if ((*(long *)(param_5 + 0xb0) != 0) &&
                  (lVar3 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(param_5 + 0xb0),0), lVar3 != 0)) {
            uVar13 = /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(lVar3,0);
            *(undefined4 *)(param_5 + 0x188) = uVar13;
            *(undefined4 *)(param_5 + 0x18c) = param_2;
            *(undefined4 *)(param_5 + 400) = param_3;
            if ((*(long *)(param_5 + 0xb0) != 0) &&
               (lVar3 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(param_5 + 0xb0),0), lVar3 != 0)) {
              uVar7 = 1;
              /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar3,0,1,0);
              goto LAB_015e793c;
            }
          }
        }
        else if ((*(long *)(param_5 + 0xa8) != 0) &&
                (lVar3 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(param_5 + 0xa8),0), lVar3 != 0)) {
          uVar13 = /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(lVar3,0);
          *(undefined4 *)(param_5 + 0x17c) = uVar13;
          *(undefined4 *)(param_5 + 0x180) = param_2;
          *(undefined4 *)(param_5 + 0x184) = param_3;
          if ((*(long *)(param_5 + 0xa8) != 0) &&
             (lVar3 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(param_5 + 0xa8),0), lVar3 != 0)) {
            /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar3,0,1,0);
            goto LAB_015e78c0;
          }
        }
      }
      else if ((*(long *)(param_5 + 0x90) != 0) &&
              (lVar3 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(*(long *)(param_5 + 0x90),uRam0000000003d53518), lVar3 != 0))
      {
        lVar3 = /*UnityEngine.Renderer$$get_sharedMaterial*/ func_0x0325bea4(lVar3,0);
        *(long *)(param_5 + 0x150) = lVar3;
        unaff_x22 = 0x3d22d20;
        if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartVisualBehaviour_TypeInfo*/ lRam0000000003d22d20 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.Kart.KartVisualBehaviour_TypeInfo*/ lRam0000000003d22d20 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar9 = 0;
        if (lVar3 != 0) {
          uVar13 = /*UnityEngine.Material$$GetColor*/ func_0x03237e48(lVar3,*(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartVisualBehaviour_TypeInfo*/ lRam0000000003d22d20 + 0xb8) + 4)
                                   ,0);
          *(undefined4 *)(param_5 + 0x168) = uVar13;
          *(undefined4 *)(param_5 + 0x16c) = param_2;
          *(undefined4 *)(param_5 + 0x170) = param_3;
          *(undefined4 *)(param_5 + 0x174) = param_4;
          goto LAB_015e7844;
        }
      }
    }
    else if ((*(long *)(param_5 + 0x88) != 0) &&
            (lVar3 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(*(long *)(param_5 + 0x88),uRam0000000003d53518), lVar3 != 0)) {
      lVar3 = /*UnityEngine.Renderer$$get_sharedMaterial*/ func_0x0325bea4(lVar3,0);
      *(long *)(param_5 + 0x148) = lVar3;
      unaff_x22 = 0x3d22d20;
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartVisualBehaviour_TypeInfo*/ lRam0000000003d22d20 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.KartVisualBehaviour_TypeInfo*/ lRam0000000003d22d20 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar9 = 0;
      if (lVar3 != 0) {
        uVar13 = /*UnityEngine.Material$$GetColor*/ func_0x03237e48(lVar3,*(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartVisualBehaviour_TypeInfo*/ lRam0000000003d22d20 + 0xb8) + 4),0
                                );
        *(undefined4 *)(param_5 + 0x158) = uVar13;
        *(undefined4 *)(param_5 + 0x15c) = param_2;
        *(undefined4 *)(param_5 + 0x160) = param_3;
        *(undefined4 *)(param_5 + 0x164) = param_4;
        goto LAB_015e779c;
      }
    }
  }
  else if ((*(long *)(param_5 + 0x30) != 0) &&
          (lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_5 + 0x30),0), lVar3 != 0)) {
    uVar13 = /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(lVar3,0);
    *(undefined4 *)(param_5 + 0x100) = uVar13;
    *(undefined4 *)(param_5 + 0x104) = param_2;
    *(undefined4 *)(param_5 + 0x108) = param_3;
    goto LAB_015e7584;
  }
LAB_015e7a28:
  uVar12 = unaff_x24;
  func_0x00f78af4();
LAB_015e7a2c:
  uVar4 = func_0x00f78b24();
  auVar14 = func_0x00f78ac0(uVar4,0);
  uVar4 = auVar14._8_8_;
  lVar3 = auVar14._0_8_;
  uStack_88 = 0x3d23990;
  puStack_68 = &Atlas_Gameplay_Kart_KartVisualBehaviour__SetBoosting;
  uStack_a0 = uVar12;
  uStack_98 = unaff_x23;
  lStack_90 = unaff_x22;
  lStack_80 = lVar9;
  lStack_78 = param_5;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb53de & 1) == 0) {
    func_0x00f78a20(0x3d33150);
    func_0x00f78a20(0x3d33158);
    func_0x00f78a20(0x3d33160);
    func_0x00f78a20(0x3d3c780);
    bRam0000000003eb53de = 1;
  }
  Atlas_Gameplay_Kart_BaseVisualBehaviour__SetBoosting(lVar3,uVar4,uVar7,0);
  if ((*(long *)(lVar3 + 0x1b0) == 0) || (lVar9 = *(long *)(lVar3 + 0x1c0), lVar9 == 0)) {
    *(undefined8 *)(lVar3 + 0x1b8) = *(undefined8 *)(lVar3 + 0x78);
    lVar9 = *(long *)(lVar3 + 0x198);
    *(long *)(lVar3 + 0x1c8) = lVar9;
    if (lVar9 == 0) goto code_r0x015e7bf4;
  }
  else {
    *(long *)(lVar3 + 0x1b8) = *(long *)(lVar3 + 0x1b0);
    *(long *)(lVar3 + 0x1c8) = lVar9;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_d8,lVar9,uRam0000000003d3c780);
  uStack_b8 = uStack_d0;
  uStack_c0 = uStack_d8;
  lStack_b0 = lStack_c8;
  while (uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_c0,uRam0000000003d33158), (uVar5 & 1) != 0) {
    if (lStack_b0 == 0) goto code_r0x015e7c04;
    /*Atlas.Gameplay.Kart.VFXBoostTiedBehaviour$$SetBoostLevel*/ func_0x01527254(lStack_b0,uVar7,0);
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c0,uRam0000000003d33150);
  lVar9 = *(long *)(lVar3 + 0x1b8);
  if ((lVar9 != 0) && (uVar8 = *(uint *)(lVar9 + 0x18), 0 < (int)uVar8)) {
    lVar10 = 0;
    do {
      if (uVar8 <= (uint)lVar10) goto code_r0x015e7bf8;
      lVar6 = *(long *)(lVar9 + 0x20 + lVar10 * 8);
      if (lVar6 == 0) goto code_r0x015e7bf4;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar6,uVar4,0);
      uVar8 = *(uint *)(lVar9 + 0x18);
      lVar10 = lVar10 + 1;
    } while ((int)lVar10 < (int)uVar8);
  }
  lVar9 = *(long *)(lVar3 + 0x78);
  if (lVar9 != 0) {
    uVar8 = *(uint *)(lVar9 + 0x18);
    if (0 < (int)uVar8) {
      uVar11 = 0;
      do {
        if (uVar8 <= uVar11) goto code_r0x015e7bf8;
        lVar3 = *(long *)(lVar9 + (long)(int)uVar11 * 8 + 0x20);
        if (lVar3 == 0) goto code_r0x015e7bf4;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar3,uVar4,0);
        uVar11 = uVar11 + 1;
        uVar8 = *(uint *)(lVar9 + 0x18);
      } while ((int)uVar11 < (int)uVar8);
    }
    return;
  }
code_r0x015e7bf4:
  func_0x00f78af4();
code_r0x015e7bf8:
  uVar7 = func_0x00f78b24();
  func_0x00f78ac0(uVar7,0);
code_r0x015e7c04:
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x15e7c0c);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x15e7a38 | Atlas.Gameplay.Kart.KartVisualBehaviour.SetBoosting
// ============================================================

void Atlas_Gameplay_Kart_KartVisualBehaviour__SetBoosting
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  if ((bRam0000000003eb53de & 1) == 0) {
    func_0x00f78a20(0x3d33150);
    func_0x00f78a20(0x3d33158);
    func_0x00f78a20(0x3d33160);
    func_0x00f78a20(0x3d3c780);
    bRam0000000003eb53de = 1;
  }
  Atlas_Gameplay_Kart_BaseVisualBehaviour__SetBoosting(param_1,param_2,param_3,0);
  if ((*(long *)(param_1 + 0x1b0) == 0) || (lVar2 = *(long *)(param_1 + 0x1c0), lVar2 == 0)) {
    *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x78);
    lVar2 = *(long *)(param_1 + 0x198);
    *(long *)(param_1 + 0x1c8) = lVar2;
    if (lVar2 == 0) goto code_r0x015e7bf4;
  }
  else {
    *(long *)(param_1 + 0x1b8) = *(long *)(param_1 + 0x1b0);
    *(long *)(param_1 + 0x1c8) = lVar2;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_78,lVar2,uRam0000000003d3c780);
  uStack_58 = uStack_70;
  uStack_60 = uStack_78;
  lStack_50 = lStack_68;
  while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_60,uRam0000000003d33158), (uVar3 & 1) != 0) {
    if (lStack_50 == 0) goto code_r0x015e7c04;
    /*Atlas.Gameplay.Kart.VFXBoostTiedBehaviour$$SetBoostLevel*/ func_0x01527254(lStack_50,param_3,0);
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_60,uRam0000000003d33150);
  lVar2 = *(long *)(param_1 + 0x1b8);
  if ((lVar2 != 0) && (uVar6 = *(uint *)(lVar2 + 0x18), 0 < (int)uVar6)) {
    lVar8 = 0;
    do {
      if (uVar6 <= (uint)lVar8) goto code_r0x015e7bf8;
      lVar4 = *(long *)(lVar2 + 0x20 + lVar8 * 8);
      if (lVar4 == 0) goto code_r0x015e7bf4;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,param_2,0);
      uVar6 = *(uint *)(lVar2 + 0x18);
      lVar8 = lVar8 + 1;
    } while ((int)lVar8 < (int)uVar6);
  }
  lVar2 = *(long *)(param_1 + 0x78);
  if (lVar2 != 0) {
    uVar6 = *(uint *)(lVar2 + 0x18);
    if (0 < (int)uVar6) {
      uVar7 = 0;
      do {
        if (uVar6 <= uVar7) goto code_r0x015e7bf8;
        lVar8 = *(long *)(lVar2 + (long)(int)uVar7 * 8 + 0x20);
        if (lVar8 == 0) goto code_r0x015e7bf4;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar8,param_2,0);
        uVar7 = uVar7 + 1;
        uVar6 = *(uint *)(lVar2 + 0x18);
      } while ((int)uVar7 < (int)uVar6);
    }
    return;
  }
code_r0x015e7bf4:
  func_0x00f78af4();
code_r0x015e7bf8:
  uVar5 = func_0x00f78b24();
  func_0x00f78ac0(uVar5,0);
code_r0x015e7c04:
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x15e7c0c);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x15e7c44 | Atlas.Gameplay.Kart.KartVisualBehaviour.UpdateKickUp
// ============================================================

/* WARNING: Possible PIC construction at 0x015e7e80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e7f50: Changing call to branch */

ulong Atlas_Gameplay_Kart_KartVisualBehaviour__UpdateKickUp
                (float param_1,undefined8 param_2,undefined8 param_3,long param_4,long *param_5,
                int *param_6)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x1;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  int *piVar12;
  long lVar13;
  undefined8 *******pppppppuVar14;
  undefined *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  long lStack_160;
  undefined8 uStack_158;
  int *piStack_150;
  long *plStack_148;
  undefined8 ******ppppppuStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar3 = &uStack_130;
  plVar2 = &uStack_130;
  pppppppuVar14 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb53e6 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb53e6 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(param_4,0,0);
  if ((uVar5 & 1) == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    iVar4 = 0;
    if (((int)param_3 != 0) && (10.0 <= param_1)) {
      if (param_4 == 0) {
        func_0x00f78af4();
code_r0x015e7ebc:
        uVar7 = func_0x00f78b24();
        auVar16 = func_0x00f78ac0(uVar7,0);
        plVar11 = auVar16._0_8_;
        puStack_138 = &Atlas_Gameplay_Kart_KartVisualBehaviour__ConfigureEffectsForPlayer;
        lStack_160 = param_4;
        uStack_158 = param_3;
        piStack_150 = param_6;
        plStack_148 = param_5;
        ppppppuStack_140 = pppppppuVar14;
        if ((bRam0000000003eb53e2 & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb53e2 = 1;
        }
        uVar5 = /*Core.Networking.NetworkPlayer$$IsRemote*/ func_0x0165aba0(auVar16._8_8_,0);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
        piVar12 = (int *)plVar11[0x11];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(piVar12,0);
        if (iVar4 == 0) {
          lVar9 = plVar11[0x12];
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar9,0);
          if ((int)uVar5 == 0) {
            return uVar5;
          }
          lVar9 = plVar11[0x12];
          plVar11 = plStack_148;
          piVar12 = piStack_150;
          pppppppuVar14 = (undefined8 *******)ppppppuStack_140;
          puVar15 = puStack_138;
        }
        else {
          lVar9 = plVar11[0x11];
          plVar2 = &lStack_160;
          pppppppuVar14 = &ppppppuStack_140;
          puVar15 = &UNK_015e7f54;
        }
        iVar4 = 0x28;
        puVar3 = (undefined8 *)((long)plVar2 + -0xb0);
        *(int **)((long)plVar2 + -0x20) = piVar12;
        *(long **)((long)plVar2 + -0x18) = plVar11;
        *(undefined8 ********)((long)plVar2 + -0x10) = pppppppuVar14;
        *(undefined **)((long)plVar2 + -8) = puVar15;
        if (lVar9 != 0) {
          uVar7 = /*UnityEngine.ParticleSystem$$get_emission*/ func_0x032965e4(lVar9,0);
          *(undefined8 *)((long)plVar2 + -0x28) = uVar7;
          /*UnityEngine.ParticleSystem.MinMaxCurve$$op_Implicit*/ func_0x032967b8((undefined1 *)((long)plVar2 + -0x48),0x42200000,0);
          *(undefined8 *)((long)plVar2 + -0x68) = *(undefined8 *)((long)plVar2 + -0x40);
          *(undefined8 *)((long)plVar2 + -0x70) = *(undefined8 *)((long)plVar2 + -0x48);
          *(undefined8 *)((long)plVar2 + -0x58) = *(undefined8 *)((long)plVar2 + -0x30);
          *(undefined8 *)((long)plVar2 + -0x60) = *(undefined8 *)((long)plVar2 + -0x38);
          /*UnityEngine.ParticleSystem.EmissionModule$$set_rateOverTime*/ func_0x032967cc((undefined1 *)((long)plVar2 + -0x28),(undefined1 *)((long)plVar2 + -0x70),
                          0);
          /*UnityEngine.ParticleSystem.MinMaxCurve$$op_Implicit*/ func_0x032967b8((undefined1 *)((long)plVar2 + -0x90),0,0);
          *(undefined8 *)((long)plVar2 + -0xa8) = *(undefined8 *)((long)plVar2 + -0x88);
          *(undefined8 *)((long)plVar2 + -0xb0) = *(undefined8 *)((long)plVar2 + -0x90);
          *(undefined8 *)((long)plVar2 + -0x98) = *(undefined8 *)((long)plVar2 + -0x78);
          *(undefined8 *)((long)plVar2 + -0xa0) = *(undefined8 *)((long)plVar2 + -0x80);
          uVar5 = /*UnityEngine.ParticleSystem.EmissionModule$$set_rateOverDistance*/ func_0x0329b0fc((undefined1 *)((long)plVar2 + -0x28),
                                  (undefined1 *)((long)plVar2 + -0xb0),0);
          return uVar5;
        }
        func_0x00f78af4();
        *(int **)((long)plVar2 + -0xd0) = piVar12;
        *(long **)((long)plVar2 + -200) = plVar11;
        *(undefined1 **)((long)plVar2 + -0xc0) = (undefined1 *)((long)plVar2 + -0x10);
        *(undefined **)((long)plVar2 + -0xb8) =
             &Atlas_Gameplay_Kart_KartVisualBehaviour__SetParticleSystemEmitting;
        if (iVar4 != 0) {
          if (extraout_x1 != 0) {
            uVar5 = /*UnityEngine.ParticleSystem$$get_isEmitting*/ func_0x032977f0(extraout_x1,0);
            if ((uVar5 & 1) != 0) {
              return uVar5;
            }
            *(undefined8 *)((long)plVar2 + -0xd0) = *(undefined8 *)((long)plVar2 + -0xd0);
            *(undefined8 *)((long)plVar2 + -200) = *(undefined8 *)((long)plVar2 + -200);
            *(undefined8 *)((long)plVar2 + -0xc0) = *(undefined8 *)((long)plVar2 + -0xc0);
            *(undefined8 *)((long)plVar2 + -0xb8) = *(undefined8 *)((long)plVar2 + -0xb8);
            if (pcRam0000000003ec2148 == (code *)0x0) {
              pcRam0000000003ec2148 =
                   (code *)func_0x00f789d4("UnityEngine.ParticleSystem::Play(System.Boolean)",0);
            }
                    /* WARNING: Could not recover jumptable at 0x03298910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar5 = (*pcRam0000000003ec2148)(extraout_x1,1);
            return uVar5;
          }
code_r0x015e80b0:
          auVar17 = func_0x00f78af4();
          lVar9 = *(long *)(auVar17._0_8_ + 0x18);
          if ((lVar9 != 0) && (0 < (int)*(uint *)(lVar9 + 0x18))) {
            uVar5 = 0;
            do {
              if (*(int *)(lVar9 + (long)(int)uVar5 * 0xd0 + 0x20) == auVar17._8_4_) {
                return uVar5;
              }
              uVar1 = (int)uVar5 + 1;
              uVar5 = (ulong)uVar1;
            } while (*(uint *)(lVar9 + 0x18) != uVar1);
          }
          return 0xffffffff;
        }
        if (extraout_x1 == 0) goto code_r0x015e80b0;
        uVar5 = /*UnityEngine.ParticleSystem$$get_isEmitting*/ func_0x032977f0(extraout_x1,0);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
        pppppppuVar14 = *(undefined8 ********)((long)plVar2 + -0xc0);
        puVar15 = *(undefined **)((long)plVar2 + -0xb8);
        lVar9 = *(long *)((long)plVar2 + -0xd0);
        param_5 = *(long **)((long)plVar2 + -200);
        lVar13 = extraout_x1;
        goto code_r0x03298a54;
      }
      lVar9 = *(long *)(param_4 + 0x18);
      if ((lVar9 != 0) && (uVar1 = *(uint *)(lVar9 + 0x18), 0 < (int)uVar1)) {
        uVar10 = 0;
        puVar8 = (undefined8 *)(lVar9 + 0x20);
        do {
          if (*(int *)(lVar9 + (long)(int)uVar10 * 0xd0 + 0x20) == (int)param_3) {
            if (-1 < (int)uVar10) {
              if (uVar1 <= uVar10) goto code_r0x015e7ebc;
              uStack_88 = puVar8[0x15];
              uStack_90 = puVar8[0x14];
              uStack_78 = puVar8[0x17];
              uStack_80 = puVar8[0x16];
              uStack_68 = puVar8[0x19];
              uStack_70 = puVar8[0x18];
              uStack_c8 = puVar8[0xd];
              uStack_d0 = puVar8[0xc];
              uStack_b8 = puVar8[0xf];
              uStack_c0 = puVar8[0xe];
              uStack_a8 = puVar8[0x11];
              uStack_b0 = puVar8[0x10];
              uStack_98 = puVar8[0x13];
              uStack_a0 = puVar8[0x12];
              uStack_108 = puVar8[5];
              uStack_110 = puVar8[4];
              uStack_f8 = puVar8[7];
              uStack_100 = puVar8[6];
              uStack_e8 = puVar8[9];
              uStack_f0 = puVar8[8];
              uStack_d8 = puVar8[0xb];
              uStack_e0 = puVar8[10];
              lStack_128 = puVar8[1];
              uStack_130 = *puVar8;
              uStack_118 = puVar8[3];
              uStack_120 = puVar8[2];
              iVar4 = (int)uStack_130;
              goto LAB_015e7d98;
            }
            break;
          }
          uVar10 = uVar10 + 1;
          puVar8 = puVar8 + 0x1a;
        } while (uVar1 != uVar10);
      }
      iVar4 = 0;
    }
LAB_015e7d98:
    if (iVar4 != *param_6) {
      if ((char)uStack_110 != '\0') {
        /*Atlas.Gameplay.Kart.KartVisualBehaviour$$SetStartColour*/ func_0x015e80f4(uVar5,lStack_128,&uStack_108);
        uVar7 = uStack_120;
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
        if ((int)uVar6 != 0) {
          /*Atlas.Gameplay.Kart.KartVisualBehaviour$$SetStartColour*/ func_0x015e80f4(uVar6,uVar7,&uStack_d0);
        }
        uVar7 = uStack_118;
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
        if ((int)uVar6 != 0) {
          /*Atlas.Gameplay.Kart.KartVisualBehaviour$$SetStartColour*/ func_0x015e80f4(uVar6,uVar7,&uStack_98);
        }
      }
      *param_6 = iVar4;
    }
    lVar9 = lStack_128;
    lVar13 = *param_5;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,lVar13,0);
    if ((int)uVar5 != 0) {
      lVar13 = *param_5;
      if (lVar13 != 0) {
        puVar15 = &UNK_015e7e84;
code_r0x03298a54:
        *(long *)((long)puVar3 + -0x20) = lVar9;
        *(long **)((long)puVar3 + -0x18) = param_5;
        *(undefined8 ********)((long)puVar3 + -0x10) = pppppppuVar14;
        *(undefined **)((long)puVar3 + -8) = puVar15;
        if (pcRam0000000003ec2158 == (code *)0x0) {
          pcRam0000000003ec2158 =
               (code *)func_0x00f789d4("UnityEngine.ParticleSystem::Stop(System.Boolean,UnityEngine.ParticleSystemStopBehavior)"
                                       ,0);
        }
                    /* WARNING: Could not recover jumptable at 0x03298a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*pcRam0000000003ec2158)(lVar13,1,1);
        return uVar5;
      }
      uVar5 = 0;
      if (lVar9 != 0) {
        uVar5 = /*UnityEngine.ParticleSystem$$Play*/ func_0x032988d0(lVar9,0);
      }
      *param_5 = lVar9;
    }
  }
  return uVar5;
}



// ============================================================
// RVA: 0x15e7ec8 | Atlas.Gameplay.Kart.KartVisualBehaviour.ConfigureEffectsForPlayer
// ============================================================

/* WARNING: Possible PIC construction at 0x015e7f50: Changing call to branch */

ulong Atlas_Gameplay_Kart_KartVisualBehaviour__ConfigureEffectsForPlayer
                (long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long extraout_x1;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar6;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar7 [12];
  
  puVar2 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb53e2 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb53e2 = 1;
  }
  uVar4 = /*Core.Networking.NetworkPlayer$$IsRemote*/ func_0x0165aba0(param_2,0);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x88);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar6,0);
  if (iVar3 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x90);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar6,0);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    lVar5 = *(long *)(param_1 + 0x90);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x88);
    unaff_x30 = 0x15e7f54;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = param_1;
    unaff_x20 = uVar6;
    unaff_x29 = puVar2;
  }
  iVar3 = 0x28;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (lVar5 != 0) {
    uVar6 = /*UnityEngine.ParticleSystem$$get_emission*/ func_0x032965e4(lVar5,0);
    *(undefined8 *)((long)register0x00000008 + -0x28) = uVar6;
    /*UnityEngine.ParticleSystem.MinMaxCurve$$op_Implicit*/ func_0x032967b8((undefined1 *)((long)register0x00000008 + -0x48),0x42200000,0);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)((long)register0x00000008 + -0x48);
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x60) =
         *(undefined8 *)((long)register0x00000008 + -0x38);
    /*UnityEngine.ParticleSystem.EmissionModule$$set_rateOverTime*/ func_0x032967cc((undefined1 *)((long)register0x00000008 + -0x28),
                    (undefined1 *)((long)register0x00000008 + -0x70),0);
    /*UnityEngine.ParticleSystem.MinMaxCurve$$op_Implicit*/ func_0x032967b8((undefined1 *)((long)register0x00000008 + -0x90),0,0);
    *(undefined8 *)((long)register0x00000008 + -0xa8) =
         *(undefined8 *)((long)register0x00000008 + -0x88);
    *(undefined8 *)((long)register0x00000008 + -0xb0) =
         *(undefined8 *)((long)register0x00000008 + -0x90);
    *(undefined8 *)((long)register0x00000008 + -0x98) =
         *(undefined8 *)((long)register0x00000008 + -0x78);
    *(undefined8 *)((long)register0x00000008 + -0xa0) =
         *(undefined8 *)((long)register0x00000008 + -0x80);
    uVar4 = /*UnityEngine.ParticleSystem.EmissionModule$$set_rateOverDistance*/ func_0x0329b0fc((undefined1 *)((long)register0x00000008 + -0x28),
                            (undefined1 *)((long)register0x00000008 + -0xb0),0);
    return uVar4;
  }
  func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_x20;
  *(long *)((long)register0x00000008 + -200) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0xc0) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0xb8) =
       &Atlas_Gameplay_Kart_KartVisualBehaviour__SetParticleSystemEmitting;
  if (iVar3 == 0) {
    if (extraout_x1 == 0) goto code_r0x015e80b0;
    uVar4 = /*UnityEngine.ParticleSystem$$get_isEmitting*/ func_0x032977f0(extraout_x1,0);
    if ((int)uVar4 != 0) {
      *(undefined8 *)((long)register0x00000008 + -0xd0) =
           *(undefined8 *)((long)register0x00000008 + -0xd0);
      *(undefined8 *)((long)register0x00000008 + -200) =
           *(undefined8 *)((long)register0x00000008 + -200);
      *(undefined8 *)((long)register0x00000008 + -0xc0) =
           *(undefined8 *)((long)register0x00000008 + -0xc0);
      *(undefined8 *)((long)register0x00000008 + -0xb8) =
           *(undefined8 *)((long)register0x00000008 + -0xb8);
      if (pcRam0000000003ec2158 == (code *)0x0) {
        pcRam0000000003ec2158 =
             (code *)func_0x00f789d4("UnityEngine.ParticleSystem::Stop(System.Boolean,UnityEngine.ParticleSystemStopBehavior)"
                                     ,0);
      }
                    /* WARNING: Could not recover jumptable at 0x03298a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*pcRam0000000003ec2158)(extraout_x1,1,1);
      return uVar4;
    }
  }
  else {
    if (extraout_x1 == 0) {
code_r0x015e80b0:
      auVar7 = func_0x00f78af4();
      lVar5 = *(long *)(auVar7._0_8_ + 0x18);
      if ((lVar5 != 0) && (0 < (int)*(uint *)(lVar5 + 0x18))) {
        uVar4 = 0;
        do {
          if (*(int *)(lVar5 + (long)(int)uVar4 * 0xd0 + 0x20) == auVar7._8_4_) {
            return uVar4;
          }
          uVar1 = (int)uVar4 + 1;
          uVar4 = (ulong)uVar1;
        } while (*(uint *)(lVar5 + 0x18) != uVar1);
      }
      return 0xffffffff;
    }
    uVar4 = /*UnityEngine.ParticleSystem$$get_isEmitting*/ func_0x032977f0(extraout_x1,0);
    if ((uVar4 & 1) == 0) {
      *(undefined8 *)((long)register0x00000008 + -0xd0) =
           *(undefined8 *)((long)register0x00000008 + -0xd0);
      *(undefined8 *)((long)register0x00000008 + -200) =
           *(undefined8 *)((long)register0x00000008 + -200);
      *(undefined8 *)((long)register0x00000008 + -0xc0) =
           *(undefined8 *)((long)register0x00000008 + -0xc0);
      *(undefined8 *)((long)register0x00000008 + -0xb8) =
           *(undefined8 *)((long)register0x00000008 + -0xb8);
      if (pcRam0000000003ec2148 == (code *)0x0) {
        pcRam0000000003ec2148 =
             (code *)func_0x00f789d4("UnityEngine.ParticleSystem::Play(System.Boolean)",0);
      }
                    /* WARNING: Could not recover jumptable at 0x03298910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*pcRam0000000003ec2148)(extraout_x1,1);
      return uVar4;
    }
  }
  return uVar4;
}



// ============================================================
// RVA: 0x15e7fac | Atlas.Gameplay.Kart.KartVisualBehaviour.SetEmissionRate
// ============================================================

ulong Atlas_Gameplay_Kart_KartVisualBehaviour__SetEmissionRate
                (undefined8 param_1,long param_2,int param_3,int param_4)

{
  uint uVar1;
  ulong uVar2;
  long extraout_x1;
  long lVar3;
  undefined1 auVar4 [12];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
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
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_2 != 0) {
    uStack_28 = /*UnityEngine.ParticleSystem$$get_emission*/ func_0x032965e4(param_2,0);
    /*UnityEngine.ParticleSystem.MinMaxCurve$$op_Implicit*/ func_0x032967b8(&uStack_48,(float)param_3,0);
    uStack_68 = uStack_40;
    uStack_70 = uStack_48;
    uStack_58 = uStack_30;
    uStack_60 = uStack_38;
    /*UnityEngine.ParticleSystem.EmissionModule$$set_rateOverTime*/ func_0x032967cc(&uStack_28,&uStack_70,0);
    /*UnityEngine.ParticleSystem.MinMaxCurve$$op_Implicit*/ func_0x032967b8(&uStack_90,(float)param_4,0);
    uStack_a8 = uStack_88;
    uStack_b0 = uStack_90;
    uStack_98 = uStack_78;
    uStack_a0 = uStack_80;
    uVar2 = /*UnityEngine.ParticleSystem.EmissionModule$$set_rateOverDistance*/ func_0x0329b0fc(&uStack_28,&uStack_b0,0);
    return uVar2;
  }
  func_0x00f78af4();
  if (param_3 == 0) {
    if (extraout_x1 == 0) goto code_r0x015e80b0;
    uVar2 = /*UnityEngine.ParticleSystem$$get_isEmitting*/ func_0x032977f0(extraout_x1,0);
    if ((int)uVar2 != 0) {
      if (pcRam0000000003ec2158 == (code *)0x0) {
        pcRam0000000003ec2158 =
             (code *)func_0x00f789d4("UnityEngine.ParticleSystem::Stop(System.Boolean,UnityEngine.ParticleSystemStopBehavior)"
                                     ,0);
      }
                    /* WARNING: Could not recover jumptable at 0x03298a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*pcRam0000000003ec2158)(extraout_x1,1,1);
      return uVar2;
    }
  }
  else {
    if (extraout_x1 == 0) {
code_r0x015e80b0:
      auVar4 = func_0x00f78af4();
      lVar3 = *(long *)(auVar4._0_8_ + 0x18);
      if ((lVar3 != 0) && (0 < (int)*(uint *)(lVar3 + 0x18))) {
        uVar2 = 0;
        do {
          if (*(int *)(lVar3 + (long)(int)uVar2 * 0xd0 + 0x20) == auVar4._8_4_) {
            return uVar2;
          }
          uVar1 = (int)uVar2 + 1;
          uVar2 = (ulong)uVar1;
        } while (*(uint *)(lVar3 + 0x18) != uVar1);
      }
      return 0xffffffff;
    }
    uVar2 = /*UnityEngine.ParticleSystem$$get_isEmitting*/ func_0x032977f0(extraout_x1,0);
    if ((uVar2 & 1) == 0) {
      if (pcRam0000000003ec2148 == (code *)0x0) {
        pcRam0000000003ec2148 =
             (code *)func_0x00f789d4("UnityEngine.ParticleSystem::Play(System.Boolean)",0);
      }
                    /* WARNING: Could not recover jumptable at 0x03298910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*pcRam0000000003ec2148)(extraout_x1,1);
      return uVar2;
    }
  }
  return uVar2;
}



// ============================================================
// RVA: 0x15e8040 | Atlas.Gameplay.Kart.KartVisualBehaviour.SetParticleSystemEmitting
// ============================================================

ulong Atlas_Gameplay_Kart_KartVisualBehaviour__SetParticleSystemEmitting
                (undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auVar4 [12];
  
  if (param_3 == 0) {
    if (param_2 == 0) goto LAB_015e80b0;
    uVar2 = /*UnityEngine.ParticleSystem$$get_isEmitting*/ func_0x032977f0(param_2,0);
    if ((int)uVar2 != 0) {
      if (pcRam0000000003ec2158 == (code *)0x0) {
        pcRam0000000003ec2158 =
             (code *)func_0x00f789d4("UnityEngine.ParticleSystem::Stop(System.Boolean,UnityEngine.ParticleSystemStopBehavior)"
                                     ,0);
      }
                    /* WARNING: Could not recover jumptable at 0x03298a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*pcRam0000000003ec2158)(param_2,1,1);
      return uVar2;
    }
  }
  else {
    if (param_2 == 0) {
LAB_015e80b0:
      auVar4 = func_0x00f78af4();
      lVar3 = *(long *)(auVar4._0_8_ + 0x18);
      if ((lVar3 != 0) && (0 < (int)*(uint *)(lVar3 + 0x18))) {
        uVar2 = 0;
        do {
          if (*(int *)(lVar3 + (long)(int)uVar2 * 0xd0 + 0x20) == auVar4._8_4_) {
            return uVar2;
          }
          uVar1 = (int)uVar2 + 1;
          uVar2 = (ulong)uVar1;
        } while (*(uint *)(lVar3 + 0x18) != uVar1);
      }
      return 0xffffffff;
    }
    uVar2 = /*UnityEngine.ParticleSystem$$get_isEmitting*/ func_0x032977f0(param_2,0);
    if ((uVar2 & 1) == 0) {
      if (pcRam0000000003ec2148 == (code *)0x0) {
        pcRam0000000003ec2148 =
             (code *)func_0x00f789d4("UnityEngine.ParticleSystem::Play(System.Boolean)",0);
      }
                    /* WARNING: Could not recover jumptable at 0x03298910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*pcRam0000000003ec2148)(param_2,1);
      return uVar2;
    }
  }
  return uVar2;
}



// ============================================================
// RVA: 0x15e80f4 | Atlas.Gameplay.Kart.KartVisualBehaviour.SetStartColour
// ============================================================

/* WARNING: Possible PIC construction at 0x015e8274: Changing call to branch */

void Atlas_Gameplay_Kart_KartVisualBehaviour__SetStartColour
               (undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 ***pppuVar9;
  undefined *puVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_2 != 0) {
    uStack_28 = /*UnityEngine.ParticleSystem$$get_main*/ func_0x03296084(param_2,0);
    uStack_58 = param_3[1];
    uStack_60 = *param_3;
    uStack_48 = param_3[3];
    uStack_50 = param_3[2];
    uStack_38 = param_3[5];
    uStack_40 = param_3[4];
    uStack_30 = param_3[6];
    /*UnityEngine.ParticleSystem.MainModule$$set_startColor*/ func_0x03296c70(&uStack_28,&uStack_60,0);
    return;
  }
  auVar11 = func_0x00f78af4();
  lVar7 = auVar11._8_8_;
  puStack_68 = &Atlas_Gameplay_Kart_KartVisualBehaviour__SetEngineRunningEnabled;
  puStack_70 = (undefined8 *)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb53e7 & 1) == 0) {
    func_0x00f78a20(0x3d22d20);
    bRam0000000003eb53e7 = 1;
  }
  lVar5 = *(long *)(auVar11._0_8_ + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartVisualBehaviour_TypeInfo*/ lRam0000000003d22d20 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartVisualBehaviour_TypeInfo*/ lRam0000000003d22d20 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar5 != 0) {
    uVar1 = **(undefined4 **)(/*Atlas.Gameplay.Kart.KartVisualBehaviour_TypeInfo*/ lRam0000000003d22d20 + 0xb8);
    if (pcRam0000000003ebe420 == (code *)0x0) {
      pcRam0000000003ebe420 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebe420)(lVar5,uVar1,lVar7);
    return;
  }
  lVar4 = func_0x00f78af4();
  puVar2 = &uStack_c0;
  uStack_c0 = 0x3eb5000;
  uStack_b8 = 0x3d22d20;
  puStack_98 = &Atlas_Gameplay_Kart_KartVisualBehaviour__OnDestroy;
  lStack_b0 = lVar5;
  lStack_a8 = lVar7;
  ppuStack_a0 = &puStack_70;
  if ((bRam0000000003eb53e8 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb53e8 = 1;
  }
  uVar6 = *(undefined8 *)(lVar4 + 0xa8);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  if (iVar3 == 0) {
    uVar6 = *(undefined8 *)(lVar4 + 0xb0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
    if (iVar3 == 0) {
      return;
    }
    lVar7 = *(long *)(lVar4 + 0xb0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar2 = (undefined8 *)&stack0xffffffffffffff70;
    lVar4 = lStack_a8;
    lVar5 = lStack_b0;
    uVar6 = uStack_b8;
    uVar8 = uStack_c0;
    pppuVar9 = (undefined8 ***)ppuStack_a0;
    puVar10 = puStack_98;
  }
  else {
    lVar7 = *(long *)(lVar4 + 0xa8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar5 = lVar7;
    uVar6 = 0x3d23990;
    uVar8 = 0x3eb5000;
    pppuVar9 = &ppuStack_a0;
    puVar10 = &UNK_015e8278;
  }
  *(undefined8 *)((long)puVar2 + -0x30) = uVar8;
  *(undefined8 *)((long)puVar2 + -0x28) = uVar6;
  *(long *)((long)puVar2 + -0x20) = lVar5;
  *(long *)((long)puVar2 + -0x18) = lVar4;
  *(undefined8 ****)((long)puVar2 + -0x10) = pppuVar9;
  *(undefined **)((long)puVar2 + -8) = puVar10;
  if ((bRam0000000003ec0230 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec0230 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (pcRam0000000003ec0228 == (code *)0x0) {
    pcRam0000000003ec0228 =
         (code *)func_0x00f789d4("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)");
  }
                    /* WARNING: Could not recover jumptable at 0x03249418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec0228)(0,lVar7);
  return;
}



// ============================================================
// RVA: 0x15e8158 | Atlas.Gameplay.Kart.KartVisualBehaviour.SetEngineRunningEnabled
// ============================================================

/* WARNING: Possible PIC construction at 0x015e8274: Changing call to branch */

void Atlas_Gameplay_Kart_KartVisualBehaviour__SetEngineRunningEnabled(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 ***pppuVar9;
  undefined *puVar10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb53e7 & 1) == 0) {
    func_0x00f78a20(0x3d22d20);
    bRam0000000003eb53e7 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartVisualBehaviour_TypeInfo*/ lRam0000000003d22d20 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartVisualBehaviour_TypeInfo*/ lRam0000000003d22d20 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar5 != 0) {
    uVar1 = **(undefined4 **)(/*Atlas.Gameplay.Kart.KartVisualBehaviour_TypeInfo*/ lRam0000000003d22d20 + 0xb8);
    if (pcRam0000000003ebe420 == (code *)0x0) {
      pcRam0000000003ebe420 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebe420)(lVar5,uVar1,param_2);
    return;
  }
  lVar4 = func_0x00f78af4();
  puVar2 = &uStack_60;
  uStack_60 = 0x3eb5000;
  uStack_58 = 0x3d22d20;
  puStack_38 = &Atlas_Gameplay_Kart_KartVisualBehaviour__OnDestroy;
  lStack_50 = lVar5;
  lStack_48 = param_2;
  ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb53e8 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb53e8 = 1;
  }
  uVar6 = *(undefined8 *)(lVar4 + 0xa8);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  if (iVar3 == 0) {
    uVar6 = *(undefined8 *)(lVar4 + 0xb0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
    if (iVar3 == 0) {
      return;
    }
    lVar5 = *(long *)(lVar4 + 0xb0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar2 = (undefined8 *)&stack0xffffffffffffffd0;
    lVar4 = lStack_48;
    lVar7 = lStack_50;
    uVar6 = uStack_58;
    uVar8 = uStack_60;
    pppuVar9 = (undefined8 ***)ppuStack_40;
    puVar10 = puStack_38;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0xa8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar7 = lVar5;
    uVar6 = 0x3d23990;
    uVar8 = 0x3eb5000;
    pppuVar9 = &ppuStack_40;
    puVar10 = &UNK_015e8278;
  }
  *(undefined8 *)((long)puVar2 + -0x30) = uVar8;
  *(undefined8 *)((long)puVar2 + -0x28) = uVar6;
  *(long *)((long)puVar2 + -0x20) = lVar7;
  *(long *)((long)puVar2 + -0x18) = lVar4;
  *(undefined8 ****)((long)puVar2 + -0x10) = pppuVar9;
  *(undefined **)((long)puVar2 + -8) = puVar10;
  if ((bRam0000000003ec0230 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec0230 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (pcRam0000000003ec0228 == (code *)0x0) {
    pcRam0000000003ec0228 =
         (code *)func_0x00f789d4("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)");
  }
                    /* WARNING: Could not recover jumptable at 0x03249418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec0228)(0,lVar5);
  return;
}



// ============================================================
// RVA: 0x15e81e4 | Atlas.Gameplay.Kart.KartVisualBehaviour.OnDestroy
// ============================================================

/* WARNING: Possible PIC construction at 0x015e8274: Changing call to branch */

void Atlas_Gameplay_Kart_KartVisualBehaviour__OnDestroy(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar3;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb53e8 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb53e8 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
  if (iVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0xb0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
    if (iVar2 == 0) {
      return;
    }
    uVar3 = *(undefined8 *)(param_1 + 0xb0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0xa8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x30 = 0x15e8278;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = param_1;
    unaff_x20 = uVar3;
    unaff_x21 = 0x3d23990;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003ec0230 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec0230 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (pcRam0000000003ec0228 == (code *)0x0) {
    pcRam0000000003ec0228 =
         (code *)func_0x00f789d4("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)");
  }
                    /* WARNING: Could not recover jumptable at 0x03249418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec0228)(0,uVar3);
  return;
}



// ============================================================
// RVA: 0x15e82ec | Atlas.Gameplay.Kart.KartVisualBehaviour.SetDriftVFX
// ============================================================

long Atlas_Gameplay_Kart_KartVisualBehaviour__SetDriftVFX
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  uint uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  
  lVar5 = *(long *)(param_4 + 0x80);
  if (lVar5 == 0) {
LAB_015e84f0:
    param_4 = unaff_x20;
    param_5 = unaff_x19;
    lVar6 = func_0x00f78af4();
LAB_015e84f4:
    *(long *)(param_4 + 0x1a0) = param_5;
    return lVar6;
  }
  uVar4 = 0;
  lVar6 = param_4;
  do {
    if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar4) goto LAB_015e84f4;
    if (*(uint *)(lVar5 + 0x18) <= uVar4) {
LAB_015e8514:
      uVar2 = func_0x00f78b24();
      auVar12 = func_0x00f78ac0(uVar2,0);
      lVar6 = auVar12._8_8_;
      lVar5 = auVar12._0_8_;
      if ((bRam0000000003eb53e9 & 1) == 0) {
        func_0x00f78a20(0x3d579b0);
        func_0x00f78a20(0x3d3c778);
        func_0x00f78a20(0x3d3c770);
        func_0x00f78a20(0x3d1df98);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb53e9 = 1;
      }
      *(long *)(lVar5 + 0x1b0) = lVar6;
      uVar2 = func_0x00f78aec(/*System.Collections.Generic.List<VFXBoostTiedBehaviour>_TypeInfo*/ uRam0000000003d1df98);
      lVar9 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar2,uRam0000000003d3c770);
      *(undefined8 *)(lVar5 + 0x1c0) = uVar2;
      if (lVar6 == 0) goto code_r0x015e8680;
      uVar4 = *(uint *)(lVar6 + 0x18);
      if ((int)uVar4 < 1) {
        return lVar9;
      }
      uVar7 = 0;
      break;
    }
    unaff_x19 = param_5;
    unaff_x20 = param_4;
    if (param_5 == 0) goto LAB_015e84f0;
    if (*(uint *)(param_5 + 0x18) <= uVar4) goto LAB_015e8514;
    lVar9 = (long)(int)uVar4;
    plVar8 = (long *)(param_5 + lVar9 * 0x18 + 0x28);
    lVar6 = *plVar8;
    if (lVar6 == 0) goto LAB_015e84f0;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_015e8514;
    if (*(long *)(lVar6 + 0x20) == 0) goto LAB_015e84f0;
    lVar5 = lVar5 + lVar9 * 0x18;
    lVar3 = *(long *)(lVar5 + 0x28);
    lVar5 = *(long *)(lVar5 + 0x30);
    lVar6 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar6 + 0x20),0);
    if (lVar3 == 0) goto LAB_015e84f0;
    if (*(int *)(lVar3 + 0x18) == 0) goto LAB_015e8514;
    if (((*(long *)(lVar3 + 0x20) == 0) ||
        (lVar1 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar3 + 0x20),0), lVar1 == 0)) ||
       (/*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(lVar1,0), lVar6 == 0)) goto LAB_015e84f0;
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar6,0);
    if (*(uint *)(param_5 + 0x18) <= uVar4) goto LAB_015e8514;
    plVar10 = (long *)(param_5 + lVar9 * 0x18 + 0x30);
    lVar6 = *plVar10;
    if (lVar6 == 0) goto LAB_015e84f0;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_015e8514;
    if ((*(long *)(lVar6 + 0x20) == 0) ||
       (lVar6 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar6 + 0x20),0), lVar5 == 0)) goto LAB_015e84f0;
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_015e8514;
    if (((*(long *)(lVar5 + 0x20) == 0) ||
        (lVar9 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar5 + 0x20),0), lVar9 == 0)) ||
       (/*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(lVar9,0), lVar6 == 0)) goto LAB_015e84f0;
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar6,0);
    if (*(uint *)(param_5 + 0x18) <= uVar4) goto LAB_015e8514;
    lVar6 = *plVar8;
    if (lVar6 == 0) goto LAB_015e84f0;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_015e8514;
    if (*(long *)(lVar6 + 0x20) == 0) goto LAB_015e84f0;
    lVar6 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar6 + 0x20),0);
    if (*(int *)(lVar3 + 0x18) == 0) goto LAB_015e8514;
    if (((*(long *)(lVar3 + 0x20) == 0) ||
        (lVar9 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar3 + 0x20),0), lVar9 == 0)) ||
       (/*UnityEngine.Transform$$get_localRotation*/ func_0x0327553c(lVar9,0), lVar6 == 0)) goto LAB_015e84f0;
    /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar6,0);
    if (*(uint *)(param_5 + 0x18) <= uVar4) goto LAB_015e8514;
    lVar6 = *plVar10;
    if (lVar6 == 0) goto LAB_015e84f0;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_015e8514;
    if (*(long *)(lVar6 + 0x20) == 0) goto LAB_015e84f0;
    lVar6 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar6 + 0x20),0);
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_015e8514;
    if (((*(long *)(lVar5 + 0x20) == 0) ||
        (lVar5 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar5 + 0x20),0), lVar5 == 0)) ||
       (/*UnityEngine.Transform$$get_localRotation*/ func_0x0327553c(lVar5,0), lVar6 == 0)) goto LAB_015e84f0;
    uVar4 = uVar4 + 1;
    lVar6 = /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar6,0);
    lVar5 = *(long *)(param_4 + 0x80);
    if (lVar5 == 0) goto LAB_015e84f0;
  } while( true );
code_r0x015e85e8:
  if (uVar4 <= uVar7) goto code_r0x015e8684;
  lVar9 = *(long *)(lVar6 + (long)(int)uVar7 * 8 + 0x20);
  if (lVar9 == 0) goto code_r0x015e8680;
  lVar9 = /*UnityEngine.GameObject$$GetComponentInChildren<TMP_Dropdown.DropdownItem>*/ func_0x0185d228(lVar9,uRam0000000003d579b0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
  if ((int)lVar3 != 0) {
    if (lVar9 == 0) goto code_r0x015e8680;
    /*Atlas.Gameplay.Kart.VFXBoostTiedBehaviour$$Init*/ func_0x0152724c(lVar9,0);
    if (*(long *)(lVar5 + 0x1c0) == 0) goto code_r0x015e8680;
    lVar3 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar5 + 0x1c0),lVar9,uRam0000000003d3c778);
  }
  uVar7 = uVar7 + 1;
  uVar4 = *(uint *)(lVar6 + 0x18);
  if ((int)uVar4 <= (int)uVar7) {
    return lVar3;
  }
  goto code_r0x015e85e8;
code_r0x015e8680:
  func_0x00f78af4();
code_r0x015e8684:
  uVar2 = func_0x00f78b24();
  lVar5 = func_0x00f78ac0(uVar2,0);
  if ((bRam0000000003eb53ea & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb53ea = 1;
  }
  uVar11 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(lVar5 + 0x100) = uVar11;
  *(undefined4 *)(lVar5 + 0x104) = param_2;
  *(undefined4 *)(lVar5 + 0x108) = param_3;
  uVar11 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(lVar5 + 0x10c) = uVar11;
  *(undefined4 *)(lVar5 + 0x110) = param_2;
  *(undefined4 *)(lVar5 + 0x114) = param_3;
  uVar11 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(lVar5 + 0x118) = uVar11;
  *(undefined4 *)(lVar5 + 0x11c) = param_2;
  *(undefined4 *)(lVar5 + 0x120) = param_3;
  uVar11 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(lVar5 + 0x124) = uVar11;
  *(undefined4 *)(lVar5 + 0x128) = param_2;
  *(undefined4 *)(lVar5 + 300) = param_3;
  uVar11 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(lVar5 + 0x17c) = uVar11;
  *(undefined4 *)(lVar5 + 0x180) = param_2;
  *(undefined4 *)(lVar5 + 0x184) = param_3;
  uVar11 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(lVar5 + 0x188) = uVar11;
  *(undefined4 *)(lVar5 + 0x18c) = param_2;
  *(undefined4 *)(lVar5 + 400) = param_3;
  if (((*(byte *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar5;
}



// ============================================================
// RVA: 0x15e8520 | Atlas.Gameplay.Kart.KartVisualBehaviour.SetAccelerationBoostVFX
// ============================================================

long Atlas_Gameplay_Kart_KartVisualBehaviour__SetAccelerationBoostVFX
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  if ((bRam0000000003eb53e9 & 1) == 0) {
    func_0x00f78a20(0x3d579b0);
    func_0x00f78a20(0x3d3c778);
    func_0x00f78a20(0x3d3c770);
    func_0x00f78a20(0x3d1df98);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb53e9 = 1;
  }
  *(long *)(param_4 + 0x1b0) = param_5;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<VFXBoostTiedBehaviour>_TypeInfo*/ uRam0000000003d1df98);
  lVar2 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar1,uRam0000000003d3c770);
  *(undefined8 *)(param_4 + 0x1c0) = uVar1;
  if (param_5 != 0) {
    uVar4 = *(uint *)(param_5 + 0x18);
    if (0 < (int)uVar4) {
      uVar5 = 0;
      do {
        if (uVar4 <= uVar5) goto LAB_015e8684;
        lVar2 = *(long *)(param_5 + (long)(int)uVar5 * 8 + 0x20);
        if (lVar2 == 0) goto LAB_015e8680;
        lVar3 = /*UnityEngine.GameObject$$GetComponentInChildren<TMP_Dropdown.DropdownItem>*/ func_0x0185d228(lVar2,uRam0000000003d579b0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar3,0,0);
        if ((int)lVar2 != 0) {
          if (lVar3 == 0) goto LAB_015e8680;
          /*Atlas.Gameplay.Kart.VFXBoostTiedBehaviour$$Init*/ func_0x0152724c(lVar3,0);
          if (*(long *)(param_4 + 0x1c0) == 0) goto LAB_015e8680;
          lVar2 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_4 + 0x1c0),lVar3,uRam0000000003d3c778);
        }
        uVar5 = uVar5 + 1;
        uVar4 = *(uint *)(param_5 + 0x18);
      } while ((int)uVar5 < (int)uVar4);
    }
    return lVar2;
  }
LAB_015e8680:
  func_0x00f78af4();
LAB_015e8684:
  uVar1 = func_0x00f78b24();
  lVar2 = func_0x00f78ac0(uVar1,0);
  if ((bRam0000000003eb53ea & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb53ea = 1;
  }
  uVar6 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(lVar2 + 0x100) = uVar6;
  *(undefined4 *)(lVar2 + 0x104) = param_2;
  *(undefined4 *)(lVar2 + 0x108) = param_3;
  uVar6 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(lVar2 + 0x10c) = uVar6;
  *(undefined4 *)(lVar2 + 0x110) = param_2;
  *(undefined4 *)(lVar2 + 0x114) = param_3;
  uVar6 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(lVar2 + 0x118) = uVar6;
  *(undefined4 *)(lVar2 + 0x11c) = param_2;
  *(undefined4 *)(lVar2 + 0x120) = param_3;
  uVar6 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(lVar2 + 0x124) = uVar6;
  *(undefined4 *)(lVar2 + 0x128) = param_2;
  *(undefined4 *)(lVar2 + 300) = param_3;
  uVar6 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(lVar2 + 0x17c) = uVar6;
  *(undefined4 *)(lVar2 + 0x180) = param_2;
  *(undefined4 *)(lVar2 + 0x184) = param_3;
  uVar6 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(lVar2 + 0x188) = uVar6;
  *(undefined4 *)(lVar2 + 0x18c) = param_2;
  *(undefined4 *)(lVar2 + 400) = param_3;
  if (((*(byte *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
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



// ============================================================
// RVA: 0x15e8690 | Atlas.Gameplay.Kart.KartVisualBehaviour..ctor
// ============================================================

undefined1  [16]
Atlas_Gameplay_Kart_KartVisualBehaviour___ctor
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb53ea & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb53ea = 1;
  }
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_4 + 0x100) = uVar1;
  *(undefined4 *)(param_4 + 0x104) = param_2;
  *(undefined4 *)(param_4 + 0x108) = param_3;
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_4 + 0x10c) = uVar1;
  *(undefined4 *)(param_4 + 0x110) = param_2;
  *(undefined4 *)(param_4 + 0x114) = param_3;
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_4 + 0x118) = uVar1;
  *(undefined4 *)(param_4 + 0x11c) = param_2;
  *(undefined4 *)(param_4 + 0x120) = param_3;
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_4 + 0x124) = uVar1;
  *(undefined4 *)(param_4 + 0x128) = param_2;
  *(undefined4 *)(param_4 + 300) = param_3;
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_4 + 0x17c) = uVar1;
  *(undefined4 *)(param_4 + 0x180) = param_2;
  *(undefined4 *)(param_4 + 0x184) = param_3;
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_4 + 0x188) = uVar1;
  *(undefined4 *)(param_4 + 0x18c) = param_2;
  *(undefined4 *)(param_4 + 400) = param_3;
  if (((*(byte *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_4;
  return auVar2;
}



// ============================================================
// RVA: 0x15e8774 | Atlas.Gameplay.Kart.KartVisualBehaviour..cctor
// ============================================================

void Atlas_Gameplay_Kart_KartVisualBehaviour___cctor(void)

{
  undefined4 uVar1;
  
  if ((bRam0000000003eb53eb & 1) == 0) {
    func_0x00f78a20(0x3d22d20);
    func_0x00f78a20(0x3d6c280);
    func_0x00f78a20(0x3d777a8);
    bRam0000000003eb53eb = 1;
  }
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('EngineRunning')*/ uRam0000000003d6c280,0);
  **(undefined4 **)(/*Atlas.Gameplay.Kart.KartVisualBehaviour_TypeInfo*/ lRam0000000003d22d20 + 0xb8) = uVar1;
  uVar1 = /*UnityEngine.Shader$$PropertyToID*/ func_0x03261878(/*STR('_ToonColour')*/ uRam0000000003d777a8,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartVisualBehaviour_TypeInfo*/ lRam0000000003d22d20 + 0xb8) + 4) = uVar1;
  return;
}



