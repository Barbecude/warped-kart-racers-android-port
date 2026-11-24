// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.FTUE.BaseLayerFTUEDriving

// ============================================================
// RVA: 0x1476190 | Atlas.Gameplay.FTUE.BaseLayerFTUEDriving.get_BaseLayerFtueDrivingDefinition
// ============================================================

/* WARNING: Possible PIC construction at 0x01476530: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01476534) */
/* WARNING: Removing unreachable block (ram,0x01476544) */
/* WARNING: Removing unreachable block (ram,0x01476548) */
/* WARNING: Removing unreachable block (ram,0x01476564) */
/* WARNING: Removing unreachable block (ram,0x0147656c) */
/* WARNING: Removing unreachable block (ram,0x01476578) */

void Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__get_BaseLayerFtueDrivingDefinition
               (long param_1,undefined8 param_2,undefined8 *param_3,long *param_4,undefined8 param_5
               ,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  int extraout_w1;
  int extraout_w1_00;
  int iVar11;
  undefined8 *puVar12;
  undefined1 uVar13;
  long lVar14;
  undefined8 *extraout_x8;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_330;
  long lStack_328;
  undefined8 ***pppuStack_320;
  undefined *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  int iStack_2c8;
  undefined4 uStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined1 ***pppuStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
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
  undefined8 auStack_140 [2];
  undefined1 **ppuStack_e0;
  undefined *puStack_d8;
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
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if ((bRam0000000003eb4889 & 1) == 0) {
    func_0x00f78a20(0x3d21820);
    bRam0000000003eb4889 = 1;
  }
  if (*(long **)(param_1 + 0x40) == (long *)0x0) {
    return;
  }
  lVar14 = **(long **)(param_1 + 0x40);
  if ((*(byte *)(/*Atlas.Definitions.FTUEDrivingDefinition_TypeInfo*/ lRam0000000003d21820 + 300) <= *(byte *)(lVar14 + 300)) &&
     (*(long *)(*(long *)(lVar14 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.FTUEDrivingDefinition_TypeInfo*/ lRam0000000003d21820 + 300) * 8 + -8) ==
      /*Atlas.Definitions.FTUEDrivingDefinition_TypeInfo*/ lRam0000000003d21820)) {
    return;
  }
  auVar19 = func_0x00f78e5c();
  uVar9 = auVar19._8_8_;
  lVar14 = auVar19._0_8_;
  puStack_28 = &Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__Init;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb488a & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d52770);
    func_0x00f78a20(0x3d52778);
    func_0x00f78a20(0x3d52788);
    func_0x00f78a20(0x3d52790);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d3cd38);
    bRam0000000003eb488a = 1;
  }
  puVar12 = param_3;
  plVar10 = param_4;
  /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$Init*/ func_0x01475314(lVar14,uVar9,param_3,param_4,param_5,param_6);
  uVar13 = SUB81(plVar10,0);
  iVar11 = (int)puVar12;
  *(undefined4 *)(lVar14 + 0xd8) = 0;
  if (*(long *)(lVar14 + 0x10) == 0) {
code_r0x01476594:
    puVar18 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__StartSection;
    auVar19 = func_0x00f78af4();
    lVar14 = auVar19._0_8_;
    *(int *)(lVar14 + 0x88) = iVar11;
    *(undefined4 *)(lVar14 + 0x8c) = 0;
    *(undefined1 *)(lVar14 + 0x90) = uVar13;
  }
  else {
    param_4 = (long *)0x3d52000;
    *(undefined1 *)(*(long *)(lVar14 + 0x10) + 0x1b8) = 0;
    lVar15 = *(long *)(lVar14 + 0x28);
    uVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    uVar13 = 0;
    uVar17 = uRam0000000003d52790;
    /*System.Action$$.ctor*/ func_0x02924c80(uVar7,lVar14);
    iVar11 = (int)uVar17;
    if (lVar15 == 0) goto code_r0x01476594;
    iVar11 = 0;
    /*Core.StateManagement.State$$add_OnPreEnterCallback*/ func_0x02b94168(lVar15,uVar7);
    lVar16 = *(long *)(lVar14 + 0x50);
    lVar15 = Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__get_BaseLayerFtueDrivingDefinition(lVar14);
    if ((lVar15 == 0) || (lVar16 == 0)) goto code_r0x01476594;
    uStack_a8 = *(undefined8 *)(lVar15 + 0x98);
    uStack_b0 = *(undefined8 *)(lVar15 + 0x90);
    uStack_98 = *(undefined8 *)(lVar15 + 0xa8);
    uStack_a0 = *(undefined8 *)(lVar15 + 0xa0);
    uStack_88 = *(undefined8 *)(lVar15 + 0xb8);
    uStack_90 = *(undefined8 *)(lVar15 + 0xb0);
    uStack_78 = *(undefined8 *)(lVar15 + 200);
    uStack_80 = *(undefined8 *)(lVar15 + 0xc0);
    uStack_c8 = *(undefined8 *)(lVar15 + 0x78);
    uStack_d0 = *(undefined8 *)(lVar15 + 0x70);
    uStack_b8 = *(undefined8 *)(lVar15 + 0x88);
    uStack_c0 = *(undefined8 *)(lVar15 + 0x80);
    uVar17 = uRam0000000003d3cd38;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.Section>$$Add*/ func_0x024bad88(lVar16,&uStack_d0);
    iVar11 = (int)uVar17;
    lVar16 = *(long *)(lVar14 + 0x50);
    lVar15 = Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__get_BaseLayerFtueDrivingDefinition(lVar14);
    if ((lVar15 == 0) || (lVar16 == 0)) goto code_r0x01476594;
    uStack_a8 = *(undefined8 *)(lVar15 + 0xf8);
    uStack_b0 = *(undefined8 *)(lVar15 + 0xf0);
    uStack_98 = *(undefined8 *)(lVar15 + 0x108);
    uStack_a0 = *(undefined8 *)(lVar15 + 0x100);
    uStack_88 = *(undefined8 *)(lVar15 + 0x118);
    uStack_90 = *(undefined8 *)(lVar15 + 0x110);
    uStack_78 = *(undefined8 *)(lVar15 + 0x128);
    uStack_80 = *(undefined8 *)(lVar15 + 0x120);
    uStack_c8 = *(undefined8 *)(lVar15 + 0xd8);
    uStack_d0 = *(undefined8 *)(lVar15 + 0xd0);
    uStack_b8 = *(undefined8 *)(lVar15 + 0xe8);
    uStack_c0 = *(undefined8 *)(lVar15 + 0xe0);
    uVar17 = uRam0000000003d3cd38;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.Section>$$Add*/ func_0x024bad88(lVar16,&uStack_d0);
    iVar11 = (int)uVar17;
    lVar16 = *(long *)(lVar14 + 0x60);
    lVar15 = Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__get_BaseLayerFtueDrivingDefinition(lVar14);
    if ((lVar15 == 0) || (lVar16 == 0)) goto code_r0x01476594;
    iVar6 = auVar19._0_4_;
    iVar11 = iVar6 + 0xc0;
    uVar13 = 0;
    iVar5 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(lVar16,*(undefined8 *)(lVar15 + 0x80));
    if (iVar5 != 0) {
      lVar15 = *(long *)(lVar14 + 0xc0);
      uVar7 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
      uVar13 = 0;
      uVar17 = uRam0000000003d52788;
      /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar7,lVar14);
      iVar11 = (int)uVar17;
      if (lVar15 == 0) goto code_r0x01476594;
      iVar11 = 0;
      /*Atlas.Gameplay.HitVolumeBehaviour$$add_OnEnter*/ func_0x015b49e0(lVar15,uVar7);
    }
    lVar16 = *(long *)(lVar14 + 0x60);
    lVar15 = Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__get_BaseLayerFtueDrivingDefinition(lVar14);
    if ((lVar15 == 0) || (lVar16 == 0)) goto code_r0x01476594;
    iVar11 = iVar6 + 200;
    uVar13 = 0;
    iVar5 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(lVar16,*(undefined8 *)(lVar15 + 0xd8));
    if (iVar5 != 0) {
      lVar15 = *(long *)(lVar14 + 200);
      uVar7 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
      uVar13 = 0;
      uVar17 = uRam0000000003d52778;
      /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar7,lVar14);
      iVar11 = (int)uVar17;
      if (lVar15 == 0) goto code_r0x01476594;
      iVar11 = 0;
      /*Atlas.Gameplay.HitVolumeBehaviour$$add_OnEnter*/ func_0x015b49e0(lVar15,uVar7);
    }
    lVar16 = *(long *)(lVar14 + 0x60);
    lVar15 = Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__get_BaseLayerFtueDrivingDefinition(lVar14);
    if ((lVar15 == 0) || (lVar16 == 0)) goto code_r0x01476594;
    iVar11 = iVar6 + 0xd0;
    uVar13 = 0;
    iVar6 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(lVar16,*(undefined8 *)(lVar15 + 0xe0));
    if (iVar6 != 0) {
      lVar15 = *(long *)(lVar14 + 0xd0);
      uVar7 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
      uVar13 = 0;
      uVar17 = uRam0000000003d52770;
      /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar7,lVar14);
      iVar11 = (int)uVar17;
      if (lVar15 == 0) goto code_r0x01476594;
      iVar11 = 0;
      /*Atlas.Gameplay.HitVolumeBehaviour$$add_OnEnter*/ func_0x015b49e0(lVar15,uVar7);
    }
    lVar15 = Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__get_BaseLayerFtueDrivingDefinition(lVar14);
    if (lVar15 == 0) goto code_r0x01476594;
    auVar19._8_8_ = *(undefined8 *)(lVar15 + 0x70);
    auVar19._0_8_ = lVar14;
    lVar15 = Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__get_BaseLayerFtueDrivingDefinition(lVar14);
    if (lVar15 == 0) goto code_r0x01476594;
    uVar2 = *(undefined4 *)(lVar15 + 0x8c);
    lVar15 = Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__get_BaseLayerFtueDrivingDefinition(lVar14);
    if (lVar15 == 0) goto code_r0x01476594;
    cVar3 = *(char *)(lVar15 + 0x88);
    *(undefined4 *)(lVar14 + 0x88) = uVar2;
    *(undefined4 *)(lVar14 + 0x8c) = 0;
    *(bool *)(lVar14 + 0x90) = cVar3 != '\0';
    puVar18 = &UNK_01476534;
  }
  uVar17 = auVar19._8_8_;
  lVar14 = auVar19._0_8_;
  auStack_140[0] = uVar17;
  ppuStack_e0 = &puStack_30;
  puStack_d8 = puVar18;
  if ((bRam0000000003eb48a2 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24e08);
    func_0x00f78a20(0x3d62270);
    func_0x00f78a20(0x3d26ac8);
    bRam0000000003eb48a2 = 1;
  }
  uStack_150 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_198 = 0;
  *(undefined8 *)(lVar14 + 0xa8) = uVar17;
  if ((*(long *)(lVar14 + 0x40) != 0) &&
     (lVar15 = *(long *)(*(long *)(lVar14 + 0x40) + 0x30), lVar15 != 0)) {
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(&uStack_1e0,lVar15,uRam0000000003d3cd70);
    uStack_168 = uStack_1b8;
    uStack_170 = uStack_1c0;
    uStack_158 = uStack_1a8;
    uStack_160 = uStack_1b0;
    uStack_150 = uStack_1a0;
    uStack_188 = uStack_1d8;
    uStack_190 = uStack_1e0;
    uStack_178 = uStack_1c8;
    uStack_180 = uStack_1d0;
code_r0x01478328:
    do {
      uVar8 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(&uStack_190,uRam0000000003d33320);
      if ((uVar8 & 1) == 0) {
code_r0x01478494:
        /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_190,uRam0000000003d33318);
        return;
      }
      lVar15 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d26ac8);
      /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0$$.ctor*/ func_0x0154719c(lVar15,0);
      if (lVar15 == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      *(long *)(lVar15 + 0x50) = lVar14;
      *(undefined8 *)(lVar15 + 0x40) = uStack_150;
      *(undefined8 *)(lVar15 + 0x28) = uStack_168;
      *(undefined8 *)(lVar15 + 0x20) = uStack_170;
      *(undefined8 *)(lVar15 + 0x38) = uStack_158;
      *(undefined8 *)(lVar15 + 0x30) = uStack_160;
      *(undefined8 *)(lVar15 + 0x18) = uStack_178;
      *(undefined8 *)(lVar15 + 0x10) = uStack_180;
      uStack_1e0 = *(undefined8 *)(lVar15 + 0x18);
      uVar9 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&uStack_1e0);
      uVar8 = /*Atlas.StringID$$Equals*/ func_0x015057f8(auStack_140,uVar9,0);
    } while ((uVar8 & 1) == 0);
    if (*(long *)(lVar14 + 0x60) == 0) {
      func_0x00f78af4();
code_r0x014784dc:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x14784e0);
      (*pcVar4)();
    }
    puVar12 = (undefined8 *)(lVar15 + 0x10);
    puVar1 = (undefined8 *)(lVar15 + 0x48);
    uVar8 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar14 + 0x60),*puVar12,puVar1,0);
    if ((uVar8 & 1) == 0) goto code_r0x01478494;
    uVar9 = *(undefined8 *)(lVar14 + 0xa0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar9,0,0);
    if ((uVar8 & 1) != 0) {
      if (*(long *)(lVar14 + 0xa0) == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      uStack_198 = *(undefined8 *)(*(long *)(lVar14 + 0xa0) + 0x18);
      uStack_1e0 = *puVar12;
      uVar9 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&uStack_1e0);
      uVar8 = /*Atlas.StringID$$Equals*/ func_0x015057f8(&uStack_198,uVar9,0);
      if ((uVar8 & 1) != 0) {
        uStack_218 = *(undefined8 *)(lVar15 + 0x18);
        uStack_220 = *puVar12;
        uStack_208 = *(undefined8 *)(lVar15 + 0x28);
        uStack_210 = *(undefined8 *)(lVar15 + 0x20);
        uStack_1f8 = *(undefined8 *)(lVar15 + 0x38);
        uStack_200 = *(undefined8 *)(lVar15 + 0x30);
        uStack_1f0 = *(undefined8 *)(lVar15 + 0x40);
        /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$CallReactions*/ func_0x01478e78(lVar14,*(undefined8 *)(lVar14 + 0x38),&uStack_220);
        goto code_r0x01478328;
      }
    }
    uVar17 = *puVar1;
    uVar9 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
    /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar9,lVar15,uRam0000000003d62270,0);
    /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$AddBaseListener*/ func_0x01478f10(lVar14,uVar17,uVar9,*puVar1);
    goto code_r0x01478328;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar10 = (long *)___cxa_begin_catch();
    lVar14 = *plVar10;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_190,uRam0000000003d33318);
    if (lVar14 == 0) {
      return;
    }
    func_0x00f78ac0(lVar14,0);
  }
  lVar15 = __Unwind_Resume();
  uStack_248 = 0x3eb4000;
  puStack_228 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection;
  lVar16 = 0x3eb4000;
  uStack_260 = uVar9;
  puStack_258 = param_3;
  plStack_250 = param_4;
  uStack_240 = uVar17;
  lStack_238 = lVar14;
  pppuStack_230 = &ppuStack_e0;
  if ((bRam0000000003eb48a3 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb48a3 = 1;
  }
  lStack_2b8 = 0;
  uStack_2c0 = 0;
  if ((*(long *)(lVar15 + 0x40) != 0) &&
     (lVar14 = *(long *)(*(long *)(lVar15 + 0x40) + 0x30), lVar14 != 0)) {
    param_4 = (long *)0x3d24e08;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(&uStack_310,lVar14,uRam0000000003d3cd70);
    uStack_288 = uStack_2e8;
    uStack_290 = uStack_2f0;
    uStack_278 = uStack_2d8;
    uStack_280 = uStack_2e0;
    uStack_270 = uStack_2d0;
    uStack_2a8 = uStack_308;
    uStack_2b0 = uStack_310;
    uStack_298 = uStack_2f8;
    uStack_2a0 = uStack_300;
code_r0x01478624:
    do {
      uVar8 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(&uStack_2b0,uRam0000000003d33320);
      uVar9 = uStack_2a0;
      if ((uVar8 & 1) == 0) goto code_r0x01478690;
      uStack_310 = uStack_298;
      uVar17 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&uStack_310);
      uVar8 = /*Atlas.StringID$$Equals*/ func_0x015057f8(lVar15 + 0xa8,uVar17,0);
      if ((uVar8 & 1) != 0) {
        if (*(long *)(lVar15 + 0x60) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar8 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar15 + 0x60),uVar9,&lStack_2b8,0);
          if ((uVar8 & 1) == 0) {
            iStack_2c8 = 0x86;
            goto code_r0x0147869c;
          }
          if (lStack_2b8 != 0) {
            /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$RemoveBaseListener*/ func_0x014765a4(lVar15,*(undefined8 *)(lStack_2b8 + 0x18));
            goto code_r0x01478624;
          }
          func_0x00f78af4();
        }
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1478708);
        (*pcVar4)();
      }
    } while( true );
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar10 = (long *)___cxa_begin_catch();
    lVar16 = *plVar10;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_2b0,*param_3);
    if (lVar16 == 0) {
code_r0x014786b8:
      lVar14 = *param_4;
      if (((*(ushort *)(lVar14 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar14 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar14 = *param_4;
      }
      *(undefined8 *)(lVar15 + 0xa8) = **(undefined8 **)(lVar14 + 0xb8);
      return;
    }
    func_0x00f78ac0(lVar16,0);
  }
  lVar14 = __Unwind_Resume();
  puStack_318 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
  lStack_330 = lVar16;
  lStack_328 = lVar15;
  pppuStack_320 = &pppuStack_230;
  /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetSection*/ func_0x01478c3c(&uStack_390,lVar14,*(undefined8 *)(lVar14 + 0xa8));
  extraout_x8[5] = uStack_368;
  extraout_x8[4] = uStack_370;
  extraout_x8[7] = uStack_358;
  extraout_x8[6] = uStack_360;
  extraout_x8[9] = uStack_348;
  extraout_x8[8] = uStack_350;
  extraout_x8[0xb] = uStack_338;
  extraout_x8[10] = uStack_340;
  extraout_x8[1] = uStack_388;
  *extraout_x8 = uStack_390;
  extraout_x8[3] = uStack_378;
  extraout_x8[2] = uStack_380;
  return;
code_r0x01478690:
  iStack_2c8 = 0x7b;
code_r0x0147869c:
  /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_2b0,uRam0000000003d33318);
  if (iStack_2c8 == 0x86) {
    return;
  }
  goto code_r0x014786b8;
}



// ============================================================
// RVA: 0x147620c | Atlas.Gameplay.FTUE.BaseLayerFTUEDriving.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x01476530: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01476534) */
/* WARNING: Removing unreachable block (ram,0x01476544) */
/* WARNING: Removing unreachable block (ram,0x01476548) */
/* WARNING: Removing unreachable block (ram,0x01476564) */
/* WARNING: Removing unreachable block (ram,0x0147656c) */
/* WARNING: Removing unreachable block (ram,0x01476578) */

void Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__Init
               (long param_1,undefined8 param_2,undefined8 *param_3,long *param_4,undefined8 param_5
               ,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  int extraout_w1;
  int extraout_w1_00;
  int iVar11;
  undefined8 *puVar12;
  undefined1 uVar13;
  undefined8 *extraout_x8;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined1 auVar18 [16];
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_310;
  long lStack_308;
  undefined1 ***pppuStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  int iStack_2a8;
  undefined4 uStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined1 **ppuStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
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
  undefined8 auStack_120 [2];
  undefined1 *puStack_c0;
  undefined *puStack_b8;
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
  
  if ((bRam0000000003eb488a & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d52770);
    func_0x00f78a20(0x3d52778);
    func_0x00f78a20(0x3d52788);
    func_0x00f78a20(0x3d52790);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d3cd38);
    bRam0000000003eb488a = 1;
  }
  puVar12 = param_3;
  plVar9 = param_4;
  /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$Init*/ func_0x01475314(param_1,param_2,param_3,param_4,param_5,param_6);
  uVar13 = SUB81(plVar9,0);
  iVar11 = (int)puVar12;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_01476594:
    puVar17 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__StartSection;
    auVar18 = func_0x00f78af4();
    uVar16 = auVar18._8_8_;
    param_1 = auVar18._0_8_;
    *(int *)(param_1 + 0x88) = iVar11;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined1 *)(param_1 + 0x90) = uVar13;
  }
  else {
    param_4 = (long *)0x3d52000;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x1b8) = 0;
    lVar14 = *(long *)(param_1 + 0x28);
    uVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    uVar13 = 0;
    uVar16 = uRam0000000003d52790;
    /*System.Action$$.ctor*/ func_0x02924c80(uVar7,param_1);
    iVar11 = (int)uVar16;
    if (lVar14 == 0) goto LAB_01476594;
    iVar11 = 0;
    /*Core.StateManagement.State$$add_OnPreEnterCallback*/ func_0x02b94168(lVar14,uVar7);
    lVar15 = *(long *)(param_1 + 0x50);
    lVar14 = Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__get_BaseLayerFtueDrivingDefinition(param_1);
    if ((lVar14 == 0) || (lVar15 == 0)) goto LAB_01476594;
    uStack_88 = *(undefined8 *)(lVar14 + 0x98);
    uStack_90 = *(undefined8 *)(lVar14 + 0x90);
    uStack_78 = *(undefined8 *)(lVar14 + 0xa8);
    uStack_80 = *(undefined8 *)(lVar14 + 0xa0);
    uStack_68 = *(undefined8 *)(lVar14 + 0xb8);
    uStack_70 = *(undefined8 *)(lVar14 + 0xb0);
    uStack_58 = *(undefined8 *)(lVar14 + 200);
    uStack_60 = *(undefined8 *)(lVar14 + 0xc0);
    uStack_a8 = *(undefined8 *)(lVar14 + 0x78);
    uStack_b0 = *(undefined8 *)(lVar14 + 0x70);
    uStack_98 = *(undefined8 *)(lVar14 + 0x88);
    uStack_a0 = *(undefined8 *)(lVar14 + 0x80);
    uVar16 = uRam0000000003d3cd38;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.Section>$$Add*/ func_0x024bad88(lVar15,&uStack_b0);
    iVar11 = (int)uVar16;
    lVar15 = *(long *)(param_1 + 0x50);
    lVar14 = Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__get_BaseLayerFtueDrivingDefinition(param_1);
    if ((lVar14 == 0) || (lVar15 == 0)) goto LAB_01476594;
    uStack_88 = *(undefined8 *)(lVar14 + 0xf8);
    uStack_90 = *(undefined8 *)(lVar14 + 0xf0);
    uStack_78 = *(undefined8 *)(lVar14 + 0x108);
    uStack_80 = *(undefined8 *)(lVar14 + 0x100);
    uStack_68 = *(undefined8 *)(lVar14 + 0x118);
    uStack_70 = *(undefined8 *)(lVar14 + 0x110);
    uStack_58 = *(undefined8 *)(lVar14 + 0x128);
    uStack_60 = *(undefined8 *)(lVar14 + 0x120);
    uStack_a8 = *(undefined8 *)(lVar14 + 0xd8);
    uStack_b0 = *(undefined8 *)(lVar14 + 0xd0);
    uStack_98 = *(undefined8 *)(lVar14 + 0xe8);
    uStack_a0 = *(undefined8 *)(lVar14 + 0xe0);
    uVar16 = uRam0000000003d3cd38;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.Section>$$Add*/ func_0x024bad88(lVar15,&uStack_b0);
    iVar11 = (int)uVar16;
    lVar15 = *(long *)(param_1 + 0x60);
    lVar14 = Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__get_BaseLayerFtueDrivingDefinition(param_1);
    if ((lVar14 == 0) || (lVar15 == 0)) goto LAB_01476594;
    iVar6 = (int)param_1;
    iVar11 = iVar6 + 0xc0;
    uVar13 = 0;
    iVar5 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(lVar15,*(undefined8 *)(lVar14 + 0x80));
    if (iVar5 != 0) {
      lVar14 = *(long *)(param_1 + 0xc0);
      uVar7 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
      uVar13 = 0;
      uVar16 = uRam0000000003d52788;
      /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar7,param_1);
      iVar11 = (int)uVar16;
      if (lVar14 == 0) goto LAB_01476594;
      iVar11 = 0;
      /*Atlas.Gameplay.HitVolumeBehaviour$$add_OnEnter*/ func_0x015b49e0(lVar14,uVar7);
    }
    lVar15 = *(long *)(param_1 + 0x60);
    lVar14 = Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__get_BaseLayerFtueDrivingDefinition(param_1);
    if ((lVar14 == 0) || (lVar15 == 0)) goto LAB_01476594;
    iVar11 = iVar6 + 200;
    uVar13 = 0;
    iVar5 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(lVar15,*(undefined8 *)(lVar14 + 0xd8));
    if (iVar5 != 0) {
      lVar14 = *(long *)(param_1 + 200);
      uVar7 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
      uVar13 = 0;
      uVar16 = uRam0000000003d52778;
      /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar7,param_1);
      iVar11 = (int)uVar16;
      if (lVar14 == 0) goto LAB_01476594;
      iVar11 = 0;
      /*Atlas.Gameplay.HitVolumeBehaviour$$add_OnEnter*/ func_0x015b49e0(lVar14,uVar7);
    }
    lVar15 = *(long *)(param_1 + 0x60);
    lVar14 = Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__get_BaseLayerFtueDrivingDefinition(param_1);
    if ((lVar14 == 0) || (lVar15 == 0)) goto LAB_01476594;
    iVar11 = iVar6 + 0xd0;
    uVar13 = 0;
    iVar6 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(lVar15,*(undefined8 *)(lVar14 + 0xe0));
    if (iVar6 != 0) {
      lVar14 = *(long *)(param_1 + 0xd0);
      uVar7 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
      uVar13 = 0;
      uVar16 = uRam0000000003d52770;
      /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar7,param_1);
      iVar11 = (int)uVar16;
      if (lVar14 == 0) goto LAB_01476594;
      iVar11 = 0;
      /*Atlas.Gameplay.HitVolumeBehaviour$$add_OnEnter*/ func_0x015b49e0(lVar14,uVar7);
    }
    lVar14 = Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__get_BaseLayerFtueDrivingDefinition(param_1);
    if (lVar14 == 0) goto LAB_01476594;
    uVar16 = *(undefined8 *)(lVar14 + 0x70);
    lVar14 = Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__get_BaseLayerFtueDrivingDefinition(param_1);
    if (lVar14 == 0) goto LAB_01476594;
    uVar2 = *(undefined4 *)(lVar14 + 0x8c);
    lVar14 = Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__get_BaseLayerFtueDrivingDefinition(param_1);
    if (lVar14 == 0) goto LAB_01476594;
    cVar3 = *(char *)(lVar14 + 0x88);
    *(undefined4 *)(param_1 + 0x88) = uVar2;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(bool *)(param_1 + 0x90) = cVar3 != '\0';
    puVar17 = (undefined *)0x1476534;
  }
  auStack_120[0] = uVar16;
  puStack_c0 = &stack0xfffffffffffffff0;
  puStack_b8 = puVar17;
  if ((bRam0000000003eb48a2 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24e08);
    func_0x00f78a20(0x3d62270);
    func_0x00f78a20(0x3d26ac8);
    bRam0000000003eb48a2 = 1;
  }
  uStack_130 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_178 = 0;
  *(undefined8 *)(param_1 + 0xa8) = uVar16;
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar14 = *(long *)(*(long *)(param_1 + 0x40) + 0x30), lVar14 != 0)) {
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(&uStack_1c0,lVar14,uRam0000000003d3cd70);
    uStack_148 = uStack_198;
    uStack_150 = uStack_1a0;
    uStack_138 = uStack_188;
    uStack_140 = uStack_190;
    uStack_130 = uStack_180;
    uStack_168 = uStack_1b8;
    uStack_170 = uStack_1c0;
    uStack_158 = uStack_1a8;
    uStack_160 = uStack_1b0;
code_r0x01478328:
    do {
      uVar8 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(&uStack_170,uRam0000000003d33320);
      if ((uVar8 & 1) == 0) {
code_r0x01478494:
        /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_170,uRam0000000003d33318);
        return;
      }
      lVar14 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d26ac8);
      /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0$$.ctor*/ func_0x0154719c(lVar14,0);
      if (lVar14 == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      *(long *)(lVar14 + 0x50) = param_1;
      *(undefined8 *)(lVar14 + 0x40) = uStack_130;
      *(undefined8 *)(lVar14 + 0x28) = uStack_148;
      *(undefined8 *)(lVar14 + 0x20) = uStack_150;
      *(undefined8 *)(lVar14 + 0x38) = uStack_138;
      *(undefined8 *)(lVar14 + 0x30) = uStack_140;
      *(undefined8 *)(lVar14 + 0x18) = uStack_158;
      *(undefined8 *)(lVar14 + 0x10) = uStack_160;
      uStack_1c0 = *(undefined8 *)(lVar14 + 0x18);
      uVar16 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&uStack_1c0);
      uVar8 = /*Atlas.StringID$$Equals*/ func_0x015057f8(auStack_120,uVar16,0);
    } while ((uVar8 & 1) == 0);
    if (*(long *)(param_1 + 0x60) == 0) {
      func_0x00f78af4();
code_r0x014784dc:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x14784e0);
      (*pcVar4)();
    }
    puVar12 = (undefined8 *)(lVar14 + 0x10);
    puVar1 = (undefined8 *)(lVar14 + 0x48);
    uVar8 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(param_1 + 0x60),*puVar12,puVar1,0);
    if ((uVar8 & 1) == 0) goto code_r0x01478494;
    uVar16 = *(undefined8 *)(param_1 + 0xa0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar16,0,0);
    if ((uVar8 & 1) != 0) {
      if (*(long *)(param_1 + 0xa0) == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      uStack_178 = *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x18);
      uStack_1c0 = *puVar12;
      uVar16 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&uStack_1c0);
      uVar8 = /*Atlas.StringID$$Equals*/ func_0x015057f8(&uStack_178,uVar16,0);
      if ((uVar8 & 1) != 0) {
        uStack_1f8 = *(undefined8 *)(lVar14 + 0x18);
        uStack_200 = *puVar12;
        uStack_1e8 = *(undefined8 *)(lVar14 + 0x28);
        uStack_1f0 = *(undefined8 *)(lVar14 + 0x20);
        uStack_1d8 = *(undefined8 *)(lVar14 + 0x38);
        uStack_1e0 = *(undefined8 *)(lVar14 + 0x30);
        uStack_1d0 = *(undefined8 *)(lVar14 + 0x40);
        /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$CallReactions*/ func_0x01478e78(param_1,*(undefined8 *)(param_1 + 0x38),&uStack_200);
        goto code_r0x01478328;
      }
    }
    uVar7 = *puVar1;
    uVar16 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
    /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar16,lVar14,uRam0000000003d62270,0);
    /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$AddBaseListener*/ func_0x01478f10(param_1,uVar7,uVar16,*puVar1);
    goto code_r0x01478328;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar9 = (long *)___cxa_begin_catch();
    param_1 = *plVar9;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_170,uRam0000000003d33318);
    if (param_1 == 0) {
      return;
    }
    func_0x00f78ac0(param_1,0);
  }
  lVar14 = __Unwind_Resume();
  uStack_228 = 0x3eb4000;
  puStack_208 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection;
  lVar15 = 0x3eb4000;
  uStack_240 = param_2;
  puStack_238 = param_3;
  plStack_230 = param_4;
  uStack_220 = uVar16;
  lStack_218 = param_1;
  ppuStack_210 = &puStack_c0;
  if ((bRam0000000003eb48a3 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb48a3 = 1;
  }
  lStack_298 = 0;
  uStack_2a0 = 0;
  if ((*(long *)(lVar14 + 0x40) != 0) &&
     (lVar10 = *(long *)(*(long *)(lVar14 + 0x40) + 0x30), lVar10 != 0)) {
    param_4 = (long *)0x3d24e08;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(&uStack_2f0,lVar10,uRam0000000003d3cd70);
    uStack_268 = uStack_2c8;
    uStack_270 = uStack_2d0;
    uStack_258 = uStack_2b8;
    uStack_260 = uStack_2c0;
    uStack_250 = uStack_2b0;
    uStack_288 = uStack_2e8;
    uStack_290 = uStack_2f0;
    uStack_278 = uStack_2d8;
    uStack_280 = uStack_2e0;
code_r0x01478624:
    do {
      uVar8 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(&uStack_290,uRam0000000003d33320);
      uVar16 = uStack_280;
      if ((uVar8 & 1) == 0) goto code_r0x01478690;
      uStack_2f0 = uStack_278;
      uVar7 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,&uStack_2f0);
      uVar8 = /*Atlas.StringID$$Equals*/ func_0x015057f8(lVar14 + 0xa8,uVar7,0);
      if ((uVar8 & 1) != 0) {
        if (*(long *)(lVar14 + 0x60) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar8 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar14 + 0x60),uVar16,&lStack_298,0);
          if ((uVar8 & 1) == 0) {
            iStack_2a8 = 0x86;
            goto code_r0x0147869c;
          }
          if (lStack_298 != 0) {
            /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$RemoveBaseListener*/ func_0x014765a4(lVar14,*(undefined8 *)(lStack_298 + 0x18));
            goto code_r0x01478624;
          }
          func_0x00f78af4();
        }
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1478708);
        (*pcVar4)();
      }
    } while( true );
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar9 = (long *)___cxa_begin_catch();
    lVar15 = *plVar9;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_290,*param_3);
    if (lVar15 == 0) {
code_r0x014786b8:
      lVar15 = *param_4;
      if (((*(ushort *)(lVar15 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar15 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar15 = *param_4;
      }
      *(undefined8 *)(lVar14 + 0xa8) = **(undefined8 **)(lVar15 + 0xb8);
      return;
    }
    func_0x00f78ac0(lVar15,0);
  }
  lVar10 = __Unwind_Resume();
  puStack_2f8 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
  lStack_310 = lVar15;
  lStack_308 = lVar14;
  pppuStack_300 = &ppuStack_210;
  /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetSection*/ func_0x01478c3c(&uStack_370,lVar10,*(undefined8 *)(lVar10 + 0xa8));
  extraout_x8[5] = uStack_348;
  extraout_x8[4] = uStack_350;
  extraout_x8[7] = uStack_338;
  extraout_x8[6] = uStack_340;
  extraout_x8[9] = uStack_328;
  extraout_x8[8] = uStack_330;
  extraout_x8[0xb] = uStack_318;
  extraout_x8[10] = uStack_320;
  extraout_x8[1] = uStack_368;
  *extraout_x8 = uStack_370;
  extraout_x8[3] = uStack_358;
  extraout_x8[2] = uStack_360;
  return;
code_r0x01478690:
  iStack_2a8 = 0x7b;
code_r0x0147869c:
  /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_290,uRam0000000003d33318);
  if (iStack_2a8 == 0x86) {
    return;
  }
  goto code_r0x014786b8;
}



