// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.ToolTipManager

// ============================================================
// RVA: 0x1509b34 | Atlas.UI.ToolTipManager.Init
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1509bc0 | Atlas.UI.ToolTipManager.ShowScreenBase
// ============================================================

/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f883d8) */
/* WARNING: Removing unreachable block (ram,0x02f87f9c) */
/* WARNING: Removing unreachable block (ram,0x02f87fa4) */
/* WARNING: Removing unreachable block (ram,0x02f87fa8) */
/* WARNING: Removing unreachable block (ram,0x02f88044) */
/* WARNING: Removing unreachable block (ram,0x02f87fb4) */
/* WARNING: Removing unreachable block (ram,0x02f87fbc) */
/* WARNING: Removing unreachable block (ram,0x02f87fcc) */
/* WARNING: Removing unreachable block (ram,0x02f87fd8) */
/* WARNING: Removing unreachable block (ram,0x02f88064) */
/* WARNING: Removing unreachable block (ram,0x02f87fdc) */
/* WARNING: Removing unreachable block (ram,0x02f88048) */
/* WARNING: Removing unreachable block (ram,0x02f87848) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_UI_ToolTipManager__ShowScreenBase(long param_1)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  dword **ppdVar10;
  undefined1 *puVar11;
  dword **ppdVar12;
  undefined1 *puVar13;
  dword **ppdVar14;
  bool bVar15;
  uint uVar16;
  dword *pdVar20;
  dword *pdVar21;
  undefined8 uVar22;
  ulong *puVar23;
  int iVar17;
  undefined8 *puVar24;
  long lVar25;
  uint uVar18;
  ulong uVar26;
  dword *pdVar27;
  ulong uVar28;
  long lVar29;
  int iVar19;
  dword *pdVar30;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 uVar31;
  long *plVar32;
  long *extraout_x1;
  long *plVar33;
  undefined8 *puVar34;
  dword *pdVar35;
  long lVar36;
  int *piVar37;
  dword *unaff_x19;
  dword *unaff_x20;
  undefined8 uVar38;
  dword *unaff_x21;
  uint uVar39;
  dword *unaff_x22;
  long lVar40;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar41;
  undefined8 unaff_x28;
  dword **ppdVar42;
  undefined *puVar43;
  code *pcVar44;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  long alStack_108 [5];
  long lStack_d0;
  ulong uStack_c8;
  dword *pdStack_c0;
  long lStack_b8;
  dword **ppdStack_b0;
  dword *apdStack_a8 [4];
  code *pcStack_88;
  code *pcStack_78;
  dword *pdStack_70;
  undefined8 uStack_68;
  undefined8 uStack_50;
  dword *pdStack_48;
  
  uVar31 = 0x3d29330;
  if ((bRam0000000003eb4d3e & 1) == 0) {
    func_0x00f78a20(0x3d3e198);
    func_0x00f78a20(0x3d29330);
    bRam0000000003eb4d3e = 1;
  }
  pdVar21 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.ToolTipScreen.TransitionData_TypeInfo*/ uRam0000000003d29330);
  Atlas_UI_Screens_ToolTipScreen_TransitionData___ctor(pdVar21,0);
  if (pdVar21 == (dword *)0x0) {
    auVar45 = func_0x00f78af4();
    plVar33 = auVar45._8_8_;
    lVar40 = auVar45._0_8_;
    pdVar35 = (dword *)0x0;
    uStack_50 = pdVar21;
    pdStack_48 = (dword *)param_1;
    if (plVar33 != (long *)0x0) {
      pdVar35 = *(dword **)(lVar40 + 0x48);
      uVar22 = (**(code **)(*plVar33 + 0x178))(plVar33,*(undefined8 *)(*plVar33 + 0x180));
      param_1 = lVar40;
      if (pdVar35 != (dword *)0x0) {
        /*Atlas.Stats.UnlockManager$$AddUnlockedIfNotExist*/ func_0x01521f20(pdVar35,uVar22,0,0);
        lVar40 = *(long *)(lVar40 + 0x50);
        if (lVar40 != 0) {
          puVar41 = &stack0xffffffffffffffc0;
          uVar22 = 0x3eb5000;
          if ((bRam0000000003eb50cd & 1) == 0) {
            func_0x00f78a20(0x3d32470,0);
            func_0x00f78a20(0x3d32478);
            func_0x00f78a20(0x3d32480);
            func_0x00f78a20(0x3d3a5d8);
            bRam0000000003eb50cd = 1;
          }
          pcStack_78 = (code *)0x0;
          pdStack_70 = (dword *)0x0;
          uStack_68 = (code *)0x0;
          if (*(long *)(lVar40 + 0x40) != 0) {
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&pcStack_78,*(long *)(lVar40 + 0x40),uRam0000000003d3a5d8);
            while (uVar28 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&pcStack_78,uRam0000000003d32478), (uVar28 & 1) != 0) {
              Atlas_FrontEnd_FTUEManager__EvaluateStage(lVar40,uStack_68);
            }
            pdVar21 = (dword *)/*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&pcStack_78,uRam0000000003d32470);
            return pdVar21;
          }
          func_0x00f78af4();
          if (extraout_w1 == 1) {
            plVar33 = (long *)___cxa_begin_catch();
            lVar40 = *plVar33;
            ___cxa_end_catch();
            pdVar21 = (dword *)/*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&pcStack_78,uRam0000000003eb5000);
            if (lVar40 == 0) {
              return pdVar21;
            }
            func_0x00f78ac0(lVar40,0);
          }
          pcVar44 = Atlas_FrontEnd_FTUEManager__EvaluateStage;
          auVar45 = __Unwind_Resume();
          puVar6 = &stack0xffffffffffffff80;
          do {
            lVar29 = auVar45._8_8_;
            lVar25 = auVar45._0_8_;
            *(undefined8 *)(puVar6 + -0x50) = unaff_x26;
            *(undefined8 *)(puVar6 + -0x48) = unaff_x25;
            *(undefined8 *)(puVar6 + -0x40) = unaff_x24;
            *(long *)(puVar6 + -0x38) = unaff_x23;
            *(dword **)(puVar6 + -0x30) = unaff_x22;
            *(undefined8 *)(puVar6 + -0x28) = uVar31;
            *(undefined8 *)(puVar6 + -0x20) = uVar22;
            *(long *)(puVar6 + -0x18) = lVar40;
            *(undefined1 **)(puVar6 + -0x10) = puVar41;
            *(code **)(puVar6 + -8) = pcVar44;
            unaff_x24 = 0x3d23990;
            if ((bRam0000000003eb50ce & 1) == 0) {
              func_0x00f78a20(0x3d2dbf0);
              func_0x00f78a20(0x3d2dbf8);
              func_0x00f78a20(0x3d337c8);
              func_0x00f78a20(0x3d33438);
              func_0x00f78a20(0x3d337d0);
              func_0x00f78a20(0x3d33440);
              func_0x00f78a20(0x3d337d8);
              func_0x00f78a20(0x3d33448);
              func_0x00f78a20(0x3d3d1b0);
              func_0x00f78a20(0x3d3dc70);
              func_0x00f78a20(0x3d23990);
              bRam0000000003eb50ce = 1;
            }
            *(undefined8 *)(puVar6 + -0x70) = 0;
            *(undefined8 *)(puVar6 + -0x68) = 0;
            *(undefined8 *)(puVar6 + -0x60) = 0;
            *(undefined8 *)(puVar6 + -0x88) = 0;
            *(undefined8 *)(puVar6 + -0x80) = 0;
            *(undefined8 *)(puVar6 + -0x78) = 0;
            *(undefined4 *)(puVar6 + -0x90) = 0;
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            pdVar21 = (dword *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar29,0,0);
            if (((ulong)pdVar21 & 1) != 0) {
              return pdVar21;
            }
            uVar28 = Atlas_FrontEnd_FTUEManager__IsStageUnlocked(lVar25,lVar29);
            pdVar21 = (dword *)Atlas_FrontEnd_FTUEManager__IsStageComplete(lVar25,lVar29);
            if ((int)uVar28 == 0) {
              return pdVar21;
            }
            if ((int)pdVar21 != 0) {
              return pdVar21;
            }
            if (lVar29 == 0) goto code_r0x0158538c;
            if (*(long *)(lVar29 + 0x60) == 0) goto code_r0x0158538c;
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar6 + -0xb8,*(long *)(lVar29 + 0x60),uRam0000000003d3d1b0);
            *(undefined8 *)(puVar6 + -0x68) = *(undefined8 *)(puVar6 + -0xb0);
            *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)(puVar6 + -0xb8);
            *(undefined8 *)(puVar6 + -0x60) = *(undefined8 *)(puVar6 + -0xa8);
            unaff_x25 = 0x3d33440;
            do {
              do {
                uVar28 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar6 + -0x70,uRam0000000003d33440);
                if ((uVar28 & 1) == 0) goto code_r0x01585278;
                lVar40 = *(long *)(puVar6 + -0x60);
                if (lVar40 == 0) {
                  func_0x00f78af4();
                  goto code_r0x01585388;
                }
                lVar36 = /*Atlas.Definitions.FTUEStageDefinition.FTUEEvent$$get_EventDefinition*/ func_0x0154bfc4(lVar40,0);
                uVar31 = *(undefined8 *)(lVar36 + 8);
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar26 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar31,0,0);
              } while ((uVar26 & 1) == 0);
              lVar36 = *(long *)(lVar25 + 0x18);
              puVar24 = (undefined8 *)/*Atlas.Definitions.FTUEStageDefinition.FTUEEvent$$get_EventDefinition*/ func_0x0154bfc4(lVar40,0);
              if (lVar36 == 0) {
                func_0x00f78af4();
                goto code_r0x01585388;
              }
              iVar19 = /*Atlas.Stats.UnlockManager$$GetChallengesCompletedCountForEvent*/ func_0x015201f4(lVar36,*puVar24,0);
            } while (*(int *)(lVar40 + 0x20) <= iVar19);
code_r0x01585278:
            *(undefined4 *)(puVar6 + -0xa0) = 0x7e;
            unaff_x22 = (dword *)(ulong)((uint)uVar28 ^ 1);
            unaff_x23 = 1;
            *(undefined4 *)(puVar6 + -0x90) = 1;
            /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar6 + -0x70,uRam0000000003d33438);
            if (*(int *)(puVar6 + -0xa0) == 0x7e) {
              unaff_x23 = 0;
              *(undefined4 *)(puVar6 + -0x90) = 0;
            }
            while( true ) {
              if (*(long *)(lVar29 + 0x58) != 0) {
                /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar6 + -0x88,*(long *)(lVar29 + 0x58),uRam0000000003d3dc70);
                goto code_r0x015852d8;
              }
