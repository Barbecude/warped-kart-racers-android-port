// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.LoadoutMetagameData

// ============================================================
// RVA: 0x1488010 | Atlas.UI.LoadoutMetagameData.get_ID
// ============================================================

undefined8
Atlas_UI_LoadoutMetagameData__get_ID
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (*(long *)(param_1 + 0x38) != 0) {
    return *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18);
  }
  auVar3 = func_0x00f78af4();
  lVar1 = auVar3._0_8_;
  if ((bRam0000000003eb4952 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb4952 = 1;
  }
  *(undefined8 *)(lVar1 + 0x28) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  uVar2 = /*Atlas.UI.MetagameData$$.ctor*/ func_0x0148d648(lVar1,0);
  *(undefined8 *)(lVar1 + 0x30) = param_3;
  *(long *)(lVar1 + 0x38) = auVar3._8_8_;
  *(undefined8 *)(lVar1 + 0x10) = param_4;
  *(undefined8 *)(lVar1 + 0x18) = param_5;
  *(undefined8 *)(lVar1 + 0x20) = param_6;
  return uVar2;
}



// ============================================================
// RVA: 0x1488030 | Atlas.UI.LoadoutMetagameData..ctor
// ============================================================

void Atlas_UI_LoadoutMetagameData___ctor
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  if ((bRam0000000003eb4952 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb4952 = 1;
  }
  *(undefined8 *)(param_1 + 0x28) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  /*Atlas.UI.MetagameData$$.ctor*/ func_0x0148d648(param_1,0);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_4;
  *(undefined8 *)(param_1 + 0x18) = param_5;
  *(undefined8 *)(param_1 + 0x20) = param_6;
  return;
}



// ============================================================
// RVA: 0x14880c8 | Atlas.UI.LoadoutMetagameData..ctor
// ============================================================

void Atlas_UI_LoadoutMetagameData___ctor(long param_1,undefined8 param_2,undefined8 param_3)

{
  if ((bRam0000000003eb4953 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb4953 = 1;
  }
  *(undefined8 *)(param_1 + 0x28) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  /*Atlas.UI.MetagameData$$.ctor*/ func_0x0148d648(param_1,0);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}



// ============================================================
// RVA: 0x1488144 | Atlas.UI.LoadoutMetagameData.get_Thumbnail
// ============================================================

/* WARNING: Possible PIC construction at 0x01488c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014890ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01488978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014890b0) */
/* WARNING: Removing unreachable block (ram,0x014890e4) */
/* WARNING: Removing unreachable block (ram,0x01488c94) */
/* WARNING: Removing unreachable block (ram,0x0148897c) */
/* WARNING: Removing unreachable block (ram,0x01488730) */
/* WARNING: Removing unreachable block (ram,0x01489280) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_UI_LoadoutMetagameData__get_Thumbnail(long param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  int *piVar16;
  ulong *puVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_160 [12];
  uint uStack_154;
  ulong *puStack_150;
  int aiStack_148 [8];
  uint uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  long alStack_110 [6];
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined1 **ppuStack_20;
  undefined *puStack_18;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    return *(ulong *)(*(long *)(param_1 + 0x30) + 0x58);
  }
  lVar6 = func_0x00f78af4();
  puStack_18 = &Atlas_UI_LoadoutMetagameData__get_DisplayName;
  if ((bRam0000000003eb4954 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb4954 = 1;
  }
  ppuStack_20 = (undefined1 **)&stack0xfffffffffffffff0;
  lVar7 = *(long *)(lVar6 + 0x20);
  if (lVar7 == 0) {
    return **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  if (*(long *)(lVar6 + 0x30) != 0) {
    lVar6 = *(long *)(*(long *)(lVar6 + 0x30) + 0x30);
    puVar3 = &stack0xfffffffffffffff0;
    goto code_r0x0164feb4;
  }
  lVar6 = func_0x00f78af4();
  if (*(long *)(lVar6 + 0x10) == 0) {
    return 0;
  }
  if (*(long *)(lVar6 + 0x38) != 0) {
    uVar4 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(lVar6 + 0x10),*(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x18),
                            0);
    return (ulong)(uVar4 ^ 1);
  }
  lVar6 = func_0x00f78af4();
  lVar7 = *(long *)(lVar6 + 0x10);
  if (lVar7 == 0) {
    return 0;
  }
  if (*(long *)(lVar6 + 0x38) != 0) {
    uVar15 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x18);
    if ((bRam0000000003eb4e2d & 1) == 0) {
      func_0x00f78a20(0x3d33738);
      func_0x00f78a20(0x3d33740);
      func_0x00f78a20(0x3d33748);
      func_0x00f78a20(0x3d3d950);
      func_0x00f78a20(0x3d29680);
      bRam0000000003eb4e2d = 1;
    }
    lStack_98 = 0;
    uStack_a0 = 0;
    puStack_88 = (undefined *)0x0;
    puStack_90 = (undefined1 *)0x0;
    lVar6 = *(long *)(lVar7 + 0x20);
    if (((lVar6 == 0) || (lVar6 = Atlas_Save_SaveManager__get_SaveData(lVar6,0), lVar6 == 0)) ||
       (*(long *)(lVar6 + 0x38) == 0)) {
      auVar18 = func_0x00f78af4();
    }
    else {
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&uStack_a0,*(long *)(lVar6 + 0x38),uRam0000000003d3d950);
      do {
        uVar14 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&uStack_a0,uRam0000000003d33740);
        if ((uVar14 & 1) == 0) goto code_r0x015218ec;
        if (puStack_90 == (undefined1 *)0x0) {
          func_0x00f78af4();
          goto code_r0x01521928;
        }
        uVar14 = /*System.String$$Equals*/ func_0x029caa48(puStack_90,uVar15,4,0);
      } while ((uVar14 & 1) == 0);
      lVar6 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&stack0xffffffffffffff5f);
      uVar15 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&stack0xffffffffffffff5e);
      auVar18._8_8_ = uVar15;
      auVar18._0_8_ = uVar15;
      if (lVar6 != 0) {
        uVar14 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar6,uVar15,0);
        if ((uVar14 & 1) == 0) {
code_r0x015218ec:
          uVar14 = 0;
        }
        else {
          uVar14 = 1;
        }
        /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_a0,uRam0000000003d33738);
        return uVar14;
      }
    }
    func_0x00f78af4(auVar18._0_8_,auVar18._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x152192c);
    (*pcVar2)();
  }
  lVar6 = func_0x00f78af4();
  if (*(long *)(lVar6 + 0x30) != 0) {
    return (ulong)*(byte *)(*(long *)(lVar6 + 0x30) + 0x61);
  }
  lVar6 = func_0x00f78af4();
  if ((bRam0000000003eb4955 & 1) == 0) {
    func_0x00f78a20(0x3d2dc40);
    bRam0000000003eb4955 = 1;
  }
  if ((*(long *)(lVar6 + 0x30) != 0) &&
     (uVar14 = /*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(*(long *)(lVar6 + 0x30),0), *(long *)(uVar14 + 8) != 0)) {
    return uVar14;
  }
  plVar8 = (long *)func_0x00f78af4();
  puVar3 = auStack_160;
  uStack_a0 = 0x3eb4000;
  puStack_88 = &Atlas_UI_LoadoutMetagameData__UnlockDescription;
  ppuStack_20 = &puStack_90;
  lStack_98 = lVar6;
  puStack_90 = &stack0xffffffffffffff90;
  if ((bRam0000000003eb4956 & 1) == 0) {
    func_0x00f78a20(0x3d20618);
    func_0x00f78a20(0x3d20650);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57548);
    func_0x00f78a20(0x3d57550);
    func_0x00f78a20(0x3d57590);
    func_0x00f78a20(0x3d575b0);
    func_0x00f78a20(0x3d574e0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d22e70);
    func_0x00f78a20(0x3d3fe40);
    func_0x00f78a20(0x3d247f0);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d69a30);
    func_0x00f78a20(0x3d69a28);
    func_0x00f78a20(0x3d69068);
    func_0x00f78a20(0x3d69a10);
    func_0x00f78a20(0x3d69a20);
    func_0x00f78a20(0x3d69a18);
    func_0x00f78a20(0x3d69a08);
    bRam0000000003eb4956 = 1;
  }
  alStack_110[4] = 0;
  alStack_110[5] = 0;
  alStack_110[2] = 0;
  alStack_110[3] = 0;
  alStack_110[0] = 0;
  alStack_110[1] = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_128 = 0;
  puVar17 = (ulong *)(plVar8 + 5);
  iVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar17,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar5 == 0) goto code_r0x014891b4;
  if ((plVar8[3] == 0) ||
     (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar8[3],alStack_110 + 5,uRam0000000003d57548), alStack_110[5] == 0)) {
code_r0x01489254:
    func_0x00f78af4();
code_r0x01489258:
    uVar15 = func_0x00f78b24();
    func_0x00f78ac0(uVar15,0);
  }
  else {
    puStack_150 = puVar17;
    plVar9 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(alStack_110[5],uRam0000000003d3fe40);
    if (plVar9 != (long *)0x0) {
      do {
        lVar6 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar10 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
              goto code_r0x014884f4;
            }
            piVar16 = piVar16 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014884f4:
        uVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar14 & 1) == 0) break;
        lVar6 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar10 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
              goto code_r0x01488550;
            }
            piVar16 = piVar16 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488550:
        plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        if (plVar11 != (long *)0x0) {
          if ((*(byte *)(*plVar11 + 300) < *(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300)) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300) * 8
                       + -8) != /*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618)) {
            func_0x00f78e5c(plVar11,/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
            goto code_r0x014892b8;
          }
        }
        iVar5 = 0;
        while( true ) {
          if (((*(ushort *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xe0) == 0)) {
            func_0x00f78ad0(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
          }
          if (**(int **)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xb8) <= iVar5) {
            uVar14 = *puStack_150;
            goto code_r0x0148868c;
          }
          if (plVar11 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          uVar15 = /*Atlas.Definitions.ChapterDefinition$$GetRankRewardIdByIndex*/ func_0x01540970(plVar11,iVar5,0);
          uVar12 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar12 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar12,0);
          uVar14 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar15,uVar12,0);
          if ((uVar14 & 1) != 0) break;
          iVar5 = iVar5 + 1;
        }
        if (plVar8[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar8[4],/*STR('CHAR_SELECT_UNLOCK_CHAPTER_DESC')*/ uRam0000000003d69a10,alStack_110 + 4,0);
        if (plVar8[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar8[4],plVar11[6],alStack_110 + 3,0);
        uVar14 = /*System.String$$Format*/ func_0x029bc688(alStack_110[4],alStack_110[3],0);
        *puStack_150 = uVar14;
code_r0x0148868c:
        uVar14 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar14,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      } while ((uVar14 & 1) == 0);
      aiStack_148[0] = 199;
      uStack_128 = 1;
      if (plVar9 != (long *)0x0) {
        lVar6 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
              puVar10 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
              goto code_r0x0148871c;
            }
            piVar16 = piVar16 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0148871c:
        (*(code *)*puVar10)(plVar9,puVar10[1]);
      }
      puVar17 = puStack_150;
      if (aiStack_148[0] == 199) {
        uStack_128 = 0;
      }
      uVar4 = (uint)(aiStack_148[0] != 199);
      iVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puStack_150,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar5 != 0) {
        if ((plVar8[3] == 0) ||
           (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar8[3],alStack_110 + 5,uRam0000000003d57550), alStack_110[5] == 0))
        goto code_r0x01489254;
        uStack_154 = uVar4;
        plVar9 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(alStack_110[5],uRam0000000003d3fe40);
        if (plVar9 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        do {
          lVar6 = *plVar9;
          uVar14 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar14 != 0) {
            piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar10 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                goto code_r0x0148882c;
              }
              piVar16 = piVar16 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x0148882c:
          uVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          if ((uVar14 & 1) == 0) break;
          lVar6 = *plVar9;
          uVar14 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar14 != 0) {
            piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                puVar10 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                goto code_r0x01488888;
              }
              piVar16 = piVar16 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488888:
          plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
          if (plVar11 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          if ((*(byte *)(*plVar11 + 300) < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8
                       + -8) != /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
            func_0x00f78e5c(plVar11);
            goto code_r0x014892b8;
          }
          iVar5 = 0;
          do {
            uVar15 = /*Atlas.Definitions.CharacterDefinition$$GetXpRewardIdByIndex*/ func_0x015410f4(plVar11,iVar5,0);
            uVar12 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar12 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar12,0);
            uVar14 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar15,uVar12,0);
            if ((uVar14 & 1) != 0) {
              if (plVar8[4] == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar8[4],/*STR('CHAR_SELECT_UNLOCK_RANK_DESC')*/ uRam0000000003d69a28,alStack_110 + 2,0);
              lVar7 = plVar8[4];
              if (lVar7 == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              lVar6 = plVar11[6];
              puStack_18 = &UNK_0148897c;
              goto code_r0x0164feb4;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 != 3);
          uVar14 = /*System.String$$op_Inequality*/ func_0x029bd9d4(*puStack_150,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
        } while ((uVar14 & 1) == 0);
        puVar17 = puStack_150;
        aiStack_148[(int)uStack_154] = 0x18d;
        uVar1 = uStack_128;
        uVar4 = uStack_128 + 1;
        uStack_128 = uVar4;
        if (plVar9 != (long *)0x0) {
          lVar6 = *plVar9;
          uVar14 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar14 != 0) {
            piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar10 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                goto code_r0x01488a30;
              }
              piVar16 = piVar16 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488a30:
          (*(code *)*puVar10)(plVar9,puVar10[1]);
        }
        if ((uVar4 != 0) && (aiStack_148[(int)uVar1] == 0x18d)) {
          uVar4 = uVar1;
          uStack_128 = uVar1;
        }
      }
      iVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar17,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar5 != 0) {
        if ((plVar8[3] == 0) ||
           (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar8[3],alStack_110 + 5,uRam0000000003d575b0), alStack_110[5] == 0))
        goto code_r0x01489254;
        uStack_154 = uVar4;
        plVar9 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(alStack_110[5],uRam0000000003d3fe40);
        if (plVar9 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        do {
          lVar6 = *plVar9;
          uVar14 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar14 != 0) {
            piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar10 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                goto code_r0x01488b30;
              }
              piVar16 = piVar16 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488b30:
          uVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          if ((uVar14 & 1) == 0) break;
          lVar6 = *plVar9;
          uVar14 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar14 != 0) {
            piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                puVar10 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                goto code_r0x01488b8c;
              }
              piVar16 = piVar16 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488b8c:
          plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
          if (plVar11 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          if ((*(byte *)(*plVar11 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300)) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8
                       + -8) != /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0)) {
            func_0x00f78e5c(plVar11);
            goto code_r0x014892b8;
          }
          lVar6 = plVar11[8];
          if (lVar6 == 0) {
code_r0x014891e0:
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          uVar14 = 0;
          while ((long)uVar14 < (long)(int)*(uint *)(lVar6 + 0x18)) {
            if (*(uint *)(lVar6 + 0x18) <= uVar14) {
              uVar15 = func_0x00f78b24();
              func_0x00f78ac0(uVar15,0);
              goto code_r0x014892b8;
            }
            uVar12 = *(undefined8 *)(lVar6 + uVar14 * 8 + 0x20);
            uVar15 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar15 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar15,0);
            uVar13 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar12,uVar15,0);
            if ((uVar13 & 1) != 0) {
              if (plVar8[4] == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar8[4],/*STR('CHAR_SELECT_UNLOCK_SEASONAL_DESC')*/ uRam0000000003d69a30,alStack_110 + 1,0);
              lVar7 = plVar8[4];
              if (lVar7 == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              lVar6 = plVar11[4];
              puStack_18 = &UNK_01488c94;
              puVar3 = auStack_160;
              goto code_r0x0164feb4;
            }
            uVar14 = uVar14 + 1;
            lVar6 = plVar11[8];
            if (lVar6 == 0) goto code_r0x014891e0;
          }
          uVar14 = /*System.String$$op_Inequality*/ func_0x029bd9d4(*puStack_150,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
        } while ((uVar14 & 1) == 0);
        puVar17 = puStack_150;
        aiStack_148[(int)uStack_154] = 0x260;
        uVar1 = uStack_128;
        uVar4 = uStack_128 + 1;
        uStack_128 = uVar4;
        if (plVar9 != (long *)0x0) {
          lVar6 = *plVar9;
          uVar14 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar14 != 0) {
            piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar10 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                goto code_r0x01488d48;
              }
              piVar16 = piVar16 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488d48:
          (*(code *)*puVar10)(plVar9,puVar10[1]);
        }
        if ((uVar4 != 0) && (aiStack_148[(int)uVar1] == 0x260)) {
          uVar4 = uVar1;
          uStack_128 = uVar1;
        }
      }
      iVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar17,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar5 != 0) {
        lVar6 = plVar8[3];
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar15 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Arcade')*/ uRam0000000003d69068,0);
        if (((lVar6 == 0) ||
            (/*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar6,uVar15,alStack_110,uRam0000000003d574e0), alStack_110[0] == 0))
           || (lVar6 = *(long *)(alStack_110[0] + 0x28), lVar6 == 0)) goto code_r0x01489254;
        if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
          uVar14 = 0;
          uVar13 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
          do {
            if (uVar13 <= uVar14) goto code_r0x01489258;
            uVar12 = *(undefined8 *)(lVar6 + 0x20 + uVar14 * 8);
            uVar15 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar15 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar15,0);
            iVar5 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar12,uVar15,0);
            if (iVar5 != 0) {
              if (plVar8[4] == 0) goto code_r0x01489254;
              /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar8[4],/*STR('CHAR_SELECT_UNLOCK_ARCADE_DESC')*/ uRam0000000003d69a08,&uStack_118,0);
              *puStack_150 = uStack_118;
              break;
            }
            uVar14 = uVar14 + 1;
            uVar13 = (ulong)*(uint *)(lVar6 + 0x18);
          } while ((long)uVar14 < (long)(int)*(uint *)(lVar6 + 0x18));
        }
      }
      puVar17 = puStack_150;
      iVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puStack_150,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar5 == 0) goto code_r0x01489170;
      if ((plVar8[3] != 0) &&
         (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar8[3],alStack_110 + 5,uRam0000000003d57590), alStack_110[5] != 0)) {
        plVar9 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(alStack_110[5],uRam0000000003d3fe40);
        if (plVar9 == (long *)0x0) {
          func_0x00f78af4();
        }
        else {
          do {
            lVar6 = *plVar9;
            uVar14 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar14 != 0) {
              piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                  puVar10 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                  goto code_r0x01488f88;
                }
                piVar16 = piVar16 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488f88:
            uVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
            puVar17 = puStack_150;
            if ((uVar14 & 1) == 0) {
              aiStack_148[(int)uVar4] = 0x378;
              uStack_128 = uStack_128 + 1;
              if (plVar9 == (long *)0x0) goto code_r0x01489170;
              lVar6 = *plVar9;
              uVar14 = (ulong)*(ushort *)(lVar6 + 0x12a);
              if (uVar14 == 0) goto code_r0x01489144;
              piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              goto code_r0x0148912c;
            }
            lVar6 = *plVar9;
            uVar14 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar14 != 0) {
              piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                  puVar10 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                  goto code_r0x01488fe4;
                }
                piVar16 = piVar16 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488fe4:
            plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
            if (plVar11 == (long *)0x0) {
              func_0x00f78af4();
              goto code_r0x014892b8;
            }
            if ((*(byte *)(*plVar11 + 300) < *(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300)) ||
               (*(long *)(*(long *)(*plVar11 + 200) +
                          (ulong)*(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300) * 8 + -8) !=
                /*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70)) {
              func_0x00f78e5c(plVar11);
              goto code_r0x014892b8;
            }
            lVar6 = plVar11[4];
            uVar15 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar15 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar15,0);
            uVar14 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(lVar6,uVar15,0);
          } while ((uVar14 & 1) == 0);
          if (plVar8[4] == 0) {
            func_0x00f78af4();
          }
          else {
            /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar8[4],/*STR('CHAR_SELECT_UNLOCK_LEAGUE_DESC')*/ uRam0000000003d69a20,&uStack_120,0);
            lVar7 = plVar8[4];
            if (lVar7 != 0) {
              lVar6 = plVar11[7];
              puStack_18 = &UNK_014890b0;
              puVar3 = auStack_160;
code_r0x0164feb4:
              *(undefined1 ***)(puVar3 + -0x10) = ppuStack_20;
              *(undefined **)(puVar3 + -8) = puStack_18;
              *(undefined8 *)(puVar3 + -0x18) = 0;
              /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar7,lVar6,puVar3 + -0x18);
              return *(ulong *)(puVar3 + -0x18);
            }
            func_0x00f78af4();
          }
        }
        goto code_r0x014892b8;
      }
      goto code_r0x01489254;
    }
  }
  func_0x00f78af4();
