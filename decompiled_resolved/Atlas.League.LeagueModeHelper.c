// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.League.LeagueModeHelper

// ============================================================
// RVA: 0x147946c | Atlas.League.LeagueModeHelper.GenerateMapSelection
// ============================================================

long * Atlas_League_LeagueModeHelper__GenerateMapSelection(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uStack_68;
  
  if ((bRam0000000003eb48ae & 1) == 0) {
    func_0x00f78a20(0x3d2dc38);
    func_0x00f78a20(0x3d2fc38);
    func_0x00f78a20(0x3d2fc20);
    func_0x00f78a20(0x3d2fc78);
    func_0x00f78a20(0x3d2fc80);
    func_0x00f78a20(0x3d1c4a0);
    func_0x00f78a20(0x3d55910);
    func_0x00f78a20(0x3d22e88);
    func_0x00f78a20(0x3d1f1c8);
    func_0x00f78a20(0x3d240a8);
    func_0x00f78a20(0x3d6dad8);
    func_0x00f78a20(0x3d6dae0);
    func_0x00f78a20(0x3d6dac8);
    func_0x00f78a20(0x3d6dad0);
    bRam0000000003eb48ae = 1;
  }
  uStack_68 = 0;
  uVar3 = /*Atlas.League.LeagueModeHelper$$GetLeagueModeSeed*/ func_0x01479808(param_1);
  plVar4 = (long *)func_0x00f78aec(/*System.Random_TypeInfo*/ uRam0000000003d240a8);
  /*System.Random$$.ctor*/ func_0x0297f034(plVar4,uVar3,0);
  lVar5 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, int>_TypeInfo*/ uRam0000000003d1c4a0);
  /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$.ctor*/ func_0x01ece19c(lVar5,uRam0000000003d2fc20);
  if (lVar5 == 0) {
LAB_014797f0:
    func_0x00f78af4();
  }
  else {
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar5,/*STR('IP_FamilyGuy')*/ uRam0000000003d6dad0,0,uRam0000000003d2fc38);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar5,/*STR('IP_AmericanDad')*/ uRam0000000003d6dac8,0,uRam0000000003d2fc38);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar5,/*STR('IP_KingOfTheHill')*/ uRam0000000003d6dad8,0,uRam0000000003d2fc38);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar5,/*STR('IP_SolarOpposites')*/ uRam0000000003d6dae0,0,uRam0000000003d2fc38);
    if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar6 = (long *)func_0x00f78a34(/*Atlas.Definitions.MapDefinition[]_TypeInfo*/ uRam0000000003d1f1c8,
                                     *(undefined4 *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8));
    uVar10 = 0;
    while( true ) {
      if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((long)*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (long)uVar10) {
        if (plVar6 != (long *)0x0) {
          return plVar6;
        }
        goto LAB_014797f0;
      }
      uStack_68 = /*Atlas.League.LeagueModeHelper$$StartOfWeek*/ func_0x01479a50(param_1,1);
      uStack_68 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0((double)(int)uVar10,&uStack_68,0);
      uVar3 = /*System.DateTime$$get_DayOfWeek*/ func_0x02a8e2a0(&uStack_68,0);
      lVar7 = /*Atlas.League.LeagueModeHelper$$GetEligiblePool*/ func_0x01479860(uVar3,param_2);
      if ((lVar7 == 0) || (plVar4 == (long *)0x0)) goto LAB_014797f0;
      do {
        uVar1 = (**(code **)(*plVar4 + 0x188))
                          (plVar4,0,*(undefined4 *)(lVar7 + 0x18),*(undefined8 *)(*plVar4 + 400));
        if (*(uint *)(lVar7 + 0x18) <= uVar1) goto LAB_014797f4;
        lVar11 = *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        if (lVar11 == 0) goto LAB_014797f0;
        puVar8 = (undefined8 *)/*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(lVar11,0);
        uVar3 = *puVar8;
        uVar9 = /*System.Linq.Enumerable$$Contains<string>*/ func_0x01848bd8(plVar6,lVar11,uRam0000000003d55910);
      } while (((uVar9 & 1) != 0) ||
              (iVar2 = /*System.Collections.Generic.Dictionary<Type, int>$$get_Item*/ func_0x01ece608(lVar5,uVar3,uRam0000000003d2fc78), 1 < iVar2));
      if (plVar6 == (long *)0x0) goto LAB_014797f0;
      lVar7 = func_0x00f78adc(lVar11,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar7 == 0) goto LAB_01479800;
      if (*(uint *)(plVar6 + 3) <= uVar10) break;
      plVar6[uVar10 + 4] = lVar11;
      iVar2 = /*System.Collections.Generic.Dictionary<Type, int>$$get_Item*/ func_0x01ece608(lVar5,uVar3,uRam0000000003d2fc78);
      /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$set_Item*/ func_0x01ece6a4(lVar5,uVar3,iVar2 + 1,uRam0000000003d2fc80);
      uVar10 = uVar10 + 1;
    }
  }
LAB_014797f4:
  uVar3 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar3,0);
LAB_01479800:
    uVar3 = func_0x00f78b14();
  } while( true );
}



// ============================================================
// RVA: 0x1479808 | Atlas.League.LeagueModeHelper.GetLeagueModeSeed
// ============================================================

int Atlas_League_LeagueModeHelper__GetLeagueModeSeed(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uStack_28;
  
  uStack_28 = /*Atlas.League.LeagueModeHelper$$StartOfWeek*/ func_0x01479a50(param_1,1);
  iVar1 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&uStack_28,0);
  iVar2 = /*System.DateTime$$get_DayOfYear*/ func_0x02a8e2ec(&uStack_28,0);
  return iVar2 + iVar1 * 1000;
}



// ============================================================
// RVA: 0x1479858 | Atlas.League.LeagueModeHelper.FindFirstDayOfWeek
// ============================================================

void Atlas_League_LeagueModeHelper__FindFirstDayOfWeek(undefined8 param_1)

{
  int iVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  iVar1 = /*System.DateTime$$get_DayOfWeek*/ func_0x02a8e2a0(&uStack_28,0);
  uStack_30 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0((double)(((iVar1 + 6) / 7) * 7 - (iVar1 + 6)),&uStack_28,0);
  /*System.DateTime$$get_Date*/ func_0x02a8e25c(&uStack_30,0);
  return;
}



// ============================================================
// RVA: 0x1479860 | Atlas.League.LeagueModeHelper.GetEligiblePool
// ============================================================

undefined8 Atlas_League_LeagueModeHelper__GetEligiblePool(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [12];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb48af & 1) == 0) {
    func_0x00f78a20(0x3d27e40);
    func_0x00f78a20(0x3d2dc38);
    func_0x00f78a20(0x3d55e70);
    func_0x00f78a20(0x3d3b128);
    func_0x00f78a20(0x3d3b138);
    func_0x00f78a20(0x3d3b140);
    func_0x00f78a20(0x3d3b148);
    bRam0000000003eb48af = 1;
  }
  lVar5 = func_0x00f78aec(/*Atlas.League.LeagueModeDefinition.DaySchedule_TypeInfo*/ uRam0000000003d27e40);
  Atlas_League_LeagueModeDefinition_DaySchedule___ctor(lVar5,0);
  if ((param_2 != 0) && (lVar9 = *(long *)(param_2 + 0x48), lVar9 != 0)) {
    iVar4 = *(int *)(lVar9 + 0x18);
    if (0 < iVar4) {
      iVar3 = 0;
      do {
        if (iVar4 == iVar3) goto LAB_01479a44;
        lVar10 = *(long *)(lVar9 + (long)iVar3 * 8 + 0x20);
        if (lVar10 == 0) goto LAB_01479a40;
        if (*(int *)(lVar10 + 0x10) == (int)param_1) goto LAB_01479958;
        iVar3 = iVar3 + 1;
      } while (iVar4 != iVar3);
    }
    lVar10 = lVar5;
    if (lVar5 != 0) {
LAB_01479958:
      puVar7 = (undefined8 *)(param_2 + 0x40);
      if (*(int *)(lVar10 + 0x14) != 1) {
        puVar7 = (undefined8 *)(param_2 + 0x38);
      }
      lVar5 = /*System.Linq.Enumerable$$ToList<VolumeParameter>*/ func_0x01854f28(*puVar7,uRam0000000003d55e70);
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (-1 < (int)(uVar1 - 1)) {
          iVar4 = uVar1 - 2;
          while( true ) {
            if (uVar1 <= iVar4 + 1U) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar9 = *(long *)(*(long *)(lVar5 + 0x10) + (ulong)(iVar4 + 1U) * 8 + 0x20);
            uVar6 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar10 + 0x18),0);
            if ((uVar6 & 1) == 0) {
              param_1 = 0;
              param_2 = lVar5;
              if (lVar9 == 0) goto LAB_01479a40;
              puVar7 = (undefined8 *)/*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(lVar9,0);
              iVar3 = /*System.String$$op_Inequality*/ func_0x029bd9d4(*puVar7,*(undefined8 *)(lVar10 + 0x18),0);
              if (iVar3 != 0) {
                /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(lVar5,lVar9,uRam0000000003d3b128);
              }
            }
            if (iVar4 < 0) break;
            uVar1 = *(uint *)(lVar5 + 0x18);
            iVar4 = iVar4 + -1;
          }
        }
        uVar2 = *(undefined4 *)(lVar5 + 0x18);
        lVar9 = *(long *)(*(long *)(*(long *)(lRam0000000003d3b138 + 0x18) + 0xc0) + 8);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        uVar8 = func_0x00f78a34(lVar9,uVar2);
        /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(lVar5 + 0x10),0,uVar8,0,*(undefined4 *)(lVar5 + 0x18),0);
        return uVar8;
      }
    }
  }
LAB_01479a40:
  func_0x00f78af4();
LAB_01479a44:
  uVar8 = func_0x00f78b24();
  auVar11 = func_0x00f78ac0(uVar8,0);
  uStack_68 = auVar11._0_8_;
  puStack_48 = &Atlas_League_LeagueModeHelper__StartOfWeek;
  uStack_60 = param_1;
  lStack_58 = param_2;
  puStack_50 = &stack0xfffffffffffffff0;
  iVar4 = /*System.DateTime$$get_DayOfWeek*/ func_0x02a8e2a0(&uStack_68,0);
  iVar4 = (iVar4 - auVar11._8_4_) + 7;
  uStack_70 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0((double)((iVar4 / 7) * 7 - iVar4),&uStack_68,0);
  uVar8 = /*System.DateTime$$get_Date*/ func_0x02a8e25c(&uStack_70,0);
  return uVar8;
}



// ============================================================
// RVA: 0x1479a50 | Atlas.League.LeagueModeHelper.StartOfWeek
// ============================================================

void Atlas_League_LeagueModeHelper__StartOfWeek(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  iVar1 = /*System.DateTime$$get_DayOfWeek*/ func_0x02a8e2a0(&uStack_28,0);
  iVar1 = (iVar1 - param_2) + 7;
  uStack_30 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0((double)((iVar1 / 7) * 7 - iVar1),&uStack_28,0);
  /*System.DateTime$$get_Date*/ func_0x02a8e25c(&uStack_30,0);
  return;
}



// ============================================================
// RVA: 0x1479ad4 | Atlas.League.LeagueModeHelper.CalculateLeagueUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x01479c50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01479d24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01479c54) */
/* WARNING: Removing unreachable block (ram,0x01479d28) */
/* WARNING: Removing unreachable block (ram,0x01479d38) */

