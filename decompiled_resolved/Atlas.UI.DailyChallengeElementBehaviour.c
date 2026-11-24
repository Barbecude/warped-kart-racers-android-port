// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.DailyChallengeElementBehaviour

// ============================================================
// RVA: 0x15736e4 | Atlas.UI.DailyChallengeElementBehaviour.Init
// ============================================================

ulong Atlas_UI_DailyChallengeElementBehaviour__Init
                (long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                int param_6)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  uint extraout_w8;
  uint uVar4;
  undefined8 *puVar5;
  long extraout_x9;
  ulong unaff_x19;
  long lVar6;
  undefined8 *unaff_x20;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 unaff_x21;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  long *plVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 *puStack_200;
  undefined *puStack_1f8;
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
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((bRam0000000003eb5052 & 1) == 0) {
    func_0x00f78a20(0x3d62970);
    func_0x00f78a20(0x3d27030);
    func_0x00f78a20(0x3d25740);
    bRam0000000003eb5052 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    /*Atlas.UI.SlantFillBar$$Init*/ func_0x014fc998(*(long *)(param_1 + 0x18),0);
    lVar6 = *(long *)(param_1 + 0x18);
    if (((*(ushort *)(/*Atlas.UI.DailyChallengeElementBehaviour.<>c_TypeInfo*/ lRam0000000003d27030 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.DailyChallengeElementBehaviour.<>c_TypeInfo*/ lRam0000000003d27030 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar5 = *(undefined8 **)(/*Atlas.UI.DailyChallengeElementBehaviour.<>c_TypeInfo*/ lRam0000000003d27030 + 0xb8);
    puVar7 = (undefined8 *)puVar5[1];
    if (puVar7 == (undefined8 *)0x0) {
      if (((*(ushort *)(/*Atlas.UI.DailyChallengeElementBehaviour.<>c_TypeInfo*/ lRam0000000003d27030 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.DailyChallengeElementBehaviour.<>c_TypeInfo*/ lRam0000000003d27030 + 0xe0) == 0)) {
        func_0x00f78ad0();
        puVar5 = *(undefined8 **)(/*Atlas.UI.DailyChallengeElementBehaviour.<>c_TypeInfo*/ lRam0000000003d27030 + 0xb8);
      }
      uVar9 = *puVar5;
      puVar7 = (undefined8 *)func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
      param_4 = 0;
      param_3 = lRam0000000003d62970;
      /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(puVar7,uVar9);
      *(undefined8 **)(*(long *)(/*Atlas.UI.DailyChallengeElementBehaviour.<>c_TypeInfo*/ lRam0000000003d27030 + 0xb8) + 8) = puVar7;
    }
    if (lVar6 != 0) {
      if ((bRam0000000003eb4cce & 1) == 0) {
        func_0x00f78a20(0x3d3d9e8,puVar7,0);
        func_0x00f78a20(0x3d3d9e0);
        func_0x00f78a20(0x3d1e310);
        bRam0000000003eb4cce = 1;
      }
      uVar8 = *(ulong *)(lVar6 + 0xc0);
      if (uVar8 == 0) {
        uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>_TypeInfo*/ uRam0000000003d1e310);
        /*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>$$.ctor*/ func_0x0259c210(uVar8,uRam0000000003d3d9e0);
        *(ulong *)(lVar6 + 0xc0) = uVar8;
        if (uVar8 == 0) {
          lVar6 = func_0x00f78af4();
          if ((bRam0000000003eb4ccf & 1) == 0) {
            func_0x00f78a20(0x3d3d9f0);
            bRam0000000003eb4ccf = 1;
          }
          uVar8 = *(ulong *)(lVar6 + 0xc0);
          if (uVar8 == 0) {
            return 0;
          }
          uVar3 = uVar8;
          if (0 < *(int *)(uVar8 + 0x18)) {
            uVar3 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar8 + 0x10),0,*(int *)(uVar8 + 0x18),0);
            *(undefined4 *)(uVar8 + 0x18) = 0;
          }
          *(int *)(uVar8 + 0x1c) = *(int *)(uVar8 + 0x1c) + 1;
          return uVar3;
        }
      }
      uVar9 = 0x3f800000;
      lVar6 = *(long *)(uVar8 + 0x10);
      puVar5 = puVar7;
      if (lVar6 == 0) {
code_r0x0259cf3c:
        uVar9 = unaff_x21;
        puVar7 = unaff_x20;
        uVar8 = unaff_x19;
        uVar3 = func_0x00f78af4();
        lVar6 = extraout_x9;
        uVar4 = extraout_w8;
code_r0x0259cf40:
        *(uint *)(uVar8 + 0x18) = uVar4 + 1;
      }
      else {
        uVar4 = *(uint *)(uVar8 + 0x18);
        uVar3 = uVar8;
        if (uVar4 != *(uint *)(lVar6 + 0x18)) goto code_r0x0259cf40;
        puVar5 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3d9e8 + 0x18) + 0xc0) + 0x60);
        uVar3 = (*(code *)*puVar5)(uVar8,uVar4 + 1);
        lVar6 = *(long *)(uVar8 + 0x10);
        uVar4 = *(uint *)(uVar8 + 0x18);
        *(uint *)(uVar8 + 0x18) = uVar4 + 1;
        unaff_x19 = uVar8;
        unaff_x20 = puVar7;
        unaff_x21 = uVar9;
        if (lVar6 == 0) goto code_r0x0259cf3c;
      }
      if (uVar4 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = lVar6 + (long)(int)uVar4 * 0x10;
        *(undefined8 *)(lVar6 + 0x20) = uVar9;
        *(undefined8 **)(lVar6 + 0x28) = puVar7;
        *(int *)(uVar8 + 0x1c) = *(int *)(uVar8 + 0x1c) + 1;
        return uVar3;
      }
      uVar9 = func_0x00f78b24();
      auVar18 = func_0x00f78ac0(uVar9,0);
      plVar12 = auVar18._8_8_;
      lVar6 = auVar18._0_8_;
      (*(code *)**(undefined8 **)(*(long *)(puVar5[3] + 0xc0) + 0x48))(plVar12,0x14);
      if (lVar6 != 0) {
        pcVar11 = (code *)**(undefined8 **)(*(long *)(puVar5[3] + 0xc0) + 0x28);
        lVar10 = *(long *)(*(long *)(puVar5[3] + 0xc0) + 0x38);
        if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar10);
        }
        if (plVar12 != (long *)0x0) {
          if (*(long *)(*plVar12 + 0x40) == *(long *)(lVar10 + 0x40)) {
            puVar7 = (undefined8 *)func_0x00f78ae4(plVar12);
            (*pcVar11)(lVar6,*puVar7,puVar7[1],*(undefined8 *)(*(long *)(puVar5[3] + 0xc0) + 0x28));
            iVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar5[3] + 0xc0) + 0x68))(lVar6);
            return (ulong)(iVar2 - 1);
          }
          func_0x00f78e5c(plVar12,lVar10);
          goto code_r0x0259d128;
        }
      }
      func_0x00f78af4();