code_r0x014892b8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14892bc);
  (*pcVar2)();
  while( true ) {
    piVar16 = piVar16 + 4;
    uVar14 = uVar14 - 1;
    if (uVar14 == 0) break;
code_r0x0148912c:
    if (*(long *)(piVar16 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
      puVar10 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
      goto code_r0x01489160;
    }
  }
code_r0x01489144:
  puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01489160:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
code_r0x01489170:
  iVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar17,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar5 == 0) {
code_r0x014891b4:
    return *puVar17;
  }
  if (plVar8[4] != 0) {
    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar8[4],/*STR('CHAR_SELECT_UNLOCK_COMINGSOON')*/ uRam0000000003d69a18,puVar17,0);
    goto code_r0x014891b4;
  }
  goto code_r0x01489254;
}



// ============================================================
// RVA: 0x1488164 | Atlas.UI.LoadoutMetagameData.get_DisplayName
// ============================================================

/* WARNING: Possible PIC construction at 0x01488c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014890ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01488978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014890b0) */
/* WARNING: Removing unreachable block (ram,0x014890e4) */
/* WARNING: Removing unreachable block (ram,0x01488c94) */
/* WARNING: Removing unreachable block (ram,0x0148897c) */
/* WARNING: Removing unreachable block (ram,0x01488730) */
/* WARNING: Removing unreachable block (ram,0x01489280) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_UI_LoadoutMetagameData__get_DisplayName(long param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  int *piVar16;
  ulong *puVar17;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar18 [16];
  undefined1 auStack_150 [12];
  uint uStack_144;
  ulong *puStack_140;
  int aiStack_138 [8];
  uint uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  long alStack_100 [6];
  undefined8 uStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  
  if ((bRam0000000003eb4954 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb4954 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  if (lVar6 == 0) {
    return **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar14 = *(long *)(*(long *)(param_1 + 0x30) + 0x30);
    puVar3 = (undefined1 *)register0x00000008;
    goto code_r0x0164feb4;
  }
  lVar6 = func_0x00f78af4();
  if (*(long *)(lVar6 + 0x10) == 0) {
    return 0;
  }
  if (*(long *)(lVar6 + 0x38) != 0) {
    uVar4 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(lVar6 + 0x10),*(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x18),
                            0);
    return (ulong)(uVar4 ^ 1);
  }
  lVar6 = func_0x00f78af4();
  lVar14 = *(long *)(lVar6 + 0x10);
  if (lVar14 == 0) {
    return 0;
  }
  if (*(long *)(lVar6 + 0x38) != 0) {
    uVar15 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x18);
    if ((bRam0000000003eb4e2d & 1) == 0) {
      func_0x00f78a20(0x3d33738);
      func_0x00f78a20(0x3d33740);
      func_0x00f78a20(0x3d33748);
      func_0x00f78a20(0x3d3d950);
      func_0x00f78a20(0x3d29680);
      bRam0000000003eb4e2d = 1;
    }
    lStack_88 = 0;
    uStack_90 = 0;
    puStack_78 = (undefined *)0x0;
    puStack_80 = (undefined1 *)0x0;
    lVar6 = *(long *)(lVar14 + 0x20);
    if (((lVar6 == 0) || (lVar6 = Atlas_Save_SaveManager__get_SaveData(lVar6,0), lVar6 == 0)) ||
       (*(long *)(lVar6 + 0x38) == 0)) {
      auVar18 = func_0x00f78af4();
    }
    else {
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&uStack_90,*(long *)(lVar6 + 0x38),uRam0000000003d3d950);
      do {
        uVar13 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&uStack_90,uRam0000000003d33740);
        if ((uVar13 & 1) == 0) goto code_r0x015218ec;
        if (puStack_80 == (undefined1 *)0x0) {
          func_0x00f78af4();
          goto code_r0x01521928;
        }
        uVar13 = /*System.String$$Equals*/ func_0x029caa48(puStack_80,uVar15,4,0);
      } while ((uVar13 & 1) == 0);
      lVar6 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&stack0xffffffffffffff6f);
      uVar15 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&stack0xffffffffffffff6e);
      auVar18._8_8_ = uVar15;
      auVar18._0_8_ = uVar15;
      if (lVar6 != 0) {
        uVar13 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar6,uVar15,0);
        if ((uVar13 & 1) == 0) {
code_r0x015218ec:
          uVar13 = 0;
        }
        else {
          uVar13 = 1;
        }
        /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_90,uRam0000000003d33738);
        return uVar13;
      }
    }
    func_0x00f78af4(auVar18._0_8_,auVar18._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x152192c);
    (*pcVar2)();
  }
  lVar6 = func_0x00f78af4();
  if (*(long *)(lVar6 + 0x30) != 0) {
    return (ulong)*(byte *)(*(long *)(lVar6 + 0x30) + 0x61);
  }
  lVar6 = func_0x00f78af4();
  if ((bRam0000000003eb4955 & 1) == 0) {
    func_0x00f78a20(0x3d2dc40);
    bRam0000000003eb4955 = 1;
  }
  if ((*(long *)(lVar6 + 0x30) != 0) &&
     (uVar13 = /*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(*(long *)(lVar6 + 0x30),0), *(long *)(uVar13 + 8) != 0)) {
    return uVar13;
  }
  plVar7 = (long *)func_0x00f78af4();
  puVar3 = auStack_150;
  uStack_90 = 0x3eb4000;
  puStack_78 = &Atlas_UI_LoadoutMetagameData__UnlockDescription;
  unaff_x29 = &puStack_80;
  lStack_88 = lVar6;
  puStack_80 = &stack0xffffffffffffffa0;
  if ((bRam0000000003eb4956 & 1) == 0) {
    func_0x00f78a20(0x3d20618);
    func_0x00f78a20(0x3d20650);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57548);
    func_0x00f78a20(0x3d57550);
    func_0x00f78a20(0x3d57590);
    func_0x00f78a20(0x3d575b0);
    func_0x00f78a20(0x3d574e0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d22e70);
    func_0x00f78a20(0x3d3fe40);
    func_0x00f78a20(0x3d247f0);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d69a30);
    func_0x00f78a20(0x3d69a28);
    func_0x00f78a20(0x3d69068);
    func_0x00f78a20(0x3d69a10);
    func_0x00f78a20(0x3d69a20);
    func_0x00f78a20(0x3d69a18);
    func_0x00f78a20(0x3d69a08);
    bRam0000000003eb4956 = 1;
  }
  alStack_100[4] = 0;
  alStack_100[5] = 0;
  alStack_100[2] = 0;
  alStack_100[3] = 0;
  alStack_100[0] = 0;
  alStack_100[1] = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_118 = 0;
  puVar17 = (ulong *)(plVar7 + 5);
  iVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar17,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar5 == 0) goto code_r0x014891b4;
  if ((plVar7[3] == 0) ||
     (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar7[3],alStack_100 + 5,uRam0000000003d57548), alStack_100[5] == 0)) {
code_r0x01489254:
    func_0x00f78af4();
code_r0x01489258:
    uVar15 = func_0x00f78b24();
    func_0x00f78ac0(uVar15,0);
  }
  else {
    puStack_140 = puVar17;
    plVar8 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(alStack_100[5],uRam0000000003d3fe40);
    if (plVar8 != (long *)0x0) {
      do {
        lVar6 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar13 != 0) {
          piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
              goto code_r0x014884f4;
            }
            piVar16 = piVar16 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014884f4:
        uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar13 & 1) == 0) break;
        lVar6 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar13 != 0) {
          piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
              goto code_r0x01488550;
            }
            piVar16 = piVar16 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488550:
        plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
        if (plVar10 != (long *)0x0) {
          if ((*(byte *)(*plVar10 + 300) < *(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300)) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300) * 8
                       + -8) != /*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618)) {
            func_0x00f78e5c(plVar10,/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
            goto code_r0x014892b8;
          }
        }
        iVar5 = 0;
        while( true ) {
          if (((*(ushort *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xe0) == 0)) {
            func_0x00f78ad0(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
          }
          if (**(int **)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xb8) <= iVar5) {
            uVar13 = *puStack_140;
            goto code_r0x0148868c;
          }
          if (plVar10 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          uVar15 = /*Atlas.Definitions.ChapterDefinition$$GetRankRewardIdByIndex*/ func_0x01540970(plVar10,iVar5,0);
          uVar11 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar11,0);
          uVar13 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar15,uVar11,0);
          if ((uVar13 & 1) != 0) break;
          iVar5 = iVar5 + 1;
        }
        if (plVar7[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar7[4],/*STR('CHAR_SELECT_UNLOCK_CHAPTER_DESC')*/ uRam0000000003d69a10,alStack_100 + 4,0);
        if (plVar7[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar7[4],plVar10[6],alStack_100 + 3,0);
        uVar13 = /*System.String$$Format*/ func_0x029bc688(alStack_100[4],alStack_100[3],0);
        *puStack_140 = uVar13;
code_r0x0148868c:
        uVar13 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar13,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      } while ((uVar13 & 1) == 0);
      aiStack_138[0] = 199;
      uStack_118 = 1;
      if (plVar8 != (long *)0x0) {
        lVar6 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar13 != 0) {
          piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
              puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
              goto code_r0x0148871c;
            }
            piVar16 = piVar16 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0148871c:
        (*(code *)*puVar9)(plVar8,puVar9[1]);
      }
      puVar17 = puStack_140;
      if (aiStack_138[0] == 199) {
        uStack_118 = 0;
      }
      uVar4 = (uint)(aiStack_138[0] != 199);
      iVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puStack_140,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar5 != 0) {
        if ((plVar7[3] == 0) ||
           (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar7[3],alStack_100 + 5,uRam0000000003d57550), alStack_100[5] == 0))
        goto code_r0x01489254;
        uStack_144 = uVar4;
        plVar8 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(alStack_100[5],uRam0000000003d3fe40);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        do {
          lVar6 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar13 != 0) {
            piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                goto code_r0x0148882c;
              }
              piVar16 = piVar16 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x0148882c:
          uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          if ((uVar13 & 1) == 0) break;
          lVar6 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar13 != 0) {
            piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                goto code_r0x01488888;
              }
              piVar16 = piVar16 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488888:
          plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
          if (plVar10 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          if ((*(byte *)(*plVar10 + 300) < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8
                       + -8) != /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
            func_0x00f78e5c(plVar10);
            goto code_r0x014892b8;
          }
          iVar5 = 0;
          do {
            uVar15 = /*Atlas.Definitions.CharacterDefinition$$GetXpRewardIdByIndex*/ func_0x015410f4(plVar10,iVar5,0);
            uVar11 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar11,0);
            uVar13 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar15,uVar11,0);
            if ((uVar13 & 1) != 0) {
              if (plVar7[4] == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar7[4],/*STR('CHAR_SELECT_UNLOCK_RANK_DESC')*/ uRam0000000003d69a28,alStack_100 + 2,0);
              lVar6 = plVar7[4];
              if (lVar6 == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              lVar14 = plVar10[6];
              unaff_x30 = &UNK_0148897c;
              goto code_r0x0164feb4;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 != 3);
          uVar13 = /*System.String$$op_Inequality*/ func_0x029bd9d4(*puStack_140,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
        } while ((uVar13 & 1) == 0);
        puVar17 = puStack_140;
        aiStack_138[(int)uStack_144] = 0x18d;
        uVar1 = uStack_118;
        uVar4 = uStack_118 + 1;
        uStack_118 = uVar4;
        if (plVar8 != (long *)0x0) {
          lVar6 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar13 != 0) {
            piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                goto code_r0x01488a30;
              }
              piVar16 = piVar16 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488a30:
          (*(code *)*puVar9)(plVar8,puVar9[1]);
        }
        if ((uVar4 != 0) && (aiStack_138[(int)uVar1] == 0x18d)) {
          uVar4 = uVar1;
          uStack_118 = uVar1;
        }
      }
      iVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar17,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar5 != 0) {
        if ((plVar7[3] == 0) ||
           (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar7[3],alStack_100 + 5,uRam0000000003d575b0), alStack_100[5] == 0))
        goto code_r0x01489254;
        uStack_144 = uVar4;
        plVar8 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(alStack_100[5],uRam0000000003d3fe40);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        do {
          lVar6 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar13 != 0) {
            piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                goto code_r0x01488b30;
              }
              piVar16 = piVar16 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488b30:
          uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          if ((uVar13 & 1) == 0) break;
          lVar6 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar13 != 0) {
            piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                goto code_r0x01488b8c;
              }
              piVar16 = piVar16 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488b8c:
          plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
          if (plVar10 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          if ((*(byte *)(*plVar10 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300)) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8
                       + -8) != /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0)) {
            func_0x00f78e5c(plVar10);
            goto code_r0x014892b8;
          }
          lVar6 = plVar10[8];
          if (lVar6 == 0) {
code_r0x014891e0:
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          uVar13 = 0;
          while ((long)uVar13 < (long)(int)*(uint *)(lVar6 + 0x18)) {
            if (*(uint *)(lVar6 + 0x18) <= uVar13) {
              uVar15 = func_0x00f78b24();
              func_0x00f78ac0(uVar15,0);
              goto code_r0x014892b8;
            }
            uVar11 = *(undefined8 *)(lVar6 + uVar13 * 8 + 0x20);
            uVar15 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar15 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar15,0);
            uVar12 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar11,uVar15,0);
            if ((uVar12 & 1) != 0) {
              if (plVar7[4] == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar7[4],/*STR('CHAR_SELECT_UNLOCK_SEASONAL_DESC')*/ uRam0000000003d69a30,alStack_100 + 1,0);
              lVar6 = plVar7[4];
              if (lVar6 == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              lVar14 = plVar10[4];
              unaff_x30 = &UNK_01488c94;
              puVar3 = auStack_150;
              goto code_r0x0164feb4;
            }
            uVar13 = uVar13 + 1;
            lVar6 = plVar10[8];
            if (lVar6 == 0) goto code_r0x014891e0;
          }
          uVar13 = /*System.String$$op_Inequality*/ func_0x029bd9d4(*puStack_140,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
        } while ((uVar13 & 1) == 0);
        puVar17 = puStack_140;
        aiStack_138[(int)uStack_144] = 0x260;
        uVar1 = uStack_118;
        uVar4 = uStack_118 + 1;
        uStack_118 = uVar4;
        if (plVar8 != (long *)0x0) {
          lVar6 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar13 != 0) {
            piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                goto code_r0x01488d48;
              }
              piVar16 = piVar16 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488d48:
          (*(code *)*puVar9)(plVar8,puVar9[1]);
        }
        if ((uVar4 != 0) && (aiStack_138[(int)uVar1] == 0x260)) {
          uVar4 = uVar1;
          uStack_118 = uVar1;
        }
      }
      iVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar17,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar5 != 0) {
        lVar6 = plVar7[3];
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar15 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Arcade')*/ uRam0000000003d69068,0);
        if (((lVar6 == 0) ||
            (/*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar6,uVar15,alStack_100,uRam0000000003d574e0), alStack_100[0] == 0))
           || (lVar6 = *(long *)(alStack_100[0] + 0x28), lVar6 == 0)) goto code_r0x01489254;
        if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
          uVar13 = 0;
          uVar12 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
          do {
            if (uVar12 <= uVar13) goto code_r0x01489258;
            uVar11 = *(undefined8 *)(lVar6 + 0x20 + uVar13 * 8);
            uVar15 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar15 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar15,0);
            iVar5 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar11,uVar15,0);
            if (iVar5 != 0) {
              if (plVar7[4] == 0) goto code_r0x01489254;
              /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar7[4],/*STR('CHAR_SELECT_UNLOCK_ARCADE_DESC')*/ uRam0000000003d69a08,&uStack_108,0);
              *puStack_140 = uStack_108;
              break;
            }
            uVar13 = uVar13 + 1;
            uVar12 = (ulong)*(uint *)(lVar6 + 0x18);
          } while ((long)uVar13 < (long)(int)*(uint *)(lVar6 + 0x18));
        }
      }
      puVar17 = puStack_140;
      iVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puStack_140,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar5 == 0) goto code_r0x01489170;
      if ((plVar7[3] != 0) &&
         (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar7[3],alStack_100 + 5,uRam0000000003d57590), alStack_100[5] != 0)) {
        plVar8 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(alStack_100[5],uRam0000000003d3fe40);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
        }
        else {
          do {
            lVar6 = *plVar8;
            uVar13 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar13 != 0) {
              piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                  puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                  goto code_r0x01488f88;
                }
                piVar16 = piVar16 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488f88:
            uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
            puVar17 = puStack_140;
            if ((uVar13 & 1) == 0) {
              aiStack_138[(int)uVar4] = 0x378;
              uStack_118 = uStack_118 + 1;
              if (plVar8 == (long *)0x0) goto code_r0x01489170;
              lVar6 = *plVar8;
              uVar13 = (ulong)*(ushort *)(lVar6 + 0x12a);
              if (uVar13 == 0) goto code_r0x01489144;
              piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              goto code_r0x0148912c;
            }
            lVar6 = *plVar8;
            uVar13 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar13 != 0) {
              piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                  puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                  goto code_r0x01488fe4;
                }
                piVar16 = piVar16 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488fe4:
            plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
            if (plVar10 == (long *)0x0) {
              func_0x00f78af4();
              goto code_r0x014892b8;
            }
            if ((*(byte *)(*plVar10 + 300) < *(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300)) ||
               (*(long *)(*(long *)(*plVar10 + 200) +
                          (ulong)*(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300) * 8 + -8) !=
                /*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70)) {
              func_0x00f78e5c(plVar10);
              goto code_r0x014892b8;
            }
            lVar6 = plVar10[4];
            uVar15 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar15 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar15,0);
            uVar13 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(lVar6,uVar15,0);
          } while ((uVar13 & 1) == 0);
          if (plVar7[4] == 0) {
            func_0x00f78af4();
          }
          else {
            /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar7[4],/*STR('CHAR_SELECT_UNLOCK_LEAGUE_DESC')*/ uRam0000000003d69a20,&uStack_110,0);
            lVar6 = plVar7[4];
            if (lVar6 != 0) {
              lVar14 = plVar10[7];
              unaff_x30 = &UNK_014890b0;
              puVar3 = auStack_150;
code_r0x0164feb4:
              *(undefined1 ***)(puVar3 + -0x10) = unaff_x29;
              *(undefined **)(puVar3 + -8) = unaff_x30;
              *(undefined8 *)(puVar3 + -0x18) = 0;
              /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar6,lVar14,puVar3 + -0x18);
              return *(ulong *)(puVar3 + -0x18);
            }
            func_0x00f78af4();
          }
        }
        goto code_r0x014892b8;
      }
      goto code_r0x01489254;
    }
  }
  func_0x00f78af4();
