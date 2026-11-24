// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Settings.QualitySettings

// ============================================================
// RVA: 0x168c9ec | Core.Settings.QualitySettings.Init
// ============================================================

void Core_Settings_QualitySettings__Init(long param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb5a8c & 1) == 0) {
    func_0x00f78a20(0x3d2ff48);
    func_0x00f78a20(0x3d1c530);
    bRam0000000003eb5a8c = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, QualitySettings.Setting>_TypeInfo*/ uRam0000000003d1c530);
  /*System.Collections.Generic.Dictionary<Type, MonoCustomAttrs.AttributeInfo>$$.ctor*/ func_0x01ed72bc(uVar1,10,uRam0000000003d2ff48);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}



// ============================================================
// RVA: 0x168ca68 | Core.Settings.QualitySettings.DeInit
// ============================================================

void Core_Settings_QualitySettings__DeInit(long param_1)

{
  if ((bRam0000000003eb5a8d & 1) == 0) {
    func_0x00f78a20(0x3d2ff50);
    bRam0000000003eb5a8d = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$Clear*/ func_0x01ed79a4(*(long *)(param_1 + 0x10),uRam0000000003d2ff50);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// ============================================================
// RVA: 0x168cac0 | Core.Settings.QualitySettings.SetQualityLevel
// ============================================================

ulong Core_Settings_QualitySettings__SetQualityLevel(ulong param_1,uint param_2,uint param_3)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  int extraout_w1;
  uint extraout_w1_00;
  long lVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  long lVar13;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  uVar6 = param_1;
  if ((bRam0000000003eb5a8e & 1) == 0) {
    func_0x00f78a20(0x3d2ff60);
    func_0x00f78a20(0x3d34f88);
    func_0x00f78a20(0x3d34f90);
    func_0x00f78a20(0x3d34f98);
    func_0x00f78a20(0x3d39400);
    func_0x00f78a20(0x3d3d6e0);
    func_0x00f78a20(0x3d3d6e8);
    func_0x00f78a20(0x3d3d718);
    uVar6 = func_0x00f78a20(0x3d3d720);
    bRam0000000003eb5a8e = 1;
  }
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  if (param_2 < 5) {
    if (*(long *)(param_1 + 0x10) == 0) {
      func_0x00f78af4();
      if (extraout_w1 == 1) {
        plVar8 = (long *)___cxa_begin_catch();
        lVar10 = *plVar8;
        ___cxa_end_catch();
        uVar6 = /*System.Collections.Generic.Dictionary.Enumerator<XmlQualifiedName, SchemaElementDecl>$$Dispose*/ func_0x01fd5f4c(&uStack_90,uRam0000000003d34f88);
        if (lVar10 == 0) {
          return uVar6;
        }
        func_0x00f78ac0(lVar10,0);
      }
      __Unwind_Resume();
      return (ulong)(extraout_w1_00 < 5);
    }
    /*System.Collections.Generic.Dictionary<XmlQualifiedName, SchemaElementDecl>$$GetEnumerator*/ func_0x01ed7d98(&uStack_b8,*(long *)(param_1 + 0x10),uRam0000000003d2ff60);
    uStack_88 = uStack_b0;
    uStack_90 = uStack_b8;
    lStack_78 = lStack_a0;
    uStack_80 = uStack_a8;
    uStack_70 = uStack_98;
    while (uVar6 = /*System.Collections.Generic.Dictionary.Enumerator<XmlQualifiedName, SchemaElementDecl>$$MoveNext*/ func_0x01fd5dd4(&uStack_90,uRam0000000003d34f90), lVar10 = lStack_78,
          (uVar6 & 1) != 0) {
      if (lStack_78 == 0) {
        func_0x00f78af4();
code_r0x0168cd60:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x168cd64);
        (*pcVar5)();
      }
      lVar9 = *(long *)(lStack_78 + 0x28);
      if (lVar9 == 0) {
        func_0x00f78af4();
        goto code_r0x0168cd60;
      }
      if (*(uint *)(lVar9 + 0x18) <= param_2) {
        uVar7 = func_0x00f78b24();
        func_0x00f78ac0(uVar7,0);
        goto code_r0x0168cd60;
      }
      if (*(long *)(lStack_78 + 0x20) == 0) {
        func_0x00f78af4();
        goto code_r0x0168cd60;
      }
      uVar2 = *(uint *)(*(long *)(lStack_78 + 0x20) + 0x18);
      if ((int)uVar2 < 1) {
        bVar12 = false;
      }
      else {
        uVar6 = 0;
        bVar12 = false;
        lVar13 = *(long *)(lVar9 + (ulong)param_2 * 0x10 + 0x28);
        lVar9 = 0x20;
        do {
          lVar11 = *(long *)(lVar10 + 0x18);
          if (lVar11 == 0) {
            func_0x00f78af4();
            goto code_r0x0168cd60;
          }
          if (*(uint *)(lVar11 + 0x18) <= uVar6) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (lVar13 == 0) {
            func_0x00f78af4();
            goto code_r0x0168cd60;
          }
          if (*(uint *)(lVar13 + 0x18) <= uVar6) {
            uVar7 = func_0x00f78b24();
            func_0x00f78ac0(uVar7,0);
            goto code_r0x0168cd60;
          }
          pfVar1 = (float *)(*(long *)(lVar11 + 0x10) + lVar9);
          fVar4 = *(float *)(lVar13 + lVar9);
          if (*pfVar1 != fVar4) {
            if (*(long *)(lVar10 + 0x20) == 0) {
              func_0x00f78af4();
              goto code_r0x0168cd60;
            }
            fVar3 = pfVar1[1];
            if (*(uint *)(*(long *)(lVar10 + 0x20) + 0x18) <= uVar6) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if (*(long *)(lVar10 + 0x18) == 0) {
              func_0x00f78af4();
              goto code_r0x0168cd60;
            }
            /*System.Collections.Generic.List<QualitySettings.Value>$$set_Item*/ func_0x0257382c(*(long *)(lVar10 + 0x18),uVar6,CONCAT44(fVar3,fVar4),
                            uRam0000000003d3d720);
            bVar12 = true;
          }
          uVar6 = uVar6 + 1;
          lVar9 = lVar9 + 8;
        } while (uVar2 != uVar6);
      }
      if (bVar12 || ((param_3 ^ 1) & 1) != 0) {
        /*Core.Settings.QualitySettings.Setting$$OnChange*/ func_0x0168cde4(lVar10);
      }
    }
    uVar6 = /*System.Collections.Generic.Dictionary.Enumerator<XmlQualifiedName, SchemaElementDecl>$$Dispose*/ func_0x01fd5f4c(&uStack_90,uRam0000000003d34f88);
  }
  return uVar6;
}



// ============================================================
// RVA: 0x168cdd8 | Core.Settings.QualitySettings.IsQualityLevelValid
// ============================================================

bool Core_Settings_QualitySettings__IsQualityLevelValid(undefined8 param_1,uint param_2)

{
  return param_2 < 5;
}



// ============================================================
// RVA: 0x168ce44 | Core.Settings.QualitySettings.LoadFromConfigFileString
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x168d498 | Core.Settings.QualitySettings.TryGetSectionName
// ============================================================

/* WARNING: Possible PIC construction at 0x0168deb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0168dfe4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0168e0d4) */
/* WARNING: Type propagation algorithm not settling */

undefined1 *
Core_Settings_QualitySettings__TryGetSectionName
          (undefined8 param_1,long param_2,ulong *param_3,ulong *param_4)

{
  uint uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  int iVar9;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar10;
  ulong *puVar16;
  long lVar17;
  long *plVar18;
  undefined1 *puVar19;
  long extraout_x1;
  long extraout_x1_00;
  ulong *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong *puVar24;
  long *plVar25;
  undefined1 *puVar26;
  ulong uVar27;
  float fVar28;
  long unaff_x24;
  long lVar29;
  undefined *puVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  long alStack_2f8 [2];
  undefined1 *puStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 *******pppppppuStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined1 auStack_2b8 [16];
  ulong *puStack_2a8;
  undefined1 *******pppppppuStack_2a0;
  undefined *puStack_298;
  long lStack_288;
  ulong uStack_280;
  long lStack_278;
  ulong *puStack_270;
  ulong *puStack_268;
  undefined1 ******ppppppuStack_260;
  undefined *puStack_258;
  ulong uStack_248;
  long lStack_240;
  ulong uStack_238;
  ulong uStack_230;
  long lStack_228;
  ulong *puStack_220;
  ulong *puStack_218;
  undefined1 *****pppppuStack_210;
  undefined *puStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  ulong uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined1 ****ppppuStack_130;
  undefined *puStack_128;
  long lStack_120;
  ulong uStack_118;
  undefined1 auStack_110 [16];
  ulong *puStack_100;
  ulong *puStack_f8;
  undefined1 ***pppuStack_f0;
  undefined *puStack_e8;
  ulong uStack_d8;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined4 uStack_74;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  puVar22 = param_3;
  if ((bRam0000000003eb5aa0 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d768b8);
    func_0x00f78a20(0x3d76b28);
    bRam0000000003eb5aa0 = 1;
  }
  if (param_2 != 0) {
    iVar9 = /*System.String$$StartsWith*/ func_0x029ce958(param_2,/*STR('[')*/ uRam0000000003d768b8,5,0);
    if ((iVar9 == 0) || (iVar9 = /*System.String$$EndsWith*/ func_0x029cd7e4(param_2,/*STR(']')*/ uRam0000000003d76b28,5,0), iVar9 == 0)) {
      puVar26 = (undefined1 *)0x0;
      uVar11 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    else {
      puVar26 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      uVar11 = /*System.String$$Substring*/ func_0x029cbbf0(param_2,1,*(int *)(param_2 + 0x10) + -2,0);
    }
    *param_3 = uVar11;
    return puVar26;
  }
  func_0x00f78af4();
  puStack_38 = &Core_Settings_QualitySettings__TryGetSettingAndLevel;
  puVar20 = puVar22;
  puVar23 = param_4;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5aa1 & 1) == 0) {
    func_0x00f78a20(0x3d20b50);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb5aa1 = 1;
  }
  uStack_74 = 0;
  if (extraout_x1 != 0) {
    uVar12 = /*System.String$$IndexOf*/ func_0x029cdad0(extraout_x1,0x40,0);
    uVar10 = (uint)uVar12;
    if (-1 < (int)uVar10) {
      uVar11 = /*System.String$$Substring*/ func_0x029cbbf0(extraout_x1,0,uVar12,0);
      uVar12 = /*System.String$$Substring*/ func_0x029cbbf0(extraout_x1,uVar10 + 1,*(int *)(extraout_x1 + 0x10) + ~uVar10,0);
      if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar13 = /*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
      iVar9 = /*System.Int32$$TryParse*/ func_0x02ae9dac(uVar12,4,uVar13,&uStack_74,0);
      if (iVar9 != 0) {
        *puVar22 = uVar11;
        puVar26 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
        goto code_r0x0168d69c;
      }
    }
    uStack_74 = 0;
    puVar26 = (undefined1 *)0x0;
    *puVar22 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
code_r0x0168d69c:
    *(undefined4 *)param_4 = uStack_74;
    return puVar26;
  }
  auVar31 = func_0x00f78af4();
  puStack_88 = &Core_Settings_QualitySettings__CreateSettingQuality;
  uVar11 = 0x3eb5000;
  puVar22 = puVar20;
  puVar24 = puVar23;
  ppuStack_90 = &puStack_40;
  if ((bRam0000000003eb5aa6 & 1) == 0) {
    func_0x00f78a20(0x3d2ff68);
    func_0x00f78a20(0x3d3d6e0);
    func_0x00f78a20(0x3d3d6e8);
    func_0x00f78a20(0x3d1f870);
    bRam0000000003eb5aa6 = 1;
  }
  uStack_d8 = 0;
  uVar10 = (uint)puVar20;
  if (4 < uVar10) {
code_r0x0168d820:
    *puVar23 = 0;
    puVar23[1] = 0;
    return (undefined1 *)0x0;
  }
  lVar14 = *(long *)(auVar31._0_8_ + 0x10);
  if (lVar14 == 0) goto code_r0x0168d844;
  puVar22 = &uStack_d8;
  puVar24 = puRam0000000003d2ff68;
  iVar9 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar14,auVar31._8_8_);
  if (iVar9 == 0) goto code_r0x0168d820;
  if ((uStack_d8 == 0) || (*(long *)(uStack_d8 + 0x20) == 0)) {
code_r0x0168d844:
    func_0x00f78af4();
  }
  else {
    uVar1 = *(uint *)(*(long *)(uStack_d8 + 0x20) + 0x18);
    uVar27 = CONCAT44(0,uVar1);
    uVar15 = func_0x00f78a34(/*Core.Settings.QualitySettings.Value[]_TypeInfo*/ uRam0000000003d1f870,uVar27);
    auVar6._8_8_ = uVar15;
    auVar6._0_8_ = uVar27;
    auVar5._8_8_ = uVar15;
    auVar5._0_8_ = uVar27;
    auVar4._8_8_ = uVar15;
    auVar4._0_8_ = uVar27;
    auVar3._8_8_ = uVar15;
    auVar3._0_8_ = uVar27;
    auVar32._8_8_ = uVar15;
    auVar32._0_8_ = uVar27;
    if (0 < (int)uVar1) {
      uVar11 = 0;
      unaff_x24 = uVar15 + 0x20;
      lVar14 = 0x28;
      do {
        auVar31 = auVar32;
        if ((uStack_d8 == 0) ||
           (lVar29 = *(long *)(uStack_d8 + 0x20), auVar31 = auVar3, lVar29 == 0))
        goto code_r0x0168d844;
        if (*(uint *)(lVar29 + 0x18) <= uVar11) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        auVar31 = auVar4;
        if (uVar15 == 0) goto code_r0x0168d844;
        auVar31 = auVar6;
        if (*(uint *)(uVar15 + 0x18) <= uVar11) goto code_r0x0168d848;
        *(undefined8 *)(unaff_x24 + uVar11 * 8) = *(undefined8 *)(*(long *)(lVar29 + 0x10) + lVar14)
        ;
        uVar11 = uVar11 + 1;
        lVar14 = lVar14 + 0x28;
      } while (uVar27 != uVar11);
    }
    auVar31 = auVar5;
    if ((uStack_d8 == 0) || (lVar14 = *(long *)(uStack_d8 + 0x28), auVar31 = auVar6, lVar14 == 0))
    goto code_r0x0168d844;
    if (uVar10 < *(uint *)(lVar14 + 0x18)) {
      lVar14 = lVar14 + (long)(int)uVar10 * 0x10;
      *(ulong *)(lVar14 + 0x20) = (ulong)puVar20 & 0xffffffff;
      *(ulong *)(lVar14 + 0x28) = uVar15;
      *puVar23 = (ulong)puVar20 & 0xffffffff;
      puVar23[1] = uVar15;
      return (undefined1 *)((long)&MACH_HEADER.magic + 1);
    }
  }