code_r0x0158538c:
              func_0x00f78af4();
              if (extraout_w1_00 != 1) break;
              puVar23 = (ulong *)___cxa_begin_catch();
              uVar28 = *puVar23;
              ___cxa_end_catch();
              /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar6 + -0x70,uRam0000000003d33438);
              if (uVar28 != 0) goto code_r0x01585428;
              unaff_x23 = 0;
              unaff_x22 = (dword *)((long)&MACH_HEADER.magic + 1);
            }
            __Unwind_Resume();
code_r0x01585428:
            auVar46 = func_0x00f78ac0(uVar28,0);
            lVar40 = auVar46._0_8_;
            *(dword **)(puVar6 + -0xf0) = unaff_x22;
            *(ulong *)(puVar6 + -0xe8) = uVar28;
            *(undefined1 (*) [16])(puVar6 + -0xe0) = auVar45;
            *(undefined1 **)(puVar6 + -0xd0) = puVar6 + -0x10;
            *(code **)(puVar6 + -200) = Atlas_FrontEnd_FTUEManager__EvaluateStage;
            if ((bRam0000000003eb50cf & 1) == 0) {
              func_0x00f78a20(0x3d57280);
              bRam0000000003eb50cf = 1;
            }
            if ((*(long *)(lVar40 + 0x10) == 0) ||
               (lVar25 = *(long *)(*(long *)(lVar40 + 0x10) + 0x10), lVar25 == 0)) {
              auVar45 = func_0x00f78af4();
              uVar31 = auVar45._0_8_;
              puVar7 = puVar6 + -0x120;
              *(dword **)(puVar6 + -0x120) = unaff_x22;
              *(undefined8 *)(puVar6 + -0x118) = 0x3eb5000;
              *(long *)(puVar6 + -0x110) = auVar46._8_8_;
              *(long *)(puVar6 + -0x108) = lVar40;
              *(undefined1 **)(puVar6 + -0x100) = puVar6 + -0xd0;
              *(code **)(puVar6 + -0xf8) = Atlas_FrontEnd_FTUEManager__IsStageUnlocked;
              puVar41 = puVar6 + -0x100;
              uVar22 = 0x3eb5000;
              if ((bRam0000000003eb50d0 & 1) == 0) {
                func_0x00f78a20(0x3d21270);
                bRam0000000003eb50d0 = 1;
              }
              if (auVar45._8_8_ == 0) {
                pcVar44 = Atlas_FrontEnd_FTUEManager__IsStageUnlocked;
                auVar46 = func_0x00f78af4();
                uVar38 = 0;
              }
              else {
                uVar22 = *(undefined8 *)(auVar45._8_8_ + 0x18);
                if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar22 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar22,0);
                auVar46._8_8_ = uVar22;
                auVar46._0_8_ = uVar31;
                puVar41 = *(undefined1 **)(puVar6 + -0x100);
                pcVar44 = *(code **)(puVar6 + -0xf8);
                uVar38 = *(undefined8 *)(puVar6 + -0x110);
                uVar31 = *(undefined8 *)(puVar6 + -0x108);
                puVar7 = puVar6 + -0xf0;
                unaff_x22 = *(dword **)(puVar6 + -0x120);
                uVar22 = *(undefined8 *)(puVar6 + -0x118);
              }
              lVar40 = auVar46._0_8_;
              *(undefined8 *)(puVar7 + -0x20) = uVar38;
              *(undefined8 *)(puVar7 + -0x18) = uVar31;
              *(undefined1 **)(puVar7 + -0x10) = puVar41;
              *(code **)(puVar7 + -8) = pcVar44;
              if (*(long *)(lVar40 + 0x18) == 0) {
                auVar45 = func_0x00f78af4(0,auVar46._8_8_);
                uVar31 = auVar45._0_8_;
                puVar8 = puVar7 + -0x50;
                *(dword **)(puVar7 + -0x50) = unaff_x22;
                *(undefined8 *)(puVar7 + -0x48) = uVar22;
                *(undefined8 *)(puVar7 + -0x40) = uVar38;
                *(long *)(puVar7 + -0x38) = lVar40;
                *(undefined1 **)(puVar7 + -0x30) = puVar7 + -0x10;
                *(code **)(puVar7 + -0x28) = Atlas_FrontEnd_FTUEManager__IsStageComplete;
                puVar41 = puVar7 + -0x30;
                uVar22 = 0x3eb5000;
                if ((bRam0000000003eb50d1 & 1) == 0) {
                  func_0x00f78a20(0x3d21270);
                  bRam0000000003eb50d1 = 1;
                }
                if (auVar45._8_8_ == 0) {
                  pcVar44 = Atlas_FrontEnd_FTUEManager__IsStageComplete;
                  auVar47 = func_0x00f78af4();
                  uVar38 = 0;
                }
                else {
                  uVar22 = *(undefined8 *)(auVar45._8_8_ + 0x18);
                  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar22 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar22,0);
                  auVar47._8_8_ = uVar22;
                  auVar47._0_8_ = uVar31;
                  puVar41 = *(undefined1 **)(puVar7 + -0x30);
                  pcVar44 = *(code **)(puVar7 + -0x28);
                  uVar38 = *(undefined8 *)(puVar7 + -0x40);
                  uVar31 = *(undefined8 *)(puVar7 + -0x38);
                  puVar8 = puVar7 + -0x20;
                  unaff_x22 = *(dword **)(puVar7 + -0x50);
                  uVar22 = *(undefined8 *)(puVar7 + -0x48);
                }
                lVar40 = auVar47._0_8_;
                *(undefined8 *)(puVar8 + -0x20) = uVar38;
                *(undefined8 *)(puVar8 + -0x18) = uVar31;
                *(undefined1 **)(puVar8 + -0x10) = puVar41;
                *(code **)(puVar8 + -8) = pcVar44;
                if (*(long *)(lVar40 + 0x18) != 0) {
                  uVar18 = /*Atlas.Stats.UnlockManager$$IsUnlockUnseen*/ func_0x015217ac(*(long *)(lVar40 + 0x18),auVar47._8_8_,0);
                  return (dword *)(ulong)((uint)(*(char *)(lVar40 + 0x48) != '\0') | uVar18 ^ 1);
                }
                auVar45 = func_0x00f78af4(0,auVar47._8_8_);
                lVar25 = auVar45._0_8_;
                *(dword **)(puVar8 + -0x50) = unaff_x22;
                *(undefined8 *)(puVar8 + -0x48) = uVar22;
                *(undefined8 *)(puVar8 + -0x40) = uVar38;
                *(long *)(puVar8 + -0x38) = lVar40;
                *(undefined1 **)(puVar8 + -0x30) = puVar8 + -0x10;
                *(code **)(puVar8 + -0x28) =
                     Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete;
                if ((bRam0000000003eb50d2 & 1) == 0) {
                  func_0x00f78a20(0x3d57280);
                  bRam0000000003eb50d2 = 1;
                }
                if ((*(long *)(lVar25 + 0x10) != 0) &&
                   (lVar40 = *(long *)(*(long *)(lVar25 + 0x10) + 0x10), lVar40 != 0)) {
                  uVar31 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar40,auVar45._8_8_,uRam0000000003d57280);
                  uVar18 = Atlas_FrontEnd_FTUEManager__IsStageUnlocked(lVar25,uVar31);
                  uVar16 = Atlas_FrontEnd_FTUEManager__IsStageComplete(lVar25,uVar31);
                  return (dword *)(ulong)(uVar18 & (uVar16 ^ 1));
                }
                lVar40 = func_0x00f78af4();
                return (dword *)(ulong)*(byte *)(lVar40 + 0x48);
              }
              uVar18 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(lVar40 + 0x18),auVar46._8_8_,0);
              return (dword *)(ulong)(*(char *)(lVar40 + 0x48) != '\0' | uVar18);
            }
            uVar31 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar25,auVar46._8_8_,uRam0000000003d57280);
            auVar45._8_8_ = uVar31;
            auVar45._0_8_ = lVar40;
            puVar41 = *(undefined1 **)(puVar6 + -0xd0);
            pcVar44 = *(code **)(puVar6 + -200);
            uVar22 = *(undefined8 *)(puVar6 + -0xe0);
            lVar40 = *(long *)(puVar6 + -0xd8);
            unaff_x22 = *(dword **)(puVar6 + -0xf0);
            uVar31 = *(undefined8 *)(puVar6 + -0xe8);
            puVar6 = puVar6 + -0xc0;
          } while( true );
        }
      }
    }
    pdVar21 = (dword *)func_0x00f78af4();
    pcStack_78 = (code *)0x3d29330;
    pdStack_70 = pdVar35;
    uStack_68 = (code *)param_1;
    if ((bRam0000000003eb4d3f & 1) == 0) {
      func_0x00f78a20(0x3d3e158);
      bRam0000000003eb4d3f = 1;
    }
    if ((bRam0000000003eb8334 & 1) == 0) {
      func_0x00f78a20(0x3d3b328,uRam0000000003d3e158);
      func_0x00f78a20(0x3d1dbe8);
      bRam0000000003eb8334 = 1;
    }
    uVar31 = func_0x00f78aec(/*System.Collections.Generic.List<ModalData>_TypeInfo*/ uRam0000000003d1dbe8);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar31,uRam0000000003d3b328);
    *(undefined8 *)(pdVar21 + 0xe) = uVar31;
    return pdVar21;
  }
  *(long *)(pdVar21 + 4) = param_1;
  puVar24 = puRam0000000003d3e198;
  puVar41 = &stack0xffffffffffffffd0;
  puVar11 = &stack0xffffffffffffffd0;
  lVar40 = 0x3eb8000;
  puVar34 = puRam0000000003d3e198;
  if ((bRam0000000003eb8328 & 1) == 0) {
    func_0x00f78a20(0x3d72968);
    bRam0000000003eb8328 = 1;
  }
  if (param_1 != 0) {
    puVar34 = *(undefined8 **)(*(long *)(puVar24[3] + 0xc0) + 8);
    (*(code *)*puVar34)(param_1,/*STR('ShowScreen')*/ uRam0000000003d72968);
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar25 = *(long *)(*(long *)(param_1 + 0x18) + 0xa8), lVar25 != 0)) {
      puVar34 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
      /*Core.Input.InputManager$$SetScreenLayerInputExclusive*/ func_0x0164b04c(lVar25,*(undefined4 *)(param_1 + 0x30),1,0);
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (lVar25 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar25 != 0)) {
        pdVar35 = (dword *)(ulong)*(uint *)(param_1 + 0x30);
        uVar31 = *(undefined8 *)(param_1 + 0x28);
        lVar40 = *(long *)(lVar25 + 0x10);
        if (lVar40 != 0) {
          if ((bRam0000000003ebc64a & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            func_0x00f78a20(0x3d3ddd0);
            bRam0000000003ebc64a = 1;
          }
          lStack_d0 = 0x3ebc000;
          lStack_b8 = 0;
          apdStack_a8[2] = (dword *)&UNK_02f87f9c;
          uStack_c8 = uVar31;
          pdStack_c0 = pdVar21;
          ppdStack_b0 = (dword **)lVar40;
          apdStack_a8[0] = pdVar35;
          apdStack_a8[1] = (dword *)&stack0xfffffffffffffff0;
          if ((bRam0000000003ebc64e & 1) == 0) {
            func_0x00f78a20(0x3d3ddf0);
            func_0x00f78a20(0x3d3ddf8);
            bRam0000000003ebc64e = 1;
          }
          lVar25 = *(long *)(lVar40 + 0x78);
          if (lVar25 != 0) {
            iVar19 = *(int *)(lVar25 + 0x18);
            if (iVar19 < 1) {
              return (dword *)0x0;
            }
            iVar17 = 1;
            pdVar21 = (dword *)((long)&MACH_HEADER.magic + 1);
            do {
              if (*(uint *)(lVar25 + 0x18) <= iVar17 - 1U) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar25 = *(long *)(*(long *)(lVar25 + 0x10) + (long)(int)(iVar17 - 1U) * 0x20 + 0x20);
              if (lVar25 == 0) break;
              uVar28 = /*System.String$$Equals*/ func_0x029caa48(lVar25,uVar31,5,0);
              if ((uVar28 & 1) != 0) {
                return pdVar21;
              }
              pdVar21 = (dword *)(ulong)(iVar17 < iVar19);
              if (iVar19 == iVar17) {
                return pdVar21;
              }
              lVar25 = *(long *)(lVar40 + 0x78);
              iVar17 = iVar17 + 1;
            } while (lVar25 != 0);
          }
          func_0x00f78af4();
          return (dword *)0x0;
        }
        auVar45 = func_0x00f78af4();
        pdVar20 = auVar45._8_8_;
        puVar6 = &stack0xffffffffffffffe0;
        lVar40 = *(long *)(auVar45._0_8_ + 0x10);
        if (lVar40 != 0) {
          pdVar35 = (dword *)0x0;
          if ((bRam0000000003ebc64b & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            func_0x00f78a20(0x3d3ddd0);
            bRam0000000003ebc64b = 1;
          }
          lVar25 = *(long *)(lVar40 + 0x70);
          if (lVar25 != 0) {
            lVar29 = lVar25;
            if (*(uint *)(lVar25 + 0x18) <= auVar45._8_4_) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              lVar29 = *(long *)(lVar40 + 0x70);
            }
            if (lVar29 != 0) {
              lVar25 = *(long *)(lVar25 + 0x10) + (long)(int)auVar45._8_4_ * 0x28;
              pcStack_78 = *(code **)(lVar25 + 0x28);
              pdStack_70 = *(dword **)(lVar25 + 0x20);
              pcStack_88 = (code *)CONCAT26(pcStack_88._6_2_,*(undefined6 *)(lVar25 + 0x42));
              uStack_50 = (dword *)CONCAT26(*(undefined2 *)(lVar25 + 0x46),
                                            CONCAT42(*(undefined4 *)(lVar25 + 0x42),1));
              uStack_68 = pcStack_78;
              /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar29,pdVar20,&pdStack_70,uRam0000000003d3ddd0);
              pdVar21 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar40,pdVar20);
              return pdVar21;
            }
          }
          auVar45 = func_0x00f78af4();
          pdVar30 = auVar45._8_8_;
          ppdVar10 = &pdStack_c0;
          apdStack_a8[2] = (dword *)&Core_UI2_UIManager__GetCurrentScreenID;
          ppdVar42 = apdStack_a8 + 1;
          lStack_b8 = lVar25;
          ppdStack_b0 = (dword **)lVar40;
          apdStack_a8[0] = pdVar20;
          apdStack_a8[1] = (dword *)&stack0xffffffffffffffe0;
          if ((bRam0000000003ebc64c & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc64c = 1;
          }
          lVar40 = *(long *)(auVar45._0_8_ + 0x70);
          if (lVar40 != 0) {
            if (*(uint *)(lVar40 + 0x18) <= auVar45._8_4_) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar40 = *(long *)(*(long *)(lVar40 + 0x10) + (long)(int)auVar45._8_4_ * 0x28 + 0x28);
            if (lVar40 == 0) {
              pdVar21 = (dword *)0x0;
            }
            else {
              pdVar21 = *(dword **)(lVar40 + 0x40);
            }
            return pdVar21;
          }
          puVar43 = &Core_UI2_UIScreen__ForceExit;
          unaff_x19 = (dword *)func_0x00f78af4();
          pdVar20 = (dword *)0x0;
          unaff_x21 = (dword *)0x3ebc000;
          goto code_r0x02f882d8;
        }
        auVar45 = func_0x00f78af4();
        pdVar30 = auVar45._8_8_;
        pdVar20 = *(dword **)(auVar45._0_8_ + 0x10);
        if (pdVar20 != (dword *)0x0) {
          pdVar35 = (dword *)0x0;
          puVar9 = &stack0xffffffffffffffe0;
          pcVar44 = Atlas_UI_AtlasUIManager__ClearLayer;
          goto code_r0x02f877a8;
        }
        auVar45 = func_0x00f78af4();
        lVar40 = *(long *)(auVar45._0_8_ + 0x10);
        auVar49._8_8_ = auVar45._8_8_;
        auVar49._0_8_ = lVar40;
        if (lVar40 != 0) {
          pcVar44 = Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
          pdVar30 = pdVar35;
          while( true ) {
            pdVar20 = auVar49._0_8_;
            puVar9 = puVar11 + -0x30;
            *(dword **)(puVar11 + -0x30) = unaff_x22;
            *(dword **)(puVar11 + -0x28) = unaff_x21;
            *(dword **)(puVar11 + -0x20) = unaff_x20;
            *(dword **)(puVar11 + -0x18) = unaff_x19;
            *(undefined1 **)(puVar11 + -0x10) = puVar41;
            *(code **)(puVar11 + -8) = pcVar44;
            puVar6 = puVar11 + -0x10;
            pcVar44 = (code *)&UNK_02f883d8;
            pdVar35 = pdVar30;
            unaff_x19 = pdVar21;
            unaff_x20 = pdVar30;
            unaff_x21 = auVar49._8_8_;
            unaff_x22 = pdVar20;
code_r0x02f877a8:
            ppdVar10 = (dword **)(puVar9 + -0x60);
            *(dword **)(puVar9 + -0x30) = unaff_x22;
            *(dword **)(puVar9 + -0x28) = unaff_x21;
            *(dword **)(puVar9 + -0x20) = unaff_x20;
            *(dword **)(puVar9 + -0x18) = unaff_x19;
            *(undefined1 **)(puVar9 + -0x10) = puVar6;
            *(code **)(puVar9 + -8) = pcVar44;
            ppdVar42 = (dword **)(puVar9 + -0x10);
            pdVar27 = pdVar20;
            if ((bRam0000000003ebc64d & 1) == 0) {
              func_0x00f78a20(0x3d3ddc8);
              pdVar27 = (dword *)func_0x00f78a20(0x3d3ddd0);
              bRam0000000003ebc64d = 1;
            }
            uVar18 = (uint)pdVar30;
            if (((int)uVar18 < 0) || ((int)pdVar20[0x14] <= (int)uVar18)) {
              return pdVar27;
            }
            lVar40 = *(long *)(pdVar20 + 0x1c);
            if (lVar40 == 0) break;
            if (*(uint *)(lVar40 + 0x18) <= uVar18) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar40 = *(long *)(lVar40 + 0x10) + ((ulong)pdVar30 & 0xffffffff) * 0x28;
            unaff_x22 = *(dword **)(lVar40 + 0x20);
            unaff_x19 = *(dword **)(lVar40 + 0x28);
            *(undefined4 *)(puVar9 + -0x60) = *(undefined4 *)(lVar40 + 0x42);
            *(undefined2 *)(puVar9 + -0x5c) = *(undefined2 *)(lVar40 + 0x46);
            if (unaff_x19 == (dword *)0x0) {
              lVar40 = *(long *)(pdVar20 + 0x1c);
              if (lVar40 != 0) {
                *(dword **)(puVar9 + -0x58) = unaff_x22;
                *(undefined8 *)(puVar9 + -0x50) = 0;
                *(undefined8 *)(puVar9 + -0x48) = 0;
                *(undefined8 *)(puVar9 + -0x40) = 0;
                *(undefined2 *)(puVar9 + -0x38) = 0;
                *(undefined4 *)(puVar9 + -0x36) = *(undefined4 *)(puVar9 + -0x60);
                *(undefined2 *)(puVar9 + -0x32) = *(undefined2 *)(puVar9 + -0x5c);
                pdVar21 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar40,pdVar30,puVar9 + -0x58,
                                                   uRam0000000003d3ddd0);
                return pdVar21;
              }
              break;
            }
            puVar43 = &UNK_02f87848;
            unaff_x21 = unaff_x19;
code_r0x02f882d8:
            *(dword **)((long)ppdVar10 + -0x20) = pdVar20;
            *(dword **)((long)ppdVar10 + -0x18) = pdVar30;
            *(dword ***)((long)ppdVar10 + -0x10) = ppdVar42;
            *(undefined **)((long)ppdVar10 + -8) = puVar43;
            (**(code **)(*(long *)unaff_x19 + 0x218))
                      (unaff_x19,*(undefined8 *)(*(long *)unaff_x19 + 0x220));
            if (*(long *)(unaff_x19 + 10) != 0) {
              /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(unaff_x19 + 10),0);
              unaff_x19[0x13] = 4;
              /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(unaff_x19,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pdVar21 = (dword *)(**(code **)(*(long *)unaff_x19 + 0x228))
                                           (unaff_x19,*(undefined8 *)(*(long *)unaff_x19 + 0x230));
              return pdVar21;
            }
            func_0x00f78af4();
            puVar11 = (undefined1 *)((long)ppdVar10 + -0x40);
            *(dword **)((long)ppdVar10 + -0x40) = pdVar20;
            *(dword **)((long)ppdVar10 + -0x38) = unaff_x19;
            *(undefined1 **)((long)ppdVar10 + -0x30) = (undefined1 *)((long)ppdVar10 + -0x10);
            *(undefined **)((long)ppdVar10 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour
            ;
            puVar41 = (undefined1 *)((long)ppdVar10 + -0x30);
            if (extraout_x1 != (long *)0x0) {
              lVar40 = extraout_x1[5];
              /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
              uVar31 = (**(code **)(*extraout_x1 + 0x238))
                                 (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
              extraout_x1[5] = 0;
              extraout_x1[6] = 0;
              extraout_x1[9] = _UNK_037235c0;
              extraout_x1[7] = 0;
              extraout_x1[8] = 0;
              /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar31,lVar40);
              pdVar21 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
              extraout_x1[0xb] = 0;
              return pdVar21;
            }
            pcVar44 = (code *)&Core_UI2_UIManager__ClearLayerAndShowScreen;
            auVar49 = func_0x00f78af4();
            pdVar30 = pdVar35;
            unaff_x20 = pdVar20;
          }
          lVar40 = func_0x00f78af4();
          *(undefined8 *)(puVar9 + -0xa0) = unaff_d9;
          *(undefined8 *)(puVar9 + -0x98) = unaff_d8;
          *(dword **)(puVar9 + -0x90) = unaff_x22;
          *(undefined8 *)(puVar9 + -0x88) = 0;
          *(dword **)(puVar9 + -0x80) = pdVar20;
          *(dword **)(puVar9 + -0x78) = pdVar30;
          *(dword ***)(puVar9 + -0x70) = ppdVar42;
          *(undefined **)(puVar9 + -0x68) = &Core_UI2_UIManager__Update;
          if ((bRam0000000003ebc647 & 1) == 0) {
            func_0x00f78a20(0x3d255c0);
            bRam0000000003ebc647 = 1;
          }
          if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar31 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
          /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar31,0);
          if (0 < *(int *)(lVar40 + 0x50)) {
            iVar19 = 0;
            do {
              /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar40,iVar19);
              /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar40,iVar19);
              iVar19 = iVar19 + 1;
            } while (iVar19 < *(int *)(lVar40 + 0x50));
          }
          /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar40);
          *(undefined8 *)(puVar9 + -0x80) = *(undefined8 *)(puVar9 + -0x80);
          *(undefined8 *)(puVar9 + -0x78) = *(undefined8 *)(puVar9 + -0x78);
          *(undefined8 *)(puVar9 + -0x70) = *(undefined8 *)(puVar9 + -0x70);
          *(undefined8 *)(puVar9 + -0x68) = *(undefined8 *)(puVar9 + -0x68);
          if (pcRam0000000003ec05a0 == (code *)0x0) {
            pcRam0000000003ec05a0 =
                 (code *)func_0x00f789d4(
                                        "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pdVar21 = (dword *)(*pcRam0000000003ec05a0)(uVar31);
          return pdVar21;
        }
        auVar45 = func_0x00f78af4();
        pdStack_48 = (dword *)Atlas_UI_AtlasUIManager__IsLayerReady;
        lVar40 = *(long *)(auVar45._0_8_ + 0x10);
        if (lVar40 == 0) {
          uStack_50 = (dword *)&stack0xffffffffffffffc0;
          auVar45 = func_0x00f78af4();
          puVar41 = &stack0xffffffffffffffa0;
          lVar40 = *(long *)(auVar45._0_8_ + 0x10);
          auVar50._8_8_ = auVar45._8_8_;
          auVar50._0_8_ = lVar40;
          if (lVar40 != 0) {
            pdVar21 = (dword *)0x0;
            ppdVar12 = (dword **)&uStack_50;
            pcVar44 = Atlas_UI_AtlasUIManager__GetLayerState;
            goto code_r0x02f884dc;
          }
          auVar45 = func_0x00f78af4();
          ppdVar42 = &pdStack_70;
          uStack_68 = Atlas_UI_AtlasUIManager__EnableInput;
          lVar40 = *(long *)(auVar45._0_8_ + 0x10);
          auVar51._8_8_ = auVar45._8_8_;
          auVar51._0_8_ = lVar40;
          if (lVar40 == 0) {
            pdStack_70 = (dword *)&stack0xffffffffffffffa0;
            auVar45 = func_0x00f78af4();
            apdStack_a8[3] = (dword *)&stack0xffffffffffffff80;
            pcStack_78 = Atlas_UI_AtlasUIManager__SetScreenVisible;
            lVar40 = *(long *)(auVar45._0_8_ + 0x10);
            auVar52._8_8_ = auVar45._8_8_;
            auVar52._0_8_ = lVar40;
            if (lVar40 == 0) {
              pdVar35 = (dword *)func_0x00f78af4();
              pcStack_88 = Atlas_UI_AtlasUIManager___ctor;
              pdVar21 = (dword *)&stack0xffffffffffffff80;
              if ((bRam0000000003eb4871 & 1) == 0) {
                func_0x00f78a20(0x3d2fb80);
                func_0x00f78a20(0x3d1c478);
                bRam0000000003eb4871 = 1;
                pdVar21 = apdStack_a8[3];
              }
              apdStack_a8[3] = pdVar21;
              uVar31 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
              /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar31,uRam0000000003d2fb80);
              *(undefined8 *)(pdVar35 + 0xc) = uVar31;
              return pdVar35;
            }
            ppdVar14 = &pdStack_70;
            pcVar44 = Atlas_UI_AtlasUIManager__SetScreenVisible;
            goto code_r0x02f88674;
          }
          puVar13 = &stack0xffffffffffffffa0;
          pcVar44 = Atlas_UI_AtlasUIManager__EnableInput;
          pdVar21 = pdVar35;
          pdVar35 = unaff_x21;
          pdStack_70 = (dword *)&stack0xffffffffffffffa0;
        }
        else {
          pdVar21 = (dword *)0x0;
          ppdVar12 = &pdStack_70;
          pdStack_48 = (dword *)Atlas_UI_AtlasUIManager__IsLayerReady;
          pdStack_70 = unaff_x22;
          uStack_68 = (code *)unaff_x21;
          uStack_50 = (dword *)&stack0xffffffffffffffc0;
          if ((bRam0000000003ebc64f & 1) == 0) {
            uStack_50 = (dword *)&stack0xffffffffffffffc0;
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc64f = 1;
          }
          uVar18 = auVar45._8_4_;
          if (((int)uVar18 < 0) || (*(int *)(lVar40 + 0x50) <= (int)uVar18)) {
            return (dword *)0x0;
          }
          lVar40 = *(long *)(lVar40 + 0x70);
          if (lVar40 != 0) {
            if (*(uint *)(lVar40 + 0x18) <= uVar18) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar25 = *(long *)(lVar40 + 0x10) + ((ulong)auVar45._8_8_ & 0xffffffff) * 0x28;
            lVar40 = *(long *)(lVar25 + 0x28);
            cVar2 = *(char *)(lVar25 + 0x40);
            iVar19 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar25 + 0x30),0);
            if (iVar19 == 0 || cVar2 != '\0') {
              return (dword *)0x0;
            }
            if ((lVar40 != 0) && (*(int *)(lVar40 + 0x4c) != 2)) {
              return (dword *)0x0;
            }
            return (dword *)((long)&MACH_HEADER.magic + 1);
          }
          pcVar44 = (code *)&Core_UI2_UIManager__GetLayerState;
          auVar50 = func_0x00f78af4();
          unaff_x20 = (dword *)0x0;
          unaff_x19 = auVar45._8_8_;
          unaff_x21 = (dword *)0x3ebc000;