code_r0x014892b8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14892bc);
  (*pcVar2)();
  while( true ) {
    piVar16 = piVar16 + 4;
    uVar13 = uVar13 - 1;
    if (uVar13 == 0) break;
code_r0x0148912c:
    if (*(long *)(piVar16 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
      puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
      goto code_r0x01489160;
    }
  }
code_r0x01489144:
  puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01489160:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
code_r0x01489170:
  iVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar17,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar5 == 0) {
code_r0x014891b4:
    return *puVar17;
  }
  if (plVar7[4] != 0) {
    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar7[4],/*STR('CHAR_SELECT_UNLOCK_COMINGSOON')*/ uRam0000000003d69a18,puVar17,0);
    goto code_r0x014891b4;
  }
  goto code_r0x01489254;
}



// ============================================================
// RVA: 0x14881dc | Atlas.UI.LoadoutMetagameData.get_IsLocked
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01488730) */
/* WARNING: Removing unreachable block (ram,0x01489280) */

ulong Atlas_UI_LoadoutMetagameData__get_IsLocked(long param_1)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  int *piVar15;
  ulong *puVar16;
  undefined1 auVar17 [16];
  int aiStack_118 [8];
  uint uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar3 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(param_1 + 0x10),
                            *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18),0);
    return (ulong)(uVar3 ^ 1);
  }
  lVar5 = func_0x00f78af4();
  lVar6 = *(long *)(lVar5 + 0x10);
  if (lVar6 == 0) {
    return 0;
  }
  if (*(long *)(lVar5 + 0x38) != 0) {
    uVar14 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x18);
    if ((bRam0000000003eb4e2d & 1) == 0) {
      func_0x00f78a20(0x3d33738);
      func_0x00f78a20(0x3d33740);
      func_0x00f78a20(0x3d33748);
      func_0x00f78a20(0x3d3d950);
      func_0x00f78a20(0x3d29680);
      bRam0000000003eb4e2d = 1;
    }
    lStack_68 = 0;
    uStack_70 = 0;
    puStack_58 = (undefined *)0x0;
    puStack_60 = (undefined1 *)0x0;
    lVar5 = *(long *)(lVar6 + 0x20);
    if (((lVar5 == 0) || (lVar5 = Atlas_Save_SaveManager__get_SaveData(lVar5,0), lVar5 == 0)) ||
       (*(long *)(lVar5 + 0x38) == 0)) {
      auVar17 = func_0x00f78af4();
    }
    else {
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&uStack_70,*(long *)(lVar5 + 0x38),uRam0000000003d3d950);
      do {
        uVar13 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&uStack_70,uRam0000000003d33740);
        if ((uVar13 & 1) == 0) goto code_r0x015218ec;
        if (puStack_60 == (undefined1 *)0x0) {
          func_0x00f78af4();
          goto code_r0x01521928;
        }
        uVar13 = /*System.String$$Equals*/ func_0x029caa48(puStack_60,uVar14,4,0);
      } while ((uVar13 & 1) == 0);
      lVar5 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&stack0xffffffffffffff8f);
      uVar14 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&stack0xffffffffffffff8e);
      auVar17._8_8_ = uVar14;
      auVar17._0_8_ = uVar14;
      if (lVar5 != 0) {
        uVar13 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar5,uVar14,0);
        if ((uVar13 & 1) == 0) {
code_r0x015218ec:
          uVar13 = 0;
        }
        else {
          uVar13 = 1;
        }
        /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_70,uRam0000000003d33738);
        return uVar13;
      }
    }
    func_0x00f78af4(auVar17._0_8_,auVar17._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x152192c);
    (*pcVar2)();
  }
  lVar5 = func_0x00f78af4();
  if (*(long *)(lVar5 + 0x30) != 0) {
    return (ulong)*(byte *)(*(long *)(lVar5 + 0x30) + 0x61);
  }
  lVar5 = func_0x00f78af4();
  if ((bRam0000000003eb4955 & 1) == 0) {
    func_0x00f78a20(0x3d2dc40);
    bRam0000000003eb4955 = 1;
  }
  if ((*(long *)(lVar5 + 0x30) != 0) &&
     (uVar13 = /*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(*(long *)(lVar5 + 0x30),0), *(long *)(uVar13 + 8) != 0)) {
    return uVar13;
  }
  plVar7 = (long *)func_0x00f78af4();
  uStack_70 = 0x3eb4000;
  puStack_58 = &Atlas_UI_LoadoutMetagameData__UnlockDescription;
  lStack_68 = lVar5;
  puStack_60 = &stack0xffffffffffffffc0;
  if ((bRam0000000003eb4956 & 1) == 0) {
    func_0x00f78a20(0x3d20618);
    func_0x00f78a20(0x3d20650);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57548);
    func_0x00f78a20(0x3d57550);
    func_0x00f78a20(0x3d57590);
    func_0x00f78a20(0x3d575b0);
    func_0x00f78a20(0x3d574e0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d22e70);
    func_0x00f78a20(0x3d3fe40);
    func_0x00f78a20(0x3d247f0);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d69a30);
    func_0x00f78a20(0x3d69a28);
    func_0x00f78a20(0x3d69068);
    func_0x00f78a20(0x3d69a10);
    func_0x00f78a20(0x3d69a20);
    func_0x00f78a20(0x3d69a18);
    func_0x00f78a20(0x3d69a08);
    bRam0000000003eb4956 = 1;
  }
  uStack_c0 = 0;
  lStack_b8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  lStack_e0 = 0;
  uStack_d8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_f8 = 0;
  puVar16 = (ulong *)(plVar7 + 5);
  iVar4 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar16,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar4 == 0) goto code_r0x014891b4;
  if ((plVar7[3] == 0) ||
     (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar7[3],&lStack_b8,uRam0000000003d57548), lStack_b8 == 0)) {
code_r0x01489254:
    func_0x00f78af4();
code_r0x01489258:
    uVar14 = func_0x00f78b24();
    func_0x00f78ac0(uVar14,0);
  }
  else {
    plVar8 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_b8,uRam0000000003d3fe40);
    if (plVar8 != (long *)0x0) {
      do {
        lVar5 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar9 = (undefined8 *)(lVar5 + (long)*piVar15 * 0x10 + 0x138);
              goto code_r0x014884f4;
            }
            piVar15 = piVar15 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014884f4:
        uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar13 & 1) == 0) break;
        lVar5 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar9 = (undefined8 *)(lVar5 + (long)*piVar15 * 0x10 + 0x138);
              goto code_r0x01488550;
            }
            piVar15 = piVar15 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488550:
        plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
        if (plVar10 != (long *)0x0) {
          if ((*(byte *)(*plVar10 + 300) < *(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300)) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300) * 8
                       + -8) != /*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618)) {
            func_0x00f78e5c(plVar10,/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
            goto code_r0x014892b8;
          }
        }
        iVar4 = 0;
        while( true ) {
          if (((*(ushort *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xe0) == 0)) {
            func_0x00f78ad0(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
          }
          if (**(int **)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xb8) <= iVar4) {
            uVar13 = *puVar16;
            goto code_r0x0148868c;
          }
          if (plVar10 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          uVar14 = /*Atlas.Definitions.ChapterDefinition$$GetRankRewardIdByIndex*/ func_0x01540970(plVar10,iVar4,0);
          uVar11 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar11,0);
          uVar13 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar14,uVar11,0);
          if ((uVar13 & 1) != 0) break;
          iVar4 = iVar4 + 1;
        }
        if (plVar7[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar7[4],/*STR('CHAR_SELECT_UNLOCK_CHAPTER_DESC')*/ uRam0000000003d69a10,&uStack_c0,0);
        if (plVar7[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar7[4],plVar10[6],&uStack_c8,0);
        uVar13 = /*System.String$$Format*/ func_0x029bc688(uStack_c0,uStack_c8,0);
        *puVar16 = uVar13;
code_r0x0148868c:
        uVar13 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar13,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      } while ((uVar13 & 1) == 0);
      aiStack_118[0] = 199;
      uStack_f8 = 1;
      if (plVar8 != (long *)0x0) {
        lVar5 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
              puVar9 = (undefined8 *)(lVar5 + (long)*piVar15 * 0x10 + 0x138);
              goto code_r0x0148871c;
            }
            piVar15 = piVar15 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0148871c:
        (*(code *)*puVar9)(plVar8,puVar9[1]);
      }
      if (aiStack_118[0] == 199) {
        uStack_f8 = 0;
      }
      uVar3 = (uint)(aiStack_118[0] != 199);
      iVar4 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar16,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar4 != 0) {
        if ((plVar7[3] == 0) ||
           (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar7[3],&lStack_b8,uRam0000000003d57550), lStack_b8 == 0))
        goto code_r0x01489254;
        plVar8 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_b8,uRam0000000003d3fe40);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        do {
          lVar5 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar5 + 0x12a);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar9 = (undefined8 *)(lVar5 + (long)*piVar15 * 0x10 + 0x138);
                goto code_r0x0148882c;
              }
              piVar15 = piVar15 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x0148882c:
          uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          if ((uVar13 & 1) == 0) break;
          lVar5 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar5 + 0x12a);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                puVar9 = (undefined8 *)(lVar5 + (long)*piVar15 * 0x10 + 0x138);
                goto code_r0x01488888;
              }
              piVar15 = piVar15 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488888:
          plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
          if (plVar10 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          if ((*(byte *)(*plVar10 + 300) < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8
                       + -8) != /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
            func_0x00f78e5c(plVar10);
            goto code_r0x014892b8;
          }
          iVar4 = 0;
          do {
            uVar14 = /*Atlas.Definitions.CharacterDefinition$$GetXpRewardIdByIndex*/ func_0x015410f4(plVar10,iVar4,0);
            uVar11 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar11,0);
            uVar13 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar14,uVar11,0);
            if ((uVar13 & 1) != 0) {
              if (plVar7[4] == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar7[4],/*STR('CHAR_SELECT_UNLOCK_RANK_DESC')*/ uRam0000000003d69a28,&uStack_d0,0);
              uVar14 = uStack_d0;
              if (plVar7[4] != 0) {
                uVar11 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(plVar7[4],plVar10[6],0);
                uVar13 = /*System.String$$Format*/ func_0x029bc688(uVar14,uVar11,0);
                *puVar16 = uVar13;
                goto code_r0x01488994;
              }
              func_0x00f78af4();
              goto code_r0x014892b8;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 != 3);
          uVar13 = *puVar16;