code_r0x0168d848:
  uVar12 = func_0x00f78b24();
  auVar32 = func_0x00f78ac0(uVar12,0);
  uVar12 = auVar32._8_8_;
  puStack_e8 = &Core_Settings_QualitySettings__CreateNewSetting;
  puVar21 = puVar22;
  lStack_120 = unaff_x24;
  uStack_118 = uVar11;
  puStack_100 = puVar20;
  puStack_f8 = puVar23;
  pppuStack_f0 = &ppuStack_90;
  auStack_110 = auVar31;
  if ((bRam0000000003eb5aa7 & 1) == 0) {
    func_0x00f78a20(0x3d2ff78);
    func_0x00f78a20(0x3d3d6f8);
    func_0x00f78a20(0x3d3d6c0);
    func_0x00f78a20(0x3d1e280);
    func_0x00f78a20(0x3d1e278);
    func_0x00f78a20(0x3d1f868);
    func_0x00f78a20(0x3d28798);
    bRam0000000003eb5aa7 = 1;
  }
  uVar11 = /*Core.Settings.QualitySettings$$DoesSettingExist*/ func_0x0168ef04(auVar32._0_8_,uVar12);
  if ((uVar11 & 1) != 0) {
    uVar15 = 0;
code_r0x0168d9a4:
    *puVar22 = uVar15;
    return (undefined1 *)(ulong)((uint)uVar11 ^ 1);
  }
  uVar15 = func_0x00f78aec(/*Core.Settings.QualitySettings.Setting_TypeInfo*/ uRam0000000003d28798);
  /*System.Object$$.ctor*/ func_0x0294d018(uVar15,0);
  if (uVar15 != 0) {
    *(undefined8 *)(uVar15 + 0x10) = uVar12;
    uVar13 = func_0x00f78aec(/*System.Collections.Generic.List<QualitySettings.Value>_TypeInfo*/ uRam0000000003d1e280);
    /*System.Collections.Generic.List<QualitySettings.Value>$$.ctor*/ func_0x02572ecc(uVar13,uRam0000000003d3d6f8);
    *(undefined8 *)(uVar15 + 0x18) = uVar13;
    unaff_x24 = func_0x00f78aec(/*System.Collections.Generic.List<QualitySettings.Parameter>_TypeInfo*/ uRam0000000003d1e278);
    /*System.Collections.Generic.List<QualitySettings.Parameter>$$.ctor*/ func_0x0257018c(unaff_x24,uRam0000000003d3d6c0);
    *(long *)(uVar15 + 0x20) = unaff_x24;
    uVar13 = func_0x00f78a34(/*Core.Settings.QualitySettings.SettingQuality[]_TypeInfo*/ uRam0000000003d1f868,5);
    *(undefined8 *)(uVar15 + 0x28) = uVar13;
    lVar14 = *(long *)(auVar32._0_8_ + 0x10);
    if (lVar14 != 0) {
      /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$set_Item*/ func_0x01ed7794(lVar14,uVar12,uVar15,uRam0000000003d2ff78);
      goto code_r0x0168d9a4;
    }
  }
  auVar31 = func_0x00f78af4();
  puVar20 = auVar31._8_8_;
  puVar23 = &uStack_200;
  puStack_128 = &Core_Settings_QualitySettings__UpdateSettingParameter;
  puVar22 = puVar21;
  ppppuStack_130 = &pppuStack_f0;
  if ((bRam0000000003eb5aa2 & 1) == 0) {
    func_0x00f78a20(0x3d3bee8);
    func_0x00f78a20(0x3d3bee0);
    func_0x00f78a20(0x3d3d6f0);
    func_0x00f78a20(0x3d1de08);
    func_0x00f78a20(0x3d6ba18);
    func_0x00f78a20(0x3d6f9a8);
    func_0x00f78a20(0x3d6fcf0);
    auVar31 = func_0x00f78a20(0x3d75ef0);
    bRam0000000003eb5aa2 = 1;
  }
  lStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e0 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lVar14 = 0x3eb5000;
  if (puVar20 != (ulong *)0x0) {
    uVar11 = /*System.String$$IndexOf*/ func_0x029cdad0(puVar20,0x3d,0);
    uVar10 = (uint)uVar11;
    if ((int)uVar10 < 0) {
      return (undefined1 *)0x0;
    }
    lVar14 = /*System.String$$Substring*/ func_0x029cbbf0(puVar20,0,uVar11,0);
    puVar22 = (ulong *)(ulong)((int)puVar20[2] + ~uVar10);
    puVar24 = (ulong *)0x0;
    auVar31 = /*System.String$$Substring*/ func_0x029cbbf0(puVar20,uVar10 + 1);
    uVar27 = auVar31._0_8_;
    if (lVar14 != 0) {
      auVar31 = /*System.String$$Trim*/ func_0x029bab94(lVar14,0);
      puVar16 = auVar31._0_8_;
      uVar11 = uVar27;
      if (uVar27 != 0) {
        uVar12 = /*System.String$$Trim*/ func_0x029bab94(uVar27,0);
        puVar22 = &uStack_1a8;
        auVar31 = /*Core.Settings.QualitySettings$$TryParseValue*/ func_0x0168f1fc(uVar12,uVar12);
        if (auVar31._0_4_ == 0) {
          return auVar31._0_8_;
        }
        puVar20 = puVar16;
        if (puVar16 != (ulong *)0x0) {
          puVar22 = (ulong *)0x0;
          auVar31 = /*System.String$$IndexOf*/ func_0x029cdad0(puVar16,0x2e);
          uVar27 = uStack_1a8;
          lVar29 = auVar31._0_8_;
          uVar10 = auVar31._0_4_;
          if ((int)uVar10 < 0) {
            if (*puVar21 != 0) {
              puVar22 = (ulong *)(*puVar21 + 0x20);
              auVar31 = /*Core.Settings.QualitySettings$$GetOrCreateParameterCopyFromList*/ func_0x0168f394(lVar29,puVar16);
              puVar16 = auVar31._0_8_;
              uStack_1f8 = uStack_1a8;
              puVar24 = puVar23;
              if (*puVar21 != 0) {
                lVar29 = *(long *)(*puVar21 + 0x20);
                auVar31._8_8_ = 0;
                auVar31._0_8_ = puVar16;
                auVar31 = auVar31 << 0x40;
                if (lVar29 != 0) {
                  uStack_198 = uStack_1a8;
                  uStack_1a0 = uStack_200;
                  uStack_188 = uStack_1e8;
                  uStack_190 = uStack_1f0;
                  lStack_180 = lStack_1e0;
                  goto code_r0x0168dcfc;
                }
              }
            }
          }
          else {
            if ((uStack_1a8 & 0xff00000000) != 0) {
              return (undefined1 *)0x0;
            }
            uVar11 = /*System.String$$Substring*/ func_0x029cbbf0(puVar16,0,lVar29,0);
            puVar22 = (ulong *)(ulong)((int)puVar16[2] + ~uVar10);
            puVar24 = (ulong *)0x0;
            auVar31 = /*System.String$$Substring*/ func_0x029cbbf0(puVar16,uVar10 + 1);
            lVar17 = auVar31._0_8_;
            lVar14 = lVar29;
            uVar15 = uVar27;
            if (*puVar21 != 0) {
              puVar24 = &uStack_1d0;
              puVar16 = (ulong *)/*Core.Settings.QualitySettings$$GetOrCreateParameterCopyFromList*/ func_0x0168f394(lVar17,uVar11,*puVar21 + 0x20);
              puVar22 = (ulong *)0x0;
              auVar31 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar17,/*STR('Min')*/ uRam0000000003d6fcf0);
              fVar28 = (float)uVar27;
              lVar14 = lVar17;
              puVar20 = puVar16;
              if (auVar31._0_4_ == 0) {
                puVar22 = (ulong *)0x0;
                auVar31 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar17,/*STR('Max')*/ uRam0000000003d6f9a8);
                if (auVar31._0_4_ == 0) {
                  puVar22 = (ulong *)0x0;
                  auVar31 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar17,/*STR('DecimalPlaces')*/ uRam0000000003d6ba18);
                  if (auVar31._0_4_ == 0) {
                    puVar22 = (ulong *)0x0;
                    auVar31 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar17,/*STR('ValidValue')*/ uRam0000000003d75ef0);
                    if (auVar31._0_4_ != 0) {
                      if (lStack_1b0 == 0) {
                        lVar14 = func_0x00f78aec(/*System.Collections.Generic.List<float>_TypeInfo*/ uRam0000000003d1de08);
                        auVar31 = /*System.Collections.Generic.List<float>$$.ctor*/ func_0x0245cff8(lVar14,uRam0000000003d3bee0);
                        lStack_1b0 = lVar14;
                        if (lVar14 == 0) goto code_r0x0168dd20;
                      }
                      lVar14 = lStack_1b0;
                      auVar31 = /*System.Collections.Generic.List<float>$$Add*/ func_0x0245dca8(uVar27 & 0xffffffff,lStack_1b0,uRam0000000003d3bee8)
                      ;
                    }
                  }
                  else {
                    fVar2 = -fVar28;
                    if (fVar28 != INFINITY) {
                      fVar2 = fVar28;
                    }
                    uStack_1b8 = CONCAT44(uStack_1b8._4_4_,(int)fVar2);
                  }
                }
                else {
                  uStack_1c0 = CONCAT44(fVar28,(undefined4)uStack_1c0);
                }
              }
              else {
                uStack_1c0 = CONCAT44(uStack_1c0._4_4_,fVar28);
              }
              if (*puVar21 != 0) {
                lVar29 = *(long *)(*puVar21 + 0x20);
                auVar7._8_8_ = 0;
                auVar7._0_8_ = auVar31._8_8_;
                auVar31 = auVar7 << 0x40;
                if (lVar29 != 0) {
                  uStack_198 = uStack_1c8;
                  uStack_1a0 = uStack_1d0;
                  uStack_188 = uStack_1b8;
                  uStack_190 = uStack_1c0;
                  lStack_180 = lStack_1b0;
code_r0x0168dcfc:
                  /*System.Collections.Generic.List<QualitySettings.Parameter>$$set_Item*/ func_0x02570b34(lVar29,puVar16,&uStack_1a0,uRam0000000003d3d6f0);
                  return (undefined1 *)((long)&MACH_HEADER.magic + 1);
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x0168dd20:
  func_0x00f78af4(auVar31._0_8_,auVar31._8_8_);
  puStack_208 = &Core_Settings_QualitySettings__UpdateSettingQualityParameter;
  uStack_248 = 0;
  puVar23 = puVar22;
  puVar16 = puVar24;
  lStack_240 = unaff_x24;
  uStack_238 = uVar15;
  uStack_230 = uVar11;
  lStack_228 = lVar14;
  puStack_220 = puVar20;
  puStack_218 = puVar21;
  pppppuStack_210 = &ppppuStack_130;
  if (extraout_x1_00 == 0) {
code_r0x0168de30:
    func_0x00f78af4();
  }
  else {
    uVar12 = /*System.String$$IndexOf*/ func_0x029cdad0(extraout_x1_00,0x3d,0);
    uVar10 = (uint)uVar12;
    if ((int)uVar10 < 0) {
      return (undefined1 *)0x0;
    }
    uVar11 = /*System.String$$Substring*/ func_0x029cbbf0(extraout_x1_00,0,uVar12,0);
    puVar23 = (ulong *)(ulong)(*(int *)(extraout_x1_00 + 0x10) + ~uVar10);
    puVar16 = (ulong *)0x0;
    lVar29 = /*System.String$$Substring*/ func_0x029cbbf0(extraout_x1_00,uVar10 + 1);
    puVar21 = puVar22;
    puVar20 = puVar24;
    lVar14 = extraout_x1_00;
    if (uVar11 == 0) goto code_r0x0168de30;
    lVar17 = /*System.String$$Trim*/ func_0x029bab94(uVar11,0);
    lVar14 = extraout_x1_00;
    if (lVar29 == 0) goto code_r0x0168de30;
    uVar12 = /*System.String$$Trim*/ func_0x029bab94(lVar29,0);
    puVar23 = &uStack_248;
    puVar26 = (undefined1 *)/*Core.Settings.QualitySettings$$TryParseValue*/ func_0x0168f1fc(uVar12,uVar12);
    if ((int)puVar26 == 0) {
      return puVar26;
    }
    lVar14 = lVar17;
    if (*puVar24 == 0) goto code_r0x0168de30;
    puVar23 = (ulong *)(*puVar24 + 0x20);
    uVar10 = /*Core.Settings.QualitySettings$$FindParameterInList*/ func_0x0168f130(puVar26,lVar17);
    if ((int)uVar10 < 0) {
code_r0x0168de0c:
      return (undefined1 *)((long)&MACH_HEADER.magic + 1);
    }
    uVar15 = puVar22[1];
    if (uVar15 == 0) goto code_r0x0168de30;
    if (uVar10 < *(uint *)(uVar15 + 0x18)) {
      *(ulong *)(uVar15 + (ulong)uVar10 * 8 + 0x20) = uStack_248;
      goto code_r0x0168de0c;
    }
  }
  uVar12 = func_0x00f78b24();
  auVar31 = func_0x00f78ac0(uVar12,0);
  puStack_258 = &Core_Settings_QualitySettings__RegisterOnSettingChanged;
  uStack_280 = uVar11;
  lStack_278 = lVar14;
  puStack_270 = puVar20;
  puStack_268 = puVar21;
  ppppppuStack_260 = &pppppuStack_210;
  if ((bRam0000000003eb5a90 & 1) == 0) {
    func_0x00f78a20(0x3d2ff68);
    bRam0000000003eb5a90 = 1;
  }
  lStack_288 = 0;
  lVar14 = *(long *)(auVar31._0_8_ + 0x10);
  if (lVar14 == 0) {
code_r0x0168decc:
    puVar30 = &Core_Settings_QualitySettings_Setting__add_onChangedEvent;
    auVar33 = func_0x00f78af4();
  }
  else {
    puVar16 = puRam0000000003d2ff68;
    puVar26 = (undefined1 *)/*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar14,auVar31._8_8_,&lStack_288);
    auVar33._8_8_ = puVar23;
    auVar33._0_8_ = lStack_288;
    if ((int)puVar26 == 0) {
      return puVar26;
    }
    if (lStack_288 == 0) goto code_r0x0168decc;
    puVar30 = &UNK_0168deb8;
  }
  uVar12 = auVar33._8_8_;
  uStack_2c0 = 0x3eb5000;
  puStack_2a8 = puVar23;
  pppppppuStack_2a0 = &ppppppuStack_260;
  puStack_298 = puVar30;
  auStack_2b8 = auVar31;
  if ((bRam0000000003eb5aa9 & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb5aa9 = 1;
  }
  plVar25 = (long *)(auVar33._0_8_ + 0x30);
  puVar26 = (undefined1 *)*plVar25;
  while( true ) {
    uVar13 = 0;
    plVar18 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(puVar26,uVar12);
    if ((plVar18 != (long *)0x0) && (*plVar18 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) break;
    puVar19 = (undefined1 *)func_0x00ff0f44(plVar25,plVar18,puVar26);
    bVar8 = puVar26 == puVar19;
    puVar26 = puVar19;
    if (bVar8) {
      return puVar19;
    }
  }
  auVar31 = func_0x00f78e5c(plVar18);
  alStack_2f8[1] = 0x3d1b598;
  puStack_2c8 = &Core_Settings_QualitySettings__UnRegisterOnSettingChanged;
  puStack_2e8 = puVar26;
  plStack_2e0 = plVar25;
  uStack_2d8 = uVar12;
  pppppppuStack_2d0 = &pppppppuStack_2a0;
  if ((bRam0000000003eb5a91 & 1) == 0) {
    func_0x00f78a20(0x3d2ff68);
    bRam0000000003eb5a91 = 1;
  }
  alStack_2f8[0] = 0;
  lVar14 = *(long *)(auVar31._0_8_ + 0x10);
  if (lVar14 != 0) {
    puVar16 = puRam0000000003d2ff68;
    puVar26 = (undefined1 *)/*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar14,auVar31._8_8_,alStack_2f8);
    auVar34._8_8_ = uVar13;
    auVar34._0_8_ = alStack_2f8[0];
    if ((int)puVar26 == 0) {
      return puVar26;
    }
    if (alStack_2f8[0] != 0) goto code_r0x0168e000;
  }
  auVar34 = func_0x00f78af4();
code_r0x0168e000:
  if ((bRam0000000003eb5aaa & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb5aaa = 1;
  }
  plVar25 = (long *)(auVar34._0_8_ + 0x30);
  puVar26 = (undefined1 *)*plVar25;
  while( true ) {
    plVar18 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(puVar26,auVar34._8_8_,0);
    if ((plVar18 != (long *)0x0) && (*plVar18 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) break;
    puVar19 = (undefined1 *)func_0x00ff0f44(plVar25,plVar18,puVar26);
    bVar8 = puVar26 == puVar19;
    puVar26 = puVar19;
    if (bVar8) {
      return puVar19;
    }
  }
  func_0x00f78e5c(plVar18);
  puVar26 = (undefined1 *)/*Core.Settings.QualitySettings$$TryGetParameterAndSetValue*/ func_0x0168e0f4();
  if ((int)puVar26 != 0) {
    *(undefined4 *)puVar16 = 0;
    puVar26 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  return puVar26;
}



// ============================================================
// RVA: 0x168d580 | Core.Settings.QualitySettings.TryGetSettingAndLevel
// ============================================================

/* WARNING: Possible PIC construction at 0x0168deb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0168dfe4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0168e0d4) */
/* WARNING: Type propagation algorithm not settling */

undefined1 *
Core_Settings_QualitySettings__TryGetSettingAndLevel
          (undefined8 param_1,long param_2,ulong *param_3,ulong *param_4)

{
  uint uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  int iVar9;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  long lVar15;
  ulong uVar16;
  uint uVar10;
  ulong *puVar17;
  long lVar18;
  long *plVar19;
  undefined1 *puVar20;
  long extraout_x1;
  ulong *puVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong *puVar24;
  ulong *puVar25;
  long *plVar26;
  ulong uVar27;
  float fVar28;
  long unaff_x24;
  long lVar29;
  undefined *puVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  long alStack_2c8 [2];
  undefined1 *puStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined1 *******pppppppuStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined1 auStack_288 [16];
  ulong *puStack_278;
  undefined1 ******ppppppuStack_270;
  undefined *puStack_268;
  long lStack_258;
  ulong uStack_250;
  long lStack_248;
  ulong *puStack_240;
  ulong *puStack_238;
  undefined1 *****pppppuStack_230;
  undefined *puStack_228;
  ulong uStack_218;
  long lStack_210;
  ulong uStack_208;
  ulong uStack_200;
  long lStack_1f8;
  ulong *puStack_1f0;
  ulong *puStack_1e8;
  undefined1 ****ppppuStack_1e0;
  undefined *puStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined1 ***pppuStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  undefined1 auStack_e0 [16];
  ulong *puStack_d0;
  ulong *puStack_c8;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  ulong uStack_a8;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined4 uStack_44;
  
  puVar22 = param_3;
  puVar24 = param_4;
  if ((bRam0000000003eb5aa1 & 1) == 0) {
    func_0x00f78a20(0x3d20b50);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb5aa1 = 1;
  }
  uStack_44 = 0;
  if (param_2 != 0) {
    uVar11 = /*System.String$$IndexOf*/ func_0x029cdad0(param_2,0x40,0);
    uVar10 = (uint)uVar11;
    if (-1 < (int)uVar10) {
      uVar12 = /*System.String$$Substring*/ func_0x029cbbf0(param_2,0,uVar11,0);
      uVar11 = /*System.String$$Substring*/ func_0x029cbbf0(param_2,uVar10 + 1,*(int *)(param_2 + 0x10) + ~uVar10,0);
      if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar13 = /*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
      iVar9 = /*System.Int32$$TryParse*/ func_0x02ae9dac(uVar11,4,uVar13,&uStack_44,0);
      if (iVar9 != 0) {
        *param_3 = uVar12;
        puVar14 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
        goto LAB_0168d69c;
      }
    }
    uStack_44 = 0;
    puVar14 = (undefined1 *)0x0;
    *param_3 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
LAB_0168d69c:
    *(undefined4 *)param_4 = uStack_44;
    return puVar14;
  }
  auVar31 = func_0x00f78af4();
  puStack_58 = &Core_Settings_QualitySettings__CreateSettingQuality;
  uVar12 = 0x3eb5000;
  puVar23 = puVar22;
  puVar25 = puVar24;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5aa6 & 1) == 0) {
    func_0x00f78a20(0x3d2ff68);
    func_0x00f78a20(0x3d3d6e0);
    func_0x00f78a20(0x3d3d6e8);
    func_0x00f78a20(0x3d1f870);
    bRam0000000003eb5aa6 = 1;
  }
  uStack_a8 = 0;
  uVar10 = (uint)puVar22;
  if (4 < uVar10) {
code_r0x0168d820:
    *puVar24 = 0;
    puVar24[1] = 0;
    return (undefined1 *)0x0;
  }
  lVar15 = *(long *)(auVar31._0_8_ + 0x10);
  if (lVar15 == 0) goto code_r0x0168d844;
  puVar23 = &uStack_a8;
  puVar25 = puRam0000000003d2ff68;
  iVar9 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar15,auVar31._8_8_);
  if (iVar9 == 0) goto code_r0x0168d820;
  if ((uStack_a8 == 0) || (*(long *)(uStack_a8 + 0x20) == 0)) {
code_r0x0168d844:
    func_0x00f78af4();
  }
  else {
    uVar1 = *(uint *)(*(long *)(uStack_a8 + 0x20) + 0x18);
    uVar27 = CONCAT44(0,uVar1);
    uVar16 = func_0x00f78a34(/*Core.Settings.QualitySettings.Value[]_TypeInfo*/ uRam0000000003d1f870,uVar27);
    auVar6._8_8_ = uVar16;
    auVar6._0_8_ = uVar27;
    auVar5._8_8_ = uVar16;
    auVar5._0_8_ = uVar27;
    auVar4._8_8_ = uVar16;
    auVar4._0_8_ = uVar27;
    auVar3._8_8_ = uVar16;
    auVar3._0_8_ = uVar27;
    auVar32._8_8_ = uVar16;
    auVar32._0_8_ = uVar27;
    if (0 < (int)uVar1) {
      uVar12 = 0;
      unaff_x24 = uVar16 + 0x20;
      lVar15 = 0x28;
      do {
        auVar31 = auVar32;
        if ((uStack_a8 == 0) ||
           (lVar29 = *(long *)(uStack_a8 + 0x20), auVar31 = auVar3, lVar29 == 0))
        goto code_r0x0168d844;
        if (*(uint *)(lVar29 + 0x18) <= uVar12) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        auVar31 = auVar4;
        if (uVar16 == 0) goto code_r0x0168d844;
        auVar31 = auVar6;
        if (*(uint *)(uVar16 + 0x18) <= uVar12) goto code_r0x0168d848;
        *(undefined8 *)(unaff_x24 + uVar12 * 8) = *(undefined8 *)(*(long *)(lVar29 + 0x10) + lVar15)
        ;
        uVar12 = uVar12 + 1;
        lVar15 = lVar15 + 0x28;
      } while (uVar27 != uVar12);
    }
    auVar31 = auVar5;
    if ((uStack_a8 == 0) || (lVar15 = *(long *)(uStack_a8 + 0x28), auVar31 = auVar6, lVar15 == 0))
    goto code_r0x0168d844;
    if (uVar10 < *(uint *)(lVar15 + 0x18)) {
      lVar15 = lVar15 + (long)(int)uVar10 * 0x10;
      *(ulong *)(lVar15 + 0x20) = (ulong)puVar22 & 0xffffffff;
      *(ulong *)(lVar15 + 0x28) = uVar16;
      *puVar24 = (ulong)puVar22 & 0xffffffff;
      puVar24[1] = uVar16;
      return (undefined1 *)((long)&MACH_HEADER.magic + 1);
    }
  }
code_r0x0168d848:
  uVar11 = func_0x00f78b24();
  auVar32 = func_0x00f78ac0(uVar11,0);
  uVar11 = auVar32._8_8_;
  puStack_b8 = &Core_Settings_QualitySettings__CreateNewSetting;
  puVar21 = puVar23;
  lStack_f0 = unaff_x24;
  uStack_e8 = uVar12;
  puStack_d0 = puVar22;
  puStack_c8 = puVar24;
  ppuStack_c0 = &puStack_60;
  auStack_e0 = auVar31;
  if ((bRam0000000003eb5aa7 & 1) == 0) {
    func_0x00f78a20(0x3d2ff78);
    func_0x00f78a20(0x3d3d6f8);
    func_0x00f78a20(0x3d3d6c0);
    func_0x00f78a20(0x3d1e280);
    func_0x00f78a20(0x3d1e278);
    func_0x00f78a20(0x3d1f868);
    func_0x00f78a20(0x3d28798);
    bRam0000000003eb5aa7 = 1;
  }
  uVar12 = /*Core.Settings.QualitySettings$$DoesSettingExist*/ func_0x0168ef04(auVar32._0_8_,uVar11);
  if ((uVar12 & 1) != 0) {
    uVar16 = 0;
code_r0x0168d9a4:
    *puVar23 = uVar16;
    return (undefined1 *)(ulong)((uint)uVar12 ^ 1);
  }
  uVar16 = func_0x00f78aec(/*Core.Settings.QualitySettings.Setting_TypeInfo*/ uRam0000000003d28798);
  /*System.Object$$.ctor*/ func_0x0294d018(uVar16,0);
  if (uVar16 != 0) {
    *(undefined8 *)(uVar16 + 0x10) = uVar11;
    uVar13 = func_0x00f78aec(/*System.Collections.Generic.List<QualitySettings.Value>_TypeInfo*/ uRam0000000003d1e280);
    /*System.Collections.Generic.List<QualitySettings.Value>$$.ctor*/ func_0x02572ecc(uVar13,uRam0000000003d3d6f8);
    *(undefined8 *)(uVar16 + 0x18) = uVar13;
    unaff_x24 = func_0x00f78aec(/*System.Collections.Generic.List<QualitySettings.Parameter>_TypeInfo*/ uRam0000000003d1e278);
    /*System.Collections.Generic.List<QualitySettings.Parameter>$$.ctor*/ func_0x0257018c(unaff_x24,uRam0000000003d3d6c0);
    *(long *)(uVar16 + 0x20) = unaff_x24;
    uVar13 = func_0x00f78a34(/*Core.Settings.QualitySettings.SettingQuality[]_TypeInfo*/ uRam0000000003d1f868,5);
    *(undefined8 *)(uVar16 + 0x28) = uVar13;
    lVar15 = *(long *)(auVar32._0_8_ + 0x10);
    if (lVar15 != 0) {
      /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$set_Item*/ func_0x01ed7794(lVar15,uVar11,uVar16,uRam0000000003d2ff78);
      goto code_r0x0168d9a4;
    }
  }
  auVar31 = func_0x00f78af4();
  puVar24 = auVar31._8_8_;
  puVar23 = &uStack_1d0;
  puStack_f8 = &Core_Settings_QualitySettings__UpdateSettingParameter;
  puVar22 = puVar21;
  pppuStack_100 = &ppuStack_c0;
  if ((bRam0000000003eb5aa2 & 1) == 0) {
    func_0x00f78a20(0x3d3bee8);
    func_0x00f78a20(0x3d3bee0);
    func_0x00f78a20(0x3d3d6f0);
    func_0x00f78a20(0x3d1de08);
    func_0x00f78a20(0x3d6ba18);
    func_0x00f78a20(0x3d6f9a8);
    func_0x00f78a20(0x3d6fcf0);
    auVar31 = func_0x00f78a20(0x3d75ef0);
    bRam0000000003eb5aa2 = 1;
  }
  lStack_180 = 0;
  uStack_178 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  lStack_1b0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lVar15 = 0x3eb5000;
  if (puVar24 != (ulong *)0x0) {
    uVar12 = /*System.String$$IndexOf*/ func_0x029cdad0(puVar24,0x3d,0);
    uVar10 = (uint)uVar12;
    if ((int)uVar10 < 0) {
      return (undefined1 *)0x0;
    }
    lVar15 = /*System.String$$Substring*/ func_0x029cbbf0(puVar24,0,uVar12,0);
    puVar22 = (ulong *)(ulong)((int)puVar24[2] + ~uVar10);
    puVar25 = (ulong *)0x0;
    auVar31 = /*System.String$$Substring*/ func_0x029cbbf0(puVar24,uVar10 + 1);
    uVar27 = auVar31._0_8_;
    if (lVar15 != 0) {
      auVar31 = /*System.String$$Trim*/ func_0x029bab94(lVar15,0);
      puVar17 = auVar31._0_8_;
      uVar12 = uVar27;
      if (uVar27 != 0) {
        uVar11 = /*System.String$$Trim*/ func_0x029bab94(uVar27,0);
        puVar22 = &uStack_178;
        auVar31 = /*Core.Settings.QualitySettings$$TryParseValue*/ func_0x0168f1fc(uVar11,uVar11);
        if (auVar31._0_4_ == 0) {
          return auVar31._0_8_;
        }
        puVar24 = puVar17;
        if (puVar17 != (ulong *)0x0) {
          puVar22 = (ulong *)0x0;
          auVar31 = /*System.String$$IndexOf*/ func_0x029cdad0(puVar17,0x2e);
          uVar27 = uStack_178;
          lVar29 = auVar31._0_8_;
          uVar10 = auVar31._0_4_;
          if ((int)uVar10 < 0) {
            if (*puVar21 != 0) {
              puVar22 = (ulong *)(*puVar21 + 0x20);
              auVar31 = /*Core.Settings.QualitySettings$$GetOrCreateParameterCopyFromList*/ func_0x0168f394(lVar29,puVar17);
              puVar17 = auVar31._0_8_;
              uStack_1c8 = uStack_178;
              puVar25 = puVar23;
              if (*puVar21 != 0) {
                lVar29 = *(long *)(*puVar21 + 0x20);
                auVar31._8_8_ = 0;
                auVar31._0_8_ = puVar17;
                auVar31 = auVar31 << 0x40;
                if (lVar29 != 0) {
                  uStack_168 = uStack_178;
                  uStack_170 = uStack_1d0;
                  uStack_158 = uStack_1b8;
                  uStack_160 = uStack_1c0;
                  lStack_150 = lStack_1b0;
                  goto code_r0x0168dcfc;
                }
              }
            }
          }
          else {
            if ((uStack_178 & 0xff00000000) != 0) {
              return (undefined1 *)0x0;
            }
            uVar12 = /*System.String$$Substring*/ func_0x029cbbf0(puVar17,0,lVar29,0);
            puVar22 = (ulong *)(ulong)((int)puVar17[2] + ~uVar10);
            puVar25 = (ulong *)0x0;
            auVar31 = /*System.String$$Substring*/ func_0x029cbbf0(puVar17,uVar10 + 1);
            lVar18 = auVar31._0_8_;
            lVar15 = lVar29;
            uVar16 = uVar27;
            if (*puVar21 != 0) {
              puVar25 = &uStack_1a0;
              puVar17 = (ulong *)/*Core.Settings.QualitySettings$$GetOrCreateParameterCopyFromList*/ func_0x0168f394(lVar18,uVar12,*puVar21 + 0x20);
              puVar22 = (ulong *)0x0;
              auVar31 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar18,/*STR('Min')*/ uRam0000000003d6fcf0);
              fVar28 = (float)uVar27;
              lVar15 = lVar18;
              puVar24 = puVar17;
              if (auVar31._0_4_ == 0) {
                puVar22 = (ulong *)0x0;
                auVar31 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar18,/*STR('Max')*/ uRam0000000003d6f9a8);
                if (auVar31._0_4_ == 0) {
                  puVar22 = (ulong *)0x0;
                  auVar31 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar18,/*STR('DecimalPlaces')*/ uRam0000000003d6ba18);
                  if (auVar31._0_4_ == 0) {
                    puVar22 = (ulong *)0x0;
                    auVar31 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar18,/*STR('ValidValue')*/ uRam0000000003d75ef0);
                    if (auVar31._0_4_ != 0) {
                      if (lStack_180 == 0) {
                        lVar15 = func_0x00f78aec(/*System.Collections.Generic.List<float>_TypeInfo*/ uRam0000000003d1de08);
                        auVar31 = /*System.Collections.Generic.List<float>$$.ctor*/ func_0x0245cff8(lVar15,uRam0000000003d3bee0);
                        lStack_180 = lVar15;
                        if (lVar15 == 0) goto code_r0x0168dd20;
                      }
                      lVar15 = lStack_180;
                      auVar31 = /*System.Collections.Generic.List<float>$$Add*/ func_0x0245dca8(uVar27 & 0xffffffff,lStack_180,uRam0000000003d3bee8)
                      ;
                    }
                  }
                  else {
                    fVar2 = -fVar28;
                    if (fVar28 != INFINITY) {
                      fVar2 = fVar28;
                    }
                    uStack_188 = CONCAT44(uStack_188._4_4_,(int)fVar2);
                  }
                }
                else {
                  uStack_190 = CONCAT44(fVar28,(undefined4)uStack_190);
                }
              }
              else {
                uStack_190 = CONCAT44(uStack_190._4_4_,fVar28);
              }
              if (*puVar21 != 0) {
                lVar29 = *(long *)(*puVar21 + 0x20);
                auVar7._8_8_ = 0;
                auVar7._0_8_ = auVar31._8_8_;
                auVar31 = auVar7 << 0x40;
                if (lVar29 != 0) {
                  uStack_168 = uStack_198;
                  uStack_170 = uStack_1a0;
                  uStack_158 = uStack_188;
                  uStack_160 = uStack_190;
                  lStack_150 = lStack_180;
code_r0x0168dcfc:
                  /*System.Collections.Generic.List<QualitySettings.Parameter>$$set_Item*/ func_0x02570b34(lVar29,puVar17,&uStack_170,uRam0000000003d3d6f0);
                  return (undefined1 *)((long)&MACH_HEADER.magic + 1);
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x0168dd20:
  func_0x00f78af4(auVar31._0_8_,auVar31._8_8_);
  puStack_1d8 = &Core_Settings_QualitySettings__UpdateSettingQualityParameter;
  uStack_218 = 0;
  puVar23 = puVar22;
  puVar17 = puVar25;
  lStack_210 = unaff_x24;
  uStack_208 = uVar16;
  uStack_200 = uVar12;
  lStack_1f8 = lVar15;
  puStack_1f0 = puVar24;
  puStack_1e8 = puVar21;
  ppppuStack_1e0 = &pppuStack_100;
  if (extraout_x1 == 0) {
code_r0x0168de30:
    func_0x00f78af4();
  }
  else {
    uVar11 = /*System.String$$IndexOf*/ func_0x029cdad0(extraout_x1,0x3d,0);
    uVar10 = (uint)uVar11;
    if ((int)uVar10 < 0) {
      return (undefined1 *)0x0;
    }
    uVar12 = /*System.String$$Substring*/ func_0x029cbbf0(extraout_x1,0,uVar11,0);
    puVar23 = (ulong *)(ulong)(*(int *)(extraout_x1 + 0x10) + ~uVar10);
    puVar17 = (ulong *)0x0;
    lVar29 = /*System.String$$Substring*/ func_0x029cbbf0(extraout_x1,uVar10 + 1);
    puVar21 = puVar22;
    puVar24 = puVar25;
    lVar15 = extraout_x1;
    if (uVar12 == 0) goto code_r0x0168de30;
    lVar18 = /*System.String$$Trim*/ func_0x029bab94(uVar12,0);
    lVar15 = extraout_x1;
    if (lVar29 == 0) goto code_r0x0168de30;
    uVar11 = /*System.String$$Trim*/ func_0x029bab94(lVar29,0);
    puVar23 = &uStack_218;
    puVar14 = (undefined1 *)/*Core.Settings.QualitySettings$$TryParseValue*/ func_0x0168f1fc(uVar11,uVar11);
    if ((int)puVar14 == 0) {
      return puVar14;
    }
    lVar15 = lVar18;
    if (*puVar25 == 0) goto code_r0x0168de30;
    puVar23 = (ulong *)(*puVar25 + 0x20);
    uVar10 = /*Core.Settings.QualitySettings$$FindParameterInList*/ func_0x0168f130(puVar14,lVar18);
    if ((int)uVar10 < 0) {
code_r0x0168de0c:
      return (undefined1 *)((long)&MACH_HEADER.magic + 1);
    }
    uVar16 = puVar22[1];
    if (uVar16 == 0) goto code_r0x0168de30;
    if (uVar10 < *(uint *)(uVar16 + 0x18)) {
      *(ulong *)(uVar16 + (ulong)uVar10 * 8 + 0x20) = uStack_218;
      goto code_r0x0168de0c;
    }
  }
  uVar11 = func_0x00f78b24();
  auVar31 = func_0x00f78ac0(uVar11,0);
  puStack_228 = &Core_Settings_QualitySettings__RegisterOnSettingChanged;
  uStack_250 = uVar12;
  lStack_248 = lVar15;
  puStack_240 = puVar24;
  puStack_238 = puVar21;
  pppppuStack_230 = &ppppuStack_1e0;
  if ((bRam0000000003eb5a90 & 1) == 0) {
    func_0x00f78a20(0x3d2ff68);
    bRam0000000003eb5a90 = 1;
  }
  lStack_258 = 0;
  lVar15 = *(long *)(auVar31._0_8_ + 0x10);
  if (lVar15 == 0) {
code_r0x0168decc:
    puVar30 = &Core_Settings_QualitySettings_Setting__add_onChangedEvent;
    auVar33 = func_0x00f78af4();
  }
  else {
    puVar17 = puRam0000000003d2ff68;
    puVar14 = (undefined1 *)/*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar15,auVar31._8_8_,&lStack_258);
    auVar33._8_8_ = puVar23;
    auVar33._0_8_ = lStack_258;
    if ((int)puVar14 == 0) {
      return puVar14;
    }
    if (lStack_258 == 0) goto code_r0x0168decc;
    puVar30 = &UNK_0168deb8;
  }
  uVar11 = auVar33._8_8_;
  uStack_290 = 0x3eb5000;
  puStack_278 = puVar23;
  ppppppuStack_270 = &pppppuStack_230;
  puStack_268 = puVar30;
  auStack_288 = auVar31;
  if ((bRam0000000003eb5aa9 & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb5aa9 = 1;
  }
  plVar26 = (long *)(auVar33._0_8_ + 0x30);
  puVar14 = (undefined1 *)*plVar26;
  while( true ) {
    uVar13 = 0;
    plVar19 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(puVar14,uVar11);
    if ((plVar19 != (long *)0x0) && (*plVar19 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) break;
    puVar20 = (undefined1 *)func_0x00ff0f44(plVar26,plVar19,puVar14);
    bVar8 = puVar14 == puVar20;
    puVar14 = puVar20;
    if (bVar8) {
      return puVar20;
    }
  }
  auVar31 = func_0x00f78e5c(plVar19);
  alStack_2c8[1] = 0x3d1b598;
  puStack_298 = &Core_Settings_QualitySettings__UnRegisterOnSettingChanged;
  puStack_2b8 = puVar14;
  plStack_2b0 = plVar26;
  uStack_2a8 = uVar11;
  pppppppuStack_2a0 = &ppppppuStack_270;
  if ((bRam0000000003eb5a91 & 1) == 0) {
    func_0x00f78a20(0x3d2ff68);
    bRam0000000003eb5a91 = 1;
  }
  alStack_2c8[0] = 0;
  lVar15 = *(long *)(auVar31._0_8_ + 0x10);
  if (lVar15 != 0) {
    puVar17 = puRam0000000003d2ff68;
    puVar14 = (undefined1 *)/*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar15,auVar31._8_8_,alStack_2c8);
    auVar34._8_8_ = uVar13;
    auVar34._0_8_ = alStack_2c8[0];
    if ((int)puVar14 == 0) {
      return puVar14;
    }
    if (alStack_2c8[0] != 0) goto code_r0x0168e000;
  }
  auVar34 = func_0x00f78af4();
code_r0x0168e000:
  if ((bRam0000000003eb5aaa & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb5aaa = 1;
  }
  plVar26 = (long *)(auVar34._0_8_ + 0x30);
  puVar14 = (undefined1 *)*plVar26;
  while( true ) {
    plVar19 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(puVar14,auVar34._8_8_,0);
    if ((plVar19 != (long *)0x0) && (*plVar19 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) break;
    puVar20 = (undefined1 *)func_0x00ff0f44(plVar26,plVar19,puVar14);
    bVar8 = puVar14 == puVar20;
    puVar14 = puVar20;
    if (bVar8) {
      return puVar20;
    }
  }
  func_0x00f78e5c(plVar19);
  puVar14 = (undefined1 *)/*Core.Settings.QualitySettings$$TryGetParameterAndSetValue*/ func_0x0168e0f4();
  if ((int)puVar14 != 0) {
    *(undefined4 *)puVar17 = 0;
    puVar14 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  return puVar14;
}



// ============================================================
// RVA: 0x168d6bc | Core.Settings.QualitySettings.CreateSettingQuality
// ============================================================

/* WARNING: Possible PIC construction at 0x0168deb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0168dfe4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0168e0d4) */

undefined1 *
Core_Settings_QualitySettings__CreateSettingQuality
          (ulong param_1,ulong param_2,ulong *param_3,ulong *param_4)

{
  uint uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  int iVar5;
  undefined8 uVar7;
  uint uVar6;
  undefined8 uVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  undefined1 *puVar12;
  long *plVar13;
  undefined1 *puVar14;
  long extraout_x1;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  long *plVar20;
  float fVar21;
  ulong uVar22;
  ulong uVar23;
  long unaff_x24;
  long lVar24;
  long lVar25;
  undefined *puVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  long alStack_278 [2];
  undefined1 *puStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined1 ******ppppppuStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined1 auStack_238 [16];
  ulong *puStack_228;
  undefined1 *****pppppuStack_220;
  undefined *puStack_218;
  long lStack_208;
  ulong uStack_200;
  long lStack_1f8;
  ulong *puStack_1f0;
  ulong *puStack_1e8;
  undefined1 ****ppppuStack_1e0;
  undefined *puStack_1d8;
  ulong uStack_1c8;
  long lStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  long lStack_1a8;
  ulong *puStack_1a0;
  ulong *puStack_198;
  undefined1 ***pppuStack_190;
  undefined *puStack_188;
  ulong uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  ulong uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  ulong uStack_58;
  
  uVar22 = 0x3eb5000;
  puVar16 = param_3;
  puVar18 = param_4;
  if ((bRam0000000003eb5aa6 & 1) == 0) {
    func_0x00f78a20(0x3d2ff68);
    func_0x00f78a20(0x3d3d6e0);
    func_0x00f78a20(0x3d3d6e8);
    func_0x00f78a20(0x3d1f870);
    bRam0000000003eb5aa6 = 1;
  }
  uStack_58 = 0;
  uVar6 = (uint)param_3;
  if (4 < uVar6) {
LAB_0168d820:
    *param_4 = 0;
    param_4[1] = 0;
    return (undefined1 *)0x0;
  }
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_0168d844;
  puVar16 = &uStack_58;
  puVar18 = puRam0000000003d2ff68;
  iVar5 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(param_1 + 0x10),param_2);
  if (iVar5 == 0) goto LAB_0168d820;
  if ((uStack_58 == 0) || (*(long *)(uStack_58 + 0x20) == 0)) {
LAB_0168d844:
    func_0x00f78af4();
  }
  else {
    uVar1 = *(uint *)(*(long *)(uStack_58 + 0x20) + 0x18);
    param_1 = (ulong)uVar1;
    param_2 = func_0x00f78a34(/*Core.Settings.QualitySettings.Value[]_TypeInfo*/ uRam0000000003d1f870,param_1);
    if (0 < (int)uVar1) {
      uVar22 = 0;
      unaff_x24 = param_2 + 0x20;
      lVar24 = 0x28;
      do {
        if ((uStack_58 == 0) || (lVar25 = *(long *)(uStack_58 + 0x20), lVar25 == 0))
        goto LAB_0168d844;
        if (*(uint *)(lVar25 + 0x18) <= uVar22) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (param_2 == 0) goto LAB_0168d844;
        if (*(uint *)(param_2 + 0x18) <= uVar22) goto LAB_0168d848;
        *(undefined8 *)(unaff_x24 + uVar22 * 8) = *(undefined8 *)(*(long *)(lVar25 + 0x10) + lVar24)
        ;
        uVar22 = uVar22 + 1;
        lVar24 = lVar24 + 0x28;
      } while (param_1 != uVar22);
    }
    if ((uStack_58 == 0) || (lVar24 = *(long *)(uStack_58 + 0x28), lVar24 == 0)) goto LAB_0168d844;
    if (uVar6 < *(uint *)(lVar24 + 0x18)) {
      lVar24 = lVar24 + (long)(int)uVar6 * 0x10;
      *(ulong *)(lVar24 + 0x20) = (ulong)param_3 & 0xffffffff;
      *(ulong *)(lVar24 + 0x28) = param_2;
      *param_4 = (ulong)param_3 & 0xffffffff;
      param_4[1] = param_2;
      return (undefined1 *)((long)&MACH_HEADER.magic + 1);
    }
  }
LAB_0168d848:
  uVar7 = func_0x00f78b24();
  auVar27 = func_0x00f78ac0(uVar7,0);
  uVar7 = auVar27._8_8_;
  puStack_68 = &Core_Settings_QualitySettings__CreateNewSetting;
  puVar15 = puVar16;
  lStack_a0 = unaff_x24;
  uStack_98 = uVar22;
  uStack_90 = param_1;
  uStack_88 = param_2;
  puStack_80 = param_3;
  puStack_78 = param_4;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5aa7 & 1) == 0) {
    func_0x00f78a20(0x3d2ff78);
    func_0x00f78a20(0x3d3d6f8);
    func_0x00f78a20(0x3d3d6c0);
    func_0x00f78a20(0x3d1e280);
    func_0x00f78a20(0x3d1e278);
    func_0x00f78a20(0x3d1f868);
    func_0x00f78a20(0x3d28798);
    bRam0000000003eb5aa7 = 1;
  }
  uVar22 = /*Core.Settings.QualitySettings$$DoesSettingExist*/ func_0x0168ef04(auVar27._0_8_,uVar7);
  if ((uVar22 & 1) != 0) {
    uVar23 = 0;
code_r0x0168d9a4:
    *puVar16 = uVar23;
    return (undefined1 *)(ulong)((uint)uVar22 ^ 1);
  }
  uVar23 = func_0x00f78aec(/*Core.Settings.QualitySettings.Setting_TypeInfo*/ uRam0000000003d28798);
  /*System.Object$$.ctor*/ func_0x0294d018(uVar23,0);
  if (uVar23 != 0) {
    *(undefined8 *)(uVar23 + 0x10) = uVar7;
    uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<QualitySettings.Value>_TypeInfo*/ uRam0000000003d1e280);
    /*System.Collections.Generic.List<QualitySettings.Value>$$.ctor*/ func_0x02572ecc(uVar8,uRam0000000003d3d6f8);
    *(undefined8 *)(uVar23 + 0x18) = uVar8;
    unaff_x24 = func_0x00f78aec(/*System.Collections.Generic.List<QualitySettings.Parameter>_TypeInfo*/ uRam0000000003d1e278);
    /*System.Collections.Generic.List<QualitySettings.Parameter>$$.ctor*/ func_0x0257018c(unaff_x24,uRam0000000003d3d6c0);
    *(long *)(uVar23 + 0x20) = unaff_x24;
    uVar8 = func_0x00f78a34(/*Core.Settings.QualitySettings.SettingQuality[]_TypeInfo*/ uRam0000000003d1f868,5);
    *(undefined8 *)(uVar23 + 0x28) = uVar8;
    lVar24 = *(long *)(auVar27._0_8_ + 0x10);
    if (lVar24 != 0) {
      /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$set_Item*/ func_0x01ed7794(lVar24,uVar7,uVar23,uRam0000000003d2ff78);
      goto code_r0x0168d9a4;
    }
  }
  auVar27 = func_0x00f78af4();
  puVar19 = auVar27._8_8_;
  puVar17 = &uStack_180;
  puStack_a8 = &Core_Settings_QualitySettings__UpdateSettingParameter;
  puVar16 = puVar15;
  ppuStack_b0 = &puStack_70;
  if ((bRam0000000003eb5aa2 & 1) == 0) {
    func_0x00f78a20(0x3d3bee8);
    func_0x00f78a20(0x3d3bee0);
    func_0x00f78a20(0x3d3d6f0);
    func_0x00f78a20(0x3d1de08);
    func_0x00f78a20(0x3d6ba18);
    func_0x00f78a20(0x3d6f9a8);
    func_0x00f78a20(0x3d6fcf0);
    auVar27 = func_0x00f78a20(0x3d75ef0);
    bRam0000000003eb5aa2 = 1;
  }
  lStack_130 = 0;
  uStack_128 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_160 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  lVar24 = 0x3eb5000;
  if (puVar19 != (ulong *)0x0) {
    uVar22 = /*System.String$$IndexOf*/ func_0x029cdad0(puVar19,0x3d,0);
    uVar6 = (uint)uVar22;
    if ((int)uVar6 < 0) {
      return (undefined1 *)0x0;
    }
    lVar24 = /*System.String$$Substring*/ func_0x029cbbf0(puVar19,0,uVar22,0);
    puVar16 = (ulong *)(ulong)((int)puVar19[2] + ~uVar6);
    puVar18 = (ulong *)0x0;
    auVar27 = /*System.String$$Substring*/ func_0x029cbbf0(puVar19,uVar6 + 1);
    uVar9 = auVar27._0_8_;
    if (lVar24 != 0) {
      auVar27 = /*System.String$$Trim*/ func_0x029bab94(lVar24,0);
      puVar10 = auVar27._0_8_;
      uVar22 = uVar9;
      if (uVar9 != 0) {
        uVar7 = /*System.String$$Trim*/ func_0x029bab94(uVar9,0);
        puVar16 = &uStack_128;
        auVar27 = /*Core.Settings.QualitySettings$$TryParseValue*/ func_0x0168f1fc(uVar7,uVar7);
        if (auVar27._0_4_ == 0) {
          return auVar27._0_8_;
        }
        puVar19 = puVar10;
        if (puVar10 != (ulong *)0x0) {
          puVar16 = (ulong *)0x0;
          auVar27 = /*System.String$$IndexOf*/ func_0x029cdad0(puVar10,0x2e);
          uVar9 = uStack_128;
          lVar25 = auVar27._0_8_;
          uVar6 = auVar27._0_4_;
          if ((int)uVar6 < 0) {
            if (*puVar15 != 0) {
              puVar16 = (ulong *)(*puVar15 + 0x20);
              auVar27 = /*Core.Settings.QualitySettings$$GetOrCreateParameterCopyFromList*/ func_0x0168f394(lVar25,puVar10);
              puVar10 = auVar27._0_8_;
              uStack_178 = uStack_128;
              puVar18 = puVar17;
              if (*puVar15 != 0) {
                lVar25 = *(long *)(*puVar15 + 0x20);
                auVar27._8_8_ = 0;
                auVar27._0_8_ = puVar10;
                auVar27 = auVar27 << 0x40;
                if (lVar25 != 0) {
                  uStack_118 = uStack_128;
                  uStack_120 = uStack_180;
                  uStack_108 = uStack_168;
                  uStack_110 = uStack_170;
                  lStack_100 = lStack_160;
                  goto code_r0x0168dcfc;
                }
              }
            }
          }
          else {
            if ((uStack_128 & 0xff00000000) != 0) {
              return (undefined1 *)0x0;
            }
            uVar22 = /*System.String$$Substring*/ func_0x029cbbf0(puVar10,0,lVar25,0);
            puVar16 = (ulong *)(ulong)((int)puVar10[2] + ~uVar6);
            puVar18 = (ulong *)0x0;
            auVar27 = /*System.String$$Substring*/ func_0x029cbbf0(puVar10,uVar6 + 1);
            lVar11 = auVar27._0_8_;
            lVar24 = lVar25;
            uVar23 = uVar9;
            if (*puVar15 != 0) {
              puVar18 = &uStack_150;
              puVar10 = (ulong *)/*Core.Settings.QualitySettings$$GetOrCreateParameterCopyFromList*/ func_0x0168f394(lVar11,uVar22,*puVar15 + 0x20);
              puVar16 = (ulong *)0x0;
              auVar27 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar11,/*STR('Min')*/ uRam0000000003d6fcf0);
              fVar21 = (float)uVar9;
              lVar24 = lVar11;
              puVar19 = puVar10;
              if (auVar27._0_4_ == 0) {
                puVar16 = (ulong *)0x0;
                auVar27 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar11,/*STR('Max')*/ uRam0000000003d6f9a8);
                if (auVar27._0_4_ == 0) {
                  puVar16 = (ulong *)0x0;
                  auVar27 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar11,/*STR('DecimalPlaces')*/ uRam0000000003d6ba18);
                  if (auVar27._0_4_ == 0) {
                    puVar16 = (ulong *)0x0;
                    auVar27 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar11,/*STR('ValidValue')*/ uRam0000000003d75ef0);
                    if (auVar27._0_4_ != 0) {
                      if (lStack_130 == 0) {
                        lVar24 = func_0x00f78aec(/*System.Collections.Generic.List<float>_TypeInfo*/ uRam0000000003d1de08);
                        auVar27 = /*System.Collections.Generic.List<float>$$.ctor*/ func_0x0245cff8(lVar24,uRam0000000003d3bee0);
                        lStack_130 = lVar24;
                        if (lVar24 == 0) goto code_r0x0168dd20;
                      }
                      lVar24 = lStack_130;
                      auVar27 = /*System.Collections.Generic.List<float>$$Add*/ func_0x0245dca8(uVar9 & 0xffffffff,lStack_130,uRam0000000003d3bee8);
                    }
                  }
                  else {
                    fVar2 = -fVar21;
                    if (fVar21 != INFINITY) {
                      fVar2 = fVar21;
                    }
                    uStack_138 = CONCAT44(uStack_138._4_4_,(int)fVar2);
                  }
                }
                else {
                  uStack_140 = CONCAT44(fVar21,(undefined4)uStack_140);
                }
              }
              else {
                uStack_140 = CONCAT44(uStack_140._4_4_,fVar21);
              }
              if (*puVar15 != 0) {
                lVar25 = *(long *)(*puVar15 + 0x20);
                auVar3._8_8_ = 0;
                auVar3._0_8_ = auVar27._8_8_;
                auVar27 = auVar3 << 0x40;
                if (lVar25 != 0) {
                  uStack_118 = uStack_148;
                  uStack_120 = uStack_150;
                  uStack_108 = uStack_138;
                  uStack_110 = uStack_140;
                  lStack_100 = lStack_130;
code_r0x0168dcfc:
                  /*System.Collections.Generic.List<QualitySettings.Parameter>$$set_Item*/ func_0x02570b34(lVar25,puVar10,&uStack_120,uRam0000000003d3d6f0);
                  return (undefined1 *)((long)&MACH_HEADER.magic + 1);
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x0168dd20:
  func_0x00f78af4(auVar27._0_8_,auVar27._8_8_);
  puStack_188 = &Core_Settings_QualitySettings__UpdateSettingQualityParameter;
  uStack_1c8 = 0;
  puVar17 = puVar16;
  puVar10 = puVar18;
  lStack_1c0 = unaff_x24;
  uStack_1b8 = uVar23;
  uStack_1b0 = uVar22;
  lStack_1a8 = lVar24;
  puStack_1a0 = puVar19;
  puStack_198 = puVar15;
  pppuStack_190 = &ppuStack_b0;
  if (extraout_x1 == 0) {
code_r0x0168de30:
    func_0x00f78af4();
  }
  else {
    uVar7 = /*System.String$$IndexOf*/ func_0x029cdad0(extraout_x1,0x3d,0);
    uVar6 = (uint)uVar7;
    if ((int)uVar6 < 0) {
      return (undefined1 *)0x0;
    }
    uVar22 = /*System.String$$Substring*/ func_0x029cbbf0(extraout_x1,0,uVar7,0);
    puVar17 = (ulong *)(ulong)(*(int *)(extraout_x1 + 0x10) + ~uVar6);
    puVar10 = (ulong *)0x0;
    lVar25 = /*System.String$$Substring*/ func_0x029cbbf0(extraout_x1,uVar6 + 1);
    puVar15 = puVar16;
    puVar19 = puVar18;
    lVar24 = extraout_x1;
    if ((uVar22 == 0) || (lVar11 = /*System.String$$Trim*/ func_0x029bab94(uVar22,0), lVar24 = extraout_x1, lVar25 == 0))
    goto code_r0x0168de30;
    uVar7 = /*System.String$$Trim*/ func_0x029bab94(lVar25,0);
    puVar17 = &uStack_1c8;
    puVar12 = (undefined1 *)/*Core.Settings.QualitySettings$$TryParseValue*/ func_0x0168f1fc(uVar7,uVar7);
    if ((int)puVar12 == 0) {
      return puVar12;
    }
    lVar24 = lVar11;
    if (*puVar18 == 0) goto code_r0x0168de30;
    puVar17 = (ulong *)(*puVar18 + 0x20);
    uVar6 = /*Core.Settings.QualitySettings$$FindParameterInList*/ func_0x0168f130(puVar12,lVar11);
    if ((int)uVar6 < 0) {
code_r0x0168de0c:
      return (undefined1 *)((long)&MACH_HEADER.magic + 1);
    }
    uVar23 = puVar16[1];
    if (uVar23 == 0) goto code_r0x0168de30;
    if (uVar6 < *(uint *)(uVar23 + 0x18)) {
      *(ulong *)(uVar23 + (ulong)uVar6 * 8 + 0x20) = uStack_1c8;
      goto code_r0x0168de0c;
    }
  }
  uVar7 = func_0x00f78b24();
  auVar27 = func_0x00f78ac0(uVar7,0);
  puStack_1d8 = &Core_Settings_QualitySettings__RegisterOnSettingChanged;
  uStack_200 = uVar22;
  lStack_1f8 = lVar24;
  puStack_1f0 = puVar19;
  puStack_1e8 = puVar15;
  ppppuStack_1e0 = &pppuStack_190;
  if ((bRam0000000003eb5a90 & 1) == 0) {
    func_0x00f78a20(0x3d2ff68);
    bRam0000000003eb5a90 = 1;
  }
  lStack_208 = 0;
  lVar24 = *(long *)(auVar27._0_8_ + 0x10);
  if (lVar24 == 0) {
code_r0x0168decc:
    puVar26 = &Core_Settings_QualitySettings_Setting__add_onChangedEvent;
    auVar28 = func_0x00f78af4();
  }
  else {
    puVar10 = puRam0000000003d2ff68;
    puVar12 = (undefined1 *)/*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar24,auVar27._8_8_,&lStack_208);
    auVar28._8_8_ = puVar17;
    auVar28._0_8_ = lStack_208;
    if ((int)puVar12 == 0) {
      return puVar12;
    }
    if (lStack_208 == 0) goto code_r0x0168decc;
    puVar26 = &UNK_0168deb8;
  }
  uVar7 = auVar28._8_8_;
  uStack_240 = 0x3eb5000;
  puStack_228 = puVar17;
  pppppuStack_220 = &ppppuStack_1e0;
  puStack_218 = puVar26;
  auStack_238 = auVar27;
  if ((bRam0000000003eb5aa9 & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb5aa9 = 1;
  }
  plVar20 = (long *)(auVar28._0_8_ + 0x30);
  puVar12 = (undefined1 *)*plVar20;
  while( true ) {
    uVar8 = 0;
    plVar13 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(puVar12,uVar7);
    if ((plVar13 != (long *)0x0) && (*plVar13 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) break;
    puVar14 = (undefined1 *)func_0x00ff0f44(plVar20,plVar13,puVar12);
    bVar4 = puVar12 == puVar14;
    puVar12 = puVar14;
    if (bVar4) {
      return puVar14;
    }
  }
  auVar27 = func_0x00f78e5c(plVar13);
  alStack_278[1] = 0x3d1b598;
  puStack_248 = &Core_Settings_QualitySettings__UnRegisterOnSettingChanged;
  puStack_268 = puVar12;
  plStack_260 = plVar20;
  uStack_258 = uVar7;
  ppppppuStack_250 = &pppppuStack_220;
  if ((bRam0000000003eb5a91 & 1) == 0) {
    func_0x00f78a20(0x3d2ff68);
    bRam0000000003eb5a91 = 1;
  }
  alStack_278[0] = 0;
  lVar24 = *(long *)(auVar27._0_8_ + 0x10);
  if (lVar24 != 0) {
    puVar10 = puRam0000000003d2ff68;
    puVar12 = (undefined1 *)/*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar24,auVar27._8_8_,alStack_278);
    auVar29._8_8_ = uVar8;
    auVar29._0_8_ = alStack_278[0];
    if ((int)puVar12 == 0) {
      return puVar12;
    }
    if (alStack_278[0] != 0) goto code_r0x0168e000;
  }
  auVar29 = func_0x00f78af4();
code_r0x0168e000:
  if ((bRam0000000003eb5aaa & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb5aaa = 1;
  }
  plVar20 = (long *)(auVar29._0_8_ + 0x30);
  puVar12 = (undefined1 *)*plVar20;
  while( true ) {
    plVar13 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(puVar12,auVar29._8_8_,0);
    if ((plVar13 != (long *)0x0) && (*plVar13 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) break;
    puVar14 = (undefined1 *)func_0x00ff0f44(plVar20,plVar13,puVar12);
    bVar4 = puVar12 == puVar14;
    puVar12 = puVar14;
    if (bVar4) {
      return puVar14;
    }
  }
  func_0x00f78e5c(plVar13);
  puVar12 = (undefined1 *)/*Core.Settings.QualitySettings$$TryGetParameterAndSetValue*/ func_0x0168e0f4();
  if ((int)puVar12 != 0) {
    *(undefined4 *)puVar10 = 0;
    puVar12 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  return puVar12;
}



// ============================================================
// RVA: 0x168d854 | Core.Settings.QualitySettings.CreateNewSetting
// ============================================================

/* WARNING: Possible PIC construction at 0x0168deb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0168dfe4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0168e0d4) */

undefined1 *
Core_Settings_QualitySettings__CreateNewSetting
          (long param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  float fVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long extraout_x1;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  undefined8 uVar17;
  long *plVar18;
  long *plVar19;
  float fVar20;
  ulong uVar21;
  undefined8 unaff_x24;
  undefined *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  long alStack_218 [2];
  undefined1 *puStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined1 *****pppppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [16];
  ulong *puStack_1c8;
  undefined1 ****ppppuStack_1c0;
  undefined *puStack_1b8;
  long lStack_1a8;
  ulong uStack_1a0;
  long lStack_198;
  long *plStack_190;
  ulong *puStack_188;
  undefined1 ***pppuStack_180;
  undefined *puStack_178;
  ulong uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  long lStack_148;
  long *plStack_140;
  ulong *puStack_138;
  undefined1 **ppuStack_130;
  undefined *puStack_128;
  long lStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  puVar14 = param_3;
  if ((bRam0000000003eb5aa7 & 1) == 0) {
    func_0x00f78a20(0x3d2ff78);
    func_0x00f78a20(0x3d3d6f8);
    func_0x00f78a20(0x3d3d6c0);
    func_0x00f78a20(0x3d1e280);
    func_0x00f78a20(0x3d1e278);
    func_0x00f78a20(0x3d1f868);
    func_0x00f78a20(0x3d28798);
    bRam0000000003eb5aa7 = 1;
  }
  uVar5 = /*Core.Settings.QualitySettings$$DoesSettingExist*/ func_0x0168ef04(param_1,param_2);
  if ((uVar5 & 1) != 0) {
    uVar21 = 0;
LAB_0168d9a4:
    *param_3 = uVar21;
    return (undefined1 *)(ulong)((uint)uVar5 ^ 1);
  }
  uVar21 = func_0x00f78aec(/*Core.Settings.QualitySettings.Setting_TypeInfo*/ uRam0000000003d28798);
  /*System.Object$$.ctor*/ func_0x0294d018(uVar21,0);
  if (uVar21 != 0) {
    *(undefined8 *)(uVar21 + 0x10) = param_2;
    uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<QualitySettings.Value>_TypeInfo*/ uRam0000000003d1e280);
    /*System.Collections.Generic.List<QualitySettings.Value>$$.ctor*/ func_0x02572ecc(uVar6,uRam0000000003d3d6f8);
    *(undefined8 *)(uVar21 + 0x18) = uVar6;
    unaff_x24 = func_0x00f78aec(/*System.Collections.Generic.List<QualitySettings.Parameter>_TypeInfo*/ uRam0000000003d1e278);
    /*System.Collections.Generic.List<QualitySettings.Parameter>$$.ctor*/ func_0x0257018c(unaff_x24,uRam0000000003d3d6c0);
    *(undefined8 *)(uVar21 + 0x20) = unaff_x24;
    uVar6 = func_0x00f78a34(/*Core.Settings.QualitySettings.SettingQuality[]_TypeInfo*/ uRam0000000003d1f868,5);
    *(undefined8 *)(uVar21 + 0x28) = uVar6;
    if (*(long *)(param_1 + 0x10) != 0) {
      /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$set_Item*/ func_0x01ed7794(*(long *)(param_1 + 0x10),param_2,uVar21,uRam0000000003d2ff78);
      goto LAB_0168d9a4;
    }
  }
  auVar23 = func_0x00f78af4();
  plVar19 = auVar23._8_8_;
  plVar18 = &lStack_120;
  puStack_48 = &Core_Settings_QualitySettings__UpdateSettingParameter;
  puVar15 = puVar14;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5aa2 & 1) == 0) {
    func_0x00f78a20(0x3d3bee8);
    func_0x00f78a20(0x3d3bee0);
    func_0x00f78a20(0x3d3d6f0);
    func_0x00f78a20(0x3d1de08);
    func_0x00f78a20(0x3d6ba18);
    func_0x00f78a20(0x3d6f9a8);
    func_0x00f78a20(0x3d6fcf0);
    auVar23 = func_0x00f78a20(0x3d75ef0);
    bRam0000000003eb5aa2 = 1;
  }
  lStack_d0 = 0;
  uStack_c8 = 0;
  uStack_e8 = 0;
  lStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_100 = 0;
  uStack_118 = 0;
  lStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar7 = 0x3eb5000;
  if (plVar19 != (long *)0x0) {
    uVar5 = /*System.String$$IndexOf*/ func_0x029cdad0(plVar19,0x3d,0);
    uVar4 = (uint)uVar5;
    if ((int)uVar4 < 0) {
      return (undefined1 *)0x0;
    }
    lVar7 = /*System.String$$Substring*/ func_0x029cbbf0(plVar19,0,uVar5,0);
    puVar15 = (ulong *)(ulong)((int)plVar19[2] + ~uVar4);
    param_4 = (long *)0x0;
    auVar23 = /*System.String$$Substring*/ func_0x029cbbf0(plVar19,uVar4 + 1);
    uVar8 = auVar23._0_8_;
    if (lVar7 != 0) {
      auVar23 = /*System.String$$Trim*/ func_0x029bab94(lVar7,0);
      plVar9 = auVar23._0_8_;
      uVar5 = uVar8;
      if (uVar8 != 0) {
        uVar6 = /*System.String$$Trim*/ func_0x029bab94(uVar8,0);
        puVar15 = &uStack_c8;
        auVar23 = /*Core.Settings.QualitySettings$$TryParseValue*/ func_0x0168f1fc(uVar6,uVar6);
        if (auVar23._0_4_ == 0) {
          return auVar23._0_8_;
        }
        plVar19 = plVar9;
        if (plVar9 != (long *)0x0) {
          puVar15 = (ulong *)0x0;
          auVar23 = /*System.String$$IndexOf*/ func_0x029cdad0(plVar9,0x2e);
          uVar8 = uStack_c8;
          lVar10 = auVar23._0_8_;
          uVar4 = auVar23._0_4_;
          if ((int)uVar4 < 0) {
            if (*puVar14 != 0) {
              puVar15 = (ulong *)(*puVar14 + 0x20);
              auVar23 = /*Core.Settings.QualitySettings$$GetOrCreateParameterCopyFromList*/ func_0x0168f394(lVar10,plVar9);
              plVar9 = auVar23._0_8_;
              uStack_118 = uStack_c8;
              param_4 = plVar18;
              if (*puVar14 != 0) {
                lVar10 = *(long *)(*puVar14 + 0x20);
                auVar23._8_8_ = 0;
                auVar23._0_8_ = plVar9;
                auVar23 = auVar23 << 0x40;
                if (lVar10 != 0) {
                  uStack_b8 = uStack_c8;
                  lStack_c0 = lStack_120;
                  uStack_a8 = uStack_108;
                  uStack_b0 = uStack_110;
                  lStack_a0 = lStack_100;
                  goto code_r0x0168dcfc;
                }
              }
            }
          }
          else {
            if ((uStack_c8 & 0xff00000000) != 0) {
              return (undefined1 *)0x0;
            }
            uVar5 = /*System.String$$Substring*/ func_0x029cbbf0(plVar9,0,lVar10,0);
            puVar15 = (ulong *)(ulong)((int)plVar9[2] + ~uVar4);
            param_4 = (long *)0x0;
            auVar23 = /*System.String$$Substring*/ func_0x029cbbf0(plVar9,uVar4 + 1);
            lVar11 = auVar23._0_8_;
            lVar7 = lVar10;
            uVar21 = uVar8;
            if (*puVar14 != 0) {
              param_4 = &lStack_f0;
              plVar9 = (long *)/*Core.Settings.QualitySettings$$GetOrCreateParameterCopyFromList*/ func_0x0168f394(lVar11,uVar5,*puVar14 + 0x20);
              puVar15 = (ulong *)0x0;
              auVar23 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar11,/*STR('Min')*/ uRam0000000003d6fcf0);
              fVar20 = (float)uVar8;
              lVar7 = lVar11;
              plVar19 = plVar9;
              if (auVar23._0_4_ == 0) {
                puVar15 = (ulong *)0x0;
                auVar23 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar11,/*STR('Max')*/ uRam0000000003d6f9a8);
                if (auVar23._0_4_ == 0) {
                  puVar15 = (ulong *)0x0;
                  auVar23 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar11,/*STR('DecimalPlaces')*/ uRam0000000003d6ba18);
                  if (auVar23._0_4_ == 0) {
                    puVar15 = (ulong *)0x0;
                    auVar23 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar11,/*STR('ValidValue')*/ uRam0000000003d75ef0);
                    if (auVar23._0_4_ != 0) {
                      if (lStack_d0 == 0) {
                        lVar7 = func_0x00f78aec(/*System.Collections.Generic.List<float>_TypeInfo*/ uRam0000000003d1de08);
                        auVar23 = /*System.Collections.Generic.List<float>$$.ctor*/ func_0x0245cff8(lVar7,uRam0000000003d3bee0);
                        lStack_d0 = lVar7;
                        if (lVar7 == 0) goto code_r0x0168dd20;
                      }
                      lVar7 = lStack_d0;
                      auVar23 = /*System.Collections.Generic.List<float>$$Add*/ func_0x0245dca8(uVar8 & 0xffffffff,lStack_d0,uRam0000000003d3bee8);
                    }
                  }
                  else {
                    fVar1 = -fVar20;
                    if (fVar20 != INFINITY) {
                      fVar1 = fVar20;
                    }
                    uStack_d8 = CONCAT44(uStack_d8._4_4_,(int)fVar1);
                  }
                }
                else {
                  uStack_e0 = CONCAT44(fVar20,(undefined4)uStack_e0);
                }
              }
              else {
                uStack_e0 = CONCAT44(uStack_e0._4_4_,fVar20);
              }
              if (*puVar14 != 0) {
                lVar10 = *(long *)(*puVar14 + 0x20);
                auVar2._8_8_ = 0;
                auVar2._0_8_ = auVar23._8_8_;
                auVar23 = auVar2 << 0x40;
                if (lVar10 != 0) {
                  uStack_b8 = uStack_e8;
                  lStack_c0 = lStack_f0;
                  uStack_a8 = uStack_d8;
                  uStack_b0 = uStack_e0;
                  lStack_a0 = lStack_d0;
code_r0x0168dcfc:
                  /*System.Collections.Generic.List<QualitySettings.Parameter>$$set_Item*/ func_0x02570b34(lVar10,plVar9,&lStack_c0,uRam0000000003d3d6f0);
                  return (undefined1 *)((long)&MACH_HEADER.magic + 1);
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x0168dd20:
  func_0x00f78af4(auVar23._0_8_,auVar23._8_8_);
  puStack_128 = &Core_Settings_QualitySettings__UpdateSettingQualityParameter;
  uStack_168 = 0;
  puVar16 = puVar15;
  plVar18 = param_4;
  uStack_160 = unaff_x24;
  uStack_158 = uVar21;
  uStack_150 = uVar5;
  lStack_148 = lVar7;
  plStack_140 = plVar19;
  puStack_138 = puVar14;
  ppuStack_130 = &puStack_50;
  if (extraout_x1 == 0) {
code_r0x0168de30:
    func_0x00f78af4();
  }
  else {
    uVar6 = /*System.String$$IndexOf*/ func_0x029cdad0(extraout_x1,0x3d,0);
    uVar4 = (uint)uVar6;
    if ((int)uVar4 < 0) {
      return (undefined1 *)0x0;
    }
    uVar5 = /*System.String$$Substring*/ func_0x029cbbf0(extraout_x1,0,uVar6,0);
    puVar16 = (ulong *)(ulong)(*(int *)(extraout_x1 + 0x10) + ~uVar4);
    plVar18 = (long *)0x0;
    lVar10 = /*System.String$$Substring*/ func_0x029cbbf0(extraout_x1,uVar4 + 1);
    puVar14 = puVar15;
    plVar19 = param_4;
    lVar7 = extraout_x1;
    if ((uVar5 == 0) || (lVar11 = /*System.String$$Trim*/ func_0x029bab94(uVar5,0), lVar7 = extraout_x1, lVar10 == 0))
    goto code_r0x0168de30;
    uVar6 = /*System.String$$Trim*/ func_0x029bab94(lVar10,0);
    puVar16 = &uStack_168;
    puVar12 = (undefined1 *)/*Core.Settings.QualitySettings$$TryParseValue*/ func_0x0168f1fc(uVar6,uVar6);
    if ((int)puVar12 == 0) {
      return puVar12;
    }
    lVar7 = lVar11;
    if (*param_4 == 0) goto code_r0x0168de30;
    puVar16 = (ulong *)(*param_4 + 0x20);
    uVar4 = /*Core.Settings.QualitySettings$$FindParameterInList*/ func_0x0168f130(puVar12,lVar11);
    if ((int)uVar4 < 0) {
code_r0x0168de0c:
      return (undefined1 *)((long)&MACH_HEADER.magic + 1);
    }
    uVar21 = puVar15[1];
    if (uVar21 == 0) goto code_r0x0168de30;
    if (uVar4 < *(uint *)(uVar21 + 0x18)) {
      *(ulong *)(uVar21 + (ulong)uVar4 * 8 + 0x20) = uStack_168;
      goto code_r0x0168de0c;
    }
  }
  uVar6 = func_0x00f78b24();
  auVar23 = func_0x00f78ac0(uVar6,0);
  puStack_178 = &Core_Settings_QualitySettings__RegisterOnSettingChanged;
  uStack_1a0 = uVar5;
  lStack_198 = lVar7;
  plStack_190 = plVar19;
  puStack_188 = puVar14;
  pppuStack_180 = &ppuStack_130;
  if ((bRam0000000003eb5a90 & 1) == 0) {
    func_0x00f78a20(0x3d2ff68);
    bRam0000000003eb5a90 = 1;
  }
  lStack_1a8 = 0;
  lVar7 = *(long *)(auVar23._0_8_ + 0x10);
  if (lVar7 == 0) {
code_r0x0168decc:
    puVar22 = &Core_Settings_QualitySettings_Setting__add_onChangedEvent;
    auVar24 = func_0x00f78af4();
  }
  else {
    plVar18 = plRam0000000003d2ff68;
    puVar12 = (undefined1 *)/*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar7,auVar23._8_8_,&lStack_1a8);
    auVar24._8_8_ = puVar16;
    auVar24._0_8_ = lStack_1a8;
    if ((int)puVar12 == 0) {
      return puVar12;
    }
    if (lStack_1a8 == 0) goto code_r0x0168decc;
    puVar22 = &UNK_0168deb8;
  }
  uVar6 = auVar24._8_8_;
  uStack_1e0 = 0x3eb5000;
  puStack_1c8 = puVar16;
  ppppuStack_1c0 = &pppuStack_180;
  puStack_1b8 = puVar22;
  auStack_1d8 = auVar23;
  if ((bRam0000000003eb5aa9 & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb5aa9 = 1;
  }
  plVar19 = (long *)(auVar24._0_8_ + 0x30);
  puVar12 = (undefined1 *)*plVar19;
  while( true ) {
    uVar17 = 0;
    plVar9 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(puVar12,uVar6);
    if ((plVar9 != (long *)0x0) && (*plVar9 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) break;
    puVar13 = (undefined1 *)func_0x00ff0f44(plVar19,plVar9,puVar12);
    bVar3 = puVar12 == puVar13;
    puVar12 = puVar13;
    if (bVar3) {
      return puVar13;
    }
  }
  auVar23 = func_0x00f78e5c(plVar9);
  alStack_218[1] = 0x3d1b598;
  puStack_1e8 = &Core_Settings_QualitySettings__UnRegisterOnSettingChanged;
  puStack_208 = puVar12;
  plStack_200 = plVar19;
  uStack_1f8 = uVar6;
  pppppuStack_1f0 = &ppppuStack_1c0;
  if ((bRam0000000003eb5a91 & 1) == 0) {
    func_0x00f78a20(0x3d2ff68);
    bRam0000000003eb5a91 = 1;
  }
  alStack_218[0] = 0;
  lVar7 = *(long *)(auVar23._0_8_ + 0x10);
  if (lVar7 != 0) {
    plVar18 = plRam0000000003d2ff68;
    puVar12 = (undefined1 *)/*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar7,auVar23._8_8_,alStack_218);
    auVar25._8_8_ = uVar17;
    auVar25._0_8_ = alStack_218[0];
    if ((int)puVar12 == 0) {
      return puVar12;
    }
    if (alStack_218[0] != 0) goto code_r0x0168e000;
  }
  auVar25 = func_0x00f78af4();
code_r0x0168e000:
  if ((bRam0000000003eb5aaa & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb5aaa = 1;
  }
  plVar19 = (long *)(auVar25._0_8_ + 0x30);
  puVar12 = (undefined1 *)*plVar19;
  while( true ) {
    plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(puVar12,auVar25._8_8_,0);
    if ((plVar9 != (long *)0x0) && (*plVar9 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) break;
    puVar13 = (undefined1 *)func_0x00ff0f44(plVar19,plVar9,puVar12);
    bVar3 = puVar12 == puVar13;
    puVar12 = puVar13;
    if (bVar3) {
      return puVar13;
    }
  }
  func_0x00f78e5c(plVar9);
  puVar12 = (undefined1 *)/*Core.Settings.QualitySettings$$TryGetParameterAndSetValue*/ func_0x0168e0f4();
  if ((int)puVar12 != 0) {
    *(undefined4 *)plVar18 = 0;
    puVar12 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  return puVar12;
}



// ============================================================
// RVA: 0x168d9c4 | Core.Settings.QualitySettings.UpdateSettingParameter
// ============================================================

/* WARNING: Possible PIC construction at 0x0168deb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0168dfe4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0168e0d4) */

undefined1 *
Core_Settings_QualitySettings__UpdateSettingParameter
          (undefined8 param_1,long *param_2,ulong *param_3,long *param_4)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long *plVar12;
  undefined1 *puVar13;
  long extraout_x1;
  ulong *puVar14;
  ulong *puVar15;
  undefined8 uVar16;
  long *plVar17;
  ulong uVar18;
  long unaff_x22;
  float fVar19;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  long alStack_1d8 [2];
  undefined1 *puStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined1 ****ppppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [16];
  ulong *puStack_188;
  undefined1 ***pppuStack_180;
  undefined *puStack_178;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long *plStack_150;
  ulong *puStack_148;
  undefined1 **ppuStack_140;
  undefined *puStack_138;
  ulong uStack_128;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  auVar21._8_8_ = param_2;
  auVar21._0_8_ = param_1;
  plVar17 = &lStack_e0;
  puVar14 = param_3;
  if ((bRam0000000003eb5aa2 & 1) == 0) {
    func_0x00f78a20(0x3d3bee8);
    func_0x00f78a20(0x3d3bee0);
    func_0x00f78a20(0x3d3d6f0);
    func_0x00f78a20(0x3d1de08);
    func_0x00f78a20(0x3d6ba18);
    func_0x00f78a20(0x3d6f9a8);
    func_0x00f78a20(0x3d6fcf0);
    auVar21 = func_0x00f78a20(0x3d75ef0);
    bRam0000000003eb5aa2 = 1;
  }
  lStack_90 = 0;
  uStack_88 = 0;
  uStack_a8 = 0;
  lStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  lStack_c0 = 0;
  uStack_d8 = 0;
  lStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  lVar6 = 0x3eb5000;
  if (param_2 != (long *)0x0) {
    unaff_x22 = /*System.String$$IndexOf*/ func_0x029cdad0(param_2,0x3d,0);
    uVar5 = (uint)unaff_x22;
    if ((int)uVar5 < 0) {
      return (undefined1 *)0x0;
    }
    lVar6 = /*System.String$$Substring*/ func_0x029cbbf0(param_2,0,unaff_x22,0);
    puVar14 = (ulong *)(ulong)((int)param_2[2] + ~uVar5);
    param_4 = (long *)0x0;
    auVar21 = /*System.String$$Substring*/ func_0x029cbbf0(param_2,uVar5 + 1);
    lVar9 = auVar21._0_8_;
    if (lVar6 != 0) {
      auVar21 = /*System.String$$Trim*/ func_0x029bab94(lVar6,0);
      plVar8 = auVar21._0_8_;
      unaff_x22 = lVar9;
      if (lVar9 != 0) {
        uVar7 = /*System.String$$Trim*/ func_0x029bab94(lVar9,0);
        puVar14 = &uStack_88;
        auVar21 = /*Core.Settings.QualitySettings$$TryParseValue*/ func_0x0168f1fc(uVar7,uVar7);
        if (auVar21._0_4_ == 0) {
          return auVar21._0_8_;
        }
        param_2 = plVar8;
        if (plVar8 != (long *)0x0) {
          puVar14 = (ulong *)0x0;
          auVar21 = /*System.String$$IndexOf*/ func_0x029cdad0(plVar8,0x2e);
          uVar18 = uStack_88;
          lVar9 = auVar21._0_8_;
          uVar5 = auVar21._0_4_;
          if ((int)uVar5 < 0) {
            if (*param_3 != 0) {
              puVar14 = (ulong *)(*param_3 + 0x20);
              auVar21 = /*Core.Settings.QualitySettings$$GetOrCreateParameterCopyFromList*/ func_0x0168f394(lVar9,plVar8);
              plVar8 = auVar21._0_8_;
              uStack_d8 = uStack_88;
              param_4 = plVar17;
              if (*param_3 != 0) {
                lVar9 = *(long *)(*param_3 + 0x20);
                auVar2._8_8_ = 0;
                auVar2._0_8_ = plVar8;
                auVar21 = auVar2 << 0x40;
                if (lVar9 != 0) {
                  uStack_78 = uStack_88;
                  lStack_80 = lStack_e0;
                  uStack_68 = uStack_c8;
                  uStack_70 = uStack_d0;
                  lStack_60 = lStack_c0;
                  goto code_r0x0168dcfc;
                }
              }
            }
          }
          else {
            if ((uStack_88 & 0xff00000000) != 0) {
              return (undefined1 *)0x0;
            }
            unaff_x22 = /*System.String$$Substring*/ func_0x029cbbf0(plVar8,0,lVar9,0);
            puVar14 = (ulong *)(ulong)((int)plVar8[2] + ~uVar5);
            param_4 = (long *)0x0;
            auVar21 = /*System.String$$Substring*/ func_0x029cbbf0(plVar8,uVar5 + 1);
            lVar10 = auVar21._0_8_;
            lVar6 = lVar9;
            if (*param_3 != 0) {
              param_4 = &lStack_b0;
              plVar8 = (long *)/*Core.Settings.QualitySettings$$GetOrCreateParameterCopyFromList*/ func_0x0168f394(lVar10,unaff_x22,*param_3 + 0x20);
              puVar14 = (ulong *)0x0;
              auVar21 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar10,/*STR('Min')*/ uRam0000000003d6fcf0);
              fVar19 = (float)uVar18;
              lVar6 = lVar10;
              param_2 = plVar8;
              if (auVar21._0_4_ == 0) {
                puVar14 = (ulong *)0x0;
                auVar21 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar10,/*STR('Max')*/ uRam0000000003d6f9a8);
                if (auVar21._0_4_ == 0) {
                  puVar14 = (ulong *)0x0;
                  auVar21 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar10,/*STR('DecimalPlaces')*/ uRam0000000003d6ba18);
                  if (auVar21._0_4_ == 0) {
                    puVar14 = (ulong *)0x0;
                    auVar21 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar10,/*STR('ValidValue')*/ uRam0000000003d75ef0);
                    if (auVar21._0_4_ != 0) {
                      if (lStack_90 == 0) {
                        lVar6 = func_0x00f78aec(/*System.Collections.Generic.List<float>_TypeInfo*/ uRam0000000003d1de08);
                        auVar21 = /*System.Collections.Generic.List<float>$$.ctor*/ func_0x0245cff8(lVar6,uRam0000000003d3bee0);
                        lStack_90 = lVar6;
                        if (lVar6 == 0) goto LAB_0168dd20;
                      }
                      lVar6 = lStack_90;
                      auVar21 = /*System.Collections.Generic.List<float>$$Add*/ func_0x0245dca8(uVar18 & 0xffffffff,lStack_90,uRam0000000003d3bee8);
                    }
                  }
                  else {
                    fVar1 = -fVar19;
                    if (fVar19 != INFINITY) {
                      fVar1 = fVar19;
                    }
                    uStack_98 = CONCAT44(uStack_98._4_4_,(int)fVar1);
                  }
                }
                else {
                  uStack_a0 = CONCAT44(fVar19,(undefined4)uStack_a0);
                }
              }
              else {
                uStack_a0 = CONCAT44(uStack_a0._4_4_,fVar19);
              }
              if (*param_3 != 0) {
                lVar9 = *(long *)(*param_3 + 0x20);
                auVar3._8_8_ = 0;
                auVar3._0_8_ = auVar21._8_8_;
                auVar21 = auVar3 << 0x40;
                if (lVar9 != 0) {
                  uStack_78 = uStack_a8;
                  lStack_80 = lStack_b0;
                  uStack_68 = uStack_98;
                  uStack_70 = uStack_a0;
                  lStack_60 = lStack_90;
code_r0x0168dcfc:
                  /*System.Collections.Generic.List<QualitySettings.Parameter>$$set_Item*/ func_0x02570b34(lVar9,plVar8,&lStack_80,uRam0000000003d3d6f0);
                  return (undefined1 *)((long)&MACH_HEADER.magic + 1);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0168dd20:
  func_0x00f78af4(auVar21._0_8_,auVar21._8_8_);
  puStack_e8 = &Core_Settings_QualitySettings__UpdateSettingQualityParameter;
  uStack_128 = 0;
  puVar15 = puVar14;
  plVar17 = param_4;
  puStack_f0 = &stack0xfffffffffffffff0;
  if (extraout_x1 == 0) {
code_r0x0168de30:
    func_0x00f78af4();
  }
  else {
    uVar7 = /*System.String$$IndexOf*/ func_0x029cdad0(extraout_x1,0x3d,0);
    uVar5 = (uint)uVar7;
    if ((int)uVar5 < 0) {
      return (undefined1 *)0x0;
    }
    unaff_x22 = /*System.String$$Substring*/ func_0x029cbbf0(extraout_x1,0,uVar7,0);
    puVar15 = (ulong *)(ulong)(*(int *)(extraout_x1 + 0x10) + ~uVar5);
    plVar17 = (long *)0x0;
    lVar9 = /*System.String$$Substring*/ func_0x029cbbf0(extraout_x1,uVar5 + 1);
    param_3 = puVar14;
    param_2 = param_4;
    lVar6 = extraout_x1;
    if ((unaff_x22 == 0) || (lVar10 = /*System.String$$Trim*/ func_0x029bab94(unaff_x22,0), lVar6 = extraout_x1, lVar9 == 0)
       ) goto code_r0x0168de30;
    uVar7 = /*System.String$$Trim*/ func_0x029bab94(lVar9,0);
    puVar15 = &uStack_128;
    puVar11 = (undefined1 *)/*Core.Settings.QualitySettings$$TryParseValue*/ func_0x0168f1fc(uVar7,uVar7);
    if ((int)puVar11 == 0) {
      return puVar11;
    }
    lVar6 = lVar10;
    if (*param_4 == 0) goto code_r0x0168de30;
    puVar15 = (ulong *)(*param_4 + 0x20);
    uVar5 = /*Core.Settings.QualitySettings$$FindParameterInList*/ func_0x0168f130(puVar11,lVar10);
    if ((int)uVar5 < 0) {
code_r0x0168de0c:
      return (undefined1 *)((long)&MACH_HEADER.magic + 1);
    }
    uVar18 = puVar14[1];
    if (uVar18 == 0) goto code_r0x0168de30;
    if (uVar5 < *(uint *)(uVar18 + 0x18)) {
      *(ulong *)(uVar18 + (ulong)uVar5 * 8 + 0x20) = uStack_128;
      goto code_r0x0168de0c;
    }
  }
  uVar7 = func_0x00f78b24();
  auVar21 = func_0x00f78ac0(uVar7,0);
  puStack_138 = &Core_Settings_QualitySettings__RegisterOnSettingChanged;
  lStack_160 = unaff_x22;
  lStack_158 = lVar6;
  plStack_150 = param_2;
  puStack_148 = param_3;
  ppuStack_140 = &puStack_f0;
  if ((bRam0000000003eb5a90 & 1) == 0) {
    func_0x00f78a20(0x3d2ff68);
    bRam0000000003eb5a90 = 1;
  }
  lStack_168 = 0;
  lVar6 = *(long *)(auVar21._0_8_ + 0x10);
  if (lVar6 == 0) {
code_r0x0168decc:
    puVar20 = &Core_Settings_QualitySettings_Setting__add_onChangedEvent;
    auVar22 = func_0x00f78af4();
  }
  else {
    plVar17 = plRam0000000003d2ff68;
    puVar11 = (undefined1 *)/*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar6,auVar21._8_8_,&lStack_168);
    auVar22._8_8_ = puVar15;
    auVar22._0_8_ = lStack_168;
    if ((int)puVar11 == 0) {
      return puVar11;
    }
    if (lStack_168 == 0) goto code_r0x0168decc;
    puVar20 = &UNK_0168deb8;
  }
  uVar7 = auVar22._8_8_;
  uStack_1a0 = 0x3eb5000;
  puStack_188 = puVar15;
  pppuStack_180 = &ppuStack_140;
  puStack_178 = puVar20;
  auStack_198 = auVar21;
  if ((bRam0000000003eb5aa9 & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb5aa9 = 1;
  }
  plVar8 = (long *)(auVar22._0_8_ + 0x30);
  puVar11 = (undefined1 *)*plVar8;
  while( true ) {
    uVar16 = 0;
    plVar12 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(puVar11,uVar7);
    if ((plVar12 != (long *)0x0) && (*plVar12 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) break;
    puVar13 = (undefined1 *)func_0x00ff0f44(plVar8,plVar12,puVar11);
    bVar4 = puVar11 == puVar13;
    puVar11 = puVar13;
    if (bVar4) {
      return puVar13;
    }
  }
  auVar21 = func_0x00f78e5c(plVar12);
  alStack_1d8[1] = 0x3d1b598;
  puStack_1a8 = &Core_Settings_QualitySettings__UnRegisterOnSettingChanged;
  puStack_1c8 = puVar11;
  plStack_1c0 = plVar8;
  uStack_1b8 = uVar7;
  ppppuStack_1b0 = &pppuStack_180;
  if ((bRam0000000003eb5a91 & 1) == 0) {
    func_0x00f78a20(0x3d2ff68);
    bRam0000000003eb5a91 = 1;
  }
  alStack_1d8[0] = 0;
  lVar6 = *(long *)(auVar21._0_8_ + 0x10);
  if (lVar6 != 0) {
    plVar17 = plRam0000000003d2ff68;
    puVar11 = (undefined1 *)/*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar6,auVar21._8_8_,alStack_1d8);
    auVar23._8_8_ = uVar16;
    auVar23._0_8_ = alStack_1d8[0];
    if ((int)puVar11 == 0) {
      return puVar11;
    }
    if (alStack_1d8[0] != 0) goto code_r0x0168e000;
  }
  auVar23 = func_0x00f78af4();
code_r0x0168e000:
  if ((bRam0000000003eb5aaa & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb5aaa = 1;
  }
  plVar8 = (long *)(auVar23._0_8_ + 0x30);
  puVar11 = (undefined1 *)*plVar8;
  while( true ) {
    plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(puVar11,auVar23._8_8_,0);
    if ((plVar12 != (long *)0x0) && (*plVar12 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) break;
    puVar13 = (undefined1 *)func_0x00ff0f44(plVar8,plVar12,puVar11);
    bVar4 = puVar11 == puVar13;
    puVar11 = puVar13;
    if (bVar4) {
      return puVar13;
    }
  }
  func_0x00f78e5c(plVar12);
  puVar11 = (undefined1 *)/*Core.Settings.QualitySettings$$TryGetParameterAndSetValue*/ func_0x0168e0f4();
  if ((int)puVar11 != 0) {
    *(undefined4 *)plVar17 = 0;
    puVar11 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  return puVar11;
}



// ============================================================
// RVA: 0x168dd24 | Core.Settings.QualitySettings.UpdateSettingQualityParameter
// ============================================================

/* WARNING: Possible PIC construction at 0x0168deb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0168dfe4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0168e0d4) */

long Core_Settings_QualitySettings__UpdateSettingQualityParameter
               (undefined8 param_1,long param_2,undefined8 *param_3,long *param_4)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *plVar10;
  long unaff_x21;
  long unaff_x22;
  undefined *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long alStack_f8 [3];
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined1 ***pppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [16];
  undefined8 *puStack_a8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  undefined8 *puStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  puVar7 = param_3;
  plVar9 = param_4;
  if (param_2 == 0) {
LAB_0168de30:
    func_0x00f78af4();
  }
  else {
    uVar3 = /*System.String$$IndexOf*/ func_0x029cdad0(param_2,0x3d,0);
    uVar2 = (uint)uVar3;
    if ((int)uVar2 < 0) {
      return 0;
    }
    unaff_x22 = /*System.String$$Substring*/ func_0x029cbbf0(param_2,0,uVar3,0);
    puVar7 = (undefined8 *)(ulong)(*(int *)(param_2 + 0x10) + ~uVar2);
    plVar9 = (long *)0x0;
    lVar4 = /*System.String$$Substring*/ func_0x029cbbf0(param_2,uVar2 + 1);
    unaff_x19 = param_3;
    unaff_x20 = param_4;
    unaff_x21 = param_2;
    if ((unaff_x22 == 0) || (lVar5 = /*System.String$$Trim*/ func_0x029bab94(unaff_x22,0), lVar4 == 0)) goto LAB_0168de30;
    uVar3 = /*System.String$$Trim*/ func_0x029bab94(lVar4,0);
    puVar7 = &uStack_48;
    lVar4 = /*Core.Settings.QualitySettings$$TryParseValue*/ func_0x0168f1fc(uVar3,uVar3);
    if ((int)lVar4 == 0) {
      return lVar4;
    }
    unaff_x21 = lVar5;
    if (*param_4 == 0) goto LAB_0168de30;
    puVar7 = (undefined8 *)(*param_4 + 0x20);
    uVar2 = /*Core.Settings.QualitySettings$$FindParameterInList*/ func_0x0168f130(lVar4,lVar5);
    if ((int)uVar2 < 0) {
      return 1;
    }
    lVar4 = param_3[1];
    if (lVar4 == 0) goto LAB_0168de30;
    if (uVar2 < *(uint *)(lVar4 + 0x18)) {
      *(undefined8 *)(lVar4 + (ulong)uVar2 * 8 + 0x20) = uStack_48;
      return 1;
    }
  }
  uVar3 = func_0x00f78b24();
  auVar12 = func_0x00f78ac0(uVar3,0);
  puStack_58 = &Core_Settings_QualitySettings__RegisterOnSettingChanged;
  lStack_80 = unaff_x22;
  lStack_78 = unaff_x21;
  plStack_70 = unaff_x20;
  puStack_68 = unaff_x19;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5a90 & 1) == 0) {
    func_0x00f78a20(0x3d2ff68);
    bRam0000000003eb5a90 = 1;
  }
  lStack_88 = 0;
  lVar4 = *(long *)(auVar12._0_8_ + 0x10);
  if (lVar4 == 0) {
code_r0x0168decc:
    puVar11 = &Core_Settings_QualitySettings_Setting__add_onChangedEvent;
    auVar13 = func_0x00f78af4();
  }
  else {
    plVar9 = plRam0000000003d2ff68;
    lVar4 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar4,auVar12._8_8_,&lStack_88);
    auVar13._8_8_ = puVar7;
    auVar13._0_8_ = lStack_88;
    if ((int)lVar4 == 0) {
      return lVar4;
    }
    if (lStack_88 == 0) goto code_r0x0168decc;
    puVar11 = &UNK_0168deb8;
  }
  uVar3 = auVar13._8_8_;
  uStack_c0 = 0x3eb5000;
  puStack_a8 = puVar7;
  ppuStack_a0 = &puStack_60;
  puStack_98 = puVar11;
  auStack_b8 = auVar12;
  if ((bRam0000000003eb5aa9 & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb5aa9 = 1;
  }
  plVar10 = (long *)(auVar13._0_8_ + 0x30);
  lVar4 = *plVar10;
  while( true ) {
    uVar8 = 0;
    plVar6 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar4,uVar3);
    if ((plVar6 != (long *)0x0) && (*plVar6 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) break;
    lVar5 = func_0x00ff0f44(plVar10,plVar6,lVar4);
    bVar1 = lVar4 == lVar5;
    lVar4 = lVar5;
    if (bVar1) {
      return lVar5;
    }
  }
  auVar12 = func_0x00f78e5c(plVar6);
  alStack_f8[1] = 0x3d1b598;
  puStack_c8 = &Core_Settings_QualitySettings__UnRegisterOnSettingChanged;
  alStack_f8[2] = lVar4;
  plStack_e0 = plVar10;
  uStack_d8 = uVar3;
  pppuStack_d0 = &ppuStack_a0;
  if ((bRam0000000003eb5a91 & 1) == 0) {
    func_0x00f78a20(0x3d2ff68);
    bRam0000000003eb5a91 = 1;
  }
  alStack_f8[0] = 0;
  lVar4 = *(long *)(auVar12._0_8_ + 0x10);
  if (lVar4 != 0) {
    plVar9 = plRam0000000003d2ff68;
    lVar4 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar4,auVar12._8_8_,alStack_f8);
    auVar12._8_8_ = uVar8;
    auVar12._0_8_ = alStack_f8[0];
    if ((int)lVar4 == 0) {
      return lVar4;
    }
    if (alStack_f8[0] != 0) goto code_r0x0168e000;
  }
  auVar12 = func_0x00f78af4();
code_r0x0168e000:
  if ((bRam0000000003eb5aaa & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb5aaa = 1;
  }
  plVar10 = (long *)(auVar12._0_8_ + 0x30);
  lVar4 = *plVar10;
  while( true ) {
    plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,auVar12._8_8_,0);
    if ((plVar6 != (long *)0x0) && (*plVar6 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) break;
    lVar5 = func_0x00ff0f44(plVar10,plVar6,lVar4);
    bVar1 = lVar4 == lVar5;
    lVar4 = lVar5;
    if (bVar1) {
      return lVar5;
    }
  }
  func_0x00f78e5c(plVar6);
  lVar4 = /*Core.Settings.QualitySettings$$TryGetParameterAndSetValue*/ func_0x0168e0f4();
  if ((int)lVar4 != 0) {
    *(undefined4 *)plVar9 = 0;
    lVar4 = 1;
  }
  return lVar4;
}



// ============================================================
// RVA: 0x168de40 | Core.Settings.QualitySettings.RegisterOnSettingChanged
// ============================================================

/* WARNING: Possible PIC construction at 0x0168deb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0168dfe4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0168e0d4) */

long Core_Settings_QualitySettings__RegisterOnSettingChanged
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined *puVar8;
  undefined1 auVar9 [16];
  long alStack_a8 [3];
  long *plStack_90;
  undefined8 uStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  long lStack_38;
  
  if ((bRam0000000003eb5a90 & 1) == 0) {
    func_0x00f78a20(0x3d2ff68);
    bRam0000000003eb5a90 = 1;
  }
  lStack_38 = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_0168decc:
    puVar8 = &Core_Settings_QualitySettings_Setting__add_onChangedEvent;
    auVar9 = func_0x00f78af4();
    uVar5 = auVar9._8_8_;
    lVar2 = auVar9._0_8_;
  }
  else {
    param_4 = puRam0000000003d2ff68;
    lVar2 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(param_1 + 0x10),param_2,&lStack_38);
    if ((int)lVar2 == 0) {
      return lVar2;
    }
    if (lStack_38 == 0) goto LAB_0168decc;
    puVar8 = (undefined *)0x168deb8;
    lVar2 = lStack_38;
    uVar5 = param_3;
  }
  uStack_70 = 0x3eb5000;
  lStack_68 = param_1;
  uStack_60 = param_2;
  uStack_58 = param_3;
  puStack_50 = &stack0xfffffffffffffff0;
  puStack_48 = puVar8;
  if ((bRam0000000003eb5aa9 & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb5aa9 = 1;
  }
  plVar7 = (long *)(lVar2 + 0x30);
  lVar2 = *plVar7;
  while( true ) {
    uVar6 = 0;
    plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar2,uVar5);
    if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) break;
    lVar4 = func_0x00ff0f44(plVar7,plVar3,lVar2);
    bVar1 = lVar2 == lVar4;
    lVar2 = lVar4;
    if (bVar1) {
      return lVar4;
    }
  }
  auVar9 = func_0x00f78e5c(plVar3);
  alStack_a8[1] = 0x3d1b598;
  puStack_78 = &Core_Settings_QualitySettings__UnRegisterOnSettingChanged;
  alStack_a8[2] = lVar2;
  plStack_90 = plVar7;
  uStack_88 = uVar5;
  ppuStack_80 = &puStack_50;
  if ((bRam0000000003eb5a91 & 1) == 0) {
    func_0x00f78a20(0x3d2ff68);
    bRam0000000003eb5a91 = 1;
  }
  alStack_a8[0] = 0;
  lVar2 = *(long *)(auVar9._0_8_ + 0x10);
  if (lVar2 != 0) {
    param_4 = puRam0000000003d2ff68;
    lVar2 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar2,auVar9._8_8_,alStack_a8);
    auVar9._8_8_ = uVar6;
    auVar9._0_8_ = alStack_a8[0];
    if ((int)lVar2 == 0) {
      return lVar2;
    }
    if (alStack_a8[0] != 0) goto code_r0x0168e000;
  }
  auVar9 = func_0x00f78af4();
code_r0x0168e000:
  if ((bRam0000000003eb5aaa & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb5aaa = 1;
  }
  plVar7 = (long *)(auVar9._0_8_ + 0x30);
  lVar2 = *plVar7;
  while ((plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar2,auVar9._8_8_,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598))) {
    lVar4 = func_0x00ff0f44(plVar7,plVar3,lVar2);
    bVar1 = lVar2 == lVar4;
    lVar2 = lVar4;
    if (bVar1) {
      return lVar4;
    }
  }
  func_0x00f78e5c(plVar3);
  lVar2 = /*Core.Settings.QualitySettings$$TryGetParameterAndSetValue*/ func_0x0168e0f4();
  if ((int)lVar2 != 0) {
    *param_4 = 0;
    lVar2 = 1;
  }
  return lVar2;
}



// ============================================================
// RVA: 0x168df70 | Core.Settings.QualitySettings.UnRegisterOnSettingChanged
// ============================================================

/* WARNING: Possible PIC construction at 0x0168dfe4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0168e0d4) */

long Core_Settings_QualitySettings__UnRegisterOnSettingChanged
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  long lStack_38;
  
  if ((bRam0000000003eb5a91 & 1) == 0) {
    func_0x00f78a20(0x3d2ff68);
    bRam0000000003eb5a91 = 1;
  }
  lStack_38 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    param_4 = puRam0000000003d2ff68;
    lVar2 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(param_1 + 0x10),param_2,&lStack_38);
    if ((int)lVar2 == 0) {
      return lVar2;
    }
    lVar2 = lStack_38;
    if (lStack_38 != 0) goto code_r0x0168e000;
  }
  auVar6 = func_0x00f78af4();
  param_3 = auVar6._8_8_;
  lVar2 = auVar6._0_8_;
code_r0x0168e000:
  if ((bRam0000000003eb5aaa & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb5aaa = 1;
  }
  lVar5 = *(long *)(lVar2 + 0x30);
  while ((plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,param_3,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598))) {
    lVar4 = func_0x00ff0f44((long *)(lVar2 + 0x30),plVar3,lVar5);
    bVar1 = lVar5 == lVar4;
    lVar5 = lVar4;
    if (bVar1) {
      return lVar4;
    }
  }
  func_0x00f78e5c(plVar3);
  lVar2 = /*Core.Settings.QualitySettings$$TryGetParameterAndSetValue*/ func_0x0168e0f4();
  if ((int)lVar2 != 0) {
    *param_4 = 0;
    lVar2 = 1;
  }
  return lVar2;
}



// ============================================================
// RVA: 0x168e0a0 | Core.Settings.QualitySettings.TryGetFloatParameter
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0168e0d4) */

undefined8 Core_Settings_QualitySettings__TryGetFloatParameter(void)

{
  undefined8 uVar1;
  undefined4 *in_x3;
  
  uVar1 = /*Core.Settings.QualitySettings$$TryGetParameterAndSetValue*/ func_0x0168e0f4();
  if ((int)uVar1 != 0) {
    *in_x3 = 0;
    uVar1 = 1;
  }
  return uVar1;
}



// ============================================================
// RVA: 0x168e0f4 | Core.Settings.QualitySettings.TryGetParameterAndSetValue
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0168e24c) */

undefined8
Core_Settings_QualitySettings__TryGetParameterAndSetValue
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
          undefined8 *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uStack_4c;
  long lStack_48;
  
  if ((bRam0000000003eb5a9c & 1) == 0) {
    func_0x00f78a20(0x3d3d6e8);
    func_0x00f78a20(0x3d3d718);
    bRam0000000003eb5a9c = 1;
  }
  lStack_48 = 0;
  uStack_4c = 0;
  plVar3 = &lStack_48;
  uVar2 = /*Core.Settings.QualitySettings$$TryGetSettingAndParameterIndex*/ func_0x0168ef68(param_1,param_2,param_3,plVar3,&uStack_4c);
  lVar4 = lStack_48;
  uVar1 = uStack_4c;
  if ((int)uVar2 == 0) {
    param_4[4] = 0;
    param_4[1] = 0;
    *param_4 = 0;
    param_4[3] = 0;
    param_4[2] = 0;
    *param_5 = 0;
    return uVar2;
  }
  if ((lStack_48 != 0) && (lVar6 = *(long *)(lStack_48 + 0x20), lVar6 != 0)) {
    lVar5 = (long)(int)uStack_4c;
    if (*(uint *)(lVar6 + 0x18) <= uStack_4c) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar6 = *(long *)(lVar6 + 0x10) + lVar5 * 0x28;
    uVar8 = *(undefined8 *)(lVar6 + 0x28);
    uVar7 = *(undefined8 *)(lVar6 + 0x20);
    uVar10 = *(undefined8 *)(lVar6 + 0x38);
    uVar9 = *(undefined8 *)(lVar6 + 0x30);
    param_4[4] = *(undefined8 *)(lVar6 + 0x40);
    param_4[1] = uVar8;
    *param_4 = uVar7;
    param_4[3] = uVar10;
    param_4[2] = uVar9;
    lVar4 = *(long *)(lVar4 + 0x18);
    if (lVar4 != 0) {
      if (*(uint *)(lVar4 + 0x18) <= uVar1) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      *param_5 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + lVar5 * 8 + 0x20);
      return uVar2;
    }
  }
  func_0x00f78af4();
  uVar2 = Core_Settings_QualitySettings__TryGetParameterAndSetValue();
  if ((int)uVar2 != 0) {
    *(undefined4 *)plVar3 = 0;
    uVar2 = 1;
  }
  return uVar2;
}



// ============================================================
// RVA: 0x168e218 | Core.Settings.QualitySettings.TryGetIntParameter
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0168e24c) */

undefined8 Core_Settings_QualitySettings__TryGetIntParameter(void)

{
  undefined8 uVar1;
  undefined4 *in_x3;
  
  uVar1 = Core_Settings_QualitySettings__TryGetParameterAndSetValue();
  if ((int)uVar1 != 0) {
    *in_x3 = 0;
    uVar1 = 1;
  }
  return uVar1;
}



// ============================================================
// RVA: 0x168e28c | Core.Settings.QualitySettings.TryGetBoolParameter
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0168e2c0) */
/* WARNING: Removing unreachable block (ram,0x0168e2c4) */
/* WARNING: Removing unreachable block (ram,0x0168e2c8) */

undefined8 Core_Settings_QualitySettings__TryGetBoolParameter(void)

{
  undefined8 uVar1;
  
  uVar1 = Core_Settings_QualitySettings__TryGetParameterAndSetValue();
  if ((int)uVar1 != 0) {
    uVar1 = 0;
  }
  return uVar1;
}



// ============================================================
// RVA: 0x168e2ec | Core.Settings.QualitySettings.TrySetBoolParameter
// ============================================================

undefined8
Core_Settings_QualitySettings__TrySetBoolParameter
          (long param_1,long param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  long extraout_x1;
  ulong uVar5;
  ulong unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  uint extraout_s0;
  
  uVar2 = 0x13f800000;
  if (param_4 == 0) {
    uVar2 = 0x100000000;
  }
  while( true ) {
    uVar5 = uVar2;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x23 = 0x3eb5000;
    if ((bRam0000000003eb5a9f & 1) == 0) {
      func_0x00f78a20(0x3d3d6e8);
      func_0x00f78a20(0x3d3d718);
      func_0x00f78a20(0x3d3d720);
      bRam0000000003eb5a9f = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x4c) = 0;
    iVar3 = /*Core.Settings.QualitySettings$$TryGetSettingAndParameterIndex*/ func_0x0168ef68(param_1,param_2,param_3,(undefined1 *)((long)register0x00000008 + -0x48)
                            ,(undefined1 *)((long)register0x00000008 + -0x4c));
    uVar4 = 0;
    if (iVar3 == 0) break;
    unaff_x20 = *(long *)((long)register0x00000008 + -0x48);
    unaff_x21 = param_2;
    unaff_x22 = param_1;
    if ((unaff_x20 != 0) && (unaff_x22 = *(long *)(unaff_x20 + 0x18), unaff_x22 != 0)) {
      uVar1 = *(uint *)((long)register0x00000008 + -0x4c);
      unaff_x21 = (long)(int)uVar1;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar1) {
        uVar4 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (*(float *)(*(long *)(unaff_x22 + 0x10) + unaff_x21 * 8 + 0x20) == (float)uVar5) {
        return 0;
      }
      if (*(long *)(unaff_x20 + 0x20) != 0) {
        if (*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x18) <= uVar1) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar4 = 0;
        if (*(long *)(unaff_x20 + 0x18) != 0) {
          /*System.Collections.Generic.List<QualitySettings.Value>$$set_Item*/ func_0x0257382c(*(long *)(unaff_x20 + 0x18),unaff_x21,uVar5,uRam0000000003d3d720);
          /*Core.Settings.QualitySettings.Setting$$OnChange*/ func_0x0168cde4(unaff_x20);
          return 1;
        }
      }
    }
    unaff_x30 = &Core_Settings_QualitySettings__TrySetFloatParameter;
    param_1 = func_0x00f78af4(uVar4);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_2 = extraout_x1;
    uVar2 = (ulong)extraout_s0;
    unaff_x19 = uVar5;
  }
  return 0;
}