ulong Atlas_League_LeagueModeHelper__CalculateLeagueUpdate
                (long param_1,int param_2,ulong param_3,int *param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar4;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 unaff_x20;
  ulong unaff_x21;
  undefined8 uVar13;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 ***pppuVar14;
  undefined *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if ((param_1 == 0) || (lVar10 = *(long *)(param_1 + 0x30), lVar10 == 0)) {
LAB_01479b58:
    func_0x00f78af4();
  }
  else if ((uint)param_3 < *(uint *)(lVar10 + 0x18)) {
    lVar10 = *(long *)(lVar10 + (long)(int)(uint)param_3 * 8 + 0x20);
    unaff_x20 = 0;
    if (lVar10 != 0) {
      iVar3 = Atlas_League_LeagueDefinition__get_CanBePromoted(lVar10,0);
      if ((iVar3 == 0) || (*(int *)(lVar10 + 0x28) < param_2)) {
        uVar7 = Atlas_League_LeagueDefinition__get_CanBeDemoted(lVar10,0);
        if ((int)uVar7 != 0) {
          uVar7 = (ulong)(*(int *)(lVar10 + 0x2c) <= param_2) << 1;
        }
      }
      else {
        uVar7 = 1;
      }
      return uVar7;
    }
    goto LAB_01479b58;
  }
  uVar8 = func_0x00f78b24();
  auVar19 = func_0x00f78ac0(uVar8,0);
  puStack_28 = &Atlas_League_LeagueModeHelper__CalculateNextLeague;
  uStack_40 = unaff_x20;
  puStack_30 = &stack0xfffffffffffffff0;
  if (auVar19._0_8_ == 0) {
code_r0x01479bf4:
    func_0x00f78af4();
  }
  else {
    lVar10 = *(long *)(auVar19._0_8_ + 0x30);
    uVar4 = (uint)param_3;
    if (auVar19._8_4_ != 2) {
      if (auVar19._8_4_ != 1) {
        return param_3;
      }
      if (lVar10 != 0) {
        if (*(uint *)(lVar10 + 0x18) <= uVar4) goto code_r0x01479bf8;
        lVar10 = *(long *)(lVar10 + (long)(int)uVar4 * 8 + 0x20);
        if (lVar10 != 0) {
          iVar3 = Atlas_League_LeagueDefinition__get_CanBePromoted(lVar10,0);
          return (ulong)(iVar3 + uVar4);
        }
      }
      goto code_r0x01479bf4;
    }
    if (lVar10 == 0) goto code_r0x01479bf4;
    if (uVar4 < *(uint *)(lVar10 + 0x18)) {
      lVar10 = *(long *)(lVar10 + (long)(int)uVar4 * 8 + 0x20);
      if (lVar10 != 0) {
        iVar3 = Atlas_League_LeagueDefinition__get_CanBeDemoted(lVar10,0);
        return (ulong)(uVar4 - iVar3);
      }
      goto code_r0x01479bf4;
    }
  }
code_r0x01479bf8:
  uVar8 = func_0x00f78b24();
  auVar16 = func_0x00f78ac0(uVar8,0);
  lVar10 = auVar16._8_8_;
  puStack_48 = &Atlas_League_LeagueModeHelper__CalculatePoints;
  pppuVar14 = &ppuStack_50;
  ppuStack_50 = &puStack_30;
  if ((lVar10 == 0) || (lVar11 = *(long *)(lVar10 + 0x10), lVar11 == 0)) {
    func_0x00f78af4();
    return unaff_x21;
  }
  auVar18._8_8_ = 0;
  auVar18._0_8_ = auVar16._0_8_;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = auVar16._0_8_;
  if (*(int *)(lVar11 + 0x18) < 1) {
    return 0;
  }
  if (*(int *)(lVar11 + 0x18) == 0) {
    uVar8 = func_0x00f78b24();
    puVar15 = &Atlas_League_LeagueModeHelper__CalculatePointsForPlacement;
    auVar17 = func_0x00f78ac0(uVar8,0);
    auVar16._8_8_ = lVar10;
    auVar16._0_8_ = auVar17._8_8_;
    uVar7 = auVar17._0_8_;
    puVar2 = &stack0xffffffffffffff90;
    auVar17 = auVar18 << 0x40;
  }
  else {
    uVar7 = (ulong)*(uint *)(lVar11 + 0x20);
    puVar15 = &UNK_01479c54;
    puVar2 = &stack0xffffffffffffff90;
    auVar17 = auVar17 << 0x40;
  }
  while( true ) {
    uVar12 = auVar16._8_8_;
    *(undefined1 ****)(puVar2 + -0x10) = pppuVar14;
    *(undefined **)(puVar2 + -8) = puVar15;
    if ((auVar16._0_8_ == 0) || (lVar10 = *(long *)(auVar16._0_8_ + 0x50), lVar10 == 0)) {
      func_0x00f78af4();
    }
    else {
      uVar4 = (uint)uVar7;
      if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar4) {
        return 0;
      }
      if (uVar4 < *(uint *)(lVar10 + 0x18)) {
        return (ulong)*(uint *)(lVar10 + (long)(int)uVar4 * 4 + 0x20);
      }
    }
    uVar8 = func_0x00f78b24();
    auVar18 = func_0x00f78ac0(uVar8,0);
    lVar10 = auVar18._8_8_;
    uVar8 = auVar18._0_8_;
    auVar16._8_8_ = param_3;
    auVar16._0_8_ = uVar8;
    *(undefined8 *)(puVar2 + -0x50) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x48) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x40) = 0;
    *(undefined1 (*) [16])(puVar2 + -0x38) = auVar17;
    *(ulong *)(puVar2 + -0x28) = uVar12;
    *(undefined1 **)(puVar2 + -0x20) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x18) = &Atlas_League_LeagueModeHelper__CalculatePreviousPoints;
    pppuVar14 = (undefined1 ***)(puVar2 + -0x20);
    if ((int)param_3 < 0) {
      return 0;
    }
    uVar13 = auVar17._0_8_;
    if (lVar10 == 0) break;
    unaff_x23 = 0;
    lVar11 = *(long *)(lVar10 + 0x10);
    uVar12 = param_3;
    uVar13 = uVar8;
    if (lVar11 == 0) break;
    if (*(int *)(lVar11 + 0x18) == 0) goto code_r0x01479d5c;
    uVar7 = (ulong)*(uint *)(lVar11 + 0x20);
    puVar15 = &UNK_01479d28;
    puVar2 = puVar2 + -0x50;
    auVar17 = auVar18;
  }
  func_0x00f78af4();
code_r0x01479d5c:
  iVar3 = (int)param_3;
  uVar8 = func_0x00f78b24();
  auVar16 = func_0x00f78ac0(uVar8,0);
  *(undefined8 *)(puVar2 + -0x90) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x88) = unaff_x23;
  *(undefined8 *)(puVar2 + -0x80) = 0;
  *(undefined8 *)(puVar2 + -0x78) = uVar13;
  *(long *)(puVar2 + -0x70) = lVar10;
  *(ulong *)(puVar2 + -0x68) = uVar12;
  *(undefined1 ****)(puVar2 + -0x60) = pppuVar14;
  *(undefined **)(puVar2 + -0x58) = &Atlas_League_LeagueModeHelper__CalculateDecay;
  if ((bRam0000000003eb48b0 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d22e88);
    bRam0000000003eb48b0 = 1;
  }
  if (iVar3 != 0) {
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(auVar16._8_8_,auVar16._0_8_,0);
    *(undefined8 *)(puVar2 + -0x98) = uVar8;
    iVar5 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(puVar2 + -0x98,0);
    if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar9 = *(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8);
    iVar6 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(puVar2 + -0x98,0);
    if (0 < iVar6) {
      iVar6 = 0;
      if (iVar9 != 0) {
        iVar6 = iVar5 / iVar9;
      }
      if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar10 = *(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8);
      iVar5 = *(int *)(lVar10 + 0x18);
      if (iVar5 <= iVar6) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar10 = *(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8);
          iVar5 = *(int *)(lVar10 + 0x18);
        }
        if (iVar6 == iVar5) {
          uVar7 = 1;
        }
        else {
          if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
            func_0x00f78ad0();
            lVar10 = *(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8);
            iVar5 = *(int *)(lVar10 + 0x18);
          }
          iVar5 = (iVar5 - iVar6) + iVar3;
          iVar9 = *(int *)(lVar10 + 0x14);
          bVar1 = iVar9 < iVar3;
          iVar3 = iVar5;
          if (bVar1) {
            if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
              func_0x00f78ad0();
              iVar9 = *(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 0x14);
            }
            if (((iVar5 < iVar9) &&
                (iVar3 = iVar9, (*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0)) &&
               (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
              func_0x00f78ad0();
              iVar3 = *(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 0x14);
            }
          }
          if (iVar3 < 1) {
            iVar3 = 0;
          }
          uVar7 = 2;
        }
        goto code_r0x01479e78;
      }
    }
  }
  uVar7 = 0;
code_r0x01479e78:
  *param_4 = iVar3;
  return uVar7;
}



// ============================================================
// RVA: 0x1479b68 | Atlas.League.LeagueModeHelper.CalculateNextLeague
// ============================================================

/* WARNING: Possible PIC construction at 0x01479c50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01479d24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01479c54) */
/* WARNING: Removing unreachable block (ram,0x01479d28) */
/* WARNING: Removing unreachable block (ram,0x01479d38) */

ulong Atlas_League_LeagueModeHelper__CalculateNextLeague
                (long param_1,int param_2,ulong param_3,int *param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar4;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong unaff_x21;
  undefined8 uVar13;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 **ppuVar14;
  undefined *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if (param_1 == 0) {
LAB_01479bf4:
    func_0x00f78af4();
  }
  else {
    lVar10 = *(long *)(param_1 + 0x30);
    uVar4 = (uint)param_3;
    if (param_2 != 2) {
      if (param_2 != 1) {
        return param_3;
      }
      if (lVar10 != 0) {
        if (*(uint *)(lVar10 + 0x18) <= uVar4) goto LAB_01479bf8;
        lVar10 = *(long *)(lVar10 + (long)(int)uVar4 * 8 + 0x20);
        if (lVar10 != 0) {
          iVar3 = Atlas_League_LeagueDefinition__get_CanBePromoted(lVar10,0);
          return (ulong)(iVar3 + uVar4);
        }
      }
      goto LAB_01479bf4;
    }
    if (lVar10 == 0) goto LAB_01479bf4;
    if (uVar4 < *(uint *)(lVar10 + 0x18)) {
      lVar10 = *(long *)(lVar10 + (long)(int)uVar4 * 8 + 0x20);
      if (lVar10 != 0) {
        iVar3 = Atlas_League_LeagueDefinition__get_CanBeDemoted(lVar10,0);
        return (ulong)(uVar4 - iVar3);
      }
      goto LAB_01479bf4;
    }
  }
LAB_01479bf8:
  uVar7 = func_0x00f78b24();
  auVar16 = func_0x00f78ac0(uVar7,0);
  lVar10 = auVar16._8_8_;
  puStack_28 = &Atlas_League_LeagueModeHelper__CalculatePoints;
  ppuVar14 = &puStack_30;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((lVar10 == 0) || (lVar11 = *(long *)(lVar10 + 0x10), lVar11 == 0)) {
    func_0x00f78af4();
    return unaff_x21;
  }
  auVar18._8_8_ = 0;
  auVar18._0_8_ = auVar16._0_8_;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = auVar16._0_8_;
  if (*(int *)(lVar11 + 0x18) < 1) {
    return 0;
  }
  if (*(int *)(lVar11 + 0x18) == 0) {
    uVar7 = func_0x00f78b24();
    puVar15 = &Atlas_League_LeagueModeHelper__CalculatePointsForPlacement;
    auVar17 = func_0x00f78ac0(uVar7,0);
    auVar16._8_8_ = lVar10;
    auVar16._0_8_ = auVar17._8_8_;
    uVar8 = auVar17._0_8_;
    puVar2 = &stack0xffffffffffffffb0;
    auVar17 = auVar18 << 0x40;
  }
  else {
    uVar8 = (ulong)*(uint *)(lVar11 + 0x20);
    puVar15 = &UNK_01479c54;
    puVar2 = &stack0xffffffffffffffb0;
    auVar17 = auVar17 << 0x40;
  }
  while( true ) {
    uVar12 = auVar16._8_8_;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar14;
    *(undefined **)(puVar2 + -8) = puVar15;
    if ((auVar16._0_8_ == 0) || (lVar10 = *(long *)(auVar16._0_8_ + 0x50), lVar10 == 0)) {
      func_0x00f78af4();
    }
    else {
      uVar4 = (uint)uVar8;
      if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar4) {
        return 0;
      }
      if (uVar4 < *(uint *)(lVar10 + 0x18)) {
        return (ulong)*(uint *)(lVar10 + (long)(int)uVar4 * 4 + 0x20);
      }
    }
    uVar7 = func_0x00f78b24();
    auVar18 = func_0x00f78ac0(uVar7,0);
    lVar10 = auVar18._8_8_;
    uVar7 = auVar18._0_8_;
    auVar16._8_8_ = param_3;
    auVar16._0_8_ = uVar7;
    *(undefined8 *)(puVar2 + -0x50) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x48) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x40) = 0;
    *(undefined1 (*) [16])(puVar2 + -0x38) = auVar17;
    *(ulong *)(puVar2 + -0x28) = uVar12;
    *(undefined1 **)(puVar2 + -0x20) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x18) = &Atlas_League_LeagueModeHelper__CalculatePreviousPoints;
    ppuVar14 = (undefined1 **)(puVar2 + -0x20);
    if ((int)param_3 < 0) {
      return 0;
    }
    uVar13 = auVar17._0_8_;
    if (lVar10 == 0) break;
    unaff_x23 = 0;
    lVar11 = *(long *)(lVar10 + 0x10);
    uVar12 = param_3;
    uVar13 = uVar7;
    if (lVar11 == 0) break;
    if (*(int *)(lVar11 + 0x18) == 0) goto code_r0x01479d5c;
    uVar8 = (ulong)*(uint *)(lVar11 + 0x20);
    puVar15 = &UNK_01479d28;
    puVar2 = puVar2 + -0x50;
    auVar17 = auVar18;
  }
  func_0x00f78af4();