code_r0x01488994:
          uVar13 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar13,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
        } while ((uVar13 & 1) == 0);
        aiStack_118[(int)uVar3] = 0x18d;
        uVar1 = uStack_f8;
        uVar3 = uStack_f8 + 1;
        uStack_f8 = uVar3;
        if (plVar8 != (long *)0x0) {
          lVar5 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar5 + 0x12a);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar9 = (undefined8 *)(lVar5 + (long)*piVar15 * 0x10 + 0x138);
                goto code_r0x01488a30;
              }
              piVar15 = piVar15 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488a30:
          (*(code *)*puVar9)(plVar8,puVar9[1]);
        }
        if ((uVar3 != 0) && (aiStack_118[(int)uVar1] == 0x18d)) {
          uVar3 = uVar1;
          uStack_f8 = uVar1;
        }
      }
      iVar4 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar16,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar4 != 0) {
        if ((plVar7[3] == 0) ||
           (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar7[3],&lStack_b8,uRam0000000003d575b0), lStack_b8 == 0))
        goto code_r0x01489254;
        plVar8 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_b8,uRam0000000003d3fe40);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        do {
          lVar5 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar5 + 0x12a);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar9 = (undefined8 *)(lVar5 + (long)*piVar15 * 0x10 + 0x138);
                goto code_r0x01488b30;
              }
              piVar15 = piVar15 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488b30:
          uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          if ((uVar13 & 1) == 0) break;
          lVar5 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar5 + 0x12a);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                puVar9 = (undefined8 *)(lVar5 + (long)*piVar15 * 0x10 + 0x138);
                goto code_r0x01488b8c;
              }
              piVar15 = piVar15 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488b8c:
          plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
          if (plVar10 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          if ((*(byte *)(*plVar10 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300)) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8
                       + -8) != /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0)) {
            func_0x00f78e5c(plVar10);
            goto code_r0x014892b8;
          }
          lVar5 = plVar10[8];
          if (lVar5 == 0) {
code_r0x014891e0:
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          uVar13 = 0;
          while ((long)uVar13 < (long)(int)*(uint *)(lVar5 + 0x18)) {
            if (*(uint *)(lVar5 + 0x18) <= uVar13) {
              uVar14 = func_0x00f78b24();
              func_0x00f78ac0(uVar14,0);
              goto code_r0x014892b8;
            }
            uVar11 = *(undefined8 *)(lVar5 + uVar13 * 8 + 0x20);
            uVar14 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar14 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar14,0);
            uVar12 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar11,uVar14,0);
            if ((uVar12 & 1) != 0) {
              if (plVar7[4] == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar7[4],/*STR('CHAR_SELECT_UNLOCK_SEASONAL_DESC')*/ uRam0000000003d69a30,&uStack_d8,0);
              uVar14 = uStack_d8;
              if (plVar7[4] != 0) {
                uVar11 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(plVar7[4],plVar10[4],0);
                uVar13 = /*System.String$$Format*/ func_0x029bc688(uVar14,uVar11,0);
                *puVar16 = uVar13;
                goto code_r0x01488cac;
              }
              func_0x00f78af4();
              goto code_r0x014892b8;
            }
            uVar13 = uVar13 + 1;
            lVar5 = plVar10[8];
            if (lVar5 == 0) goto code_r0x014891e0;
          }
          uVar13 = *puVar16;
code_r0x01488cac:
          uVar13 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar13,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
        } while ((uVar13 & 1) == 0);
        aiStack_118[(int)uVar3] = 0x260;
        uVar1 = uStack_f8;
        uVar3 = uStack_f8 + 1;
        uStack_f8 = uVar3;
        if (plVar8 != (long *)0x0) {
          lVar5 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar5 + 0x12a);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar9 = (undefined8 *)(lVar5 + (long)*piVar15 * 0x10 + 0x138);
                goto code_r0x01488d48;
              }
              piVar15 = piVar15 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488d48:
          (*(code *)*puVar9)(plVar8,puVar9[1]);
        }
        if ((uVar3 != 0) && (aiStack_118[(int)uVar1] == 0x260)) {
          uVar3 = uVar1;
          uStack_f8 = uVar1;
        }
      }
      iVar4 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar16,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar4 != 0) {
        lVar5 = plVar7[3];
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar14 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Arcade')*/ uRam0000000003d69068,0);
        if (((lVar5 == 0) ||
            (/*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar5,uVar14,&lStack_e0,uRam0000000003d574e0), lStack_e0 == 0)) ||
           (lVar5 = *(long *)(lStack_e0 + 0x28), lVar5 == 0)) goto code_r0x01489254;
        if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
          uVar13 = 0;
          uVar12 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
          do {
            if (uVar12 <= uVar13) goto code_r0x01489258;
            uVar11 = *(undefined8 *)(lVar5 + 0x20 + uVar13 * 8);
            uVar14 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar14 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar14,0);
            iVar4 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar11,uVar14,0);
            if (iVar4 != 0) {
              if (plVar7[4] == 0) goto code_r0x01489254;
              /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar7[4],/*STR('CHAR_SELECT_UNLOCK_ARCADE_DESC')*/ uRam0000000003d69a08,&uStack_e8,0);
              *puVar16 = uStack_e8;
              break;
            }
            uVar13 = uVar13 + 1;
            uVar12 = (ulong)*(uint *)(lVar5 + 0x18);
          } while ((long)uVar13 < (long)(int)*(uint *)(lVar5 + 0x18));
        }
      }
      iVar4 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar16,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar4 != 0) {
        if ((plVar7[3] == 0) ||
           (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar7[3],&lStack_b8,uRam0000000003d57590), lStack_b8 == 0))
        goto code_r0x01489254;
        plVar8 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_b8,uRam0000000003d3fe40);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        do {
          lVar5 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar5 + 0x12a);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar9 = (undefined8 *)(lVar5 + (long)*piVar15 * 0x10 + 0x138);
                goto code_r0x01488f88;
              }
              piVar15 = piVar15 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488f88:
          uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          if ((uVar13 & 1) == 0) {
            aiStack_118[(int)uVar3] = 0x378;
            goto joined_r0x01489108;
          }
          lVar5 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar5 + 0x12a);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                puVar9 = (undefined8 *)(lVar5 + (long)*piVar15 * 0x10 + 0x138);
                goto code_r0x01488fe4;
              }
              piVar15 = piVar15 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488fe4:
          plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
          if (plVar10 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          if ((*(byte *)(*plVar10 + 300) < *(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300)) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300) * 8
                       + -8) != /*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70)) {
            func_0x00f78e5c(plVar10);
            goto code_r0x014892b8;
          }
          lVar5 = plVar10[4];
          uVar14 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar14 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar14,0);
          uVar13 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(lVar5,uVar14,0);
        } while ((uVar13 & 1) == 0);
        if (plVar7[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar7[4],/*STR('CHAR_SELECT_UNLOCK_LEAGUE_DESC')*/ uRam0000000003d69a20,&uStack_f0,0);
        uVar14 = uStack_f0;
        if (plVar7[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        uVar11 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(plVar7[4],plVar10[7],0);
        uVar13 = /*System.String$$Format*/ func_0x029bc688(uVar14,uVar11,0);
        *puVar16 = uVar13;
        aiStack_118[(int)uVar3] = 0x378;
joined_r0x01489108:
        uStack_f8 = uStack_f8 + 1;
        if (plVar8 != (long *)0x0) {
          lVar5 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar5 + 0x12a);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar9 = (undefined8 *)(lVar5 + (long)*piVar15 * 0x10 + 0x138);
                goto code_r0x01489160;
              }
              piVar15 = piVar15 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01489160:
          (*(code *)*puVar9)(plVar8,puVar9[1]);
        }
      }
      iVar4 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar16,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar4 == 0) {
code_r0x014891b4:
        return *puVar16;
      }
      if (plVar7[4] != 0) {
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar7[4],/*STR('CHAR_SELECT_UNLOCK_COMINGSOON')*/ uRam0000000003d69a18,puVar16,0);
        goto code_r0x014891b4;
      }
      goto code_r0x01489254;
    }
  }
  func_0x00f78af4();