code_r0x02f884dc:
          puVar13 = (undefined1 *)((long)ppdVar12 + -0x30);
          *(dword **)((long)ppdVar12 + -0x30) = unaff_x22;
          *(dword **)((long)ppdVar12 + -0x28) = unaff_x21;
          *(dword **)((long)ppdVar12 + -0x20) = unaff_x20;
          *(dword **)((long)ppdVar12 + -0x18) = unaff_x19;
          *(undefined8 **)((long)ppdVar12 + -0x10) = &uStack_50;
          *(code **)((long)ppdVar12 + -8) = pcVar44;
          puVar41 = (undefined1 *)((long)ppdVar12 + -0x10);
          if ((bRam0000000003ebc650 & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc650 = 1;
          }
          lVar40 = *(long *)(auVar50._0_8_ + 0x70);
          if (lVar40 != 0) {
            if (*(uint *)(lVar40 + 0x18) <= auVar50._8_4_) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar40 = *(long *)(*(long *)(lVar40 + 0x10) + (long)(int)auVar50._8_4_ * 0x28 + 0x28);
            if (lVar40 == 0) {
              pdVar21 = &MACH_HEADER.cputype;
            }
            else {
              pdVar21 = (dword *)(ulong)*(uint *)(lVar40 + 0x4c);
            }
            return pdVar21;
          }
          pcVar44 = (code *)&Core_UI2_UIManager__EnableInput;
          auVar51 = func_0x00f78af4();
          unaff_x20 = (dword *)0x0;
          unaff_x19 = auVar50._8_8_;
          pdVar35 = (dword *)0x3ebc000;
        }
        pdVar20 = auVar51._8_8_;
        unaff_x21 = auVar51._0_8_;
        ppdVar14 = (dword **)(puVar13 + -0x40);
        *(undefined8 *)(puVar13 + -0x40) = unaff_x24;
        *(long *)(puVar13 + -0x38) = unaff_x23;
        *(dword **)(puVar13 + -0x30) = unaff_x22;
        *(dword **)(puVar13 + -0x28) = pdVar35;
        *(dword **)(puVar13 + -0x20) = unaff_x20;
        *(dword **)(puVar13 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar13 + -0x10) = puVar41;
        *(code **)(puVar13 + -8) = pcVar44;
        ppdVar42 = (dword **)(puVar13 + -0x10);
        unaff_x22 = (dword *)0x3ebc000;
        pdVar35 = pdVar21;
        if ((bRam0000000003ebc651 & 1) == 0) {
          func_0x00f78a20(0x3d2a5c0);
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc651 = 1;
        }
        if (*(long *)(unaff_x21 + 0x1a) != 0) {
          pdVar35 = (dword *)(ulong)((uint)pdVar21 ^ 1);
          pdVar30 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(unaff_x21 + 0x1a),pdVar20,pdVar35,0);
          lVar40 = *(long *)(unaff_x21 + 0x1c);
          unaff_x22 = (dword *)0x0;
          if (lVar40 != 0) {
            uVar18 = auVar51._8_4_;
            if (*(uint *)(lVar40 + 0x18) <= uVar18) {
              pdVar30 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if ((*(long *)(*(long *)(lVar40 + 0x10) + (long)(int)uVar18 * 0x28 + 0x28) == 0) ||
               (unaff_x22 = *(dword **)(unaff_x21 + 0xc), unaff_x22 == (dword *)0x0)) {
              return pdVar30;
            }
            lVar40 = *(long *)(unaff_x21 + 0x1c);
            unaff_x21 = (dword *)0x0;
            if (lVar40 != 0) {
              if (*(uint *)(lVar40 + 0x18) <= uVar18) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              plVar33 = *(long **)(*(long *)(lVar40 + 0x10) + (long)(int)uVar18 * 0x28 + 0x28);
              *(undefined8 *)(puVar13 + -0x60) = unaff_x28;
              *(undefined8 *)(puVar13 + -0x58) = unaff_x27;
              *(undefined8 *)(puVar13 + -0x50) = unaff_x26;
              *(undefined8 *)(puVar13 + -0x48) = unaff_x25;
              *(undefined8 *)(puVar13 + -0x40) = *(undefined8 *)(puVar13 + -0x40);
              *(undefined8 *)(puVar13 + -0x38) = *(undefined8 *)(puVar13 + -0x38);
              *(undefined8 *)(puVar13 + -0x30) = *(undefined8 *)(puVar13 + -0x30);
              *(undefined8 *)(puVar13 + -0x28) = *(undefined8 *)(puVar13 + -0x28);
              *(undefined8 *)(puVar13 + -0x20) = *(undefined8 *)(puVar13 + -0x20);
              *(undefined8 *)(puVar13 + -0x18) = *(undefined8 *)(puVar13 + -0x18);
              *(undefined8 *)(puVar13 + -0x10) = *(undefined8 *)(puVar13 + -0x10);
              *(undefined8 *)(puVar13 + -8) = *(undefined8 *)(puVar13 + -8);
              *(dword **)(puVar13 + -0x68) = unaff_x22;
              lVar40 = *(long *)(unaff_x22 + 0x1a);
              if (lVar40 == 0) {
                puVar41 = puVar13 + -0x68;
                lVar25 = 1;
              }
              else {
                lVar25 = *(long *)(lVar40 + 0x18);
                if (lVar25 == 0) {
                  return unaff_x22;
                }
                puVar41 = (undefined1 *)(lVar40 + 0x20);
              }
              lVar40 = 0;
              do {
                lVar29 = *(long *)(puVar41 + lVar40 * 8);
                pcVar44 = *(code **)(lVar29 + 0x10);
                plVar32 = *(long **)(lVar29 + 0x20);
                lVar29 = *(long *)(lVar29 + 0x28);
                if (*(short *)(lVar29 + 0x48) == -1) {
                  func_0x00f78ad8(lVar29);
                }
                iVar19 = func_0x00f78a4c(lVar29);
                bVar15 = *(char *)(lVar29 + 0x4a) == '\x03';
                if (iVar19 == 0) {
                  if (bVar15) {
                    if (plVar32 == (long *)0x0) {
code_r0x01e71bbc:
                      pdVar35 = (dword *)(*pcVar44)(plVar33,pdVar20,pdVar21,lVar29);
                    }
                    else {
                      if (((*(short *)(lVar29 + 0x48) == -1) ||
                          ((*(byte *)(*plVar32 + 0x115) & 1) != 0)) ||
                         (*(long *)(unaff_x22 + 6) == 0)) goto code_r0x01e71aac;
                      iVar19 = func_0x00f78a44(lVar29);
                      iVar17 = func_0x00f78ec0(lVar29);
                      if (iVar19 == 0) {
                        uVar3 = *(ushort *)(lVar29 + 0x48);
                        if (iVar17 == 0) {
                          lVar29 = *plVar32 + (ulong)uVar3 * 0x10;
                          pdVar35 = (dword *)(**(code **)(lVar29 + 0x138))
                                                       (plVar32,plVar33,pdVar20,pdVar21,
                                                        *(undefined8 *)(lVar29 + 0x140));
                          goto code_r0x01e71bd0;
                        }
                        lVar29 = func_0x00f78a48(lVar29);
                        lVar36 = *plVar32;
                        uVar28 = (ulong)*(ushort *)(lVar36 + 0x12a);
                        if (uVar28 != 0) {
                          piVar37 = (int *)(*(long *)(lVar36 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar37 + -2) == lVar29) {
                              puVar24 = (undefined8 *)
                                        (lVar36 + (long)(int)(*piVar37 + (uint)uVar3) * 0x10 + 0x138
                                        );
                              goto code_r0x01e71d74;
                            }
                            piVar37 = piVar37 + 4;
                            uVar28 = uVar28 - 1;
                          } while (uVar28 != 0);
                        }
                        puVar24 = (undefined8 *)func_0x00fac1f0(plVar32,lVar29,(ulong)uVar3);
code_r0x01e71d74:
                        pcVar44 = (code *)*puVar24;
                        puVar24 = (undefined8 *)puVar24[1];
                      }
                      else {
                        if (iVar17 == 0) {
                          uVar31 = *(undefined8 *)
                                    (*plVar32 + (ulong)*(ushort *)(lVar29 + 0x48) * 0x10 + 0x140);
                        }
                        else {
                          lVar36 = *plVar32;
                          uVar28 = (ulong)*(ushort *)(lVar36 + 0x12a);
                          if (uVar28 != 0) {
                            piVar37 = (int *)(*(long *)(lVar36 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar37 + -2) == *(long *)(lVar29 + 0x18)) {
                                lVar36 = lVar36 + (long)(int)(*piVar37 +
                                                             (uint)*(ushort *)(lVar29 + 0x48)) *
                                                  0x10 + 0x138;
                                goto code_r0x01e71d4c;
                              }
                              piVar37 = piVar37 + 4;
                              uVar28 = uVar28 - 1;
                            } while (uVar28 != 0);
                          }
                          lVar36 = func_0x00fac1f0(plVar32);
code_r0x01e71d4c:
                          uVar31 = *(undefined8 *)(lVar36 + 8);
                        }
                        puVar24 = (undefined8 *)func_0x00f78acc(uVar31,lVar29);
                        pcVar44 = (code *)*puVar24;
                      }
                      pdVar35 = (dword *)(*pcVar44)(plVar32,plVar33,pdVar20,pdVar21,puVar24);
                    }
                  }
                  else {
                    if ((*(short *)(lVar29 + 0x48) == -1) || (*(long *)(unaff_x22 + 6) == 0))
                    goto code_r0x01e71bbc;
                    iVar19 = func_0x00f78a44(lVar29);
                    iVar17 = func_0x00f78ec0(lVar29);
                    if (iVar19 == 0) {
                      uVar3 = *(ushort *)(lVar29 + 0x48);
                      if (iVar17 == 0) {
                        lVar29 = *plVar33 + (ulong)uVar3 * 0x10;
                        pdVar35 = (dword *)(**(code **)(lVar29 + 0x138))
                                                     (plVar33,pdVar20,pdVar21,
                                                      *(undefined8 *)(lVar29 + 0x140));
                        goto code_r0x01e71bd0;
                      }
                      lVar29 = func_0x00f78a48(lVar29);
                      lVar36 = *plVar33;
                      uVar28 = (ulong)*(ushort *)(lVar36 + 0x12a);
                      if (uVar28 != 0) {
                        piVar37 = (int *)(*(long *)(lVar36 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar37 + -2) == lVar29) {
                            puVar24 = (undefined8 *)
                                      (lVar36 + (long)(int)(*piVar37 + (uint)uVar3) * 0x10 + 0x138);
                            goto code_r0x01e71d00;
                          }
                          piVar37 = piVar37 + 4;
                          uVar28 = uVar28 - 1;
                        } while (uVar28 != 0);
                      }
                      puVar24 = (undefined8 *)func_0x00fac1f0(plVar33,lVar29,(ulong)uVar3);
code_r0x01e71d00:
                      pcVar44 = (code *)*puVar24;
                      puVar24 = (undefined8 *)puVar24[1];
                    }
                    else {
                      if (iVar17 == 0) {
                        uVar31 = *(undefined8 *)
                                  (*plVar33 + (ulong)*(ushort *)(lVar29 + 0x48) * 0x10 + 0x140);
                      }
                      else {
                        lVar36 = *plVar33;
                        uVar28 = (ulong)*(ushort *)(lVar36 + 0x12a);
                        if (uVar28 != 0) {
                          piVar37 = (int *)(*(long *)(lVar36 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar37 + -2) == *(long *)(lVar29 + 0x18)) {
                              lVar36 = lVar36 + (long)(int)(*piVar37 +
                                                           (uint)*(ushort *)(lVar29 + 0x48)) * 0x10
                                       + 0x138;
                              goto code_r0x01e71cd8;
                            }
                            piVar37 = piVar37 + 4;
                            uVar28 = uVar28 - 1;
                          } while (uVar28 != 0);
                        }
                        lVar36 = func_0x00fac1f0(plVar33);
code_r0x01e71cd8:
                        uVar31 = *(undefined8 *)(lVar36 + 8);
                      }
                      puVar24 = (undefined8 *)func_0x00f78acc(uVar31,lVar29);
                      pcVar44 = (code *)*puVar24;
                    }
                    pdVar35 = (dword *)(*pcVar44)(plVar33,pdVar20,pdVar21,puVar24);
                  }
                }
                else {
                  if (bVar15) goto code_r0x01e71bbc;
code_r0x01e71aac:
                  pdVar35 = (dword *)(*pcVar44)(plVar32,plVar33,pdVar20,pdVar21,lVar29);
                }