code_r0x01479d5c:
  iVar3 = (int)param_3;
  uVar7 = func_0x00f78b24();
  auVar16 = func_0x00f78ac0(uVar7,0);
  *(undefined8 *)(puVar2 + -0x90) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x88) = unaff_x23;
  *(undefined8 *)(puVar2 + -0x80) = 0;
  *(undefined8 *)(puVar2 + -0x78) = uVar13;
  *(long *)(puVar2 + -0x70) = lVar10;
  *(ulong *)(puVar2 + -0x68) = uVar12;
  *(undefined1 ***)(puVar2 + -0x60) = ppuVar14;
  *(undefined **)(puVar2 + -0x58) = &Atlas_League_LeagueModeHelper__CalculateDecay;
  if ((bRam0000000003eb48b0 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d22e88);
    bRam0000000003eb48b0 = 1;
  }
  if (iVar3 != 0) {
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(auVar16._8_8_,auVar16._0_8_,0);
    *(undefined8 *)(puVar2 + -0x98) = uVar7;
    iVar5 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(puVar2 + -0x98,0);
    if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar9 = *(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8);
    iVar6 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(puVar2 + -0x98,0);
    if (0 < iVar6) {
      iVar6 = 0;
      if (iVar9 != 0) {
        iVar6 = iVar5 / iVar9;
      }
      if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar10 = *(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8);
      iVar5 = *(int *)(lVar10 + 0x18);
      if (iVar5 <= iVar6) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar10 = *(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8);
          iVar5 = *(int *)(lVar10 + 0x18);
        }
        if (iVar6 == iVar5) {
          uVar8 = 1;
        }
        else {
          if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
            func_0x00f78ad0();
            lVar10 = *(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8);
            iVar5 = *(int *)(lVar10 + 0x18);
          }
          iVar5 = (iVar5 - iVar6) + iVar3;
          iVar9 = *(int *)(lVar10 + 0x14);
          bVar1 = iVar9 < iVar3;
          iVar3 = iVar5;
          if (bVar1) {
            if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
              func_0x00f78ad0();
              iVar9 = *(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 0x14);
            }
            if (((iVar5 < iVar9) &&
                (iVar3 = iVar9, (*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0)) &&
               (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
              func_0x00f78ad0();
              iVar3 = *(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 0x14);
            }
          }
          if (iVar3 < 1) {
            iVar3 = 0;
          }
          uVar8 = 2;
        }
        goto code_r0x01479e78;
      }
    }
  }
  uVar8 = 0;
code_r0x01479e78:
  *param_4 = iVar3;
  return uVar8;
}



// ============================================================
// RVA: 0x1479c04 | Atlas.League.LeagueModeHelper.CalculatePoints
// ============================================================

/* WARNING: Possible PIC construction at 0x01479c50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01479d24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01479c54) */
/* WARNING: Removing unreachable block (ram,0x01479d28) */
/* WARNING: Removing unreachable block (ram,0x01479d38) */

ulong Atlas_League_LeagueModeHelper__CalculatePoints
                (long param_1,long param_2,long param_3,int *param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  ulong unaff_x21;
  long lVar13;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined1 auVar16 [16];
  
  puVar14 = &stack0xfffffffffffffff0;
  if ((param_2 == 0) || (lVar10 = *(long *)(param_2 + 0x10), lVar10 == 0)) {
    func_0x00f78af4();
    return unaff_x21;
  }
  if (*(int *)(lVar10 + 0x18) < 1) {
    return 0;
  }
  lVar13 = 0;
  if (*(int *)(lVar10 + 0x18) == 0) {
    uVar7 = func_0x00f78b24();
    puVar15 = &Atlas_League_LeagueModeHelper__CalculatePointsForPlacement;
    auVar16 = func_0x00f78ac0(uVar7,0);
    lVar10 = auVar16._8_8_;
    uVar6 = auVar16._0_8_;
    puVar2 = &stack0xffffffffffffffd0;
  }
  else {
    uVar6 = (ulong)*(uint *)(lVar10 + 0x20);
    puVar15 = (undefined *)0x1479c54;
    puVar2 = &stack0xffffffffffffffd0;
    lVar10 = param_1;
  }
  while( true ) {
    *(undefined1 **)(puVar2 + -0x10) = puVar14;
    *(undefined **)(puVar2 + -8) = puVar15;
    if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x50), lVar10 == 0)) {
      func_0x00f78af4();
    }
    else {
      uVar3 = (uint)uVar6;
      if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar3) {
        return 0;
      }
      if (uVar3 < *(uint *)(lVar10 + 0x18)) {
        return (ulong)*(uint *)(lVar10 + (long)(int)uVar3 * 4 + 0x20);
      }
    }
    uVar7 = func_0x00f78b24();
    auVar16 = func_0x00f78ac0(uVar7,0);
    lVar8 = auVar16._8_8_;
    lVar10 = auVar16._0_8_;
    *(undefined8 *)(puVar2 + -0x50) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x48) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x40) = 0;
    *(long *)(puVar2 + -0x38) = lVar13;
    *(long *)(puVar2 + -0x30) = param_1;
    *(long *)(puVar2 + -0x28) = param_2;
    *(undefined1 **)(puVar2 + -0x20) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x18) = &Atlas_League_LeagueModeHelper__CalculatePreviousPoints;
    puVar14 = puVar2 + -0x20;
    if ((int)param_3 < 0) {
      return 0;
    }
    if (lVar8 == 0) break;
    unaff_x23 = 0;
    lVar11 = *(long *)(lVar8 + 0x10);
    param_2 = param_3;
    lVar13 = lVar10;
    if (lVar11 == 0) break;
    if (*(int *)(lVar11 + 0x18) == 0) goto code_r0x01479d5c;
    uVar6 = (ulong)*(uint *)(lVar11 + 0x20);
    puVar15 = &UNK_01479d28;
    puVar2 = puVar2 + -0x50;
    param_1 = lVar8;
  }
  func_0x00f78af4();
code_r0x01479d5c:
  iVar12 = (int)param_3;
  uVar7 = func_0x00f78b24();
  auVar16 = func_0x00f78ac0(uVar7,0);
  *(undefined8 *)(puVar2 + -0x90) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x88) = unaff_x23;
  *(undefined8 *)(puVar2 + -0x80) = 0;
  *(long *)(puVar2 + -0x78) = lVar13;
  *(long *)(puVar2 + -0x70) = lVar8;
  *(long *)(puVar2 + -0x68) = param_2;
  *(undefined1 **)(puVar2 + -0x60) = puVar14;
  *(undefined **)(puVar2 + -0x58) = &Atlas_League_LeagueModeHelper__CalculateDecay;
  if ((bRam0000000003eb48b0 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d22e88);
    bRam0000000003eb48b0 = 1;
  }
  if (iVar12 != 0) {
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(auVar16._8_8_,auVar16._0_8_,0);
    *(undefined8 *)(puVar2 + -0x98) = uVar7;
    iVar4 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(puVar2 + -0x98,0);
    if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar9 = *(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8);
    iVar5 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(puVar2 + -0x98,0);
    if (0 < iVar5) {
      iVar5 = 0;
      if (iVar9 != 0) {
        iVar5 = iVar4 / iVar9;
      }
      if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar10 = *(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8);
      iVar4 = *(int *)(lVar10 + 0x18);
      if (iVar4 <= iVar5) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar10 = *(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8);
          iVar4 = *(int *)(lVar10 + 0x18);
        }
        if (iVar5 == iVar4) {
          uVar6 = 1;
        }
        else {
          if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
            func_0x00f78ad0();
            lVar10 = *(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8);
            iVar4 = *(int *)(lVar10 + 0x18);
          }
          iVar4 = (iVar4 - iVar5) + iVar12;
          iVar9 = *(int *)(lVar10 + 0x14);
          bVar1 = iVar9 < iVar12;
          iVar12 = iVar4;
          if (bVar1) {
            if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
              func_0x00f78ad0();
              iVar9 = *(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 0x14);
            }
            if (((iVar4 < iVar9) &&
                (iVar12 = iVar9, (*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0)) &&
               (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
              func_0x00f78ad0();
              iVar12 = *(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 0x14);
            }
          }
          if (iVar12 < 1) {
            iVar12 = 0;
          }
          uVar6 = 2;
        }
        goto code_r0x01479e78;
      }
    }
  }
  uVar6 = 0;
code_r0x01479e78:
  *param_4 = iVar12;
  return uVar6;
}



// ============================================================
// RVA: 0x1479c88 | Atlas.League.LeagueModeHelper.CalculatePointsForPlacement
// ============================================================

int Atlas_League_LeagueModeHelper__CalculatePointsForPlacement
              (uint param_1,long param_2,undefined8 param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_98;
  
  if ((param_2 == 0) || (lVar7 = *(long *)(param_2 + 0x50), lVar7 == 0)) {
    func_0x00f78af4();
  }
  else {
    if ((int)*(uint *)(lVar7 + 0x18) <= (int)param_1) {
      return 0;
    }
    if (param_1 < *(uint *)(lVar7 + 0x18)) {
      return *(int *)(lVar7 + (long)(int)param_1 * 4 + 0x20);
    }
  }
  uVar5 = func_0x00f78b24();
  auVar9 = func_0x00f78ac0(uVar5,0);
  iVar3 = (int)param_3;
  if (iVar3 < 0) {
    return 0;
  }
  iVar2 = iVar3;
  if (auVar9._8_8_ != 0) {
    iVar6 = 0;
    uVar8 = 0;
    while( true ) {
      iVar2 = (int)param_3;
      lVar7 = *(long *)(auVar9._8_8_ + 0x10);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= uVar8) goto code_r0x01479d5c;
      iVar2 = Atlas_League_LeagueModeHelper__CalculatePointsForPlacement
                        (*(undefined4 *)(lVar7 + (long)(int)uVar8 * 4 + 0x20),auVar9._0_8_);
      iVar6 = iVar2 + iVar6;
      uVar8 = uVar8 + 1;
      if (iVar3 < (int)uVar8) {
        return iVar6;
      }
    }
  }
  func_0x00f78af4();
code_r0x01479d5c:
  uVar5 = func_0x00f78b24();
  auVar9 = func_0x00f78ac0(uVar5,0);
  if ((bRam0000000003eb48b0 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d22e88);
    bRam0000000003eb48b0 = 1;
  }
  if (iVar2 != 0) {
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_98 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(auVar9._8_8_,auVar9._0_8_,0);
    iVar3 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(&uStack_98,0);
    if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar6 = *(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8);
    iVar4 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(&uStack_98,0);
    if (0 < iVar4) {
      iVar4 = 0;
      if (iVar6 != 0) {
        iVar4 = iVar3 / iVar6;
      }
      if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar7 = *(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8);
      iVar3 = *(int *)(lVar7 + 0x18);
      if (iVar3 <= iVar4) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar7 = *(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8);
          iVar3 = *(int *)(lVar7 + 0x18);
        }
        if (iVar4 == iVar3) {
          iVar3 = 1;
        }
        else {
          if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
            func_0x00f78ad0();
            lVar7 = *(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8);
            iVar3 = *(int *)(lVar7 + 0x18);
          }
          iVar3 = (iVar3 - iVar4) + iVar2;
          iVar6 = *(int *)(lVar7 + 0x14);
          bVar1 = iVar6 < iVar2;
          iVar2 = iVar3;
          if (bVar1) {
            if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
              func_0x00f78ad0();
              iVar6 = *(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 0x14);
            }
            if (((iVar3 < iVar6) &&
                (iVar2 = iVar6, (*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0)) &&
               (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
              func_0x00f78ad0();
              iVar2 = *(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 0x14);
            }
          }
          if (iVar2 < 1) {
            iVar2 = 0;
          }
          iVar3 = 2;
        }
        goto code_r0x01479e78;
      }
    }
  }
  iVar3 = 0;
code_r0x01479e78:
  *param_4 = iVar2;
  return iVar3;
}



// ============================================================
// RVA: 0x1479cd4 | Atlas.League.LeagueModeHelper.CalculatePreviousPoints
// ============================================================