code_r0x014892b8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14892bc);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x1488214 | Atlas.UI.LoadoutMetagameData.get_IsNew
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01488730) */
/* WARNING: Removing unreachable block (ram,0x01489280) */

ulong Atlas_UI_LoadoutMetagameData__get_IsNew(long param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  int *piVar13;
  ulong *puVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  int aiStack_108 [8];
  uint uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18);
    if ((bRam0000000003eb4e2d & 1) == 0) {
      func_0x00f78a20(0x3d33738);
      func_0x00f78a20(0x3d33740);
      func_0x00f78a20(0x3d33748);
      func_0x00f78a20(0x3d3d950);
      func_0x00f78a20(0x3d29680);
      bRam0000000003eb4e2d = 1;
    }
    lStack_58 = 0;
    uStack_60 = 0;
    puStack_48 = (undefined *)0x0;
    puStack_50 = (undefined1 *)0x0;
    lVar4 = *(long *)(lVar4 + 0x20);
    if (((lVar4 == 0) || (lVar4 = Atlas_Save_SaveManager__get_SaveData(lVar4,0), lVar4 == 0)) ||
       (*(long *)(lVar4 + 0x38) == 0)) {
      auVar16 = func_0x00f78af4();
    }
    else {
      /*System.Collections.Generic.List<SaveData.UnlockedData>$$GetEnumerator*/ func_0x025929d8(&uStack_60,*(long *)(lVar4 + 0x38),uRam0000000003d3d950);
      do {
        uVar11 = /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$MoveNext*/ func_0x01f83d54(&uStack_60,uRam0000000003d33740);
        if ((uVar11 & 1) == 0) goto code_r0x015218ec;
        if (puStack_50 == (undefined1 *)0x0) {
          func_0x00f78af4();
          goto code_r0x01521928;
        }
        uVar11 = /*System.String$$Equals*/ func_0x029caa48(puStack_50,uVar12,4,0);
      } while ((uVar11 & 1) == 0);
      lVar4 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&stack0xffffffffffffff9f);
      uVar12 = func_0x00f78ae0(/*Atlas.Stats.UnlockManager.UnlockStatus_TypeInfo*/ uRam0000000003d29680,&stack0xffffffffffffff9e);
      auVar16._8_8_ = uVar12;
      auVar16._0_8_ = uVar12;
      if (lVar4 != 0) {
        uVar11 = /*System.Enum$$HasFlag*/ func_0x02ac85dc(lVar4,uVar12,0);
        if ((uVar11 & 1) == 0) {
code_r0x015218ec:
          uVar11 = 0;
        }
        else {
          uVar11 = 1;
        }
        /*System.Collections.Generic.List.Enumerator<SaveData.UnlockedData>$$Dispose*/ func_0x01f83d50(&uStack_60,uRam0000000003d33738);
        return uVar11;
      }
    }
    func_0x00f78af4(auVar16._0_8_,auVar16._8_8_);
code_r0x01521928:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x152192c);
    (*pcVar2)();
  }
  lVar4 = func_0x00f78af4();
  if (*(long *)(lVar4 + 0x30) != 0) {
    return (ulong)*(byte *)(*(long *)(lVar4 + 0x30) + 0x61);
  }
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003eb4955 & 1) == 0) {
    func_0x00f78a20(0x3d2dc40);
    bRam0000000003eb4955 = 1;
  }
  if ((*(long *)(lVar4 + 0x30) != 0) &&
     (uVar11 = /*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(*(long *)(lVar4 + 0x30),0), *(long *)(uVar11 + 8) != 0)) {
    return uVar11;
  }
  plVar5 = (long *)func_0x00f78af4();
  uStack_60 = 0x3eb4000;
  puStack_48 = &Atlas_UI_LoadoutMetagameData__UnlockDescription;
  lStack_58 = lVar4;
  puStack_50 = &stack0xffffffffffffffd0;
  if ((bRam0000000003eb4956 & 1) == 0) {
    func_0x00f78a20(0x3d20618);
    func_0x00f78a20(0x3d20650);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57548);
    func_0x00f78a20(0x3d57550);
    func_0x00f78a20(0x3d57590);
    func_0x00f78a20(0x3d575b0);
    func_0x00f78a20(0x3d574e0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d22e70);
    func_0x00f78a20(0x3d3fe40);
    func_0x00f78a20(0x3d247f0);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d69a30);
    func_0x00f78a20(0x3d69a28);
    func_0x00f78a20(0x3d69068);
    func_0x00f78a20(0x3d69a10);
    func_0x00f78a20(0x3d69a20);
    func_0x00f78a20(0x3d69a18);
    func_0x00f78a20(0x3d69a08);
    bRam0000000003eb4956 = 1;
  }
  uStack_b0 = 0;
  lStack_a8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_d0 = 0;
  uStack_c8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_e8 = 0;
  puVar14 = (ulong *)(plVar5 + 5);
  iVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar14,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar3 == 0) goto code_r0x014891b4;
  if ((plVar5[3] == 0) ||
     (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar5[3],&lStack_a8,uRam0000000003d57548), lStack_a8 == 0)) {
code_r0x01489254:
    func_0x00f78af4();
code_r0x01489258:
    uVar12 = func_0x00f78b24();
    func_0x00f78ac0(uVar12,0);
  }
  else {
    plVar6 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_a8,uRam0000000003d3fe40);
    if (plVar6 != (long *)0x0) {
      do {
        lVar4 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar7 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x014884f4;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014884f4:
        uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar11 & 1) == 0) break;
        lVar4 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar7 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x01488550;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488550:
        plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        if (plVar8 != (long *)0x0) {
          if ((*(byte *)(*plVar8 + 300) < *(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300)) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300) * 8
                       + -8) != /*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618)) {
            func_0x00f78e5c(plVar8,/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
            goto code_r0x014892b8;
          }
        }
        iVar3 = 0;
        while( true ) {
          if (((*(ushort *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xe0) == 0)) {
            func_0x00f78ad0(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
          }
          if (**(int **)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xb8) <= iVar3) {
            uVar11 = *puVar14;
            goto code_r0x0148868c;
          }
          if (plVar8 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          uVar12 = /*Atlas.Definitions.ChapterDefinition$$GetRankRewardIdByIndex*/ func_0x01540970(plVar8,iVar3,0);
          uVar9 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar9 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar9,0);
          uVar11 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar12,uVar9,0);
          if ((uVar11 & 1) != 0) break;
          iVar3 = iVar3 + 1;
        }
        if (plVar5[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar5[4],/*STR('CHAR_SELECT_UNLOCK_CHAPTER_DESC')*/ uRam0000000003d69a10,&uStack_b0,0);
        if (plVar5[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar5[4],plVar8[6],&uStack_b8,0);
        uVar11 = /*System.String$$Format*/ func_0x029bc688(uStack_b0,uStack_b8,0);
        *puVar14 = uVar11;
code_r0x0148868c:
        uVar11 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar11,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      } while ((uVar11 & 1) == 0);
      aiStack_108[0] = 199;
      uStack_e8 = 1;
      if (plVar6 != (long *)0x0) {
        lVar4 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
              puVar7 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x0148871c;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0148871c:
        (*(code *)*puVar7)(plVar6,puVar7[1]);
      }
      if (aiStack_108[0] == 199) {
        uStack_e8 = 0;
      }
      uVar15 = (uint)(aiStack_108[0] != 199);
      iVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar14,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar3 != 0) {
        if ((plVar5[3] == 0) ||
           (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar5[3],&lStack_a8,uRam0000000003d57550), lStack_a8 == 0))
        goto code_r0x01489254;
        plVar6 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_a8,uRam0000000003d3fe40);
        if (plVar6 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        do {
          lVar4 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x0148882c;
              }
              piVar13 = piVar13 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x0148882c:
          uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if ((uVar11 & 1) == 0) break;
          lVar4 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x01488888;
              }
              piVar13 = piVar13 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488888:
          plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
          if (plVar8 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          if ((*(byte *)(*plVar8 + 300) < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8
                       + -8) != /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
            func_0x00f78e5c(plVar8);
            goto code_r0x014892b8;
          }
          iVar3 = 0;
          do {
            uVar12 = /*Atlas.Definitions.CharacterDefinition$$GetXpRewardIdByIndex*/ func_0x015410f4(plVar8,iVar3,0);
            uVar9 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar9 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar9,0);
            uVar11 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar12,uVar9,0);
            if ((uVar11 & 1) != 0) {
              if (plVar5[4] == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar5[4],/*STR('CHAR_SELECT_UNLOCK_RANK_DESC')*/ uRam0000000003d69a28,&uStack_c0,0);
              uVar12 = uStack_c0;
              if (plVar5[4] == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              uVar9 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(plVar5[4],plVar8[6],0);
              uVar11 = /*System.String$$Format*/ func_0x029bc688(uVar12,uVar9,0);
              *puVar14 = uVar11;
              goto code_r0x01488994;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 != 3);
          uVar11 = *puVar14;
code_r0x01488994:
          uVar11 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar11,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
        } while ((uVar11 & 1) == 0);
        aiStack_108[(int)uVar15] = 0x18d;
        uVar1 = uStack_e8;
        uVar15 = uStack_e8 + 1;
        uStack_e8 = uVar15;
        if (plVar6 != (long *)0x0) {
          lVar4 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x01488a30;
              }
              piVar13 = piVar13 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488a30:
          (*(code *)*puVar7)(plVar6,puVar7[1]);
        }
        if ((uVar15 != 0) && (aiStack_108[(int)uVar1] == 0x18d)) {
          uVar15 = uVar1;
          uStack_e8 = uVar1;
        }
      }
      iVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar14,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar3 != 0) {
        if ((plVar5[3] == 0) ||
           (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar5[3],&lStack_a8,uRam0000000003d575b0), lStack_a8 == 0))
        goto code_r0x01489254;
        plVar6 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_a8,uRam0000000003d3fe40);
        if (plVar6 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        do {
          lVar4 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x01488b30;
              }
              piVar13 = piVar13 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488b30:
          uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if ((uVar11 & 1) == 0) break;
          lVar4 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x01488b8c;
              }
              piVar13 = piVar13 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488b8c:
          plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
          if (plVar8 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          if ((*(byte *)(*plVar8 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300)) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8
                       + -8) != /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0)) {
            func_0x00f78e5c(plVar8);
            goto code_r0x014892b8;
          }
          lVar4 = plVar8[8];
          if (lVar4 == 0) {
code_r0x014891e0:
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          uVar11 = 0;
          while ((long)uVar11 < (long)(int)*(uint *)(lVar4 + 0x18)) {
            if (*(uint *)(lVar4 + 0x18) <= uVar11) {
              uVar12 = func_0x00f78b24();
              func_0x00f78ac0(uVar12,0);
              goto code_r0x014892b8;
            }
            uVar9 = *(undefined8 *)(lVar4 + uVar11 * 8 + 0x20);
            uVar12 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar12 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar12,0);
            uVar10 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar9,uVar12,0);
            if ((uVar10 & 1) != 0) {
              if (plVar5[4] == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar5[4],/*STR('CHAR_SELECT_UNLOCK_SEASONAL_DESC')*/ uRam0000000003d69a30,&uStack_c8,0);
              uVar12 = uStack_c8;
              if (plVar5[4] == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              uVar9 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(plVar5[4],plVar8[4],0);
              uVar11 = /*System.String$$Format*/ func_0x029bc688(uVar12,uVar9,0);
              *puVar14 = uVar11;
              goto code_r0x01488cac;
            }
            uVar11 = uVar11 + 1;
            lVar4 = plVar8[8];
            if (lVar4 == 0) goto code_r0x014891e0;
          }
          uVar11 = *puVar14;