code_r0x01e71bd0:
                lVar40 = lVar40 + 1;
                if (lVar40 == lVar25) {
                  return pdVar35;
                }
              } while( true );
            }
          }
        }
        pcVar44 = (code *)&Core_UI2_UIManager__SetScreenVisible;
        auVar52 = func_0x00f78af4();
        unaff_x19 = pdVar21;
        unaff_x20 = pdVar20;
code_r0x02f88674:
        pdVar20 = auVar52._0_8_;
        *(dword **)((long)ppdVar14 + -0x30) = unaff_x22;
        *(dword **)((long)ppdVar14 + -0x28) = unaff_x21;
        *(dword **)((long)ppdVar14 + -0x20) = unaff_x20;
        *(dword **)((long)ppdVar14 + -0x18) = unaff_x19;
        *(dword ***)((long)ppdVar14 + -0x10) = ppdVar42;
        *(code **)((long)ppdVar14 + -8) = pcVar44;
        pdVar21 = pdVar20;
        if ((bRam0000000003ebc652 & 1) == 0) {
          pdVar21 = (dword *)func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc652 = 1;
        }
        lVar40 = *(long *)(pdVar20 + 0x1c);
        if (lVar40 != 0) {
          uVar18 = auVar52._8_4_;
          if (*(uint *)(lVar40 + 0x18) <= uVar18) {
            pdVar21 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (*(long *)(*(long *)(lVar40 + 0x10) + (long)(int)uVar18 * 0x28 + 0x28) == 0) {
            return pdVar21;
          }
          lVar40 = *(long *)(pdVar20 + 0x1c);
          if (lVar40 != 0) {
            if (*(uint *)(lVar40 + 0x18) <= uVar18) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar40 = *(long *)(*(long *)(lVar40 + 0x10) + (long)(int)uVar18 * 0x28 + 0x28);
            if ((lVar40 != 0) && (plVar33 = *(long **)(lVar40 + 0x28), plVar33 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pdVar21 = (dword *)(**(code **)(*plVar33 + 0x178))
                                           (plVar33,pdVar35,*(undefined8 *)(*plVar33 + 0x180));
              return pdVar21;
            }
          }
        }
        auVar45 = func_0x00f78af4();
        uVar31 = auVar45._0_8_;
        *(long *)((long)ppdVar14 + -0x50) = auVar52._8_8_;
        *(dword **)((long)ppdVar14 + -0x48) = pdVar35;
        *(undefined1 **)((long)ppdVar14 + -0x40) = (undefined1 *)((long)ppdVar14 + -0x10);
        *(undefined **)((long)ppdVar14 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
        *(undefined8 *)((long)ppdVar14 + -0x68) = 0;
        *(undefined8 *)((long)ppdVar14 + -0x70) = 0;
        *(undefined8 *)((long)ppdVar14 + -0x58) = 0;
        *(undefined8 *)((long)ppdVar14 + -0x60) = 0;
        pdVar21 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar31,auVar45._8_8_,
                                           (undefined1 *)((long)ppdVar14 + -0x70));
        if ((int)pdVar21 != 0) {
          /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar31,*(undefined8 *)((long)ppdVar14 + -0x60),
                          *(undefined8 *)((long)ppdVar14 + -0x58));
          *(undefined8 *)((long)ppdVar14 + -0x88) = *(undefined8 *)((long)ppdVar14 + -0x68);
          *(undefined8 *)((long)ppdVar14 + -0x90) = *(undefined8 *)((long)ppdVar14 + -0x70);
          *(undefined8 *)((long)ppdVar14 + -0x78) = *(undefined8 *)((long)ppdVar14 + -0x58);
          *(undefined8 *)((long)ppdVar14 + -0x80) = *(undefined8 *)((long)ppdVar14 + -0x60);
          pdVar21 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar31,(undefined1 *)((long)ppdVar14 + -0x90),1);
        }
        return pdVar21;
      }
    }
  }
  auVar48 = func_0x00f78af4();
  lVar25 = auVar48._8_8_;
  plVar33 = auVar48._0_8_;
  uVar28 = 0x3eb8000;
  uStack_50 = (dword *)param_1;
  pdStack_48 = pdVar21;
  if ((bRam0000000003eb8329 & 1) == 0) {
    func_0x00f78a20(0x3d3b350);
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb8329 = 1;
  }
  uStack_68 = (code *)(ulong)(uint)uStack_68;
  if (plVar33[7] != 0) {
    uVar18 = *(uint *)(plVar33[7] + 0x18);
    uVar28 = (ulong)uVar18;
    pdVar21 = (dword *)(*(code *)**(undefined8 **)
                                   (*(long *)(*(long *)(lVar25 + 0x18) + 0xc0) + 0x30))(plVar33);
    if ((int)uVar18 < 1) {
      if ((int)pdVar21 == 0) {
        return pdVar21;
      }
      lVar29 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar25 + 0x18) + 0xc0) + 0x10))
                         (plVar33);
      if ((lVar29 != 0) && (*(long *)(lVar29 + 0x68) != 0)) {
        pdVar21 = (dword *)/*ModalBehaviour$$get_IsShowing*/ func_0x014969fc(*(long *)(lVar29 + 0x68),0);
        if (((ulong)pdVar21 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x025dfafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pdVar21 = (dword *)(*(code *)**(undefined8 **)
                                         (*(long *)(*(long *)(lVar25 + 0x18) + 0xc0) + 0x50))
                                       (plVar33);
          return pdVar21;
        }
        return pdVar21;
      }
    }
    else {
      if ((int)pdVar21 == 0) {
        return pdVar21;
      }
      pdVar21 = (dword *)(**(code **)(*plVar33 + 0x188))(plVar33,*(undefined8 *)(*plVar33 + 400));
      if ((int)pdVar21 == 0) {
        return pdVar21;
      }
      puVar34 = *(undefined8 **)(*(long *)(*(long *)(lVar25 + 0x18) + 0xc0) + 0x40);
      pdVar21 = (dword *)(*(code *)*puVar34)(plVar33,(long)&uStack_68 + 4);
      if ((int)pdVar21 == 0) {
        return pdVar21;
      }
      uVar28 = plVar33[7];
      if (uVar28 != 0) {
        lVar40 = (long)(int)uStack_68._4_4_;
        uVar26 = uVar28;
        if (uStack_68._4_4_ < *(uint *)(uVar28 + 0x18)) {
LAB_025dfa50:
          uVar31 = *(undefined8 *)(*(long *)(uVar28 + 0x10) + lVar40 * 8 + 0x20);
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(uVar26,uStack_68._4_4_,uRam0000000003d3b350);
          pdVar21 = (dword *)(*(code *)**(undefined8 **)
                                         (*(long *)(*(long *)(lVar25 + 0x18) + 0xc0) + 0x48))
                                       (plVar33,uVar31);
          return pdVar21;
        }
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        uVar26 = plVar33[7];
        if (uVar26 != 0) goto LAB_025dfa50;
      }
    }
  }
  auVar45 = func_0x00f78af4();
  pcStack_78 = 
  Atlas_UI_ModalManager_LeagueStarsBoxScreen__LeagueStarsBoxScreenViewBehaviour___CanShowModal;
  if (auVar45._0_8_ != 0) {
    uVar18 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar45._8_8_ + 0x18) + 0xc0) + 0x58))
                       ();
    return (dword *)(ulong)(uVar18 ^ 1);
  }
  auVar45 = func_0x00f78af4();
  pcStack_88 = Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___HideCurrentModal;
  apdStack_a8[3] = (dword *)&stack0xffffffffffffff80;
  auVar4 = auVar48;
  if (auVar45._0_8_ != 0) {
    apdStack_a8[1] = (dword *)lVar25;
    apdStack_a8[2] = (dword *)plVar33;
    apdStack_a8[3] = (dword *)&stack0xffffffffffffff80;
    pdVar21 = (dword *)(*(code *)**(undefined8 **)
                                   (*(long *)(*(long *)(auVar45._8_8_ + 0x18) + 0xc0) + 0x30))();
    if ((int)pdVar21 == 0) {
      return pdVar21;
    }
    lVar25 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar45._8_8_ + 0x18) + 0xc0) + 0x10))
                       (auVar45._0_8_);
    auVar5._8_8_ = apdStack_a8[1];
    auVar5._0_8_ = apdStack_a8[2];
    auVar4._8_8_ = apdStack_a8[1];
    auVar4._0_8_ = apdStack_a8[2];
    auVar48 = auVar45;
    if ((lVar25 != 0) &&
       (plVar33 = *(long **)(lVar25 + 0x68), auVar4 = auVar5, plVar33 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x025dfb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pdVar21 = (dword *)(**(code **)(*plVar33 + 0x1a8))(plVar33,*(undefined8 *)(*plVar33 + 0x1b0));
      return pdVar21;
    }
  }
  apdStack_a8[1] = auVar4._8_8_;
  apdStack_a8[2] = auVar4._0_8_;
  auVar45 = func_0x00f78af4();
  plVar32 = auVar45._8_8_;
  plVar33 = auVar45._0_8_;
  apdStack_a8[0] =
       (dword *)
       Atlas_UI_ModalManager_LeagueStarsBoxScreen__LeagueStarsBoxScreenViewBehaviour___QueueModal;
  puVar24 = puVar34;
  lStack_d0 = lVar40;
  uStack_c8 = uVar28;
  ppdStack_b0 = apdStack_a8 + 3;
  if ((bRam0000000003eb832a & 1) == 0) {
    pdStack_c0 = auVar48._8_8_;
    lStack_b8 = auVar48._0_8_;
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    auVar48._8_8_ = pdStack_c0;
    auVar48._0_8_ = lStack_b8;
    bRam0000000003eb832a = 1;
  }
  pdStack_c0 = auVar48._8_8_;
  lStack_b8 = auVar48._0_8_;
  if (plVar32 != (long *)0x0) {
    uVar31 = (**(code **)(*plVar32 + 0x178))(plVar32,*(undefined8 *)(*plVar32 + 0x180));
    puVar24 = (undefined8 *)0x0;
    uVar31 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar31);
    auVar48._8_8_ = pdStack_c0;
    auVar48._0_8_ = lStack_b8;
    if (plVar33 != (long *)0x0) {
      puVar24 = *(undefined8 **)(*(long *)(puVar34[3] + 0xc0) + 8);
      (*(code *)*puVar24)(plVar33,uVar31);
      auVar48._8_8_ = pdStack_c0;
      auVar48._0_8_ = lStack_b8;
      if (plVar33[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar33[7],plVar32,uRam0000000003d3b330);
        auVar48._8_8_ = pdStack_c0;
        auVar48._0_8_ = lStack_b8;
        puVar24 = (undefined8 *)plVar33[8];
        if ((puVar24 == (undefined8 *)0x0) || ((int)plVar32[2] <= *(int *)(puVar24 + 2))) {
LAB_025dfcb4:
          pdVar21 = (dword *)(*(code *)**(undefined8 **)(*(long *)(puVar34[3] + 0xc0) + 0x30))
                                       (plVar33);
          if (((ulong)pdVar21 & 1) != 0) {
            return pdVar21;
          }
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pdVar21 = (dword *)(**(code **)(*plVar33 + 0x1a8))
                                       (plVar33,*(undefined8 *)(*plVar33 + 0x1b0));
          return pdVar21;
        }
        if (plVar33[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar33[7],0,puVar24,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(puVar34[3] + 0xc0) + 0x60))(plVar33);
          goto LAB_025dfcb4;
        }
      }
    }
  }
  pdStack_c0 = auVar48._8_8_;
  lStack_b8 = auVar48._0_8_;
  auVar45 = func_0x00f78af4();
  plVar33 = auVar45._8_8_;
  lVar40 = auVar45._0_8_;
  if ((plVar33 != (long *)0x0) &&
     (uVar31 = (**(code **)(*plVar33 + 0x178))(plVar33,*(undefined8 *)(*plVar33 + 0x180)),
     lVar40 != 0)) {
    uVar18 = (*(code *)**(undefined8 **)(*(long *)(puVar24[3] + 0xc0) + 0x70))(lVar40,uVar31);
    if ((uVar18 & 1) == 0) {
      (*(code *)**(undefined8 **)(*(long *)(puVar24[3] + 0xc0) + 0x78))(lVar40,plVar33);
    }
    return (dword *)(ulong)(uVar18 ^ 1);
  }
  auVar45 = func_0x00f78af4();
  iVar19 = 0x3eb8000;
  if ((bRam0000000003eb832b & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb832b = 1;
  }
  lVar40 = *(long *)(auVar45._0_8_ + 0x38);
  if (lVar40 != 0) {
    iVar19 = *(int *)(lVar40 + 0x18);
    if (iVar19 < 1) goto LAB_025dfe48;
    uVar18 = 0;
    iVar17 = -0x80000000;
    uVar16 = 0;
    do {
      if (*(uint *)(lVar40 + 0x18) <= uVar18) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar40 = *(long *)(*(long *)(lVar40 + 0x10) + (long)(int)uVar18 * 8 + 0x20);
      if (lVar40 == 0) break;
      iVar1 = *(int *)(lVar40 + 0x10);
      uVar39 = uVar18;
      if (iVar1 <= iVar17) {
        uVar39 = uVar16;
      }
      if (iVar19 - 1U == uVar18) goto LAB_025dfe4c;
      if (iVar1 <= iVar17) {
        iVar1 = iVar17;
      }
      lVar40 = *(long *)(auVar45._0_8_ + 0x38);
      uVar18 = uVar18 + 1;
      iVar17 = iVar1;
      uVar16 = uVar39;
    } while (lVar40 != 0);
  }
  func_0x00f78af4();
LAB_025dfe48:
  uVar39 = 0;
LAB_025dfe4c:
  *auVar45._8_8_ = uVar39;
  return (dword *)(ulong)(0 < iVar19);
code_r0x015852d8:
  do {
    uVar28 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar6 + -0x88,uRam0000000003d337d0);
    if ((uVar28 & 1) == 0) goto code_r0x0158531c;
    plVar33 = *(long **)(puVar6 + -0x78);
    if (plVar33 == (long *)0x0) {
      func_0x00f78af4();
code_r0x01585388:
                    /* WARNING: Does not return */
      pcVar44 = (code *)SoftwareBreakpoint(1,0x158538c);
      (*pcVar44)();
    }
    lVar40 = *(long *)(lVar25 + 0x18);
    uVar31 = (**(code **)(*plVar33 + 0x178))(plVar33,*(undefined8 *)(*plVar33 + 0x180));
    if (lVar40 == 0) {
      func_0x00f78af4(uVar31,uVar31);
      goto code_r0x01585388;
    }
    uVar28 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar40,uVar31,0);
  } while ((uVar28 & 1) != 0);
  unaff_x22 = (dword *)0x0;