int Atlas_League_LeagueModeHelper__CalculatePreviousPoints
              (undefined8 param_1,long param_2,undefined8 param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_88;
  
  iVar3 = (int)param_3;
  if (iVar3 < 0) {
    return 0;
  }
  iVar2 = iVar3;
  if (param_2 != 0) {
    iVar6 = 0;
    uVar8 = 0;
    while( true ) {
      iVar2 = (int)param_3;
      lVar7 = *(long *)(param_2 + 0x10);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_01479d5c;
      iVar2 = Atlas_League_LeagueModeHelper__CalculatePointsForPlacement
                        (*(undefined4 *)(lVar7 + (long)(int)uVar8 * 4 + 0x20),param_1);
      iVar6 = iVar2 + iVar6;
      uVar8 = uVar8 + 1;
      if (iVar3 < (int)uVar8) {
        return iVar6;
      }
    }
  }
  func_0x00f78af4();
LAB_01479d5c:
  uVar5 = func_0x00f78b24();
  auVar9 = func_0x00f78ac0(uVar5,0);
  if ((bRam0000000003eb48b0 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d22e88);
    bRam0000000003eb48b0 = 1;
  }
  if (iVar2 != 0) {
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_88 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(auVar9._8_8_,auVar9._0_8_,0);
    iVar3 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(&uStack_88,0);
    if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar6 = *(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8);
    iVar4 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(&uStack_88,0);
    if (0 < iVar4) {
      iVar4 = 0;
      if (iVar6 != 0) {
        iVar4 = iVar3 / iVar6;
      }
      if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar7 = *(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8);
      iVar3 = *(int *)(lVar7 + 0x18);
      if (iVar3 <= iVar4) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar7 = *(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8);
          iVar3 = *(int *)(lVar7 + 0x18);
        }
        if (iVar4 == iVar3) {
          iVar3 = 1;
        }
        else {
          if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
            func_0x00f78ad0();
            lVar7 = *(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8);
            iVar3 = *(int *)(lVar7 + 0x18);
          }
          iVar3 = (iVar3 - iVar4) + iVar2;
          iVar6 = *(int *)(lVar7 + 0x14);
          bVar1 = iVar6 < iVar2;
          iVar2 = iVar3;
          if (bVar1) {
            if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
              func_0x00f78ad0();
              iVar6 = *(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 0x14);
            }
            if (((iVar3 < iVar6) &&
                (iVar2 = iVar6, (*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0)) &&
               (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
              func_0x00f78ad0();
              iVar2 = *(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 0x14);
            }
          }
          if (iVar2 < 1) {
            iVar2 = 0;
          }
          iVar3 = 2;
        }
        goto code_r0x01479e78;
      }
    }
  }
  iVar3 = 0;
code_r0x01479e78:
  *param_4 = iVar2;
  return iVar3;
}



// ============================================================
// RVA: 0x1479d68 | Atlas.League.LeagueModeHelper.CalculateDecay
// ============================================================

undefined8
Atlas_League_LeagueModeHelper__CalculateDecay
          (undefined8 param_1,undefined8 param_2,int param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb48b0 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d22e88);
    bRam0000000003eb48b0 = 1;
  }
  if (param_3 != 0) {
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_48 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(param_2,param_1,0);
    iVar2 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(&uStack_48,0);
    if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar5 = *(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8);
    iVar3 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(&uStack_48,0);
    if (0 < iVar3) {
      iVar3 = 0;
      if (iVar5 != 0) {
        iVar3 = iVar2 / iVar5;
      }
      if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar6 = *(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8);
      iVar2 = *(int *)(lVar6 + 0x18);
      if (iVar2 <= iVar3) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar6 = *(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8);
          iVar2 = *(int *)(lVar6 + 0x18);
        }
        if (iVar3 == iVar2) {
          uVar4 = 1;
        }
        else {
          if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
            func_0x00f78ad0();
            lVar6 = *(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8);
            iVar2 = *(int *)(lVar6 + 0x18);
          }
          iVar2 = (iVar2 - iVar3) + param_3;
          iVar5 = *(int *)(lVar6 + 0x14);
          bVar1 = iVar5 < param_3;
          param_3 = iVar2;
          if (bVar1) {
            if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
              func_0x00f78ad0();
              iVar5 = *(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 0x14);
            }
            if (((iVar2 < iVar5) &&
                (param_3 = iVar5, (*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0)) &&
               (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
              func_0x00f78ad0();
              param_3 = *(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 0x14);
            }
          }
          if (param_3 < 1) {
            param_3 = 0;
          }
          uVar4 = 2;
        }
        goto code_r0x01479e78;
      }
    }
  }
  uVar4 = 0;
code_r0x01479e78:
  *param_4 = param_3;
  return uVar4;
}



// ============================================================
// RVA: 0x1479f5c | Atlas.League.LeagueModeHelper.GetRandomCharacterIDList
// ============================================================

long Atlas_League_LeagueModeHelper__GetRandomCharacterIDList(undefined8 param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  int iStack_8c;
  undefined8 uStack_88;
  long lStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  if ((bRam0000000003eb48b1 & 1) == 0) {
    func_0x00f78a20(0x3d57330);
    func_0x00f78a20(0x3d22e88);
    func_0x00f78a20(0x3d3bfa0);
    func_0x00f78a20(0x3d3bfc0);
    func_0x00f78a20(0x3d3bf88);
    func_0x00f78a20(0x3d39fb0);
    func_0x00f78a20(0x3d39fb8);
    func_0x00f78a20(0x3d1de30);
    func_0x00f78a20(0x3d240a8);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb48b1 = 1;
  }
  uVar4 = Atlas_League_LeagueModeHelper__GetLeagueModeSeed(param_1);
  plVar5 = (long *)func_0x00f78aec(/*System.Random_TypeInfo*/ uRam0000000003d240a8);
  /*System.Random$$.ctor*/ func_0x0297f034(plVar5,uVar4,0);
  lVar6 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar6,uRam0000000003d3bf88);
  if (param_2 == 0) {
LAB_0147a1c0:
    uStack_88 = func_0x00f78af4();
    puStack_68 = &Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat;
    lStack_80 = lVar6;
    plStack_78 = plVar5;
    puStack_70 = &stack0xfffffffffffffff0;
    iVar3 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&uStack_88,0);
    iStack_8c = /*System.DateTime$$get_DayOfYear*/ func_0x02a8e2ec(&uStack_88,0);
    iStack_8c = iStack_8c + iVar3 * 1000;
    lVar6 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_8c,0);
    return lVar6;
  }
  lVar7 = /*Core.Definitions.GameDefinitions$$GetDefinitionList<UsableDefinition>*/ func_0x0185c554(param_2,uRam0000000003d57330);
  iVar3 = 0;
code_r0x0147a09c:
  if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 0xc) <= iVar3) {
    return lVar6;
  }
  uVar2 = 0;
  puVar9 = (undefined8 *)0x3d65d08;
  do {
    uVar4 = *puVar9;
    uVar8 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar4,0);
    if ((uVar8 & 1) == 0) {
      if (lVar6 == 0) goto LAB_0147a1c0;
      uVar8 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(lVar6,uVar4,uRam0000000003d3bfc0);
      if ((uVar8 & 1) != 0) goto LAB_0147a0fc;
      if (lVar7 == 0) goto LAB_0147a1c0;
      if (*(uint *)(lVar7 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar10 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(int)uVar2 * 8 + 0x20);
      if (lVar10 == 0) goto LAB_0147a1c0;
      iVar1 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar10 + 0x70),0);
      if (iVar1 != 0) break;
    }
    else {
LAB_0147a0fc:
      if (lVar7 == 0) goto LAB_0147a1c0;
    }
    if (plVar5 == (long *)0x0) goto LAB_0147a1c0;
    uVar2 = (**(code **)(*plVar5 + 0x188))
                      (plVar5,0,*(undefined4 *)(lVar7 + 0x18),*(undefined8 *)(*plVar5 + 400));
    if (*(uint *)(lVar7 + 0x18) <= uVar2) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar10 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(int)uVar2 * 8 + 0x20);
    puVar9 = (undefined8 *)(lVar10 + 0x18);
    if (lVar10 == 0) goto LAB_0147a1c0;
  } while( true );
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar6,uVar4,uRam0000000003d3bfa0);
  iVar3 = iVar3 + 1;
  goto code_r0x0147a09c;
}



// ============================================================
// RVA: 0x147a1c4 | Atlas.League.LeagueModeHelper.ConvertDateTimeToSeedFormat
// ============================================================

void Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat(undefined8 param_1)

{
  int iVar1;
  int iStack_2c;
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  iVar1 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&uStack_28,0);
  iStack_2c = /*System.DateTime$$get_DayOfYear*/ func_0x02a8e2ec(&uStack_28,0);
  iStack_2c = iStack_2c + iVar1 * 1000;
  /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_2c,0);
  return;
}



// ============================================================
// RVA: 0x147a21c | Atlas.League.LeagueModeHelper.ConvertSeedFormatToDateTime
// ============================================================