code_r0x01488cac:
          uVar11 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar11,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
        } while ((uVar11 & 1) == 0);
        aiStack_108[(int)uVar15] = 0x260;
        uVar1 = uStack_e8;
        uVar15 = uStack_e8 + 1;
        uStack_e8 = uVar15;
        if (plVar6 != (long *)0x0) {
          lVar4 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x01488d48;
              }
              piVar13 = piVar13 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488d48:
          (*(code *)*puVar7)(plVar6,puVar7[1]);
        }
        if ((uVar15 != 0) && (aiStack_108[(int)uVar1] == 0x260)) {
          uVar15 = uVar1;
          uStack_e8 = uVar1;
        }
      }
      iVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar14,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar3 != 0) {
        lVar4 = plVar5[3];
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar12 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Arcade')*/ uRam0000000003d69068,0);
        if (((lVar4 == 0) ||
            (/*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar4,uVar12,&lStack_d0,uRam0000000003d574e0), lStack_d0 == 0)) ||
           (lVar4 = *(long *)(lStack_d0 + 0x28), lVar4 == 0)) goto code_r0x01489254;
        if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
          uVar11 = 0;
          uVar10 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
          do {
            if (uVar10 <= uVar11) goto code_r0x01489258;
            uVar9 = *(undefined8 *)(lVar4 + 0x20 + uVar11 * 8);
            uVar12 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar12 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar12,0);
            iVar3 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar9,uVar12,0);
            if (iVar3 != 0) {
              if (plVar5[4] == 0) goto code_r0x01489254;
              /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar5[4],/*STR('CHAR_SELECT_UNLOCK_ARCADE_DESC')*/ uRam0000000003d69a08,&uStack_d8,0);
              *puVar14 = uStack_d8;
              break;
            }
            uVar11 = uVar11 + 1;
            uVar10 = (ulong)*(uint *)(lVar4 + 0x18);
          } while ((long)uVar11 < (long)(int)*(uint *)(lVar4 + 0x18));
        }
      }
      iVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar14,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar3 != 0) {
        if ((plVar5[3] == 0) ||
           (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar5[3],&lStack_a8,uRam0000000003d57590), lStack_a8 == 0))
        goto code_r0x01489254;
        plVar6 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_a8,uRam0000000003d3fe40);
        if (plVar6 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        do {
          lVar4 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x01488f88;
              }
              piVar13 = piVar13 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488f88:
          uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if ((uVar11 & 1) == 0) {
            aiStack_108[(int)uVar15] = 0x378;
            goto joined_r0x01489108;
          }
          lVar4 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x01488fe4;
              }
              piVar13 = piVar13 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488fe4:
          plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
          if (plVar8 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          if ((*(byte *)(*plVar8 + 300) < *(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300)) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300) * 8
                       + -8) != /*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70)) {
            func_0x00f78e5c(plVar8);
            goto code_r0x014892b8;
          }
          lVar4 = plVar8[4];
          uVar12 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar12 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar12,0);
          uVar11 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(lVar4,uVar12,0);
        } while ((uVar11 & 1) == 0);
        if (plVar5[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar5[4],/*STR('CHAR_SELECT_UNLOCK_LEAGUE_DESC')*/ uRam0000000003d69a20,&uStack_e0,0);
        uVar12 = uStack_e0;
        if (plVar5[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        uVar9 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(plVar5[4],plVar8[7],0);
        uVar11 = /*System.String$$Format*/ func_0x029bc688(uVar12,uVar9,0);
        *puVar14 = uVar11;
        aiStack_108[(int)uVar15] = 0x378;
joined_r0x01489108:
        uStack_e8 = uStack_e8 + 1;
        if (plVar6 != (long *)0x0) {
          lVar4 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x01489160;
              }
              piVar13 = piVar13 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01489160:
          (*(code *)*puVar7)(plVar6,puVar7[1]);
        }
      }
      iVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar14,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar3 == 0) {
code_r0x014891b4:
        return *puVar14;
      }
      if (plVar5[4] != 0) {
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar5[4],/*STR('CHAR_SELECT_UNLOCK_COMINGSOON')*/ uRam0000000003d69a18,puVar14,0);
        goto code_r0x014891b4;
      }
      goto code_r0x01489254;
    }
  }
  func_0x00f78af4();
code_r0x014892b8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14892bc);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x148824c | Atlas.UI.LoadoutMetagameData.get_EnableImageMask
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01488730) */
/* WARNING: Removing unreachable block (ram,0x01489280) */

ulong Atlas_UI_LoadoutMetagameData__get_EnableImageMask(long param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  int *piVar13;
  ulong *puVar14;
  uint uVar15;
  int aiStack_f8 [8];
  uint uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    return (ulong)*(byte *)(*(long *)(param_1 + 0x30) + 0x61);
  }
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003eb4955 & 1) == 0) {
    func_0x00f78a20(0x3d2dc40);
    bRam0000000003eb4955 = 1;
  }
  if ((*(long *)(lVar4 + 0x30) != 0) &&
     (uVar5 = /*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(*(long *)(lVar4 + 0x30),0), *(long *)(uVar5 + 8) != 0)) {
    return uVar5;
  }
  plVar6 = (long *)func_0x00f78af4();
  if ((bRam0000000003eb4956 & 1) == 0) {
    func_0x00f78a20(0x3d20618);
    func_0x00f78a20(0x3d20650);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57548);
    func_0x00f78a20(0x3d57550);
    func_0x00f78a20(0x3d57590);
    func_0x00f78a20(0x3d575b0);
    func_0x00f78a20(0x3d574e0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d22e70);
    func_0x00f78a20(0x3d3fe40);
    func_0x00f78a20(0x3d247f0);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d69a30);
    func_0x00f78a20(0x3d69a28);
    func_0x00f78a20(0x3d69068);
    func_0x00f78a20(0x3d69a10);
    func_0x00f78a20(0x3d69a20);
    func_0x00f78a20(0x3d69a18);
    func_0x00f78a20(0x3d69a08);
    bRam0000000003eb4956 = 1;
  }
  uStack_a0 = 0;
  lStack_98 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  lStack_c0 = 0;
  uStack_b8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_d8 = 0;
  puVar14 = (ulong *)(plVar6 + 5);
  iVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar14,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar3 == 0) goto code_r0x014891b4;
  if ((plVar6[3] == 0) ||
     (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar6[3],&lStack_98,uRam0000000003d57548), lStack_98 == 0)) {
code_r0x01489254:
    func_0x00f78af4();
code_r0x01489258:
    uVar10 = func_0x00f78b24();
    func_0x00f78ac0(uVar10,0);
  }
  else {
    plVar7 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_98,uRam0000000003d3fe40);
    if (plVar7 != (long *)0x0) {
      do {
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar5 != 0) {
          piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar8 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x014884f4;
            }
            piVar13 = piVar13 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014884f4:
        uVar5 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar5 & 1) == 0) break;
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar5 != 0) {
          piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar8 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x01488550;
            }
            piVar13 = piVar13 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488550:
        plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        if (plVar9 != (long *)0x0) {
          if ((*(byte *)(*plVar9 + 300) < *(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300)) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300) * 8
                       + -8) != /*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618)) {
            func_0x00f78e5c(plVar9,/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
            goto code_r0x014892b8;
          }
        }
        iVar3 = 0;
        while( true ) {
          if (((*(ushort *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xe0) == 0)) {
            func_0x00f78ad0(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
          }
          if (**(int **)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xb8) <= iVar3) {
            uVar5 = *puVar14;
            goto code_r0x0148868c;
          }
          if (plVar9 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          uVar10 = /*Atlas.Definitions.ChapterDefinition$$GetRankRewardIdByIndex*/ func_0x01540970(plVar9,iVar3,0);
          uVar11 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar11,0);
          uVar5 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar10,uVar11,0);
          if ((uVar5 & 1) != 0) break;
          iVar3 = iVar3 + 1;
        }
        if (plVar6[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar6[4],/*STR('CHAR_SELECT_UNLOCK_CHAPTER_DESC')*/ uRam0000000003d69a10,&uStack_a0,0);
        if (plVar6[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar6[4],plVar9[6],&uStack_a8,0);
        uVar5 = /*System.String$$Format*/ func_0x029bc688(uStack_a0,uStack_a8,0);
        *puVar14 = uVar5;
code_r0x0148868c:
        uVar5 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar5,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      } while ((uVar5 & 1) == 0);
      aiStack_f8[0] = 199;
      uStack_d8 = 1;
      if (plVar7 != (long *)0x0) {
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar5 != 0) {
          piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
              puVar8 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x0148871c;
            }
            piVar13 = piVar13 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0148871c:
        (*(code *)*puVar8)(plVar7,puVar8[1]);
      }
      if (aiStack_f8[0] == 199) {
        uStack_d8 = 0;
      }
      uVar15 = (uint)(aiStack_f8[0] != 199);
      iVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar14,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar3 != 0) {
        if ((plVar6[3] == 0) ||
           (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar6[3],&lStack_98,uRam0000000003d57550), lStack_98 == 0))
        goto code_r0x01489254;
        plVar7 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_98,uRam0000000003d3fe40);
        if (plVar7 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        do {
          lVar4 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar5 != 0) {
            piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar8 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x0148882c;
              }
              piVar13 = piVar13 + 4;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          puVar8 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x0148882c:
          uVar5 = (*(code *)*puVar8)(plVar7,puVar8[1]);
          if ((uVar5 & 1) == 0) break;
          lVar4 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar5 != 0) {
            piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                puVar8 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x01488888;
              }
              piVar13 = piVar13 + 4;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          puVar8 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488888:
          plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
          if (plVar9 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          if ((*(byte *)(*plVar9 + 300) < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8
                       + -8) != /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
            func_0x00f78e5c(plVar9);
            goto code_r0x014892b8;
          }
          iVar3 = 0;
          do {
            uVar10 = /*Atlas.Definitions.CharacterDefinition$$GetXpRewardIdByIndex*/ func_0x015410f4(plVar9,iVar3,0);
            uVar11 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar11,0);
            uVar5 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar10,uVar11,0);
            if ((uVar5 & 1) != 0) {
              if (plVar6[4] == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar6[4],/*STR('CHAR_SELECT_UNLOCK_RANK_DESC')*/ uRam0000000003d69a28,&uStack_b0,0);
              uVar10 = uStack_b0;
              if (plVar6[4] == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              uVar11 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(plVar6[4],plVar9[6],0);
              uVar5 = /*System.String$$Format*/ func_0x029bc688(uVar10,uVar11,0);
              *puVar14 = uVar5;
              goto code_r0x01488994;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 != 3);
          uVar5 = *puVar14;
code_r0x01488994:
          uVar5 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar5,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
        } while ((uVar5 & 1) == 0);
        aiStack_f8[(int)uVar15] = 0x18d;
        uVar1 = uStack_d8;
        uVar15 = uStack_d8 + 1;
        uStack_d8 = uVar15;
        if (plVar7 != (long *)0x0) {
          lVar4 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar5 != 0) {
            piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar8 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x01488a30;
              }
              piVar13 = piVar13 + 4;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          puVar8 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488a30:
          (*(code *)*puVar8)(plVar7,puVar8[1]);
        }
        if ((uVar15 != 0) && (aiStack_f8[(int)uVar1] == 0x18d)) {
          uVar15 = uVar1;
          uStack_d8 = uVar1;
        }
      }
      iVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar14,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar3 != 0) {
        if ((plVar6[3] == 0) ||
           (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar6[3],&lStack_98,uRam0000000003d575b0), lStack_98 == 0))
        goto code_r0x01489254;
        plVar7 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_98,uRam0000000003d3fe40);
        if (plVar7 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        do {
          lVar4 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar5 != 0) {
            piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar8 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x01488b30;
              }
              piVar13 = piVar13 + 4;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          puVar8 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488b30:
          uVar5 = (*(code *)*puVar8)(plVar7,puVar8[1]);
          if ((uVar5 & 1) == 0) break;
          lVar4 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar5 != 0) {
            piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                puVar8 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x01488b8c;
              }
              piVar13 = piVar13 + 4;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          puVar8 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488b8c:
          plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
          if (plVar9 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          if ((*(byte *)(*plVar9 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300)) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8
                       + -8) != /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0)) {
            func_0x00f78e5c(plVar9);
            goto code_r0x014892b8;
          }
          lVar4 = plVar9[8];
          if (lVar4 == 0) {
code_r0x014891e0:
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          uVar5 = 0;
          while ((long)uVar5 < (long)(int)*(uint *)(lVar4 + 0x18)) {
            if (*(uint *)(lVar4 + 0x18) <= uVar5) {
              uVar10 = func_0x00f78b24();
              func_0x00f78ac0(uVar10,0);
              goto code_r0x014892b8;
            }
            uVar11 = *(undefined8 *)(lVar4 + uVar5 * 8 + 0x20);
            uVar10 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar10 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar10,0);
            uVar12 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar11,uVar10,0);
            if ((uVar12 & 1) != 0) {
              if (plVar6[4] == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar6[4],/*STR('CHAR_SELECT_UNLOCK_SEASONAL_DESC')*/ uRam0000000003d69a30,&uStack_b8,0);
              uVar10 = uStack_b8;
              if (plVar6[4] == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              uVar11 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(plVar6[4],plVar9[4],0);
              uVar5 = /*System.String$$Format*/ func_0x029bc688(uVar10,uVar11,0);
              *puVar14 = uVar5;
              goto code_r0x01488cac;
            }
            uVar5 = uVar5 + 1;
            lVar4 = plVar9[8];
            if (lVar4 == 0) goto code_r0x014891e0;
          }
          uVar5 = *puVar14;