code_r0x0259d128:
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x259d12c);
      (*pcVar11)();
    }
  }
  auVar18 = func_0x00f78af4();
  puVar7 = auVar18._8_8_;
  lVar6 = auVar18._0_8_;
  if ((bRam0000000003eb5053 & 1) == 0) {
    func_0x00f78a20(0x3d66fb8);
    bRam0000000003eb5053 = 1;
  }
  uStack_c4 = 0;
  uVar16 = puVar7[3];
  uVar15 = puVar7[2];
  uVar14 = puVar7[5];
  uVar9 = puVar7[4];
  uVar17 = *puVar7;
  *(undefined8 *)(lVar6 + 0x88) = puVar7[1];
  *(undefined8 *)(lVar6 + 0x80) = uVar17;
  *(undefined8 *)(lVar6 + 0x98) = uVar16;
  *(undefined8 *)(lVar6 + 0x90) = uVar15;
  *(undefined8 *)(lVar6 + 0xa8) = uVar14;
  *(undefined8 *)(lVar6 + 0xa0) = uVar9;
  uStack_a8 = puVar7[3];
  uStack_b0 = puVar7[2];
  uStack_a0 = puVar7[4];
  uStack_b8 = puVar7[1];
  uStack_c0 = *puVar7;
  uStack_98._4_4_ = (undefined4)((ulong)puVar7[5] >> 0x20);
  uVar1 = uStack_98._4_4_;
  uStack_98 = puVar7[5];
  fVar13 = (float)/*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x015047a8((ulong)&uStack_c0 | 8,uVar1,0);
  *(bool *)(lVar6 + 0xb4) = 100.0 <= fVar13;
  if (param_3 == 0) goto code_r0x01573c38;
  plVar12 = *(long **)(lVar6 + 0x20);
  uStack_f8 = puVar7[1];
  uStack_100 = *puVar7;
  uStack_e8 = puVar7[3];
  uStack_f0 = puVar7[2];
  uStack_d8 = puVar7[5];
  uStack_e0 = puVar7[4];
  uVar9 = /*Atlas.Stats.DailyChallengeManager$$GetLocalisedFormattedStringForChallenge*/ func_0x01573c88(param_3,&uStack_100);
  if ((plVar12 == (long *)0x0) ||
     ((**(code **)(*plVar12 + 0x558))(plVar12,uVar9,*(undefined8 *)(*plVar12 + 0x560)), param_4 == 0
     )) goto code_r0x01573c38;
  /*Core.Localisation.LocalisationManager$$FixForMultilineIfArabic*/ func_0x0164ff98(param_4,*(undefined8 *)(lVar6 + 0x20),0);
  if (*(char *)(lVar6 + 0xb4) == '\0') {
    if ((*(long *)(lVar6 + 0x18) != 0) &&
       (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar6 + 0x18),0), lVar10 != 0)) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,1,0);
      if ((*(long *)(lVar6 + 0x48) != 0) &&
         (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar6 + 0x48),0), lVar10 != 0)) {
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,1,0);
        if ((*(long *)(lVar6 + 0x28) != 0) &&
           (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar6 + 0x28),0), lVar10 != 0)) {
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,1,0);
          plVar12 = *(long **)(lVar6 + 0x28);
          uStack_158 = puVar7[1];
          uStack_160 = *puVar7;
          uStack_148 = puVar7[3];
          uStack_150 = puVar7[2];
          uStack_138 = puVar7[5];
          uStack_140 = puVar7[4];
          uStack_c4 = /*Atlas.Stats.DailyChallengeManager$$GetChallengeXPReward*/ func_0x01573fa4(param_3,&uStack_160);
          uVar9 = /*System.UInt32$$ToString*/ func_0x02a0b3d0(&uStack_c4,0);
          uVar9 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('+ ')*/ uRam0000000003d66fb8,uVar9,0);
          if (plVar12 != (long *)0x0) {
            (**(code **)(*plVar12 + 0x558))(plVar12,uVar9,*(undefined8 *)(*plVar12 + 0x560));
            if ((*(long *)(lVar6 + 0x30) != 0) &&
               (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar6 + 0x30),0), lVar10 != 0)) {
              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,0,0);
              if ((*(long *)(lVar6 + 0x38) != 0) &&
                 (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar6 + 0x38),0), lVar10 != 0)) {
                /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,0,0);
                if ((*(long *)(lVar6 + 0x40) != 0) &&
                   (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar6 + 0x40),0), lVar10 != 0)) {
                  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,0,0);
                  lVar10 = *(long *)(lVar6 + 0x18);
                  if (param_6 == 0) {
                    uStack_1d8 = puVar7[3];
                    uStack_1e0 = puVar7[2];
                    uStack_1d0 = puVar7[4];
                    uStack_1e8 = puVar7[1];
                    uStack_1f0 = *puVar7;
                    uStack_1c8._4_4_ = (undefined4)((ulong)puVar7[5] >> 0x20);
                    uVar1 = uStack_1c8._4_4_;
                    uStack_1c8 = puVar7[5];
                    fVar13 = (float)/*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x015047a8((ulong)&uStack_1f0 | 8,uVar1,0);
                    if (lVar10 == 0) goto code_r0x01573c38;
                    /*Atlas.UI.SlantFillBar$$SetProgress*/ func_0x014fcd88(fVar13 / 100.0,lVar10,0);
                  }
                  else {
                    uStack_188 = puVar7[1];
                    uStack_190 = *puVar7;
                    uStack_178 = puVar7[3];
                    uStack_180 = puVar7[2];
                    uStack_168 = puVar7[5];
                    uStack_170 = puVar7[4];
                    fVar13 = (float)/*Atlas.Stats.DailyChallengeManager$$GetPercentCompleteForSessionStartAchievedValue*/ func_0x01574014(param_3,&uStack_190);
                    if (lVar10 == 0) goto code_r0x01573c38;
                    /*Atlas.UI.SlantFillBar$$SetProgress*/ func_0x014fcd88(fVar13 / 100.0,lVar10,0);
                    uStack_1a8 = puVar7[3];
                    uStack_1b0 = puVar7[2];
                    uStack_1a0 = puVar7[4];
                    uStack_1b8 = puVar7[1];
                    uStack_1c0 = *puVar7;
                    uStack_198._4_4_ = (undefined4)((ulong)puVar7[5] >> 0x20);
                    uVar1 = uStack_198._4_4_;
                    uStack_198 = puVar7[5];
                    fVar13 = (float)/*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x015047a8((ulong)&uStack_1c0 | 8,uVar1,0);
                    *(float *)(lVar6 + 0xb0) = fVar13 / 100.0;
                  }
                  plVar12 = *(long **)(lVar6 + 0x70);
                  if (plVar12 != (long *)0x0) {
                    uVar8 = (**(code **)(*plVar12 + 0x2a8))
                                      (*(undefined4 *)(lVar6 + 0x60),*(undefined4 *)(lVar6 + 100),
                                       *(undefined4 *)(lVar6 + 0x68),*(undefined4 *)(lVar6 + 0x6c),
                                       plVar12,*(undefined8 *)(*plVar12 + 0x2b0));
                    return uVar8;
                  }
                }
              }
            }
          }
        }
      }
    }
    goto code_r0x01573c38;
  }
  if ((*(long *)(lVar6 + 0x48) == 0) ||
     (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar6 + 0x48),0), lVar10 == 0)) goto code_r0x01573c38;
  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,0,0);
  plVar12 = *(long **)(lVar6 + 0x70);
  if (plVar12 == (long *)0x0) goto code_r0x01573c38;
  (**(code **)(*plVar12 + 0x2a8))
            (*(undefined4 *)(lVar6 + 0x50),*(undefined4 *)(lVar6 + 0x54),
             *(undefined4 *)(lVar6 + 0x58),*(undefined4 *)(lVar6 + 0x5c),plVar12,
             *(undefined8 *)(*plVar12 + 0x2b0));
  if (param_6 == 0) {
code_r0x01573960:
    if ((*(long *)(lVar6 + 0x78) == 0) ||
       (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar6 + 0x78),0), lVar10 == 0)) goto code_r0x01573c38;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,1,0);
    if ((*(long *)(lVar6 + 0x30) == 0) ||
       (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar6 + 0x30),0), lVar10 == 0)) goto code_r0x01573c38;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,1,0);
    if ((*(long *)(lVar6 + 0x38) == 0) ||
       (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar6 + 0x38),0), lVar10 == 0)) goto code_r0x01573c38;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,0,0);
    lVar10 = *(long *)(lVar6 + 0x40);
  }
  else {
    uStack_128 = puVar7[1];
    uStack_130 = *puVar7;
    uStack_118 = puVar7[3];
    uStack_120 = puVar7[2];
    uStack_108 = puVar7[5];
    uStack_110 = puVar7[4];
    iVar2 = /*Atlas.Stats.DailyChallengeManager$$WasCompeltedThisSession*/ func_0x01573e3c(param_3,&uStack_130);
    if (iVar2 == 0) goto code_r0x01573960;
    lVar10 = *(long *)(lVar6 + 0x78);
  }
  if ((lVar10 != 0) && (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar10,0), lVar10 != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,0,0);
    if ((*(long *)(lVar6 + 0x18) != 0) &&
       (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar6 + 0x18),0), lVar10 != 0)) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,0,0);
      if ((*(long *)(lVar6 + 0x28) != 0) &&
         (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar6 + 0x28),0), lVar6 != 0)) {
        uVar8 = /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar6,0,0);
        return uVar8;
      }
    }
  }