// ============================================================
// RVA: 0x168e304 | Core.Settings.QualitySettings.TrySetParameter
// ============================================================

undefined8
Core_Settings_QualitySettings__TrySetParameter
          (long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long extraout_x1;
  ulong uVar4;
  ulong unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  uint extraout_s0;
  
  do {
    uVar4 = param_4;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x23 = 0x3eb5000;
    if ((bRam0000000003eb5a9f & 1) == 0) {
      func_0x00f78a20(0x3d3d6e8);
      func_0x00f78a20(0x3d3d718);
      func_0x00f78a20(0x3d3d720);
      bRam0000000003eb5a9f = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x4c) = 0;
    iVar2 = /*Core.Settings.QualitySettings$$TryGetSettingAndParameterIndex*/ func_0x0168ef68(param_1,param_2,param_3,(undefined1 *)((long)register0x00000008 + -0x48)
                            ,(undefined1 *)((long)register0x00000008 + -0x4c));
    uVar3 = 0;
    if (iVar2 == 0) {
      return 0;
    }
    unaff_x20 = *(long *)((long)register0x00000008 + -0x48);
    unaff_x21 = param_2;
    unaff_x22 = param_1;
    if ((unaff_x20 != 0) && (unaff_x22 = *(long *)(unaff_x20 + 0x18), unaff_x22 != 0)) {
      uVar1 = *(uint *)((long)register0x00000008 + -0x4c);
      unaff_x21 = (long)(int)uVar1;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar1) {
        uVar3 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (*(float *)(*(long *)(unaff_x22 + 0x10) + unaff_x21 * 8 + 0x20) == (float)uVar4) {
        return 0;
      }
      if (*(long *)(unaff_x20 + 0x20) != 0) {
        if (*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x18) <= uVar1) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar3 = 0;
        if (*(long *)(unaff_x20 + 0x18) != 0) {
          /*System.Collections.Generic.List<QualitySettings.Value>$$set_Item*/ func_0x0257382c(*(long *)(unaff_x20 + 0x18),unaff_x21,uVar4,uRam0000000003d3d720);
          /*Core.Settings.QualitySettings.Setting$$OnChange*/ func_0x0168cde4(unaff_x20);
          return 1;
        }
      }
    }
    unaff_x30 = &Core_Settings_QualitySettings__TrySetFloatParameter;
    param_1 = func_0x00f78af4(uVar3);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_2 = extraout_x1;
    param_4 = (ulong)extraout_s0;
    unaff_x19 = uVar4;
  } while( true );
}