code_r0x0158531c:
  *(undefined4 *)((ulong)(puVar6 + -0xa0) | unaff_x23 << 2) = 0xc6;
  *(int *)(puVar6 + -0x90) = *(int *)(puVar6 + -0x90) + 1;
  pdVar21 = (dword *)/*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar6 + -0x88,uRam0000000003d337c8);
  if ((int)unaff_x22 != 0) {
    pdVar21 = (dword *)Atlas_FrontEnd_FTUEManager__MarkStageAsCompleted(lVar25,lVar29,1,0,0);
  }
  return pdVar21;
}



// ============================================================
// RVA: 0x1509c4c | Atlas.UI.ToolTipManager.OnModalHidden
// ============================================================

ulong Atlas_UI_ToolTipManager__OnModalHidden(long param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  uint uVar5;
  long lVar14;
  int extraout_w1;
  int extraout_w1_00;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 unaff_x21;
  undefined8 uVar18;
  ulong unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar19;
  code *pcVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  if (param_2 != (long *)0x0) {
    lVar16 = *(long *)(param_1 + 0x48);
    uVar7 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
    if (lVar16 != 0) {
      /*Atlas.Stats.UnlockManager$$AddUnlockedIfNotExist*/ func_0x01521f20(lVar16,uVar7,0,0);
      lVar16 = *(long *)(param_1 + 0x50);
      if (lVar16 != 0) {
        puVar19 = &stack0xfffffffffffffff0;
        uVar7 = 0x3eb5000;
        if ((bRam0000000003eb50cd & 1) == 0) {
          func_0x00f78a20(0x3d32470,0);
          func_0x00f78a20(0x3d32478);
          func_0x00f78a20(0x3d32480);
          func_0x00f78a20(0x3d3a5d8);
          bRam0000000003eb50cd = 1;
        }
        if (*(long *)(lVar16 + 0x40) != 0) {
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&stack0xffffffffffffffb8,*(long *)(lVar16 + 0x40),uRam0000000003d3a5d8);
          while (uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&stack0xffffffffffffffb8,uRam0000000003d32478),
                (uVar8 & 1) != 0) {
            Atlas_FrontEnd_FTUEManager__EvaluateStage(lVar16,0);
          }
          uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&stack0xffffffffffffffb8,uRam0000000003d32470);
          return uVar8;
        }
        func_0x00f78af4();
        if (extraout_w1 == 1) {
          plVar9 = (long *)___cxa_begin_catch();
          lVar16 = *plVar9;
          ___cxa_end_catch();
          uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&stack0xffffffffffffffb8,uRam0000000003eb5000);
          if (lVar16 == 0) {
            return uVar8;
          }
          func_0x00f78ac0(lVar16,0);
        }
        pcVar20 = Atlas_FrontEnd_FTUEManager__EvaluateStage;
        auVar21 = __Unwind_Resume();
        puVar1 = &stack0xffffffffffffffb0;
        do {
          lVar15 = auVar21._8_8_;
          lVar14 = auVar21._0_8_;
          *(undefined8 *)(puVar1 + -0x50) = unaff_x26;
          *(undefined8 *)(puVar1 + -0x48) = unaff_x25;
          *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
          *(long *)(puVar1 + -0x38) = unaff_x23;
          *(ulong *)(puVar1 + -0x30) = unaff_x22;
          *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
          *(undefined8 *)(puVar1 + -0x20) = uVar7;
          *(long *)(puVar1 + -0x18) = lVar16;
          *(undefined1 **)(puVar1 + -0x10) = puVar19;
          *(code **)(puVar1 + -8) = pcVar20;
          unaff_x24 = 0x3d23990;
          if ((bRam0000000003eb50ce & 1) == 0) {
            func_0x00f78a20(0x3d2dbf0);
            func_0x00f78a20(0x3d2dbf8);
            func_0x00f78a20(0x3d337c8);
            func_0x00f78a20(0x3d33438);
            func_0x00f78a20(0x3d337d0);
            func_0x00f78a20(0x3d33440);
            func_0x00f78a20(0x3d337d8);
            func_0x00f78a20(0x3d33448);
            func_0x00f78a20(0x3d3d1b0);
            func_0x00f78a20(0x3d3dc70);
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb50ce = 1;
          }
          *(undefined8 *)(puVar1 + -0x70) = 0;
          *(undefined8 *)(puVar1 + -0x68) = 0;
          *(undefined8 *)(puVar1 + -0x60) = 0;
          *(undefined8 *)(puVar1 + -0x88) = 0;
          *(undefined8 *)(puVar1 + -0x80) = 0;
          *(undefined8 *)(puVar1 + -0x78) = 0;
          *(undefined4 *)(puVar1 + -0x90) = 0;
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar8 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar15,0,0);
          if ((uVar8 & 1) != 0) {
            return uVar8;
          }
          uVar10 = Atlas_FrontEnd_FTUEManager__IsStageUnlocked(lVar14,lVar15);
          uVar8 = Atlas_FrontEnd_FTUEManager__IsStageComplete(lVar14,lVar15);
          if ((int)uVar10 == 0) {
            return uVar8;
          }
          if ((int)uVar8 != 0) {
            return uVar8;
          }
          if (lVar15 == 0) goto code_r0x0158538c;
          if (*(long *)(lVar15 + 0x60) == 0) goto code_r0x0158538c;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar1 + -0xb8,*(long *)(lVar15 + 0x60),uRam0000000003d3d1b0);
          *(undefined8 *)(puVar1 + -0x68) = *(undefined8 *)(puVar1 + -0xb0);
          *(undefined8 *)(puVar1 + -0x70) = *(undefined8 *)(puVar1 + -0xb8);
          *(undefined8 *)(puVar1 + -0x60) = *(undefined8 *)(puVar1 + -0xa8);
          unaff_x25 = 0x3d33440;
          do {
            do {
              uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar1 + -0x70,uRam0000000003d33440);
              if ((uVar10 & 1) == 0) goto code_r0x01585278;
              lVar16 = *(long *)(puVar1 + -0x60);
              if (lVar16 == 0) {
                func_0x00f78af4();
                goto code_r0x01585388;
              }
              lVar11 = /*Atlas.Definitions.FTUEStageDefinition.FTUEEvent$$get_EventDefinition*/ func_0x0154bfc4(lVar16,0);
              uVar7 = *(undefined8 *)(lVar11 + 8);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
            } while ((uVar8 & 1) == 0);
            lVar11 = *(long *)(lVar14 + 0x18);
            puVar12 = (undefined8 *)/*Atlas.Definitions.FTUEStageDefinition.FTUEEvent$$get_EventDefinition*/ func_0x0154bfc4(lVar16,0);
            if (lVar11 == 0) {
              func_0x00f78af4();
              goto code_r0x01585388;
            }
            iVar4 = /*Atlas.Stats.UnlockManager$$GetChallengesCompletedCountForEvent*/ func_0x015201f4(lVar11,*puVar12,0);
          } while (*(int *)(lVar16 + 0x20) <= iVar4);