code_r0x01573c38:
  puVar7 = (undefined8 *)func_0x00f78af4();
  puStack_1f8 = &Atlas_Stats_DailyChallengeManager__IsChallengeComplete;
  uStack_218 = puVar7[3];
  uStack_220 = puVar7[2];
  uStack_210 = puVar7[4];
  uStack_228 = puVar7[1];
  uStack_230 = *puVar7;
  uStack_208._4_4_ = (undefined4)((ulong)puVar7[5] >> 0x20);
  uVar1 = uStack_208._4_4_;
  uStack_208 = puVar7[5];
  puStack_200 = &stack0xffffffffffffffc0;
  fVar13 = (float)/*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x015047a8((ulong)&uStack_230 | 8,uVar1,0);
  return (ulong)(100.0 <= fVar13);
}



// ============================================================
// RVA: 0x15737f4 | Atlas.UI.DailyChallengeElementBehaviour.Set
// ============================================================

ulong Atlas_UI_DailyChallengeElementBehaviour__Set
                (long param_1,undefined8 *param_2,long param_3,long param_4,undefined8 param_5,
                int param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 *puStack_1d0;
  undefined *puStack_1c8;
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
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000003eb5053 & 1) == 0) {
    func_0x00f78a20(0x3d66fb8);
    bRam0000000003eb5053 = 1;
  }
  uStack_94 = 0;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  uVar9 = param_2[5];
  uVar3 = param_2[4];
  uVar12 = *param_2;
  *(undefined8 *)(param_1 + 0x88) = param_2[1];
  *(undefined8 *)(param_1 + 0x80) = uVar12;
  *(undefined8 *)(param_1 + 0x98) = uVar11;
  *(undefined8 *)(param_1 + 0x90) = uVar10;
  *(undefined8 *)(param_1 + 0xa8) = uVar9;
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  uStack_78 = param_2[3];
  uStack_80 = param_2[2];
  uStack_70 = param_2[4];
  uStack_88 = param_2[1];
  uStack_90 = *param_2;
  uStack_68._4_4_ = (undefined4)((ulong)param_2[5] >> 0x20);
  uVar1 = uStack_68._4_4_;
  uStack_68 = param_2[5];
  fVar8 = (float)/*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x015047a8((ulong)&uStack_90 | 8,uVar1,0);
  *(bool *)(param_1 + 0xb4) = 100.0 <= fVar8;
  if (param_3 == 0) goto LAB_01573c38;
  plVar7 = *(long **)(param_1 + 0x20);
  uStack_c8 = param_2[1];
  uStack_d0 = *param_2;
  uStack_b8 = param_2[3];
  uStack_c0 = param_2[2];
  uStack_a8 = param_2[5];
  uStack_b0 = param_2[4];
  uVar3 = /*Atlas.Stats.DailyChallengeManager$$GetLocalisedFormattedStringForChallenge*/ func_0x01573c88(param_3,&uStack_d0);
  if ((plVar7 == (long *)0x0) ||
     ((**(code **)(*plVar7 + 0x558))(plVar7,uVar3,*(undefined8 *)(*plVar7 + 0x560)), param_4 == 0))
  goto LAB_01573c38;
  /*Core.Localisation.LocalisationManager$$FixForMultilineIfArabic*/ func_0x0164ff98(param_4,*(undefined8 *)(param_1 + 0x20),0);
  if (*(char *)(param_1 + 0xb4) == '\0') {
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x18),0), lVar4 != 0)) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,1,0);
      if ((*(long *)(param_1 + 0x48) != 0) &&
         (lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x48),0), lVar4 != 0)) {
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,1,0);
        if ((*(long *)(param_1 + 0x28) != 0) &&
           (lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x28),0), lVar4 != 0)) {
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,1,0);
          plVar7 = *(long **)(param_1 + 0x28);
          uStack_128 = param_2[1];
          uStack_130 = *param_2;
          uStack_118 = param_2[3];
          uStack_120 = param_2[2];
          uStack_108 = param_2[5];
          uStack_110 = param_2[4];
          uStack_94 = /*Atlas.Stats.DailyChallengeManager$$GetChallengeXPReward*/ func_0x01573fa4(param_3,&uStack_130);
          uVar3 = /*System.UInt32$$ToString*/ func_0x02a0b3d0(&uStack_94,0);
          uVar3 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('+ ')*/ uRam0000000003d66fb8,uVar3,0);
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x558))(plVar7,uVar3,*(undefined8 *)(*plVar7 + 0x560));
            if ((*(long *)(param_1 + 0x30) != 0) &&
               (lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x30),0), lVar4 != 0)) {
              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,0,0);
              if ((*(long *)(param_1 + 0x38) != 0) &&
                 (lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x38),0), lVar4 != 0)) {
                /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,0,0);
                if ((*(long *)(param_1 + 0x40) != 0) &&
                   (lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x40),0), lVar4 != 0)) {
                  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,0,0);
                  lVar4 = *(long *)(param_1 + 0x18);
                  if (param_6 == 0) {
                    uStack_1a8 = param_2[3];
                    uStack_1b0 = param_2[2];
                    uStack_1a0 = param_2[4];
                    uStack_1b8 = param_2[1];
                    uStack_1c0 = *param_2;
                    uStack_198._4_4_ = (undefined4)((ulong)param_2[5] >> 0x20);
                    uVar1 = uStack_198._4_4_;
                    uStack_198 = param_2[5];
                    fVar8 = (float)/*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x015047a8((ulong)&uStack_1c0 | 8,uVar1,0);
                    if (lVar4 == 0) goto LAB_01573c38;
                    /*Atlas.UI.SlantFillBar$$SetProgress*/ func_0x014fcd88(fVar8 / 100.0,lVar4,0);
                  }
                  else {
                    uStack_158 = param_2[1];
                    uStack_160 = *param_2;
                    uStack_148 = param_2[3];
                    uStack_150 = param_2[2];
                    uStack_138 = param_2[5];
                    uStack_140 = param_2[4];
                    fVar8 = (float)/*Atlas.Stats.DailyChallengeManager$$GetPercentCompleteForSessionStartAchievedValue*/ func_0x01574014(param_3,&uStack_160);
                    if (lVar4 == 0) goto LAB_01573c38;
                    /*Atlas.UI.SlantFillBar$$SetProgress*/ func_0x014fcd88(fVar8 / 100.0,lVar4,0);
                    uStack_178 = param_2[3];
                    uStack_180 = param_2[2];
                    uStack_170 = param_2[4];
                    uStack_188 = param_2[1];
                    uStack_190 = *param_2;
                    uStack_168._4_4_ = (undefined4)((ulong)param_2[5] >> 0x20);
                    uVar1 = uStack_168._4_4_;
                    uStack_168 = param_2[5];
                    fVar8 = (float)/*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x015047a8((ulong)&uStack_190 | 8,uVar1,0);
                    *(float *)(param_1 + 0xb0) = fVar8 / 100.0;
                  }
                  plVar7 = *(long **)(param_1 + 0x70);
                  if (plVar7 != (long *)0x0) {
                    uVar5 = (**(code **)(*plVar7 + 0x2a8))
                                      (*(undefined4 *)(param_1 + 0x60),
                                       *(undefined4 *)(param_1 + 100),
                                       *(undefined4 *)(param_1 + 0x68),
                                       *(undefined4 *)(param_1 + 0x6c),plVar7,
                                       *(undefined8 *)(*plVar7 + 0x2b0));
                    return uVar5;
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LAB_01573c38;
  }
  if ((*(long *)(param_1 + 0x48) == 0) ||
     (lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x48),0), lVar4 == 0)) goto LAB_01573c38;
  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,0,0);
  plVar7 = *(long **)(param_1 + 0x70);
  if (plVar7 == (long *)0x0) goto LAB_01573c38;
  (**(code **)(*plVar7 + 0x2a8))
            (*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
             *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),plVar7,
             *(undefined8 *)(*plVar7 + 0x2b0));
  if (param_6 == 0) {
LAB_01573960:
    if ((*(long *)(param_1 + 0x78) == 0) ||
       (lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x78),0), lVar4 == 0)) goto LAB_01573c38;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,1,0);
    if ((*(long *)(param_1 + 0x30) == 0) ||
       (lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x30),0), lVar4 == 0)) goto LAB_01573c38;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,1,0);
    if ((*(long *)(param_1 + 0x38) == 0) ||
       (lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x38),0), lVar4 == 0)) goto LAB_01573c38;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,0,0);
    lVar4 = *(long *)(param_1 + 0x40);
  }
  else {
    uStack_f8 = param_2[1];
    uStack_100 = *param_2;
    uStack_e8 = param_2[3];
    uStack_f0 = param_2[2];
    uStack_d8 = param_2[5];
    uStack_e0 = param_2[4];
    iVar2 = /*Atlas.Stats.DailyChallengeManager$$WasCompeltedThisSession*/ func_0x01573e3c(param_3,&uStack_100);
    if (iVar2 == 0) goto LAB_01573960;
    lVar4 = *(long *)(param_1 + 0x78);
  }
  if ((lVar4 != 0) && (lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar4,0), lVar4 != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,0,0);
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x18),0), lVar4 != 0)) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,0,0);
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x28),0), lVar4 != 0)) {
        uVar5 = /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,0,0);
        return uVar5;
      }
    }
  }