// ============================================================
// RVA: 0x168e43c | Core.Settings.QualitySettings.TrySetFloatParameter
// ============================================================

undefined8
Core_Settings_QualitySettings__TrySetFloatParameter
          (float param_1,long param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long extraout_x1;
  ulong unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float extraout_s0;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x23 = 0x3eb5000;
    if ((bRam0000000003eb5a9f & 1) == 0) {
      func_0x00f78a20(0x3d3d6e8);
      func_0x00f78a20(0x3d3d718);
      func_0x00f78a20(0x3d3d720);
      bRam0000000003eb5a9f = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x4c) = 0;
    iVar2 = /*Core.Settings.QualitySettings$$TryGetSettingAndParameterIndex*/ func_0x0168ef68(param_2,param_3,param_4,(undefined1 *)((long)register0x00000008 + -0x48)
                            ,(undefined1 *)((long)register0x00000008 + -0x4c));
    uVar3 = 0;
    if (iVar2 == 0) {
      return 0;
    }
    unaff_x20 = *(long *)((long)register0x00000008 + -0x48);
    unaff_x21 = param_3;
    unaff_x22 = param_2;
    if ((unaff_x20 != 0) && (unaff_x22 = *(long *)(unaff_x20 + 0x18), unaff_x22 != 0)) {
      uVar1 = *(uint *)((long)register0x00000008 + -0x4c);
      unaff_x21 = (long)(int)uVar1;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar1) {
        uVar3 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (*(float *)(*(long *)(unaff_x22 + 0x10) + unaff_x21 * 8 + 0x20) == param_1) {
        return 0;
      }
      if (*(long *)(unaff_x20 + 0x20) != 0) {
        if (*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x18) <= uVar1) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar3 = 0;
        if (*(long *)(unaff_x20 + 0x18) != 0) {
          /*System.Collections.Generic.List<QualitySettings.Value>$$set_Item*/ func_0x0257382c(*(long *)(unaff_x20 + 0x18),unaff_x21,(ulong)(uint)param_1,
                          uRam0000000003d3d720);
          /*Core.Settings.QualitySettings.Setting$$OnChange*/ func_0x0168cde4(unaff_x20);
          return 1;
        }
      }
    }
    unaff_x30 = Core_Settings_QualitySettings__TrySetFloatParameter;
    param_2 = func_0x00f78af4(uVar3);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_3 = extraout_x1;
    unaff_x19 = (ulong)(uint)param_1;
    param_1 = extraout_s0;
  } while( true );
}