/* WARNING: Possible PIC construction at 0x0147a330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147a35c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147a440: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0147a360) */
/* WARNING: Removing unreachable block (ram,0x0147a334) */
/* WARNING: Removing unreachable block (ram,0x0147a348) */
/* WARNING: Removing unreachable block (ram,0x0147a340) */
/* WARNING: Removing unreachable block (ram,0x0147a394) */
/* WARNING: Removing unreachable block (ram,0x0147a444) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_League_LeagueModeHelper__ConvertSeedFormatToDateTime
                (long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar4;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint extraout_w1;
  undefined8 extraout_x1;
  ulong uVar11;
  long lVar12;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 *******pppppppuVar13;
  undefined *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uStack_118;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 *******pppppppuStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [16];
  undefined8 *******pppppppuStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [16];
  undefined8 ******ppppppuStack_50;
  undefined *puStack_48;
  undefined8 *****pppppuStack_40;
  undefined *puStack_38;
  undefined8 uStack_28;
  
  auVar16._8_8_ = unaff_x19;
  auVar16._0_8_ = unaff_x20;
  uStack_28 = 0;
  if (param_1 != 0) {
    uVar5 = /*System.String$$Substring*/ func_0x029cbbf0(param_1,0,4,0);
    uVar5 = /*System.Int32$$Parse*/ func_0x02ae9c6c(uVar5,0);
    uVar6 = /*System.String$$Substring*/ func_0x029cbd54(param_1,4,0);
    iVar2 = /*System.Int32$$Parse*/ func_0x02ae9c6c(uVar6,0);
    /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_28,uVar5,1,1,0);
    uVar7 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0((double)(iVar2 + -1),&uStack_28,0);
    return uVar7;
  }
  uVar3 = func_0x00f78af4();
  puStack_38 = &Atlas_League_LeagueModeHelper__GetStarsFromLeaderboardPlacement;
  pppppuStack_40 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((param_3 == 0) || (lVar12 = *(long *)(param_3 + 0x30), lVar12 == 0)) {
code_r0x0147a300:
    func_0x00f78af4();
  }
  else if (extraout_w1 < *(uint *)(lVar12 + 0x18)) {
    lVar12 = *(long *)(lVar12 + (long)(int)extraout_w1 * 8 + 0x20);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x60), lVar12 == 0)) goto code_r0x0147a300;
    if (uVar3 < *(uint *)(lVar12 + 0x18)) {
      return (ulong)*(uint *)(lVar12 + (long)(int)uVar3 * 4 + 0x20);
    }
  }
  uVar5 = func_0x00f78b24();
  auVar15 = func_0x00f78ac0(uVar5,0);
  lVar12 = auVar15._8_8_;
  puVar1 = auStack_70;
  puStack_48 = &Atlas_League_LeagueModeHelper__LatestCheckedStatsInCurrentWeek;
  pppppppuStack_80 = &ppppppuStack_50;
  if (lVar12 == 0) {
    puVar14 = &Atlas_League_LeaguePlayerSave__get_LatestCheckedStatsDate;
    ppppppuStack_50 = &pppppuStack_40;
    lVar12 = func_0x00f78af4();
  }
  else {
    puVar14 = &UNK_0147a334;
    ppppppuStack_50 = &pppppuStack_40;
    auVar16 = auVar15;
  }
  puStack_78 = puVar14;
  auStack_90 = auVar16;
  if ((bRam0000000003eb48e2 & 1) == 0) {
    func_0x00f78a20(0x3d6f1e0);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb48e2 = 1;
  }
  lVar8 = *(long *)(lVar12 + 0x10);
  uVar5 = /*STR('L_CSD')*/ uRam0000000003d6f1e0;
  pppppppuVar13 = pppppppuStack_80;
  puVar14 = puStack_78;
  auVar15 = auStack_90;
  if (lVar8 == 0) {
    auVar16 = func_0x00f78af4();
    lVar10 = auVar16._8_8_;
    puVar1 = auStack_c0;
    uStack_b0 = 0x3eb4000;
    puStack_98 = &Atlas_League_LeagueModeHelper__LastOpenedInCurrentWeek;
    lStack_a8 = lVar12;
    pppppppuStack_a0 = &pppppppuStack_80;
    uStack_b8 = Atlas_League_LeagueModeHelper__StartOfWeek(auVar16._0_8_,1);
    if (lVar10 == 0) {
      puVar14 = &Atlas_League_LeaguePlayerSave__get_LatestOpenedDate;
      lVar12 = func_0x00f78af4();
    }
    else {
      puVar14 = &UNK_0147a444;
      lVar12 = lVar10;
    }
    if ((bRam0000000003eb48da & 1) == 0) {
      func_0x00f78a20(0x3d6f200);
      func_0x00f78a20(0x3d65d08);
      bRam0000000003eb48da = 1;
    }
    lVar8 = *(long *)(lVar12 + 0x10);
    if (lVar8 == 0) {
      iVar2 = func_0x00f78af4();
      if ((bRam0000000003eb48b2 & 1) == 0) {
        func_0x00f78a20(0x3d21070);
        bRam0000000003eb48b2 = 1;
      }
      uVar5 = Atlas_League_LeagueModeHelper__StartOfWeek(extraout_x1,1);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_118 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(extraout_x1,uVar5,0);
      iVar4 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(&uStack_118,0);
      return (ulong)(iVar2 <= iVar4);
    }
    auVar15._8_8_ = lVar10;
    auVar15._0_8_ = 0x3eb4000;
    uVar5 = /*STR('L_OD')*/ uRam0000000003d6f200;
    pppppppuVar13 = &pppppppuStack_a0;
  }
  uVar7 = /*STR('')*/ uRam0000000003d65d08;
  *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
  *(undefined1 (*) [16])(puVar1 + -0x20) = auVar15;
  *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar13;
  *(undefined **)(puVar1 + -8) = puVar14;
  if ((bRam0000000003eb4c44 & 1) == 0) {
    func_0x00f78a20(0x3d246e0,uVar5,/*STR('')*/ uRam0000000003d65d08,0);
    bRam0000000003eb4c44 = 1;
  }
  uVar9 = Atlas_Save_SaveManager__get_SaveData(lVar8);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = *(undefined8 *)(puVar1 + -0x40);
  *(undefined8 *)(puVar1 + -0x40) = uVar6;
  *(undefined8 *)(puVar1 + -0x38) = *(undefined8 *)(puVar1 + -0x38);
  *(undefined8 *)(puVar1 + -0x30) = *(undefined8 *)(puVar1 + -0x30);
  *(undefined8 *)(puVar1 + -0x28) = *(undefined8 *)(puVar1 + -0x28);
  *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
  *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
  *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
  *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
  uVar11 = uVar9;
  if ((bRam0000000003eb4c4a & 1) == 0) {
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4a = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = Atlas_Save_SaveManager__GetStringDataIndex(uVar5,uVar9);
  if ((int)uVar3 < 0) {
    return uVar7;
  }
  if ((uVar9 != 0) && (lVar12 = *(long *)(uVar9 + 0x118), lVar12 != 0)) {
    if (*(uint *)(lVar12 + 0x18) <= uVar3) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return *(ulong *)(*(long *)(lVar12 + 0x10) + (ulong)uVar3 * 0x10 + 0x28);
  }
  auVar16 = func_0x00f78af4();
  *(undefined8 *)(puVar1 + -0x80) = uVar6;
  *(undefined8 *)(puVar1 + -0x78) = 0x3d246e0;
  *(undefined8 *)(puVar1 + -0x70) = 0x3eb4000;
  *(undefined8 *)(puVar1 + -0x68) = uVar5;
  *(ulong *)(puVar1 + -0x60) = uVar7;
  *(undefined8 *)(puVar1 + -0x58) = 0;
  *(undefined1 **)(puVar1 + -0x50) = puVar1 + -0x10;
  *(code **)(puVar1 + -0x48) = Atlas_Save_SaveManager__GetIntData;
  if ((bRam0000000003eb4c45 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c45 = 1;
  }
  lVar12 = Atlas_Save_SaveManager__get_SaveData(auVar16._0_8_);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = *(undefined8 *)(puVar1 + -0x80);
  *(undefined8 *)(puVar1 + -0x80) = uVar5;
  *(undefined8 *)(puVar1 + -0x78) = *(undefined8 *)(puVar1 + -0x78);
  *(undefined8 *)(puVar1 + -0x70) = *(undefined8 *)(puVar1 + -0x70);
  *(undefined8 *)(puVar1 + -0x68) = *(undefined8 *)(puVar1 + -0x68);
  *(undefined8 *)(puVar1 + -0x60) = *(undefined8 *)(puVar1 + -0x60);
  *(undefined8 *)(puVar1 + -0x58) = *(undefined8 *)(puVar1 + -0x58);
  *(undefined8 *)(puVar1 + -0x50) = *(undefined8 *)(puVar1 + -0x50);
  *(undefined8 *)(puVar1 + -0x48) = *(undefined8 *)(puVar1 + -0x48);
  lVar8 = lVar12;
  if ((bRam0000000003eb4c4b & 1) == 0) {
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4b = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = Atlas_Save_SaveManager__GetIntDataIndex(auVar16._8_8_,lVar12);
  if ((int)uVar3 < 0) {
    return uVar11;
  }
  if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x110), lVar12 != 0)) {
    if (*(uint *)(lVar12 + 0x18) <= uVar3) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return (ulong)*(uint *)(*(long *)(lVar12 + 0x10) + (ulong)uVar3 * 0x10 + 0x28);
  }
  auVar15 = func_0x00f78af4();
  uVar6 = auVar15._8_8_;
  lVar12 = auVar15._0_8_;
  *(undefined8 *)(puVar1 + -0xc0) = uVar5;
  *(undefined8 *)(puVar1 + -0xb8) = 0x3d246e0;
  *(undefined8 *)(puVar1 + -0xb0) = 0x3eb4000;
  *(long *)(puVar1 + -0xa8) = auVar16._8_8_;
  *(ulong *)(puVar1 + -0xa0) = uVar11;
  *(undefined8 *)(puVar1 + -0x98) = 0;
  *(undefined1 **)(puVar1 + -0x90) = puVar1 + -0x50;
  *(code **)(puVar1 + -0x88) = Atlas_Save_SaveManager__SetStringData;
  if ((bRam0000000003eb4c46 & 1) == 0) {
    func_0x00f78a20(0x3d3d918);
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d3d930);
    bRam0000000003eb4c46 = 1;
  }
  uVar7 = Atlas_Save_SaveManager__GetStringDataIndex(lVar12,uVar6);
  lVar10 = Atlas_Save_SaveManager__get_SaveData(lVar12);
  if ((int)(uint)uVar7 < 0) {
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0x118) != 0)) {
      uVar7 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$Add*/ func_0x0258f404(*(long *)(lVar10 + 0x118),uVar6,lVar8,uRam0000000003d3d918);
LAB_014ecdb8:
      *(undefined1 *)(lVar12 + 0x110) = 1;
      return uVar7;
    }
  }
  else if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x118), lVar10 != 0)) {
    if (*(uint *)(lVar10 + 0x18) <= (uint)uVar7) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + (uVar7 & 0xffffffff) * 0x10 + 0x28);
    if ((lVar10 != 0) && (uVar9 = /*System.String$$Equals*/ func_0x029caa48(lVar10,lVar8,5,0), (uVar9 & 1) != 0)) {
      return uVar9;
    }
    lVar10 = Atlas_Save_SaveManager__get_SaveData(lVar12);
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0x118) != 0)) {
      uVar7 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$set_Item*/ func_0x0258f0a8(*(long *)(lVar10 + 0x118),uVar7,uVar6,lVar8,uRam0000000003d3d930);
      goto LAB_014ecdb8;
    }
  }
  auVar16 = func_0x00f78af4();
  *(ulong *)(puVar1 + -0xf0) = uVar7;
  *(undefined8 *)(puVar1 + -0xe8) = uVar6;
  *(long *)(puVar1 + -0xe0) = lVar8;
  *(long *)(puVar1 + -0xd8) = lVar12;
  *(undefined1 **)(puVar1 + -0xd0) = puVar1 + -0x90;
  *(code **)(puVar1 + -200) = Atlas_Save_SaveManager__GetStringDataIndex;
  if ((bRam0000000003eb4c48 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c48 = 1;
  }
  lVar12 = Atlas_Save_SaveManager__get_SaveData(auVar16._0_8_);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(puVar1 + -0xf0) = *(undefined8 *)(puVar1 + -0xf0);
  *(undefined8 *)(puVar1 + -0xe8) = *(undefined8 *)(puVar1 + -0xe8);
  *(undefined8 *)(puVar1 + -0xe0) = *(undefined8 *)(puVar1 + -0xe0);
  *(undefined8 *)(puVar1 + -0xd8) = *(undefined8 *)(puVar1 + -0xd8);
  *(undefined8 *)(puVar1 + -0xd0) = *(undefined8 *)(puVar1 + -0xd0);
  *(undefined8 *)(puVar1 + -200) = *(undefined8 *)(puVar1 + -200);
  if ((bRam0000000003eb4c4c & 1) == 0) {
    func_0x00f78a20(0x3d3d920);
    func_0x00f78a20(0x3d3d928);
    bRam0000000003eb4c4c = 1;
  }
  if ((lVar12 != 0) && (lVar8 = *(long *)(lVar12 + 0x118), lVar8 != 0)) {
    uVar7 = 0;
    do {
      uVar3 = (uint)uVar7;
      if ((int)*(uint *)(lVar8 + 0x18) <= (int)uVar3) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + (long)(int)uVar3 * 0x10 + 0x20);
      if (lVar8 == 0) break;
      uVar9 = /*System.String$$Equals*/ func_0x029caa48(lVar8,auVar16._8_8_,5,0);
      if ((uVar9 & 1) != 0) {
        return uVar7;
      }
      uVar7 = (ulong)(uVar3 + 1);
      lVar8 = *(long *)(lVar12 + 0x118);
    } while (lVar8 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x147a2b0 | Atlas.League.LeagueModeHelper.GetStarsFromLeaderboardPlacement
// ============================================================

/* WARNING: Possible PIC construction at 0x0147a330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147a35c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147a440: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0147a360) */
/* WARNING: Removing unreachable block (ram,0x0147a334) */
/* WARNING: Removing unreachable block (ram,0x0147a348) */
/* WARNING: Removing unreachable block (ram,0x0147a340) */
/* WARNING: Removing unreachable block (ram,0x0147a394) */
/* WARNING: Removing unreachable block (ram,0x0147a444) */

ulong Atlas_League_LeagueModeHelper__GetStarsFromLeaderboardPlacement
                (uint param_1,uint param_2,long param_3)

{
  undefined1 *puVar1;
  undefined8 uVar5;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 ******ppppppuVar13;
  undefined *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uStack_e8;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 *****pppppuStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [16];
  undefined8 *****pppppuStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [16];
  undefined8 ****ppppuStack_20;
  undefined *puStack_18;
  
  auVar16._8_8_ = unaff_x19;
  auVar16._0_8_ = unaff_x20;
  if ((param_3 == 0) || (lVar12 = *(long *)(param_3 + 0x30), lVar12 == 0)) {
LAB_0147a300:
    func_0x00f78af4();
  }
  else if (param_2 < *(uint *)(lVar12 + 0x18)) {
    lVar12 = *(long *)(lVar12 + (long)(int)param_2 * 8 + 0x20);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x60), lVar12 == 0)) goto LAB_0147a300;
    if (param_1 < *(uint *)(lVar12 + 0x18)) {
      return (ulong)*(uint *)(lVar12 + (long)(int)param_1 * 4 + 0x20);
    }
  }
  uVar5 = func_0x00f78b24();
  auVar15 = func_0x00f78ac0(uVar5,0);
  lVar12 = auVar15._8_8_;
  puStack_18 = &Atlas_League_LeagueModeHelper__LatestCheckedStatsInCurrentWeek;
  pppppuStack_50 = &ppppuStack_20;
  if (lVar12 == 0) {
    puVar14 = &Atlas_League_LeaguePlayerSave__get_LatestCheckedStatsDate;
    ppppuStack_20 = (undefined8 ****)&stack0xfffffffffffffff0;
    lVar12 = func_0x00f78af4();
  }
  else {
    puVar14 = &UNK_0147a334;
    ppppuStack_20 = (undefined8 ****)&stack0xfffffffffffffff0;
    auVar16 = auVar15;
  }
  puStack_48 = puVar14;
  auStack_60 = auVar16;
  if ((bRam0000000003eb48e2 & 1) == 0) {
    func_0x00f78a20(0x3d6f1e0);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb48e2 = 1;
  }
  lVar6 = *(long *)(lVar12 + 0x10);
  if (lVar6 == 0) {
    auVar16 = func_0x00f78af4();
    lVar9 = auVar16._8_8_;
    puVar1 = auStack_90;
    uStack_80 = 0x3eb4000;
    puStack_68 = &Atlas_League_LeagueModeHelper__LastOpenedInCurrentWeek;
    ppppppuVar13 = &pppppuStack_70;
    lStack_78 = lVar12;
    pppppuStack_70 = &pppppuStack_50;
    uStack_88 = Atlas_League_LeagueModeHelper__StartOfWeek(auVar16._0_8_,1);
    if (lVar9 == 0) {
      puVar14 = &Atlas_League_LeaguePlayerSave__get_LatestOpenedDate;
      lVar12 = func_0x00f78af4();
    }
    else {
      puVar14 = &UNK_0147a444;
      lVar12 = lVar9;
    }
    if ((bRam0000000003eb48da & 1) == 0) {
      func_0x00f78a20(0x3d6f200);
      func_0x00f78a20(0x3d65d08);
      bRam0000000003eb48da = 1;
    }
    lVar6 = *(long *)(lVar12 + 0x10);
    if (lVar6 == 0) {
      iVar2 = func_0x00f78af4();
      if ((bRam0000000003eb48b2 & 1) == 0) {
        func_0x00f78a20(0x3d21070);
        bRam0000000003eb48b2 = 1;
      }
      uVar5 = Atlas_League_LeagueModeHelper__StartOfWeek(extraout_x1,1);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_e8 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(extraout_x1,uVar5,0);
      iVar3 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(&uStack_e8,0);
      return (ulong)(iVar2 <= iVar3);
    }
    auVar15._8_8_ = lVar9;
    auVar15._0_8_ = 0x3eb4000;
    uVar5 = /*STR('L_OD')*/ uRam0000000003d6f200;
  }
  else {
    puVar1 = auStack_40;
    uVar5 = /*STR('L_CSD')*/ uRam0000000003d6f1e0;
    ppppppuVar13 = (undefined8 ******)pppppuStack_50;
    puVar14 = puStack_48;
    auVar15 = auStack_60;
  }
  uVar8 = /*STR('')*/ uRam0000000003d65d08;
  *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
  *(undefined1 (*) [16])(puVar1 + -0x20) = auVar15;
  *(undefined8 *******)(puVar1 + -0x10) = ppppppuVar13;
  *(undefined **)(puVar1 + -8) = puVar14;
  if ((bRam0000000003eb4c44 & 1) == 0) {
    func_0x00f78a20(0x3d246e0,uVar5,/*STR('')*/ uRam0000000003d65d08,0);
    bRam0000000003eb4c44 = 1;
  }
  uVar7 = Atlas_Save_SaveManager__get_SaveData(lVar6);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar10 = *(undefined8 *)(puVar1 + -0x40);
  *(undefined8 *)(puVar1 + -0x40) = uVar10;
  *(undefined8 *)(puVar1 + -0x38) = *(undefined8 *)(puVar1 + -0x38);
  *(undefined8 *)(puVar1 + -0x30) = *(undefined8 *)(puVar1 + -0x30);
  *(undefined8 *)(puVar1 + -0x28) = *(undefined8 *)(puVar1 + -0x28);
  *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
  *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
  *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
  *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
  uVar11 = uVar7;
  if ((bRam0000000003eb4c4a & 1) == 0) {
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4a = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = Atlas_Save_SaveManager__GetStringDataIndex(uVar5,uVar7);
  if ((int)uVar4 < 0) {
    return uVar8;
  }
  if ((uVar7 != 0) && (lVar12 = *(long *)(uVar7 + 0x118), lVar12 != 0)) {
    if (*(uint *)(lVar12 + 0x18) <= uVar4) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return *(ulong *)(*(long *)(lVar12 + 0x10) + (ulong)uVar4 * 0x10 + 0x28);
  }
  auVar16 = func_0x00f78af4();
  *(undefined8 *)(puVar1 + -0x80) = uVar10;
  *(undefined8 *)(puVar1 + -0x78) = 0x3d246e0;
  *(undefined8 *)(puVar1 + -0x70) = 0x3eb4000;
  *(undefined8 *)(puVar1 + -0x68) = uVar5;
  *(ulong *)(puVar1 + -0x60) = uVar8;
  *(undefined8 *)(puVar1 + -0x58) = 0;
  *(undefined1 **)(puVar1 + -0x50) = puVar1 + -0x10;
  *(code **)(puVar1 + -0x48) = Atlas_Save_SaveManager__GetIntData;
  if ((bRam0000000003eb4c45 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c45 = 1;
  }
  lVar12 = Atlas_Save_SaveManager__get_SaveData(auVar16._0_8_);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = *(undefined8 *)(puVar1 + -0x80);
  *(undefined8 *)(puVar1 + -0x80) = uVar5;
  *(undefined8 *)(puVar1 + -0x78) = *(undefined8 *)(puVar1 + -0x78);
  *(undefined8 *)(puVar1 + -0x70) = *(undefined8 *)(puVar1 + -0x70);
  *(undefined8 *)(puVar1 + -0x68) = *(undefined8 *)(puVar1 + -0x68);
  *(undefined8 *)(puVar1 + -0x60) = *(undefined8 *)(puVar1 + -0x60);
  *(undefined8 *)(puVar1 + -0x58) = *(undefined8 *)(puVar1 + -0x58);
  *(undefined8 *)(puVar1 + -0x50) = *(undefined8 *)(puVar1 + -0x50);
  *(undefined8 *)(puVar1 + -0x48) = *(undefined8 *)(puVar1 + -0x48);
  lVar6 = lVar12;
  if ((bRam0000000003eb4c4b & 1) == 0) {
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4b = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = Atlas_Save_SaveManager__GetIntDataIndex(auVar16._8_8_,lVar12);
  if ((int)uVar4 < 0) {
    return uVar11;
  }
  if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x110), lVar12 != 0)) {
    if (*(uint *)(lVar12 + 0x18) <= uVar4) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return (ulong)*(uint *)(*(long *)(lVar12 + 0x10) + (ulong)uVar4 * 0x10 + 0x28);
  }
  auVar15 = func_0x00f78af4();
  uVar10 = auVar15._8_8_;
  lVar12 = auVar15._0_8_;
  *(undefined8 *)(puVar1 + -0xc0) = uVar5;
  *(undefined8 *)(puVar1 + -0xb8) = 0x3d246e0;
  *(undefined8 *)(puVar1 + -0xb0) = 0x3eb4000;
  *(long *)(puVar1 + -0xa8) = auVar16._8_8_;
  *(ulong *)(puVar1 + -0xa0) = uVar11;
  *(undefined8 *)(puVar1 + -0x98) = 0;
  *(undefined1 **)(puVar1 + -0x90) = puVar1 + -0x50;
  *(code **)(puVar1 + -0x88) = Atlas_Save_SaveManager__SetStringData;
  if ((bRam0000000003eb4c46 & 1) == 0) {
    func_0x00f78a20(0x3d3d918);
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d3d930);
    bRam0000000003eb4c46 = 1;
  }
  uVar8 = Atlas_Save_SaveManager__GetStringDataIndex(lVar12,uVar10);
  lVar9 = Atlas_Save_SaveManager__get_SaveData(lVar12);
  if ((int)(uint)uVar8 < 0) {
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0x118) != 0)) {
      uVar8 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$Add*/ func_0x0258f404(*(long *)(lVar9 + 0x118),uVar10,lVar6,uRam0000000003d3d918);
LAB_014ecdb8:
      *(undefined1 *)(lVar12 + 0x110) = 1;
      return uVar8;
    }
  }
  else if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x118), lVar9 != 0)) {
    if (*(uint *)(lVar9 + 0x18) <= (uint)uVar8) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + (uVar8 & 0xffffffff) * 0x10 + 0x28);
    if ((lVar9 != 0) && (uVar7 = /*System.String$$Equals*/ func_0x029caa48(lVar9,lVar6,5,0), (uVar7 & 1) != 0)) {
      return uVar7;
    }
    lVar9 = Atlas_Save_SaveManager__get_SaveData(lVar12);
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0x118) != 0)) {
      uVar8 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$set_Item*/ func_0x0258f0a8(*(long *)(lVar9 + 0x118),uVar8,uVar10,lVar6,uRam0000000003d3d930);
      goto LAB_014ecdb8;
    }
  }
  auVar16 = func_0x00f78af4();
  *(ulong *)(puVar1 + -0xf0) = uVar8;
  *(undefined8 *)(puVar1 + -0xe8) = uVar10;
  *(long *)(puVar1 + -0xe0) = lVar6;
  *(long *)(puVar1 + -0xd8) = lVar12;
  *(undefined1 **)(puVar1 + -0xd0) = puVar1 + -0x90;
  *(code **)(puVar1 + -200) = Atlas_Save_SaveManager__GetStringDataIndex;
  if ((bRam0000000003eb4c48 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c48 = 1;
  }
  lVar12 = Atlas_Save_SaveManager__get_SaveData(auVar16._0_8_);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(puVar1 + -0xf0) = *(undefined8 *)(puVar1 + -0xf0);
  *(undefined8 *)(puVar1 + -0xe8) = *(undefined8 *)(puVar1 + -0xe8);
  *(undefined8 *)(puVar1 + -0xe0) = *(undefined8 *)(puVar1 + -0xe0);
  *(undefined8 *)(puVar1 + -0xd8) = *(undefined8 *)(puVar1 + -0xd8);
  *(undefined8 *)(puVar1 + -0xd0) = *(undefined8 *)(puVar1 + -0xd0);
  *(undefined8 *)(puVar1 + -200) = *(undefined8 *)(puVar1 + -200);
  if ((bRam0000000003eb4c4c & 1) == 0) {
    func_0x00f78a20(0x3d3d920);
    func_0x00f78a20(0x3d3d928);
    bRam0000000003eb4c4c = 1;
  }
  if ((lVar12 != 0) && (lVar6 = *(long *)(lVar12 + 0x118), lVar6 != 0)) {
    uVar8 = 0;
    do {
      uVar4 = (uint)uVar8;
      if ((int)*(uint *)(lVar6 + 0x18) <= (int)uVar4) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar4) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + (long)(int)uVar4 * 0x10 + 0x20);
      if (lVar6 == 0) break;
      uVar7 = /*System.String$$Equals*/ func_0x029caa48(lVar6,auVar16._8_8_,5,0);
      if ((uVar7 & 1) != 0) {
        return uVar8;
      }
      uVar8 = (ulong)(uVar4 + 1);
      lVar6 = *(long *)(lVar12 + 0x118);
    } while (lVar6 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x147a310 | Atlas.League.LeagueModeHelper.LatestCheckedStatsInCurrentWeek
// ============================================================

/* WARNING: Possible PIC construction at 0x0147a330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147a35c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147a440: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0147a360) */
/* WARNING: Removing unreachable block (ram,0x0147a334) */
/* WARNING: Removing unreachable block (ram,0x0147a348) */
/* WARNING: Removing unreachable block (ram,0x0147a340) */
/* WARNING: Removing unreachable block (ram,0x0147a394) */
/* WARNING: Removing unreachable block (ram,0x0147a444) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_League_LeagueModeHelper__LatestCheckedStatsInCurrentWeek
                (undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 extraout_x1;
  ulong uVar10;
  long unaff_x19;
  long lVar11;
  undefined8 unaff_x20;
  undefined8 uVar12;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 *******pppppppuVar13;
  undefined *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uStack_d8;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 *******pppppppuStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 *******pppppppuStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [16];
  
  puVar1 = auStack_30;
  if (param_2 == 0) {
    puVar14 = &Atlas_League_LeaguePlayerSave__get_LatestCheckedStatsDate;
    param_2 = func_0x00f78af4();
  }
  else {
    puVar14 = (undefined *)0x147a334;
    unaff_x19 = param_2;
    unaff_x20 = param_1;
  }
  uStack_50 = unaff_x20;
  lStack_48 = unaff_x19;
  pppppppuStack_40 = (undefined8 *******)&stack0xfffffffffffffff0;
  puStack_38 = puVar14;
  if ((bRam0000000003eb48e2 & 1) == 0) {
    func_0x00f78a20(0x3d6f1e0);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb48e2 = 1;
  }
  lVar5 = *(long *)(param_2 + 0x10);
  uVar6 = /*STR('L_CSD')*/ uRam0000000003d6f1e0;
  lVar11 = lStack_48;
  uVar12 = uStack_50;
  pppppppuVar13 = pppppppuStack_40;
  puVar14 = puStack_38;
  if (lVar5 == 0) {
    auVar15 = func_0x00f78af4();
    lVar11 = auVar15._8_8_;
    puVar1 = auStack_80;
    uStack_70 = 0x3eb4000;
    puStack_58 = &Atlas_League_LeagueModeHelper__LastOpenedInCurrentWeek;
    lStack_68 = param_2;
    pppppppuStack_60 = &pppppppuStack_40;
    uStack_78 = Atlas_League_LeagueModeHelper__StartOfWeek(auVar15._0_8_,1);
    if (lVar11 == 0) {
      puVar14 = &Atlas_League_LeaguePlayerSave__get_LatestOpenedDate;
      lVar5 = func_0x00f78af4();
    }
    else {
      puVar14 = &UNK_0147a444;
      lVar5 = lVar11;
    }
    if ((bRam0000000003eb48da & 1) == 0) {
      func_0x00f78a20(0x3d6f200);
      func_0x00f78a20(0x3d65d08);
      bRam0000000003eb48da = 1;
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if (lVar5 == 0) {
      iVar2 = func_0x00f78af4();
      if ((bRam0000000003eb48b2 & 1) == 0) {
        func_0x00f78a20(0x3d21070);
        bRam0000000003eb48b2 = 1;
      }
      uVar6 = Atlas_League_LeagueModeHelper__StartOfWeek(extraout_x1,1);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_d8 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(extraout_x1,uVar6,0);
      iVar3 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(&uStack_d8,0);
      return (ulong)(iVar2 <= iVar3);
    }
    uVar6 = /*STR('L_OD')*/ uRam0000000003d6f200;
    uVar12 = 0x3eb4000;
    pppppppuVar13 = &pppppppuStack_60;
  }
  uVar8 = /*STR('')*/ uRam0000000003d65d08;
  *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar1 + -0x20) = uVar12;
  *(long *)(puVar1 + -0x18) = lVar11;
  *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar13;
  *(undefined **)(puVar1 + -8) = puVar14;
  if ((bRam0000000003eb4c44 & 1) == 0) {
    func_0x00f78a20(0x3d246e0,uVar6,/*STR('')*/ uRam0000000003d65d08,0);
    bRam0000000003eb4c44 = 1;
  }
  uVar7 = Atlas_Save_SaveManager__get_SaveData(lVar5);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar12 = *(undefined8 *)(puVar1 + -0x40);
  *(undefined8 *)(puVar1 + -0x40) = uVar12;
  *(undefined8 *)(puVar1 + -0x38) = *(undefined8 *)(puVar1 + -0x38);
  *(undefined8 *)(puVar1 + -0x30) = *(undefined8 *)(puVar1 + -0x30);
  *(undefined8 *)(puVar1 + -0x28) = *(undefined8 *)(puVar1 + -0x28);
  *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
  *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
  *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
  *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
  uVar10 = uVar7;
  if ((bRam0000000003eb4c4a & 1) == 0) {
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4a = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = Atlas_Save_SaveManager__GetStringDataIndex(uVar6,uVar7);
  if ((int)uVar4 < 0) {
    return uVar8;
  }
  if ((uVar7 != 0) && (lVar11 = *(long *)(uVar7 + 0x118), lVar11 != 0)) {
    if (*(uint *)(lVar11 + 0x18) <= uVar4) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return *(ulong *)(*(long *)(lVar11 + 0x10) + (ulong)uVar4 * 0x10 + 0x28);
  }
  auVar15 = func_0x00f78af4();
  *(undefined8 *)(puVar1 + -0x80) = uVar12;
  *(undefined8 *)(puVar1 + -0x78) = 0x3d246e0;
  *(undefined8 *)(puVar1 + -0x70) = 0x3eb4000;
  *(undefined8 *)(puVar1 + -0x68) = uVar6;
  *(ulong *)(puVar1 + -0x60) = uVar8;
  *(undefined8 *)(puVar1 + -0x58) = 0;
  *(undefined1 **)(puVar1 + -0x50) = puVar1 + -0x10;
  *(code **)(puVar1 + -0x48) = Atlas_Save_SaveManager__GetIntData;
  if ((bRam0000000003eb4c45 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c45 = 1;
  }
  lVar11 = Atlas_Save_SaveManager__get_SaveData(auVar15._0_8_);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = *(undefined8 *)(puVar1 + -0x80);
  *(undefined8 *)(puVar1 + -0x80) = uVar6;
  *(undefined8 *)(puVar1 + -0x78) = *(undefined8 *)(puVar1 + -0x78);
  *(undefined8 *)(puVar1 + -0x70) = *(undefined8 *)(puVar1 + -0x70);
  *(undefined8 *)(puVar1 + -0x68) = *(undefined8 *)(puVar1 + -0x68);
  *(undefined8 *)(puVar1 + -0x60) = *(undefined8 *)(puVar1 + -0x60);
  *(undefined8 *)(puVar1 + -0x58) = *(undefined8 *)(puVar1 + -0x58);
  *(undefined8 *)(puVar1 + -0x50) = *(undefined8 *)(puVar1 + -0x50);
  *(undefined8 *)(puVar1 + -0x48) = *(undefined8 *)(puVar1 + -0x48);
  lVar5 = lVar11;
  if ((bRam0000000003eb4c4b & 1) == 0) {
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4b = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = Atlas_Save_SaveManager__GetIntDataIndex(auVar15._8_8_,lVar11);
  if ((int)uVar4 < 0) {
    return uVar10;
  }
  if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x110), lVar11 != 0)) {
    if (*(uint *)(lVar11 + 0x18) <= uVar4) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return (ulong)*(uint *)(*(long *)(lVar11 + 0x10) + (ulong)uVar4 * 0x10 + 0x28);
  }
  auVar16 = func_0x00f78af4();
  uVar12 = auVar16._8_8_;
  lVar11 = auVar16._0_8_;
  *(undefined8 *)(puVar1 + -0xc0) = uVar6;
  *(undefined8 *)(puVar1 + -0xb8) = 0x3d246e0;
  *(undefined8 *)(puVar1 + -0xb0) = 0x3eb4000;
  *(long *)(puVar1 + -0xa8) = auVar15._8_8_;
  *(ulong *)(puVar1 + -0xa0) = uVar10;
  *(undefined8 *)(puVar1 + -0x98) = 0;
  *(undefined1 **)(puVar1 + -0x90) = puVar1 + -0x50;
  *(code **)(puVar1 + -0x88) = Atlas_Save_SaveManager__SetStringData;
  if ((bRam0000000003eb4c46 & 1) == 0) {
    func_0x00f78a20(0x3d3d918);
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d3d930);
    bRam0000000003eb4c46 = 1;
  }
  uVar8 = Atlas_Save_SaveManager__GetStringDataIndex(lVar11,uVar12);
  lVar9 = Atlas_Save_SaveManager__get_SaveData(lVar11);
  if ((int)(uint)uVar8 < 0) {
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0x118) != 0)) {
      uVar8 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$Add*/ func_0x0258f404(*(long *)(lVar9 + 0x118),uVar12,lVar5,uRam0000000003d3d918);
LAB_014ecdb8:
      *(undefined1 *)(lVar11 + 0x110) = 1;
      return uVar8;
    }
  }
  else if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x118), lVar9 != 0)) {
    if (*(uint *)(lVar9 + 0x18) <= (uint)uVar8) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + (uVar8 & 0xffffffff) * 0x10 + 0x28);
    if ((lVar9 != 0) && (uVar7 = /*System.String$$Equals*/ func_0x029caa48(lVar9,lVar5,5,0), (uVar7 & 1) != 0)) {
      return uVar7;
    }
    lVar9 = Atlas_Save_SaveManager__get_SaveData(lVar11);
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0x118) != 0)) {
      uVar8 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$set_Item*/ func_0x0258f0a8(*(long *)(lVar9 + 0x118),uVar8,uVar12,lVar5,uRam0000000003d3d930);
      goto LAB_014ecdb8;
    }
  }
  auVar15 = func_0x00f78af4();
  *(ulong *)(puVar1 + -0xf0) = uVar8;
  *(undefined8 *)(puVar1 + -0xe8) = uVar12;
  *(long *)(puVar1 + -0xe0) = lVar5;
  *(long *)(puVar1 + -0xd8) = lVar11;
  *(undefined1 **)(puVar1 + -0xd0) = puVar1 + -0x90;
  *(code **)(puVar1 + -200) = Atlas_Save_SaveManager__GetStringDataIndex;
  if ((bRam0000000003eb4c48 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c48 = 1;
  }
  lVar11 = Atlas_Save_SaveManager__get_SaveData(auVar15._0_8_);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(puVar1 + -0xf0) = *(undefined8 *)(puVar1 + -0xf0);
  *(undefined8 *)(puVar1 + -0xe8) = *(undefined8 *)(puVar1 + -0xe8);
  *(undefined8 *)(puVar1 + -0xe0) = *(undefined8 *)(puVar1 + -0xe0);
  *(undefined8 *)(puVar1 + -0xd8) = *(undefined8 *)(puVar1 + -0xd8);
  *(undefined8 *)(puVar1 + -0xd0) = *(undefined8 *)(puVar1 + -0xd0);
  *(undefined8 *)(puVar1 + -200) = *(undefined8 *)(puVar1 + -200);
  if ((bRam0000000003eb4c4c & 1) == 0) {
    func_0x00f78a20(0x3d3d920);
    func_0x00f78a20(0x3d3d928);
    bRam0000000003eb4c4c = 1;
  }
  if ((lVar11 != 0) && (lVar5 = *(long *)(lVar11 + 0x118), lVar5 != 0)) {
    uVar8 = 0;
    do {
      uVar4 = (uint)uVar8;
      if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar4) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar4) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + (long)(int)uVar4 * 0x10 + 0x20);
      if (lVar5 == 0) break;
      uVar7 = /*System.String$$Equals*/ func_0x029caa48(lVar5,auVar15._8_8_,5,0);
      if ((uVar7 & 1) != 0) {
        return uVar8;
      }
      uVar8 = (ulong)(uVar4 + 1);
      lVar5 = *(long *)(lVar11 + 0x118);
    } while (lVar5 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x147a418 | Atlas.League.LeagueModeHelper.LastOpenedInCurrentWeek
// ============================================================

/* WARNING: Possible PIC construction at 0x0147a440: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0147a444) */

ulong Atlas_League_LeagueModeHelper__LastOpenedInCurrentWeek(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 extraout_x1;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_88;
  
  Atlas_League_LeagueModeHelper__StartOfWeek(param_1,1);
  if (param_2 == 0) {
    param_2 = func_0x00f78af4();
  }
  if ((bRam0000000003eb48da & 1) == 0) {
    func_0x00f78a20(0x3d6f200);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb48da = 1;
  }
  uVar5 = /*STR('L_OD')*/ uRam0000000003d6f200;
  uVar7 = /*STR('')*/ uRam0000000003d65d08;
  lVar4 = *(long *)(param_2 + 0x10);
  if (lVar4 == 0) {
    iVar1 = func_0x00f78af4();
    if ((bRam0000000003eb48b2 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      bRam0000000003eb48b2 = 1;
    }
    uVar5 = Atlas_League_LeagueModeHelper__StartOfWeek(extraout_x1,1);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_88 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(extraout_x1,uVar5,0);
    iVar2 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(&uStack_88,0);
    return (ulong)(iVar1 <= iVar2);
  }
  if ((bRam0000000003eb4c44 & 1) == 0) {
    func_0x00f78a20(0x3d246e0,/*STR('L_OD')*/ uRam0000000003d6f200,/*STR('')*/ uRam0000000003d65d08,0);
    bRam0000000003eb4c44 = 1;
  }
  uVar6 = Atlas_Save_SaveManager__get_SaveData(lVar4);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar9 = uVar6;
  if ((bRam0000000003eb4c4a & 1) == 0) {
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4a = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = Atlas_Save_SaveManager__GetStringDataIndex(uVar5,uVar6);
  if ((int)uVar3 < 0) {
    return uVar7;
  }
  if ((uVar6 != 0) && (lVar4 = *(long *)(uVar6 + 0x118), lVar4 != 0)) {
    if (*(uint *)(lVar4 + 0x18) <= uVar3) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return *(ulong *)(*(long *)(lVar4 + 0x10) + (ulong)uVar3 * 0x10 + 0x28);
  }
  auVar11 = func_0x00f78af4();
  uStack_88 = 0;
  if ((bRam0000000003eb4c45 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c45 = 1;
  }
  lVar4 = Atlas_Save_SaveManager__get_SaveData(auVar11._0_8_);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = lVar4;
  if ((bRam0000000003eb4c4b & 1) == 0) {
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4b = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = Atlas_Save_SaveManager__GetIntDataIndex(auVar11._8_8_,lVar4);
  if ((int)uVar3 < 0) {
    return uVar9;
  }
  if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x110), lVar4 != 0)) {
    if (*(uint *)(lVar4 + 0x18) <= uVar3) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return (ulong)*(uint *)(*(long *)(lVar4 + 0x10) + (ulong)uVar3 * 0x10 + 0x28);
  }
  auVar11 = func_0x00f78af4();
  uVar5 = auVar11._8_8_;
  lVar4 = auVar11._0_8_;
  if ((bRam0000000003eb4c46 & 1) == 0) {
    func_0x00f78a20(0x3d3d918);
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d3d930);
    bRam0000000003eb4c46 = 1;
  }
  uVar7 = Atlas_Save_SaveManager__GetStringDataIndex(lVar4,uVar5);
  lVar8 = Atlas_Save_SaveManager__get_SaveData(lVar4);
  if ((int)(uint)uVar7 < 0) {
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0x118) != 0)) {
      uVar7 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$Add*/ func_0x0258f404(*(long *)(lVar8 + 0x118),uVar5,lVar10,uRam0000000003d3d918);
LAB_014ecdb8:
      *(undefined1 *)(lVar4 + 0x110) = 1;
      return uVar7;
    }
  }
  else if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x118), lVar8 != 0)) {
    if (*(uint *)(lVar8 + 0x18) <= (uint)uVar7) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + (uVar7 & 0xffffffff) * 0x10 + 0x28);
    if ((lVar8 != 0) && (uVar6 = /*System.String$$Equals*/ func_0x029caa48(lVar8,lVar10,5,0), (uVar6 & 1) != 0)) {
      return uVar6;
    }
    lVar8 = Atlas_Save_SaveManager__get_SaveData(lVar4);
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0x118) != 0)) {
      uVar7 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$set_Item*/ func_0x0258f0a8(*(long *)(lVar8 + 0x118),uVar7,uVar5,lVar10,uRam0000000003d3d930);
      goto LAB_014ecdb8;
    }
  }
  auVar11 = func_0x00f78af4();
  if ((bRam0000000003eb4c48 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c48 = 1;
  }
  lVar4 = Atlas_Save_SaveManager__get_SaveData(auVar11._0_8_);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb4c4c & 1) == 0) {
    func_0x00f78a20(0x3d3d920);
    func_0x00f78a20(0x3d3d928);
    bRam0000000003eb4c4c = 1;
  }
  if ((lVar4 != 0) && (lVar10 = *(long *)(lVar4 + 0x118), lVar10 != 0)) {
    uVar7 = 0;
    do {
      uVar3 = (uint)uVar7;
      if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar3) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + (long)(int)uVar3 * 0x10 + 0x20);
      if (lVar10 == 0) break;
      uVar6 = /*System.String$$Equals*/ func_0x029caa48(lVar10,auVar11._8_8_,5,0);
      if ((uVar6 & 1) != 0) {
        return uVar7;
      }
      uVar7 = (ulong)(uVar3 + 1);
      lVar10 = *(long *)(lVar4 + 0x118);
    } while (lVar10 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x147a4fc | Atlas.League.LeagueModeHelper.IsEventPlayable
// ============================================================

bool Atlas_League_LeagueModeHelper__IsEventPlayable(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb48b2 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    bRam0000000003eb48b2 = 1;
  }
  uVar2 = Atlas_League_LeagueModeHelper__StartOfWeek(param_2,1);
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_38 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(param_2,uVar2,0);
  iVar1 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(&uStack_38,0);
  return param_1 <= iVar1;
}