code_r0x01585278:
          *(undefined4 *)(puVar1 + -0xa0) = 0x7e;
          unaff_x22 = (ulong)((uint)uVar10 ^ 1);
          unaff_x23 = 1;
          *(undefined4 *)(puVar1 + -0x90) = 1;
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar1 + -0x70,uRam0000000003d33438);
          if (*(int *)(puVar1 + -0xa0) == 0x7e) {
            unaff_x23 = 0;
            *(undefined4 *)(puVar1 + -0x90) = 0;
          }
          while( true ) {
            if (*(long *)(lVar15 + 0x58) != 0) {
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar1 + -0x88,*(long *)(lVar15 + 0x58),uRam0000000003d3dc70);
              goto code_r0x015852d8;
            }
code_r0x0158538c:
            func_0x00f78af4();
            if (extraout_w1_00 != 1) break;
            puVar13 = (ulong *)___cxa_begin_catch();
            uVar10 = *puVar13;
            ___cxa_end_catch();
            /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar1 + -0x70,uRam0000000003d33438);
            if (uVar10 != 0) goto code_r0x01585428;
            unaff_x23 = 0;
            unaff_x22 = 1;
          }
          __Unwind_Resume();
code_r0x01585428:
          auVar22 = func_0x00f78ac0(uVar10,0);
          lVar16 = auVar22._0_8_;
          *(ulong *)(puVar1 + -0xf0) = unaff_x22;
          *(ulong *)(puVar1 + -0xe8) = uVar10;
          *(undefined1 (*) [16])(puVar1 + -0xe0) = auVar21;
          *(undefined1 **)(puVar1 + -0xd0) = puVar1 + -0x10;
          *(code **)(puVar1 + -200) = Atlas_FrontEnd_FTUEManager__EvaluateStage;
          if ((bRam0000000003eb50cf & 1) == 0) {
            func_0x00f78a20(0x3d57280);
            bRam0000000003eb50cf = 1;
          }
          if ((*(long *)(lVar16 + 0x10) == 0) ||
             (lVar14 = *(long *)(*(long *)(lVar16 + 0x10) + 0x10), lVar14 == 0)) {
            auVar21 = func_0x00f78af4();
            uVar7 = auVar21._0_8_;
            puVar2 = puVar1 + -0x120;
            *(ulong *)(puVar1 + -0x120) = unaff_x22;
            *(undefined8 *)(puVar1 + -0x118) = 0x3eb5000;
            *(long *)(puVar1 + -0x110) = auVar22._8_8_;
            *(long *)(puVar1 + -0x108) = lVar16;
            *(undefined1 **)(puVar1 + -0x100) = puVar1 + -0xd0;
            *(code **)(puVar1 + -0xf8) = Atlas_FrontEnd_FTUEManager__IsStageUnlocked;
            puVar19 = puVar1 + -0x100;
            uVar18 = 0x3eb5000;
            if ((bRam0000000003eb50d0 & 1) == 0) {
              func_0x00f78a20(0x3d21270);
              bRam0000000003eb50d0 = 1;
            }
            if (auVar21._8_8_ == 0) {
              pcVar20 = Atlas_FrontEnd_FTUEManager__IsStageUnlocked;
              auVar22 = func_0x00f78af4();
              uVar17 = 0;
            }
            else {
              uVar18 = *(undefined8 *)(auVar21._8_8_ + 0x18);
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar18,0);
              auVar22._8_8_ = uVar18;
              auVar22._0_8_ = uVar7;
              puVar19 = *(undefined1 **)(puVar1 + -0x100);
              pcVar20 = *(code **)(puVar1 + -0xf8);
              uVar17 = *(undefined8 *)(puVar1 + -0x110);
              uVar7 = *(undefined8 *)(puVar1 + -0x108);
              puVar2 = puVar1 + -0xf0;
              unaff_x22 = *(ulong *)(puVar1 + -0x120);
              uVar18 = *(undefined8 *)(puVar1 + -0x118);
            }
            lVar16 = auVar22._0_8_;
            *(undefined8 *)(puVar2 + -0x20) = uVar17;
            *(undefined8 *)(puVar2 + -0x18) = uVar7;
            *(undefined1 **)(puVar2 + -0x10) = puVar19;
            *(code **)(puVar2 + -8) = pcVar20;
            if (*(long *)(lVar16 + 0x18) == 0) {
              auVar21 = func_0x00f78af4(0,auVar22._8_8_);
              uVar7 = auVar21._0_8_;
              puVar3 = puVar2 + -0x50;
              *(ulong *)(puVar2 + -0x50) = unaff_x22;
              *(undefined8 *)(puVar2 + -0x48) = uVar18;
              *(undefined8 *)(puVar2 + -0x40) = uVar17;
              *(long *)(puVar2 + -0x38) = lVar16;
              *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
              *(code **)(puVar2 + -0x28) = Atlas_FrontEnd_FTUEManager__IsStageComplete;
              puVar19 = puVar2 + -0x30;
              uVar18 = 0x3eb5000;
              if ((bRam0000000003eb50d1 & 1) == 0) {
                func_0x00f78a20(0x3d21270);
                bRam0000000003eb50d1 = 1;
              }
              if (auVar21._8_8_ == 0) {
                pcVar20 = Atlas_FrontEnd_FTUEManager__IsStageComplete;
                auVar23 = func_0x00f78af4();
                uVar17 = 0;
              }
              else {
                uVar18 = *(undefined8 *)(auVar21._8_8_ + 0x18);
                if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar18,0);
                auVar23._8_8_ = uVar18;
                auVar23._0_8_ = uVar7;
                puVar19 = *(undefined1 **)(puVar2 + -0x30);
                pcVar20 = *(code **)(puVar2 + -0x28);
                uVar17 = *(undefined8 *)(puVar2 + -0x40);
                uVar7 = *(undefined8 *)(puVar2 + -0x38);
                puVar3 = puVar2 + -0x20;
                unaff_x22 = *(ulong *)(puVar2 + -0x50);
                uVar18 = *(undefined8 *)(puVar2 + -0x48);
              }
              lVar16 = auVar23._0_8_;
              *(undefined8 *)(puVar3 + -0x20) = uVar17;
              *(undefined8 *)(puVar3 + -0x18) = uVar7;
              *(undefined1 **)(puVar3 + -0x10) = puVar19;
              *(code **)(puVar3 + -8) = pcVar20;
              if (*(long *)(lVar16 + 0x18) == 0) {
                auVar21 = func_0x00f78af4(0,auVar23._8_8_);
                lVar14 = auVar21._0_8_;
                *(ulong *)(puVar3 + -0x50) = unaff_x22;
                *(undefined8 *)(puVar3 + -0x48) = uVar18;
                *(undefined8 *)(puVar3 + -0x40) = uVar17;
                *(long *)(puVar3 + -0x38) = lVar16;
                *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
                *(code **)(puVar3 + -0x28) =
                     Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete;
                if ((bRam0000000003eb50d2 & 1) == 0) {
                  func_0x00f78a20(0x3d57280);
                  bRam0000000003eb50d2 = 1;
                }
                if ((*(long *)(lVar14 + 0x10) != 0) &&
                   (lVar16 = *(long *)(*(long *)(lVar14 + 0x10) + 0x10), lVar16 != 0)) {
                  uVar7 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar16,auVar21._8_8_,uRam0000000003d57280);
                  uVar5 = Atlas_FrontEnd_FTUEManager__IsStageUnlocked(lVar14,uVar7);
                  uVar6 = Atlas_FrontEnd_FTUEManager__IsStageComplete(lVar14,uVar7);
                  return (ulong)(uVar5 & (uVar6 ^ 1));
                }
                lVar16 = func_0x00f78af4();
                return (ulong)*(byte *)(lVar16 + 0x48);
              }
              uVar5 = /*Atlas.Stats.UnlockManager$$IsUnlockUnseen*/ func_0x015217ac(*(long *)(lVar16 + 0x18),auVar23._8_8_,0);
              return (ulong)((uint)(*(char *)(lVar16 + 0x48) != '\0') | uVar5 ^ 1);
            }
            uVar5 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(lVar16 + 0x18),auVar22._8_8_,0);
            return (ulong)(*(char *)(lVar16 + 0x48) != '\0' | uVar5);
          }
          uVar7 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar14,auVar22._8_8_,uRam0000000003d57280);
          auVar21._8_8_ = uVar7;
          auVar21._0_8_ = lVar16;
          puVar19 = *(undefined1 **)(puVar1 + -0xd0);
          pcVar20 = *(code **)(puVar1 + -200);
          uVar7 = *(undefined8 *)(puVar1 + -0xe0);
          lVar16 = *(long *)(puVar1 + -0xd8);
          unaff_x22 = *(ulong *)(puVar1 + -0xf0);
          unaff_x21 = *(undefined8 *)(puVar1 + -0xe8);
          puVar1 = puVar1 + -0xc0;
        } while( true );
      }
    }
  }
  uVar8 = func_0x00f78af4();
  if ((bRam0000000003eb4d3f & 1) == 0) {
    func_0x00f78a20(0x3d3e158);
    bRam0000000003eb4d3f = 1;
  }
  if ((bRam0000000003eb8334 & 1) == 0) {
    func_0x00f78a20(0x3d3b328,uRam0000000003d3e158);
    func_0x00f78a20(0x3d1dbe8);
    bRam0000000003eb8334 = 1;
  }
  uVar7 = func_0x00f78aec(/*System.Collections.Generic.List<ModalData>_TypeInfo*/ uRam0000000003d1dbe8);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar7,uRam0000000003d3b328);
  *(undefined8 *)(uVar8 + 0x38) = uVar7;
  return uVar8;