// ============================================================
// RVA: 0x168e444 | Core.Settings.QualitySettings.TrySetIntParameter
// ============================================================

undefined8
Core_Settings_QualitySettings__TrySetIntParameter
          (long param_1,long param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 uVar5;
  long extraout_x1;
  ulong uVar6;
  ulong unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  uint extraout_s0;
  
  puVar3 = (undefined1 *)register0x00000008;
  uVar2 = (ulong)(uint)(float)param_4 | 0x10000000000;
  do {
    uVar6 = uVar2;
    *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
    *(long *)(puVar3 + -0x30) = unaff_x22;
    *(long *)(puVar3 + -0x28) = unaff_x21;
    *(long *)(puVar3 + -0x20) = unaff_x20;
    *(ulong *)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(code **)(puVar3 + -8) = unaff_x30;
    unaff_x29 = puVar3 + -0x10;
    unaff_x23 = 0x3eb5000;
    if ((bRam0000000003eb5a9f & 1) == 0) {
      func_0x00f78a20(0x3d3d6e8);
      func_0x00f78a20(0x3d3d718);
      func_0x00f78a20(0x3d3d720);
      bRam0000000003eb5a9f = 1;
    }
    *(undefined8 *)(puVar3 + -0x48) = 0;
    *(undefined4 *)(puVar3 + -0x4c) = 0;
    iVar4 = /*Core.Settings.QualitySettings$$TryGetSettingAndParameterIndex*/ func_0x0168ef68(param_1,param_2,param_3,puVar3 + -0x48,puVar3 + -0x4c);
    uVar5 = 0;
    if (iVar4 == 0) {
      return 0;
    }
    unaff_x20 = *(long *)(puVar3 + -0x48);
    unaff_x21 = param_2;
    unaff_x22 = param_1;
    if ((unaff_x20 != 0) && (unaff_x22 = *(long *)(unaff_x20 + 0x18), unaff_x22 != 0)) {
      uVar1 = *(uint *)(puVar3 + -0x4c);
      unaff_x21 = (long)(int)uVar1;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar1) {
        uVar5 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (*(float *)(*(long *)(unaff_x22 + 0x10) + unaff_x21 * 8 + 0x20) == (float)uVar6) {
        return 0;
      }
      if (*(long *)(unaff_x20 + 0x20) != 0) {
        if (*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x18) <= uVar1) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar5 = 0;
        if (*(long *)(unaff_x20 + 0x18) != 0) {
          /*System.Collections.Generic.List<QualitySettings.Value>$$set_Item*/ func_0x0257382c(*(long *)(unaff_x20 + 0x18),unaff_x21,uVar6,uRam0000000003d3d720);
          /*Core.Settings.QualitySettings.Setting$$OnChange*/ func_0x0168cde4(unaff_x20);
          return 1;
        }
      }
    }
    unaff_x30 = Core_Settings_QualitySettings__TrySetFloatParameter;
    param_1 = func_0x00f78af4(uVar5);
    puVar3 = puVar3 + -0x50;
    param_2 = extraout_x1;
    uVar2 = (ulong)extraout_s0;
    unaff_x19 = uVar6;
  } while( true );
}



// ============================================================
// RVA: 0x168e454 | Core.Settings.QualitySettings.CreateSettingNamesList
// ============================================================

/* WARNING: Possible PIC construction at 0x0168e824: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0168e828) */
/* WARNING: Removing unreachable block (ram,0x0168e95c) */