// ============================================================
// RVA: 0x147a5a4 | Atlas.League.LeagueModeHelper.GetDayIndex
// ============================================================

void Atlas_League_LeagueModeHelper__GetDayIndex(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb48b3 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    bRam0000000003eb48b3 = 1;
  }
  uVar1 = Atlas_League_LeagueModeHelper__StartOfWeek(param_1,1);
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_38 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(param_1,uVar1,0);
  /*System.TimeSpan$$get_Days*/ func_0x029f02d8(&uStack_38,0);
  return;
}



// ============================================================
// RVA: 0x147a640 | Atlas.League.LeagueModeHelper.GetLeagueDefinitionID
// ============================================================

undefined8 Atlas_League_LeagueModeHelper__GetLeagueDefinitionID(uint param_1)

{
  undefined8 *puVar1;
  
  if ((bRam0000000003eb48b4 & 1) == 0) {
    func_0x00f78a20(0x3d69868);
    func_0x00f78a20(0x3d6f988);
    func_0x00f78a20(0x3d729a0);
    func_0x00f78a20(0x3d6bcb0);
    func_0x00f78a20(0x3d71298);
    func_0x00f78a20(0x3d6d490);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb48b4 = 1;
  }
  if (param_1 < 6) {
    puVar1 = *(undefined8 **)(&UNK_03a5f0c0 + (long)(int)param_1 * 8);
  }
  else {
    puVar1 = (undefined8 *)0x3d65d08;
  }
  return *puVar1;
}