// ============================================================
// RVA: 0x1476718 | Atlas.Gameplay.FTUE.BaseLayerFTUEDriving.DeInit
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1476a08 | Atlas.Gameplay.FTUE.BaseLayerFTUEDriving.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x01476a1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015858fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153734c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015371e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01476dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01476f34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01476f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147710c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01476fa0) */
/* WARNING: Removing unreachable block (ram,0x01476f38) */
/* WARNING: Removing unreachable block (ram,0x01476fd4) */
/* WARNING: Removing unreachable block (ram,0x01476f3c) */
/* WARNING: Removing unreachable block (ram,0x01476fe8) */
/* WARNING: Removing unreachable block (ram,0x01476ff4) */
/* WARNING: Removing unreachable block (ram,0x01476ffc) */
/* WARNING: Removing unreachable block (ram,0x01477030) */
/* WARNING: Removing unreachable block (ram,0x01477080) */
/* WARNING: Removing unreachable block (ram,0x01476f44) */
/* WARNING: Removing unreachable block (ram,0x01476f50) */
/* WARNING: Removing unreachable block (ram,0x01477058) */
/* WARNING: Removing unreachable block (ram,0x01477070) */
/* WARNING: Removing unreachable block (ram,0x01477068) */
/* WARNING: Removing unreachable block (ram,0x01476f90) */
/* WARNING: Removing unreachable block (ram,0x01476dd0) */
/* WARNING: Removing unreachable block (ram,0x01476e2c) */
/* WARNING: Removing unreachable block (ram,0x01476dd4) */
/* WARNING: Removing unreachable block (ram,0x01476e3c) */
/* WARNING: Removing unreachable block (ram,0x01476e10) */
/* WARNING: Removing unreachable block (ram,0x015b4a80) */
/* WARNING: Removing unreachable block (ram,0x015b4aa4) */
/* WARNING: Removing unreachable block (ram,0x015b4ab8) */
/* WARNING: Removing unreachable block (ram,0x015b4ac4) */
/* WARNING: Removing unreachable block (ram,0x015b4adc) */
/* WARNING: Removing unreachable block (ram,0x015b4b18) */
/* WARNING: Removing unreachable block (ram,0x015b4b44) */
/* WARNING: Removing unreachable block (ram,0x015b4b58) */
/* WARNING: Removing unreachable block (ram,0x015b4b64) */
/* WARNING: Removing unreachable block (ram,0x015b4b7c) */
/* WARNING: Removing unreachable block (ram,0x015b4bb8) */
/* WARNING: Removing unreachable block (ram,0x015b4be4) */
/* WARNING: Removing unreachable block (ram,0x015b4bf8) */
/* WARNING: Removing unreachable block (ram,0x015b4c04) */
/* WARNING: Removing unreachable block (ram,0x015b4c1c) */
/* WARNING: Removing unreachable block (ram,0x015b4c58) */
/* WARNING: Removing unreachable block (ram,0x015b4c84) */
/* WARNING: Removing unreachable block (ram,0x015b4c98) */
/* WARNING: Removing unreachable block (ram,0x015b4ca4) */
/* WARNING: Removing unreachable block (ram,0x015b4cbc) */
/* WARNING: Removing unreachable block (ram,0x015b4cf8) */
/* WARNING: Removing unreachable block (ram,0x015b4d24) */
/* WARNING: Removing unreachable block (ram,0x015b4d38) */
/* WARNING: Removing unreachable block (ram,0x015b4d44) */
/* WARNING: Removing unreachable block (ram,0x015b4d5c) */
/* WARNING: Removing unreachable block (ram,0x015b4d98) */
/* WARNING: Removing unreachable block (ram,0x015b4db4) */
/* WARNING: Removing unreachable block (ram,0x015b4dac) */
/* WARNING: Removing unreachable block (ram,0x01554b70) */
/* WARNING: Removing unreachable block (ram,0x01554bb8) */
/* WARNING: Removing unreachable block (ram,0x01554ba8) */
/* WARNING: Removing unreachable block (ram,0x01554bb0) */
/* WARNING: Removing unreachable block (ram,0x01554bc0) */
/* WARNING: Removing unreachable block (ram,0x01554bc4) */
/* WARNING: Removing unreachable block (ram,0x01554bdc) */
/* WARNING: Removing unreachable block (ram,0x01554be4) */
/* WARNING: Removing unreachable block (ram,0x01554c14) */
/* WARNING: Removing unreachable block (ram,0x01554c98) */
/* WARNING: Removing unreachable block (ram,0x01554ca4) */
/* WARNING: Removing unreachable block (ram,0x01554cac) */
/* WARNING: Removing unreachable block (ram,0x01554d28) */
/* WARNING: Removing unreachable block (ram,0x01554d8c) */
/* WARNING: Removing unreachable block (ram,0x01554d30) */
/* WARNING: Removing unreachable block (ram,0x01554d48) */
/* WARNING: Removing unreachable block (ram,0x01554d50) */
/* WARNING: Removing unreachable block (ram,0x01554e34) */
/* WARNING: Removing unreachable block (ram,0x01554d5c) */
/* WARNING: Removing unreachable block (ram,0x01554d68) */
/* WARNING: Removing unreachable block (ram,0x01554e44) */
/* WARNING: Removing unreachable block (ram,0x01554cc4) */
/* WARNING: Removing unreachable block (ram,0x01554d78) */
/* WARNING: Removing unreachable block (ram,0x01554cc8) */
/* WARNING: Removing unreachable block (ram,0x01554cdc) */
/* WARNING: Removing unreachable block (ram,0x01554ce4) */
/* WARNING: Removing unreachable block (ram,0x01554e0c) */
/* WARNING: Removing unreachable block (ram,0x01554cf0) */
/* WARNING: Removing unreachable block (ram,0x01554cfc) */
/* WARNING: Removing unreachable block (ram,0x01554e1c) */
/* WARNING: Removing unreachable block (ram,0x01554e20) */
/* WARNING: Removing unreachable block (ram,0x01554e48) */
/* WARNING: Removing unreachable block (ram,0x01554c18) */
/* WARNING: Removing unreachable block (ram,0x01554c1c) */
/* WARNING: Removing unreachable block (ram,0x01554c28) */
/* WARNING: Removing unreachable block (ram,0x01554c34) */
/* WARNING: Removing unreachable block (ram,0x01554c3c) */
/* WARNING: Removing unreachable block (ram,0x01554da8) */
/* WARNING: Removing unreachable block (ram,0x01554e58) */
/* WARNING: Removing unreachable block (ram,0x01554db0) */
/* WARNING: Removing unreachable block (ram,0x01554dc8) */
/* WARNING: Removing unreachable block (ram,0x01554dd0) */
/* WARNING: Removing unreachable block (ram,0x01554ea0) */
/* WARNING: Removing unreachable block (ram,0x01554ddc) */
/* WARNING: Removing unreachable block (ram,0x01554de8) */
/* WARNING: Removing unreachable block (ram,0x01554eb0) */
/* WARNING: Removing unreachable block (ram,0x01554c54) */
/* WARNING: Removing unreachable block (ram,0x01554df8) */
/* WARNING: Removing unreachable block (ram,0x01554c58) */
/* WARNING: Removing unreachable block (ram,0x01554c6c) */
/* WARNING: Removing unreachable block (ram,0x01554c74) */
/* WARNING: Removing unreachable block (ram,0x01554e78) */
/* WARNING: Removing unreachable block (ram,0x01554c80) */
/* WARNING: Removing unreachable block (ram,0x01554c8c) */
/* WARNING: Removing unreachable block (ram,0x01554e88) */
/* WARNING: Removing unreachable block (ram,0x01554e8c) */
/* WARNING: Removing unreachable block (ram,0x01554eb4) */
/* WARNING: Removing unreachable block (ram,0x01554bf8) */
/* WARNING: Removing unreachable block (ram,0x01554d08) */
/* WARNING: Removing unreachable block (ram,0x01554bfc) */
/* WARNING: Removing unreachable block (ram,0x01554d18) */
/* WARNING: Removing unreachable block (ram,0x01554d24) */
/* WARNING: Removing unreachable block (ram,0x01554ec8) */
/* WARNING: Removing unreachable block (ram,0x015b4d6c) */
/* WARNING: Removing unreachable block (ram,0x015b4d88) */
/* WARNING: Removing unreachable block (ram,0x015b4ccc) */
/* WARNING: Removing unreachable block (ram,0x015b4ce8) */
/* WARNING: Removing unreachable block (ram,0x015b4c2c) */
/* WARNING: Removing unreachable block (ram,0x015b4c48) */
/* WARNING: Removing unreachable block (ram,0x015b4b8c) */
/* WARNING: Removing unreachable block (ram,0x015b4ba8) */
/* WARNING: Removing unreachable block (ram,0x015b4aec) */
/* WARNING: Removing unreachable block (ram,0x015b4b08) */
/* WARNING: Removing unreachable block (ram,0x015371e8) */
/* WARNING: Removing unreachable block (ram,0x015371f0) */
/* WARNING: Removing unreachable block (ram,0x01537350) */
/* WARNING: Removing unreachable block (ram,0x01537358) */
/* WARNING: Removing unreachable block (ram,0x01537364) */
/* WARNING: Removing unreachable block (ram,0x0153736c) */
/* WARNING: Removing unreachable block (ram,0x01537394) */
/* WARNING: Removing unreachable block (ram,0x015373a0) */
/* WARNING: Removing unreachable block (ram,0x025dfbac) */
/* WARNING: Removing unreachable block (ram,0x025dfbd4) */
/* WARNING: Removing unreachable block (ram,0x025dfc00) */
/* WARNING: Removing unreachable block (ram,0x025dfc04) */
/* WARNING: Removing unreachable block (ram,0x025dfc30) */
/* WARNING: Removing unreachable block (ram,0x025dfc54) */
/* WARNING: Removing unreachable block (ram,0x025dfc70) */
/* WARNING: Removing unreachable block (ram,0x025dfc80) */
/* WARNING: Removing unreachable block (ram,0x025dfcfc) */
/* WARNING: Removing unreachable block (ram,0x025dfd14) */
/* WARNING: Removing unreachable block (ram,0x025dfd88) */
/* WARNING: Removing unreachable block (ram,0x025dfdb8) */
/* WARNING: Removing unreachable block (ram,0x025dfdd8) */
/* WARNING: Removing unreachable block (ram,0x025dfde0) */
/* WARNING: Removing unreachable block (ram,0x025dfdec) */
/* WARNING: Removing unreachable block (ram,0x025dfdf8) */
/* WARNING: Removing unreachable block (ram,0x025dfe04) */
/* WARNING: Removing unreachable block (ram,0x025dfe0c) */
/* WARNING: Removing unreachable block (ram,0x025dfe1c) */
/* WARNING: Removing unreachable block (ram,0x025dfe24) */
/* WARNING: Removing unreachable block (ram,0x025dfe30) */
/* WARNING: Removing unreachable block (ram,0x025dfe34) */
/* WARNING: Removing unreachable block (ram,0x025dfe44) */
/* WARNING: Removing unreachable block (ram,0x025dfe48) */
/* WARNING: Removing unreachable block (ram,0x025dfe4c) */
/* WARNING: Removing unreachable block (ram,0x025dfd34) */
/* WARNING: Removing unreachable block (ram,0x025dfd58) */
/* WARNING: Removing unreachable block (ram,0x025dfd74) */
/* WARNING: Removing unreachable block (ram,0x025dfc88) */
/* WARNING: Removing unreachable block (ram,0x025dfcb4) */
/* WARNING: Removing unreachable block (ram,0x025dfce0) */
/* WARNING: Removing unreachable block (ram,0x025dfcd0) */
/* WARNING: Removing unreachable block (ram,0x01585900) */
/* WARNING: Removing unreachable block (ram,0x01585908) */
/* WARNING: Removing unreachable block (ram,0x01476a20) */
/* WARNING: Removing unreachable block (ram,0x01476a5c) */
/* WARNING: Removing unreachable block (ram,0x01476a64) */
/* WARNING: Removing unreachable block (ram,0x01476a6c) */
/* WARNING: Removing unreachable block (ram,0x01476a8c) */
/* WARNING: Removing unreachable block (ram,0x01476a98) */
/* WARNING: Removing unreachable block (ram,0x01476a9c) */
/* WARNING: Removing unreachable block (ram,0x01476aa0) */
/* WARNING: Removing unreachable block (ram,0x01476a2c) */
/* WARNING: Removing unreachable block (ram,0x01476a34) */
/* WARNING: Removing unreachable block (ram,0x01476a3c) */
/* WARNING: Removing unreachable block (ram,0x01476ab8) */
/* WARNING: Removing unreachable block (ram,0x01476a44) */
/* WARNING: Removing unreachable block (ram,0x01476a48) */
/* WARNING: Removing unreachable block (ram,0x01476a4c) */
/* WARNING: Removing unreachable block (ram,0x01476a50) */
/* WARNING: Removing unreachable block (ram,0x01476aa8) */
/* WARNING: Removing unreachable block (ram,0x01477110) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__Update
                 (ulong param_1,undefined8 ****param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  code *pcVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  undefined1 *puVar9;
  undefined1 ******ppppppuVar10;
  undefined1 *puVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  float *pfVar18;
  undefined8 uVar19;
  int extraout_w1;
  int extraout_w1_00;
  ulong extraout_x1;
  byte bVar20;
  undefined8 ***pppuVar21;
  undefined8 *extraout_x8;
  long lVar22;
  ulong uVar23;
  undefined8 **ppuVar24;
  undefined8 unaff_x21;
  undefined8 uVar25;
  long *plVar26;
  long lVar27;
  long *plVar28;
  undefined8 *****unaff_x22;
  undefined8 *****pppppuVar29;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ******ppppppuVar30;
  undefined1 ******ppppppuVar31;
  undefined *puVar32;
  undefined *puVar33;
  float fVar34;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [12];
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  long lStack_388;
  undefined8 ******ppppppuStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  int iStack_328;
  undefined4 uStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 ******ppppppuStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
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
  undefined8 uStack_1b0;
  undefined8 auStack_1a0 [2];
  long *****ppppplStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  ulong uStack_120;
  long *plStack_118;
  undefined8 *****pppppuStack_110;
  undefined *puStack_108;
  undefined1 ******ppppppuStack_f0;
  code *pcStack_e8;
  undefined8 *****pppppuStack_e0;
  undefined *puStack_d8;
  undefined8 ****ppppuStack_d0;
  code *pcStack_c8;
  long *****ppppplStack_c0;
  undefined *puStack_b8;
  undefined8 *****pppppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 ****ppppuStack_80;
  ulong uStack_78;
  undefined1 *****pppppuStack_70;
  undefined *puStack_68;
  long ****pppplStack_40;
  undefined8 uStack_38;
  
  pppplStack_40 = (long ****)&stack0xfffffffffffffff0;
  uStack_38 = 0x1476a20;
  uVar25 = 0x3eb4000;
  if ((bRam0000000003eb489a & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb489a = 1;
  }
  pppppuVar29 = unaff_x22;
  if (param_2 == (undefined8 ****)0x0) {
code_r0x01476c68:
    lVar27 = func_0x00f78af4();
    puStack_68 = &Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__OnEnterInProgressScreen;
    ppppuStack_80 = param_2;
    uStack_78 = param_1;
    pppppuStack_70 = (undefined1 *****)&pppplStack_40;
    /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$OnEnterInProgressScreen*/ func_0x01475b68();
    *(undefined4 *)(lVar27 + 0xd8) = 1;
    lVar16 = Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__get_BaseLayerFtueDrivingDefinition(lVar27);
    if (lVar16 != 0) {
      uStack_a8 = *(undefined8 *)(lVar16 + 0x48);
      pppppuStack_b0 = *(undefined8 ******)(lVar16 + 0x40);
      uStack_98 = *(undefined8 *)(lVar16 + 0x58);
      uStack_a0 = *(undefined8 *)(lVar16 + 0x50);
      uStack_88 = *(undefined8 *)(lVar16 + 0x68);
      uStack_90 = *(undefined8 *)(lVar16 + 0x60);
      plVar26 = (long *)/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$CallReactions*/ func_0x01475e24(lVar27,&pppppuStack_b0);
      return plVar26;
    }
    lVar16 = func_0x00f78af4();
    puStack_b8 = &Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__OnEnterOutroState;
    pppppuStack_e0 = pppppuVar29;
    puStack_d8 = (undefined *)uVar25;
    ppppuStack_d0 = param_2;
    pcStack_c8 = (code *)lVar27;
    ppppplStack_c0 = (long *****)&pppppuStack_70;
    if ((bRam0000000003eb488c & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d52790);
      func_0x00f78a20(0x3d68a20);
      bRam0000000003eb488c = 1;
    }
    lVar27 = *(long *)(lVar16 + 0x28);
    uVar25 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar25,lVar16,uRam0000000003d52790,0);
    if (lVar27 != 0) {
      /*Core.StateManagement.State$$remove_OnPreEnterCallback*/ func_0x02b94208(lVar27,uVar25,0);
      pppppuVar29 = pppppuStack_e0;
      auVar5._8_8_ = pcStack_c8;
      auVar5._0_8_ = ppppuStack_d0;
      auVar36._8_8_ = /*STR('Achievement_01')*/ uRam0000000003d68a20;
      auVar36._0_8_ = *(long *)(lVar16 + 0x20);
      if (*(long *)(lVar16 + 0x20) != 0) {
        ppppplVar7 = (long *****)&pppppuStack_b0;
        puVar33 = puStack_d8;
        ppppplVar8 = ppppplStack_c0;
        puVar32 = puStack_b8;
        do {
          auVar35 = auVar36;
          uVar25 = auVar35._8_8_;
          lVar27 = auVar35._0_8_;
          *(undefined8 *)((long)ppppplVar7 + -0x40) = unaff_d9;
          *(ulong *)((long)ppppplVar7 + -0x38) = unaff_d8;
          *(undefined8 ******)((long)ppppplVar7 + -0x30) = pppppuVar29;
          *(undefined **)((long)ppppplVar7 + -0x28) = puVar33;
          *(undefined1 (*) [16])((long)ppppplVar7 + -0x20) = auVar5;
          *(long ******)((long)ppppplVar7 + -0x10) = ppppplVar8;
          *(undefined **)((long)ppppplVar7 + -8) = puVar32;
          ppppplVar8 = (long *****)((long)ppppplVar7 + -0x10);
          unaff_d8 = 0x42c80000;
          puVar33 = (undefined *)0x3eb4000;
          if ((bRam0000000003eb4717 & 1) == 0) {
            func_0x00f78a20(0x3d2fe08);
            func_0x00f78a20(0x3d2fe18);
            bRam0000000003eb4717 = 1;
          }
          *(undefined4 *)((long)ppppplVar7 + -0x44) = 0;
          if (*(long *)(lVar27 + 0x60) != 0) {
            plVar26 = (long *)/*System.Collections.Generic.Dictionary<string, float>$$TryGetValue*/ func_0x01ee246c(*(long *)(lVar27 + 0x60),uVar25,
                                              (undefined1 *)((long)ppppplVar7 + -0x44),
                                              uRam0000000003d2fe08);
            bVar12 = true;
            bVar13 = false;
            if ((int)plVar26 != 0) {
              bVar12 = false;
              bVar13 = true;
              if (!NAN(*(float *)((long)ppppplVar7 + -0x44))) {
                bVar12 = *(float *)((long)ppppplVar7 + -0x44) < 100.0;
                bVar13 = false;
              }
            }
            if (bVar12 == bVar13) {
              return plVar26;
            }
            if (*(long *)(lVar27 + 0x60) != 0) {
              puVar33 = (undefined *)0x3d2fe18;
              /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(0x42c80000,*(long *)(lVar27 + 0x60),uVar25,uRam0000000003d2fe18);
              if (*(long *)(lVar27 + 0x58) != 0) {
                plVar26 = (long *)/*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(0x42c80000,*(long *)(lVar27 + 0x58),uVar25,
                                                  uRam0000000003d2fe18);
                return plVar26;
              }
            }
          }
          puVar32 = &Atlas_Stats_AchievementManager__UnlockAchievement;
          auVar36 = func_0x00f78af4();
          ppppplVar7 = (long *****)((long)ppppplVar7 + -0x50);
          auVar5 = auVar35;
        } while( true );
      }
    }
    auVar36 = func_0x00f78af4();
    pppppuStack_110 = (undefined8 *****)0x3d52790;
    pcStack_e8 = (code *)&
                         Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__OnEnterEngageJoyStickStartTrigger
    ;
    ppppppuVar30 = &ppppppuStack_f0;
    puStack_108 = (undefined *)uVar25;
    ppppppuStack_f0 = (undefined1 ******)&ppppplStack_c0;
    if ((bRam0000000003eb488d & 1) == 0) {
      func_0x00f78a20(0x3d52780);
      func_0x00f78a20(0x3d278d8);
      bRam0000000003eb488d = 1;
    }
    puVar33 = &UNK_01476dd0;
    ppppplVar8 = (long *****)&pppppuStack_110;
    while( true ) {
      uVar25 = auVar36._8_8_;
      *(undefined8 *)((long)ppppplVar8 + -0x30) = 0x3d52790;
      *(undefined8 *)((long)ppppplVar8 + -0x28) = 0x3eb4000;
      *(undefined8 *)((long)ppppplVar8 + -0x20) = uVar25;
      *(long *)((long)ppppplVar8 + -0x18) = auVar36._0_8_;
      *(undefined8 *******)((long)ppppplVar8 + -0x10) = ppppppuVar30;
      *(undefined **)((long)ppppplVar8 + -8) = puVar33;
      if ((bRam0000000003eb489f & 1) == 0) {
        func_0x00f78a20(0x3d21b08);
        bRam0000000003eb489f = 1;
      }
      *(undefined8 *)((long)ppppplVar8 + -0x38) = 0;
      if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar26 = (long *)Atlas_Contexts_GameContextBase__TryGetLocalHumanPlayerFromCollider
                                  (uVar25,(undefined1 *)((long)ppppplVar8 + -0x38),0);
      if ((int)plVar26 == 0) break;
      if (*(long *)((long)ppppplVar8 + -0x38) != 0) {
        uVar14 = Atlas_Gameplay_Kart_KartComposite__get_IsRespawning
                           (*(long *)((long)ppppplVar8 + -0x38),0);
        return (long *)(ulong)(uVar14 ^ 1);
      }
      auVar36 = func_0x00f78af4();
      *(undefined8 *)((long)ppppplVar8 + -0x80) = unaff_x24;
      *(undefined8 **)((long)ppppplVar8 + -0x78) = unaff_x23;
      *(undefined8 *)((long)ppppplVar8 + -0x70) = 0x3d52790;
      *(undefined8 *)((long)ppppplVar8 + -0x68) = 0x3eb4000;
      *(undefined8 *)((long)ppppplVar8 + -0x60) = 0x3d21b08;
      *(undefined8 *)((long)ppppplVar8 + -0x58) = uVar25;
      *(undefined1 **)((long)ppppplVar8 + -0x50) = (undefined1 *)((long)ppppplVar8 + -0x10);
      *(undefined **)((long)ppppplVar8 + -0x48) =
           &Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__OnEnterEngageJoystickEndTrigger;
      ppppppuVar30 = (undefined8 ******)((long)ppppplVar8 + -0x50);
      if ((bRam0000000003eb488e & 1) == 0) {
        func_0x00f78a20(0x3d52780);
        func_0x00f78a20(0x3d52788);
        func_0x00f78a20(0x3d278d8);
        bRam0000000003eb488e = 1;
      }
      puVar33 = &UNK_01476f38;
      ppppplVar8 = (long *****)((long)ppppplVar8 + -0x80);
    }
    return plVar26;
  }
  plVar26 = *(long **)(param_1 + 0x78);
  pppuVar21 = *param_2;
  uVar23 = (ulong)*(ushort *)((long)pppuVar21 + 0x12a);
  if (uVar23 != 0) {
    ppuVar24 = pppuVar21[0x16] + 1;
    do {
      if (ppuVar24[-1] == /*Core.Application.IUpdateParams_TypeInfo*/ puRam0000000003d22618) {
        pppuVar21 = pppuVar21 + (long)(*(int *)ppuVar24 + 1) * 2 + 0x27;
        goto code_r0x01476b54;
      }
      ppuVar24 = ppuVar24 + 2;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  }
  pppuVar21 = (undefined8 ***)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ puRam0000000003d22618,1);
code_r0x01476b54:
  (*(code *)*pppuVar21)(param_2,pppuVar21[1]);
  uVar25 = 0;
  pppppuVar29 = (undefined8 *****)0x3d22618;
  if (plVar26 == (long *)0x0) goto code_r0x01476c68;
  (**(code **)(*plVar26 + 0x188))(plVar26,*(undefined8 *)(*plVar26 + 400));
  lVar27 = *(long *)(param_1 + 0x80);
  pppuVar21 = *param_2;
  uVar23 = (ulong)*(ushort *)((long)pppuVar21 + 0x12a);
  if (uVar23 != 0) {
    ppuVar24 = pppuVar21[0x16] + 1;
    do {
      if (ppuVar24[-1] == /*Core.Application.IUpdateParams_TypeInfo*/ puRam0000000003d22618) {
        pppuVar21 = pppuVar21 + (long)(*(int *)ppuVar24 + 1) * 2 + 0x27;
        goto code_r0x01476bc8;
      }
      ppuVar24 = ppuVar24 + 2;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  }
  pppuVar21 = (undefined8 ***)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ puRam0000000003d22618,1);
code_r0x01476bc8:
  (*(code *)*pppuVar21)(param_2,pppuVar21[1]);
  uVar25 = 0;
  if (lVar27 == 0) goto code_r0x01476c68;
  /*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$Update*/ func_0x01536790(lVar27,0);
  lVar27 = *(long *)(param_1 + 0x70);
  pppuVar21 = *param_2;
  uVar23 = (ulong)*(ushort *)((long)pppuVar21 + 0x12a);
  if (uVar23 != 0) {
    ppuVar24 = pppuVar21[0x16] + 1;
    do {
      if (ppuVar24[-1] == /*Core.Application.IUpdateParams_TypeInfo*/ puRam0000000003d22618) {
        pppuVar21 = pppuVar21 + (long)(*(int *)ppuVar24 + 1) * 2 + 0x27;
        goto code_r0x01476c38;
      }
      ppuVar24 = ppuVar24 + 2;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  }
  pppuVar21 = (undefined8 ***)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ puRam0000000003d22618,1);
code_r0x01476c38:
  (*(code *)*pppuVar21)(param_2,pppuVar21[1]);
  uVar25 = 0;
  pppppuVar29 = (undefined8 *****)0x3d22618;
  if (lVar27 == 0) goto code_r0x01476c68;
  /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$Update*/ func_0x015361c8(lVar27,0);
  uVar25 = 0x3eb4000;
  if ((bRam0000000003eb48ab & 1) == 0) {
    func_0x00f78a20(0x3d24e08);
    func_0x00f78a20(0x3d712d0);
    bRam0000000003eb48ab = 1;
  }
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (lVar27 = *(long *)(*(long *)(param_1 + 0x38) + 0x90), lVar27 != 0)) {
    iVar15 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar27,0);
    plVar26 = (long *)(ulong)*(uint *)(param_1 + 0x94);
    if ((int)*(uint *)(param_1 + 0x94) < iVar15) {
      if ((*(long *)(param_1 + 0x38) == 0) ||
         (lVar27 = *(long *)(*(long *)(param_1 + 0x38) + 0x90), lVar27 == 0)) goto code_r0x01477f54;
      plVar26 = (long *)/*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar27,0);
    }
    *(int *)(param_1 + 0x94) = (int)plVar26;
    if ((int)plVar26 < 1) {
      return plVar26;
    }
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (lVar27 = *(long *)(*(long *)(param_1 + 0x38) + 0x90), lVar27 != 0)) {
      plVar26 = (long *)/*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar27,0);
      if (0 < (int)plVar26) {
        return plVar26;
      }
      if ((*(long *)(param_1 + 0x38) != 0) &&
         (lVar27 = *(long *)(*(long *)(param_1 + 0x38) + 0x90), lVar27 != 0)) {
        if (_UNK_033f82cc <= *(float *)(lVar27 + 0x70)) {
          return plVar26;
        }
        *(undefined4 *)(param_1 + 0x94) = 0;
        /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetSection*/ func_0x01478c3c(&pppppuStack_b0,param_1,*(undefined8 *)(param_1 + 0xa8));
        if (*(long *)(param_1 + 0x40) != 0) {
          pppppuStack_b0 = *(undefined8 ******)(*(long *)(param_1 + 0x40) + 0x38);
          uVar23 = /*Atlas.StringID$$get_IsValid*/ func_0x01505738(&pppppuStack_b0,0);
          if ((uVar23 & 1) == 0) {
            pppppuStack_b0 = unaff_x22;
          }
          iVar15 = /*Atlas.StringID$$get_IsValid*/ func_0x01505738(&pppppuStack_b0,0);
          if (iVar15 == 0) {
            if (((*(ushort *)(/*Atlas.StringID_TypeInfo*/ lRam0000000003d24e08 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.StringID_TypeInfo*/ lRam0000000003d24e08 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            pppppuStack_b0 = (undefined8 *****)/*Atlas.StringID$$op_Implicit*/ func_0x01505760(/*STR('PlayerFailureSpawn')*/ uRam0000000003d712d0,0);
          }
          plVar26 = (long *)/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$RespawnHumanPlayerAtLocator*/ func_0x014787a0(param_1,pppppuStack_b0);
          return plVar26;
        }
      }
    }
  }
code_r0x01477f54:
  lVar27 = func_0x00f78af4();
  puStack_b8 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SetInputsEnabled;
  ppppplStack_c0 = &pppplStack_40;
  if (*(long *)(lVar27 + 0x70) != 0) {
    if (*(char *)(*(long *)(lVar27 + 0x70) + 0x20) == '\0') {
      if (*(long *)(lVar27 + 0x80) != 0) {
        if (*(char *)(*(long *)(lVar27 + 0x80) + 0x38) != '\0') goto code_r0x01477f80;
        lVar27 = *(long *)(lVar27 + 0x58);
        if (lVar27 == 0) goto code_r0x01477fa8;
        bVar20 = 1;
        goto code_r0x01477f8c;
      }
    }
    else {
code_r0x01477f80:
      lVar27 = *(long *)(lVar27 + 0x58);
      if (lVar27 != 0) {
        bVar20 = 0;
code_r0x01477f8c:
        iVar15 = 0;
        puStack_b8 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SetInputsEnabled;
        lVar16 = *(long *)(lVar27 + 200);
        if (lVar16 == 0) {
          plVar17 = (long *)func_0x00f78af4();
          pppppuStack_e0 = (undefined8 *****)0x3eb4000;
          pcStack_c8 = Atlas_UI_Screens_GameInProgressScreen__OnInputEnabledForLayer;
          plVar26 = plVar17;
          ppppppuStack_f0 = (undefined1 ******)unaff_x22;
          pcStack_e8 = (code *)unaff_x21;
          puStack_d8 = (undefined *)param_1;
          ppppuStack_d0 = &ppppplStack_c0;
          if ((bRam0000000003eb522d & 1) == 0) {
            ppppuStack_d0 = &ppppplStack_c0;
            func_0x00f78a20(0x3d23990);
            plVar26 = (long *)func_0x00f78a20(0x3d41080);
            bRam0000000003eb522d = 1;
          }
          if ((int)plVar17[9] != iVar15) {
            return plVar26;
          }
          lVar27 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(plVar17,uRam0000000003d41080);
          if (lVar27 != 0) {
            Atlas_UI_Screens_GameInProgressScreenBehaviour__SetInputEnabled(lVar27,param_4,0);
            uVar25 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar17);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            plVar26 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar25,0);
            if ((int)plVar26 == 0) {
              return plVar26;
            }
            lVar27 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar17);
            if (lVar27 != 0) {
              lVar27 = *(long *)(lVar27 + 0xa8);
              if (lVar27 != 0) {
                pppppuStack_110 = ppppppuStack_f0;
                puStack_108 = pcStack_e8;
                pcStack_e8 = (code *)0x1585900;
                ppppppuStack_f0 = (undefined1 ******)&ppppuStack_d0;
                if (pcRam0000000003ebe9d8 == (code *)0x0) {
                  pcRam0000000003ebe9d8 =
                       (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)")
                  ;
                }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar26 = (long *)(*pcRam0000000003ebe9d8)(lVar27,param_4);
                return plVar26;
              }
              plVar26 = (long *)func_0x00f78af4(0,param_4,0);
              pppppuStack_110 = ppppppuStack_f0;
              puStack_108 = pcStack_e8;
              pcStack_e8 = Atlas_UI_Screens_FTUEScreenBehaviour___ctor;
              ppppppuStack_f0 = (undefined1 ******)&ppppuStack_d0;
              if ((bRam0000000003ebf1b8 & 1) == 0) {
                func_0x00f78a20(0x3d23990,0);
                bRam0000000003ebf1b8 = 1;
              }
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              return plVar26;
            }
          }
          pfVar18 = (float *)func_0x00f78af4();
          fVar34 = *pfVar18;
          bVar12 = false;
          bVar13 = true;
          if (0.0 <= fVar34) {
            bVar12 = false;
            bVar13 = true;
            if (!NAN(fVar34)) {
              bVar12 = fVar34 == 1.0;
              bVar13 = 1.0 <= fVar34;
            }
          }
          if (!bVar13 || bVar12) {
            fVar34 = pfVar18[1];
            bVar12 = false;
            bVar13 = true;
            if (0.0 <= fVar34) {
              bVar12 = false;
              bVar13 = true;
              if (!NAN(fVar34)) {
                bVar12 = fVar34 == 1.0;
                bVar13 = 1.0 <= fVar34;
              }
            }
            if (!bVar13 || bVar12) {
              return (long *)(ulong)(0.0 <= pfVar18[2]);
            }
          }
          return (long *)0x0;
        }
        bVar20 = bVar20 ^ 1;
        ppppppuVar31 = (undefined1 ******)&ppppplStack_c0;
        puStack_b8 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SetInputsEnabled;
        lVar22 = *(long *)(lVar16 + 0x38);
        if (lVar22 == 0) {
          func_0x00f78af4();
code_r0x0164b040:
          uVar19 = func_0x00f78b24();
          auVar37 = func_0x00f78ac0(uVar19,0);
          lVar16 = auVar37._0_8_;
          pcStack_c8 = (code *)&Core_Input_InputManager__SetScreenLayerInputExclusive;
          lVar27 = *(long *)(lVar16 + 0x38);
          if (lVar27 == 0) {
            ppppuStack_d0 = &ppppplStack_c0;
            func_0x00f78af4();
          }
          else {
            ppppuStack_d0 = &ppppplStack_c0;
            if (auVar37._8_4_ < *(uint *)(lVar27 + 0x18)) {
              *(byte *)(lVar27 + (long)(int)auVar37._8_4_ * 0x10 + 0x29) = bVar20;
              ppppppuVar10 = (undefined1 ******)&ppppplStack_c0;
              puVar33 = &Core_Input_InputManager__SetScreenLayerInputExclusive;
              ppppuStack_d0 = &ppppplStack_c0;
              goto Core_Input_InputManager__ReselectTopmostActiveLayer;
            }
          }
          uVar25 = func_0x00f78b24();
          func_0x00f78ac0(uVar25,0);
          ppppppuVar10 = (undefined1 ******)&stack0xffffffffffffff00;
          ppppppuStack_f0 = (undefined1 ******)0x3eb4000;
          puStack_d8 = &Core_Input_InputManager__SetMultiTouchEnabled;
          ppppppuVar31 = (undefined1 ******)&pppppuStack_e0;
          uVar25 = 0x3eb5000;
          unaff_x21 = 0x3d216c0;
          pcStack_e8 = (code *)param_1;
          pppppuStack_e0 = &ppppuStack_d0;
          if ((bRam0000000003eb5795 & 1) == 0) {
            pppppuStack_e0 = &ppppuStack_d0;
            func_0x00f78a20(0x3d216c0);
            func_0x00f78a20(0x3d22880);
            bRam0000000003eb5795 = 1;
          }
          if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar27 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
          if (lVar27 == 0) {
code_r0x0164b158:
            func_0x00f78af4();
          }
          else {
            plVar26 = *(long **)(lVar27 + 0x20);
            if (plVar26 == (long *)0x0) {
code_r0x0164b130:
              if (plVar26 != (long *)0x0) {
                *(uint *)((long)plVar26 + 0xbc) = (uint)((extraout_x1 & 1) == 0);
                return plVar26;
              }
              goto code_r0x0164b158;
            }
            if ((*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) <= *(byte *)(*plVar26 + 300)) &&
               (*(long *)(*(long *)(*plVar26 + 200) +
                          (ulong)*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) * 8 + -8) ==
                /*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880)) goto code_r0x0164b130;
          }
          puVar33 = &Core_Input_InputManager__SetActiveLayer;
          auVar37 = func_0x00f78e5c();
          lVar16 = auVar37._0_8_;
          *(int *)(lVar16 + 0x40) = auVar37._8_4_;
          param_1 = extraout_x1;
        }
        else {
          if (*(uint *)(lVar22 + 0x18) <= *(uint *)(lVar27 + 0x48)) goto code_r0x0164b040;
          *(byte *)(lVar22 + (long)(int)*(uint *)(lVar27 + 0x48) * 0x10 + 0x28) = bVar20;
          ppppppuVar10 = (undefined1 ******)&pppppuStack_b0;
          ppppppuVar31 = (undefined1 ******)&pppplStack_40;
          puVar33 = puStack_b8;
          puStack_b8 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SetInputsEnabled;
        }
Core_Input_InputManager__ReselectTopmostActiveLayer:
        *(undefined8 ******)((long)ppppppuVar10 + -0x30) = unaff_x22;
        *(undefined8 *)((long)ppppppuVar10 + -0x28) = unaff_x21;
        *(undefined8 *)((long)ppppppuVar10 + -0x20) = uVar25;
        *(ulong *)((long)ppppppuVar10 + -0x18) = param_1;
        *(undefined1 *******)((long)ppppppuVar10 + -0x10) = ppppppuVar31;
        *(undefined **)((long)ppppppuVar10 + -8) = puVar33;
        if ((bRam0000000003eb5797 & 1) == 0) {
          func_0x00f78a20(0x3d216c0);
          func_0x00f78a20(0x3d22848);
          func_0x00f78a20(0x3d232c0);
          bRam0000000003eb5797 = 1;
        }
        uVar4 = *(undefined4 *)(lVar16 + 0x40);
        uVar25 = /*Core.Input.InputManager$$FindTopmostExclusiveLayer*/ func_0x0164a6a0(lVar16);
        if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar26 = (long *)/*System.Math$$Max*/ func_0x02b01f40(uVar4,uVar25,0);
        uVar14 = (uint)plVar26;
        if (uVar14 == 0xffffffff) {
          return plVar26;
        }
        lVar27 = *(long *)(lVar16 + 0x38);
        if (lVar27 != 0) {
          if (*(uint *)(lVar27 + 0x18) <= uVar14) goto code_r0x0164a30c;
          if (*(char *)(lVar27 + (long)(int)uVar14 * 0x10 + 0x28) != '\0') {
            return plVar26;
          }
          if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
            *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 1;
            if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar27 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
            lVar16 = *(long *)(lVar16 + 0x38);
            if (lVar16 != 0) {
              if (*(uint *)(lVar16 + 0x18) <= uVar14) goto code_r0x0164a30c;
              if (lVar27 != 0) {
                plVar26 = (long *)/*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar27,*(undefined8 *)
                                                          (lVar16 + (long)(int)uVar14 * 0x10 + 0x20)
                                                  ,0);
                if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
                  *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 0;
                  return plVar26;
                }
              }
            }
          }
        }
        func_0x00f78af4();
code_r0x0164a30c:
        uVar25 = func_0x00f78b24();
        plVar26 = (long *)func_0x00f78ac0(uVar25,0);
        return plVar26;
      }
    }
  }
code_r0x01477fa8:
  plVar26 = (long *)func_0x00f78af4();
  pppppuStack_e0 = (undefined8 *****)0x3eb4000;
  pcStack_c8 = (code *)&Atlas_Gameplay_FTUE_BaseLayerFTUEManager__OnExitInProgressScreen;
  puStack_d8 = (undefined *)param_1;
  ppppuStack_d0 = &ppppplStack_c0;
  if ((bRam0000000003eb489c & 1) == 0) {
    ppppuStack_d0 = &ppppplStack_c0;
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d527c0);
    bRam0000000003eb489c = 1;
  }
  uVar23 = plVar26[3];
  lVar27 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
  /*System.Action$$.ctor*/ func_0x02924c80(lVar27,plVar26,*(undefined8 *)(*plVar26 + 0x1c0),0);
  if (uVar23 != 0) {
    plVar17 = (long *)Atlas_Contexts_GameContextBaseInProgressState__remove_OnInProgressScreenExited
                                (uVar23,lVar27,0);
    if (plVar26[0xb] == 0) {
      return plVar17;
    }
    if (plVar26[0xe] != 0) {
      /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$OnAfterExitGameContextScreen*/ func_0x01536404(plVar26[0xe],0);
      if (plVar26[0x10] != 0) {
        /*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$OnAfterExitGameContextScreen*/ func_0x01536b90(plVar26[0x10],0);
        lVar16 = plVar26[0xe];
        lVar27 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(lVar27,plVar26,uRam0000000003d527c0,0);
        uVar23 = 0;
        unaff_x23 = (undefined8 *)0x3d527c0;
        if (lVar16 != 0) {
          /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$remove_OnAfterStartPauseFinish*/ func_0x0153610c(lVar16,lVar27,0);
          lVar16 = plVar26[0xe];
          lVar27 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
          /*System.Action$$.ctor*/ func_0x02924c80(lVar27,plVar26,uRam0000000003d527c0,0);
          uVar23 = 0;
          if (lVar16 != 0) {
            /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$remove_OnAfterUnPauseFinish*/ func_0x01535fcc(lVar16,lVar27,0);
            lVar16 = plVar26[0x10];
            lVar27 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
            /*System.Action$$.ctor*/ func_0x02924c80(lVar27,plVar26,uRam0000000003d527c0,0);
            uVar23 = 0;
            unaff_x23 = (undefined8 *)0x3d527c0;
            if (lVar16 != 0) {
              /*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$remove_OnStartPlaySequence*/ func_0x0153659c(lVar16,lVar27,0);
              lVar16 = plVar26[0x10];
              lVar27 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
              /*System.Action$$.ctor*/ func_0x02924c80(lVar27,plVar26,uRam0000000003d527c0,0);
              uVar23 = 0;
              if (lVar16 != 0) {
                plVar17 = (long *)/*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$remove_OnResetSequenceStopped*/ func_0x015366dc(lVar16,lVar27,0);
                plVar26[0xb] = 0;
                return plVar17;
              }
            }
          }
        }
      }
    }
  }
  lVar16 = func_0x00f78af4();
  uStack_130 = 0x3d1fa78;
  puStack_108 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__OnExitInProgressState;
  plVar17 = (long *)0x3d527a8;
  lStack_128 = lVar27;
  uStack_120 = uVar23;
  plStack_118 = plVar26;
  pppppuStack_110 = &ppppuStack_d0;
  if ((bRam0000000003eb489d & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d527a8);
    bRam0000000003eb489d = 1;
  }
  lVar27 = *(long *)(lVar16 + 0x18);
  uVar25 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
  /*System.Action$$.ctor*/ func_0x02924c80(uVar25,lVar16,uRam0000000003d527a8,0);
  if (lVar27 != 0) {
    /*Core.StateManagement.State$$remove_OnPostExitCallback*/ func_0x02b94d48(lVar27,uVar25,0);
    if (*(long *)(lVar16 + 0x70) != 0) {
      /*Atlas.Gameplay.FTUE.BaseLayerPauseManager$$OnExitInProgressState*/ func_0x015364e4(*(long *)(lVar16 + 0x70),0);
      if (*(ulong *)(lVar16 + 0x78) != 0) {
        auVar35._8_8_ = 0;
        auVar35._0_8_ = *(ulong *)(lVar16 + 0x78);
        puVar9 = &stack0xffffffffffffff00;
        plVar26 = plStack_118;
        uVar23 = uStack_120;
        lVar27 = lStack_128;
        uVar25 = uStack_130;
        pppppuVar29 = pppppuStack_110;
        puVar33 = puStack_108;
        do {
          lVar16 = auVar35._0_8_;
          *(ulong *)(puVar9 + -0x20) = uVar23;
          *(long **)(puVar9 + -0x18) = plVar26;
          *(undefined8 ******)(puVar9 + -0x10) = pppppuVar29;
          *(undefined **)(puVar9 + -8) = puVar33;
          if ((bRam0000000003eb4ed9 & 1) == 0) {
            func_0x00f78a20(0x3d3e190,auVar35._8_8_);
            func_0x00f78a20(0x3d75d18);
            bRam0000000003eb4ed9 = 1;
          }
          *(undefined8 *)(lVar16 + 0x28) = 0;
          *(undefined8 *)(lVar16 + 0x30) = 0xbf800000;
          *(undefined8 *)(lVar16 + 0x18) = 0;
          *(undefined8 *)(lVar16 + 0x20) = 0;
          lVar22 = *(long *)(lVar16 + 0x10);
          if (lVar22 != 0) {
            pppppuVar29 = *(undefined8 ******)(puVar9 + -0x10);
            puVar33 = *(undefined **)(puVar9 + -8);
            uVar23 = *(ulong *)(puVar9 + -0x20);
            puVar11 = puVar9;
            plVar26 = *(long **)(puVar9 + -0x18);
            goto code_r0x025e0480;
          }
          plVar17 = (long *)func_0x00f78af4();
          if (*(float *)(plVar17 + 6) <= 0.0) {
            return plVar17;
          }
          puVar11 = puVar9 + -0x50;
          *(undefined8 *)(puVar9 + -0x50) = uVar25;
          *(long *)(puVar9 + -0x48) = lVar27;
          *(undefined8 *)(puVar9 + -0x40) = 0x3eb4000;
          *(long *)(puVar9 + -0x38) = lVar16;
          *(undefined1 **)(puVar9 + -0x30) = puVar9 + -0x10;
          *(undefined **)(puVar9 + -0x28) =
               &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__OnInputFamilyChanged;
          pppppuVar29 = (undefined8 *****)(puVar9 + -0x30);
          plVar26 = plVar17;
          if ((bRam0000000003eb4ed8 & 1) == 0) {
            func_0x00f78a20(0x3d3cd60);
            func_0x00f78a20(0x3d3cd68);
            func_0x00f78a20(0x3d3e188);
            func_0x00f78a20(0x3d3e190);
            plVar26 = (long *)func_0x00f78a20(0x3d6df50);
            bRam0000000003eb4ed8 = 1;
          }
          uVar14 = *(int *)((long)plVar17 + 0x34) - 1;
          uVar23 = (ulong)uVar14;
          if ((int)uVar14 < 0) {
            return plVar26;
          }
          if (plVar17[3] != 0) {
            if (*(int *)(plVar17[3] + 0x18) <= (int)uVar14) {
              return plVar26;
            }
            lVar22 = plVar17[2];
            if (lVar22 != 0) {
              puVar33 = &UNK_01537350;
              plVar26 = plVar17;
              goto code_r0x025e0480;
            }
          }
          auVar36 = func_0x00f78af4();
          lVar16 = auVar36._8_8_;
          plVar26 = auVar36._0_8_;
          *(undefined8 *)(puVar9 + -0x80) = uVar25;
          *(long *)(puVar9 + -0x78) = lVar27;
          *(ulong *)(puVar9 + -0x70) = uVar23;
          *(long **)(puVar9 + -0x68) = plVar17;
          *(undefined8 ******)(puVar9 + -0x60) = pppppuVar29;
          *(undefined **)(puVar9 + -0x58) =
               &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__SetCurrentToolTipSequence;
          plVar17 = plVar26;
          if ((bRam0000000003eb4ed5 & 1) == 0) {
            plVar17 = (long *)func_0x00f78a20(0x3d3cd60);
            bRam0000000003eb4ed5 = 1;
          }
          if ((lVar16 == 0) || (*(int *)(lVar16 + 0x18) == 0)) {
            return plVar17;
          }
          plVar26[3] = lVar16;
          *(undefined4 *)((long)plVar26 + 0x34) = 0;
          uVar25 = *(undefined8 *)(puVar9 + -0x80);
          lVar27 = *(long *)(puVar9 + -0x78);
          puVar11 = puVar9 + -0x90;
          *(undefined8 *)(puVar9 + -0x90) = unaff_d9;
          *(ulong *)(puVar9 + -0x88) = unaff_d8;
          *(undefined8 *)(puVar9 + -0x80) = uVar25;
          *(long *)(puVar9 + -0x78) = lVar27;
          *(undefined8 *)(puVar9 + -0x70) = *(undefined8 *)(puVar9 + -0x70);
          *(undefined8 *)(puVar9 + -0x68) = *(undefined8 *)(puVar9 + -0x68);
          *(undefined8 *)(puVar9 + -0x60) = *(undefined8 *)(puVar9 + -0x60);
          *(undefined8 *)(puVar9 + -0x58) = *(undefined8 *)(puVar9 + -0x58);
          pppppuVar29 = (undefined8 *****)(puVar9 + -0x60);
          plVar17 = plVar26;
          if ((bRam0000000003eb4ed6 & 1) == 0) {
            func_0x00f78a20(0x3d3cd60);
            func_0x00f78a20(0x3d3cd68);
            func_0x00f78a20(0x3d3e188);
            func_0x00f78a20(0x3d3e190);
            plVar17 = (long *)func_0x00f78a20(0x3d717f0);
            bRam0000000003eb4ed6 = 1;
          }
          uVar23 = plVar26[3];
          if (uVar23 != 0) {
            uVar14 = *(uint *)((long)plVar26 + 0x34);
            lVar27 = (long)(int)uVar14;
            if ((int)*(uint *)(uVar23 + 0x18) <= (int)uVar14) {
              return plVar17;
            }
            if (*(uint *)(uVar23 + 0x18) <= uVar14) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar22 = *(long *)(uVar23 + 0x10) + lVar27 * 0x18;
            lVar16 = *(long *)(lVar22 + 0x28);
            unaff_d8 = (ulong)*(uint *)(lVar22 + 0x30);
            plVar26[5] = *(long *)(lVar22 + 0x20);
            if (lVar16 != 0) {
              plVar26[4] = *(long *)(lVar16 + 0x28);
              uVar23 = /*Atlas.UI.ToolTipManager.ToolTipData$$Copy*/ func_0x0156b4ec(lVar16,0);
              uVar19 = /*Atlas.Gameplay.FTUE.BaseLayerToolTipManager$$GetCurrentToolTipLocalisationKey*/ func_0x0153744c(plVar26);
              if (uVar23 != 0) {
                *(undefined8 *)(uVar23 + 0x28) = uVar19;
                lVar22 = plVar26[2];
                if (lVar22 != 0) goto code_r0x015371d4;
              }
            }
          }
          puVar33 = &Atlas_Gameplay_FTUE_BaseLayerToolTipManager__HideCurrentModal;
          auVar35 = func_0x00f78af4();
          puVar9 = puVar9 + -0x90;
        } while( true );
      }
    }
  }
  auVar36 = func_0x00f78af4();
  uVar25 = auVar36._8_8_;
  lVar27 = auVar36._0_8_;
  puStack_138 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__StartSection;
  auStack_1a0[0] = uVar25;
  ppppplStack_140 = (long *****)&pppppuStack_110;
  if ((bRam0000000003eb48a2 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24e08);
    func_0x00f78a20(0x3d62270);
    func_0x00f78a20(0x3d26ac8);
    bRam0000000003eb48a2 = 1;
  }
  uStack_1b0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1f8 = 0;
  *(undefined8 *)(lVar27 + 0xa8) = uVar25;
  if ((*(long *)(lVar27 + 0x40) != 0) &&
     (lVar16 = *(long *)(*(long *)(lVar27 + 0x40) + 0x30), lVar16 != 0)) {
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(&uStack_240,lVar16,uRam0000000003d3cd70);
    uStack_1c8 = uStack_218;
    uStack_1d0 = uStack_220;
    uStack_1b8 = uStack_208;
    uStack_1c0 = uStack_210;
    uStack_1b0 = uStack_200;
    uStack_1e8 = uStack_238;
    uStack_1f0 = uStack_240;
    uStack_1d8 = uStack_228;
    uStack_1e0 = uStack_230;
code_r0x01478328:
    do {
      uVar23 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(&uStack_1f0,uRam0000000003d33320);
      if ((uVar23 & 1) == 0) {
code_r0x01478494:
        plVar26 = (long *)/*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_1f0,uRam0000000003d33318);
        return plVar26;
      }
      lVar16 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d26ac8);
      /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0$$.ctor*/ func_0x0154719c(lVar16,0);
      if (lVar16 == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      *(long *)(lVar16 + 0x50) = lVar27;
      *(undefined8 *)(lVar16 + 0x40) = uStack_1b0;
      *(undefined8 *)(lVar16 + 0x28) = uStack_1c8;
      *(undefined8 *)(lVar16 + 0x20) = uStack_1d0;
      *(undefined8 *)(lVar16 + 0x38) = uStack_1b8;
      *(undefined8 *)(lVar16 + 0x30) = uStack_1c0;
      *(undefined8 *)(lVar16 + 0x18) = uStack_1d8;
      *(undefined8 *)(lVar16 + 0x10) = uStack_1e0;
      uStack_240 = *(undefined8 *)(lVar16 + 0x18);
      uVar25 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ lRam0000000003d24e08,&uStack_240);
      uVar23 = /*Atlas.StringID$$Equals*/ func_0x015057f8(auStack_1a0,uVar25,0);
    } while ((uVar23 & 1) == 0);
    if (*(long *)(lVar27 + 0x60) == 0) {
      func_0x00f78af4();
code_r0x014784dc:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x14784e0);
      (*pcVar6)();
    }
    puVar2 = (undefined8 *)(lVar16 + 0x10);
    puVar3 = (undefined8 *)(lVar16 + 0x48);
    uVar23 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar27 + 0x60),*puVar2,puVar3,0);
    if ((uVar23 & 1) == 0) goto code_r0x01478494;
    uVar25 = *(undefined8 *)(lVar27 + 0xa0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar23 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar25,0,0);
    if ((uVar23 & 1) != 0) {
      if (*(long *)(lVar27 + 0xa0) == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      uStack_1f8 = *(undefined8 *)(*(long *)(lVar27 + 0xa0) + 0x18);
      uStack_240 = *puVar2;
      uVar25 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ lRam0000000003d24e08,&uStack_240);
      uVar23 = /*Atlas.StringID$$Equals*/ func_0x015057f8(&uStack_1f8,uVar25,0);
      if ((uVar23 & 1) != 0) {
        uStack_278 = *(undefined8 *)(lVar16 + 0x18);
        uStack_280 = *puVar2;
        uStack_268 = *(undefined8 *)(lVar16 + 0x28);
        uStack_270 = *(undefined8 *)(lVar16 + 0x20);
        uStack_258 = *(undefined8 *)(lVar16 + 0x38);
        uStack_260 = *(undefined8 *)(lVar16 + 0x30);
        uStack_250 = *(undefined8 *)(lVar16 + 0x40);
        /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$CallReactions*/ func_0x01478e78(lVar27,*(undefined8 *)(lVar27 + 0x38),&uStack_280);
        goto code_r0x01478328;
      }
    }
    uVar19 = *puVar3;
    uVar25 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
    /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar25,lVar16,uRam0000000003d62270,0);
    /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$AddBaseListener*/ func_0x01478f10(lVar27,uVar19,uVar25,*puVar3);
    goto code_r0x01478328;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar26 = (long *)___cxa_begin_catch();
    lVar27 = *plVar26;
    ___cxa_end_catch();
    plVar26 = (long *)/*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_1f0,uRam0000000003d33318);
    if (lVar27 == 0) {
      return plVar26;
    }
    func_0x00f78ac0(lVar27,0);
  }
  lVar27 = __Unwind_Resume();
  puStack_288 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection;
  lVar16 = 0x3eb4000;
  ppppppuStack_290 = (undefined1 ******)&ppppplStack_140;
  if ((bRam0000000003eb48a3 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb48a3 = 1;
  }
  lStack_318 = 0;
  uStack_320 = 0;
  if ((*(long *)(lVar27 + 0x40) != 0) &&
     (lVar22 = *(long *)(*(long *)(lVar27 + 0x40) + 0x30), lVar22 != 0)) {
    plVar17 = (long *)0x3d24e08;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(&uStack_370,lVar22,uRam0000000003d3cd70);
    uStack_2e8 = uStack_348;
    uStack_2f0 = uStack_350;
    uStack_2d8 = uStack_338;
    uStack_2e0 = uStack_340;
    uStack_2d0 = uStack_330;
    uStack_308 = uStack_368;
    uStack_310 = uStack_370;
    uStack_2f8 = uStack_358;
    uStack_300 = uStack_360;
code_r0x01478624:
    do {
      uVar23 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(&uStack_310,uRam0000000003d33320);
      uVar25 = uStack_300;
      if ((uVar23 & 1) == 0) goto code_r0x01478690;
      uStack_370 = uStack_2f8;
      uVar19 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ lRam0000000003d24e08,&uStack_370);
      uVar23 = /*Atlas.StringID$$Equals*/ func_0x015057f8(lVar27 + 0xa8,uVar19,0);
      if ((uVar23 & 1) != 0) {
        if (*(long *)(lVar27 + 0x60) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar23 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar27 + 0x60),uVar25,&lStack_318,0);
          if ((uVar23 & 1) == 0) {
            iStack_328 = 0x86;
            goto code_r0x0147869c;
          }
          if (lStack_318 != 0) {
            /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$RemoveBaseListener*/ func_0x014765a4(lVar27,*(undefined8 *)(lStack_318 + 0x18));
            goto code_r0x01478624;
          }
          func_0x00f78af4();
        }
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1478708);
        (*pcVar6)();
      }
    } while( true );
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar26 = (long *)___cxa_begin_catch();
    lVar16 = *plVar26;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_310,*unaff_x23);
    if (lVar16 == 0) {
code_r0x014786b8:
      plVar26 = (long *)*plVar17;
      if (((*(ushort *)((long)plVar26 + 0x132) >> 10 & 1) != 0) && ((int)plVar26[0x1c] == 0)) {
        func_0x00f78ad0();
        plVar26 = (long *)*plVar17;
      }
      *(undefined8 *)(lVar27 + 0xa8) = *(undefined8 *)plVar26[0x17];
      return plVar26;
    }
    func_0x00f78ac0(lVar16,0);
  }
  lVar22 = __Unwind_Resume();
  puStack_378 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
  lStack_390 = lVar16;
  lStack_388 = lVar27;
  ppppppuStack_380 = &ppppppuStack_290;
  plVar26 = (long *)/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetSection*/ func_0x01478c3c(&uStack_3f0,lVar22,*(undefined8 *)(lVar22 + 0xa8));
  extraout_x8[5] = uStack_3c8;
  extraout_x8[4] = uStack_3d0;
  extraout_x8[7] = uStack_3b8;
  extraout_x8[6] = uStack_3c0;
  extraout_x8[9] = uStack_3a8;
  extraout_x8[8] = uStack_3b0;
  extraout_x8[0xb] = uStack_398;
  extraout_x8[10] = uStack_3a0;
  extraout_x8[1] = uStack_3e8;
  *extraout_x8 = uStack_3f0;
  extraout_x8[3] = uStack_3d8;
  extraout_x8[2] = uStack_3e0;
  return plVar26;
code_r0x01478690:
  iStack_328 = 0x7b;
code_r0x0147869c:
  plVar26 = (long *)/*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(&uStack_310,uRam0000000003d33318);
  if (iStack_328 == 0x86) {
    return plVar26;
  }
  goto code_r0x014786b8;
code_r0x015371d4:
  puVar33 = &UNK_015371e8;
code_r0x025e0480:
  lVar16 = lRam0000000003d3e190;
  *(undefined8 *)(puVar11 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar11 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar11 + -0x40) = unaff_x24;
  *(undefined8 **)(puVar11 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar11 + -0x30) = uVar25;
  *(long *)(puVar11 + -0x28) = lVar27;
  *(ulong *)(puVar11 + -0x20) = uVar23;
  *(long **)(puVar11 + -0x18) = plVar26;
  *(undefined8 ******)(puVar11 + -0x10) = pppppuVar29;
  *(undefined **)(puVar11 + -8) = puVar33;
  if ((bRam0000000003eb8330 & 1) == 0) {
    func_0x00f78a20(0x3d3b350);
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    func_0x00f78a20(0x3d6bd58);
    bRam0000000003eb8330 = 1;
  }
  if (lVar22 != 0) {
    plVar26 = (long *)(*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar16 + 0x18) + 0xc0) + 8))
                                (lVar22,/*STR('DismissAllQueuedAndShowing')*/ uRam0000000003d6bd58);
    if (*(long *)(lVar22 + 0x40) != 0) {
      lVar27 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar16 + 0x18) + 0xc0) + 0x10))
                         (lVar22);
      if ((lVar27 == 0) || (*(long *)(lVar27 + 0x68) == 0)) goto code_r0x025e05fc;
      plVar26 = (long *)/*ModalBehaviour$$Dismiss*/ func_0x01496e90(*(long *)(lVar27 + 0x68),1,0);
      *(undefined8 *)(lVar22 + 0x40) = 0;
    }
    lVar27 = *(long *)(lVar22 + 0x38);
    if (lVar27 != 0) {
      if (*(int *)(lVar27 + 0x18) + -1 < 0) {
        return plVar26;
      }
      iVar15 = *(int *)(lVar27 + 0x18) + -2;
      plVar26 = (long *)0x0;
      do {
        uVar14 = iVar15 + 1;
        if (uVar14 < *(uint *)(lVar27 + 0x18)) {
          lVar1 = *(long *)(lVar27 + 0x10) + (ulong)uVar14 * 8;
          lVar16 = lVar27;
        }
        else {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar16 = *(long *)(lVar22 + 0x38);
          if (lVar16 == 0) break;
          lVar1 = *(long *)(lVar27 + 0x10) + (ulong)uVar14 * 8;
        }
        lVar27 = *(long *)(lVar1 + 0x20);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar16,uVar14,uRam0000000003d3b350);
        if (lVar27 == 0) break;
        plVar28 = *(long **)(lVar27 + 0x18);
        plVar17 = plVar26;
        if (plVar28 != (long *)0x0) {
          if (plVar28 == (long *)0x0) break;
          plVar26 = (long *)/*UnityEngine.Events.UnityAction$$Invoke*/ func_0x03277c60(plVar28,0);
          plVar17 = plVar28;
        }
        if (iVar15 < 0) {
          return plVar26;
        }
        lVar27 = *(long *)(lVar22 + 0x38);
        iVar15 = iVar15 + -1;
        plVar26 = plVar17;
      } while (lVar27 != 0);
    }
  }