long Core_Settings_QualitySettings__CreateSettingNamesList(long param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int extraout_w1;
  int extraout_w1_00;
  long lVar11;
  int iVar12;
  float fVar13;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  int aiStack_160 [4];
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000003eb5a92 & 1) == 0) {
    func_0x00f78a20(0x3d2ff60);
    func_0x00f78a20(0x3d34f88);
    func_0x00f78a20(0x3d34f90);
    func_0x00f78a20(0x3d34f98);
    func_0x00f78a20(0x3d39400);
    func_0x00f78a20(0x3d3bfa0);
    func_0x00f78a20(0x3d3bf88);
    func_0x00f78a20(0x3d1de30);
    bRam0000000003eb5a92 = 1;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lStack_48 = 0;
  uStack_50 = 0;
  lVar4 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar4,uRam0000000003d3bf88);
  if (*(long *)(param_1 + 0x10) == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar6 = (long *)___cxa_begin_catch();
      lVar11 = *plVar6;
      ___cxa_end_catch();
      /*System.Collections.Generic.Dictionary.Enumerator<XmlQualifiedName, SchemaElementDecl>$$Dispose*/ func_0x01fd5f4c(&uStack_60,uRam0000000003d34f88);
      if (lVar11 == 0) {
        return lVar4;
      }
      func_0x00f78ac0(lVar11,0);
    }
    lVar4 = __Unwind_Resume();
    puVar8 = &uStack_1c0;
    if ((bRam0000000003eb5a93 & 1) == 0) {
      func_0x00f78a20(0x3d2ff60);
      func_0x00f78a20(0x3d33678);
      func_0x00f78a20(0x3d34f88);
      func_0x00f78a20(0x3d34f90);
      func_0x00f78a20(0x3d33680);
      func_0x00f78a20(0x3d33688);
      func_0x00f78a20(0x3d34f98);
      func_0x00f78a20(0x3d39400);
      func_0x00f78a20(0x3d3d6d8);
      func_0x00f78a20(0x3d23f68);
      func_0x00f78a20(0x3d24dd8);
      func_0x00f78a20(0x3d67970);
      func_0x00f78a20(0x3d65ed8);
      bRam0000000003eb5a93 = 1;
    }
    uStack_100 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    lStack_150 = 0;
    aiStack_160[2] = 0;
    plVar6 = (long *)func_0x00f78aec(/*System.Text.StringBuilder_TypeInfo*/ uRam0000000003d24dd8);
    /*System.Text.StringBuilder$$.ctor*/ func_0x029d1794(plVar6,0x400,0);
    if (*(long *)(lVar4 + 0x10) == 0) goto code_r0x0168e96c;
    /*System.Collections.Generic.Dictionary<XmlQualifiedName, SchemaElementDecl>$$GetEnumerator*/ func_0x01ed7d98(&uStack_198,*(long *)(lVar4 + 0x10),uRam0000000003d2ff60);
    uStack_e8 = uStack_190;
    uStack_f0 = uStack_198;
    lStack_d8 = lStack_180;
    uStack_e0 = uStack_188;
    uStack_d0 = uStack_178;
    iVar12 = 0;
    while (uVar5 = /*System.Collections.Generic.Dictionary.Enumerator<XmlQualifiedName, SchemaElementDecl>$$MoveNext*/ func_0x01fd5dd4(&uStack_f0,uRam0000000003d34f90), (uVar5 & 1) != 0) {
      if (lStack_d8 == 0) {
        func_0x00f78af4();
code_r0x0168e968:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x168e96c);
        (*pcVar3)();
      }
      if (*(long *)(lStack_d8 + 0x20) == 0) {
        func_0x00f78af4();
        goto code_r0x0168e968;
      }
      /*System.Collections.Generic.List<QualitySettings.Parameter>$$GetEnumerator*/ func_0x02571a94(&uStack_198,*(long *)(lStack_d8 + 0x20),uRam0000000003d3d6d8);
      uStack_128 = uStack_190;
      uStack_130 = uStack_198;
      lStack_118 = lStack_180;
      uStack_120 = uStack_188;
      uStack_108 = uStack_170;
      uStack_110 = uStack_178;
      uStack_100 = uStack_168;
      uVar5 = /*System.Collections.Generic.List.Enumerator<QualitySettings.Parameter>$$MoveNext*/ func_0x01f8205c(&uStack_130,uRam0000000003d33680);
      uVar9 = uStack_120;
      if ((uVar5 & 1) != 0) {
        uStack_148 = uStack_110;
        lStack_150 = lStack_118;
        uStack_138 = uStack_100;
        uStack_140 = uStack_108;
        if (plVar6 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x0168e968;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(plVar6,uStack_120,0);
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(plVar6,/*STR(': ')*/ uRam0000000003d67970,0);
        if (((*(ushort *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uStack_1c0 = uVar9;
        uStack_1b0 = uStack_148;
        lStack_1b8 = lStack_150;
        uStack_1a0 = uStack_138;
        uStack_1a8 = uStack_140;
        goto code_r0x0168e9c4;
      }
      aiStack_160[iVar12] = 0x8b;
      iVar2 = aiStack_160[2];
      iVar1 = aiStack_160[2] + 1;
      aiStack_160[2] = iVar1;
      /*System.Collections.Generic.List.Enumerator<QualitySettings.Parameter>$$Dispose*/ func_0x01f82058(&uStack_130,uRam0000000003d33678);
      iVar12 = 0;
      if ((iVar1 != 0) && (iVar12 = iVar1, aiStack_160[iVar2] == 0x8b)) {
        aiStack_160[2] = iVar2;
        iVar12 = iVar2;
      }
    }
    aiStack_160[iVar12] = 0xa4;
    aiStack_160[2] = aiStack_160[2] + 1;
    /*System.Collections.Generic.Dictionary.Enumerator<XmlQualifiedName, SchemaElementDecl>$$Dispose*/ func_0x01fd5f4c(&uStack_f0,uRam0000000003d34f88);
    do {
      if (plVar6 != (long *)0x0) {
        lVar4 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        return lVar4;
      }
code_r0x0168e96c:
      func_0x00f78af4();
      if (extraout_w1_00 != 1) goto code_r0x0168e9c0;
      plVar7 = (long *)___cxa_begin_catch();
      lVar4 = *plVar7;
      ___cxa_end_catch();
      /*System.Collections.Generic.Dictionary.Enumerator<XmlQualifiedName, SchemaElementDecl>$$Dispose*/ func_0x01fd5f4c(&uStack_f0,uRam0000000003d34f88);
    } while (lVar4 == 0);
    func_0x00f78ac0(lVar4,0);
code_r0x0168e9c0:
    puVar8 = (undefined8 *)__Unwind_Resume();
code_r0x0168e9c4:
    if ((bRam0000000003eb5a94 & 1) == 0) {
      func_0x00f78a20(0x3d23f68);
      bRam0000000003eb5a94 = 1;
    }
    fVar13 = *(float *)((long)puVar8 + 8);
    if (((*(ushort *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((bRam0000000003eb5a97 & 1) == 0) {
      func_0x00f78a20(0x3d23f68);
      func_0x00f78a20(0x3d24a58);
      func_0x00f78a20(0x3d6cca0);
      func_0x00f78a20(0x3d751c8);
      bRam0000000003eb5a97 = 1;
    }
    if (*(char *)((long)puVar8 + 0xc) == '\0') {
      if (*(char *)((long)puVar8 + 0xd) == '\0') {
        if (((*(ushort *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar9 = /*Core.Settings.QualitySettings$$GetFloatParameterStringFormatter*/ func_0x0168ec50(puVar8);
        uVar10 = func_0x00f78ae0(/*float_TypeInfo*/ uRam0000000003d24a58,&stack0xfffffffffffffe08);
        lVar4 = /*System.String$$Format*/ func_0x029bc688(uVar9,uVar10,0);
      }
      else {
        lVar4 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&stack0xfffffffffffffe0c,0);
      }
    }
    else {
      if (fVar13 <= 0.0) {
        plVar6 = (long *)0x3d6cca0;
      }
      else {
        plVar6 = (long *)0x3d751c8;
      }
      lVar4 = *plVar6;
    }
    return lVar4;
  }
  /*System.Collections.Generic.Dictionary<XmlQualifiedName, SchemaElementDecl>$$GetEnumerator*/ func_0x01ed7d98(&uStack_60,*(long *)(param_1 + 0x10),uRam0000000003d2ff60);
  while( true ) {
    uVar5 = /*System.Collections.Generic.Dictionary.Enumerator<XmlQualifiedName, SchemaElementDecl>$$MoveNext*/ func_0x01fd5dd4(&uStack_60,uRam0000000003d34f90);
    if ((uVar5 & 1) == 0) {
      /*System.Collections.Generic.Dictionary.Enumerator<XmlQualifiedName, SchemaElementDecl>$$Dispose*/ func_0x01fd5f4c(&uStack_60,uRam0000000003d34f88);
      return lVar4;
    }
    if (lStack_48 == 0) break;
    if (lVar4 == 0) {
      func_0x00f78af4();
      goto code_r0x0168e5a4;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar4,*(undefined8 *)(lStack_48 + 0x10),uRam0000000003d3bfa0);
  }
  func_0x00f78af4();
code_r0x0168e5a4:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x168e5a8);
  (*pcVar3)();
}



// ============================================================
// RVA: 0x168e5f4 | Core.Settings.QualitySettings.CreateSettingsString
// ============================================================

/* WARNING: Possible PIC construction at 0x0168e824: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0168e828) */
/* WARNING: Removing unreachable block (ram,0x0168e95c) */

undefined8 Core_Settings_QualitySettings__CreateSettingsString(long param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int extraout_w1;
  long lVar10;
  int iVar11;
  float fVar12;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  int aiStack_100 [4];
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  puVar8 = &uStack_160;
  if ((bRam0000000003eb5a93 & 1) == 0) {
    func_0x00f78a20(0x3d2ff60);
    func_0x00f78a20(0x3d33678);
    func_0x00f78a20(0x3d34f88);
    func_0x00f78a20(0x3d34f90);
    func_0x00f78a20(0x3d33680);
    func_0x00f78a20(0x3d33688);
    func_0x00f78a20(0x3d34f98);
    func_0x00f78a20(0x3d39400);
    func_0x00f78a20(0x3d3d6d8);
    func_0x00f78a20(0x3d23f68);
    func_0x00f78a20(0x3d24dd8);
    func_0x00f78a20(0x3d67970);
    func_0x00f78a20(0x3d65ed8);
    bRam0000000003eb5a93 = 1;
  }
  uStack_a0 = 0;
  lStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  lStack_f0 = 0;
  aiStack_100[2] = 0;
  plVar4 = (long *)func_0x00f78aec(/*System.Text.StringBuilder_TypeInfo*/ uRam0000000003d24dd8);
  /*System.Text.StringBuilder$$.ctor*/ func_0x029d1794(plVar4,0x400,0);
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_0168e96c;
  /*System.Collections.Generic.Dictionary<XmlQualifiedName, SchemaElementDecl>$$GetEnumerator*/ func_0x01ed7d98(&uStack_138,*(long *)(param_1 + 0x10),uRam0000000003d2ff60);
  uStack_88 = uStack_130;
  uStack_90 = uStack_138;
  lStack_78 = lStack_120;
  uStack_80 = uStack_128;
  uStack_70 = uStack_118;
  iVar11 = 0;
  while (uVar5 = /*System.Collections.Generic.Dictionary.Enumerator<XmlQualifiedName, SchemaElementDecl>$$MoveNext*/ func_0x01fd5dd4(&uStack_90,uRam0000000003d34f90), (uVar5 & 1) != 0) {
    if (lStack_78 == 0) {
      func_0x00f78af4();
code_r0x0168e968:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x168e96c);
      (*pcVar3)();
    }
    if (*(long *)(lStack_78 + 0x20) == 0) {
      func_0x00f78af4();
      goto code_r0x0168e968;
    }
    /*System.Collections.Generic.List<QualitySettings.Parameter>$$GetEnumerator*/ func_0x02571a94(&uStack_138,*(long *)(lStack_78 + 0x20),uRam0000000003d3d6d8);
    uStack_c8 = uStack_130;
    uStack_d0 = uStack_138;
    lStack_b8 = lStack_120;
    uStack_c0 = uStack_128;
    uStack_a8 = uStack_110;
    uStack_b0 = uStack_118;
    uStack_a0 = uStack_108;
    uVar5 = /*System.Collections.Generic.List.Enumerator<QualitySettings.Parameter>$$MoveNext*/ func_0x01f8205c(&uStack_d0,uRam0000000003d33680);
    uVar6 = uStack_c0;
    if ((uVar5 & 1) != 0) {
      uStack_e8 = uStack_b0;
      lStack_f0 = lStack_b8;
      uStack_d8 = uStack_a0;
      uStack_e0 = uStack_a8;
      if (plVar4 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x0168e968;
      }
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(plVar4,uStack_c0,0);
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(plVar4,/*STR(': ')*/ uRam0000000003d67970,0);
      if (((*(ushort *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_160 = uVar6;
      uStack_150 = uStack_e8;
      lStack_158 = lStack_f0;
      uStack_140 = uStack_d8;
      uStack_148 = uStack_e0;
      goto code_r0x0168e9c4;
    }
    aiStack_100[iVar11] = 0x8b;
    iVar2 = aiStack_100[2];
    iVar1 = aiStack_100[2] + 1;
    aiStack_100[2] = iVar1;
    /*System.Collections.Generic.List.Enumerator<QualitySettings.Parameter>$$Dispose*/ func_0x01f82058(&uStack_d0,uRam0000000003d33678);
    iVar11 = 0;
    if ((iVar1 != 0) && (iVar11 = iVar1, aiStack_100[iVar2] == 0x8b)) {
      aiStack_100[2] = iVar2;
      iVar11 = iVar2;
    }
  }
  aiStack_100[iVar11] = 0xa4;
  aiStack_100[2] = aiStack_100[2] + 1;
  /*System.Collections.Generic.Dictionary.Enumerator<XmlQualifiedName, SchemaElementDecl>$$Dispose*/ func_0x01fd5f4c(&uStack_90,uRam0000000003d34f88);
  do {
    if (plVar4 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      return uVar6;
    }
LAB_0168e96c:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x0168e9c0;
    plVar7 = (long *)___cxa_begin_catch();
    lVar10 = *plVar7;
    ___cxa_end_catch();
    /*System.Collections.Generic.Dictionary.Enumerator<XmlQualifiedName, SchemaElementDecl>$$Dispose*/ func_0x01fd5f4c(&uStack_90,uRam0000000003d34f88);
  } while (lVar10 == 0);
  func_0x00f78ac0(lVar10,0);
code_r0x0168e9c0:
  puVar8 = (undefined8 *)__Unwind_Resume();
code_r0x0168e9c4:
  if ((bRam0000000003eb5a94 & 1) == 0) {
    func_0x00f78a20(0x3d23f68);
    bRam0000000003eb5a94 = 1;
  }
  fVar12 = *(float *)((long)puVar8 + 8);
  if (((*(ushort *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb5a97 & 1) == 0) {
    func_0x00f78a20(0x3d23f68);
    func_0x00f78a20(0x3d24a58);
    func_0x00f78a20(0x3d6cca0);
    func_0x00f78a20(0x3d751c8);
    bRam0000000003eb5a97 = 1;
  }
  if (*(char *)((long)puVar8 + 0xc) == '\0') {
    if (*(char *)((long)puVar8 + 0xd) == '\0') {
      if (((*(ushort *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar6 = /*Core.Settings.QualitySettings$$GetFloatParameterStringFormatter*/ func_0x0168ec50(puVar8);
      uVar9 = func_0x00f78ae0(/*float_TypeInfo*/ uRam0000000003d24a58,&stack0xfffffffffffffe68);
      uVar6 = /*System.String$$Format*/ func_0x029bc688(uVar6,uVar9,0);
    }
    else {
      uVar6 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&stack0xfffffffffffffe6c,0);
    }
  }
  else {
    if (fVar12 <= 0.0) {
      puVar8 = (undefined8 *)0x3d6cca0;
    }
    else {
      puVar8 = (undefined8 *)0x3d751c8;
    }
    uVar6 = *puVar8;
  }
  return uVar6;
}



// ============================================================
// RVA: 0x168e9c4 | Core.Settings.QualitySettings.CreateValueStringFromParameter
// ============================================================

undefined8 Core_Settings_QualitySettings__CreateValueStringFromParameter(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  float fVar4;
  
  if ((bRam0000000003eb5a94 & 1) == 0) {
    func_0x00f78a20(0x3d23f68);
    bRam0000000003eb5a94 = 1;
  }
  fVar4 = *(float *)(param_1 + 8);
  if (((*(ushort *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb5a97 & 1) == 0) {
    func_0x00f78a20(0x3d23f68);
    func_0x00f78a20(0x3d24a58);
    func_0x00f78a20(0x3d6cca0);
    func_0x00f78a20(0x3d751c8);
    bRam0000000003eb5a97 = 1;
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    if (*(char *)(param_1 + 0xd) == '\0') {
      if (((*(ushort *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar1 = /*Core.Settings.QualitySettings$$GetFloatParameterStringFormatter*/ func_0x0168ec50(param_1);
      uVar2 = func_0x00f78ae0(/*float_TypeInfo*/ uRam0000000003d24a58,&stack0xffffffffffffffc8);
      uVar1 = /*System.String$$Format*/ func_0x029bc688(uVar1,uVar2,0);
    }
    else {
      uVar1 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&stack0xffffffffffffffcc,0);
    }
  }
  else {
    if (fVar4 <= 0.0) {
      puVar3 = (undefined8 *)0x3d6cca0;
    }
    else {
      puVar3 = (undefined8 *)0x3d751c8;
    }
    uVar1 = *puVar3;
  }
  return uVar1;
}



// ============================================================
// RVA: 0x168ea3c | Core.Settings.QualitySettings.CreateValueStringFromParameterAndFloat
// ============================================================

undefined8
Core_Settings_QualitySettings__CreateValueStringFromParameterAndFloat(float param_1,long param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  float fStack_38;
  int iStack_34;
  
  if ((bRam0000000003eb5a97 & 1) == 0) {
    func_0x00f78a20(0x3d23f68);
    func_0x00f78a20(0x3d24a58);
    func_0x00f78a20(0x3d6cca0);
    func_0x00f78a20(0x3d751c8);
    bRam0000000003eb5a97 = 1;
  }
  if (*(char *)(param_2 + 0xc) == '\0') {
    if (*(char *)(param_2 + 0xd) == '\0') {
      if (((*(ushort *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar2 = /*Core.Settings.QualitySettings$$GetFloatParameterStringFormatter*/ func_0x0168ec50(param_2);
      fStack_38 = param_1;
      uVar3 = func_0x00f78ae0(/*float_TypeInfo*/ uRam0000000003d24a58,&fStack_38);
      uVar2 = /*System.String$$Format*/ func_0x029bc688(uVar2,uVar3,0);
    }
    else {
      fVar1 = -param_1;
      if (param_1 != INFINITY) {
        fVar1 = param_1;
      }
      iStack_34 = (int)fVar1;
      uVar2 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_34,0);
    }
  }
  else {
    if (param_1 <= 0.0) {
      puVar4 = (undefined8 *)0x3d6cca0;
    }
    else {
      puVar4 = (undefined8 *)0x3d751c8;
    }
    uVar2 = *puVar4;
  }
  return uVar2;
}



// ============================================================
// RVA: 0x168eb68 | Core.Settings.QualitySettings.CreateValueStringFromParameter
// ============================================================

undefined8 Core_Settings_QualitySettings__CreateValueStringFromParameter(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  float fVar4;
  
  if ((bRam0000000003eb5a95 & 1) == 0) {
    func_0x00f78a20(0x3d23f68);
    bRam0000000003eb5a95 = 1;
  }
  fVar4 = *(float *)(param_1 + 8);
  if (((*(ushort *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb5a97 & 1) == 0) {
    func_0x00f78a20(0x3d23f68);
    func_0x00f78a20(0x3d24a58);
    func_0x00f78a20(0x3d6cca0);
    func_0x00f78a20(0x3d751c8);
    bRam0000000003eb5a97 = 1;
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    if (*(char *)(param_1 + 0xd) == '\0') {
      if (((*(ushort *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar1 = /*Core.Settings.QualitySettings$$GetFloatParameterStringFormatter*/ func_0x0168ec50(param_1);
      uVar2 = func_0x00f78ae0(/*float_TypeInfo*/ uRam0000000003d24a58,&stack0xffffffffffffffc8);
      uVar1 = /*System.String$$Format*/ func_0x029bc688(uVar1,uVar2,0);
    }
    else {
      uVar1 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&stack0xffffffffffffffcc,0);
    }
  }
  else {
    if (fVar4 <= 0.0) {
      puVar3 = (undefined8 *)0x3d6cca0;
    }
    else {
      puVar3 = (undefined8 *)0x3d751c8;
    }
    uVar1 = *puVar3;
  }
  return uVar1;
}



// ============================================================
// RVA: 0x168ebe0 | Core.Settings.QualitySettings.CreateValueStringFromParameterAndValue
// ============================================================

undefined8
Core_Settings_QualitySettings__CreateValueStringFromParameterAndValue(long param_1,float param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  float fStack_38;
  int iStack_34;
  
  if ((bRam0000000003eb5a96 & 1) == 0) {
    func_0x00f78a20(0x3d23f68);
    bRam0000000003eb5a96 = 1;
  }
  if (((*(ushort *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb5a97 & 1) == 0) {
    func_0x00f78a20(0x3d23f68);
    func_0x00f78a20(0x3d24a58);
    func_0x00f78a20(0x3d6cca0);
    func_0x00f78a20(0x3d751c8);
    bRam0000000003eb5a97 = 1;
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    if (*(char *)(param_1 + 0xd) == '\0') {
      if (((*(ushort *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar2 = /*Core.Settings.QualitySettings$$GetFloatParameterStringFormatter*/ func_0x0168ec50(param_1);
      fStack_38 = param_2;
      uVar3 = func_0x00f78ae0(/*float_TypeInfo*/ uRam0000000003d24a58,&fStack_38);
      uVar2 = /*System.String$$Format*/ func_0x029bc688(uVar2,uVar3,0);
    }
    else {
      fVar1 = -param_2;
      if (param_2 != INFINITY) {
        fVar1 = param_2;
      }
      iStack_34 = (int)fVar1;
      uVar2 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_34,0);
    }
  }
  else {
    if (param_2 <= 0.0) {
      puVar4 = (undefined8 *)0x3d6cca0;
    }
    else {
      puVar4 = (undefined8 *)0x3d751c8;
    }
    uVar2 = *puVar4;
  }
  return uVar2;
}



// ============================================================
// RVA: 0x168ec50 | Core.Settings.QualitySettings.GetFloatParameterStringFormatter
// ============================================================

/* WARNING: Possible PIC construction at 0x0168efec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0168f0a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0168eff0) */
/* WARNING: Removing unreachable block (ram,0x0168f008) */
/* WARNING: Removing unreachable block (ram,0x0168eff4) */
/* WARNING: Removing unreachable block (ram,0x0168f0a8) */
/* WARNING: Removing unreachable block (ram,0x0168f0fc) */
/* WARNING: Removing unreachable block (ram,0x0168f0b0) */
/* WARNING: Removing unreachable block (ram,0x0168f0bc) */
/* WARNING: Removing unreachable block (ram,0x0168f12c) */
/* WARNING: Removing unreachable block (ram,0x0168f0c4) */
/* WARNING: Removing unreachable block (ram,0x0168f0d4) */
/* WARNING: Removing unreachable block (ram,0x0168f0dc) */
/* WARNING: Removing unreachable block (ram,0x0168f10c) */

ulong Core_Settings_QualitySettings__GetFloatParameterStringFormatter(long param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar4;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  dword *pdVar11;
  dword *pdVar12;
  undefined8 *puVar13;
  undefined4 *in_x4;
  undefined4 *puVar14;
  long lVar15;
  undefined8 *extraout_x8;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 unaff_x22;
  long lVar19;
  undefined8 unaff_x23;
  ulong uVar20;
  undefined8 unaff_x24;
  undefined1 ****ppppuVar21;
  undefined *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 **ppuStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined1 auStack_d0 [16];
  undefined1 ***pppuStack_c0;
  undefined *puStack_b8;
  long lStack_a8;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  long lStack_68;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  auVar25._8_8_ = unaff_x22;
  auVar25._0_8_ = unaff_x23;
  if ((bRam0000000003eb5a98 & 1) == 0) {
    func_0x00f78a20(0x3d23f68);
    bRam0000000003eb5a98 = 1;
  }
  pdVar11 = &MACH_HEADER.cputype;
  puVar13 = (undefined8 *)0x0;
  iVar3 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d32c(*(undefined4 *)(param_1 + 0x18),1);
  if (((*(ushort *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar15 = **(long **)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0xb8);
  if (lVar15 == 0) {
    func_0x00f78af4();
  }
  else if (iVar3 - 1U < *(uint *)(lVar15 + 0x18)) {
    return *(ulong *)(lVar15 + (long)(int)(iVar3 - 1U) * 8 + 0x20);
  }
  uVar5 = func_0x00f78b24();
  auVar23 = func_0x00f78ac0(uVar5,0);
  puStack_38 = &Core_Settings_QualitySettings__CreateParameterList;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5a99 & 1) == 0) {
    func_0x00f78a20(0x3d2ff68);
    func_0x00f78a20(0x3d3d6c0);
    func_0x00f78a20(0x3d3d6c8);
    func_0x00f78a20(0x3d1e278);
    bRam0000000003eb5a99 = 1;
  }
  lStack_68 = 0;
  lVar15 = *(long *)(auVar23._0_8_ + 0x10);
  if (lVar15 != 0) {
    pdVar11 = (dword *)&lStack_68;
    puVar13 = puRam0000000003d2ff68;
    iVar3 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar15,auVar23._8_8_);
    if (iVar3 == 0) {
      uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<QualitySettings.Parameter>_TypeInfo*/ uRam0000000003d1e278);
      /*System.Collections.Generic.List<QualitySettings.Parameter>$$.ctor*/ func_0x0257018c(uVar6,uRam0000000003d3d6c0);
      return uVar6;
    }
    if (lStack_68 != 0) {
      uVar5 = *(undefined8 *)(lStack_68 + 0x20);
      uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<QualitySettings.Parameter>_TypeInfo*/ uRam0000000003d1e278);
      /*System.Collections.Generic.List<QualitySettings.Parameter>$$.ctor*/ func_0x02570370(uVar6,uVar5,uRam0000000003d3d6c8);
      return uVar6;
    }
  }
  auVar23 = func_0x00f78af4();
  puStack_78 = &Core_Settings_QualitySettings__CreateSetValueList;
  ppuStack_80 = &puStack_40;
  if ((bRam0000000003eb5a9a & 1) == 0) {
    func_0x00f78a20(0x3d2ff68);
    func_0x00f78a20(0x3d3d6f8);
    func_0x00f78a20(0x3d3d700);
    func_0x00f78a20(0x3d1e280);
    bRam0000000003eb5a9a = 1;
  }
  lStack_a8 = 0;
  lVar15 = *(long *)(auVar23._0_8_ + 0x10);
  if (lVar15 != 0) {
    pdVar11 = (dword *)&lStack_a8;
    puVar13 = puRam0000000003d2ff68;
    iVar3 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar15,auVar23._8_8_);
    if (iVar3 == 0) {
      uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<QualitySettings.Value>_TypeInfo*/ uRam0000000003d1e280);
      /*System.Collections.Generic.List<QualitySettings.Value>$$.ctor*/ func_0x02572ecc(uVar6,uRam0000000003d3d6f8);
      return uVar6;
    }
    if (lStack_a8 != 0) {
      uVar5 = *(undefined8 *)(lStack_a8 + 0x18);
      uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<QualitySettings.Value>_TypeInfo*/ uRam0000000003d1e280);
      /*System.Collections.Generic.List<QualitySettings.Value>$$.ctor*/ func_0x025730b0(uVar6,uVar5,uRam0000000003d3d700);
      return uVar6;
    }
  }
  auVar24 = func_0x00f78af4();
  puStack_b8 = &Core_Settings_QualitySettings__DoesSettingExist;
  ppppuVar21 = &pppuStack_c0;
  puVar17 = (undefined8 *)0x3eb5000;
  pppuStack_c0 = &ppuStack_80;
  auStack_d0 = auVar23;
  if ((bRam0000000003eb5a9b & 1) == 0) {
    func_0x00f78a20(0x3d2ff58);
    bRam0000000003eb5a9b = 1;
  }
  uVar6 = auStack_d0._0_8_;
  lVar15 = *(long *)(auVar24._0_8_ + 0x10);
  if (lVar15 == 0) {
    puVar22 = &Core_Settings_QualitySettings__TryGetSettingAndParameterIndex;
    auVar23 = func_0x00f78af4();
    puVar2 = &stack0xffffffffffffff20;
    do {
      *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
      *(undefined1 (*) [16])(puVar2 + -0x38) = auVar25;
      *(undefined8 **)(puVar2 + -0x28) = puVar17;
      *(undefined1 (*) [16])(puVar2 + -0x20) = auVar24;
      *(undefined1 *****)(puVar2 + -0x10) = ppppuVar21;
      *(undefined **)(puVar2 + -8) = puVar22;
      pdVar12 = pdVar11;
      puVar17 = puVar13;
      puVar14 = in_x4;
      if ((bRam0000000003eb5a9e & 1) == 0) {
        func_0x00f78a20(0x3d2ff68);
        bRam0000000003eb5a9e = 1;
      }
      *(undefined8 *)(puVar2 + -0x48) = 0;
      lVar15 = *(long *)(auVar23._0_8_ + 0x10);
      if (lVar15 != 0) {
        pdVar12 = (dword *)(puVar2 + -0x48);
        puVar17 = puRam0000000003d2ff68;
        iVar3 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar15,auVar23._8_8_);
        if (iVar3 == 0) {
          *puVar13 = 0;
          *in_x4 = 0;
          return 0;
        }
        if (*(long *)(puVar2 + -0x48) != 0) {
          plVar7 = (long *)(*(long *)(puVar2 + -0x48) + 0x20);
          *(undefined8 *)(puVar2 + -0x90) = 0x3eb5000;
          *(undefined1 (*) [16])(puVar2 + -0x88) = auVar23;
          *(dword **)(puVar2 + -0x78) = pdVar11;
          *(undefined8 **)(puVar2 + -0x70) = puVar13;
          *(undefined4 **)(puVar2 + -0x68) = in_x4;
          *(undefined1 **)(puVar2 + -0x60) = puVar2 + -0x10;
          *(undefined **)(puVar2 + -0x58) = &UNK_0168eff0;
          if ((bRam0000000003eb5aa5 & 1) == 0) {
            func_0x00f78a20(0x3d3d6e0);
            func_0x00f78a20(0x3d3d6e8);
            bRam0000000003eb5aa5 = 1;
          }
          lVar15 = *plVar7;
          if (lVar15 != 0) {
            uVar4 = *(uint *)(lVar15 + 0x18);
            if ((int)uVar4 < 1) {
              return 0xffffffff;
            }
            uVar6 = 0;
            lVar19 = 0x20;
            do {
              if (*(uint *)(lVar15 + 0x18) <= uVar6) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              uVar18 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(*(long *)(lVar15 + 0x10) + lVar19),pdVar11,0)
              ;
              if ((uVar18 & 1) != 0) {
                return uVar6;
              }
              if ((ulong)uVar4 - 1 == uVar6) {
                return 0xffffffff;
              }
              lVar15 = *plVar7;
              lVar19 = lVar19 + 0x28;
              uVar6 = uVar6 + 1;
            } while (lVar15 != 0);
          }
          func_0x00f78af4();
          return 0xffffffff;
        }
      }
      auVar25 = func_0x00f78af4();
      auVar24._8_8_ = puVar14;
      auVar24._0_8_ = pdVar12;
      *(undefined8 *)(puVar2 + -0x90) = 0x3eb5000;
      *(undefined1 (*) [16])(puVar2 + -0x88) = auVar23;
      *(dword **)(puVar2 + -0x78) = pdVar11;
      *(undefined8 **)(puVar2 + -0x70) = puVar13;
      *(undefined4 **)(puVar2 + -0x68) = in_x4;
      *(undefined1 **)(puVar2 + -0x60) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x58) = &Core_Settings_QualitySettings__TryGetSettingAndParameter;
      ppppuVar21 = (undefined1 ****)(puVar2 + -0x60);
      unaff_x24 = 0x3eb5000;
      if ((bRam0000000003eb5a9d & 1) == 0) {
        func_0x00f78a20(0x3d3d6e8);
        bRam0000000003eb5a9d = 1;
      }
      *(undefined8 *)(puVar2 + -0x98) = 0;
      *(undefined4 *)(puVar2 + -0x9c) = 0;
      puVar13 = (undefined8 *)(puVar2 + -0x98);
      in_x4 = (undefined4 *)(puVar2 + -0x9c);
      puVar22 = &UNK_0168f0a8;
      puVar2 = puVar2 + -0xa0;
      pdVar11 = pdVar12;
      auVar23 = auVar25;
    } while( true );
  }
  if (lVar15 != 0) {
    uVar4 = (*(code *)**(undefined8 **)
                        (*(long *)(*(long *)(uRam0000000003d2ff58 + 0x18) + 0xc0) + 0x40))();
    return (ulong)(~uVar4 >> 0x1f);
  }
  uVar18 = uRam0000000003d2ff58;
  auVar25 = func_0x00f78af4(0,auVar24._8_8_);
  uVar8 = auVar25._8_8_;
  lVar15 = auVar25._0_8_;
  auStack_d0._8_8_ = &System_Collections_Generic_Dictionary_object__object___ContainsValue;
  if (uVar8 != 0) {
    auStack_d0._0_8_ = &pppuStack_c0;
    plVar7 = (long *)(*(code *)**(undefined8 **)(*(long *)(*(long *)(uVar18 + 0x18) + 0xc0) + 0x68))
                               ();
    iVar3 = *(int *)(lVar15 + 0x20);
    if (0 < iVar3) {
      lVar19 = 0;
      uVar20 = 0;
      do {
        lVar16 = *(long *)(lVar15 + 0x18);
        uVar6 = uVar8;
        if (lVar16 == 0) goto code_r0x01ed7b80;
        if (*(uint *)(lVar16 + 0x18) <= uVar20) goto code_r0x01ed7b84;
        if (-1 < *(int *)(lVar16 + lVar19 + 0x20)) {
          if (plVar7 == (long *)0x0) goto code_r0x01ed7b80;
          puVar13 = *(undefined8 **)(*plVar7 + 0x1c0);
          uVar18 = uVar8;
          uVar6 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(lVar16 + lVar19 + 0x30));
          if ((uVar6 & 1) != 0) {
            return 1;
          }
          iVar3 = *(int *)(lVar15 + 0x20);
        }
        uVar20 = uVar20 + 1;
        lVar19 = lVar19 + 0x18;
      } while ((long)uVar20 < (long)iVar3);
    }
    return 0;
  }
  uVar8 = (ulong)*(uint *)(lVar15 + 0x20);
  if ((int)*(uint *)(lVar15 + 0x20) < 1) {
    return 0;
  }
  lVar15 = *(long *)(lVar15 + 0x18);
  auStack_d0._0_8_ = &pppuStack_c0;
  if (lVar15 == 0) {
code_r0x01ed7b80:
    func_0x00f78af4();
  }
  else {
    uVar20 = (ulong)*(uint *)(lVar15 + 0x18);
    plVar7 = (long *)(lVar15 + 0x30);
    while (auStack_d0._0_8_ = &pppuStack_c0, uVar20 != 0) {
      if ((-1 < (int)plVar7[-2]) && (*plVar7 == 0)) {
        return 1;
      }
      uVar20 = uVar20 - 1;
      plVar7 = plVar7 + 3;
      uVar8 = uVar8 - 1;
      if (uVar8 == 0) {
        return 0;
      }
    }
  }
code_r0x01ed7b84:
  uVar5 = func_0x00f78b24();
  auVar25 = func_0x00f78ac0(uVar5,0);
  uVar8 = auVar25._8_8_;
  lVar15 = auVar25._0_8_;
  puStack_108 = &System_Collections_Generic_Dictionary_object__object___CopyTo;
  puStack_110 = (undefined8 *)auStack_d0;
  if (uVar8 != 0) {
    uVar4 = (uint)uVar18;
    if (((int)uVar4 < 0) || (*(int *)(uVar8 + 0x18) < (int)uVar4)) {
code_r0x01ed7c9c:
      uStack_160 = CONCAT44(uStack_160._4_4_,uVar4);
      uVar5 = func_0x00f78a24(0x3d22910);
      uVar5 = func_0x00f78ae0(uVar5,&uStack_160);
      func_0x00f78a24(0x3d1fcf8);
      uVar8 = func_0x00f78aec();
      uVar9 = func_0x00f78a24(0x3d79a60);
      uVar10 = func_0x00f78a24(0x3d6de28);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a580(uVar8,uVar9,uVar5,uVar10,0);
      uVar5 = func_0x00f78a24(0x3d2f688);
      func_0x00f78ac0(uVar8,uVar5);
    }
    else if (lVar15 != 0) {
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(puVar13[3] + 0xc0) + 0x90))(lVar15);
      if ((int)(*(int *)(uVar8 + 0x18) - uVar4) < (int)uVar6) {
        func_0x00f78a24(0x3d1fce8);
        uVar5 = func_0x00f78aec();
        uVar9 = func_0x00f78a24(0x3d6bc10);
        /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar5,uVar9,0);
        goto code_r0x01ed7d80;
      }
      uVar1 = *(uint *)(lVar15 + 0x20);
      if ((int)uVar1 < 1) {
        return uVar6;
      }
      lVar15 = *(long *)(lVar15 + 0x18);
      if (lVar15 != 0) {
        uVar20 = 0;
        puVar17 = (undefined8 *)(lVar15 + 0x30);
        while (uVar4 = (uint)uVar18, uVar20 < *(uint *)(lVar15 + 0x18)) {
          if (-1 < *(int *)(puVar17 + -2)) {
            uStack_160 = 0;
            uStack_158 = 0;
            uVar6 = /*System.Collections.Generic.KeyValuePair<Type, XmlRootAttribute>$$.ctor*/ func_0x023185d4(&uStack_160,puVar17[-1],*puVar17,
                                    *(undefined8 *)(*(long *)(puVar13[3] + 0xc0) + 0xa0));
            if (*(uint *)(uVar8 + 0x18) <= uVar4) break;
            lVar19 = uVar8 + (long)(int)uVar4 * 0x10;
            uVar18 = (ulong)(uVar4 + 1);
            *(undefined8 *)(lVar19 + 0x28) = uStack_158;
            *(undefined8 *)(lVar19 + 0x20) = uStack_160;
          }
          uVar20 = uVar20 + 1;
          puVar17 = puVar17 + 3;
          if (uVar1 == uVar20) {
            return uVar6;
          }
        }
        uVar5 = func_0x00f78b24();
        func_0x00f78ac0(uVar5,0);
        goto code_r0x01ed7c9c;
      }
    }
    func_0x00f78af4();
    uVar6 = uVar8;
  }
  func_0x00f78a24(0x3d1fcf0);
  uVar5 = func_0x00f78aec();
  uVar9 = func_0x00f78a24(0x3d77d18);
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar9,0);
  uVar8 = uVar6;
code_r0x01ed7d80:
  uVar9 = func_0x00f78a24(0x3d2f688);
  auVar25 = func_0x00f78ac0(uVar5,uVar9);
  puStack_168 = &
                System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator
  ;
  uStack_190 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_180 = uVar8;
  uStack_178 = uVar5;
  ppuStack_170 = &puStack_110;
  uVar6 = /*System.Collections.Generic.Dictionary.Enumerator<object, object>$$.ctor*/ func_0x01fd5da8(&uStack_1b0,auVar25._0_8_,2,
                          *(undefined8 *)(*(long *)(*(long *)(auVar25._8_8_ + 0x18) + 0xc0) + 0xb0))
  ;
  extraout_x8[1] = uStack_1a8;
  *extraout_x8 = uStack_1b0;
  extraout_x8[3] = uStack_198;
  extraout_x8[2] = uStack_1a0;
  extraout_x8[4] = uStack_190;
  return uVar6;
}



// ============================================================
// RVA: 0x168ed04 | Core.Settings.QualitySettings.CreateParameterList
// ============================================================

/* WARNING: Possible PIC construction at 0x0168efec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0168f0a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0168eff0) */
/* WARNING: Removing unreachable block (ram,0x0168f008) */
/* WARNING: Removing unreachable block (ram,0x0168eff4) */
/* WARNING: Removing unreachable block (ram,0x0168f0a8) */
/* WARNING: Removing unreachable block (ram,0x0168f0fc) */
/* WARNING: Removing unreachable block (ram,0x0168f0b0) */
/* WARNING: Removing unreachable block (ram,0x0168f0bc) */
/* WARNING: Removing unreachable block (ram,0x0168f12c) */
/* WARNING: Removing unreachable block (ram,0x0168f0c4) */
/* WARNING: Removing unreachable block (ram,0x0168f0d4) */
/* WARNING: Removing unreachable block (ram,0x0168f0dc) */
/* WARNING: Removing unreachable block (ram,0x0168f10c) */

ulong Core_Settings_QualitySettings__CreateParameterList
                (long param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                undefined4 *param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar5;
  long lVar6;
  uint uVar4;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined8 *extraout_x8;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 unaff_x22;
  long lVar16;
  undefined8 unaff_x23;
  ulong uVar17;
  undefined8 unaff_x24;
  undefined1 ***pppuVar18;
  undefined *puVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 **ppuStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_a0 [16];
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  long lStack_78;
  undefined1 *puStack_50;
  undefined *puStack_48;
  long lStack_38;
  
  auVar22._8_8_ = unaff_x22;
  auVar22._0_8_ = unaff_x23;
  if ((bRam0000000003eb5a99 & 1) == 0) {
    func_0x00f78a20(0x3d2ff68);
    func_0x00f78a20(0x3d3d6c0);
    func_0x00f78a20(0x3d3d6c8);
    func_0x00f78a20(0x3d1e278);
    bRam0000000003eb5a99 = 1;
  }
  lStack_38 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    param_3 = &lStack_38;
    param_4 = puRam0000000003d2ff68;
    iVar3 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(param_1 + 0x10),param_2);
    if (iVar3 == 0) {
      uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<QualitySettings.Parameter>_TypeInfo*/ uRam0000000003d1e278);
      /*System.Collections.Generic.List<QualitySettings.Parameter>$$.ctor*/ func_0x0257018c(uVar5,uRam0000000003d3d6c0);
      return uVar5;
    }
    if (lStack_38 != 0) {
      uVar13 = *(undefined8 *)(lStack_38 + 0x20);
      uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<QualitySettings.Parameter>_TypeInfo*/ uRam0000000003d1e278);
      /*System.Collections.Generic.List<QualitySettings.Parameter>$$.ctor*/ func_0x02570370(uVar5,uVar13,uRam0000000003d3d6c8);
      return uVar5;
    }
  }
  auVar20 = func_0x00f78af4();
  puStack_48 = &Core_Settings_QualitySettings__CreateSetValueList;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5a9a & 1) == 0) {
    func_0x00f78a20(0x3d2ff68);
    func_0x00f78a20(0x3d3d6f8);
    func_0x00f78a20(0x3d3d700);
    func_0x00f78a20(0x3d1e280);
    bRam0000000003eb5a9a = 1;
  }
  lStack_78 = 0;
  lVar6 = *(long *)(auVar20._0_8_ + 0x10);
  if (lVar6 != 0) {
    param_3 = &lStack_78;
    param_4 = puRam0000000003d2ff68;
    iVar3 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar6,auVar20._8_8_);
    if (iVar3 == 0) {
      uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<QualitySettings.Value>_TypeInfo*/ uRam0000000003d1e280);
      /*System.Collections.Generic.List<QualitySettings.Value>$$.ctor*/ func_0x02572ecc(uVar5,uRam0000000003d3d6f8);
      return uVar5;
    }
    if (lStack_78 != 0) {
      uVar13 = *(undefined8 *)(lStack_78 + 0x18);
      uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<QualitySettings.Value>_TypeInfo*/ uRam0000000003d1e280);
      /*System.Collections.Generic.List<QualitySettings.Value>$$.ctor*/ func_0x025730b0(uVar5,uVar13,uRam0000000003d3d700);
      return uVar5;
    }
  }
  auVar21 = func_0x00f78af4();
  puStack_88 = &Core_Settings_QualitySettings__DoesSettingExist;
  pppuVar18 = &ppuStack_90;
  puVar14 = (undefined8 *)0x3eb5000;
  ppuStack_90 = &puStack_50;
  auStack_a0 = auVar20;
  if ((bRam0000000003eb5a9b & 1) == 0) {
    func_0x00f78a20(0x3d2ff58);
    bRam0000000003eb5a9b = 1;
  }
  uVar5 = auStack_a0._0_8_;
  lVar6 = *(long *)(auVar21._0_8_ + 0x10);
  if (lVar6 == 0) {
    puVar19 = &Core_Settings_QualitySettings__TryGetSettingAndParameterIndex;
    auVar20 = func_0x00f78af4();
    puVar2 = &stack0xffffffffffffff50;
    do {
      *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
      *(undefined1 (*) [16])(puVar2 + -0x38) = auVar22;
      *(undefined8 **)(puVar2 + -0x28) = puVar14;
      *(undefined1 (*) [16])(puVar2 + -0x20) = auVar21;
      *(undefined1 ****)(puVar2 + -0x10) = pppuVar18;
      *(undefined **)(puVar2 + -8) = puVar19;
      plVar7 = param_3;
      puVar14 = param_4;
      puVar11 = param_5;
      if ((bRam0000000003eb5a9e & 1) == 0) {
        func_0x00f78a20(0x3d2ff68);
        bRam0000000003eb5a9e = 1;
      }
      *(undefined8 *)(puVar2 + -0x48) = 0;
      lVar6 = *(long *)(auVar20._0_8_ + 0x10);
      if (lVar6 != 0) {
        plVar7 = (long *)(puVar2 + -0x48);
        puVar14 = puRam0000000003d2ff68;
        iVar3 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar6,auVar20._8_8_);
        if (iVar3 == 0) {
          *param_4 = 0;
          *param_5 = 0;
          return 0;
        }
        if (*(long *)(puVar2 + -0x48) != 0) {
          plVar7 = (long *)(*(long *)(puVar2 + -0x48) + 0x20);
          *(undefined8 *)(puVar2 + -0x90) = 0x3eb5000;
          *(undefined1 (*) [16])(puVar2 + -0x88) = auVar20;
          *(long **)(puVar2 + -0x78) = param_3;
          *(undefined8 **)(puVar2 + -0x70) = param_4;
          *(undefined4 **)(puVar2 + -0x68) = param_5;
          *(undefined1 **)(puVar2 + -0x60) = puVar2 + -0x10;
          *(undefined **)(puVar2 + -0x58) = &UNK_0168eff0;
          if ((bRam0000000003eb5aa5 & 1) == 0) {
            func_0x00f78a20(0x3d3d6e0);
            func_0x00f78a20(0x3d3d6e8);
            bRam0000000003eb5aa5 = 1;
          }
          lVar6 = *plVar7;
          if (lVar6 != 0) {
            uVar4 = *(uint *)(lVar6 + 0x18);
            if ((int)uVar4 < 1) {
              return 0xffffffff;
            }
            uVar5 = 0;
            lVar16 = 0x20;
            do {
              if (*(uint *)(lVar6 + 0x18) <= uVar5) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              uVar15 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(*(long *)(lVar6 + 0x10) + lVar16),param_3,0);
              if ((uVar15 & 1) != 0) {
                return uVar5;
              }
              if ((ulong)uVar4 - 1 == uVar5) {
                return 0xffffffff;
              }
              lVar6 = *plVar7;
              lVar16 = lVar16 + 0x28;
              uVar5 = uVar5 + 1;
            } while (lVar6 != 0);
          }
          func_0x00f78af4();
          return 0xffffffff;
        }
      }
      auVar22 = func_0x00f78af4();
      auVar21._8_8_ = puVar11;
      auVar21._0_8_ = plVar7;
      *(undefined8 *)(puVar2 + -0x90) = 0x3eb5000;
      *(undefined1 (*) [16])(puVar2 + -0x88) = auVar20;
      *(long **)(puVar2 + -0x78) = param_3;
      *(undefined8 **)(puVar2 + -0x70) = param_4;
      *(undefined4 **)(puVar2 + -0x68) = param_5;
      *(undefined1 **)(puVar2 + -0x60) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x58) = &Core_Settings_QualitySettings__TryGetSettingAndParameter;
      pppuVar18 = (undefined1 ***)(puVar2 + -0x60);
      unaff_x24 = 0x3eb5000;
      if ((bRam0000000003eb5a9d & 1) == 0) {
        func_0x00f78a20(0x3d3d6e8);
        bRam0000000003eb5a9d = 1;
      }
      *(undefined8 *)(puVar2 + -0x98) = 0;
      *(undefined4 *)(puVar2 + -0x9c) = 0;
      param_4 = (undefined8 *)(puVar2 + -0x98);
      param_5 = (undefined4 *)(puVar2 + -0x9c);
      puVar19 = &UNK_0168f0a8;
      puVar2 = puVar2 + -0xa0;
      param_3 = plVar7;
      auVar20 = auVar22;
    } while( true );
  }
  if (lVar6 != 0) {
    uVar4 = (*(code *)**(undefined8 **)
                        (*(long *)(*(long *)(uRam0000000003d2ff58 + 0x18) + 0xc0) + 0x40))();
    return (ulong)(~uVar4 >> 0x1f);
  }
  uVar15 = uRam0000000003d2ff58;
  auVar22 = func_0x00f78af4(0,auVar21._8_8_);
  uVar8 = auVar22._8_8_;
  lVar6 = auVar22._0_8_;
  auStack_a0._8_8_ = &System_Collections_Generic_Dictionary_object__object___ContainsValue;
  if (uVar8 != 0) {
    auStack_a0._0_8_ = &ppuStack_90;
    plVar7 = (long *)(*(code *)**(undefined8 **)(*(long *)(*(long *)(uVar15 + 0x18) + 0xc0) + 0x68))
                               ();
    iVar3 = *(int *)(lVar6 + 0x20);
    if (0 < iVar3) {
      lVar16 = 0;
      uVar17 = 0;
      do {
        lVar12 = *(long *)(lVar6 + 0x18);
        uVar5 = uVar8;
        if (lVar12 == 0) goto code_r0x01ed7b80;
        if (*(uint *)(lVar12 + 0x18) <= uVar17) goto code_r0x01ed7b84;
        if (-1 < *(int *)(lVar12 + lVar16 + 0x20)) {
          if (plVar7 == (long *)0x0) goto code_r0x01ed7b80;
          param_4 = *(undefined8 **)(*plVar7 + 0x1c0);
          uVar15 = uVar8;
          uVar5 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(lVar12 + lVar16 + 0x30));
          if ((uVar5 & 1) != 0) {
            return 1;
          }
          iVar3 = *(int *)(lVar6 + 0x20);
        }
        uVar17 = uVar17 + 1;
        lVar16 = lVar16 + 0x18;
      } while ((long)uVar17 < (long)iVar3);
    }
    return 0;
  }
  uVar8 = (ulong)*(uint *)(lVar6 + 0x20);
  if ((int)*(uint *)(lVar6 + 0x20) < 1) {
    return 0;
  }
  lVar6 = *(long *)(lVar6 + 0x18);
  auStack_a0._0_8_ = &ppuStack_90;
  if (lVar6 == 0) {
code_r0x01ed7b80:
    func_0x00f78af4();
  }
  else {
    uVar17 = (ulong)*(uint *)(lVar6 + 0x18);
    plVar7 = (long *)(lVar6 + 0x30);
    while (auStack_a0._0_8_ = &ppuStack_90, uVar17 != 0) {
      if ((-1 < (int)plVar7[-2]) && (*plVar7 == 0)) {
        return 1;
      }
      uVar17 = uVar17 - 1;
      plVar7 = plVar7 + 3;
      uVar8 = uVar8 - 1;
      if (uVar8 == 0) {
        return 0;
      }
    }
  }
code_r0x01ed7b84:
  uVar13 = func_0x00f78b24();
  auVar22 = func_0x00f78ac0(uVar13,0);
  uVar8 = auVar22._8_8_;
  lVar6 = auVar22._0_8_;
  puStack_d8 = &System_Collections_Generic_Dictionary_object__object___CopyTo;
  puStack_e0 = (undefined8 *)auStack_a0;
  if (uVar8 != 0) {
    uVar4 = (uint)uVar15;
    if (((int)uVar4 < 0) || (*(int *)(uVar8 + 0x18) < (int)uVar4)) {
code_r0x01ed7c9c:
      uStack_130 = CONCAT44(uStack_130._4_4_,uVar4);
      uVar13 = func_0x00f78a24(0x3d22910);
      uVar13 = func_0x00f78ae0(uVar13,&uStack_130);
      func_0x00f78a24(0x3d1fcf8);
      uVar8 = func_0x00f78aec();
      uVar9 = func_0x00f78a24(0x3d79a60);
      uVar10 = func_0x00f78a24(0x3d6de28);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a580(uVar8,uVar9,uVar13,uVar10,0);
      uVar13 = func_0x00f78a24(0x3d2f688);
      func_0x00f78ac0(uVar8,uVar13);
    }
    else if (lVar6 != 0) {
      uVar5 = (*(code *)**(undefined8 **)(*(long *)(param_4[3] + 0xc0) + 0x90))(lVar6);
      if ((int)(*(int *)(uVar8 + 0x18) - uVar4) < (int)uVar5) {
        func_0x00f78a24(0x3d1fce8);
        uVar13 = func_0x00f78aec();
        uVar9 = func_0x00f78a24(0x3d6bc10);
        /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar13,uVar9,0);
        goto code_r0x01ed7d80;
      }
      uVar1 = *(uint *)(lVar6 + 0x20);
      if ((int)uVar1 < 1) {
        return uVar5;
      }
      lVar6 = *(long *)(lVar6 + 0x18);
      if (lVar6 != 0) {
        uVar17 = 0;
        puVar14 = (undefined8 *)(lVar6 + 0x30);
        while (uVar4 = (uint)uVar15, uVar17 < *(uint *)(lVar6 + 0x18)) {
          if (-1 < *(int *)(puVar14 + -2)) {
            uStack_130 = 0;
            uStack_128 = 0;
            uVar5 = /*System.Collections.Generic.KeyValuePair<Type, XmlRootAttribute>$$.ctor*/ func_0x023185d4(&uStack_130,puVar14[-1],*puVar14,
                                    *(undefined8 *)(*(long *)(param_4[3] + 0xc0) + 0xa0));
            if (*(uint *)(uVar8 + 0x18) <= uVar4) break;
            lVar16 = uVar8 + (long)(int)uVar4 * 0x10;
            uVar15 = (ulong)(uVar4 + 1);
            *(undefined8 *)(lVar16 + 0x28) = uStack_128;
            *(undefined8 *)(lVar16 + 0x20) = uStack_130;
          }
          uVar17 = uVar17 + 1;
          puVar14 = puVar14 + 3;
          if (uVar1 == uVar17) {
            return uVar5;
          }
        }
        uVar13 = func_0x00f78b24();
        func_0x00f78ac0(uVar13,0);
        goto code_r0x01ed7c9c;
      }
    }
    func_0x00f78af4();
    uVar5 = uVar8;
  }
  func_0x00f78a24(0x3d1fcf0);
  uVar13 = func_0x00f78aec();
  uVar9 = func_0x00f78a24(0x3d77d18);
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar13,uVar9,0);
  uVar8 = uVar5;
code_r0x01ed7d80:
  uVar9 = func_0x00f78a24(0x3d2f688);
  auVar22 = func_0x00f78ac0(uVar13,uVar9);
  puStack_138 = &
                System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator
  ;
  uStack_160 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_150 = uVar8;
  uStack_148 = uVar13;
  ppuStack_140 = &puStack_e0;
  uVar5 = /*System.Collections.Generic.Dictionary.Enumerator<object, object>$$.ctor*/ func_0x01fd5da8(&uStack_180,auVar22._0_8_,2,
                          *(undefined8 *)(*(long *)(*(long *)(auVar22._8_8_ + 0x18) + 0xc0) + 0xb0))
  ;
  extraout_x8[1] = uStack_178;
  *extraout_x8 = uStack_180;
  extraout_x8[3] = uStack_168;
  extraout_x8[2] = uStack_170;
  extraout_x8[4] = uStack_160;
  return uVar5;
}



// ============================================================
// RVA: 0x168ee04 | Core.Settings.QualitySettings.CreateSetValueList
// ============================================================

/* WARNING: Possible PIC construction at 0x0168efec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0168f0a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0168eff0) */
/* WARNING: Removing unreachable block (ram,0x0168f008) */
/* WARNING: Removing unreachable block (ram,0x0168eff4) */
/* WARNING: Removing unreachable block (ram,0x0168f0a8) */
/* WARNING: Removing unreachable block (ram,0x0168f0fc) */
/* WARNING: Removing unreachable block (ram,0x0168f0b0) */
/* WARNING: Removing unreachable block (ram,0x0168f0bc) */
/* WARNING: Removing unreachable block (ram,0x0168f12c) */
/* WARNING: Removing unreachable block (ram,0x0168f0c4) */
/* WARNING: Removing unreachable block (ram,0x0168f0d4) */
/* WARNING: Removing unreachable block (ram,0x0168f0dc) */
/* WARNING: Removing unreachable block (ram,0x0168f10c) */

ulong Core_Settings_QualitySettings__CreateSetValueList
                (undefined1 *param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                undefined4 *param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar5;
  uint uVar4;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined8 *extraout_x8;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  undefined8 unaff_x22;
  long lVar17;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 **ppuVar18;
  undefined *puVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  undefined1 ***pppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  long lStack_38;
  
  auVar22._8_8_ = unaff_x22;
  auVar22._0_8_ = unaff_x23;
  if ((bRam0000000003eb5a9a & 1) == 0) {
    func_0x00f78a20(0x3d2ff68);
    func_0x00f78a20(0x3d3d6f8);
    func_0x00f78a20(0x3d3d700);
    func_0x00f78a20(0x3d1e280);
    bRam0000000003eb5a9a = 1;
  }
  lStack_38 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    param_3 = &lStack_38;
    param_4 = puRam0000000003d2ff68;
    iVar3 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(param_1 + 0x10),param_2);
    if (iVar3 == 0) {
      uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<QualitySettings.Value>_TypeInfo*/ uRam0000000003d1e280);
      /*System.Collections.Generic.List<QualitySettings.Value>$$.ctor*/ func_0x02572ecc(uVar5,uRam0000000003d3d6f8);
      return uVar5;
    }
    if (lStack_38 != 0) {
      uVar14 = *(undefined8 *)(lStack_38 + 0x18);
      uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<QualitySettings.Value>_TypeInfo*/ uRam0000000003d1e280);
      /*System.Collections.Generic.List<QualitySettings.Value>$$.ctor*/ func_0x025730b0(uVar5,uVar14,uRam0000000003d3d700);
      return uVar5;
    }
  }
  auVar20 = func_0x00f78af4();
  puStack_48 = &Core_Settings_QualitySettings__DoesSettingExist;
  ppuVar18 = &puStack_50;
  puVar15 = (undefined8 *)0x3eb5000;
  puStack_60 = param_1;
  puStack_58 = (undefined *)param_2;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5a9b & 1) == 0) {
    func_0x00f78a20(0x3d2ff58);
    bRam0000000003eb5a9b = 1;
  }
  puVar2 = puStack_60;
  lVar6 = *(long *)(auVar20._0_8_ + 0x10);
  if (lVar6 == 0) {
    puVar19 = &Core_Settings_QualitySettings__TryGetSettingAndParameterIndex;
    auVar21 = func_0x00f78af4();
    puVar2 = &stack0xffffffffffffff90;
    do {
      *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
      *(undefined1 (*) [16])(puVar2 + -0x38) = auVar22;
      *(undefined8 **)(puVar2 + -0x28) = puVar15;
      *(undefined1 (*) [16])(puVar2 + -0x20) = auVar20;
      *(undefined1 ***)(puVar2 + -0x10) = ppuVar18;
      *(undefined **)(puVar2 + -8) = puVar19;
      plVar7 = param_3;
      puVar15 = param_4;
      puVar12 = param_5;
      if ((bRam0000000003eb5a9e & 1) == 0) {
        func_0x00f78a20(0x3d2ff68);
        bRam0000000003eb5a9e = 1;
      }
      *(undefined8 *)(puVar2 + -0x48) = 0;
      lVar6 = *(long *)(auVar21._0_8_ + 0x10);
      if (lVar6 != 0) {
        plVar7 = (long *)(puVar2 + -0x48);
        puVar15 = puRam0000000003d2ff68;
        iVar3 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar6,auVar21._8_8_);
        if (iVar3 == 0) {
          *param_4 = 0;
          *param_5 = 0;
          return 0;
        }
        if (*(long *)(puVar2 + -0x48) != 0) {
          plVar7 = (long *)(*(long *)(puVar2 + -0x48) + 0x20);
          *(undefined8 *)(puVar2 + -0x90) = 0x3eb5000;
          *(undefined1 (*) [16])(puVar2 + -0x88) = auVar21;
          *(long **)(puVar2 + -0x78) = param_3;
          *(undefined8 **)(puVar2 + -0x70) = param_4;
          *(undefined4 **)(puVar2 + -0x68) = param_5;
          *(undefined1 **)(puVar2 + -0x60) = puVar2 + -0x10;
          *(undefined **)(puVar2 + -0x58) = &UNK_0168eff0;
          if ((bRam0000000003eb5aa5 & 1) == 0) {
            func_0x00f78a20(0x3d3d6e0);
            func_0x00f78a20(0x3d3d6e8);
            bRam0000000003eb5aa5 = 1;
          }
          lVar6 = *plVar7;
          if (lVar6 != 0) {
            uVar4 = *(uint *)(lVar6 + 0x18);
            if ((int)uVar4 < 1) {
              return 0xffffffff;
            }
            uVar5 = 0;
            lVar17 = 0x20;
            do {
              if (*(uint *)(lVar6 + 0x18) <= uVar5) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              uVar8 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(*(long *)(lVar6 + 0x10) + lVar17),param_3,0);
              if ((uVar8 & 1) != 0) {
                return uVar5;
              }
              if ((ulong)uVar4 - 1 == uVar5) {
                return 0xffffffff;
              }
              lVar6 = *plVar7;
              lVar17 = lVar17 + 0x28;
              uVar5 = uVar5 + 1;
            } while (lVar6 != 0);
          }
          func_0x00f78af4();
          return 0xffffffff;
        }
      }
      auVar22 = func_0x00f78af4();
      auVar20._8_8_ = puVar12;
      auVar20._0_8_ = plVar7;
      *(undefined8 *)(puVar2 + -0x90) = 0x3eb5000;
      *(undefined1 (*) [16])(puVar2 + -0x88) = auVar21;
      *(long **)(puVar2 + -0x78) = param_3;
      *(undefined8 **)(puVar2 + -0x70) = param_4;
      *(undefined4 **)(puVar2 + -0x68) = param_5;
      *(undefined1 **)(puVar2 + -0x60) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x58) = &Core_Settings_QualitySettings__TryGetSettingAndParameter;
      ppuVar18 = (undefined1 **)(puVar2 + -0x60);
      unaff_x24 = 0x3eb5000;
      if ((bRam0000000003eb5a9d & 1) == 0) {
        func_0x00f78a20(0x3d3d6e8);
        bRam0000000003eb5a9d = 1;
      }
      *(undefined8 *)(puVar2 + -0x98) = 0;
      *(undefined4 *)(puVar2 + -0x9c) = 0;
      param_4 = (undefined8 *)(puVar2 + -0x98);
      param_5 = (undefined4 *)(puVar2 + -0x9c);
      puVar19 = &UNK_0168f0a8;
      puVar2 = puVar2 + -0xa0;
      param_3 = plVar7;
      auVar21 = auVar22;
    } while( true );
  }
  if (lVar6 != 0) {
    uVar4 = (*(code *)**(undefined8 **)
                        (*(long *)(*(long *)(puRam0000000003d2ff58 + 0x18) + 0xc0) + 0x40))();
    return (ulong)(~uVar4 >> 0x1f);
  }
  puVar16 = puRam0000000003d2ff58;
  auVar22 = func_0x00f78af4(0,auVar20._8_8_);
  puVar9 = auVar22._8_8_;
  lVar6 = auVar22._0_8_;
  puStack_58 = &System_Collections_Generic_Dictionary_object__object___ContainsValue;
  if (puVar9 != (undefined1 *)0x0) {
    puStack_60 = (undefined1 *)&puStack_50;
    plVar7 = (long *)(*(code *)**(undefined8 **)(*(long *)(*(long *)(puVar16 + 0x18) + 0xc0) + 0x68)
                     )();
    iVar3 = *(int *)(lVar6 + 0x20);
    if (0 < iVar3) {
      lVar17 = 0;
      uVar5 = 0;
      do {
        lVar13 = *(long *)(lVar6 + 0x18);
        puVar2 = puVar9;
        if (lVar13 == 0) goto code_r0x01ed7b80;
        if (*(uint *)(lVar13 + 0x18) <= uVar5) goto code_r0x01ed7b84;
        if (-1 < *(int *)(lVar13 + lVar17 + 0x20)) {
          if (plVar7 == (long *)0x0) goto code_r0x01ed7b80;
          param_4 = *(undefined8 **)(*plVar7 + 0x1c0);
          puVar16 = puVar9;
          uVar8 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(lVar13 + lVar17 + 0x30));
          if ((uVar8 & 1) != 0) {
            return 1;
          }
          iVar3 = *(int *)(lVar6 + 0x20);
        }
        uVar5 = uVar5 + 1;
        lVar17 = lVar17 + 0x18;
      } while ((long)uVar5 < (long)iVar3);
    }
    return 0;
  }
  uVar5 = (ulong)*(uint *)(lVar6 + 0x20);
  if ((int)*(uint *)(lVar6 + 0x20) < 1) {
    return 0;
  }
  lVar6 = *(long *)(lVar6 + 0x18);
  puStack_60 = (undefined1 *)&puStack_50;
  if (lVar6 == 0) {
code_r0x01ed7b80:
    func_0x00f78af4();
  }
  else {
    uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
    plVar7 = (long *)(lVar6 + 0x30);
    while (puStack_60 = (undefined1 *)&puStack_50, uVar8 != 0) {
      if ((-1 < (int)plVar7[-2]) && (*plVar7 == 0)) {
        return 1;
      }
      uVar8 = uVar8 - 1;
      plVar7 = plVar7 + 3;
      uVar5 = uVar5 - 1;
      if (uVar5 == 0) {
        return 0;
      }
    }
  }