// ============================================================
// RVA: 0x147a6e8 | Atlas.League.LeagueModeHelper.LastOpenedOrPlayedInFuture
// ============================================================

/* WARNING: Possible PIC construction at 0x0147a708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147a71c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147a810: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0147a720) */
/* WARNING: Removing unreachable block (ram,0x0147a70c) */
/* WARNING: Removing unreachable block (ram,0x0147a738) */
/* WARNING: Removing unreachable block (ram,0x0147a74c) */
/* WARNING: Removing unreachable block (ram,0x0147a774) */
/* WARNING: Removing unreachable block (ram,0x0147a76c) */
/* WARNING: Removing unreachable block (ram,0x0147a778) */
/* WARNING: Removing unreachable block (ram,0x0147a718) */
/* WARNING: Removing unreachable block (ram,0x0147a814) */
/* WARNING: Removing unreachable block (ram,0x0147a840) */
/* WARNING: Removing unreachable block (ram,0x0147a818) */
/* WARNING: Removing unreachable block (ram,0x014eb72c) */

ulong Atlas_League_LeagueModeHelper__LastOpenedOrPlayedInFuture(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 extraout_w1;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_b8;
  
  if (param_2 == 0) {
    param_2 = func_0x00f78af4();
  }
  if ((bRam0000000003eb48dc & 1) == 0) {
    func_0x00f78a20(0x3d6f1f8);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb48dc = 1;
  }
  uVar3 = /*STR('L_LPD')*/ uRam0000000003d6f1f8;
  uVar6 = /*STR('')*/ uRam0000000003d65d08;
  lVar2 = *(long *)(param_2 + 0x10);
  if (lVar2 == 0) {
    uStack_b8._4_4_ = func_0x00f78af4();
    if ((bRam0000000003eb48ba & 1) == 0) {
      func_0x00f78a20(0x3d22910);
      func_0x00f78a20(0x3d6f3b0);
      func_0x00f78a20(0x3d7d018);
      bRam0000000003eb48ba = 1;
    }
    uVar3 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,(long)&uStack_b8 + 4);
    uStack_b8 = (code *)CONCAT44(uStack_b8._4_4_,extraout_w1);
    uVar4 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_b8);
    uVar6 = /*System.String$$Format*/ func_0x029bdf30(/*STR('{0}_{1}_{2}')*/ uRam0000000003d7d018,/*STR('League_CDP')*/ uRam0000000003d6f3b0,uVar3,uVar4,0);
    return uVar6;
  }
  if ((bRam0000000003eb4c44 & 1) == 0) {
    func_0x00f78a20(0x3d246e0,/*STR('L_LPD')*/ uRam0000000003d6f1f8,/*STR('')*/ uRam0000000003d65d08,0);
    bRam0000000003eb4c44 = 1;
  }
  uVar5 = Atlas_Save_SaveManager__get_SaveData(lVar2);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = uVar5;
  if ((bRam0000000003eb4c4a & 1) == 0) {
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4a = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = Atlas_Save_SaveManager__GetStringDataIndex(uVar3,uVar5);
  if ((int)uVar1 < 0) {
    return uVar6;
  }
  if ((uVar5 != 0) && (lVar2 = *(long *)(uVar5 + 0x118), lVar2 != 0)) {
    if (*(uint *)(lVar2 + 0x18) <= uVar1) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return *(ulong *)(*(long *)(lVar2 + 0x10) + (ulong)uVar1 * 0x10 + 0x28);
  }
  auVar10 = func_0x00f78af4();
  if ((bRam0000000003eb4c45 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c45 = 1;
  }
  lVar2 = Atlas_Save_SaveManager__get_SaveData(auVar10._0_8_);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar9 = lVar2;
  if ((bRam0000000003eb4c4b & 1) == 0) {
    func_0x00f78a20(0x3d3d900);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c4b = 1;
  }
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = Atlas_Save_SaveManager__GetIntDataIndex(auVar10._8_8_,lVar2);
  if ((int)uVar1 < 0) {
    return uVar8;
  }
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x110), lVar2 != 0)) {
    if (*(uint *)(lVar2 + 0x18) <= uVar1) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return (ulong)*(uint *)(*(long *)(lVar2 + 0x10) + (ulong)uVar1 * 0x10 + 0x28);
  }
  auVar10 = func_0x00f78af4();
  uVar3 = auVar10._8_8_;
  lVar2 = auVar10._0_8_;
  uStack_b8 = Atlas_Save_SaveManager__SetStringData;
  if ((bRam0000000003eb4c46 & 1) == 0) {
    func_0x00f78a20(0x3d3d918);
    func_0x00f78a20(0x3d3d928);
    func_0x00f78a20(0x3d3d930);
    bRam0000000003eb4c46 = 1;
  }
  uVar6 = Atlas_Save_SaveManager__GetStringDataIndex(lVar2,uVar3);
  lVar7 = Atlas_Save_SaveManager__get_SaveData(lVar2);
  if ((int)(uint)uVar6 < 0) {
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0x118) != 0)) {
      uVar6 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$Add*/ func_0x0258f404(*(long *)(lVar7 + 0x118),uVar3,lVar9,uRam0000000003d3d918);
LAB_014ecdb8:
      *(undefined1 *)(lVar2 + 0x110) = 1;
      return uVar6;
    }
  }
  else if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x118), lVar7 != 0)) {
    if (*(uint *)(lVar7 + 0x18) <= (uint)uVar6) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + (uVar6 & 0xffffffff) * 0x10 + 0x28);
    if ((lVar7 != 0) && (uVar5 = /*System.String$$Equals*/ func_0x029caa48(lVar7,lVar9,5,0), (uVar5 & 1) != 0)) {
      return uVar5;
    }
    lVar7 = Atlas_Save_SaveManager__get_SaveData(lVar2);
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0x118) != 0)) {
      uVar6 = /*System.Collections.Generic.List<SaveData.KeyValueString>$$set_Item*/ func_0x0258f0a8(*(long *)(lVar7 + 0x118),uVar6,uVar3,lVar9,uRam0000000003d3d930);
      goto LAB_014ecdb8;
    }
  }
  auVar10 = func_0x00f78af4();
  if ((bRam0000000003eb4c48 & 1) == 0) {
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4c48 = 1;
  }
  lVar2 = Atlas_Save_SaveManager__get_SaveData(auVar10._0_8_);
  if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb4c4c & 1) == 0) {
    func_0x00f78a20(0x3d3d920);
    func_0x00f78a20(0x3d3d928);
    bRam0000000003eb4c4c = 1;
  }
  if ((lVar2 != 0) && (lVar9 = *(long *)(lVar2 + 0x118), lVar9 != 0)) {
    uVar6 = 0;
    do {
      uVar1 = (uint)uVar6;
      if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar1) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar9 + 0x18) <= uVar1) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + (long)(int)uVar1 * 0x10 + 0x20);
      if (lVar9 == 0) break;
      uVar5 = /*System.String$$Equals*/ func_0x029caa48(lVar9,auVar10._8_8_,5,0);
      if ((uVar5 & 1) != 0) {
        return uVar6;
      }
      uVar6 = (ulong)(uVar1 + 1);
      lVar9 = *(long *)(lVar2 + 0x118);
    } while (lVar9 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