code_r0x025e05fc:
  plVar26 = (long *)func_0x00f78af4();
  return plVar26;
}



// ============================================================
// RVA: 0x1476c6c | Atlas.Gameplay.FTUE.BaseLayerFTUEDriving.OnEnterInProgressScreen
// ============================================================

/* WARNING: Possible PIC construction at 0x01476dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01476f34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01476f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147710c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01476fa0) */
/* WARNING: Removing unreachable block (ram,0x01476f38) */
/* WARNING: Removing unreachable block (ram,0x01476fd4) */
/* WARNING: Removing unreachable block (ram,0x01476f3c) */
/* WARNING: Removing unreachable block (ram,0x01476fe8) */
/* WARNING: Removing unreachable block (ram,0x01476ff4) */
/* WARNING: Removing unreachable block (ram,0x01476ffc) */
/* WARNING: Removing unreachable block (ram,0x01477030) */
/* WARNING: Removing unreachable block (ram,0x01477080) */
/* WARNING: Removing unreachable block (ram,0x01476f44) */
/* WARNING: Removing unreachable block (ram,0x01476f50) */
/* WARNING: Removing unreachable block (ram,0x01477058) */
/* WARNING: Removing unreachable block (ram,0x01477070) */
/* WARNING: Removing unreachable block (ram,0x01477068) */
/* WARNING: Removing unreachable block (ram,0x01476f90) */
/* WARNING: Removing unreachable block (ram,0x01476dd0) */
/* WARNING: Removing unreachable block (ram,0x01476e2c) */
/* WARNING: Removing unreachable block (ram,0x01476dd4) */
/* WARNING: Removing unreachable block (ram,0x01476e3c) */
/* WARNING: Removing unreachable block (ram,0x01476e10) */
/* WARNING: Removing unreachable block (ram,0x015b4a80) */
/* WARNING: Removing unreachable block (ram,0x015b4aa4) */
/* WARNING: Removing unreachable block (ram,0x015b4ab8) */
/* WARNING: Removing unreachable block (ram,0x015b4ac4) */
/* WARNING: Removing unreachable block (ram,0x015b4adc) */
/* WARNING: Removing unreachable block (ram,0x015b4b18) */
/* WARNING: Removing unreachable block (ram,0x015b4b44) */
/* WARNING: Removing unreachable block (ram,0x015b4b58) */
/* WARNING: Removing unreachable block (ram,0x015b4b64) */
/* WARNING: Removing unreachable block (ram,0x015b4b7c) */
/* WARNING: Removing unreachable block (ram,0x015b4bb8) */
/* WARNING: Removing unreachable block (ram,0x015b4be4) */
/* WARNING: Removing unreachable block (ram,0x015b4bf8) */
/* WARNING: Removing unreachable block (ram,0x015b4c04) */
/* WARNING: Removing unreachable block (ram,0x015b4c1c) */
/* WARNING: Removing unreachable block (ram,0x015b4c58) */
/* WARNING: Removing unreachable block (ram,0x015b4c84) */
/* WARNING: Removing unreachable block (ram,0x015b4c98) */
/* WARNING: Removing unreachable block (ram,0x015b4ca4) */
/* WARNING: Removing unreachable block (ram,0x015b4cbc) */
/* WARNING: Removing unreachable block (ram,0x015b4cf8) */
/* WARNING: Removing unreachable block (ram,0x015b4d24) */
/* WARNING: Removing unreachable block (ram,0x015b4d38) */
/* WARNING: Removing unreachable block (ram,0x015b4d44) */
/* WARNING: Removing unreachable block (ram,0x015b4d5c) */
/* WARNING: Removing unreachable block (ram,0x015b4d98) */
/* WARNING: Removing unreachable block (ram,0x015b4db4) */
/* WARNING: Removing unreachable block (ram,0x015b4dac) */
/* WARNING: Removing unreachable block (ram,0x01554b70) */
/* WARNING: Removing unreachable block (ram,0x01554bb8) */
/* WARNING: Removing unreachable block (ram,0x01554ba8) */
/* WARNING: Removing unreachable block (ram,0x01554bb0) */
/* WARNING: Removing unreachable block (ram,0x01554bc0) */
/* WARNING: Removing unreachable block (ram,0x01554bc4) */
/* WARNING: Removing unreachable block (ram,0x01554bdc) */
/* WARNING: Removing unreachable block (ram,0x01554be4) */
/* WARNING: Removing unreachable block (ram,0x01554c14) */
/* WARNING: Removing unreachable block (ram,0x01554c98) */
/* WARNING: Removing unreachable block (ram,0x01554ca4) */
/* WARNING: Removing unreachable block (ram,0x01554cac) */
/* WARNING: Removing unreachable block (ram,0x01554d28) */
/* WARNING: Removing unreachable block (ram,0x01554d8c) */
/* WARNING: Removing unreachable block (ram,0x01554d30) */
/* WARNING: Removing unreachable block (ram,0x01554d48) */
/* WARNING: Removing unreachable block (ram,0x01554d50) */
/* WARNING: Removing unreachable block (ram,0x01554e34) */
/* WARNING: Removing unreachable block (ram,0x01554d5c) */
/* WARNING: Removing unreachable block (ram,0x01554d68) */
/* WARNING: Removing unreachable block (ram,0x01554e44) */
/* WARNING: Removing unreachable block (ram,0x01554cc4) */
/* WARNING: Removing unreachable block (ram,0x01554d78) */
/* WARNING: Removing unreachable block (ram,0x01554cc8) */
/* WARNING: Removing unreachable block (ram,0x01554cdc) */
/* WARNING: Removing unreachable block (ram,0x01554ce4) */
/* WARNING: Removing unreachable block (ram,0x01554e0c) */
/* WARNING: Removing unreachable block (ram,0x01554cf0) */
/* WARNING: Removing unreachable block (ram,0x01554cfc) */
/* WARNING: Removing unreachable block (ram,0x01554e1c) */
/* WARNING: Removing unreachable block (ram,0x01554e20) */
/* WARNING: Removing unreachable block (ram,0x01554e48) */
/* WARNING: Removing unreachable block (ram,0x01554c18) */
/* WARNING: Removing unreachable block (ram,0x01554c1c) */
/* WARNING: Removing unreachable block (ram,0x01554c28) */
/* WARNING: Removing unreachable block (ram,0x01554c34) */
/* WARNING: Removing unreachable block (ram,0x01554c3c) */
/* WARNING: Removing unreachable block (ram,0x01554da8) */
/* WARNING: Removing unreachable block (ram,0x01554e58) */
/* WARNING: Removing unreachable block (ram,0x01554db0) */
/* WARNING: Removing unreachable block (ram,0x01554dc8) */
/* WARNING: Removing unreachable block (ram,0x01554dd0) */
/* WARNING: Removing unreachable block (ram,0x01554ea0) */
/* WARNING: Removing unreachable block (ram,0x01554ddc) */
/* WARNING: Removing unreachable block (ram,0x01554de8) */
/* WARNING: Removing unreachable block (ram,0x01554eb0) */
/* WARNING: Removing unreachable block (ram,0x01554c54) */
/* WARNING: Removing unreachable block (ram,0x01554df8) */
/* WARNING: Removing unreachable block (ram,0x01554c58) */
/* WARNING: Removing unreachable block (ram,0x01554c6c) */
/* WARNING: Removing unreachable block (ram,0x01554c74) */
/* WARNING: Removing unreachable block (ram,0x01554e78) */
/* WARNING: Removing unreachable block (ram,0x01554c80) */
/* WARNING: Removing unreachable block (ram,0x01554c8c) */
/* WARNING: Removing unreachable block (ram,0x01554e88) */
/* WARNING: Removing unreachable block (ram,0x01554e8c) */
/* WARNING: Removing unreachable block (ram,0x01554eb4) */
/* WARNING: Removing unreachable block (ram,0x01554bf8) */
/* WARNING: Removing unreachable block (ram,0x01554d08) */
/* WARNING: Removing unreachable block (ram,0x01554bfc) */
/* WARNING: Removing unreachable block (ram,0x01554d18) */
/* WARNING: Removing unreachable block (ram,0x01554d24) */
/* WARNING: Removing unreachable block (ram,0x01554ec8) */
/* WARNING: Removing unreachable block (ram,0x015b4d6c) */
/* WARNING: Removing unreachable block (ram,0x015b4d88) */
/* WARNING: Removing unreachable block (ram,0x015b4ccc) */
/* WARNING: Removing unreachable block (ram,0x015b4ce8) */
/* WARNING: Removing unreachable block (ram,0x015b4c2c) */
/* WARNING: Removing unreachable block (ram,0x015b4c48) */
/* WARNING: Removing unreachable block (ram,0x015b4b8c) */
/* WARNING: Removing unreachable block (ram,0x015b4ba8) */
/* WARNING: Removing unreachable block (ram,0x015b4aec) */
/* WARNING: Removing unreachable block (ram,0x015b4b08) */
/* WARNING: Removing unreachable block (ram,0x01477110) */
/* WARNING: Removing unreachable block (ram,0x01478200) */
/* WARNING: Removing unreachable block (ram,0x01478238) */
/* WARNING: Removing unreachable block (ram,0x014782ac) */
/* WARNING: Removing unreachable block (ram,0x014782cc) */
/* WARNING: Removing unreachable block (ram,0x014784e0) */
/* WARNING: Removing unreachable block (ram,0x0147851c) */
/* WARNING: Removing unreachable block (ram,0x01478524) */
/* WARNING: Removing unreachable block (ram,0x01478548) */
/* WARNING: Removing unreachable block (ram,0x01478554) */
/* WARNING: Removing unreachable block (ram,0x01478558) */
/* WARNING: Removing unreachable block (ram,0x01478580) */
/* WARNING: Removing unreachable block (ram,0x014785c4) */
/* WARNING: Removing unreachable block (ram,0x014785d4) */
/* WARNING: Removing unreachable block (ram,0x01478708) */
/* WARNING: Removing unreachable block (ram,0x01478724) */
/* WARNING: Removing unreachable block (ram,0x0147872c) */
/* WARNING: Removing unreachable block (ram,0x01478748) */
/* WARNING: Removing unreachable block (ram,0x01478754) */
/* WARNING: Removing unreachable block (ram,0x014785dc) */
/* WARNING: Removing unreachable block (ram,0x01478624) */
/* WARNING: Removing unreachable block (ram,0x01478690) */
/* WARNING: Removing unreachable block (ram,0x01478634) */
/* WARNING: Removing unreachable block (ram,0x0147865c) */
/* WARNING: Removing unreachable block (ram,0x014786f8) */
/* WARNING: Removing unreachable block (ram,0x01478664) */
/* WARNING: Removing unreachable block (ram,0x01478698) */
/* WARNING: Removing unreachable block (ram,0x0147869c) */
/* WARNING: Removing unreachable block (ram,0x014786b8) */
/* WARNING: Removing unreachable block (ram,0x014786c4) */
/* WARNING: Removing unreachable block (ram,0x014786cc) */
/* WARNING: Removing unreachable block (ram,0x014786d4) */
/* WARNING: Removing unreachable block (ram,0x014786e0) */
/* WARNING: Removing unreachable block (ram,0x01478678) */
/* WARNING: Removing unreachable block (ram,0x01478700) */
/* WARNING: Removing unreachable block (ram,0x01478704) */
/* WARNING: Removing unreachable block (ram,0x01478680) */
/* WARNING: Removing unreachable block (ram,0x014782d4) */
/* WARNING: Removing unreachable block (ram,0x01478328) */
/* WARNING: Removing unreachable block (ram,0x01478338) */
/* WARNING: Removing unreachable block (ram,0x014784c8) */
/* WARNING: Removing unreachable block (ram,0x01478350) */
/* WARNING: Removing unreachable block (ram,0x01478394) */
/* WARNING: Removing unreachable block (ram,0x014784d0) */
/* WARNING: Removing unreachable block (ram,0x0147839c) */
/* WARNING: Removing unreachable block (ram,0x01478494) */
/* WARNING: Removing unreachable block (ram,0x014784a8) */
/* WARNING: Removing unreachable block (ram,0x014783b8) */
/* WARNING: Removing unreachable block (ram,0x014783c8) */
/* WARNING: Removing unreachable block (ram,0x014783d0) */
/* WARNING: Removing unreachable block (ram,0x014783d4) */
/* WARNING: Removing unreachable block (ram,0x014783e8) */
/* WARNING: Removing unreachable block (ram,0x014784d8) */
/* WARNING: Removing unreachable block (ram,0x014784dc) */
/* WARNING: Removing unreachable block (ram,0x014783f0) */
/* WARNING: Removing unreachable block (ram,0x0147844c) */
/* WARNING: Removing unreachable block (ram,0x01478420) */