code_r0x01ed7b84:
  uVar14 = func_0x00f78b24();
  auVar22 = func_0x00f78ac0(uVar14,0);
  puVar9 = auVar22._8_8_;
  lVar6 = auVar22._0_8_;
  puStack_98 = &System_Collections_Generic_Dictionary_object__object___CopyTo;
  ppuStack_a0 = &puStack_60;
  if (puVar9 != (undefined1 *)0x0) {
    uVar4 = (uint)puVar16;
    if (((int)uVar4 < 0) || (*(int *)(puVar9 + 0x18) < (int)uVar4)) {
code_r0x01ed7c9c:
      uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar4);
      uVar14 = func_0x00f78a24(0x3d22910);
      uVar14 = func_0x00f78ae0(uVar14,&uStack_f0);
      func_0x00f78a24(0x3d1fcf8);
      puVar9 = (undefined1 *)func_0x00f78aec();
      uVar10 = func_0x00f78a24(0x3d79a60);
      uVar11 = func_0x00f78a24(0x3d6de28);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a580(puVar9,uVar10,uVar14,uVar11,0);
      uVar14 = func_0x00f78a24(0x3d2f688);
      func_0x00f78ac0(puVar9,uVar14);
    }
    else if (lVar6 != 0) {
      uVar5 = (*(code *)**(undefined8 **)(*(long *)(param_4[3] + 0xc0) + 0x90))(lVar6);
      if ((int)(*(int *)(puVar9 + 0x18) - uVar4) < (int)uVar5) {
        func_0x00f78a24(0x3d1fce8);
        uVar14 = func_0x00f78aec();
        uVar10 = func_0x00f78a24(0x3d6bc10);
        /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar14,uVar10,0);
        goto code_r0x01ed7d80;
      }
      uVar1 = *(uint *)(lVar6 + 0x20);
      if ((int)uVar1 < 1) {
        return uVar5;
      }
      lVar6 = *(long *)(lVar6 + 0x18);
      if (lVar6 != 0) {
        uVar8 = 0;
        puVar15 = (undefined8 *)(lVar6 + 0x30);
        while (uVar4 = (uint)puVar16, uVar8 < *(uint *)(lVar6 + 0x18)) {
          if (-1 < *(int *)(puVar15 + -2)) {
            uStack_f0 = 0;
            uStack_e8 = 0;
            uVar5 = /*System.Collections.Generic.KeyValuePair<Type, XmlRootAttribute>$$.ctor*/ func_0x023185d4(&uStack_f0,puVar15[-1],*puVar15,
                                    *(undefined8 *)(*(long *)(param_4[3] + 0xc0) + 0xa0));
            if (*(uint *)(puVar9 + 0x18) <= uVar4) break;
            puVar16 = (undefined1 *)(ulong)(uVar4 + 1);
            *(undefined8 *)(puVar9 + (long)(int)uVar4 * 0x10 + 0x28) = uStack_e8;
            *(undefined8 *)(puVar9 + (long)(int)uVar4 * 0x10 + 0x20) = uStack_f0;
          }
          uVar8 = uVar8 + 1;
          puVar15 = puVar15 + 3;
          if (uVar1 == uVar8) {
            return uVar5;
          }
        }
        uVar14 = func_0x00f78b24();
        func_0x00f78ac0(uVar14,0);
        goto code_r0x01ed7c9c;
      }
    }
    func_0x00f78af4();
    puVar2 = puVar9;
  }
  func_0x00f78a24(0x3d1fcf0);
  uVar14 = func_0x00f78aec();
  uVar10 = func_0x00f78a24(0x3d77d18);
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar14,uVar10,0);
  puVar9 = puVar2;
code_r0x01ed7d80:
  uVar10 = func_0x00f78a24(0x3d2f688);
  auVar22 = func_0x00f78ac0(uVar14,uVar10);
  puStack_f8 = &
               System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator
  ;
  uStack_120 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  puStack_110 = puVar9;
  uStack_108 = uVar14;
  pppuStack_100 = &ppuStack_a0;
  uVar5 = /*System.Collections.Generic.Dictionary.Enumerator<object, object>$$.ctor*/ func_0x01fd5da8(&uStack_140,auVar22._0_8_,2,
                          *(undefined8 *)(*(long *)(*(long *)(auVar22._8_8_ + 0x18) + 0xc0) + 0xb0))
  ;
  extraout_x8[1] = uStack_138;
  *extraout_x8 = uStack_140;
  extraout_x8[3] = uStack_128;
  extraout_x8[2] = uStack_130;
  extraout_x8[4] = uStack_120;
  return uVar5;
}



// ============================================================
// RVA: 0x168ef04 | Core.Settings.QualitySettings.DoesSettingExist
// ============================================================

/* WARNING: Possible PIC construction at 0x0168efec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0168f0a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0168eff0) */
/* WARNING: Removing unreachable block (ram,0x0168f008) */
/* WARNING: Removing unreachable block (ram,0x0168eff4) */
/* WARNING: Removing unreachable block (ram,0x0168f0a8) */
/* WARNING: Removing unreachable block (ram,0x0168f0fc) */
/* WARNING: Removing unreachable block (ram,0x0168f0b0) */
/* WARNING: Removing unreachable block (ram,0x0168f0bc) */
/* WARNING: Removing unreachable block (ram,0x0168f12c) */
/* WARNING: Removing unreachable block (ram,0x0168f0c4) */
/* WARNING: Removing unreachable block (ram,0x0168f0d4) */
/* WARNING: Removing unreachable block (ram,0x0168f0dc) */
/* WARNING: Removing unreachable block (ram,0x0168f10c) */