code_r0x015852d8:
  do {
    uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar1 + -0x88,uRam0000000003d337d0);
    if ((uVar8 & 1) == 0) goto code_r0x0158531c;
    plVar9 = *(long **)(puVar1 + -0x78);
    if (plVar9 == (long *)0x0) {
      func_0x00f78af4();
code_r0x01585388:
                    /* WARNING: Does not return */
      pcVar20 = (code *)SoftwareBreakpoint(1,0x158538c);
      (*pcVar20)();
    }
    lVar16 = *(long *)(lVar14 + 0x18);
    uVar7 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
    if (lVar16 == 0) {
      func_0x00f78af4(uVar7,uVar7);
      goto code_r0x01585388;
    }
    uVar8 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar16,uVar7,0);
  } while ((uVar8 & 1) != 0);
  unaff_x22 = 0;
code_r0x0158531c:
  *(undefined4 *)((ulong)(puVar1 + -0xa0) | unaff_x23 << 2) = 0xc6;
  *(int *)(puVar1 + -0x90) = *(int *)(puVar1 + -0x90) + 1;
  uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar1 + -0x88,uRam0000000003d337c8);
  if ((int)unaff_x22 != 0) {
    uVar8 = Atlas_FrontEnd_FTUEManager__MarkStageAsCompleted(lVar14,lVar15,1,0,0);
  }
  return uVar8;
}



// ============================================================
// RVA: 0x1509cac | Atlas.UI.ToolTipManager..ctor
// ============================================================

undefined1  [16] Atlas_UI_ToolTipManager___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4d3f & 1) == 0) {
    func_0x00f78a20(0x3d3e158);
    bRam0000000003eb4d3f = 1;
  }
  if ((bRam0000000003eb8334 & 1) == 0) {
    func_0x00f78a20(0x3d3b328,uRam0000000003d3e158);
    func_0x00f78a20(0x3d1dbe8);
    bRam0000000003eb8334 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<ModalData>_TypeInfo*/ uRam0000000003d1dbe8);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar1,uRam0000000003d3b328);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