ulong Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__OnEnterInProgressScreen(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  long lVar9;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar10;
  undefined1 ***pppuVar11;
  undefined *puVar12;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  auVar14._8_8_ = param_1;
  auVar14._0_8_ = unaff_x20;
  puVar2 = &uStack_50;
  /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$OnEnterInProgressScreen*/ func_0x01475b68();
  *(undefined4 *)(param_1 + 0xd8) = 1;
  lVar6 = Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__get_BaseLayerFtueDrivingDefinition(param_1);
  if (lVar6 != 0) {
    uStack_48 = *(undefined8 *)(lVar6 + 0x48);
    uStack_50 = *(undefined8 *)(lVar6 + 0x40);
    uStack_38 = *(undefined8 *)(lVar6 + 0x58);
    uStack_40 = *(undefined8 *)(lVar6 + 0x50);
    uStack_28 = *(undefined8 *)(lVar6 + 0x68);
    uStack_30 = *(undefined8 *)(lVar6 + 0x60);
    uVar7 = /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$CallReactions*/ func_0x01475e24(param_1,&uStack_50);
    return uVar7;
  }
  lVar6 = func_0x00f78af4();
  puStack_58 = &Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__OnEnterOutroState;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb488c & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d52790);
    func_0x00f78a20(0x3d68a20);
    bRam0000000003eb488c = 1;
  }
  lVar9 = *(long *)(lVar6 + 0x28);
  uVar8 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
  /*System.Action$$.ctor*/ func_0x02924c80(uVar8,lVar6,uRam0000000003d52790,0);
  if (lVar9 != 0) {
    /*Core.StateManagement.State$$remove_OnPreEnterCallback*/ func_0x02b94208(lVar9,uVar8,0);
    auVar13._8_8_ = /*STR('Achievement_01')*/ uRam0000000003d68a20;
    auVar13._0_8_ = *(long *)(lVar6 + 0x20);
    puVar10 = puStack_60;
    puVar12 = puStack_58;
    if (*(long *)(lVar6 + 0x20) != 0) {
      do {
        auVar1 = auVar13;
        uVar8 = auVar1._8_8_;
        lVar6 = auVar1._0_8_;
        *(undefined8 *)((long)puVar2 + -0x40) = unaff_d9;
        *(undefined8 *)((long)puVar2 + -0x38) = unaff_d8;
        *(undefined8 *)((long)puVar2 + -0x30) = unaff_x22;
        *(undefined8 *)((long)puVar2 + -0x28) = unaff_x21;
        *(undefined1 (*) [16])((long)puVar2 + -0x20) = auVar14;
        *(undefined1 **)((long)puVar2 + -0x10) = puVar10;
        *(undefined **)((long)puVar2 + -8) = puVar12;
        puVar10 = (undefined1 *)((long)puVar2 + -0x10);
        unaff_d8 = 0x42c80000;
        unaff_x21 = 0x3eb4000;
        if ((bRam0000000003eb4717 & 1) == 0) {
          func_0x00f78a20(0x3d2fe08);
          func_0x00f78a20(0x3d2fe18);
          bRam0000000003eb4717 = 1;
        }
        *(undefined4 *)((long)puVar2 + -0x44) = 0;
        if (*(long *)(lVar6 + 0x60) != 0) {
          uVar7 = /*System.Collections.Generic.Dictionary<string, float>$$TryGetValue*/ func_0x01ee246c(*(long *)(lVar6 + 0x60),uVar8,(undefined1 *)((long)puVar2 + -0x44)
                                  ,uRam0000000003d2fe08);
          bVar3 = true;
          bVar4 = false;
          if ((int)uVar7 != 0) {
            bVar3 = false;
            bVar4 = true;
            if (!NAN(*(float *)((long)puVar2 + -0x44))) {
              bVar3 = *(float *)((long)puVar2 + -0x44) < 100.0;
              bVar4 = false;
            }
          }
          if (bVar3 == bVar4) {
            return uVar7;
          }
          if (*(long *)(lVar6 + 0x60) != 0) {
            unaff_x21 = 0x3d2fe18;
            /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(0x42c80000,*(long *)(lVar6 + 0x60),uVar8,uRam0000000003d2fe18);
            if (*(long *)(lVar6 + 0x58) != 0) {
              uVar7 = /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(0x42c80000,*(long *)(lVar6 + 0x58),uVar8,uRam0000000003d2fe18)
              ;
              return uVar7;
            }
          }
        }
        auVar13 = func_0x00f78af4();
        puVar2 = (undefined8 *)((long)puVar2 + -0x50);
        puVar12 = &Atlas_Stats_AchievementManager__UnlockAchievement;
        auVar14 = auVar1;
      } while( true );
    }
  }
  auVar14 = func_0x00f78af4();
  uStack_b0 = 0x3d52790;
  puStack_88 = &Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__OnEnterEngageJoyStickStartTrigger;
  pppuVar11 = &ppuStack_90;
  uStack_a8 = uVar8;
  lStack_a0 = lVar9;
  lStack_98 = lVar6;
  ppuStack_90 = &puStack_60;
  if ((bRam0000000003eb488d & 1) == 0) {
    func_0x00f78a20(0x3d52780);
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb488d = 1;
  }
  puVar12 = &UNK_01476dd0;
  puVar2 = &uStack_b0;
  while( true ) {
    uVar8 = auVar14._8_8_;
    *(undefined8 *)((long)puVar2 + -0x30) = 0x3d52790;
    *(undefined8 *)((long)puVar2 + -0x28) = 0x3eb4000;
    *(undefined8 *)((long)puVar2 + -0x20) = uVar8;
    *(long *)((long)puVar2 + -0x18) = auVar14._0_8_;
    *(undefined1 ****)((long)puVar2 + -0x10) = pppuVar11;
    *(undefined **)((long)puVar2 + -8) = puVar12;
    if ((bRam0000000003eb489f & 1) == 0) {
      func_0x00f78a20(0x3d21b08);
      bRam0000000003eb489f = 1;
    }
    *(undefined8 *)((long)puVar2 + -0x38) = 0;
    if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = Atlas_Contexts_GameContextBase__TryGetLocalHumanPlayerFromCollider
                      (uVar8,(undefined1 *)((long)puVar2 + -0x38),0);
    if ((int)uVar7 == 0) break;
    if (*(long *)((long)puVar2 + -0x38) != 0) {
      uVar5 = Atlas_Gameplay_Kart_KartComposite__get_IsRespawning(*(long *)((long)puVar2 + -0x38),0)
      ;
      return (ulong)(uVar5 ^ 1);
    }
    auVar14 = func_0x00f78af4();
    *(undefined8 *)((long)puVar2 + -0x80) = unaff_x24;
    *(undefined8 *)((long)puVar2 + -0x78) = unaff_x23;
    *(undefined8 *)((long)puVar2 + -0x70) = 0x3d52790;
    *(undefined8 *)((long)puVar2 + -0x68) = 0x3eb4000;
    *(undefined8 *)((long)puVar2 + -0x60) = 0x3d21b08;
    *(undefined8 *)((long)puVar2 + -0x58) = uVar8;
    *(undefined1 **)((long)puVar2 + -0x50) = (undefined1 *)((long)puVar2 + -0x10);
    *(undefined **)((long)puVar2 + -0x48) =
         &Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__OnEnterEngageJoystickEndTrigger;
    pppuVar11 = (undefined1 ***)((long)puVar2 + -0x50);
    if ((bRam0000000003eb488e & 1) == 0) {
      func_0x00f78a20(0x3d52780);
      func_0x00f78a20(0x3d52788);
      func_0x00f78a20(0x3d278d8);
      bRam0000000003eb488e = 1;
    }
    puVar12 = &UNK_01476f38;
    puVar2 = (undefined8 *)((long)puVar2 + -0x80);
  }
  return uVar7;
}



// ============================================================
// RVA: 0x1476cc8 | Atlas.Gameplay.FTUE.BaseLayerFTUEDriving.OnEnterOutroState
// ============================================================

/* WARNING: Possible PIC construction at 0x01476dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01476f34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01476f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147710c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01476fa0) */
/* WARNING: Removing unreachable block (ram,0x01476f38) */
/* WARNING: Removing unreachable block (ram,0x01476fd4) */
/* WARNING: Removing unreachable block (ram,0x01476f3c) */
/* WARNING: Removing unreachable block (ram,0x01476fe8) */
/* WARNING: Removing unreachable block (ram,0x01476ff4) */
/* WARNING: Removing unreachable block (ram,0x01476ffc) */
/* WARNING: Removing unreachable block (ram,0x01477030) */
/* WARNING: Removing unreachable block (ram,0x01477080) */
/* WARNING: Removing unreachable block (ram,0x01476f44) */
/* WARNING: Removing unreachable block (ram,0x01476f50) */
/* WARNING: Removing unreachable block (ram,0x01477058) */
/* WARNING: Removing unreachable block (ram,0x01477070) */
/* WARNING: Removing unreachable block (ram,0x01477068) */
/* WARNING: Removing unreachable block (ram,0x01476f90) */
/* WARNING: Removing unreachable block (ram,0x01476dd0) */
/* WARNING: Removing unreachable block (ram,0x01476e2c) */
/* WARNING: Removing unreachable block (ram,0x01476dd4) */
/* WARNING: Removing unreachable block (ram,0x01476e3c) */
/* WARNING: Removing unreachable block (ram,0x01476e10) */
/* WARNING: Removing unreachable block (ram,0x015b4a80) */
/* WARNING: Removing unreachable block (ram,0x015b4aa4) */
/* WARNING: Removing unreachable block (ram,0x015b4ab8) */
/* WARNING: Removing unreachable block (ram,0x015b4ac4) */
/* WARNING: Removing unreachable block (ram,0x015b4adc) */
/* WARNING: Removing unreachable block (ram,0x015b4b18) */
/* WARNING: Removing unreachable block (ram,0x015b4b44) */
/* WARNING: Removing unreachable block (ram,0x015b4b58) */
/* WARNING: Removing unreachable block (ram,0x015b4b64) */
/* WARNING: Removing unreachable block (ram,0x015b4b7c) */
/* WARNING: Removing unreachable block (ram,0x015b4bb8) */
/* WARNING: Removing unreachable block (ram,0x015b4be4) */
/* WARNING: Removing unreachable block (ram,0x015b4bf8) */
/* WARNING: Removing unreachable block (ram,0x015b4c04) */
/* WARNING: Removing unreachable block (ram,0x015b4c1c) */
/* WARNING: Removing unreachable block (ram,0x015b4c58) */
/* WARNING: Removing unreachable block (ram,0x015b4c84) */
/* WARNING: Removing unreachable block (ram,0x015b4c98) */
/* WARNING: Removing unreachable block (ram,0x015b4ca4) */
/* WARNING: Removing unreachable block (ram,0x015b4cbc) */
/* WARNING: Removing unreachable block (ram,0x015b4cf8) */
/* WARNING: Removing unreachable block (ram,0x015b4d24) */
/* WARNING: Removing unreachable block (ram,0x015b4d38) */
/* WARNING: Removing unreachable block (ram,0x015b4d44) */
/* WARNING: Removing unreachable block (ram,0x015b4d5c) */
/* WARNING: Removing unreachable block (ram,0x015b4d98) */
/* WARNING: Removing unreachable block (ram,0x015b4db4) */
/* WARNING: Removing unreachable block (ram,0x015b4dac) */
/* WARNING: Removing unreachable block (ram,0x01554b70) */
/* WARNING: Removing unreachable block (ram,0x01554bb8) */
/* WARNING: Removing unreachable block (ram,0x01554ba8) */
/* WARNING: Removing unreachable block (ram,0x01554bb0) */
/* WARNING: Removing unreachable block (ram,0x01554bc0) */
/* WARNING: Removing unreachable block (ram,0x01554bc4) */
/* WARNING: Removing unreachable block (ram,0x01554bdc) */
/* WARNING: Removing unreachable block (ram,0x01554be4) */
/* WARNING: Removing unreachable block (ram,0x01554c14) */
/* WARNING: Removing unreachable block (ram,0x01554c98) */
/* WARNING: Removing unreachable block (ram,0x01554ca4) */
/* WARNING: Removing unreachable block (ram,0x01554cac) */
/* WARNING: Removing unreachable block (ram,0x01554d28) */
/* WARNING: Removing unreachable block (ram,0x01554d8c) */
/* WARNING: Removing unreachable block (ram,0x01554d30) */
/* WARNING: Removing unreachable block (ram,0x01554d48) */
/* WARNING: Removing unreachable block (ram,0x01554d50) */
/* WARNING: Removing unreachable block (ram,0x01554e34) */
/* WARNING: Removing unreachable block (ram,0x01554d5c) */
/* WARNING: Removing unreachable block (ram,0x01554d68) */
/* WARNING: Removing unreachable block (ram,0x01554e44) */
/* WARNING: Removing unreachable block (ram,0x01554cc4) */
/* WARNING: Removing unreachable block (ram,0x01554d78) */
/* WARNING: Removing unreachable block (ram,0x01554cc8) */
/* WARNING: Removing unreachable block (ram,0x01554cdc) */
/* WARNING: Removing unreachable block (ram,0x01554ce4) */
/* WARNING: Removing unreachable block (ram,0x01554e0c) */
/* WARNING: Removing unreachable block (ram,0x01554cf0) */
/* WARNING: Removing unreachable block (ram,0x01554cfc) */
/* WARNING: Removing unreachable block (ram,0x01554e1c) */
/* WARNING: Removing unreachable block (ram,0x01554e20) */
/* WARNING: Removing unreachable block (ram,0x01554e48) */
/* WARNING: Removing unreachable block (ram,0x01554c18) */
/* WARNING: Removing unreachable block (ram,0x01554c1c) */
/* WARNING: Removing unreachable block (ram,0x01554c28) */
/* WARNING: Removing unreachable block (ram,0x01554c34) */
/* WARNING: Removing unreachable block (ram,0x01554c3c) */
/* WARNING: Removing unreachable block (ram,0x01554da8) */
/* WARNING: Removing unreachable block (ram,0x01554e58) */
/* WARNING: Removing unreachable block (ram,0x01554db0) */
/* WARNING: Removing unreachable block (ram,0x01554dc8) */
/* WARNING: Removing unreachable block (ram,0x01554dd0) */
/* WARNING: Removing unreachable block (ram,0x01554ea0) */
/* WARNING: Removing unreachable block (ram,0x01554ddc) */
/* WARNING: Removing unreachable block (ram,0x01554de8) */
/* WARNING: Removing unreachable block (ram,0x01554eb0) */
/* WARNING: Removing unreachable block (ram,0x01554c54) */
/* WARNING: Removing unreachable block (ram,0x01554df8) */
/* WARNING: Removing unreachable block (ram,0x01554c58) */
/* WARNING: Removing unreachable block (ram,0x01554c6c) */
/* WARNING: Removing unreachable block (ram,0x01554c74) */
/* WARNING: Removing unreachable block (ram,0x01554e78) */
/* WARNING: Removing unreachable block (ram,0x01554c80) */
/* WARNING: Removing unreachable block (ram,0x01554c8c) */
/* WARNING: Removing unreachable block (ram,0x01554e88) */
/* WARNING: Removing unreachable block (ram,0x01554e8c) */
/* WARNING: Removing unreachable block (ram,0x01554eb4) */
/* WARNING: Removing unreachable block (ram,0x01554bf8) */
/* WARNING: Removing unreachable block (ram,0x01554d08) */
/* WARNING: Removing unreachable block (ram,0x01554bfc) */
/* WARNING: Removing unreachable block (ram,0x01554d18) */
/* WARNING: Removing unreachable block (ram,0x01554d24) */
/* WARNING: Removing unreachable block (ram,0x01554ec8) */
/* WARNING: Removing unreachable block (ram,0x015b4d6c) */
/* WARNING: Removing unreachable block (ram,0x015b4d88) */
/* WARNING: Removing unreachable block (ram,0x015b4ccc) */
/* WARNING: Removing unreachable block (ram,0x015b4ce8) */
/* WARNING: Removing unreachable block (ram,0x015b4c2c) */
/* WARNING: Removing unreachable block (ram,0x015b4c48) */
/* WARNING: Removing unreachable block (ram,0x015b4b8c) */
/* WARNING: Removing unreachable block (ram,0x015b4ba8) */
/* WARNING: Removing unreachable block (ram,0x015b4aec) */
/* WARNING: Removing unreachable block (ram,0x015b4b08) */
/* WARNING: Removing unreachable block (ram,0x01477110) */
/* WARNING: Removing unreachable block (ram,0x01478200) */
/* WARNING: Removing unreachable block (ram,0x01478238) */
/* WARNING: Removing unreachable block (ram,0x014782ac) */
/* WARNING: Removing unreachable block (ram,0x014782cc) */
/* WARNING: Removing unreachable block (ram,0x014784e0) */
/* WARNING: Removing unreachable block (ram,0x0147851c) */
/* WARNING: Removing unreachable block (ram,0x01478524) */
/* WARNING: Removing unreachable block (ram,0x01478548) */
/* WARNING: Removing unreachable block (ram,0x01478554) */
/* WARNING: Removing unreachable block (ram,0x01478558) */
/* WARNING: Removing unreachable block (ram,0x01478580) */
/* WARNING: Removing unreachable block (ram,0x014785c4) */
/* WARNING: Removing unreachable block (ram,0x014785d4) */
/* WARNING: Removing unreachable block (ram,0x01478708) */
/* WARNING: Removing unreachable block (ram,0x01478724) */
/* WARNING: Removing unreachable block (ram,0x0147872c) */
/* WARNING: Removing unreachable block (ram,0x01478748) */
/* WARNING: Removing unreachable block (ram,0x01478754) */
/* WARNING: Removing unreachable block (ram,0x014785dc) */
/* WARNING: Removing unreachable block (ram,0x01478624) */
/* WARNING: Removing unreachable block (ram,0x01478690) */
/* WARNING: Removing unreachable block (ram,0x01478634) */
/* WARNING: Removing unreachable block (ram,0x0147865c) */
/* WARNING: Removing unreachable block (ram,0x014786f8) */
/* WARNING: Removing unreachable block (ram,0x01478664) */
/* WARNING: Removing unreachable block (ram,0x01478698) */
/* WARNING: Removing unreachable block (ram,0x0147869c) */
/* WARNING: Removing unreachable block (ram,0x014786b8) */
/* WARNING: Removing unreachable block (ram,0x014786c4) */
/* WARNING: Removing unreachable block (ram,0x014786cc) */
/* WARNING: Removing unreachable block (ram,0x014786d4) */
/* WARNING: Removing unreachable block (ram,0x014786e0) */
/* WARNING: Removing unreachable block (ram,0x01478678) */
/* WARNING: Removing unreachable block (ram,0x01478700) */
/* WARNING: Removing unreachable block (ram,0x01478704) */
/* WARNING: Removing unreachable block (ram,0x01478680) */
/* WARNING: Removing unreachable block (ram,0x014782d4) */
/* WARNING: Removing unreachable block (ram,0x01478328) */
/* WARNING: Removing unreachable block (ram,0x01478338) */
/* WARNING: Removing unreachable block (ram,0x014784c8) */
/* WARNING: Removing unreachable block (ram,0x01478350) */
/* WARNING: Removing unreachable block (ram,0x01478394) */
/* WARNING: Removing unreachable block (ram,0x014784d0) */
/* WARNING: Removing unreachable block (ram,0x0147839c) */
/* WARNING: Removing unreachable block (ram,0x01478494) */
/* WARNING: Removing unreachable block (ram,0x014784a8) */
/* WARNING: Removing unreachable block (ram,0x014783b8) */
/* WARNING: Removing unreachable block (ram,0x014783c8) */
/* WARNING: Removing unreachable block (ram,0x014783d0) */
/* WARNING: Removing unreachable block (ram,0x014783d4) */
/* WARNING: Removing unreachable block (ram,0x014783e8) */
/* WARNING: Removing unreachable block (ram,0x014784d8) */
/* WARNING: Removing unreachable block (ram,0x014784dc) */
/* WARNING: Removing unreachable block (ram,0x014783f0) */
/* WARNING: Removing unreachable block (ram,0x0147844c) */
/* WARNING: Removing unreachable block (ram,0x01478420) */