code_r0x01488cac:
          uVar5 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar5,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
        } while ((uVar5 & 1) == 0);
        aiStack_f8[(int)uVar15] = 0x260;
        uVar1 = uStack_d8;
        uVar15 = uStack_d8 + 1;
        uStack_d8 = uVar15;
        if (plVar7 != (long *)0x0) {
          lVar4 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar5 != 0) {
            piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar8 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x01488d48;
              }
              piVar13 = piVar13 + 4;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          puVar8 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488d48:
          (*(code *)*puVar8)(plVar7,puVar8[1]);
        }
        if ((uVar15 != 0) && (aiStack_f8[(int)uVar1] == 0x260)) {
          uVar15 = uVar1;
          uStack_d8 = uVar1;
        }
      }
      iVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar14,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar3 != 0) {
        lVar4 = plVar6[3];
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar10 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Arcade')*/ uRam0000000003d69068,0);
        if (((lVar4 == 0) ||
            (/*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar4,uVar10,&lStack_c0,uRam0000000003d574e0), lStack_c0 == 0)) ||
           (lVar4 = *(long *)(lStack_c0 + 0x28), lVar4 == 0)) goto code_r0x01489254;
        if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
          uVar5 = 0;
          uVar12 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
          do {
            if (uVar12 <= uVar5) goto code_r0x01489258;
            uVar11 = *(undefined8 *)(lVar4 + 0x20 + uVar5 * 8);
            uVar10 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar10 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar10,0);
            iVar3 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar11,uVar10,0);
            if (iVar3 != 0) {
              if (plVar6[4] == 0) goto code_r0x01489254;
              /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar6[4],/*STR('CHAR_SELECT_UNLOCK_ARCADE_DESC')*/ uRam0000000003d69a08,&uStack_c8,0);
              *puVar14 = uStack_c8;
              break;
            }
            uVar5 = uVar5 + 1;
            uVar12 = (ulong)*(uint *)(lVar4 + 0x18);
          } while ((long)uVar5 < (long)(int)*(uint *)(lVar4 + 0x18));
        }
      }
      iVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar14,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar3 != 0) {
        if ((plVar6[3] == 0) ||
           (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar6[3],&lStack_98,uRam0000000003d57590), lStack_98 == 0))
        goto code_r0x01489254;
        plVar7 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_98,uRam0000000003d3fe40);
        if (plVar7 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        do {
          lVar4 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar5 != 0) {
            piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar8 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x01488f88;
              }
              piVar13 = piVar13 + 4;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          puVar8 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488f88:
          uVar5 = (*(code *)*puVar8)(plVar7,puVar8[1]);
          if ((uVar5 & 1) == 0) {
            aiStack_f8[(int)uVar15] = 0x378;
            goto joined_r0x01489108;
          }
          lVar4 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar5 != 0) {
            piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                puVar8 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x01488fe4;
              }
              piVar13 = piVar13 + 4;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          puVar8 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488fe4:
          plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
          if (plVar9 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          if ((*(byte *)(*plVar9 + 300) < *(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300)) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300) * 8
                       + -8) != /*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70)) {
            func_0x00f78e5c(plVar9);
            goto code_r0x014892b8;
          }
          lVar4 = plVar9[4];
          uVar10 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar10 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar10,0);
          uVar5 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(lVar4,uVar10,0);
        } while ((uVar5 & 1) == 0);
        if (plVar6[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar6[4],/*STR('CHAR_SELECT_UNLOCK_LEAGUE_DESC')*/ uRam0000000003d69a20,&uStack_d0,0);
        uVar10 = uStack_d0;
        if (plVar6[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        uVar11 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(plVar6[4],plVar9[7],0);
        uVar5 = /*System.String$$Format*/ func_0x029bc688(uVar10,uVar11,0);
        *puVar14 = uVar5;
        aiStack_f8[(int)uVar15] = 0x378;
joined_r0x01489108:
        uStack_d8 = uStack_d8 + 1;
        if (plVar7 != (long *)0x0) {
          lVar4 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar5 != 0) {
            piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar8 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x01489160;
              }
              piVar13 = piVar13 + 4;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          puVar8 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01489160:
          (*(code *)*puVar8)(plVar7,puVar8[1]);
        }
      }
      iVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(*puVar14,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar3 == 0) {
code_r0x014891b4:
        return *puVar14;
      }
      if (plVar6[4] != 0) {
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar6[4],/*STR('CHAR_SELECT_UNLOCK_COMINGSOON')*/ uRam0000000003d69a18,puVar14,0);
        goto code_r0x014891b4;
      }
      goto code_r0x01489254;
    }
  }
  func_0x00f78af4();
code_r0x014892b8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14892bc);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x148826c | Atlas.UI.LoadoutMetagameData.get_BackingColour
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01488730) */
/* WARNING: Removing unreachable block (ram,0x01489280) */

long Atlas_UI_LoadoutMetagameData__get_BackingColour(long param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  uint uVar15;
  int aiStack_e8 [8];
  uint uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  if ((bRam0000000003eb4955 & 1) == 0) {
    func_0x00f78a20(0x3d2dc40);
    bRam0000000003eb4955 = 1;
  }
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar4 = /*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(*(long *)(param_1 + 0x30),0), *(long *)(lVar4 + 8) != 0)) {
    return lVar4;
  }
  plVar5 = (long *)func_0x00f78af4();
  if ((bRam0000000003eb4956 & 1) == 0) {
    func_0x00f78a20(0x3d20618);
    func_0x00f78a20(0x3d20650);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57548);
    func_0x00f78a20(0x3d57550);
    func_0x00f78a20(0x3d57590);
    func_0x00f78a20(0x3d575b0);
    func_0x00f78a20(0x3d574e0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d22e70);
    func_0x00f78a20(0x3d3fe40);
    func_0x00f78a20(0x3d247f0);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d69a30);
    func_0x00f78a20(0x3d69a28);
    func_0x00f78a20(0x3d69068);
    func_0x00f78a20(0x3d69a10);
    func_0x00f78a20(0x3d69a20);
    func_0x00f78a20(0x3d69a18);
    func_0x00f78a20(0x3d69a08);
    bRam0000000003eb4956 = 1;
  }
  uStack_90 = 0;
  lStack_88 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  lStack_b0 = 0;
  uStack_a8 = 0;
  uStack_c0 = 0;
  lStack_b8 = 0;
  uStack_c8 = 0;
  plVar14 = plVar5 + 5;
  iVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(*plVar14,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar3 == 0) goto code_r0x014891b4;
  if ((plVar5[3] == 0) ||
     (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar5[3],&lStack_88,uRam0000000003d57548), lStack_88 == 0)) {
code_r0x01489254:
    func_0x00f78af4();
code_r0x01489258:
    uVar9 = func_0x00f78b24();
    func_0x00f78ac0(uVar9,0);
  }
  else {
    plVar6 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_88,uRam0000000003d3fe40);
    if (plVar6 != (long *)0x0) {
      do {
        lVar4 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar7 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x014884f4;
            }
            piVar13 = piVar13 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014884f4:
        uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar12 & 1) == 0) break;
        lVar4 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar7 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x01488550;
            }
            piVar13 = piVar13 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488550:
        plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        if (plVar8 != (long *)0x0) {
          if ((*(byte *)(*plVar8 + 300) < *(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300)) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300) * 8
                       + -8) != /*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618)) {
            func_0x00f78e5c(plVar8,/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
            goto code_r0x014892b8;
          }
        }
        iVar3 = 0;
        while( true ) {
          if (((*(ushort *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xe0) == 0)) {
            func_0x00f78ad0(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
          }
          if (**(int **)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xb8) <= iVar3) {
            lVar4 = *plVar14;
            goto code_r0x0148868c;
          }
          if (plVar8 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          uVar9 = /*Atlas.Definitions.ChapterDefinition$$GetRankRewardIdByIndex*/ func_0x01540970(plVar8,iVar3,0);
          uVar10 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar10 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar10,0);
          uVar12 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar9,uVar10,0);
          if ((uVar12 & 1) != 0) break;
          iVar3 = iVar3 + 1;
        }
        if (plVar5[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar5[4],/*STR('CHAR_SELECT_UNLOCK_CHAPTER_DESC')*/ uRam0000000003d69a10,&uStack_90,0);
        if (plVar5[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar5[4],plVar8[6],&uStack_98,0);
        lVar4 = /*System.String$$Format*/ func_0x029bc688(uStack_90,uStack_98,0);
        *plVar14 = lVar4;
code_r0x0148868c:
        uVar12 = /*System.String$$op_Inequality*/ func_0x029bd9d4(lVar4,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      } while ((uVar12 & 1) == 0);
      aiStack_e8[0] = 199;
      uStack_c8 = 1;
      if (plVar6 != (long *)0x0) {
        lVar4 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
              puVar7 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x0148871c;
            }
            piVar13 = piVar13 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0148871c:
        (*(code *)*puVar7)(plVar6,puVar7[1]);
      }
      if (aiStack_e8[0] == 199) {
        uStack_c8 = 0;
      }
      uVar15 = (uint)(aiStack_e8[0] != 199);
      iVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(*plVar14,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar3 != 0) {
        if ((plVar5[3] == 0) ||
           (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar5[3],&lStack_88,uRam0000000003d57550), lStack_88 == 0))
        goto code_r0x01489254;
        plVar6 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_88,uRam0000000003d3fe40);
        if (plVar6 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        do {
          lVar4 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x0148882c;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x0148882c:
          uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if ((uVar12 & 1) == 0) break;
          lVar4 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x01488888;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488888:
          plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
          if (plVar8 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          if ((*(byte *)(*plVar8 + 300) < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8
                       + -8) != /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
            func_0x00f78e5c(plVar8);
            goto code_r0x014892b8;
          }
          iVar3 = 0;
          do {
            uVar9 = /*Atlas.Definitions.CharacterDefinition$$GetXpRewardIdByIndex*/ func_0x015410f4(plVar8,iVar3,0);
            uVar10 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar10 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar10,0);
            uVar12 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar9,uVar10,0);
            if ((uVar12 & 1) != 0) {
              if (plVar5[4] == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar5[4],/*STR('CHAR_SELECT_UNLOCK_RANK_DESC')*/ uRam0000000003d69a28,&uStack_a0,0);
              uVar9 = uStack_a0;
              if (plVar5[4] == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              uVar10 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(plVar5[4],plVar8[6],0);
              lVar4 = /*System.String$$Format*/ func_0x029bc688(uVar9,uVar10,0);
              *plVar14 = lVar4;
              goto code_r0x01488994;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 != 3);
          lVar4 = *plVar14;
code_r0x01488994:
          uVar12 = /*System.String$$op_Inequality*/ func_0x029bd9d4(lVar4,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
        } while ((uVar12 & 1) == 0);
        aiStack_e8[(int)uVar15] = 0x18d;
        uVar1 = uStack_c8;
        uVar15 = uStack_c8 + 1;
        uStack_c8 = uVar15;
        if (plVar6 != (long *)0x0) {
          lVar4 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x01488a30;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488a30:
          (*(code *)*puVar7)(plVar6,puVar7[1]);
        }
        if ((uVar15 != 0) && (aiStack_e8[(int)uVar1] == 0x18d)) {
          uVar15 = uVar1;
          uStack_c8 = uVar1;
        }
      }
      iVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(*plVar14,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar3 != 0) {
        if ((plVar5[3] == 0) ||
           (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar5[3],&lStack_88,uRam0000000003d575b0), lStack_88 == 0))
        goto code_r0x01489254;
        plVar6 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_88,uRam0000000003d3fe40);
        if (plVar6 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        do {
          lVar4 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x01488b30;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488b30:
          uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if ((uVar12 & 1) == 0) break;
          lVar4 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x01488b8c;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488b8c:
          plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
          if (plVar8 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          if ((*(byte *)(*plVar8 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300)) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8
                       + -8) != /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0)) {
            func_0x00f78e5c(plVar8);
            goto code_r0x014892b8;
          }
          lVar4 = plVar8[8];
          if (lVar4 == 0) {
code_r0x014891e0:
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          uVar12 = 0;
          while ((long)uVar12 < (long)(int)*(uint *)(lVar4 + 0x18)) {
            if (*(uint *)(lVar4 + 0x18) <= uVar12) {
              uVar9 = func_0x00f78b24();
              func_0x00f78ac0(uVar9,0);
              goto code_r0x014892b8;
            }
            uVar10 = *(undefined8 *)(lVar4 + uVar12 * 8 + 0x20);
            uVar9 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar9 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar9,0);
            uVar11 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar10,uVar9,0);
            if ((uVar11 & 1) != 0) {
              if (plVar5[4] == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar5[4],/*STR('CHAR_SELECT_UNLOCK_SEASONAL_DESC')*/ uRam0000000003d69a30,&uStack_a8,0);
              uVar9 = uStack_a8;
              if (plVar5[4] == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              uVar10 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(plVar5[4],plVar8[4],0);
              lVar4 = /*System.String$$Format*/ func_0x029bc688(uVar9,uVar10,0);
              *plVar14 = lVar4;
              goto code_r0x01488cac;
            }
            uVar12 = uVar12 + 1;
            lVar4 = plVar8[8];
            if (lVar4 == 0) goto code_r0x014891e0;
          }
          lVar4 = *plVar14;
code_r0x01488cac:
          uVar12 = /*System.String$$op_Inequality*/ func_0x029bd9d4(lVar4,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
        } while ((uVar12 & 1) == 0);
        aiStack_e8[(int)uVar15] = 0x260;
        uVar1 = uStack_c8;
        uVar15 = uStack_c8 + 1;
        uStack_c8 = uVar15;
        if (plVar6 != (long *)0x0) {
          lVar4 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x01488d48;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488d48:
          (*(code *)*puVar7)(plVar6,puVar7[1]);
        }
        if ((uVar15 != 0) && (aiStack_e8[(int)uVar1] == 0x260)) {
          uVar15 = uVar1;
          uStack_c8 = uVar1;
        }
      }
      iVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(*plVar14,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar3 != 0) {
        lVar4 = plVar5[3];
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar9 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Arcade')*/ uRam0000000003d69068,0);
        if (((lVar4 == 0) ||
            (/*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar4,uVar9,&lStack_b0,uRam0000000003d574e0), lStack_b0 == 0)) ||
           (lVar4 = *(long *)(lStack_b0 + 0x28), lVar4 == 0)) goto code_r0x01489254;
        if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
          uVar12 = 0;
          uVar11 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
          do {
            if (uVar11 <= uVar12) goto code_r0x01489258;
            uVar10 = *(undefined8 *)(lVar4 + 0x20 + uVar12 * 8);
            uVar9 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar9 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar9,0);
            iVar3 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar10,uVar9,0);
            if (iVar3 != 0) {
              if (plVar5[4] == 0) goto code_r0x01489254;
              /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar5[4],/*STR('CHAR_SELECT_UNLOCK_ARCADE_DESC')*/ uRam0000000003d69a08,&lStack_b8,0);
              *plVar14 = lStack_b8;
              break;
            }
            uVar12 = uVar12 + 1;
            uVar11 = (ulong)*(uint *)(lVar4 + 0x18);
          } while ((long)uVar12 < (long)(int)*(uint *)(lVar4 + 0x18));
        }
      }
      iVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(*plVar14,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar3 != 0) {
        if ((plVar5[3] == 0) ||
           (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(plVar5[3],&lStack_88,uRam0000000003d57590), lStack_88 == 0))
        goto code_r0x01489254;
        plVar6 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_88,uRam0000000003d3fe40);
        if (plVar6 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        do {
          lVar4 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x01488f88;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488f88:
          uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if ((uVar12 & 1) == 0) {
            aiStack_e8[(int)uVar15] = 0x378;
            goto joined_r0x01489108;
          }
          lVar4 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x01488fe4;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488fe4:
          plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
          if (plVar8 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          if ((*(byte *)(*plVar8 + 300) < *(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300)) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300) * 8
                       + -8) != /*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70)) {
            func_0x00f78e5c(plVar8);
            goto code_r0x014892b8;
          }
          lVar4 = plVar8[4];
          uVar9 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar9 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar9,0);
          uVar12 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(lVar4,uVar9,0);
        } while ((uVar12 & 1) == 0);
        if (plVar5[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar5[4],/*STR('CHAR_SELECT_UNLOCK_LEAGUE_DESC')*/ uRam0000000003d69a20,&uStack_c0,0);
        uVar9 = uStack_c0;
        if (plVar5[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        uVar10 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(plVar5[4],plVar8[7],0);
        lVar4 = /*System.String$$Format*/ func_0x029bc688(uVar9,uVar10,0);
        *plVar14 = lVar4;
        aiStack_e8[(int)uVar15] = 0x378;
joined_r0x01489108:
        uStack_c8 = uStack_c8 + 1;
        if (plVar6 != (long *)0x0) {
          lVar4 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x01489160;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01489160:
          (*(code *)*puVar7)(plVar6,puVar7[1]);
        }
      }
      iVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(*plVar14,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar3 == 0) {
code_r0x014891b4:
        return *plVar14;
      }
      if (plVar5[4] != 0) {
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(plVar5[4],/*STR('CHAR_SELECT_UNLOCK_COMINGSOON')*/ uRam0000000003d69a18,plVar14,0);
        goto code_r0x014891b4;
      }
      goto code_r0x01489254;
    }
  }
  func_0x00f78af4();