LAB_01573c38:
  puVar6 = (undefined8 *)func_0x00f78af4();
  puStack_1c8 = &Atlas_Stats_DailyChallengeManager__IsChallengeComplete;
  uStack_1e8 = puVar6[3];
  uStack_1f0 = puVar6[2];
  uStack_1e0 = puVar6[4];
  uStack_1f8 = puVar6[1];
  uStack_200 = *puVar6;
  uStack_1d8._4_4_ = (undefined4)((ulong)puVar6[5] >> 0x20);
  uVar1 = uStack_1d8._4_4_;
  uStack_1d8 = puVar6[5];
  puStack_1d0 = &stack0xfffffffffffffff0;
  fVar8 = (float)/*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x015047a8((ulong)&uStack_200 | 8,uVar1,0);
  return (ulong)(100.0 <= fVar8);
}



// ============================================================
// RVA: 0x1574148 | Atlas.UI.DailyChallengeElementBehaviour.AnimateProgress
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */

ulong Atlas_UI_DailyChallengeElementBehaviour__AnimateProgress(ulong param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *extraout_x1;
  undefined8 *puVar12;
  undefined8 in_x7;
  uint extraout_w8;
  long extraout_x9;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  long lVar13;
  code *pcVar14;
  uint extraout_s0;
  float fVar15;
  undefined4 extraout_s0_00;
  undefined1 auVar16 [16];
  undefined1 *puVar17;
  undefined *puVar18;
  
  fVar15 = *(float *)(param_1 + 0xb0);
  if (fVar15 <= 0.0) {
    return param_1;
  }
  uVar7 = *(ulong *)(param_1 + 0x18);
  if (uVar7 == 0) {
    lVar3 = func_0x00f78af4();
    if ((bRam0000000003eb5054 & 1) == 0) {
      func_0x00f78a20(0x3d79030);
      bRam0000000003eb5054 = 1;
    }
    if (*(char *)(lVar3 + 0xb4) == '\0') {
      return 0;
    }
    if ((*(long *)(lVar3 + 0x78) != 0) &&
       (lVar13 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar3 + 0x78),0), lVar13 != 0)) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar13,1,0);
      uVar7 = /*STR('event:/UI/Front_End/Icon')*/ uRam0000000003d79030;
      lVar3 = *(long *)(lVar3 + 0x78);
      if (lVar3 != 0) {
        uVar9 = 0x3d29408;
        if ((bRam0000000003eb4d7f & 1) == 0) {
          func_0x00f78a20(0x3d20bc0,/*STR('event:/UI/Front_End/Icon')*/ uRam0000000003d79030,0);
          func_0x00f78a20(0x3d25428);
          func_0x00f78a20(0x3d5e778);
          func_0x00f78a20(0x3d5e788);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e860);
          func_0x00f78a20(0x3d64798);
          func_0x00f78a20(0x3d29408);
          bRam0000000003eb4d7f = 1;
        }
        lVar13 = func_0x00f78aec(/*Atlas.UI.UIAnimatingFlagsBehaviour.<>c__DisplayClass16_0_TypeInfo*/ uRam0000000003d29408);
        /*Atlas.UI.UIAnimatingFlagsBehaviour.<>c__DisplayClass16_0$$.ctor*/ func_0x0156b724(lVar13,0);
        if (lVar13 != 0) {
          uVar9 = 0x3d5e860;
          *(ulong *)(lVar13 + 0x10) = uVar7;
          if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar7 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
          /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar7,lVar3,uRam0000000003d5e860);
          if (*(long *)(lVar3 + 0x28) != 0) {
            uVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar3 + 0x28),0);
            uVar9 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(*(undefined4 *)(lVar3 + 0x3c),*(undefined4 *)(lVar3 + 0x38),
                                    uVar9,0);
            uVar9 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar9,*(undefined4 *)(lVar3 + 0x40),uRam0000000003d5e7a8);
            uVar9 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar7,uVar9,0);
            if (*(long *)(lVar3 + 0x20) != 0) {
              uVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar3 + 0x20),0);
              uVar4 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(*(undefined4 *)(lVar3 + 0x3c),*(undefined4 *)(lVar3 + 0x38),
                                      uVar4,0);
              uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar4,*(undefined4 *)(lVar3 + 0x40),uRam0000000003d5e7a8);
              uVar9 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar9,uVar4,0);
              if (*(long *)(lVar3 + 0x30) != 0) {
                uVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar3 + 0x30),0);
                uVar4 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(*(undefined4 *)(lVar3 + 0x3c),*(undefined4 *)(lVar3 + 0x38),
                                        uVar4,0);
                uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar4,*(undefined4 *)(lVar3 + 0x40),uRam0000000003d5e7a8);
                uVar9 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar9,uVar4,0);
                uVar4 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(0,*(undefined4 *)(lVar3 + 0x38),
                                        *(undefined8 *)(lVar3 + 0x28),0);
                uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar4,*(undefined4 *)(lVar3 + 0x44),uRam0000000003d5e788);
                uVar9 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar9,uVar4,0);
                uVar4 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(0x3f800000,*(undefined4 *)(lVar3 + 0x38),
                                        *(undefined8 *)(lVar3 + 0x20),0);
                uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar4,*(undefined4 *)(lVar3 + 0x44),uRam0000000003d5e788);
                uVar9 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar9,uVar4,0);
                uVar4 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(0x3f800000,*(undefined4 *)(lVar3 + 0x38),
                                        *(undefined8 *)(lVar3 + 0x30),0);
                uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar4,*(undefined4 *)(lVar3 + 0x44),uRam0000000003d5e788);
                uVar4 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar9,uVar4,0);
                /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(extraout_s0_00,uVar4,uRam0000000003d5e778);
                uVar11 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar13 + 0x10),0);
                if ((uVar11 & 1) == 0) {
                  uVar9 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
                  /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar9,lVar13,uRam0000000003d64798,0);
                  /*DG.Tweening.TweenSettingsExtensions$$AppendCallback*/ func_0x016c3190(uVar7,uVar9,0);
                }
                if (*(long *)(lVar3 + 0x20) != 0) {
                  uVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar3 + 0x20),0);
                  uVar4 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(0x3f800000,*(undefined4 *)(lVar3 + 0x48),uVar4,0);
                  uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar4,*(undefined4 *)(lVar3 + 0x4c),uRam0000000003d5e7a8);
                  lVar13 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar7,uVar4,0);
                  if (*(long *)(lVar3 + 0x30) != 0) {
                    uVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar3 + 0x30),0);
                    uVar9 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(0x3f800000,*(undefined4 *)(lVar3 + 0x48),uVar9,0);
                    uVar9 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar9,*(undefined4 *)(lVar3 + 0x4c),uRam0000000003d5e7a8
                                           );
                    uVar9 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(lVar13,uVar9,0);
                    uVar4 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(0,*(undefined4 *)(lVar3 + 0x48),
                                            *(undefined8 *)(lVar3 + 0x30),0);
                    uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar4,*(undefined4 *)(lVar3 + 0x50),uRam0000000003d5e788
                                           );
                    /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar9,uVar4,0);
                    return uVar7;
                  }
                }
              }
            }
          }
        }
        lVar3 = func_0x00f78af4();
        puVar17 = &stack0xffffffffffffff80;
        if ((*(long *)(lVar3 + 0x20) != 0) &&
           (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar3 + 0x20),0), lVar5 != 0)) {
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar5,1,0);
          plVar6 = *(long **)(lVar3 + 0x20);
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x298))(plVar6,*(undefined8 *)(*plVar6 + 0x2a0));
            plVar6 = *(long **)(lVar3 + 0x20);
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x2a8))(plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
              if ((*(long *)(lVar3 + 0x28) != 0) &&
                 (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar3 + 0x28),0), lVar5 != 0)) {
                /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar5,1,0);
                plVar6 = *(long **)(lVar3 + 0x20);
                if (plVar6 != (long *)0x0) {
                  (**(code **)(*plVar6 + 0x298))(plVar6,*(undefined8 *)(*plVar6 + 0x2a0));
                  plVar6 = *(long **)(lVar3 + 0x28);
                  if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x015124f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    uVar7 = (**(code **)(*plVar6 + 0x2a8))(plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
                    return uVar7;
                  }
                }
              }
            }
          }
        }
        lVar5 = func_0x00f78af4();
        puVar18 = &Atlas_UI_UIAnimatingFlagsBehaviour__OnDestroy;
        if ((bRam0000000003eb5c29 & 1) == 0) {
          func_0x00f78a20(0x3d20bc0,0,0);
          bRam0000000003eb5c29 = 1;
        }
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((bRam0000000003eb5af0 & 1) == 0) {
          func_0x00f78a20(0x3d20bc0,0,0);
          func_0x00f78a20(0x3d25440);
          bRam0000000003eb5af0 = 1;
        }
        if (lVar5 == 0) {
          uVar7 = 0;
        }
        else {
          if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar1 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,lVar5,0,0,0,0,in_x7,uVar9,lVar13,uVar7,lVar3,puVar17,puVar18
                                 );
          uVar7 = (ulong)uVar1;
        }
        return uVar7;
      }
    }
    uVar7 = func_0x00f78af4();
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
  *(undefined1 *)(uVar7 + 0x90) = 1;
  *(float *)(uVar7 + 0x94) = fVar15;
  *(undefined8 *)(uVar7 + 0x98) = 0;
  if (*(char *)(uVar7 + 0x3c) == '\0') {
    return uVar7;
  }
  uVar7 = *(ulong *)(uVar7 + 0xb8);
  if (uVar7 != 0) {
    /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar7,0,0);
    return uVar7;
  }
  lVar3 = func_0x00f78af4(0,0,0);
  if ((bRam0000000003eb4cce & 1) == 0) {
    func_0x00f78a20(0x3d3d9e8);
    func_0x00f78a20(0x3d3d9e0);
    func_0x00f78a20(0x3d1e310);
    bRam0000000003eb4cce = 1;
  }
  uVar7 = *(ulong *)(lVar3 + 0xc0);
  if (uVar7 == 0) {
    uVar7 = func_0x00f78aec(/*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>_TypeInfo*/ uRam0000000003d1e310);
    /*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>$$.ctor*/ func_0x0259c210(uVar7,uRam0000000003d3d9e0);
    *(ulong *)(lVar3 + 0xc0) = uVar7;
    if (uVar7 == 0) {
      lVar3 = func_0x00f78af4();
      if ((bRam0000000003eb4ccf & 1) == 0) {
        func_0x00f78a20(0x3d3d9f0);
        bRam0000000003eb4ccf = 1;
      }
      uVar7 = *(ulong *)(lVar3 + 0xc0);
      if (uVar7 == 0) {
        return 0;
      }
      uVar11 = uVar7;
      if (0 < *(int *)(uVar7 + 0x18)) {
        uVar11 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar7 + 0x10),0,*(int *)(uVar7 + 0x18),0);
        *(undefined4 *)(uVar7 + 0x18) = 0;
      }
      *(int *)(uVar7 + 0x1c) = *(int *)(uVar7 + 0x1c) + 1;
      return uVar11;
    }
  }
  uVar11 = (ulong)extraout_s0;
  lVar3 = *(long *)(uVar7 + 0x10);
  puVar12 = extraout_x1;
  if (lVar3 == 0) {
code_r0x0259cf3c:
    uVar11 = unaff_x21;
    uVar7 = unaff_x19;
    uVar8 = func_0x00f78af4();
    lVar3 = extraout_x9;
    uVar1 = extraout_w8;
code_r0x0259cf40:
    *(uint *)(uVar7 + 0x18) = uVar1 + 1;
  }
  else {
    uVar1 = *(uint *)(uVar7 + 0x18);
    uVar8 = uVar7;
    unaff_x20 = extraout_x1;
    if (uVar1 != *(uint *)(lVar3 + 0x18)) goto code_r0x0259cf40;
    puVar12 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3d9e8 + 0x18) + 0xc0) + 0x60);
    uVar8 = (*(code *)*puVar12)(uVar7,uVar1 + 1);
    lVar3 = *(long *)(uVar7 + 0x10);
    uVar1 = *(uint *)(uVar7 + 0x18);
    *(uint *)(uVar7 + 0x18) = uVar1 + 1;
    unaff_x19 = uVar7;
    unaff_x21 = uVar11;
    if (lVar3 == 0) goto code_r0x0259cf3c;
  }
  if (uVar1 < *(uint *)(lVar3 + 0x18)) {
    lVar3 = lVar3 + (long)(int)uVar1 * 0x10;
    *(ulong *)(lVar3 + 0x20) = uVar11;
    *(undefined8 **)(lVar3 + 0x28) = unaff_x20;
    *(int *)(uVar7 + 0x1c) = *(int *)(uVar7 + 0x1c) + 1;
    return uVar8;
  }
  uVar9 = func_0x00f78b24();
  auVar16 = func_0x00f78ac0(uVar9,0);
  plVar6 = auVar16._8_8_;
  lVar3 = auVar16._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x48))(plVar6,0x14);
  if (lVar3 != 0) {
    pcVar14 = (code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x28);
    lVar13 = *(long *)(*(long *)(puVar12[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar13);
    }
    if (plVar6 != (long *)0x0) {
      if (*(long *)(*plVar6 + 0x40) == *(long *)(lVar13 + 0x40)) {
        puVar10 = (undefined8 *)func_0x00f78ae4(plVar6);
        (*pcVar14)(lVar3,*puVar10,puVar10[1],*(undefined8 *)(*(long *)(puVar12[3] + 0xc0) + 0x28));
        iVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x68))(lVar3);
        return (ulong)(iVar2 - 1);
      }
      func_0x00f78e5c(plVar6,lVar13);
      goto code_r0x0259d128;
    }
  }
  func_0x00f78af4();