ulong Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__OnEnterOutroState(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lVar8;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined1 **ppuVar9;
  undefined *unaff_x30;
  undefined *puVar10;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  auVar12._8_8_ = unaff_x19;
  auVar12._0_8_ = unaff_x20;
  if ((bRam0000000003eb488c & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d52790);
    func_0x00f78a20(0x3d68a20);
    bRam0000000003eb488c = 1;
  }
  lVar8 = *(long *)(param_1 + 0x28);
  uVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
  /*System.Action$$.ctor*/ func_0x02924c80(uVar7,param_1,uRam0000000003d52790,0);
  if (lVar8 != 0) {
    /*Core.StateManagement.State$$remove_OnPreEnterCallback*/ func_0x02b94208(lVar8,uVar7,0);
    auVar11._8_8_ = /*STR('Achievement_01')*/ uRam0000000003d68a20;
    auVar11._0_8_ = *(long *)(param_1 + 0x20);
    if (*(long *)(param_1 + 0x20) != 0) {
      do {
        auVar1 = auVar11;
        uVar7 = auVar1._8_8_;
        lVar8 = auVar1._0_8_;
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
        *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_d8;
        *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined1 (*) [16])((long)register0x00000008 + -0x20) = auVar12;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
        unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
        unaff_d8 = 0x42c80000;
        unaff_x21 = 0x3eb4000;
        if ((bRam0000000003eb4717 & 1) == 0) {
          func_0x00f78a20(0x3d2fe08);
          func_0x00f78a20(0x3d2fe18);
          bRam0000000003eb4717 = 1;
        }
        *(undefined4 *)((long)register0x00000008 + -0x44) = 0;
        if (*(long *)(lVar8 + 0x60) != 0) {
          uVar6 = /*System.Collections.Generic.Dictionary<string, float>$$TryGetValue*/ func_0x01ee246c(*(long *)(lVar8 + 0x60),uVar7,
                                  (undefined1 *)((long)register0x00000008 + -0x44),
                                  uRam0000000003d2fe08);
          bVar3 = true;
          bVar4 = false;
          if ((int)uVar6 != 0) {
            bVar3 = false;
            bVar4 = true;
            if (!NAN(*(float *)((long)register0x00000008 + -0x44))) {
              bVar3 = *(float *)((long)register0x00000008 + -0x44) < 100.0;
              bVar4 = false;
            }
          }
          if (bVar3 == bVar4) {
            return uVar6;
          }
          if (*(long *)(lVar8 + 0x60) != 0) {
            unaff_x21 = 0x3d2fe18;
            /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(0x42c80000,*(long *)(lVar8 + 0x60),uVar7,uRam0000000003d2fe18);
            if (*(long *)(lVar8 + 0x58) != 0) {
              uVar6 = /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(0x42c80000,*(long *)(lVar8 + 0x58),uVar7,uRam0000000003d2fe18)
              ;
              return uVar6;
            }
          }
        }
        unaff_x30 = &Atlas_Stats_AchievementManager__UnlockAchievement;
        auVar11 = func_0x00f78af4();
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
        auVar12 = auVar1;
      } while( true );
    }
  }
  auVar12 = func_0x00f78af4();
  uStack_60 = 0x3d52790;
  puStack_38 = &Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__OnEnterEngageJoyStickStartTrigger;
  ppuVar9 = &puStack_40;
  uStack_58 = uVar7;
  lStack_50 = lVar8;
  lStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb488d & 1) == 0) {
    func_0x00f78a20(0x3d52780);
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb488d = 1;
  }
  puVar10 = &UNK_01476dd0;
  puVar2 = &uStack_60;
  while( true ) {
    uVar7 = auVar12._8_8_;
    *(undefined8 *)((long)puVar2 + -0x30) = 0x3d52790;
    *(undefined8 *)((long)puVar2 + -0x28) = 0x3eb4000;
    *(undefined8 *)((long)puVar2 + -0x20) = uVar7;
    *(long *)((long)puVar2 + -0x18) = auVar12._0_8_;
    *(undefined1 ***)((long)puVar2 + -0x10) = ppuVar9;
    *(undefined **)((long)puVar2 + -8) = puVar10;
    if ((bRam0000000003eb489f & 1) == 0) {
      func_0x00f78a20(0x3d21b08);
      bRam0000000003eb489f = 1;
    }
    *(undefined8 *)((long)puVar2 + -0x38) = 0;
    if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = Atlas_Contexts_GameContextBase__TryGetLocalHumanPlayerFromCollider
                      (uVar7,(undefined1 *)((long)puVar2 + -0x38),0);
    if ((int)uVar6 == 0) break;
    if (*(long *)((long)puVar2 + -0x38) != 0) {
      uVar5 = Atlas_Gameplay_Kart_KartComposite__get_IsRespawning(*(long *)((long)puVar2 + -0x38),0)
      ;
      return (ulong)(uVar5 ^ 1);
    }
    auVar12 = func_0x00f78af4();
    *(undefined8 *)((long)puVar2 + -0x80) = unaff_x24;
    *(undefined8 *)((long)puVar2 + -0x78) = unaff_x23;
    *(undefined8 *)((long)puVar2 + -0x70) = 0x3d52790;
    *(undefined8 *)((long)puVar2 + -0x68) = 0x3eb4000;
    *(undefined8 *)((long)puVar2 + -0x60) = 0x3d21b08;
    *(undefined8 *)((long)puVar2 + -0x58) = uVar7;
    *(undefined1 **)((long)puVar2 + -0x50) = (undefined1 *)((long)puVar2 + -0x10);
    *(undefined **)((long)puVar2 + -0x48) =
         &Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__OnEnterEngageJoystickEndTrigger;
    ppuVar9 = (undefined1 **)((long)puVar2 + -0x50);
    if ((bRam0000000003eb488e & 1) == 0) {
      func_0x00f78a20(0x3d52780);
      func_0x00f78a20(0x3d52788);
      func_0x00f78a20(0x3d278d8);
      bRam0000000003eb488e = 1;
    }
    puVar10 = &UNK_01476f38;
    puVar2 = (undefined8 *)((long)puVar2 + -0x80);
  }
  return uVar6;
}



// ============================================================
// RVA: 0x1476d84 | Atlas.Gameplay.FTUE.BaseLayerFTUEDriving.OnEnterEngageJoyStickStartTrigger
// ============================================================

/* WARNING: Possible PIC construction at 0x01476dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01476f34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01476f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147710c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01476fa0) */
/* WARNING: Removing unreachable block (ram,0x01476f38) */
/* WARNING: Removing unreachable block (ram,0x01476fd4) */
/* WARNING: Removing unreachable block (ram,0x01476f3c) */
/* WARNING: Removing unreachable block (ram,0x01476fe8) */
/* WARNING: Removing unreachable block (ram,0x01476ff4) */
/* WARNING: Removing unreachable block (ram,0x01476ffc) */
/* WARNING: Removing unreachable block (ram,0x01477030) */
/* WARNING: Removing unreachable block (ram,0x01477080) */
/* WARNING: Removing unreachable block (ram,0x01476f44) */
/* WARNING: Removing unreachable block (ram,0x01476f50) */
/* WARNING: Removing unreachable block (ram,0x01477058) */
/* WARNING: Removing unreachable block (ram,0x01477070) */
/* WARNING: Removing unreachable block (ram,0x01477068) */
/* WARNING: Removing unreachable block (ram,0x01476f90) */
/* WARNING: Removing unreachable block (ram,0x01476dd0) */
/* WARNING: Removing unreachable block (ram,0x01476e2c) */
/* WARNING: Removing unreachable block (ram,0x01476dd4) */
/* WARNING: Removing unreachable block (ram,0x01476e3c) */
/* WARNING: Removing unreachable block (ram,0x01476e10) */
/* WARNING: Removing unreachable block (ram,0x015b4a80) */
/* WARNING: Removing unreachable block (ram,0x015b4aa4) */
/* WARNING: Removing unreachable block (ram,0x015b4ab8) */
/* WARNING: Removing unreachable block (ram,0x015b4ac4) */
/* WARNING: Removing unreachable block (ram,0x015b4adc) */
/* WARNING: Removing unreachable block (ram,0x015b4b18) */
/* WARNING: Removing unreachable block (ram,0x015b4b44) */
/* WARNING: Removing unreachable block (ram,0x015b4b58) */
/* WARNING: Removing unreachable block (ram,0x015b4b64) */
/* WARNING: Removing unreachable block (ram,0x015b4b7c) */
/* WARNING: Removing unreachable block (ram,0x015b4bb8) */
/* WARNING: Removing unreachable block (ram,0x015b4be4) */
/* WARNING: Removing unreachable block (ram,0x015b4bf8) */
/* WARNING: Removing unreachable block (ram,0x015b4c04) */
/* WARNING: Removing unreachable block (ram,0x015b4c1c) */
/* WARNING: Removing unreachable block (ram,0x015b4c58) */
/* WARNING: Removing unreachable block (ram,0x015b4c84) */
/* WARNING: Removing unreachable block (ram,0x015b4c98) */
/* WARNING: Removing unreachable block (ram,0x015b4ca4) */
/* WARNING: Removing unreachable block (ram,0x015b4cbc) */
/* WARNING: Removing unreachable block (ram,0x015b4cf8) */
/* WARNING: Removing unreachable block (ram,0x015b4d24) */
/* WARNING: Removing unreachable block (ram,0x015b4d38) */
/* WARNING: Removing unreachable block (ram,0x015b4d44) */
/* WARNING: Removing unreachable block (ram,0x015b4d5c) */
/* WARNING: Removing unreachable block (ram,0x015b4d98) */
/* WARNING: Removing unreachable block (ram,0x015b4db4) */
/* WARNING: Removing unreachable block (ram,0x015b4dac) */
/* WARNING: Removing unreachable block (ram,0x01554b70) */
/* WARNING: Removing unreachable block (ram,0x01554bb8) */
/* WARNING: Removing unreachable block (ram,0x01554ba8) */
/* WARNING: Removing unreachable block (ram,0x01554bb0) */
/* WARNING: Removing unreachable block (ram,0x01554bc0) */
/* WARNING: Removing unreachable block (ram,0x01554bc4) */
/* WARNING: Removing unreachable block (ram,0x01554bdc) */
/* WARNING: Removing unreachable block (ram,0x01554be4) */
/* WARNING: Removing unreachable block (ram,0x01554c14) */
/* WARNING: Removing unreachable block (ram,0x01554c98) */
/* WARNING: Removing unreachable block (ram,0x01554ca4) */
/* WARNING: Removing unreachable block (ram,0x01554cac) */
/* WARNING: Removing unreachable block (ram,0x01554d28) */
/* WARNING: Removing unreachable block (ram,0x01554d8c) */
/* WARNING: Removing unreachable block (ram,0x01554d30) */
/* WARNING: Removing unreachable block (ram,0x01554d48) */
/* WARNING: Removing unreachable block (ram,0x01554d50) */
/* WARNING: Removing unreachable block (ram,0x01554e34) */
/* WARNING: Removing unreachable block (ram,0x01554d5c) */
/* WARNING: Removing unreachable block (ram,0x01554d68) */
/* WARNING: Removing unreachable block (ram,0x01554e44) */
/* WARNING: Removing unreachable block (ram,0x01554cc4) */
/* WARNING: Removing unreachable block (ram,0x01554d78) */
/* WARNING: Removing unreachable block (ram,0x01554cc8) */
/* WARNING: Removing unreachable block (ram,0x01554cdc) */
/* WARNING: Removing unreachable block (ram,0x01554ce4) */
/* WARNING: Removing unreachable block (ram,0x01554e0c) */
/* WARNING: Removing unreachable block (ram,0x01554cf0) */
/* WARNING: Removing unreachable block (ram,0x01554cfc) */
/* WARNING: Removing unreachable block (ram,0x01554e1c) */
/* WARNING: Removing unreachable block (ram,0x01554e20) */
/* WARNING: Removing unreachable block (ram,0x01554e48) */
/* WARNING: Removing unreachable block (ram,0x01554c18) */
/* WARNING: Removing unreachable block (ram,0x01554c1c) */
/* WARNING: Removing unreachable block (ram,0x01554c28) */
/* WARNING: Removing unreachable block (ram,0x01554c34) */
/* WARNING: Removing unreachable block (ram,0x01554c3c) */
/* WARNING: Removing unreachable block (ram,0x01554da8) */
/* WARNING: Removing unreachable block (ram,0x01554e58) */
/* WARNING: Removing unreachable block (ram,0x01554db0) */
/* WARNING: Removing unreachable block (ram,0x01554dc8) */
/* WARNING: Removing unreachable block (ram,0x01554dd0) */
/* WARNING: Removing unreachable block (ram,0x01554ea0) */
/* WARNING: Removing unreachable block (ram,0x01554ddc) */
/* WARNING: Removing unreachable block (ram,0x01554de8) */
/* WARNING: Removing unreachable block (ram,0x01554eb0) */
/* WARNING: Removing unreachable block (ram,0x01554c54) */
/* WARNING: Removing unreachable block (ram,0x01554df8) */
/* WARNING: Removing unreachable block (ram,0x01554c58) */
/* WARNING: Removing unreachable block (ram,0x01554c6c) */
/* WARNING: Removing unreachable block (ram,0x01554c74) */
/* WARNING: Removing unreachable block (ram,0x01554e78) */
/* WARNING: Removing unreachable block (ram,0x01554c80) */
/* WARNING: Removing unreachable block (ram,0x01554c8c) */
/* WARNING: Removing unreachable block (ram,0x01554e88) */
/* WARNING: Removing unreachable block (ram,0x01554e8c) */
/* WARNING: Removing unreachable block (ram,0x01554eb4) */
/* WARNING: Removing unreachable block (ram,0x01554bf8) */
/* WARNING: Removing unreachable block (ram,0x01554d08) */
/* WARNING: Removing unreachable block (ram,0x01554bfc) */
/* WARNING: Removing unreachable block (ram,0x01554d18) */
/* WARNING: Removing unreachable block (ram,0x01554d24) */
/* WARNING: Removing unreachable block (ram,0x01554ec8) */
/* WARNING: Removing unreachable block (ram,0x015b4d6c) */
/* WARNING: Removing unreachable block (ram,0x015b4d88) */
/* WARNING: Removing unreachable block (ram,0x015b4ccc) */
/* WARNING: Removing unreachable block (ram,0x015b4ce8) */
/* WARNING: Removing unreachable block (ram,0x015b4c2c) */
/* WARNING: Removing unreachable block (ram,0x015b4c48) */
/* WARNING: Removing unreachable block (ram,0x015b4b8c) */
/* WARNING: Removing unreachable block (ram,0x015b4ba8) */
/* WARNING: Removing unreachable block (ram,0x015b4aec) */
/* WARNING: Removing unreachable block (ram,0x015b4b08) */
/* WARNING: Removing unreachable block (ram,0x01477110) */
/* WARNING: Removing unreachable block (ram,0x01478200) */
/* WARNING: Removing unreachable block (ram,0x01478238) */
/* WARNING: Removing unreachable block (ram,0x014782ac) */
/* WARNING: Removing unreachable block (ram,0x014782cc) */
/* WARNING: Removing unreachable block (ram,0x014784e0) */
/* WARNING: Removing unreachable block (ram,0x0147851c) */
/* WARNING: Removing unreachable block (ram,0x01478524) */
/* WARNING: Removing unreachable block (ram,0x01478548) */
/* WARNING: Removing unreachable block (ram,0x01478554) */
/* WARNING: Removing unreachable block (ram,0x01478558) */
/* WARNING: Removing unreachable block (ram,0x01478580) */
/* WARNING: Removing unreachable block (ram,0x014785c4) */
/* WARNING: Removing unreachable block (ram,0x014785d4) */
/* WARNING: Removing unreachable block (ram,0x01478708) */
/* WARNING: Removing unreachable block (ram,0x01478724) */
/* WARNING: Removing unreachable block (ram,0x0147872c) */
/* WARNING: Removing unreachable block (ram,0x01478748) */
/* WARNING: Removing unreachable block (ram,0x01478754) */
/* WARNING: Removing unreachable block (ram,0x014785dc) */
/* WARNING: Removing unreachable block (ram,0x01478624) */
/* WARNING: Removing unreachable block (ram,0x01478690) */
/* WARNING: Removing unreachable block (ram,0x01478634) */
/* WARNING: Removing unreachable block (ram,0x0147865c) */
/* WARNING: Removing unreachable block (ram,0x014786f8) */
/* WARNING: Removing unreachable block (ram,0x01478664) */
/* WARNING: Removing unreachable block (ram,0x01478698) */
/* WARNING: Removing unreachable block (ram,0x0147869c) */
/* WARNING: Removing unreachable block (ram,0x014786b8) */
/* WARNING: Removing unreachable block (ram,0x014786c4) */
/* WARNING: Removing unreachable block (ram,0x014786cc) */
/* WARNING: Removing unreachable block (ram,0x014786d4) */
/* WARNING: Removing unreachable block (ram,0x014786e0) */
/* WARNING: Removing unreachable block (ram,0x01478678) */
/* WARNING: Removing unreachable block (ram,0x01478700) */
/* WARNING: Removing unreachable block (ram,0x01478704) */
/* WARNING: Removing unreachable block (ram,0x01478680) */
/* WARNING: Removing unreachable block (ram,0x014782d4) */
/* WARNING: Removing unreachable block (ram,0x01478328) */
/* WARNING: Removing unreachable block (ram,0x01478338) */
/* WARNING: Removing unreachable block (ram,0x014784c8) */
/* WARNING: Removing unreachable block (ram,0x01478350) */
/* WARNING: Removing unreachable block (ram,0x01478394) */
/* WARNING: Removing unreachable block (ram,0x014784d0) */
/* WARNING: Removing unreachable block (ram,0x0147839c) */
/* WARNING: Removing unreachable block (ram,0x01478494) */
/* WARNING: Removing unreachable block (ram,0x014784a8) */
/* WARNING: Removing unreachable block (ram,0x014783b8) */
/* WARNING: Removing unreachable block (ram,0x014783c8) */
/* WARNING: Removing unreachable block (ram,0x014783d0) */
/* WARNING: Removing unreachable block (ram,0x014783d4) */
/* WARNING: Removing unreachable block (ram,0x014783e8) */
/* WARNING: Removing unreachable block (ram,0x014784d8) */
/* WARNING: Removing unreachable block (ram,0x014784dc) */
/* WARNING: Removing unreachable block (ram,0x014783f0) */
/* WARNING: Removing unreachable block (ram,0x0147844c) */
/* WARNING: Removing unreachable block (ram,0x01478420) */

ulong Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__OnEnterEngageJoyStickStartTrigger
                (undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  puVar5 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb488d & 1) == 0) {
    func_0x00f78a20(0x3d52780);
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb488d = 1;
  }
  puVar6 = (undefined *)0x1476dd0;
  puVar1 = &stack0xffffffffffffffd0;
  while( true ) {
    uVar4 = auVar7._8_8_;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = 0x3eb4000;
    *(undefined8 *)(puVar1 + -0x20) = uVar4;
    *(long *)(puVar1 + -0x18) = auVar7._0_8_;
    *(undefined1 **)(puVar1 + -0x10) = puVar5;
    *(undefined **)(puVar1 + -8) = puVar6;
    if ((bRam0000000003eb489f & 1) == 0) {
      func_0x00f78a20(0x3d21b08);
      bRam0000000003eb489f = 1;
    }
    *(undefined8 *)(puVar1 + -0x38) = 0;
    if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = Atlas_Contexts_GameContextBase__TryGetLocalHumanPlayerFromCollider
                      (uVar4,puVar1 + -0x38,0);
    if ((int)uVar3 == 0) break;
    if (*(long *)(puVar1 + -0x38) != 0) {
      uVar2 = Atlas_Gameplay_Kart_KartComposite__get_IsRespawning(*(long *)(puVar1 + -0x38),0);
      return (ulong)(uVar2 ^ 1);
    }
    auVar7 = func_0x00f78af4();
    *(undefined8 *)(puVar1 + -0x80) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x78) = unaff_x23;
    *(undefined8 *)(puVar1 + -0x70) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x68) = 0x3eb4000;
    *(undefined8 *)(puVar1 + -0x60) = 0x3d21b08;
    *(undefined8 *)(puVar1 + -0x58) = uVar4;
    *(undefined1 **)(puVar1 + -0x50) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x48) =
         &Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__OnEnterEngageJoystickEndTrigger;
    puVar5 = puVar1 + -0x50;
    if ((bRam0000000003eb488e & 1) == 0) {
      func_0x00f78a20(0x3d52780);
      func_0x00f78a20(0x3d52788);
      func_0x00f78a20(0x3d278d8);
      bRam0000000003eb488e = 1;
    }
    puVar6 = &UNK_01476f38;
    puVar1 = puVar1 + -0x80;
  }
  return uVar3;
}



// ============================================================
// RVA: 0x1476edc | Atlas.Gameplay.FTUE.BaseLayerFTUEDriving.OnEnterEngageJoystickEndTrigger
// ============================================================

/* WARNING: Possible PIC construction at 0x01476fb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147710c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01476fb8) */
/* WARNING: Removing unreachable block (ram,0x01477110) */
/* WARNING: Removing unreachable block (ram,0x01478200) */
/* WARNING: Removing unreachable block (ram,0x01478238) */
/* WARNING: Removing unreachable block (ram,0x014782ac) */
/* WARNING: Removing unreachable block (ram,0x014782cc) */
/* WARNING: Removing unreachable block (ram,0x014784e0) */
/* WARNING: Removing unreachable block (ram,0x0147851c) */
/* WARNING: Removing unreachable block (ram,0x01478524) */
/* WARNING: Removing unreachable block (ram,0x01478548) */
/* WARNING: Removing unreachable block (ram,0x01478554) */
/* WARNING: Removing unreachable block (ram,0x014782d4) */
/* WARNING: Removing unreachable block (ram,0x01478328) */
/* WARNING: Removing unreachable block (ram,0x01478338) */
/* WARNING: Removing unreachable block (ram,0x014784c8) */
/* WARNING: Removing unreachable block (ram,0x01478350) */
/* WARNING: Removing unreachable block (ram,0x01478394) */
/* WARNING: Removing unreachable block (ram,0x014784d0) */
/* WARNING: Removing unreachable block (ram,0x0147839c) */
/* WARNING: Removing unreachable block (ram,0x01478494) */
/* WARNING: Removing unreachable block (ram,0x014784a8) */
/* WARNING: Removing unreachable block (ram,0x014783b8) */
/* WARNING: Removing unreachable block (ram,0x014783c8) */
/* WARNING: Removing unreachable block (ram,0x014783d0) */
/* WARNING: Removing unreachable block (ram,0x014783d4) */
/* WARNING: Removing unreachable block (ram,0x014783e8) */
/* WARNING: Removing unreachable block (ram,0x014784d8) */
/* WARNING: Removing unreachable block (ram,0x014784dc) */
/* WARNING: Removing unreachable block (ram,0x014783f0) */
/* WARNING: Removing unreachable block (ram,0x0147844c) */
/* WARNING: Removing unreachable block (ram,0x01478420) */

ulong Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__OnEnterEngageJoystickEndTrigger
                (long param_1,undefined8 param_2)