code_r0x014892b8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14892bc);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x14882cc | Atlas.UI.LoadoutMetagameData.UnlockDescription
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01488730) */
/* WARNING: Removing unreachable block (ram,0x01489280) */

long Atlas_UI_LoadoutMetagameData__UnlockDescription(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  uint uVar14;
  int aiStack_c8 [8];
  uint uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  if ((bRam0000000003eb4956 & 1) == 0) {
    func_0x00f78a20(0x3d20618);
    func_0x00f78a20(0x3d20650);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57548);
    func_0x00f78a20(0x3d57550);
    func_0x00f78a20(0x3d57590);
    func_0x00f78a20(0x3d575b0);
    func_0x00f78a20(0x3d574e0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d22e70);
    func_0x00f78a20(0x3d3fe40);
    func_0x00f78a20(0x3d247f0);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d69a30);
    func_0x00f78a20(0x3d69a28);
    func_0x00f78a20(0x3d69068);
    func_0x00f78a20(0x3d69a10);
    func_0x00f78a20(0x3d69a20);
    func_0x00f78a20(0x3d69a18);
    func_0x00f78a20(0x3d69a08);
    bRam0000000003eb4956 = 1;
  }
  uStack_70 = 0;
  lStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_90 = 0;
  uStack_88 = 0;
  uStack_a0 = 0;
  lStack_98 = 0;
  uStack_a8 = 0;
  plVar13 = param_1 + 5;
  iVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(*plVar13,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
  if (iVar3 == 0) goto LAB_014891b4;
  if ((param_1[3] == 0) ||
     (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(param_1[3],&lStack_68,uRam0000000003d57548), lStack_68 == 0)) {
LAB_01489254:
    func_0x00f78af4();
code_r0x01489258:
    uVar7 = func_0x00f78b24();
    func_0x00f78ac0(uVar7,0);
  }
  else {
    plVar4 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_68,uRam0000000003d3fe40);
    if (plVar4 != (long *)0x0) {
      do {
        lVar10 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_014884f4;
            }
            piVar12 = piVar12 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
LAB_014884f4:
        uVar11 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar11 & 1) == 0) break;
        lVar10 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x01488550;
            }
            piVar12 = piVar12 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488550:
        plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (plVar6 != (long *)0x0) {
          if ((*(byte *)(*plVar6 + 300) < *(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300)) ||
             (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300) * 8
                       + -8) != /*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618)) {
            func_0x00f78e5c(plVar6,/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
            goto code_r0x014892b8;
          }
        }
        iVar3 = 0;
        while( true ) {
          if (((*(ushort *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xe0) == 0)) {
            func_0x00f78ad0(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618);
          }
          if (**(int **)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xb8) <= iVar3) {
            lVar10 = *plVar13;
            goto code_r0x0148868c;
          }
          if (plVar6 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          uVar7 = /*Atlas.Definitions.ChapterDefinition$$GetRankRewardIdByIndex*/ func_0x01540970(plVar6,iVar3,0);
          uVar8 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar8,0);
          uVar11 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar7,uVar8,0);
          if ((uVar11 & 1) != 0) break;
          iVar3 = iVar3 + 1;
        }
        if (param_1[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(param_1[4],/*STR('CHAR_SELECT_UNLOCK_CHAPTER_DESC')*/ uRam0000000003d69a10,&uStack_70,0);
        if (param_1[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(param_1[4],plVar6[6],&uStack_78,0);
        lVar10 = /*System.String$$Format*/ func_0x029bc688(uStack_70,uStack_78,0);
        *plVar13 = lVar10;
code_r0x0148868c:
        uVar11 = /*System.String$$op_Inequality*/ func_0x029bd9d4(lVar10,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      } while ((uVar11 & 1) == 0);
      aiStack_c8[0] = 199;
      uStack_a8 = 1;
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x0148871c;
            }
            piVar12 = piVar12 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0148871c:
        (*(code *)*puVar5)(plVar4,puVar5[1]);
      }
      if (aiStack_c8[0] == 199) {
        uStack_a8 = 0;
      }
      uVar14 = (uint)(aiStack_c8[0] != 199);
      iVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(*plVar13,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar3 != 0) {
        if ((param_1[3] == 0) ||
           (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(param_1[3],&lStack_68,uRam0000000003d57550), lStack_68 == 0))
        goto LAB_01489254;
        plVar4 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_68,uRam0000000003d3fe40);
        if (plVar4 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        do {
          lVar10 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto code_r0x0148882c;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x0148882c:
          uVar11 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          if ((uVar11 & 1) == 0) break;
          lVar10 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto code_r0x01488888;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488888:
          plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
          if (plVar6 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          if ((*(byte *)(*plVar6 + 300) < *(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300)) ||
             (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8
                       + -8) != /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
            func_0x00f78e5c(plVar6);
            goto code_r0x014892b8;
          }
          iVar3 = 0;
          do {
            uVar7 = /*Atlas.Definitions.CharacterDefinition$$GetXpRewardIdByIndex*/ func_0x015410f4(plVar6,iVar3,0);
            uVar8 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar8,0);
            uVar11 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar7,uVar8,0);
            if ((uVar11 & 1) != 0) {
              if (param_1[4] == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(param_1[4],/*STR('CHAR_SELECT_UNLOCK_RANK_DESC')*/ uRam0000000003d69a28,&uStack_80,0);
              uVar7 = uStack_80;
              if (param_1[4] == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              uVar8 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(param_1[4],plVar6[6],0);
              lVar10 = /*System.String$$Format*/ func_0x029bc688(uVar7,uVar8,0);
              *plVar13 = lVar10;
              goto code_r0x01488994;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 != 3);
          lVar10 = *plVar13;
code_r0x01488994:
          uVar11 = /*System.String$$op_Inequality*/ func_0x029bd9d4(lVar10,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
        } while ((uVar11 & 1) == 0);
        aiStack_c8[(int)uVar14] = 0x18d;
        uVar1 = uStack_a8;
        uVar14 = uStack_a8 + 1;
        uStack_a8 = uVar14;
        if (plVar4 != (long *)0x0) {
          lVar10 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto code_r0x01488a30;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488a30:
          (*(code *)*puVar5)(plVar4,puVar5[1]);
        }
        if ((uVar14 != 0) && (aiStack_c8[(int)uVar1] == 0x18d)) {
          uVar14 = uVar1;
          uStack_a8 = uVar1;
        }
      }
      iVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(*plVar13,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar3 != 0) {
        if ((param_1[3] == 0) ||
           (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(param_1[3],&lStack_68,uRam0000000003d575b0), lStack_68 == 0))
        goto LAB_01489254;
        plVar4 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_68,uRam0000000003d3fe40);
        if (plVar4 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        do {
          lVar10 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto code_r0x01488b30;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488b30:
          uVar11 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          if ((uVar11 & 1) == 0) break;
          lVar10 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto code_r0x01488b8c;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488b8c:
          plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
          if (plVar6 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          if ((*(byte *)(*plVar6 + 300) < *(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300)) ||
             (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 300) * 8
                       + -8) != /*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0)) {
            func_0x00f78e5c(plVar6);
            goto code_r0x014892b8;
          }
          lVar10 = plVar6[8];
          if (lVar10 == 0) {
code_r0x014891e0:
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          uVar11 = 0;
          while ((long)uVar11 < (long)(int)*(uint *)(lVar10 + 0x18)) {
            if (*(uint *)(lVar10 + 0x18) <= uVar11) {
              uVar7 = func_0x00f78b24();
              func_0x00f78ac0(uVar7,0);
              goto code_r0x014892b8;
            }
            uVar8 = *(undefined8 *)(lVar10 + uVar11 * 8 + 0x20);
            uVar7 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar7,0);
            uVar9 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar8,uVar7,0);
            if ((uVar9 & 1) != 0) {
              if (param_1[4] == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(param_1[4],/*STR('CHAR_SELECT_UNLOCK_SEASONAL_DESC')*/ uRam0000000003d69a30,&uStack_88,0);
              uVar7 = uStack_88;
              if (param_1[4] == 0) {
                func_0x00f78af4();
                goto code_r0x014892b8;
              }
              uVar8 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(param_1[4],plVar6[4],0);
              lVar10 = /*System.String$$Format*/ func_0x029bc688(uVar7,uVar8,0);
              *plVar13 = lVar10;
              goto code_r0x01488cac;
            }
            uVar11 = uVar11 + 1;
            lVar10 = plVar6[8];
            if (lVar10 == 0) goto code_r0x014891e0;
          }
          lVar10 = *plVar13;
code_r0x01488cac:
          uVar11 = /*System.String$$op_Inequality*/ func_0x029bd9d4(lVar10,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
        } while ((uVar11 & 1) == 0);
        aiStack_c8[(int)uVar14] = 0x260;
        uVar1 = uStack_a8;
        uVar14 = uStack_a8 + 1;
        uStack_a8 = uVar14;
        if (plVar4 != (long *)0x0) {
          lVar10 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto code_r0x01488d48;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01488d48:
          (*(code *)*puVar5)(plVar4,puVar5[1]);
        }
        if ((uVar14 != 0) && (aiStack_c8[(int)uVar1] == 0x260)) {
          uVar14 = uVar1;
          uStack_a8 = uVar1;
        }
      }
      iVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(*plVar13,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar3 != 0) {
        lVar10 = param_1[3];
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Arcade')*/ uRam0000000003d69068,0);
        if (((lVar10 == 0) ||
            (/*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar10,uVar7,&lStack_90,uRam0000000003d574e0), lStack_90 == 0)) ||
           (lVar10 = *(long *)(lStack_90 + 0x28), lVar10 == 0)) goto LAB_01489254;
        if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
          uVar11 = 0;
          uVar9 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
          do {
            if (uVar9 <= uVar11) goto code_r0x01489258;
            uVar8 = *(undefined8 *)(lVar10 + 0x20 + uVar11 * 8);
            uVar7 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar7,0);
            iVar3 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar8,uVar7,0);
            if (iVar3 != 0) {
              if (param_1[4] == 0) goto LAB_01489254;
              /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(param_1[4],/*STR('CHAR_SELECT_UNLOCK_ARCADE_DESC')*/ uRam0000000003d69a08,&lStack_98,0);
              *plVar13 = lStack_98;
              break;
            }
            uVar11 = uVar11 + 1;
            uVar9 = (ulong)*(uint *)(lVar10 + 0x18);
          } while ((long)uVar11 < (long)(int)*(uint *)(lVar10 + 0x18));
        }
      }
      iVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(*plVar13,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar3 != 0) {
        if ((param_1[3] == 0) ||
           (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(param_1[3],&lStack_68,uRam0000000003d57590), lStack_68 == 0))
        goto LAB_01489254;
        plVar4 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_68,uRam0000000003d3fe40);
        if (plVar4 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        do {
          lVar10 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto code_r0x01488f88;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01488f88:
          uVar11 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          if ((uVar11 & 1) == 0) {
            aiStack_c8[(int)uVar14] = 0x378;
            goto joined_r0x01489108;
          }
          lVar10 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto code_r0x01488fe4;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x01488fe4:
          plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
          if (plVar6 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014892b8;
          }
          if ((*(byte *)(*plVar6 + 300) < *(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300)) ||
             (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(/*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70 + 300) * 8
                       + -8) != /*Atlas.League.LeagueDefinition_TypeInfo*/ lRam0000000003d22e70)) {
            func_0x00f78e5c(plVar6);
            goto code_r0x014892b8;
          }
          lVar10 = plVar6[4];
          uVar7 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar7,0);
          uVar11 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(lVar10,uVar7,0);
        } while ((uVar11 & 1) == 0);
        if (param_1[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(param_1[4],/*STR('CHAR_SELECT_UNLOCK_LEAGUE_DESC')*/ uRam0000000003d69a20,&uStack_a0,0);
        uVar7 = uStack_a0;
        if (param_1[4] == 0) {
          func_0x00f78af4();
          goto code_r0x014892b8;
        }
        uVar8 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(param_1[4],plVar6[7],0);
        lVar10 = /*System.String$$Format*/ func_0x029bc688(uVar7,uVar8,0);
        *plVar13 = lVar10;
        aiStack_c8[(int)uVar14] = 0x378;
joined_r0x01489108:
        uStack_a8 = uStack_a8 + 1;
        if (plVar4 != (long *)0x0) {
          lVar10 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto code_r0x01489160;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01489160:
          (*(code *)*puVar5)(plVar4,puVar5[1]);
        }
      }
      iVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(*plVar13,**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),0);
      if (iVar3 == 0) {
LAB_014891b4:
        return *plVar13;
      }
      if (param_1[4] != 0) {
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(param_1[4],/*STR('CHAR_SELECT_UNLOCK_COMINGSOON')*/ uRam0000000003d69a18,plVar13,0);
        goto LAB_014891b4;
      }
      goto LAB_01489254;
    }
  }
  func_0x00f78af4();
code_r0x014892b8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14892bc);
  (*pcVar2)();
}