code_r0x0259d128:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x259d12c);
  (*pcVar14)();
}



// ============================================================
// RVA: 0x1574180 | Atlas.UI.DailyChallengeElementBehaviour.AnimateComplete
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */

ulong Atlas_UI_DailyChallengeElementBehaviour__AnimateComplete(undefined4 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 in_x7;
  undefined1 **ppuVar10;
  undefined *puVar11;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  if ((bRam0000000003eb5054 & 1) == 0) {
    func_0x00f78a20(0x3d79030);
    bRam0000000003eb5054 = 1;
  }
  if (*(char *)(param_2 + 0xb4) == '\0') {
    return 0;
  }
  if ((*(long *)(param_2 + 0x78) != 0) &&
     (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_2 + 0x78),0), lVar9 != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar9,1,0);
    uVar3 = /*STR('event:/UI/Front_End/Icon')*/ uRam0000000003d79030;
    lVar9 = *(long *)(param_2 + 0x78);
    if (lVar9 != 0) {
      uVar4 = 0x3d29408;
      if ((bRam0000000003eb4d7f & 1) == 0) {
        func_0x00f78a20(0x3d20bc0,/*STR('event:/UI/Front_End/Icon')*/ uRam0000000003d79030,0);
        func_0x00f78a20(0x3d25428);
        func_0x00f78a20(0x3d5e778);
        func_0x00f78a20(0x3d5e788);
        func_0x00f78a20(0x3d5e7a8);
        func_0x00f78a20(0x3d5e860);
        func_0x00f78a20(0x3d64798);
        func_0x00f78a20(0x3d29408);
        bRam0000000003eb4d7f = 1;
      }
      lVar2 = func_0x00f78aec(/*Atlas.UI.UIAnimatingFlagsBehaviour.<>c__DisplayClass16_0_TypeInfo*/ uRam0000000003d29408);
      /*Atlas.UI.UIAnimatingFlagsBehaviour.<>c__DisplayClass16_0$$.ctor*/ func_0x0156b724(lVar2,0);
      if (lVar2 != 0) {
        uVar4 = 0x3d5e860;
        *(ulong *)(lVar2 + 0x10) = uVar3;
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar3 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
        /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar3,lVar9,uRam0000000003d5e860);
        if (*(long *)(lVar9 + 0x28) != 0) {
          uVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar9 + 0x28),0);
          uVar4 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(*(undefined4 *)(lVar9 + 0x3c),*(undefined4 *)(lVar9 + 0x38),uVar4,
                                  0);
          uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar4,*(undefined4 *)(lVar9 + 0x40),uRam0000000003d5e7a8);
          uVar4 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar3,uVar4,0);
          if (*(long *)(lVar9 + 0x20) != 0) {
            uVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar9 + 0x20),0);
            uVar5 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(*(undefined4 *)(lVar9 + 0x3c),*(undefined4 *)(lVar9 + 0x38),
                                    uVar5,0);
            uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar5,*(undefined4 *)(lVar9 + 0x40),uRam0000000003d5e7a8);
            uVar4 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar4,uVar5,0);
            if (*(long *)(lVar9 + 0x30) != 0) {
              uVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar9 + 0x30),0);
              uVar5 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(*(undefined4 *)(lVar9 + 0x3c),*(undefined4 *)(lVar9 + 0x38),
                                      uVar5,0);
              uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar5,*(undefined4 *)(lVar9 + 0x40),uRam0000000003d5e7a8);
              uVar4 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar4,uVar5,0);
              uVar5 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(0,*(undefined4 *)(lVar9 + 0x38),*(undefined8 *)(lVar9 + 0x28),
                                      0);
              uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar5,*(undefined4 *)(lVar9 + 0x44),uRam0000000003d5e788);
              uVar4 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar4,uVar5,0);
              uVar5 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(0x3f800000,*(undefined4 *)(lVar9 + 0x38),
                                      *(undefined8 *)(lVar9 + 0x20),0);
              uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar5,*(undefined4 *)(lVar9 + 0x44),uRam0000000003d5e788);
              uVar4 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar4,uVar5,0);
              uVar5 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(0x3f800000,*(undefined4 *)(lVar9 + 0x38),
                                      *(undefined8 *)(lVar9 + 0x30),0);
              uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar5,*(undefined4 *)(lVar9 + 0x44),uRam0000000003d5e788);
              uVar5 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar4,uVar5,0);
              /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(param_1,uVar5,uRam0000000003d5e778);
              uVar6 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar2 + 0x10),0);
              if ((uVar6 & 1) == 0) {
                uVar4 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
                /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar4,lVar2,uRam0000000003d64798,0);
                /*DG.Tweening.TweenSettingsExtensions$$AppendCallback*/ func_0x016c3190(uVar3,uVar4,0);
              }
              if (*(long *)(lVar9 + 0x20) != 0) {
                uVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar9 + 0x20),0);
                uVar5 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(0x3f800000,*(undefined4 *)(lVar9 + 0x48),uVar5,0);
                uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar5,*(undefined4 *)(lVar9 + 0x4c),uRam0000000003d5e7a8);
                lVar2 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar3,uVar5,0);
                if (*(long *)(lVar9 + 0x30) != 0) {
                  uVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar9 + 0x30),0);
                  uVar4 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(0x3f800000,*(undefined4 *)(lVar9 + 0x48),uVar4,0);
                  uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar4,*(undefined4 *)(lVar9 + 0x4c),uRam0000000003d5e7a8);
                  uVar4 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(lVar2,uVar4,0);
                  uVar5 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(0,*(undefined4 *)(lVar9 + 0x48),
                                          *(undefined8 *)(lVar9 + 0x30),0);
                  uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar5,*(undefined4 *)(lVar9 + 0x50),uRam0000000003d5e788);
                  /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar4,uVar5,0);
                  return uVar3;
                }
              }
            }
          }
        }
      }
      lVar9 = func_0x00f78af4();
      puStack_68 = &Atlas_UI_UIAnimatingFlagsBehaviour__SetCompleted;
      ppuVar10 = &puStack_70;
      puStack_70 = &stack0xfffffffffffffff0;
      if ((*(long *)(lVar9 + 0x20) != 0) &&
         (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar9 + 0x20),0), lVar7 != 0)) {
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar7,1,0);
        plVar8 = *(long **)(lVar9 + 0x20);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
          plVar8 = *(long **)(lVar9 + 0x20);
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x2a8))(plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
            if ((*(long *)(lVar9 + 0x28) != 0) &&
               (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar9 + 0x28),0), lVar7 != 0)) {
              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar7,1,0);
              plVar8 = *(long **)(lVar9 + 0x20);
              if (plVar8 != (long *)0x0) {
                (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
                plVar8 = *(long **)(lVar9 + 0x28);
                if (plVar8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x015124f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar3 = (**(code **)(*plVar8 + 0x2a8))(plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
                  return uVar3;
                }
              }
            }
          }
        }
      }
      lVar7 = func_0x00f78af4();
      puVar11 = &Atlas_UI_UIAnimatingFlagsBehaviour__OnDestroy;
      if ((bRam0000000003eb5c29 & 1) == 0) {
        func_0x00f78a20(0x3d20bc0,0,0);
        bRam0000000003eb5c29 = 1;
      }
      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((bRam0000000003eb5af0 & 1) == 0) {
        func_0x00f78a20(0x3d20bc0,0,0);
        func_0x00f78a20(0x3d25440);
        bRam0000000003eb5af0 = 1;
      }
      if (lVar7 == 0) {
        uVar3 = 0;
      }
      else {
        if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar1 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,lVar7,0,0,0,0,in_x7,uVar4,lVar2,uVar3,lVar9,ppuVar10,puVar11);
        uVar3 = (ulong)uVar1;
      }
      return uVar3;
    }
  }
  uVar3 = func_0x00f78af4();
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



// ============================================================
// RVA: 0x1574224 | Atlas.UI.DailyChallengeElementBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_DailyChallengeElementBehaviour___ctor(ulong param_1)

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