{
  uint uVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  int extraout_w1;
  undefined4 uVar10;
  undefined8 *extraout_x8;
  undefined8 uVar11;
  ulong *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *puVar12;
  ulong unaff_x24;
  undefined *puVar13;
  undefined8 uVar14;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar4 = (undefined8 *)&stack0xffffffffffffffc0;
  lVar5 = param_1;
  if ((bRam0000000003eb488e & 1) == 0) {
    func_0x00f78a20(0x3d52780);
    func_0x00f78a20(0x3d52788);
    lVar5 = func_0x00f78a20(0x3d278d8);
    bRam0000000003eb488e = 1;
  }
  uVar6 = /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$IsValidHumanCollision*/ func_0x01476e40(lVar5,param_2);
  if ((int)uVar6 == 0) {
    return uVar6;
  }
  if ((*(char *)(param_1 + 0xe0) == '\0') &&
     ((*(int *)(param_1 + 0x8c) < *(int *)(param_1 + 0x88) || (*(char *)(param_1 + 0x90) != '\0'))))
  {
    lVar5 = *(long *)(param_1 + 0xb8);
    uVar11 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
    /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar11,param_1,uRam0000000003d52780,0);
    if (lVar5 == 0) goto LAB_01477058;
    /*Atlas.Gameplay.HitVolumeBehaviour$$add_OnEnter*/ func_0x015b49e0(lVar5,uVar11,0);
    puVar4 = &uStack_110;
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
    /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetSection*/ func_0x01478c3c(&uStack_90,param_1,*(undefined8 *)(param_1 + 0xa8));
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    uStack_a8 = uStack_58;
    uStack_b0 = uStack_60;
    uStack_98 = uStack_48;
    uStack_a0 = uStack_50;
    uStack_b8 = uStack_68;
    uStack_c0 = uStack_70;
    uStack_f8 = uStack_58;
    uStack_100 = uStack_60;
    uStack_e8 = uStack_48;
    uStack_f0 = uStack_50;
    uStack_108 = uStack_68;
    uStack_110 = uStack_70;
    /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$CallReactions*/ func_0x01475e24(param_1,&uStack_110);
    /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$RespawnHumanPlayerAtLocator*/ func_0x014787a0(param_1,unaff_x24);
    /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$RespawnAIsAtLocators*/ func_0x01478874(param_1,unaff_x23);
    uVar11 = *(undefined8 *)(param_1 + 0xa8);
    puVar13 = &UNK_01477110;
    puVar12 = unaff_x23;
  }
  else {
    lVar5 = Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__get_BaseLayerFtueDrivingDefinition(param_1);
    if (lVar5 == 0) {
LAB_01477058:
      lVar5 = func_0x00f78af4();
      if (*(int *)(lVar5 + 0x88) <= *(int *)(lVar5 + 0x8c)) {
        return (ulong)(*(char *)(lVar5 + 0x90) != '\0');
      }
      return 1;
    }
    uVar11 = *(undefined8 *)(lVar5 + 0xd0);
    bVar2 = *(byte *)(lVar5 + 0xe8);
    unaff_x24 = (ulong)bVar2;
    uVar1 = *(uint *)(lVar5 + 0xec);
    unaff_x23 = *(undefined8 **)(param_1 + 0xc0);
    unaff_x22 = (ulong *)func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
    /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(unaff_x22,param_1,uRam0000000003d52788,0);
    if (unaff_x23 == (undefined8 *)0x0) goto LAB_01477058;
    /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(unaff_x23,unaff_x22,0);
    *(uint *)(param_1 + 0x88) = uVar1;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(bool *)(param_1 + 0x90) = bVar2 != 0;
    puVar13 = (undefined *)0x1476fb8;
    puVar12 = (undefined8 *)(ulong)uVar1;
  }
  *(ulong *)((long)puVar4 + -0x40) = unaff_x24;
  *(undefined8 **)((long)puVar4 + -0x38) = puVar12;
  *(ulong **)((long)puVar4 + -0x30) = unaff_x22;
  *(undefined8 **)((long)puVar4 + -0x28) = unaff_x23;
  *(undefined8 *)((long)puVar4 + -0x20) = uVar11;
  *(long *)((long)puVar4 + -0x18) = param_1;
  *(undefined1 **)((long)puVar4 + -0x10) = &stack0xfffffffffffffff0;
  *(undefined **)((long)puVar4 + -8) = puVar13;
  lVar5 = 0x3eb4000;
  if ((bRam0000000003eb48a3 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb48a3 = 1;
  }
  *(undefined8 *)((long)puVar4 + -0x98) = 0;
  *(undefined4 *)((long)puVar4 + -0xa0) = 0;
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 0x30), lVar7 != 0)) {
    unaff_x22 = (ulong *)0x3d24e08;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090((undefined1 *)((long)puVar4 + -0xf0),lVar7,uRam0000000003d3cd70);
    *(undefined8 *)((long)puVar4 + -0x68) = *(undefined8 *)((long)puVar4 + -200);
    *(undefined8 *)((long)puVar4 + -0x70) = *(undefined8 *)((long)puVar4 + -0xd0);
    *(undefined8 *)((long)puVar4 + -0x58) = *(undefined8 *)((long)puVar4 + -0xb8);
    *(undefined8 *)((long)puVar4 + -0x60) = *(undefined8 *)((long)puVar4 + -0xc0);
    *(undefined8 *)((long)puVar4 + -0x50) = *(undefined8 *)((long)puVar4 + -0xb0);
    *(undefined8 *)((long)puVar4 + -0x88) = *(undefined8 *)((long)puVar4 + -0xe8);
    *(undefined8 *)((long)puVar4 + -0x90) = *(undefined8 *)((long)puVar4 + -0xf0);
    *(undefined8 *)((long)puVar4 + -0x78) = *(undefined8 *)((long)puVar4 + -0xd8);
    *(undefined8 *)((long)puVar4 + -0x80) = *(undefined8 *)((long)puVar4 + -0xe0);
code_r0x01478624:
    do {
      uVar6 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8((undefined1 *)((long)puVar4 + -0x90),uRam0000000003d33320);
      if ((uVar6 & 1) == 0) goto code_r0x01478690;
      uVar11 = *(undefined8 *)((long)puVar4 + -0x80);
      *(undefined8 *)((long)puVar4 + -0xf0) = *(undefined8 *)((long)puVar4 + -0x78);
      uVar8 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,(undefined1 *)((long)puVar4 + -0xf0));
      uVar6 = /*Atlas.StringID$$Equals*/ func_0x015057f8(param_1 + 0xa8,uVar8,0);
      if ((uVar6 & 1) != 0) {
        if (*(long *)(param_1 + 0x60) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar6 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(param_1 + 0x60),uVar11,
                                  (undefined1 *)((long)puVar4 + -0x98),0);
          if ((uVar6 & 1) == 0) {
            uVar10 = 0x86;
            goto code_r0x0147869c;
          }
          if (*(long *)((long)puVar4 + -0x98) != 0) {
            /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$RemoveBaseListener*/ func_0x014765a4(param_1,*(undefined8 *)(*(long *)((long)puVar4 + -0x98) + 0x18));
            goto code_r0x01478624;
          }
          func_0x00f78af4();
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1478708);
        (*pcVar3)();
      }
    } while( true );
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar9 = (long *)___cxa_begin_catch();
    lVar5 = *plVar9;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)puVar4 + -0x90),*puVar12);
    if (lVar5 == 0) goto code_r0x014786b8;
    func_0x00f78ac0(lVar5,0);
  }
  lVar7 = __Unwind_Resume();
  *(long *)((long)puVar4 + -0x110) = lVar5;
  *(long *)((long)puVar4 + -0x108) = param_1;
  *(undefined1 **)((long)puVar4 + -0x100) = (undefined1 *)((long)puVar4 + -0x10);
  *(undefined **)((long)puVar4 + -0xf8) =
       &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
  uVar6 = /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetSection*/ func_0x01478c3c((undefined1 *)((long)puVar4 + -0x170),lVar7,*(undefined8 *)(lVar7 + 0xa8))
  ;
  uVar11 = *(undefined8 *)((long)puVar4 + -0x150);
  uVar14 = *(undefined8 *)((long)puVar4 + -0x138);
  uVar8 = *(undefined8 *)((long)puVar4 + -0x140);
  extraout_x8[5] = *(undefined8 *)((long)puVar4 + -0x148);
  extraout_x8[4] = uVar11;
  extraout_x8[7] = uVar14;
  extraout_x8[6] = uVar8;
  uVar11 = *(undefined8 *)((long)puVar4 + -0x130);
  uVar14 = *(undefined8 *)((long)puVar4 + -0x118);
  uVar8 = *(undefined8 *)((long)puVar4 + -0x120);
  extraout_x8[9] = *(undefined8 *)((long)puVar4 + -0x128);
  extraout_x8[8] = uVar11;
  extraout_x8[0xb] = uVar14;
  extraout_x8[10] = uVar8;
  uVar11 = *(undefined8 *)((long)puVar4 + -0x170);
  uVar14 = *(undefined8 *)((long)puVar4 + -0x158);
  uVar8 = *(undefined8 *)((long)puVar4 + -0x160);
  extraout_x8[1] = *(undefined8 *)((long)puVar4 + -0x168);
  *extraout_x8 = uVar11;
  extraout_x8[3] = uVar14;
  extraout_x8[2] = uVar8;
  return uVar6;
code_r0x01478690:
  uVar10 = 0x7b;
code_r0x0147869c:
  *(undefined4 *)((long)puVar4 + -0xa8) = uVar10;
  uVar6 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)puVar4 + -0x90),uRam0000000003d33318);
  if (*(int *)((long)puVar4 + -0xa8) == 0x86) {
    return uVar6;
  }
code_r0x014786b8:
  uVar6 = *unaff_x22;
  if (((*(ushort *)(uVar6 + 0x132) >> 10 & 1) != 0) && (*(int *)(uVar6 + 0xe0) == 0)) {
    func_0x00f78ad0();
    uVar6 = *unaff_x22;
  }
  *(undefined8 *)(param_1 + 0xa8) = **(undefined8 **)(uVar6 + 0xb8);
  return uVar6;
}



// ============================================================
// RVA: 0x1477160 | Atlas.Gameplay.FTUE.BaseLayerFTUEDriving.OnEnterDriftForLengthStartTrigger
// ============================================================

/* WARNING: Possible PIC construction at 0x014771f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014772a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014773c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147710c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014773c4) */
/* WARNING: Removing unreachable block (ram,0x014773d0) */
/* WARNING: Removing unreachable block (ram,0x014773d8) */
/* WARNING: Removing unreachable block (ram,0x014773e0) */
/* WARNING: Removing unreachable block (ram,0x014772a8) */
/* WARNING: Removing unreachable block (ram,0x014772dc) */
/* WARNING: Removing unreachable block (ram,0x014771fc) */
/* WARNING: Removing unreachable block (ram,0x01477210) */
/* WARNING: Removing unreachable block (ram,0x01477218) */
/* WARNING: Removing unreachable block (ram,0x01477110) */
/* WARNING: Removing unreachable block (ram,0x01478200) */
/* WARNING: Removing unreachable block (ram,0x01478238) */
/* WARNING: Removing unreachable block (ram,0x014782ac) */
/* WARNING: Removing unreachable block (ram,0x014782cc) */
/* WARNING: Removing unreachable block (ram,0x014784e0) */
/* WARNING: Removing unreachable block (ram,0x0147851c) */
/* WARNING: Removing unreachable block (ram,0x01478524) */
/* WARNING: Removing unreachable block (ram,0x01478548) */
/* WARNING: Removing unreachable block (ram,0x01478554) */
/* WARNING: Removing unreachable block (ram,0x014782d4) */
/* WARNING: Removing unreachable block (ram,0x01478328) */
/* WARNING: Removing unreachable block (ram,0x01478338) */
/* WARNING: Removing unreachable block (ram,0x014784c8) */
/* WARNING: Removing unreachable block (ram,0x01478350) */
/* WARNING: Removing unreachable block (ram,0x01478394) */
/* WARNING: Removing unreachable block (ram,0x014784d0) */
/* WARNING: Removing unreachable block (ram,0x0147839c) */
/* WARNING: Removing unreachable block (ram,0x01478494) */
/* WARNING: Removing unreachable block (ram,0x014784a8) */
/* WARNING: Removing unreachable block (ram,0x014783b8) */
/* WARNING: Removing unreachable block (ram,0x014783c8) */
/* WARNING: Removing unreachable block (ram,0x014783d0) */
/* WARNING: Removing unreachable block (ram,0x014783d4) */
/* WARNING: Removing unreachable block (ram,0x014783e8) */
/* WARNING: Removing unreachable block (ram,0x014784d8) */
/* WARNING: Removing unreachable block (ram,0x014784dc) */
/* WARNING: Removing unreachable block (ram,0x014783f0) */
/* WARNING: Removing unreachable block (ram,0x0147844c) */
/* WARNING: Removing unreachable block (ram,0x01478420) */

void Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__OnEnterDriftForLengthStartTrigger
               (long param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  undefined8 ****ppppuVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 **ppuVar13;
  int extraout_w1;
  undefined4 uVar14;
  undefined8 *extraout_x8;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  long *plVar20;
  undefined8 ***pppuVar21;
  undefined *puVar22;
  undefined8 **ppuVar23;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  code *pcVar24;
  long lVar25;
  undefined8 ****ppppuVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  long lStack_188;
  undefined8 ***pppuStack_140;
  undefined8 uStack_138;
  undefined8 *****pppppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined1 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined8 ***pppuStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 ****ppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 ****ppppuStack_b0;
  undefined8 uStack_a8;
  undefined1 ****ppppuStack_a0;
  undefined *puStack_98;
  undefined8 ***pppuStack_70;
  undefined *puStack_68;
  undefined1 ***pppuStack_40;
  undefined *puStack_38;
  
  lVar7 = param_1;
  if ((bRam0000000003eb488f & 1) == 0) {
    func_0x00f78a20(0x3d52778);
    lVar7 = func_0x00f78a20(0x3d278d8);
    bRam0000000003eb488f = 1;
  }
  iVar5 = /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$IsValidHumanCollision*/ func_0x01476e40(lVar7,param_2);
  if ((iVar5 == 0) || (*(char *)(param_1 + 0xe0) == '\0')) {
    return;
  }
  lVar7 = *(long *)(param_1 + 200);
  uVar8 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8);
  /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar8,param_1,uRam0000000003d52778,0);
  pppuStack_40 = (undefined1 ***)&stack0xfffffffffffffff0;
  if (lVar7 != 0) {
    puStack_38 = (undefined *)0x14771fc;
    if ((bRam0000000003eb5277 & 1) == 0) {
      func_0x00f78a20(0x3d278d8,uVar8,0);
      bRam0000000003eb5277 = 1;
    }
    plVar20 = (long *)(lVar7 + 0x20);
    lVar7 = *plVar20;
    while ((plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,uVar8,0), plVar11 == (long *)0x0 ||
           (*plVar11 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
      lVar12 = func_0x00ff0f44(plVar20,plVar11,lVar7);
      bVar4 = lVar7 == lVar12;
      lVar7 = lVar12;
      if (bVar4) {
        return;
      }
    }
    auVar29 = func_0x00f78e5c(plVar11);
    uVar8 = auVar29._8_8_;
    puStack_68 = &Atlas_Gameplay_HitVolumeBehaviour__add_OnStay;
    pppuStack_70 = &pppuStack_40;
    if ((bRam0000000003eb5278 & 1) == 0) {
      func_0x00f78a20(0x3d278d8);
      bRam0000000003eb5278 = 1;
    }
    plVar20 = (long *)(auVar29._0_8_ + 0x28);
    lVar7 = *plVar20;
    while ((plVar11 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,uVar8,0), plVar11 == (long *)0x0 ||
           (*plVar11 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
      lVar12 = func_0x00ff0f44(plVar20,plVar11,lVar7);
      bVar4 = lVar7 == lVar12;
      lVar7 = lVar12;
      if (bVar4) {
        return;
      }
    }
    auVar29 = func_0x00f78e5c(plVar11);
    uVar9 = auVar29._8_8_;
    uStack_c0 = 0x3d278d8;
    puStack_98 = &Atlas_Gameplay_HitVolumeBehaviour__remove_OnStay;
    lStack_b8 = lVar7;
    ppppuStack_b0 = (undefined8 ****)plVar20;
    uStack_a8 = uVar8;
    ppppuStack_a0 = (undefined1 ****)&pppuStack_70;
    if ((bRam0000000003eb5279 & 1) == 0) {
      func_0x00f78a20(0x3d278d8);
      bRam0000000003eb5279 = 1;
    }
    plVar20 = (long *)(auVar29._0_8_ + 0x28);
    lVar7 = *plVar20;
    while ((plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,uVar9,0), plVar11 == (long *)0x0 ||
           (*plVar11 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
      lVar12 = func_0x00ff0f44(plVar20,plVar11,lVar7);
      bVar4 = lVar7 == lVar12;
      lVar7 = lVar12;
      if (bVar4) {
        return;
      }
    }
    auVar29 = func_0x00f78e5c(plVar11);
    uVar8 = auVar29._8_8_;
    pppuStack_f0 = (undefined8 ***)0x3d278d8;
    puStack_c8 = &Atlas_Gameplay_HitVolumeBehaviour__add_OnExit;
    lStack_e8 = lVar7;
    plStack_e0 = plVar20;
    uStack_d8 = uVar9;
    ppppuStack_d0 = &ppppuStack_a0;
    if ((bRam0000000003eb527a & 1) == 0) {
      func_0x00f78a20(0x3d278d8);
      bRam0000000003eb527a = 1;
    }
    plVar20 = (long *)(auVar29._0_8_ + 0x30);
    lVar7 = *plVar20;
    while ((plVar11 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,uVar8,0), plVar11 == (long *)0x0 ||
           (*plVar11 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
      lVar12 = func_0x00ff0f44(plVar20,plVar11,lVar7);
      bVar4 = lVar7 == lVar12;
      lVar7 = lVar12;
      if (bVar4) {
        return;
      }
    }
    auVar29 = func_0x00f78e5c(plVar11);
    uStack_120 = 0x3d278d8;
    puStack_f8 = &Atlas_Gameplay_HitVolumeBehaviour__remove_OnExit;
    lStack_118 = lVar7;
    plStack_110 = plVar20;
    uStack_108 = uVar8;
    pppppuStack_100 = (undefined1 *****)&ppppuStack_d0;
    if ((bRam0000000003eb527b & 1) == 0) {
      func_0x00f78a20(0x3d278d8);
      bRam0000000003eb527b = 1;
    }
    pppuVar21 = (undefined8 ***)(auVar29._0_8_ + 0x30);
    ppuVar23 = *pppuVar21;
    while ((plVar20 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(ppuVar23,auVar29._8_8_,0), plVar20 == (long *)0x0 ||
           (*plVar20 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
      ppuVar13 = (undefined8 **)func_0x00ff0f44(pppuVar21,plVar20,ppuVar23);
      bVar4 = ppuVar23 == ppuVar13;
      ppuVar23 = ppuVar13;
      if (bVar4) {
        return;
      }
    }
    auVar30 = func_0x00f78e5c(plVar20);
    plVar20 = auVar30._8_8_;
    lVar7 = auVar30._0_8_;
    lVar12 = *(long *)(lVar7 + 0x20);
    if (lVar12 == 0) {
      return;
    }
    pppuStack_140 = pppuVar21;
    uStack_138 = auVar29._8_8_;
    pppppuStack_130 = &pppppuStack_100;
    puStack_128 = &Atlas_Gameplay_HitVolumeBehaviour__OnTriggerEnter;
    lStack_188 = lVar12;
    lVar15 = *(long *)(lVar12 + 0x68);
    if (lVar15 == 0) {
      plVar11 = &lStack_188;
      lVar25 = 1;
    }
    else {
      lVar25 = *(long *)(lVar15 + 0x18);
      if (lVar25 == 0) {
        return;
      }
      plVar11 = (long *)(lVar15 + 0x20);
    }
    lVar15 = 0;
    do {
      lVar16 = plVar11[lVar15];
      pcVar24 = *(code **)(lVar16 + 0x10);
      plVar1 = *(long **)(lVar16 + 0x20);
      lVar16 = *(long *)(lVar16 + 0x28);
      if (*(short *)(lVar16 + 0x48) == -1) {
        func_0x00f78ad8(lVar16);
      }
      iVar5 = func_0x00f78a4c(lVar16);
      bVar4 = *(char *)(lVar16 + 0x4a) == '\x02';
      if (iVar5 == 0) {
        if (bVar4) {
          if (plVar1 == (long *)0x0) {
code_r0x01554d08:
            (*pcVar24)(plVar20,lVar7,lVar16);
          }
          else {
            if (((*(short *)(lVar16 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
               (*(long *)(lVar12 + 0x18) == 0)) goto code_r0x01554bfc;
            iVar5 = func_0x00f78a44(lVar16);
            iVar6 = func_0x00f78ec0(lVar16);
            if (iVar5 == 0) {
              uVar2 = *(ushort *)(lVar16 + 0x48);
              if (iVar6 == 0) {
                lVar16 = *plVar1 + (ulong)uVar2 * 0x10;
                (**(code **)(lVar16 + 0x138))(plVar1,plVar20,lVar7,*(undefined8 *)(lVar16 + 0x140));
                goto code_r0x01554d18;
              }
              lVar16 = func_0x00f78a48(lVar16);
              lVar17 = *plVar1;
              uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
              if (uVar18 != 0) {
                piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == lVar16) {
                    puVar10 = (undefined8 *)
                              (lVar17 + (long)(int)(*piVar19 + (uint)uVar2) * 0x10 + 0x138);
                    goto code_r0x01554eb0;
                  }
                  piVar19 = piVar19 + 4;
                  uVar18 = uVar18 - 1;
                } while (uVar18 != 0);
              }
              puVar10 = (undefined8 *)func_0x00fac1f0(plVar1,lVar16,(ulong)uVar2);
code_r0x01554eb0:
              pcVar24 = (code *)*puVar10;
              puVar10 = (undefined8 *)puVar10[1];
            }
            else {
              if (iVar6 == 0) {
                uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar16 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar17 = *plVar1;
                uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
                if (uVar18 != 0) {
                  piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == *(long *)(lVar16 + 0x18)) {
                      lVar17 = lVar17 + (long)(int)(*piVar19 + (uint)*(ushort *)(lVar16 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x01554e88;
                    }
                    piVar19 = piVar19 + 4;
                    uVar18 = uVar18 - 1;
                  } while (uVar18 != 0);
                }
                lVar17 = func_0x00fac1f0(plVar1);
code_r0x01554e88:
                uVar8 = *(undefined8 *)(lVar17 + 8);
              }
              puVar10 = (undefined8 *)func_0x00f78acc(uVar8,lVar16);
              pcVar24 = (code *)*puVar10;
            }
            (*pcVar24)(plVar1,plVar20,lVar7,puVar10);
          }
        }
        else {
          if ((*(short *)(lVar16 + 0x48) == -1) || (*(long *)(lVar12 + 0x18) == 0))
          goto code_r0x01554d08;
          iVar5 = func_0x00f78a44(lVar16);
          iVar6 = func_0x00f78ec0(lVar16);
          if (iVar5 == 0) {
            uVar2 = *(ushort *)(lVar16 + 0x48);
            if (iVar6 == 0) {
              lVar16 = *plVar20 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar16 + 0x138))(plVar20,lVar7,*(undefined8 *)(lVar16 + 0x140));
              goto code_r0x01554d18;
            }
            lVar16 = func_0x00f78a48(lVar16);
            lVar17 = *plVar20;
            uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
            if (uVar18 != 0) {
              piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == lVar16) {
                  puVar10 = (undefined8 *)
                            (lVar17 + (long)(int)(*piVar19 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01554e44;
                }
                piVar19 = piVar19 + 4;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            puVar10 = (undefined8 *)func_0x00fac1f0(plVar20,lVar16,(ulong)uVar2);
code_r0x01554e44:
            pcVar24 = (code *)*puVar10;
            puVar10 = (undefined8 *)puVar10[1];
          }
          else {
            if (iVar6 == 0) {
              uVar8 = *(undefined8 *)(*plVar20 + (ulong)*(ushort *)(lVar16 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar17 = *plVar20;
              uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
              if (uVar18 != 0) {
                piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)(lVar16 + 0x18)) {
                    lVar17 = lVar17 + (long)(int)(*piVar19 + (uint)*(ushort *)(lVar16 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01554e1c;
                  }
                  piVar19 = piVar19 + 4;
                  uVar18 = uVar18 - 1;
                } while (uVar18 != 0);
              }
              lVar17 = func_0x00fac1f0(plVar20);
code_r0x01554e1c:
              uVar8 = *(undefined8 *)(lVar17 + 8);
            }
            puVar10 = (undefined8 *)func_0x00f78acc(uVar8,lVar16);
            pcVar24 = (code *)*puVar10;
          }
          (*pcVar24)(plVar20,lVar7,puVar10);
        }
      }
      else {
        if (bVar4) goto code_r0x01554d08;
code_r0x01554bfc:
        (*pcVar24)(plVar1,plVar20,lVar7,lVar16);
      }
code_r0x01554d18:
      lVar15 = lVar15 + 1;
      if (lVar15 == lVar25) {
        return;
      }
    } while( true );
  }
  auVar29 = func_0x00f78af4();
  lVar12 = auVar29._0_8_;
  puStack_38 = &Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__OnEnterDriftForLengthEndTrigger;
  lVar7 = lVar12;
  if ((bRam0000000003eb4890 & 1) == 0) {
    func_0x00f78a20(0x3d52770);
    func_0x00f78a20(0x3d52778);
    lVar7 = func_0x00f78a20(0x3d278d8);
    bRam0000000003eb4890 = 1;
  }
  iVar5 = /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$IsValidHumanCollision*/ func_0x01476e40(lVar7,auVar29._8_8_);
  if (iVar5 == 0) {
    return;
  }
  if ((*(char *)(lVar12 + 0xe1) == '\0') &&
     ((*(int *)(lVar12 + 0x8c) < *(int *)(lVar12 + 0x88) || (*(char *)(lVar12 + 0x90) != '\0')))) {
    lVar7 = *(long *)(lVar12 + 200);
    uVar8 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8);
    /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar8,lVar12,uRam0000000003d52778,0);
    if (lVar7 == 0) {
      puVar27 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToNoSection;
      lVar12 = func_0x00f78af4();
      goto code_r0x01477378;
    }
    /*Atlas.Gameplay.HitVolumeBehaviour$$add_OnEnter*/ func_0x015b49e0(lVar7,uVar8,0);
    ppppuVar3 = &pppuStack_140;
    ppppuVar26 = (undefined8 ****)&pppuStack_40;
    *(int *)(lVar12 + 0x8c) = *(int *)(lVar12 + 0x8c) + 1;
    /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetSection*/ func_0x01478c3c(&uStack_c0,lVar12,*(undefined8 *)(lVar12 + 0xa8));
    puVar22 = puStack_68;
    pppuVar21 = pppuStack_70;
    uStack_108 = lStack_b8;
    plStack_110 = (long *)uStack_c0;
    puStack_f8 = (undefined *)uStack_a8;
    pppppuStack_100 = (undefined1 *****)ppppuStack_b0;
    lStack_e8 = (long)puStack_98;
    pppuStack_f0 = ppppuStack_a0;
    uStack_138 = puStack_98;
    pppuStack_140 = ppppuStack_a0;
    /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$CallReactions*/ func_0x01475e24(lVar12,&pppuStack_140);
    /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$RespawnHumanPlayerAtLocator*/ func_0x014787a0(lVar12,pppuVar21);
    /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$RespawnAIsAtLocators*/ func_0x01478874(lVar12,puVar22);
    uVar8 = *(undefined8 *)(lVar12 + 0xa8);
    puVar27 = &UNK_01477110;
  }
  else {
    puVar27 = &UNK_014772a8;
code_r0x01477378:
    ppppuVar3 = (undefined8 ****)&stack0xffffffffffffff70;
    ppppuVar26 = &pppuStack_70;
    puVar22 = (undefined *)0x3eb4000;
    uVar8 = 0x3d24e08;
    pppuStack_70 = &pppuStack_40;
    puStack_68 = puVar27;
    if ((bRam0000000003eb489e & 1) == 0) {
      func_0x00f78a20(0x3d24e08);
      bRam0000000003eb489e = 1;
    }
    *(undefined1 *)(lVar12 + 0x90) = 0;
    *(undefined8 *)(lVar12 + 0x88) = 0;
    puVar27 = &UNK_014773c4;
  }
  *(undefined8 *)((long)ppppuVar3 + -0x40) = unaff_x24;
  *(undefined8 **)((long)ppppuVar3 + -0x38) = unaff_x23;
  *(long **)((long)ppppuVar3 + -0x30) = unaff_x22;
  *(undefined **)((long)ppppuVar3 + -0x28) = puVar22;
  *(undefined8 *)((long)ppppuVar3 + -0x20) = uVar8;
  *(long *)((long)ppppuVar3 + -0x18) = lVar12;
  *(undefined8 *****)((long)ppppuVar3 + -0x10) = ppppuVar26;
  *(undefined **)((long)ppppuVar3 + -8) = puVar27;
  lVar7 = 0x3eb4000;
  if ((bRam0000000003eb48a3 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb48a3 = 1;
  }
  *(undefined8 *)((long)ppppuVar3 + -0x98) = 0;
  *(undefined4 *)((long)ppppuVar3 + -0xa0) = 0;
  if ((*(long *)(lVar12 + 0x40) != 0) &&
     (lVar15 = *(long *)(*(long *)(lVar12 + 0x40) + 0x30), lVar15 != 0)) {
    unaff_x22 = (long *)0x3d24e08;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090((undefined1 *)((long)ppppuVar3 + -0xf0),lVar15,uRam0000000003d3cd70);
    *(undefined8 *)((long)ppppuVar3 + -0x68) = *(undefined8 *)((long)ppppuVar3 + -200);
    *(undefined8 *)((long)ppppuVar3 + -0x70) = *(undefined8 *)((long)ppppuVar3 + -0xd0);
    *(undefined8 *)((long)ppppuVar3 + -0x58) = *(undefined8 *)((long)ppppuVar3 + -0xb8);
    *(undefined8 *)((long)ppppuVar3 + -0x60) = *(undefined8 *)((long)ppppuVar3 + -0xc0);
    *(undefined8 *)((long)ppppuVar3 + -0x50) = *(undefined8 *)((long)ppppuVar3 + -0xb0);
    *(undefined8 *)((long)ppppuVar3 + -0x88) = *(undefined8 *)((long)ppppuVar3 + -0xe8);
    *(undefined8 *)((long)ppppuVar3 + -0x90) = *(undefined8 *)((long)ppppuVar3 + -0xf0);
    *(undefined8 *)((long)ppppuVar3 + -0x78) = *(undefined8 *)((long)ppppuVar3 + -0xd8);
    *(undefined8 *)((long)ppppuVar3 + -0x80) = *(undefined8 *)((long)ppppuVar3 + -0xe0);
code_r0x01478624:
    do {
      uVar18 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8((undefined1 *)((long)ppppuVar3 + -0x90),uRam0000000003d33320);
      if ((uVar18 & 1) == 0) goto code_r0x01478690;
      uVar8 = *(undefined8 *)((long)ppppuVar3 + -0x80);
      *(undefined8 *)((long)ppppuVar3 + -0xf0) = *(undefined8 *)((long)ppppuVar3 + -0x78);
      uVar9 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,(undefined1 *)((long)ppppuVar3 + -0xf0));
      uVar18 = /*Atlas.StringID$$Equals*/ func_0x015057f8(lVar12 + 0xa8,uVar9,0);
      if ((uVar18 & 1) != 0) {
        if (*(long *)(lVar12 + 0x60) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar18 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar12 + 0x60),uVar8,
                                   (undefined1 *)((long)ppppuVar3 + -0x98),0);
          if ((uVar18 & 1) == 0) {
            uVar14 = 0x86;
            goto code_r0x0147869c;
          }
          if (*(long *)((long)ppppuVar3 + -0x98) != 0) {
            /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$RemoveBaseListener*/ func_0x014765a4(lVar12,*(undefined8 *)(*(long *)((long)ppppuVar3 + -0x98) + 0x18));
            goto code_r0x01478624;
          }
          func_0x00f78af4();
        }
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x1478708);
        (*pcVar24)();
      }
    } while( true );
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar20 = (long *)___cxa_begin_catch();
    lVar7 = *plVar20;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)ppppuVar3 + -0x90),*unaff_x23);
    if (lVar7 == 0) {
code_r0x014786b8:
      lVar7 = *unaff_x22;
      if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar7 = *unaff_x22;
      }
      *(undefined8 *)(lVar12 + 0xa8) = **(undefined8 **)(lVar7 + 0xb8);
      return;
    }
    func_0x00f78ac0(lVar7,0);
  }
  lVar15 = __Unwind_Resume();
  *(long *)((long)ppppuVar3 + -0x110) = lVar7;
  *(long *)((long)ppppuVar3 + -0x108) = lVar12;
  *(undefined1 **)((long)ppppuVar3 + -0x100) = (undefined1 *)((long)ppppuVar3 + -0x10);
  *(undefined **)((long)ppppuVar3 + -0xf8) =
       &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
  /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetSection*/ func_0x01478c3c((undefined1 *)((long)ppppuVar3 + -0x170),lVar15,*(undefined8 *)(lVar15 + 0xa8));
  uVar8 = *(undefined8 *)((long)ppppuVar3 + -0x150);
  uVar28 = *(undefined8 *)((long)ppppuVar3 + -0x138);
  uVar9 = *(undefined8 *)((long)ppppuVar3 + -0x140);
  extraout_x8[5] = *(undefined8 *)((long)ppppuVar3 + -0x148);
  extraout_x8[4] = uVar8;
  extraout_x8[7] = uVar28;
  extraout_x8[6] = uVar9;
  uVar8 = *(undefined8 *)((long)ppppuVar3 + -0x130);
  uVar28 = *(undefined8 *)((long)ppppuVar3 + -0x118);
  uVar9 = *(undefined8 *)((long)ppppuVar3 + -0x120);
  extraout_x8[9] = *(undefined8 *)((long)ppppuVar3 + -0x128);
  extraout_x8[8] = uVar8;
  extraout_x8[0xb] = uVar28;
  extraout_x8[10] = uVar9;
  uVar8 = *(undefined8 *)((long)ppppuVar3 + -0x170);
  uVar28 = *(undefined8 *)((long)ppppuVar3 + -0x158);
  uVar9 = *(undefined8 *)((long)ppppuVar3 + -0x160);
  extraout_x8[1] = *(undefined8 *)((long)ppppuVar3 + -0x168);
  *extraout_x8 = uVar8;
  extraout_x8[3] = uVar28;
  extraout_x8[2] = uVar9;
  return;