ulong Core_Settings_QualitySettings__DoesSettingExist
                (undefined1 *param_1,undefined4 *param_2,undefined1 *param_3,undefined8 *param_4,
                undefined4 *param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *extraout_x8;
  long lVar11;
  ulong unaff_x20;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 unaff_x22;
  long lVar14;
  long lVar15;
  undefined8 unaff_x23;
  ulong uVar16;
  undefined8 unaff_x24;
  undefined1 *puVar17;
  undefined *puVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  auVar20._8_8_ = unaff_x22;
  auVar20._0_8_ = unaff_x23;
  puVar12 = (undefined8 *)0x3eb5000;
  if ((bRam0000000003eb5a9b & 1) == 0) {
    func_0x00f78a20(0x3d2ff58);
    bRam0000000003eb5a9b = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar18 = &Core_Settings_QualitySettings__TryGetSettingAndParameterIndex;
    auVar19 = func_0x00f78af4();
    puVar2 = &stack0xffffffffffffffd0;
    do {
      puVar17 = (undefined1 *)((long)register0x00000008 + -0x10);
      register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x50);
      *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
      *(undefined1 (*) [16])(puVar2 + -0x38) = auVar20;
      *(undefined8 **)(puVar2 + -0x28) = puVar12;
      *(undefined1 **)(puVar2 + -0x20) = param_1;
      *(undefined4 **)(puVar2 + -0x18) = param_2;
      *(undefined1 **)(puVar2 + -0x10) = puVar17;
      *(undefined **)(puVar2 + -8) = puVar18;
      param_1 = param_3;
      puVar12 = param_4;
      param_2 = param_5;
      if ((bRam0000000003eb5a9e & 1) == 0) {
        func_0x00f78a20(0x3d2ff68);
        bRam0000000003eb5a9e = 1;
      }
      *(undefined8 *)(puVar2 + -0x48) = 0;
      lVar15 = *(long *)(auVar19._0_8_ + 0x10);
      if (lVar15 != 0) {
        param_1 = puVar2 + -0x48;
        puVar12 = puRam0000000003d2ff68;
        iVar3 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar15,auVar19._8_8_);
        if (iVar3 == 0) {
          *param_4 = 0;
          *param_5 = 0;
          return 0;
        }
        if (*(long *)(puVar2 + -0x48) != 0) {
          plVar5 = (long *)(*(long *)(puVar2 + -0x48) + 0x20);
          *(undefined8 *)(puVar2 + -0x90) = 0x3eb5000;
          *(undefined1 (*) [16])(puVar2 + -0x88) = auVar19;
          *(undefined1 **)(puVar2 + -0x78) = param_3;
          *(undefined8 **)(puVar2 + -0x70) = param_4;
          *(undefined4 **)(puVar2 + -0x68) = param_5;
          *(undefined1 **)(puVar2 + -0x60) = puVar2 + -0x10;
          *(undefined **)(puVar2 + -0x58) = &UNK_0168eff0;
          if ((bRam0000000003eb5aa5 & 1) == 0) {
            func_0x00f78a20(0x3d3d6e0);
            func_0x00f78a20(0x3d3d6e8);
            bRam0000000003eb5aa5 = 1;
          }
          lVar15 = *plVar5;
          if (lVar15 != 0) {
            uVar4 = *(uint *)(lVar15 + 0x18);
            if ((int)uVar4 < 1) {
              return 0xffffffff;
            }
            uVar13 = 0;
            lVar14 = 0x20;
            do {
              if (*(uint *)(lVar15 + 0x18) <= uVar13) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              uVar8 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(*(long *)(lVar15 + 0x10) + lVar14),param_3,0);
              if ((uVar8 & 1) != 0) {
                return uVar13;
              }
              if ((ulong)uVar4 - 1 == uVar13) {
                return 0xffffffff;
              }
              lVar15 = *plVar5;
              lVar14 = lVar14 + 0x28;
              uVar13 = uVar13 + 1;
            } while (lVar15 != 0);
          }
          func_0x00f78af4();
          return 0xffffffff;
        }
      }
      auVar20 = func_0x00f78af4();
      *(undefined8 *)(puVar2 + -0x90) = 0x3eb5000;
      *(undefined1 (*) [16])(puVar2 + -0x88) = auVar19;
      *(undefined1 **)(puVar2 + -0x78) = param_3;
      *(undefined8 **)(puVar2 + -0x70) = param_4;
      *(undefined4 **)(puVar2 + -0x68) = param_5;
      *(undefined1 **)(puVar2 + -0x60) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x58) = &Core_Settings_QualitySettings__TryGetSettingAndParameter;
      unaff_x24 = 0x3eb5000;
      if ((bRam0000000003eb5a9d & 1) == 0) {
        func_0x00f78a20(0x3d3d6e8);
        bRam0000000003eb5a9d = 1;
      }
      *(undefined8 *)(puVar2 + -0x98) = 0;
      *(undefined4 *)(puVar2 + -0x9c) = 0;
      param_4 = (undefined8 *)(puVar2 + -0x98);
      param_5 = (undefined4 *)(puVar2 + -0x9c);
      puVar18 = &UNK_0168f0a8;
      puVar2 = puVar2 + -0xa0;
      param_3 = param_1;
      auVar19 = auVar20;
    } while( true );
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar4 = (*(code *)**(undefined8 **)
                        (*(long *)(*(long *)(uRam0000000003d2ff58 + 0x18) + 0xc0) + 0x40))();
    return (ulong)(~uVar4 >> 0x1f);
  }
  uVar13 = uRam0000000003d2ff58;
  auVar20 = func_0x00f78af4(0,param_2);
  uVar8 = auVar20._8_8_;
  lVar15 = auVar20._0_8_;
  if (uVar8 != 0) {
    plVar5 = (long *)(*(code *)**(undefined8 **)(*(long *)(*(long *)(uVar13 + 0x18) + 0xc0) + 0x68))
                               ();
    iVar3 = *(int *)(lVar15 + 0x20);
    if (0 < iVar3) {
      lVar14 = 0;
      uVar16 = 0;
      do {
        lVar11 = *(long *)(lVar15 + 0x18);
        unaff_x20 = uVar8;
        if (lVar11 == 0) goto code_r0x01ed7b80;
        if (*(uint *)(lVar11 + 0x18) <= uVar16) goto code_r0x01ed7b84;
        if (-1 < *(int *)(lVar11 + lVar14 + 0x20)) {
          if (plVar5 == (long *)0x0) goto code_r0x01ed7b80;
          param_4 = *(undefined8 **)(*plVar5 + 0x1c0);
          uVar13 = uVar8;
          uVar6 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(lVar11 + lVar14 + 0x30));
          if ((uVar6 & 1) != 0) {
            return 1;
          }
          iVar3 = *(int *)(lVar15 + 0x20);
        }
        uVar16 = uVar16 + 1;
        lVar14 = lVar14 + 0x18;
      } while ((long)uVar16 < (long)iVar3);
    }
    return 0;
  }
  uVar8 = (ulong)*(uint *)(lVar15 + 0x20);
  if ((int)*(uint *)(lVar15 + 0x20) < 1) {
    return 0;
  }
  lVar15 = *(long *)(lVar15 + 0x18);
  if (lVar15 == 0) {
code_r0x01ed7b80:
    func_0x00f78af4();
  }
  else {
    uVar16 = (ulong)*(uint *)(lVar15 + 0x18);
    plVar5 = (long *)(lVar15 + 0x30);
    while (uVar16 != 0) {
      if ((-1 < (int)plVar5[-2]) && (*plVar5 == 0)) {
        return 1;
      }
      uVar16 = uVar16 - 1;
      plVar5 = plVar5 + 3;
      uVar8 = uVar8 - 1;
      if (uVar8 == 0) {
        return 0;
      }
    }
  }
code_r0x01ed7b84:
  uVar7 = func_0x00f78b24();
  auVar20 = func_0x00f78ac0(uVar7,0);
  uVar8 = auVar20._8_8_;
  lVar15 = auVar20._0_8_;
  puStack_58 = &System_Collections_Generic_Dictionary_object__object___CopyTo;
  puStack_60 = &stack0xffffffffffffffe0;
  if (uVar8 != 0) {
    uVar4 = (uint)uVar13;
    if (((int)uVar4 < 0) || (*(int *)(uVar8 + 0x18) < (int)uVar4)) {
code_r0x01ed7c9c:
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar4);
      uVar7 = func_0x00f78a24(0x3d22910);
      uVar7 = func_0x00f78ae0(uVar7,&uStack_b0);
      func_0x00f78a24(0x3d1fcf8);
      uVar8 = func_0x00f78aec();
      uVar9 = func_0x00f78a24(0x3d79a60);
      uVar10 = func_0x00f78a24(0x3d6de28);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a580(uVar8,uVar9,uVar7,uVar10,0);
      uVar7 = func_0x00f78a24(0x3d2f688);
      func_0x00f78ac0(uVar8,uVar7);
    }
    else if (lVar15 != 0) {
      uVar16 = (*(code *)**(undefined8 **)(*(long *)(param_4[3] + 0xc0) + 0x90))(lVar15);
      if ((int)(*(int *)(uVar8 + 0x18) - uVar4) < (int)uVar16) {
        func_0x00f78a24(0x3d1fce8);
        uVar7 = func_0x00f78aec();
        uVar9 = func_0x00f78a24(0x3d6bc10);
        /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar7,uVar9,0);
        goto code_r0x01ed7d80;
      }
      uVar1 = *(uint *)(lVar15 + 0x20);
      if ((int)uVar1 < 1) {
        return uVar16;
      }
      lVar15 = *(long *)(lVar15 + 0x18);
      if (lVar15 != 0) {
        uVar6 = 0;
        puVar12 = (undefined8 *)(lVar15 + 0x30);
        while (uVar4 = (uint)uVar13, uVar6 < *(uint *)(lVar15 + 0x18)) {
          if (-1 < *(int *)(puVar12 + -2)) {
            uStack_b0 = 0;
            uStack_a8 = 0;
            uVar16 = /*System.Collections.Generic.KeyValuePair<Type, XmlRootAttribute>$$.ctor*/ func_0x023185d4(&uStack_b0,puVar12[-1],*puVar12,
                                     *(undefined8 *)(*(long *)(param_4[3] + 0xc0) + 0xa0));
            if (*(uint *)(uVar8 + 0x18) <= uVar4) break;
            lVar14 = uVar8 + (long)(int)uVar4 * 0x10;
            uVar13 = (ulong)(uVar4 + 1);
            *(undefined8 *)(lVar14 + 0x28) = uStack_a8;
            *(undefined8 *)(lVar14 + 0x20) = uStack_b0;
          }
          uVar6 = uVar6 + 1;
          puVar12 = puVar12 + 3;
          if (uVar1 == uVar6) {
            return uVar16;
          }
        }
        uVar7 = func_0x00f78b24();
        func_0x00f78ac0(uVar7,0);
        goto code_r0x01ed7c9c;
      }
    }
    func_0x00f78af4();
    unaff_x20 = uVar8;
  }
  func_0x00f78a24(0x3d1fcf0);
  uVar7 = func_0x00f78aec();
  uVar9 = func_0x00f78a24(0x3d77d18);
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar7,uVar9,0);
  uVar8 = unaff_x20;
code_r0x01ed7d80:
  uVar9 = func_0x00f78a24(0x3d2f688);
  auVar20 = func_0x00f78ac0(uVar7,uVar9);
  puStack_b8 = &
               System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator
  ;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d0 = uVar8;
  uStack_c8 = uVar7;
  ppuStack_c0 = &puStack_60;
  uVar13 = /*System.Collections.Generic.Dictionary.Enumerator<object, object>$$.ctor*/ func_0x01fd5da8(&uStack_100,auVar20._0_8_,2,
                           *(undefined8 *)(*(long *)(*(long *)(auVar20._8_8_ + 0x18) + 0xc0) + 0xb0)
                          );
  extraout_x8[1] = uStack_f8;
  *extraout_x8 = uStack_100;
  extraout_x8[3] = uStack_e8;
  extraout_x8[2] = uStack_f0;
  extraout_x8[4] = uStack_e0;
  return uVar13;
}



// ============================================================
// RVA: 0x168ef68 | Core.Settings.QualitySettings.TryGetSettingAndParameterIndex
// ============================================================

/* WARNING: Possible PIC construction at 0x0168efec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0168eff0) */
/* WARNING: Removing unreachable block (ram,0x0168f008) */
/* WARNING: Removing unreachable block (ram,0x0168eff4) */

long * Core_Settings_QualitySettings__TryGetSettingAndParameterIndex
                 (long param_1,undefined8 param_2,long *param_3,long *param_4,undefined8 *param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  long *extraout_x1;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 ******ppppppuVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_a0 [4];
  uint uStack_9c;
  long alStack_98 [3];
  undefined8 uStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 *puStack_68;
  undefined8 *****pppppuStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = param_1;
  puVar2 = auStack_50;
  plVar5 = param_3;
  plVar8 = param_4;
  puVar6 = param_5;
  if ((bRam0000000003eb5a9e & 1) == 0) {
    func_0x00f78a20(0x3d2ff68);
    bRam0000000003eb5a9e = 1;
  }
  lStack_48 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar5 = &lStack_48;
    plVar8 = plRam0000000003d2ff68;
    iVar3 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(param_1 + 0x10),param_2);
    if (iVar3 == 0) {
      *param_4 = 0;
      *(undefined4 *)param_5 = 0;
      return (long *)0x0;
    }
    if (lStack_48 != 0) {
      plVar5 = (long *)(lStack_48 + 0x20);
      puVar11 = (undefined *)0x168eff0;
      puVar6 = param_5;
      plVar8 = param_3;
      ppppppuVar10 = (undefined8 ******)&stack0xfffffffffffffff0;
      goto code_r0x0168f130;
    }
  }
  auVar16 = func_0x00f78af4();
  puVar2 = auStack_a0;
  alStack_98[1] = 0x3eb5000;
  puStack_58 = &Core_Settings_QualitySettings__TryGetSettingAndParameter;
  ppppppuVar10 = &pppppuStack_60;
  alStack_98[2] = param_1;
  uStack_80 = param_2;
  plStack_78 = param_3;
  plStack_70 = param_4;
  puStack_68 = param_5;
  pppppuStack_60 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb5a9d & 1) == 0) {
    func_0x00f78a20(0x3d3d6e8);
    bRam0000000003eb5a9d = 1;
  }
  alStack_98[0] = 0;
  uStack_9c = 0;
  param_4 = (long *)Core_Settings_QualitySettings__TryGetSettingAndParameterIndex
                              (auVar16._0_8_,auVar16._8_8_,plVar5,alStack_98,&uStack_9c);
  if ((int)param_4 != 0) {
    *plVar8 = alStack_98[0];
    if (alStack_98[0] != 0) {
      lVar7 = *(long *)(alStack_98[0] + 0x20);
      plVar8 = (long *)0x0;
      if (lVar7 != 0) {
        lVar9 = (long)(int)uStack_9c;
        if (*(uint *)(lVar7 + 0x18) <= uStack_9c) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar7 = *(long *)(lVar7 + 0x10) + lVar9 * 0x28;
        uVar13 = *(undefined8 *)(lVar7 + 0x28);
        uVar12 = *(undefined8 *)(lVar7 + 0x20);
        uVar15 = *(undefined8 *)(lVar7 + 0x38);
        uVar14 = *(undefined8 *)(lVar7 + 0x30);
        puVar6[4] = *(undefined8 *)(lVar7 + 0x40);
        puVar6[3] = uVar15;
        puVar6[2] = uVar14;
        goto code_r0x0168f10c;
      }
    }
    puVar11 = &Core_Settings_QualitySettings__FindParameterInList;
    func_0x00f78af4();
    param_3 = extraout_x1;
code_r0x0168f130:
    *(undefined8 *)(puVar2 + -0x40) = 0x3eb5000;
    *(undefined1 (*) [16])(puVar2 + -0x38) = auVar16;
    *(long **)(puVar2 + -0x28) = plVar8;
    *(long **)(puVar2 + -0x20) = param_4;
    *(undefined8 **)(puVar2 + -0x18) = puVar6;
    *(undefined8 *******)(puVar2 + -0x10) = ppppppuVar10;
    *(undefined **)(puVar2 + -8) = puVar11;
    if ((bRam0000000003eb5aa5 & 1) == 0) {
      func_0x00f78a20(0x3d3d6e0);
      func_0x00f78a20(0x3d3d6e8);
      bRam0000000003eb5aa5 = 1;
    }
    lVar7 = *plVar5;
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if ((int)uVar1 < 1) {
        return (long *)0xffffffff;
      }
      plVar8 = (long *)0x0;
      lVar9 = 0x20;
      do {
        if ((long *)(ulong)*(uint *)(lVar7 + 0x18) <= plVar8) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar4 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(*(long *)(lVar7 + 0x10) + lVar9),param_3,0);
        if ((uVar4 & 1) != 0) {
          return plVar8;
        }
        if ((long *)((ulong)uVar1 - 1) == plVar8) {
          return (long *)0xffffffff;
        }
        lVar7 = *plVar5;
        lVar9 = lVar9 + 0x28;
        plVar8 = (long *)((long)plVar8 + 1);
      } while (lVar7 != 0);
    }
    func_0x00f78af4();
    return (long *)0xffffffff;
  }
  *plVar8 = 0;
  puVar6[4] = 0;
  uVar12 = 0;
  uVar13 = 0;
  puVar6[3] = 0;
  puVar6[2] = 0;
code_r0x0168f10c:
  puVar6[1] = uVar13;
  *puVar6 = uVar12;
  return param_4;
}



// ============================================================
// RVA: 0x168f03c | Core.Settings.QualitySettings.TryGetSettingAndParameter
// ============================================================

ulong Core_Settings_QualitySettings__TryGetSettingAndParameter
                (undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,
                undefined8 *param_5)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uStack_4c;
  long lStack_48;
  
  if ((bRam0000000003eb5a9d & 1) == 0) {
    func_0x00f78a20(0x3d3d6e8);
    bRam0000000003eb5a9d = 1;
  }
  lStack_48 = 0;
  uStack_4c = 0;
  uVar2 = Core_Settings_QualitySettings__TryGetSettingAndParameterIndex
                    (param_1,param_2,param_3,&lStack_48,&uStack_4c);
  if ((int)uVar2 == 0) {
    *param_4 = 0;
    param_5[4] = 0;
    uVar6 = 0;
    uVar7 = 0;
    param_5[3] = 0;
    param_5[2] = 0;
  }
  else {
    *param_4 = lStack_48;
    if ((lStack_48 == 0) || (lVar4 = *(long *)(lStack_48 + 0x20), lVar4 == 0)) {
      func_0x00f78af4();
      if ((bRam0000000003eb5aa5 & 1) == 0) {
        func_0x00f78a20(0x3d3d6e0);
        func_0x00f78a20(0x3d3d6e8);
        bRam0000000003eb5aa5 = 1;
      }
      lVar4 = *param_3;
      if (lVar4 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if ((int)uVar1 < 1) {
          return 0xffffffff;
        }
        uVar2 = 0;
        lVar5 = 0x20;
        do {
          if (*(uint *)(lVar4 + 0x18) <= uVar2) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          uVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(*(long *)(lVar4 + 0x10) + lVar5),extraout_x1,0);
          if ((uVar3 & 1) != 0) {
            return uVar2;
          }
          if ((ulong)uVar1 - 1 == uVar2) {
            return 0xffffffff;
          }
          lVar4 = *param_3;
          lVar5 = lVar5 + 0x28;
          uVar2 = uVar2 + 1;
        } while (lVar4 != 0);
      }
      func_0x00f78af4();
      return 0xffffffff;
    }
    lVar5 = (long)(int)uStack_4c;
    if (*(uint *)(lVar4 + 0x18) <= uStack_4c) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar4 = *(long *)(lVar4 + 0x10) + lVar5 * 0x28;
    uVar7 = *(undefined8 *)(lVar4 + 0x28);
    uVar6 = *(undefined8 *)(lVar4 + 0x20);
    uVar9 = *(undefined8 *)(lVar4 + 0x38);
    uVar8 = *(undefined8 *)(lVar4 + 0x30);
    param_5[4] = *(undefined8 *)(lVar4 + 0x40);
    param_5[3] = uVar9;
    param_5[2] = uVar8;
  }
  param_5[1] = uVar7;
  *param_5 = uVar6;
  return uVar2;
}



// ============================================================
// RVA: 0x168f130 | Core.Settings.QualitySettings.FindParameterInList
// ============================================================

ulong Core_Settings_QualitySettings__FindParameterInList
                (undefined8 param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000003eb5aa5 & 1) == 0) {
    func_0x00f78a20(0x3d3d6e0);
    func_0x00f78a20(0x3d3d6e8);
    bRam0000000003eb5aa5 = 1;
  }
  lVar5 = *param_3;
  if (lVar5 != 0) {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if ((int)uVar1 < 1) {
      return 0xffffffff;
    }
    uVar3 = 0;
    lVar4 = 0x20;
    do {
      if (*(uint *)(lVar5 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      uVar2 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(*(long *)(lVar5 + 0x10) + lVar4),param_2,0);
      if ((uVar2 & 1) != 0) {
        return uVar3;
      }
      if ((ulong)uVar1 - 1 == uVar3) {
        return 0xffffffff;
      }
      lVar5 = *param_3;
      lVar4 = lVar4 + 0x28;
      uVar3 = uVar3 + 1;
    } while (lVar5 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x168f1fc | Core.Settings.QualitySettings.TryParseValue
// ============================================================

ulong Core_Settings_QualitySettings__TryParseValue
                (undefined8 param_1,long param_2,float *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  float *pfVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  int iStack_3c;
  char cStack_35;
  float fStack_34;
  
  pfVar4 = param_3;
  if ((bRam0000000003eb5aa3 & 1) == 0) {
    func_0x00f78a20(0x3d20260);
    func_0x00f78a20(0x3d20b50);
    bRam0000000003eb5aa3 = 1;
  }
  fStack_34 = 0.0;
  cStack_35 = '\0';
  iStack_3c = 0;
  if (param_2 == 0) {
    auVar11 = func_0x00f78af4();
    uVar8 = auVar11._8_8_;
    uVar2 = auVar11._0_8_;
    if ((bRam0000000003eb5aa4 & 1) == 0) {
      func_0x00f78a20(0x3d3d6d0);
      func_0x00f78a20(0x3d3d6e0);
      uVar2 = func_0x00f78a20(0x3d3d6e8);
      bRam0000000003eb5aa4 = 1;
    }
    uVar3 = Core_Settings_QualitySettings__FindParameterInList(uVar2,uVar8,pfVar4);
    lVar7 = *(long *)pfVar4;
    if ((int)(uint)uVar3 < 0) {
      if (lVar7 != 0) {
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 2;
        uStack_8c = 0;
        uStack_84 = 0;
        uStack_a8 = uVar8;
        /*System.Collections.Generic.List<QualitySettings.Parameter>$$Add*/ func_0x02570ec4(lVar7,&uStack_a8,uRam0000000003d3d6d0);
        param_4[1] = 0;
        param_4[2] = 0;
        *param_4 = uVar8;
        *(undefined4 *)(param_4 + 3) = 2;
        *(undefined8 *)((long)param_4 + 0x1c) = 0;
        *(undefined4 *)((long)param_4 + 0x24) = 0;
        if (*(long *)pfVar4 != 0) {
          return (ulong)(*(int *)(*(long *)pfVar4 + 0x18) - 1);
        }
      }
    }
    else if (lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x18) <= (uint)uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar7 = *(long *)(lVar7 + 0x10) + (uVar3 & 0xffffffff) * 0x28;
      uVar8 = *(undefined8 *)(lVar7 + 0x28);
      uVar2 = *(undefined8 *)(lVar7 + 0x20);
      uVar10 = *(undefined8 *)(lVar7 + 0x38);
      uVar9 = *(undefined8 *)(lVar7 + 0x30);
      param_4[4] = *(undefined8 *)(lVar7 + 0x40);
      param_4[1] = uVar8;
      *param_4 = uVar2;
      param_4[3] = uVar10;
      param_4[2] = uVar9;
      return uVar3;
    }
    uVar3 = func_0x00f78af4();
    return uVar3;
  }
  iVar1 = /*System.String$$IndexOf*/ func_0x029cdad0(param_2,0x2e,0);
  if (0 < iVar1) {
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
    iVar1 = /*System.Single$$TryParse*/ func_0x029bab3c(param_2,0x24,uVar2,&fStack_34,0);
    if (iVar1 != 0) {
      uVar6 = 0;
      uVar5 = 0;
      goto LAB_0168f360;
    }
  }
  if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
  iVar1 = /*System.Int32$$TryParse*/ func_0x02ae9dac(param_2,4,uVar2,&iStack_3c,0);
  if (iVar1 == 0) {
    if (((*(ushort *)(/*bool_TypeInfo*/ lRam0000000003d20260 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*bool_TypeInfo*/ lRam0000000003d20260 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*System.Boolean$$TryParse*/ func_0x029412a4(param_2,&cStack_35,0);
    if ((int)uVar3 == 0) {
      param_3[0] = 0.0;
      param_3[1] = 0.0;
      return uVar3;
    }
    uVar5 = 0;
    fStack_34 = 0.0;
    if (cStack_35 != '\0') {
      fStack_34 = 1.0;
    }
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
    fStack_34 = (float)iStack_3c;
    uVar5 = 1;
  }
LAB_0168f360:
  *param_3 = fStack_34;
  *(undefined1 *)(param_3 + 1) = uVar6;
  *(undefined1 *)((long)param_3 + 5) = uVar5;
  *(undefined2 *)((long)param_3 + 6) = 0;
  return 1;
}



// ============================================================
// RVA: 0x168f394 | Core.Settings.QualitySettings.GetOrCreateParameterCopyFromList
// ============================================================

ulong Core_Settings_QualitySettings__GetOrCreateParameterCopyFromList
                (undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  
  if ((bRam0000000003eb5aa4 & 1) == 0) {
    func_0x00f78a20(0x3d3d6d0);
    func_0x00f78a20(0x3d3d6e0);
    param_1 = func_0x00f78a20(0x3d3d6e8);
    bRam0000000003eb5aa4 = 1;
  }
  uVar1 = Core_Settings_QualitySettings__FindParameterInList(param_1,param_2,param_3);
  lVar2 = *param_3;
  if ((int)(uint)uVar1 < 0) {
    if (lVar2 != 0) {
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 2;
      uStack_4c = 0;
      uStack_44 = 0;
      uStack_68 = param_2;
      /*System.Collections.Generic.List<QualitySettings.Parameter>$$Add*/ func_0x02570ec4(lVar2,&uStack_68,uRam0000000003d3d6d0);
      param_4[1] = 0;
      param_4[2] = 0;
      *param_4 = param_2;
      *(undefined4 *)(param_4 + 3) = 2;
      *(undefined8 *)((long)param_4 + 0x1c) = 0;
      *(undefined4 *)((long)param_4 + 0x24) = 0;
      if (*param_3 != 0) {
        return (ulong)(*(int *)(*param_3 + 0x18) - 1);
      }
    }
  }
  else if (lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= (uint)uVar1) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar2 = *(long *)(lVar2 + 0x10) + (uVar1 & 0xffffffff) * 0x28;
    uVar4 = *(undefined8 *)(lVar2 + 0x28);
    uVar3 = *(undefined8 *)(lVar2 + 0x20);
    uVar6 = *(undefined8 *)(lVar2 + 0x38);
    uVar5 = *(undefined8 *)(lVar2 + 0x30);
    param_4[4] = *(undefined8 *)(lVar2 + 0x40);
    param_4[1] = uVar4;
    *param_4 = uVar3;
    param_4[3] = uVar6;
    param_4[2] = uVar5;
    return uVar1;
  }
  uVar1 = func_0x00f78af4();
  return uVar1;
}



// ============================================================
// RVA: 0x168f4c0 | Core.Settings.QualitySettings..ctor
// ============================================================

void Core_Settings_QualitySettings___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x168f4c8 | Core.Settings.QualitySettings..cctor
// ============================================================

void Core_Settings_QualitySettings___cctor(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if ((bRam0000000003eb5aa8 & 1) == 0) {
    func_0x00f78a20(0x3d23f68);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d7cc68);
    func_0x00f78a20(0x3d7cc78);
    func_0x00f78a20(0x3d7cc80);
    func_0x00f78a20(0x3d7cc70);
    bRam0000000003eb5aa8 = 1;
  }
  plVar1 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,4);
  if (plVar1 == (long *)0x0) goto LAB_0168f654;
  if ((/*STR('{0:0.0}')*/ lRam0000000003d7cc80 == 0) ||
     (lVar2 = func_0x00f78adc(/*STR('{0:0.0}')*/ lRam0000000003d7cc80,*(undefined8 *)(*plVar1 + 0x40)), lVar2 != 0)) {
    uVar4 = plVar1[3];
    if ((int)uVar4 != 0) {
      plVar1[4] = /*STR('{0:0.0}')*/ lRam0000000003d7cc80;
      if (/*STR('{0:0.00}')*/ lRam0000000003d7cc78 != 0) {
        lVar2 = func_0x00f78adc(/*STR('{0:0.00}')*/ lRam0000000003d7cc78,*(undefined8 *)(*plVar1 + 0x40));
        if (lVar2 == 0) goto LAB_0168f648;
        uVar4 = plVar1[3];
      }
      if ((uVar4 & 0xfffffffe) != 0) {
        plVar1[5] = /*STR('{0:0.00}')*/ lRam0000000003d7cc78;
        if (/*STR('{0:0.000}')*/ lRam0000000003d7cc70 != 0) {
          lVar2 = func_0x00f78adc(/*STR('{0:0.000}')*/ lRam0000000003d7cc70,*(undefined8 *)(*plVar1 + 0x40));
          if (lVar2 == 0) goto LAB_0168f648;
          uVar4 = plVar1[3];
        }
        if (2 < (uint)uVar4) {
          plVar1[6] = /*STR('{0:0.000}')*/ lRam0000000003d7cc70;
          if (/*STR('{0:0.0000}')*/ lRam0000000003d7cc68 != 0) {
            lVar2 = func_0x00f78adc(/*STR('{0:0.0000}')*/ lRam0000000003d7cc68,*(undefined8 *)(*plVar1 + 0x40));
            if (lVar2 == 0) goto LAB_0168f648;
            uVar4 = plVar1[3];
          }
          if ((uVar4 & 0xfffffffc) != 0) {
            plVar1[7] = /*STR('{0:0.0000}')*/ lRam0000000003d7cc68;
            **(long **)(/*Core.Settings.QualitySettings_TypeInfo*/ lRam0000000003d23f68 + 0xb8) = (long)plVar1;
            return;
          }
        }
      }
    }
    uVar3 = func_0x00f78b24();
  }
  else {
LAB_0168f648:
    uVar3 = func_0x00f78b14();
  }
  func_0x00f78ac0(uVar3,0);
LAB_0168f654:
  func_0x00f78af4();
  return;
}