code_r0x01478690:
  uVar14 = 0x7b;
code_r0x0147869c:
  *(undefined4 *)((long)ppppuVar3 + -0xa8) = uVar14;
  /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)ppppuVar3 + -0x90),uRam0000000003d33318);
  if (*(int *)((long)ppppuVar3 + -0xa8) == 0x86) {
    return;
  }
  goto code_r0x014786b8;
}



// ============================================================
// RVA: 0x147723c | Atlas.Gameplay.FTUE.BaseLayerFTUEDriving.OnEnterDriftForLengthEndTrigger
// ============================================================

/* WARNING: Possible PIC construction at 0x014772a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014773c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147710c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014773c4) */
/* WARNING: Removing unreachable block (ram,0x014773d0) */
/* WARNING: Removing unreachable block (ram,0x014773d8) */
/* WARNING: Removing unreachable block (ram,0x014773e0) */
/* WARNING: Removing unreachable block (ram,0x014772a8) */
/* WARNING: Removing unreachable block (ram,0x014772dc) */
/* WARNING: Removing unreachable block (ram,0x015b4a80) */
/* WARNING: Removing unreachable block (ram,0x015b4aa4) */
/* WARNING: Removing unreachable block (ram,0x015b4ab8) */
/* WARNING: Removing unreachable block (ram,0x015b4ac4) */
/* WARNING: Removing unreachable block (ram,0x015b4adc) */
/* WARNING: Removing unreachable block (ram,0x015b4b18) */
/* WARNING: Removing unreachable block (ram,0x015b4b44) */
/* WARNING: Removing unreachable block (ram,0x015b4b58) */
/* WARNING: Removing unreachable block (ram,0x015b4b64) */
/* WARNING: Removing unreachable block (ram,0x015b4b7c) */
/* WARNING: Removing unreachable block (ram,0x015b4bb8) */
/* WARNING: Removing unreachable block (ram,0x015b4be4) */
/* WARNING: Removing unreachable block (ram,0x015b4bf8) */
/* WARNING: Removing unreachable block (ram,0x015b4c04) */
/* WARNING: Removing unreachable block (ram,0x015b4c1c) */
/* WARNING: Removing unreachable block (ram,0x015b4c58) */
/* WARNING: Removing unreachable block (ram,0x015b4c84) */
/* WARNING: Removing unreachable block (ram,0x015b4c98) */
/* WARNING: Removing unreachable block (ram,0x015b4ca4) */
/* WARNING: Removing unreachable block (ram,0x015b4cbc) */
/* WARNING: Removing unreachable block (ram,0x015b4cf8) */
/* WARNING: Removing unreachable block (ram,0x015b4d24) */
/* WARNING: Removing unreachable block (ram,0x015b4d38) */
/* WARNING: Removing unreachable block (ram,0x015b4d44) */
/* WARNING: Removing unreachable block (ram,0x015b4d5c) */
/* WARNING: Removing unreachable block (ram,0x015b4d98) */
/* WARNING: Removing unreachable block (ram,0x015b4db4) */
/* WARNING: Removing unreachable block (ram,0x015b4dac) */
/* WARNING: Removing unreachable block (ram,0x01554b70) */
/* WARNING: Removing unreachable block (ram,0x01554bb8) */
/* WARNING: Removing unreachable block (ram,0x01554ba8) */
/* WARNING: Removing unreachable block (ram,0x01554bb0) */
/* WARNING: Removing unreachable block (ram,0x01554bc0) */
/* WARNING: Removing unreachable block (ram,0x01554bc4) */
/* WARNING: Removing unreachable block (ram,0x01554bdc) */
/* WARNING: Removing unreachable block (ram,0x01554be4) */
/* WARNING: Removing unreachable block (ram,0x01554c14) */
/* WARNING: Removing unreachable block (ram,0x01554c98) */
/* WARNING: Removing unreachable block (ram,0x01554ca4) */
/* WARNING: Removing unreachable block (ram,0x01554cac) */
/* WARNING: Removing unreachable block (ram,0x01554d28) */
/* WARNING: Removing unreachable block (ram,0x01554d8c) */
/* WARNING: Removing unreachable block (ram,0x01554d30) */
/* WARNING: Removing unreachable block (ram,0x01554d48) */
/* WARNING: Removing unreachable block (ram,0x01554d50) */
/* WARNING: Removing unreachable block (ram,0x01554e34) */
/* WARNING: Removing unreachable block (ram,0x01554d5c) */
/* WARNING: Removing unreachable block (ram,0x01554d68) */
/* WARNING: Removing unreachable block (ram,0x01554e44) */
/* WARNING: Removing unreachable block (ram,0x01554cc4) */
/* WARNING: Removing unreachable block (ram,0x01554d78) */
/* WARNING: Removing unreachable block (ram,0x01554cc8) */
/* WARNING: Removing unreachable block (ram,0x01554cdc) */
/* WARNING: Removing unreachable block (ram,0x01554ce4) */
/* WARNING: Removing unreachable block (ram,0x01554e0c) */
/* WARNING: Removing unreachable block (ram,0x01554cf0) */
/* WARNING: Removing unreachable block (ram,0x01554cfc) */
/* WARNING: Removing unreachable block (ram,0x01554e1c) */
/* WARNING: Removing unreachable block (ram,0x01554e20) */
/* WARNING: Removing unreachable block (ram,0x01554e48) */
/* WARNING: Removing unreachable block (ram,0x01554c18) */
/* WARNING: Removing unreachable block (ram,0x01554c1c) */
/* WARNING: Removing unreachable block (ram,0x01554c28) */
/* WARNING: Removing unreachable block (ram,0x01554c34) */
/* WARNING: Removing unreachable block (ram,0x01554c3c) */
/* WARNING: Removing unreachable block (ram,0x01554da8) */
/* WARNING: Removing unreachable block (ram,0x01554e58) */
/* WARNING: Removing unreachable block (ram,0x01554db0) */
/* WARNING: Removing unreachable block (ram,0x01554dc8) */
/* WARNING: Removing unreachable block (ram,0x01554dd0) */
/* WARNING: Removing unreachable block (ram,0x01554ea0) */
/* WARNING: Removing unreachable block (ram,0x01554ddc) */
/* WARNING: Removing unreachable block (ram,0x01554de8) */
/* WARNING: Removing unreachable block (ram,0x01554eb0) */
/* WARNING: Removing unreachable block (ram,0x01554c54) */
/* WARNING: Removing unreachable block (ram,0x01554df8) */
/* WARNING: Removing unreachable block (ram,0x01554c58) */
/* WARNING: Removing unreachable block (ram,0x01554c6c) */
/* WARNING: Removing unreachable block (ram,0x01554c74) */
/* WARNING: Removing unreachable block (ram,0x01554e78) */
/* WARNING: Removing unreachable block (ram,0x01554c80) */
/* WARNING: Removing unreachable block (ram,0x01554c8c) */
/* WARNING: Removing unreachable block (ram,0x01554e88) */
/* WARNING: Removing unreachable block (ram,0x01554e8c) */
/* WARNING: Removing unreachable block (ram,0x01554eb4) */
/* WARNING: Removing unreachable block (ram,0x01554bf8) */
/* WARNING: Removing unreachable block (ram,0x01554d08) */
/* WARNING: Removing unreachable block (ram,0x01554bfc) */
/* WARNING: Removing unreachable block (ram,0x01554d18) */
/* WARNING: Removing unreachable block (ram,0x01554d24) */
/* WARNING: Removing unreachable block (ram,0x01554ec8) */
/* WARNING: Removing unreachable block (ram,0x015b4d6c) */
/* WARNING: Removing unreachable block (ram,0x015b4d88) */
/* WARNING: Removing unreachable block (ram,0x015b4ccc) */
/* WARNING: Removing unreachable block (ram,0x015b4ce8) */
/* WARNING: Removing unreachable block (ram,0x015b4c2c) */
/* WARNING: Removing unreachable block (ram,0x015b4c48) */
/* WARNING: Removing unreachable block (ram,0x015b4b8c) */
/* WARNING: Removing unreachable block (ram,0x015b4ba8) */
/* WARNING: Removing unreachable block (ram,0x015b4aec) */
/* WARNING: Removing unreachable block (ram,0x015b4b08) */
/* WARNING: Removing unreachable block (ram,0x01477110) */
/* WARNING: Removing unreachable block (ram,0x01478200) */
/* WARNING: Removing unreachable block (ram,0x01478238) */
/* WARNING: Removing unreachable block (ram,0x014782ac) */
/* WARNING: Removing unreachable block (ram,0x014782cc) */
/* WARNING: Removing unreachable block (ram,0x014784e0) */
/* WARNING: Removing unreachable block (ram,0x0147851c) */
/* WARNING: Removing unreachable block (ram,0x01478524) */
/* WARNING: Removing unreachable block (ram,0x01478548) */
/* WARNING: Removing unreachable block (ram,0x01478554) */
/* WARNING: Removing unreachable block (ram,0x014782d4) */
/* WARNING: Removing unreachable block (ram,0x01478328) */
/* WARNING: Removing unreachable block (ram,0x01478338) */
/* WARNING: Removing unreachable block (ram,0x014784c8) */
/* WARNING: Removing unreachable block (ram,0x01478350) */
/* WARNING: Removing unreachable block (ram,0x01478394) */
/* WARNING: Removing unreachable block (ram,0x014784d0) */
/* WARNING: Removing unreachable block (ram,0x0147839c) */
/* WARNING: Removing unreachable block (ram,0x01478494) */
/* WARNING: Removing unreachable block (ram,0x014784a8) */
/* WARNING: Removing unreachable block (ram,0x014783b8) */
/* WARNING: Removing unreachable block (ram,0x014783c8) */
/* WARNING: Removing unreachable block (ram,0x014783d0) */
/* WARNING: Removing unreachable block (ram,0x014783d4) */
/* WARNING: Removing unreachable block (ram,0x014783e8) */
/* WARNING: Removing unreachable block (ram,0x014784d8) */
/* WARNING: Removing unreachable block (ram,0x014784dc) */
/* WARNING: Removing unreachable block (ram,0x014783f0) */
/* WARNING: Removing unreachable block (ram,0x0147844c) */
/* WARNING: Removing unreachable block (ram,0x01478420) */

void Atlas_Gameplay_FTUE_BaseLayerFTUEDriving__OnEnterDriftForLengthEndTrigger
               (long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  int extraout_w1;
  undefined4 uVar11;
  undefined8 *extraout_x8;
  undefined *puVar12;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 **ppuVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  lVar5 = param_1;
  if ((bRam0000000003eb4890 & 1) == 0) {
    func_0x00f78a20(0x3d52770);
    func_0x00f78a20(0x3d52778);
    lVar5 = func_0x00f78a20(0x3d278d8);
    bRam0000000003eb4890 = 1;
  }
  iVar4 = /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$IsValidHumanCollision*/ func_0x01476e40(lVar5,param_2);
  if (iVar4 == 0) {
    return;
  }
  if ((*(char *)(param_1 + 0xe1) == '\0') &&
     ((*(int *)(param_1 + 0x8c) < *(int *)(param_1 + 0x88) || (*(char *)(param_1 + 0x90) != '\0'))))
  {
    lVar5 = *(long *)(param_1 + 200);
    uVar6 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
    /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar6,param_1,uRam0000000003d52778,0);
    if (lVar5 == 0) {
      puVar14 = &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToNoSection;
      param_1 = func_0x00f78af4();
      goto code_r0x01477378;
    }
    /*Atlas.Gameplay.HitVolumeBehaviour$$add_OnEnter*/ func_0x015b49e0(lVar5,uVar6,0);
    puVar3 = &uStack_110;
    ppuVar13 = (undefined1 **)&stack0xfffffffffffffff0;
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
    /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetSection*/ func_0x01478c3c(&uStack_90,param_1,*(undefined8 *)(param_1 + 0xa8));
    puVar12 = puStack_38;
    puVar1 = puStack_40;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    uStack_b8 = uStack_68;
    uStack_c0 = uStack_70;
    uStack_108 = uStack_68;
    uStack_110 = uStack_70;
    /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$CallReactions*/ func_0x01475e24(param_1,&uStack_110);
    /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$RespawnHumanPlayerAtLocator*/ func_0x014787a0(param_1,puVar1);
    /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$RespawnAIsAtLocators*/ func_0x01478874(param_1,puVar12);
    uVar6 = *(undefined8 *)(param_1 + 0xa8);
    puVar14 = &UNK_01477110;
  }
  else {
    puVar14 = (undefined *)0x14772a8;
code_r0x01477378:
    puVar3 = (undefined8 *)&stack0xffffffffffffffa0;
    ppuVar13 = &puStack_40;
    puVar12 = (undefined *)0x3eb4000;
    uVar6 = 0x3d24e08;
    puStack_40 = &stack0xfffffffffffffff0;
    puStack_38 = puVar14;
    if ((bRam0000000003eb489e & 1) == 0) {
      func_0x00f78a20(0x3d24e08);
      bRam0000000003eb489e = 1;
    }
    *(undefined1 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    puVar14 = &UNK_014773c4;
  }
  *(undefined8 *)((long)puVar3 + -0x40) = unaff_x24;
  *(undefined8 **)((long)puVar3 + -0x38) = unaff_x23;
  *(long **)((long)puVar3 + -0x30) = unaff_x22;
  *(undefined **)((long)puVar3 + -0x28) = puVar12;
  *(undefined8 *)((long)puVar3 + -0x20) = uVar6;
  *(long *)((long)puVar3 + -0x18) = param_1;
  *(undefined1 ***)((long)puVar3 + -0x10) = ppuVar13;
  *(undefined **)((long)puVar3 + -8) = puVar14;
  lVar5 = 0x3eb4000;
  if ((bRam0000000003eb48a3 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb48a3 = 1;
  }
  *(undefined8 *)((long)puVar3 + -0x98) = 0;
  *(undefined4 *)((long)puVar3 + -0xa0) = 0;
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 0x30), lVar7 != 0)) {
    unaff_x22 = (long *)0x3d24e08;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090((undefined1 *)((long)puVar3 + -0xf0),lVar7,uRam0000000003d3cd70);
    *(undefined8 *)((long)puVar3 + -0x68) = *(undefined8 *)((long)puVar3 + -200);
    *(undefined8 *)((long)puVar3 + -0x70) = *(undefined8 *)((long)puVar3 + -0xd0);
    *(undefined8 *)((long)puVar3 + -0x58) = *(undefined8 *)((long)puVar3 + -0xb8);
    *(undefined8 *)((long)puVar3 + -0x60) = *(undefined8 *)((long)puVar3 + -0xc0);
    *(undefined8 *)((long)puVar3 + -0x50) = *(undefined8 *)((long)puVar3 + -0xb0);
    *(undefined8 *)((long)puVar3 + -0x88) = *(undefined8 *)((long)puVar3 + -0xe8);
    *(undefined8 *)((long)puVar3 + -0x90) = *(undefined8 *)((long)puVar3 + -0xf0);
    *(undefined8 *)((long)puVar3 + -0x78) = *(undefined8 *)((long)puVar3 + -0xd8);
    *(undefined8 *)((long)puVar3 + -0x80) = *(undefined8 *)((long)puVar3 + -0xe0);
code_r0x01478624:
    do {
      uVar8 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8((undefined1 *)((long)puVar3 + -0x90),uRam0000000003d33320);
      if ((uVar8 & 1) == 0) goto code_r0x01478690;
      uVar6 = *(undefined8 *)((long)puVar3 + -0x80);
      *(undefined8 *)((long)puVar3 + -0xf0) = *(undefined8 *)((long)puVar3 + -0x78);
      uVar9 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,(undefined1 *)((long)puVar3 + -0xf0));
      uVar8 = /*Atlas.StringID$$Equals*/ func_0x015057f8(param_1 + 0xa8,uVar9,0);
      if ((uVar8 & 1) != 0) {
        if (*(long *)(param_1 + 0x60) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar8 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(param_1 + 0x60),uVar6,
                                  (undefined1 *)((long)puVar3 + -0x98),0);
          if ((uVar8 & 1) == 0) {
            uVar11 = 0x86;
            goto code_r0x0147869c;
          }
          if (*(long *)((long)puVar3 + -0x98) != 0) {
            /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$RemoveBaseListener*/ func_0x014765a4(param_1,*(undefined8 *)(*(long *)((long)puVar3 + -0x98) + 0x18));
            goto code_r0x01478624;
          }
          func_0x00f78af4();
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1478708);
        (*pcVar2)();
      }
    } while( true );
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar10 = (long *)___cxa_begin_catch();
    lVar5 = *plVar10;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)puVar3 + -0x90),*unaff_x23);
    if (lVar5 == 0) {
code_r0x014786b8:
      lVar5 = *unaff_x22;
      if (((*(ushort *)(lVar5 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar5 = *unaff_x22;
      }
      *(undefined8 *)(param_1 + 0xa8) = **(undefined8 **)(lVar5 + 0xb8);
      return;
    }
    func_0x00f78ac0(lVar5,0);
  }
  lVar7 = __Unwind_Resume();
  *(long *)((long)puVar3 + -0x110) = lVar5;
  *(long *)((long)puVar3 + -0x108) = param_1;
  *(undefined1 **)((long)puVar3 + -0x100) = (undefined1 *)((long)puVar3 + -0x10);
  *(undefined **)((long)puVar3 + -0xf8) =
       &Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
  /*Atlas.Gameplay.FTUE.BaseLayerFTUEManager$$GetSection*/ func_0x01478c3c((undefined1 *)((long)puVar3 + -0x170),lVar7,*(undefined8 *)(lVar7 + 0xa8));
  uVar6 = *(undefined8 *)((long)puVar3 + -0x150);
  uVar15 = *(undefined8 *)((long)puVar3 + -0x138);
  uVar9 = *(undefined8 *)((long)puVar3 + -0x140);
  extraout_x8[5] = *(undefined8 *)((long)puVar3 + -0x148);
  extraout_x8[4] = uVar6;
  extraout_x8[7] = uVar15;
  extraout_x8[6] = uVar9;
  uVar6 = *(undefined8 *)((long)puVar3 + -0x130);
  uVar15 = *(undefined8 *)((long)puVar3 + -0x118);
  uVar9 = *(undefined8 *)((long)puVar3 + -0x120);
  extraout_x8[9] = *(undefined8 *)((long)puVar3 + -0x128);
  extraout_x8[8] = uVar6;
  extraout_x8[0xb] = uVar15;
  extraout_x8[10] = uVar9;
  uVar6 = *(undefined8 *)((long)puVar3 + -0x170);
  uVar15 = *(undefined8 *)((long)puVar3 + -0x158);
  uVar9 = *(undefined8 *)((long)puVar3 + -0x160);
  extraout_x8[1] = *(undefined8 *)((long)puVar3 + -0x168);
  *extraout_x8 = uVar6;
  extraout_x8[3] = uVar15;
  extraout_x8[2] = uVar9;
  return;
code_r0x01478690:
  uVar11 = 0x7b;
code_r0x0147869c:
  *(undefined4 *)((long)puVar3 + -0xa8) = uVar11;
  /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)puVar3 + -0x90),uRam0000000003d33318);
  if (*(int *)((long)puVar3 + -0xa8) == 0x86) {
    return;
  }
  goto code_r0x014786b8;
}



// ============================================================
// RVA: 0x14773fc | Atlas.Gameplay.FTUE.BaseLayerFTUEDriving..ctor
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerFTUEDriving___ctor(void)

{
  return;
}



