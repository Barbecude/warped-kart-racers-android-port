// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.League.LeagueModeTester

// ============================================================
// RVA: 0x147af28 | Atlas.League.LeagueModeTester.TestMapGeneration
// ============================================================

void Atlas_League_LeagueModeTester__TestMapGeneration(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined4 *puVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000003eb48bc & 1) == 0) {
    func_0x00f78a20(0x3d1eec0);
    func_0x00f78a20(0x3d210d0);
    func_0x00f78a20(0x3d2dc38);
    func_0x00f78a20(0x3d27e48);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d65de0);
    func_0x00f78a20(0x3d65ed8);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb48bc = 1;
  }
  uStack_68 = 0;
  lVar1 = func_0x00f78a34(/*System.DateTime[]_TypeInfo*/ uRam0000000003d1eec0,5);
  uStack_70 = 0;
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_70,0x7e7,5,1,0);
  if (lVar1 == 0) {
LAB_0147b480:
    func_0x00f78af4();
LAB_0147b484:
    uVar2 = func_0x00f78b14();
  }
  else {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined8 *)(lVar1 + 0x20) = uStack_70;
      uStack_78 = 0;
      /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_78,0x7e7,6,1,0);
      if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar1 + 0x28) = uStack_78;
        uStack_80 = 0;
        /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_80,0x7e7,7,1,0);
        if (2 < *(uint *)(lVar1 + 0x18)) {
          *(undefined8 *)(lVar1 + 0x30) = uStack_80;
          uStack_88 = 0;
          /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_88,0x7e7,8,1,0);
          if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar1 + 0x38) = uStack_88;
            uStack_90 = 0;
            /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_90,0x7e7,9,1,0);
            uVar10 = (uint)*(ulong *)(lVar1 + 0x18);
            if (4 < uVar10) {
              *(undefined8 *)(lVar1 + 0x40) = uStack_90;
              if (0 < (int)uVar10) {
                uVar15 = 0;
                uVar13 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
                lVar6 = /*STR('')*/ lRam0000000003d65d08;
                do {
                  if (uVar13 <= uVar15) goto LAB_0147b478;
                  uStack_68 = *(undefined8 *)(lVar1 + uVar15 * 8 + 0x20);
                  uVar2 = Atlas_League_LeagueModeHelper__StartOfWeek(uStack_68,1);
                  lVar3 = Atlas_League_LeagueModeHelper__GenerateMapSelection(uVar2,param_1);
                  if ((param_1 == 0) || (lVar14 = *(long *)(param_1 + 0x48), lVar14 == 0))
                  goto LAB_0147b480;
                  uVar10 = 0xffffffff;
                  while( true ) {
                    uVar12 = uVar10 + 1;
                    if ((int)*(uint *)(lVar14 + 0x18) <= (int)uVar12) break;
                    if (*(uint *)(lVar14 + 0x18) <= uVar12) goto LAB_0147b478;
                    lVar14 = *(long *)(lVar14 + (long)(int)uVar12 * 8 + 0x20);
                    plVar4 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,10);
                    if (plVar4 == (long *)0x0) goto LAB_0147b480;
                    if ((lVar6 != 0) &&
                       (lVar5 = func_0x00f78adc(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                    goto LAB_0147b484;
                    if ((int)plVar4[3] == 0) goto LAB_0147b478;
                    plVar4[4] = lVar6;
                    lVar6 = /*System.DateTime$$ToShortDateString*/ func_0x02a8efec(&uStack_68,0);
                    if ((lVar6 != 0) &&
                       (lVar5 = func_0x00f78adc(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                    goto LAB_0147b484;
                    uVar11 = (uint)plVar4[3];
                    if ((plVar4[3] & 0xfffffffeU) == 0) goto LAB_0147b478;
                    plVar4[5] = lVar6;
                    if (/*STR(' ')*/ lRam0000000003d65ed8 != 0) {
                      lVar6 = func_0x00f78adc(/*STR(' ')*/ lRam0000000003d65ed8,*(undefined8 *)(*plVar4 + 0x40));
                      if (lVar6 == 0) goto LAB_0147b484;
                      uVar11 = (uint)plVar4[3];
                    }
                    if (uVar11 < 3) goto LAB_0147b478;
                    plVar4[6] = /*STR(' ')*/ lRam0000000003d65ed8;
                    if (lVar14 == 0) goto LAB_0147b480;
                    plVar7 = (long *)func_0x00f78ae0(/*System.DayOfWeek_TypeInfo*/ uRam0000000003d210d0,
                                                     (undefined4 *)(lVar14 + 0x10));
                    if (plVar7 == (long *)0x0) goto LAB_0147b480;
                    lVar6 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
                    puVar8 = (undefined4 *)func_0x00f78ae4(plVar7);
                    *(undefined4 *)(lVar14 + 0x10) = *puVar8;
                    if ((lVar6 != 0) &&
                       (lVar5 = func_0x00f78adc(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
                    goto LAB_0147b484;
                    uVar11 = (uint)plVar4[3];
                    if ((plVar4[3] & 0xfffffffcU) == 0) goto LAB_0147b478;
                    plVar4[7] = lVar6;
                    if (/*STR(' ')*/ lRam0000000003d65ed8 != 0) {
                      lVar6 = func_0x00f78adc(/*STR(' ')*/ lRam0000000003d65ed8,*(undefined8 *)(*plVar4 + 0x40));
                      if (lVar6 == 0) goto LAB_0147b484;
                      uVar11 = (uint)plVar4[3];
                    }
                    if (uVar11 < 5) goto LAB_0147b478;
                    plVar4[8] = /*STR(' ')*/ lRam0000000003d65ed8;
                    plVar7 = (long *)func_0x00f78ae0(/*Atlas.League.LeagueModeDefinition.EventType_TypeInfo*/ uRam0000000003d27e48,
                                                     (undefined4 *)(lVar14 + 0x14));
                    if (plVar7 == (long *)0x0) goto LAB_0147b480;
                    lVar6 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
                    puVar8 = (undefined4 *)func_0x00f78ae4(plVar7);
                    *(undefined4 *)(lVar14 + 0x14) = *puVar8;
                    if ((lVar6 != 0) &&
                       (lVar14 = func_0x00f78adc(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar14 == 0
                       )) goto LAB_0147b484;
                    uVar11 = *(uint *)(plVar4 + 3);
                    if (uVar11 < 6) goto LAB_0147b478;
                    plVar4[9] = lVar6;
                    if (/*STR(' ')*/ lRam0000000003d65ed8 != 0) {
                      lVar6 = func_0x00f78adc(/*STR(' ')*/ lRam0000000003d65ed8,*(undefined8 *)(*plVar4 + 0x40));
                      if (lVar6 == 0) goto LAB_0147b484;
                      uVar11 = *(uint *)(plVar4 + 3);
                    }
                    if (uVar11 < 7) goto LAB_0147b478;
                    plVar4[10] = /*STR(' ')*/ lRam0000000003d65ed8;
                    if (lVar3 == 0) goto LAB_0147b480;
                    if (*(uint *)(lVar3 + 0x18) <= uVar12) goto LAB_0147b478;
                    plVar7 = (long *)(lVar3 + (long)(int)uVar12 * 8 + 0x20);
                    lVar6 = *plVar7;
                    if (lVar6 == 0) goto LAB_0147b480;
                    plVar9 = (long *)/*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(lVar6,0);
                    lVar6 = *plVar9;
                    if ((lVar6 != 0) &&
                       (lVar14 = func_0x00f78adc(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar14 == 0
                       )) goto LAB_0147b484;
                    uVar12 = (uint)plVar4[3];
                    if ((plVar4[3] & 0xfffffff8U) == 0) goto LAB_0147b478;
                    plVar4[0xb] = lVar6;
                    if (/*STR(' ')*/ lRam0000000003d65ed8 != 0) {
                      lVar6 = func_0x00f78adc(/*STR(' ')*/ lRam0000000003d65ed8,*(undefined8 *)(*plVar4 + 0x40));
                      if (lVar6 == 0) goto LAB_0147b484;
                      uVar12 = (uint)plVar4[3];
                    }
                    if (uVar12 < 9) goto LAB_0147b478;
                    plVar4[0xc] = /*STR(' ')*/ lRam0000000003d65ed8;
                    uVar10 = uVar10 + 1;
                    if (*(uint *)(lVar3 + 0x18) <= uVar10) goto LAB_0147b478;
                    lVar6 = *plVar7;
                    if (lVar6 == 0) goto LAB_0147b480;
                    lVar6 = *(long *)(lVar6 + 0x18);
                    if (lVar6 != 0) {
                      lVar14 = func_0x00f78adc(lVar6,*(undefined8 *)(*plVar4 + 0x40));
                      if (lVar14 == 0) goto LAB_0147b484;
                      uVar12 = *(uint *)(plVar4 + 3);
                    }
                    if (uVar12 < 10) goto LAB_0147b478;
                    plVar4[0xd] = lVar6;
                    uVar2 = /*System.String$$Concat*/ func_0x029cfadc(plVar4,0);
                    lVar6 = /*System.String$$Concat*/ func_0x029bdb88(uVar2,/*STR('\n')*/ uRam0000000003d65de0,0);
                    lVar14 = *(long *)(param_1 + 0x48);
                    if (lVar14 == 0) goto LAB_0147b480;
                  }
                  lVar6 = /*System.String$$Concat*/ func_0x029bdb88(lVar6,/*STR('\n')*/ uRam0000000003d65de0,0);
                  uVar15 = uVar15 + 1;
                  uVar13 = (ulong)*(uint *)(lVar1 + 0x18);
                } while ((long)uVar15 < (long)(int)*(uint *)(lVar1 + 0x18));
              }
              return;
            }
          }
        }
      }
    }
LAB_0147b478:
    uVar2 = func_0x00f78b24();
  }
  func_0x00f78ac0(uVar2,0);
  if ((bRam0000000003eb48bd & 1) == 0) {
    func_0x00f78a20(0x3d22e90);
    bRam0000000003eb48bd = 1;
  }
  if (((*(ushort *)(/*Atlas.League.LeagueModeTester_TypeInfo*/ lRam0000000003d22e90 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.League.LeagueModeTester_TypeInfo*/ lRam0000000003d22e90 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar16 = *(int *)(*(long *)(/*Atlas.League.LeagueModeTester_TypeInfo*/ lRam0000000003d22e90 + 0xb8) + 4) + -1;
  lVar1 = /*Atlas.League.LeagueModeTester_TypeInfo*/ lRam0000000003d22e90;
  do {
    if (((*(ushort *)(lVar1 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar1 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar1 = /*Atlas.League.LeagueModeTester_TypeInfo*/ lRam0000000003d22e90;
    }
    iVar16 = iVar16 + 1;
  } while (iVar16 < *(int *)(*(long *)(lVar1 + 0xb8) + 0x14));
  return;
}



// ============================================================
// RVA: 0x147b490 | Atlas.League.LeagueModeTester.TestPromotionsAndDemotions
// ============================================================

void Atlas_League_LeagueModeTester__TestPromotionsAndDemotions(void)

{
  long lVar1;
  int iVar2;
  
  if ((bRam0000000003eb48bd & 1) == 0) {
    func_0x00f78a20(0x3d22e90);
    bRam0000000003eb48bd = 1;
  }
  if (((*(ushort *)(/*Atlas.League.LeagueModeTester_TypeInfo*/ lRam0000000003d22e90 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.League.LeagueModeTester_TypeInfo*/ lRam0000000003d22e90 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = *(int *)(*(long *)(/*Atlas.League.LeagueModeTester_TypeInfo*/ lRam0000000003d22e90 + 0xb8) + 4) + -1;
  lVar1 = /*Atlas.League.LeagueModeTester_TypeInfo*/ lRam0000000003d22e90;
  do {
    if (((*(ushort *)(lVar1 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar1 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar1 = /*Atlas.League.LeagueModeTester_TypeInfo*/ lRam0000000003d22e90;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < *(int *)(*(long *)(lVar1 + 0xb8) + 0x14));
  return;
}



// ============================================================
// RVA: 0x147b524 | Atlas.League.LeagueModeTester.TestNextLeague
// ============================================================

void Atlas_League_LeagueModeTester__TestNextLeague(void)

{
  return;
}



// ============================================================
// RVA: 0x147b528 | Atlas.League.LeagueModeTester.TestPlacements
// ============================================================

/* WARNING: Possible PIC construction at 0x0147b570: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0147b574) */
/* WARNING: Removing unreachable block (ram,0x0147b578) */
/* WARNING: Removing unreachable block (ram,0x0147b580) */
/* WARNING: Removing unreachable block (ram,0x0147b588) */
/* WARNING: Removing unreachable block (ram,0x0147b594) */
/* WARNING: Removing unreachable block (ram,0x0147b5a4) */
/* WARNING: Removing unreachable block (ram,0x0147b5b0) */
/* WARNING: Removing unreachable block (ram,0x0147b5c0) */
/* WARNING: Removing unreachable block (ram,0x0147b5d0) */
/* WARNING: Removing unreachable block (ram,0x0147b5e0) */
/* WARNING: Removing unreachable block (ram,0x0147b5fc) */
/* WARNING: Removing unreachable block (ram,0x0147b608) */
/* WARNING: Removing unreachable block (ram,0x0147b618) */
/* WARNING: Removing unreachable block (ram,0x0147b61c) */
/* WARNING: Removing unreachable block (ram,0x0147b620) */
/* WARNING: Removing unreachable block (ram,0x0147b630) */
/* WARNING: Removing unreachable block (ram,0x0147b644) */
/* WARNING: Removing unreachable block (ram,0x0147b650) */
/* WARNING: Removing unreachable block (ram,0x0147b660) */
/* WARNING: Removing unreachable block (ram,0x0147b668) */
/* WARNING: Removing unreachable block (ram,0x0147b66c) */
/* WARNING: Removing unreachable block (ram,0x0147b67c) */
/* WARNING: Removing unreachable block (ram,0x0147b690) */
/* WARNING: Removing unreachable block (ram,0x0147b69c) */
/* WARNING: Removing unreachable block (ram,0x0147b6ac) */
/* WARNING: Removing unreachable block (ram,0x0147b6b4) */
/* WARNING: Removing unreachable block (ram,0x0147b6e0) */
/* WARNING: Removing unreachable block (ram,0x0147b6ec) */
/* WARNING: Removing unreachable block (ram,0x0147b6b8) */
/* WARNING: Removing unreachable block (ram,0x0147b6c8) */
/* WARNING: Removing unreachable block (ram,0x01479c04) */
/* WARNING: Removing unreachable block (ram,0x01479c18) */
/* WARNING: Removing unreachable block (ram,0x01479c24) */
/* WARNING: Removing unreachable block (ram,0x01479c30) */
/* WARNING: Removing unreachable block (ram,0x01479c3c) */
/* WARNING: Removing unreachable block (ram,0x01479c7c) */
/* WARNING: Removing unreachable block (ram,0x01479c94) */
/* WARNING: Removing unreachable block (ram,0x01479cc4) */
/* WARNING: Removing unreachable block (ram,0x01479c9c) */
/* WARNING: Removing unreachable block (ram,0x01479cb8) */
/* WARNING: Removing unreachable block (ram,0x01479ca8) */
/* WARNING: Removing unreachable block (ram,0x01479cc8) */
/* WARNING: Removing unreachable block (ram,0x01479d3c) */
/* WARNING: Removing unreachable block (ram,0x01479cec) */
/* WARNING: Removing unreachable block (ram,0x01479cf4) */
/* WARNING: Removing unreachable block (ram,0x01479d04) */
/* WARNING: Removing unreachable block (ram,0x01479d58) */
/* WARNING: Removing unreachable block (ram,0x01479d0c) */
/* WARNING: Removing unreachable block (ram,0x01479d5c) */
/* WARNING: Removing unreachable block (ram,0x01479d9c) */
/* WARNING: Removing unreachable block (ram,0x01479dbc) */
/* WARNING: Removing unreachable block (ram,0x01479dc0) */
/* WARNING: Removing unreachable block (ram,0x01479ddc) */
/* WARNING: Removing unreachable block (ram,0x01479de4) */
/* WARNING: Removing unreachable block (ram,0x01479de8) */
/* WARNING: Removing unreachable block (ram,0x01479e18) */
/* WARNING: Removing unreachable block (ram,0x01479e20) */
/* WARNING: Removing unreachable block (ram,0x01479e28) */
/* WARNING: Removing unreachable block (ram,0x01479e44) */
/* WARNING: Removing unreachable block (ram,0x01479e4c) */
/* WARNING: Removing unreachable block (ram,0x01479e54) */
/* WARNING: Removing unreachable block (ram,0x01479e5c) */
/* WARNING: Removing unreachable block (ram,0x01479e64) */
/* WARNING: Removing unreachable block (ram,0x01479e94) */
/* WARNING: Removing unreachable block (ram,0x01479e9c) */
/* WARNING: Removing unreachable block (ram,0x01479ea4) */
/* WARNING: Removing unreachable block (ram,0x01479eb4) */
/* WARNING: Removing unreachable block (ram,0x01479ec4) */
/* WARNING: Removing unreachable block (ram,0x01479ecc) */
/* WARNING: Removing unreachable block (ram,0x01479ed4) */
/* WARNING: Removing unreachable block (ram,0x01479ee4) */
/* WARNING: Removing unreachable block (ram,0x01479ef8) */
/* WARNING: Removing unreachable block (ram,0x01479f00) */
/* WARNING: Removing unreachable block (ram,0x01479f08) */
/* WARNING: Removing unreachable block (ram,0x01479f18) */
/* WARNING: Removing unreachable block (ram,0x01479f20) */
/* WARNING: Removing unreachable block (ram,0x01479f30) */
/* WARNING: Removing unreachable block (ram,0x01479f3c) */
/* WARNING: Removing unreachable block (ram,0x01479f28) */
/* WARNING: Removing unreachable block (ram,0x01479f4c) */
/* WARNING: Removing unreachable block (ram,0x01479f50) */
/* WARNING: Removing unreachable block (ram,0x01479ebc) */
/* WARNING: Removing unreachable block (ram,0x01479e74) */
/* WARNING: Removing unreachable block (ram,0x01479e78) */
/* WARNING: Removing unreachable block (ram,0x01479d18) */
/* WARNING: Removing unreachable block (ram,0x01479d38) */
/* WARNING: Removing unreachable block (ram,0x01479d40) */
/* WARNING: Removing unreachable block (ram,0x01479cac) */
/* WARNING: Removing unreachable block (ram,0x01479cbc) */
/* WARNING: Removing unreachable block (ram,0x01479c44) */
/* WARNING: Removing unreachable block (ram,0x01479c64) */
/* WARNING: Removing unreachable block (ram,0x01479c68) */

undefined1  [16] Atlas_League_LeagueModeTester__TestPlacements(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb48be & 1) == 0) {
    func_0x00f78a20(0x3d22e98);
    bRam0000000003eb48be = 1;
  }
  auVar7._0_8_ = func_0x00f78aec(/*Atlas.League.LeaguePlacementData_TypeInfo*/ uRam0000000003d22e98);
  uStack_38 = 0x147b574;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb48d7 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d22e88);
    bRam0000000003eb48d7 = 1;
  }
  lVar4 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,7);
  if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 != 0) {
      lVar6 = *(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8);
      *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(lVar6 + 0x10);
      if (((((uVar1 != 1) &&
            (*(undefined4 *)(lVar4 + 0x24) = *(undefined4 *)(lVar6 + 0x10), 2 < uVar1)) &&
           (*(undefined4 *)(lVar4 + 0x28) = *(undefined4 *)(lVar6 + 0x10), uVar1 != 3)) &&
          ((*(undefined4 *)(lVar4 + 0x2c) = *(undefined4 *)(lVar6 + 0x10), 4 < uVar1 &&
           (*(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(lVar6 + 0x10), uVar1 != 5)))) &&
         (*(undefined4 *)(lVar4 + 0x34) = *(undefined4 *)(lVar6 + 0x10), 6 < uVar1)) {
        *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(lVar6 + 0x10);
        *(long *)(auVar7._0_8_ + 0x10) = lVar4;
        auVar7._8_8_ = 0;
        return auVar7;
      }
    }
    uVar5 = func_0x00f78b24();
    func_0x00f78ac0(uVar5,0);
  }
  uVar5 = func_0x00f78af4();
  uStack_90 = 0x3d1f100;
  uStack_88 = 0x3d22e88;
  puStack_68 = &Atlas_League_LeagueModeTester__TestDecay;
  lStack_80 = lVar4;
  uStack_78 = auVar7._0_8_;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb48bf & 1) == 0) {
    func_0x00f78a20(0x3d22e90);
    bRam0000000003eb48bf = 1;
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_98,0x7e7,1,1,0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_a0,0x7e7,1,1,0);
  uVar3 = uStack_98;
  uVar2 = uStack_a0;
  if (((*(ushort *)(/*Atlas.League.LeagueModeTester_TypeInfo*/ lRam0000000003d22e90 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.League.LeagueModeTester_TypeInfo*/ lRam0000000003d22e90 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*Atlas.League.LeagueModeTester$$TestDecayForAllLeagues*/ func_0x0147baa4(uVar5,uVar3,uVar2);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_98,0x7e7,1,1,0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_a0,0x7e6,1,1,0);
  /*Atlas.League.LeagueModeTester$$TestDecayForAllLeagues*/ func_0x0147baa4(uVar5,uStack_98,uStack_a0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_98,0x7e7,1,1,0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_a0,0x7e7,1,0xe,0);
  /*Atlas.League.LeagueModeTester$$TestDecayForAllLeagues*/ func_0x0147baa4(uVar5,uStack_98,uStack_a0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_98,0x7e7,1,1,0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_a0,0x7e7,1,0x13,0);
  /*Atlas.League.LeagueModeTester$$TestDecayForAllLeagues*/ func_0x0147baa4(uVar5,uStack_98,uStack_a0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_98,0x7e7,1,1,0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_a0,0x7e7,1,0x1a,0);
  /*Atlas.League.LeagueModeTester$$TestDecayForAllLeagues*/ func_0x0147baa4(uVar5,uStack_98,uStack_a0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_98,0x7e7,1,1,0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_a0,0x7e7,1,0x1f,0);
  /*Atlas.League.LeagueModeTester$$TestDecayForAllLeagues*/ func_0x0147baa4(uVar5,uStack_98,uStack_a0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_98,0x7e7,1,1,0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_a0,0x7e7,2,1,0);
  /*Atlas.League.LeagueModeTester$$TestDecayForAllLeagues*/ func_0x0147baa4(uVar5,uStack_98,uStack_a0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_98,0x7e7,1,1,0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_a0,0x7e7,3,1,0);
  /*Atlas.League.LeagueModeTester$$TestDecayForAllLeagues*/ func_0x0147baa4(uVar5,uStack_98,uStack_a0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_98,0x7e7,1,1,0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_a0,0x7e7,4,1,0);
  auVar7 = /*Atlas.League.LeagueModeTester$$TestDecayForAllLeagues*/ func_0x0147baa4(uVar5,uStack_98,uStack_a0);
  return auVar7;
}



// ============================================================
// RVA: 0x147b810 | Atlas.League.LeagueModeTester.TestDecay
// ============================================================

void Atlas_League_LeagueModeTester__TestDecay(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb48bf & 1) == 0) {
    func_0x00f78a20(0x3d22e90);
    bRam0000000003eb48bf = 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_38,0x7e7,1,1,0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_40,0x7e7,1,1,0);
  uVar2 = uStack_38;
  uVar1 = uStack_40;
  if (((*(ushort *)(/*Atlas.League.LeagueModeTester_TypeInfo*/ lRam0000000003d22e90 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.League.LeagueModeTester_TypeInfo*/ lRam0000000003d22e90 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*Atlas.League.LeagueModeTester$$TestDecayForAllLeagues*/ func_0x0147baa4(param_1,uVar2,uVar1);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_38,0x7e7,1,1,0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_40,0x7e6,1,1,0);
  /*Atlas.League.LeagueModeTester$$TestDecayForAllLeagues*/ func_0x0147baa4(param_1,uStack_38,uStack_40);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_38,0x7e7,1,1,0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_40,0x7e7,1,0xe,0);
  /*Atlas.League.LeagueModeTester$$TestDecayForAllLeagues*/ func_0x0147baa4(param_1,uStack_38,uStack_40);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_38,0x7e7,1,1,0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_40,0x7e7,1,0x13,0);
  /*Atlas.League.LeagueModeTester$$TestDecayForAllLeagues*/ func_0x0147baa4(param_1,uStack_38,uStack_40);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_38,0x7e7,1,1,0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_40,0x7e7,1,0x1a,0);
  /*Atlas.League.LeagueModeTester$$TestDecayForAllLeagues*/ func_0x0147baa4(param_1,uStack_38,uStack_40);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_38,0x7e7,1,1,0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_40,0x7e7,1,0x1f,0);
  /*Atlas.League.LeagueModeTester$$TestDecayForAllLeagues*/ func_0x0147baa4(param_1,uStack_38,uStack_40);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_38,0x7e7,1,1,0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_40,0x7e7,2,1,0);
  /*Atlas.League.LeagueModeTester$$TestDecayForAllLeagues*/ func_0x0147baa4(param_1,uStack_38,uStack_40);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_38,0x7e7,1,1,0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_40,0x7e7,3,1,0);
  /*Atlas.League.LeagueModeTester$$TestDecayForAllLeagues*/ func_0x0147baa4(param_1,uStack_38,uStack_40);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_38,0x7e7,1,1,0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_40,0x7e7,4,1,0);
  /*Atlas.League.LeagueModeTester$$TestDecayForAllLeagues*/ func_0x0147baa4(param_1,uStack_38,uStack_40);
  return;
}



// ============================================================
// RVA: 0x147baa4 | Atlas.League.LeagueModeTester.TestDecayForAllLeagues
// ============================================================

long Atlas_League_LeagueModeTester__TestDecayForAllLeagues
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  uint uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000003eb48c0 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d22e68);
    func_0x00f78a20(0x3d22e88);
    func_0x00f78a20(0x3d3d420);
    func_0x00f78a20(0x3d3d418);
    func_0x00f78a20(0x3d1e1d8);
    func_0x00f78a20(0x3d733d8);
    func_0x00f78a20(0x3d7cd88);
    bRam0000000003eb48c0 = 1;
  }
  uVar5 = Atlas_League_LeagueModeHelper__StartOfWeek(param_2,1);
  uStack_68 = uVar5;
  uVar6 = Atlas_League_LeagueModeHelper__StartOfWeek(param_3,1);
  uStack_70 = uVar6;
  lVar7 = func_0x00f78aec(/*System.Collections.Generic.List<LeagueModeTester.DecayData>_TypeInfo*/ uRam0000000003d1e1d8);
  /*System.Collections.Generic.List<LeagueModeTester.DecayData>$$.ctor*/ func_0x02546400(lVar7,uRam0000000003d3d418);
  uStack_74 = 0;
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_80 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar6,uVar5,0);
  iVar4 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(&uStack_80,0);
  if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = *(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = iVar4 / iVar1;
  }
  uVar5 = /*System.DateTime$$ToShortDateString*/ func_0x02a8efec(&uStack_68,0);
  uVar6 = /*System.DateTime$$ToShortDateString*/ func_0x02a8efec(&uStack_70,0);
  uStack_88 = CONCAT44(uStack_88._4_4_,iVar2);
  uVar8 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_88);
  uVar5 = /*System.String$$Format*/ func_0x029bdf30(/*STR('TEST \n\n{0} {1} weeks:{2}\n')*/ uRam0000000003d733d8,uVar5,uVar6,uVar8,0);
  uVar11 = 0;
  while( true ) {
    if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 4) <= (int)uVar11) {
      return lVar7;
    }
    uVar6 = Atlas_League_LeagueModeHelper__CalculateDecay(uStack_68,uStack_70,uVar11,&uStack_74);
    uVar3 = uStack_74;
    uStack_88 = 0;
    /*Atlas.League.LeagueModeTester.DecayData$$.ctor*/ func_0x0155bc5c(&uStack_88,uStack_74,uVar6,0);
    if (((lVar7 == 0) || (/*System.Collections.Generic.List<LeagueModeTester.DecayData>$$Add*/ func_0x025470b8(lVar7,uStack_88,uRam0000000003d3d420), param_1 == 0)) ||
       (lVar10 = *(long *)(param_1 + 0x30), lVar10 == 0)) break;
    if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_0147bde0;
    lVar10 = *(long *)(lVar10 + (long)(int)uVar11 * 8 + 0x20);
    if (lVar10 == 0) break;
    uVar8 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar10,0);
    uStack_8c = (undefined4)uVar6;
    uVar6 = func_0x00f78ae0(/*Atlas.League.LeagueDecayType_TypeInfo*/ uRam0000000003d22e68,&uStack_8c);
    lVar10 = *(long *)(param_1 + 0x30);
    if (lVar10 == 0) break;
    if (*(uint *)(lVar10 + 0x18) <= uVar3) goto LAB_0147bde0;
    lVar10 = *(long *)(lVar10 + (long)(int)uVar3 * 8 + 0x20);
    if (lVar10 == 0) break;
    uVar9 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar10,0);
    uVar6 = /*System.String$$Format*/ func_0x029bdf30(/*STR('{0} = {1} {2}\n')*/ uRam0000000003d7cd88,uVar8,uVar6,uVar9,0);
    uVar5 = /*System.String$$Concat*/ func_0x029bdb88(uVar5,uVar6,0);
    uVar11 = uVar11 + 1;
  }
  func_0x00f78af4();
LAB_0147bde0:
  uVar5 = func_0x00f78b24();
  lVar7 = func_0x00f78ac0(uVar5,0);
  return lVar7;
}



// ============================================================
// RVA: 0x147bdec | Atlas.League.LeagueModeTester.TestStarConversion
// ============================================================

void Atlas_League_LeagueModeTester__TestStarConversion(void)

{
  return;
}



// ============================================================
// RVA: 0x147bdf0 | Atlas.League.LeagueModeTester.TestPodiumPlaceBrokenLeaderboard
// ============================================================

/* WARNING: Possible PIC construction at 0x0147be6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147befc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147bf10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147bf5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147bfb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c4fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c58c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c5a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c5ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c644: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c6ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c77c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c7dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c8c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c960: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c9a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147ca30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cb10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cbb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cc34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cc54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cc94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cd60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cde0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cdf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147ce40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147cfd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d0b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d2a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d2bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d30c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d4c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d4d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147d5e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147c120: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0147d5e4) */
/* WARNING: Removing unreachable block (ram,0x0147d5f4) */
/* WARNING: Removing unreachable block (ram,0x0147d4d8) */
/* WARNING: Removing unreachable block (ram,0x0147d4e8) */
/* WARNING: Removing unreachable block (ram,0x0147d4c4) */
/* WARNING: Removing unreachable block (ram,0x0147d310) */
/* WARNING: Removing unreachable block (ram,0x0147d314) */
/* WARNING: Removing unreachable block (ram,0x0147d31c) */
/* WARNING: Removing unreachable block (ram,0x0147d330) */
/* WARNING: Removing unreachable block (ram,0x0147d33c) */
/* WARNING: Removing unreachable block (ram,0x0147d2c0) */
/* WARNING: Removing unreachable block (ram,0x0147d2d4) */
/* WARNING: Removing unreachable block (ram,0x0147d2e0) */
/* WARNING: Removing unreachable block (ram,0x0147d2e8) */
/* WARNING: Removing unreachable block (ram,0x0147d2f0) */
/* WARNING: Removing unreachable block (ram,0x0147d344) */
/* WARNING: Removing unreachable block (ram,0x0147d348) */
/* WARNING: Removing unreachable block (ram,0x0147d300) */
/* WARNING: Removing unreachable block (ram,0x0147d2ac) */
/* WARNING: Removing unreachable block (ram,0x0147d22c) */
/* WARNING: Removing unreachable block (ram,0x0147d230) */
/* WARNING: Removing unreachable block (ram,0x0147d250) */
/* WARNING: Removing unreachable block (ram,0x0147d258) */
/* WARNING: Removing unreachable block (ram,0x0147d25c) */
/* WARNING: Removing unreachable block (ram,0x0147d278) */
/* WARNING: Removing unreachable block (ram,0x0147d280) */
/* WARNING: Removing unreachable block (ram,0x0147d284) */
/* WARNING: Removing unreachable block (ram,0x0147d0b8) */
/* WARNING: Removing unreachable block (ram,0x0147d06c) */
/* WARNING: Removing unreachable block (ram,0x0147d07c) */
/* WARNING: Removing unreachable block (ram,0x0147d088) */
/* WARNING: Removing unreachable block (ram,0x0147d090) */
/* WARNING: Removing unreachable block (ram,0x0147d098) */
/* WARNING: Removing unreachable block (ram,0x0147d19c) */
/* WARNING: Removing unreachable block (ram,0x0147d1a0) */
/* WARNING: Removing unreachable block (ram,0x0147d0a8) */
/* WARNING: Removing unreachable block (ram,0x0147d058) */
/* WARNING: Removing unreachable block (ram,0x0147cfd8) */
/* WARNING: Removing unreachable block (ram,0x0147cfdc) */
/* WARNING: Removing unreachable block (ram,0x0147cffc) */
/* WARNING: Removing unreachable block (ram,0x0147d004) */
/* WARNING: Removing unreachable block (ram,0x0147d008) */
/* WARNING: Removing unreachable block (ram,0x0147d024) */
/* WARNING: Removing unreachable block (ram,0x0147d02c) */
/* WARNING: Removing unreachable block (ram,0x0147d030) */
/* WARNING: Removing unreachable block (ram,0x0147ce44) */
/* WARNING: Removing unreachable block (ram,0x0147cdf8) */
/* WARNING: Removing unreachable block (ram,0x0147ce08) */
/* WARNING: Removing unreachable block (ram,0x0147ce14) */
/* WARNING: Removing unreachable block (ram,0x0147ce1c) */
/* WARNING: Removing unreachable block (ram,0x0147ce24) */
/* WARNING: Removing unreachable block (ram,0x0147cf50) */
/* WARNING: Removing unreachable block (ram,0x0147cf54) */
/* WARNING: Removing unreachable block (ram,0x0147ce34) */
/* WARNING: Removing unreachable block (ram,0x0147cde4) */
/* WARNING: Removing unreachable block (ram,0x0147cd64) */
/* WARNING: Removing unreachable block (ram,0x0147cd68) */
/* WARNING: Removing unreachable block (ram,0x0147cd88) */
/* WARNING: Removing unreachable block (ram,0x0147cd90) */
/* WARNING: Removing unreachable block (ram,0x0147cd94) */
/* WARNING: Removing unreachable block (ram,0x0147cdb0) */
/* WARNING: Removing unreachable block (ram,0x0147cdb8) */
/* WARNING: Removing unreachable block (ram,0x0147cdbc) */
/* WARNING: Removing unreachable block (ram,0x0147cc98) */
/* WARNING: Removing unreachable block (ram,0x0147cc58) */
/* WARNING: Removing unreachable block (ram,0x0147cc5c) */
/* WARNING: Removing unreachable block (ram,0x0147cc68) */
/* WARNING: Removing unreachable block (ram,0x0147cc70) */
/* WARNING: Removing unreachable block (ram,0x0147cc78) */
/* WARNING: Removing unreachable block (ram,0x0147ccdc) */
/* WARNING: Removing unreachable block (ram,0x0147cce0) */
/* WARNING: Removing unreachable block (ram,0x0147cc88) */
/* WARNING: Removing unreachable block (ram,0x0147cc38) */
/* WARNING: Removing unreachable block (ram,0x0147cbb8) */
/* WARNING: Removing unreachable block (ram,0x0147cbbc) */
/* WARNING: Removing unreachable block (ram,0x0147cbdc) */
/* WARNING: Removing unreachable block (ram,0x0147cbe4) */
/* WARNING: Removing unreachable block (ram,0x0147cbe8) */
/* WARNING: Removing unreachable block (ram,0x0147cc04) */
/* WARNING: Removing unreachable block (ram,0x0147cc0c) */
/* WARNING: Removing unreachable block (ram,0x0147cc10) */
/* WARNING: Removing unreachable block (ram,0x0147cb14) */
/* WARNING: Removing unreachable block (ram,0x0147cad4) */
/* WARNING: Removing unreachable block (ram,0x0147cad8) */
/* WARNING: Removing unreachable block (ram,0x0147cae4) */
/* WARNING: Removing unreachable block (ram,0x0147caec) */
/* WARNING: Removing unreachable block (ram,0x0147caf4) */
/* WARNING: Removing unreachable block (ram,0x0147cb30) */
/* WARNING: Removing unreachable block (ram,0x0147cb34) */
/* WARNING: Removing unreachable block (ram,0x0147cb04) */
/* WARNING: Removing unreachable block (ram,0x0147cab4) */
/* WARNING: Removing unreachable block (ram,0x0147ca34) */
/* WARNING: Removing unreachable block (ram,0x0147ca38) */
/* WARNING: Removing unreachable block (ram,0x0147ca58) */
/* WARNING: Removing unreachable block (ram,0x0147ca60) */
/* WARNING: Removing unreachable block (ram,0x0147ca64) */
/* WARNING: Removing unreachable block (ram,0x0147ca80) */
/* WARNING: Removing unreachable block (ram,0x0147ca88) */
/* WARNING: Removing unreachable block (ram,0x0147ca8c) */
/* WARNING: Removing unreachable block (ram,0x0147c9a4) */
/* WARNING: Removing unreachable block (ram,0x0147c964) */
/* WARNING: Removing unreachable block (ram,0x0147c968) */
/* WARNING: Removing unreachable block (ram,0x0147c974) */
/* WARNING: Removing unreachable block (ram,0x0147c97c) */
/* WARNING: Removing unreachable block (ram,0x0147c984) */
/* WARNING: Removing unreachable block (ram,0x0147c9ac) */
/* WARNING: Removing unreachable block (ram,0x0147c9b0) */
/* WARNING: Removing unreachable block (ram,0x0147c994) */
/* WARNING: Removing unreachable block (ram,0x0147c944) */
/* WARNING: Removing unreachable block (ram,0x0147c8c4) */
/* WARNING: Removing unreachable block (ram,0x0147c8c8) */
/* WARNING: Removing unreachable block (ram,0x0147c8e8) */
/* WARNING: Removing unreachable block (ram,0x0147c8f0) */
/* WARNING: Removing unreachable block (ram,0x0147c8f4) */
/* WARNING: Removing unreachable block (ram,0x0147c910) */
/* WARNING: Removing unreachable block (ram,0x0147c918) */
/* WARNING: Removing unreachable block (ram,0x0147c91c) */
/* WARNING: Removing unreachable block (ram,0x0147c838) */
/* WARNING: Removing unreachable block (ram,0x0147c83c) */
/* WARNING: Removing unreachable block (ram,0x0147c7e0) */
/* WARNING: Removing unreachable block (ram,0x0147c7e4) */
/* WARNING: Removing unreachable block (ram,0x0147c804) */
/* WARNING: Removing unreachable block (ram,0x0147c794) */
/* WARNING: Removing unreachable block (ram,0x0147c7a4) */
/* WARNING: Removing unreachable block (ram,0x0147c7b0) */
/* WARNING: Removing unreachable block (ram,0x0147c7b8) */
/* WARNING: Removing unreachable block (ram,0x0147c7c0) */
/* WARNING: Removing unreachable block (ram,0x0147c80c) */
/* WARNING: Removing unreachable block (ram,0x0147c7d0) */
/* WARNING: Removing unreachable block (ram,0x0147c780) */
/* WARNING: Removing unreachable block (ram,0x0147c6f0) */
/* WARNING: Removing unreachable block (ram,0x0147c6f4) */
/* WARNING: Removing unreachable block (ram,0x0147c714) */
/* WARNING: Removing unreachable block (ram,0x0147c71c) */
/* WARNING: Removing unreachable block (ram,0x0147c720) */
/* WARNING: Removing unreachable block (ram,0x0147c73c) */
/* WARNING: Removing unreachable block (ram,0x0147c744) */
/* WARNING: Removing unreachable block (ram,0x0147c748) */
/* WARNING: Removing unreachable block (ram,0x0147c648) */
/* WARNING: Removing unreachable block (ram,0x0147c64c) */
/* WARNING: Removing unreachable block (ram,0x0147c5f0) */
/* WARNING: Removing unreachable block (ram,0x0147c5f4) */
/* WARNING: Removing unreachable block (ram,0x0147c614) */
/* WARNING: Removing unreachable block (ram,0x0147c5a4) */
/* WARNING: Removing unreachable block (ram,0x0147c5b4) */
/* WARNING: Removing unreachable block (ram,0x0147c5c0) */
/* WARNING: Removing unreachable block (ram,0x0147c5c8) */
/* WARNING: Removing unreachable block (ram,0x0147c5d0) */
/* WARNING: Removing unreachable block (ram,0x0147c61c) */
/* WARNING: Removing unreachable block (ram,0x0147c5e0) */
/* WARNING: Removing unreachable block (ram,0x0147c590) */
/* WARNING: Removing unreachable block (ram,0x0147c500) */
/* WARNING: Removing unreachable block (ram,0x0147c504) */
/* WARNING: Removing unreachable block (ram,0x0147c524) */
/* WARNING: Removing unreachable block (ram,0x0147c52c) */
/* WARNING: Removing unreachable block (ram,0x0147c530) */
/* WARNING: Removing unreachable block (ram,0x0147c54c) */
/* WARNING: Removing unreachable block (ram,0x0147c554) */
/* WARNING: Removing unreachable block (ram,0x0147c558) */
/* WARNING: Removing unreachable block (ram,0x0147bfb8) */
/* WARNING: Removing unreachable block (ram,0x0147bfbc) */
/* WARNING: Removing unreachable block (ram,0x014eb4e0) */
/* WARNING: Removing unreachable block (ram,0x014eb504) */
/* WARNING: Removing unreachable block (ram,0x014eb518) */
/* WARNING: Removing unreachable block (ram,0x014eb520) */
/* WARNING: Removing unreachable block (ram,0x014eb528) */
/* WARNING: Removing unreachable block (ram,0x014eb554) */
/* WARNING: Removing unreachable block (ram,0x014eb580) */
/* WARNING: Removing unreachable block (ram,0x014eb594) */
/* WARNING: Removing unreachable block (ram,0x014eb5ac) */
/* WARNING: Removing unreachable block (ram,0x014eb5b4) */
/* WARNING: Removing unreachable block (ram,0x014eb5b8) */
/* WARNING: Removing unreachable block (ram,0x014eb5c4) */
/* WARNING: Removing unreachable block (ram,0x014eb5d8) */
/* WARNING: Removing unreachable block (ram,0x014eb5e4) */
/* WARNING: Removing unreachable block (ram,0x014eb604) */
/* WARNING: Removing unreachable block (ram,0x014eb5f0) */
/* WARNING: Removing unreachable block (ram,0x014eb530) */
/* WARNING: Removing unreachable block (ram,0x014eb538) */
/* WARNING: Removing unreachable block (ram,0x014eb608) */
/* WARNING: Removing unreachable block (ram,0x014eb620) */
/* WARNING: Removing unreachable block (ram,0x014eb650) */
/* WARNING: Removing unreachable block (ram,0x014eb4f4) */
/* WARNING: Removing unreachable block (ram,0x0147bf60) */
/* WARNING: Removing unreachable block (ram,0x0147bf64) */
/* WARNING: Removing unreachable block (ram,0x0147bf84) */
/* WARNING: Removing unreachable block (ram,0x0147bf14) */
/* WARNING: Removing unreachable block (ram,0x0147bf24) */
/* WARNING: Removing unreachable block (ram,0x0147bf30) */
/* WARNING: Removing unreachable block (ram,0x0147bf38) */
/* WARNING: Removing unreachable block (ram,0x0147bf40) */
/* WARNING: Removing unreachable block (ram,0x0147bf8c) */
/* WARNING: Removing unreachable block (ram,0x0147bf50) */
/* WARNING: Removing unreachable block (ram,0x0147bf00) */
/* WARNING: Removing unreachable block (ram,0x0147be70) */
/* WARNING: Removing unreachable block (ram,0x0147be74) */
/* WARNING: Removing unreachable block (ram,0x0147be94) */
/* WARNING: Removing unreachable block (ram,0x0147be9c) */
/* WARNING: Removing unreachable block (ram,0x0147bea0) */
/* WARNING: Removing unreachable block (ram,0x0147bebc) */
/* WARNING: Removing unreachable block (ram,0x0147bec4) */
/* WARNING: Removing unreachable block (ram,0x0147bec8) */
/* WARNING: Removing unreachable block (ram,0x0147c124) */
/* WARNING: Removing unreachable block (ram,0x0147c12c) */

void Atlas_League_LeagueModeTester__TestPodiumPlaceBrokenLeaderboard
               (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  ulong unaff_x26;
  undefined1 *puVar18;
  undefined *puVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  puVar1 = &stack0xffffffffffffffb0;
  puVar18 = &stack0xfffffffffffffff0;
  uVar16 = 0x3eb4000;
  uVar11 = param_3;
  if ((bRam0000000003eb48c1 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d22e88);
    func_0x00f78a20(0x3d25238);
    func_0x00f78a20(0x3d653e8);
    bRam0000000003eb48c1 = 1;
  }
  if (param_1 == 0) {
    puVar19 = &Atlas_League_LeaguePlayerSave__ClearAllDayPlacements;
    uVar6 = func_0x00f78af4();
  }
  else {
    puVar19 = (undefined *)0x147be70;
    puVar1 = &stack0xffffffffffffffb0;
    uVar6 = param_1;
  }
code_r0x0147bfe0:
  puVar2 = puVar1 + -0x40;
  puVar3 = puVar1 + -0x40;
  *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
  *(ulong *)(puVar1 + -0x30) = uVar16;
  *(ulong *)(puVar1 + -0x28) = param_2;
  *(ulong *)(puVar1 + -0x20) = param_1;
  *(ulong *)(puVar1 + -0x18) = param_3;
  *(undefined1 **)(puVar1 + -0x10) = puVar18;
  *(undefined **)(puVar1 + -8) = puVar19;
  puVar18 = puVar1 + -0x10;
  param_1 = param_4;
  if ((bRam0000000003eb48e6 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d22e88);
    bRam0000000003eb48e6 = 1;
    param_1 = param_4;
  }
  uVar15 = 0;
  unaff_x24 = 0x3d22e88;
  unaff_x23 = 0x3d1f100;
  while( true ) {
    if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)uVar15) break;
    param_2 = *(ulong *)(uVar6 + 0x10);
    uVar16 = /*Atlas.League.LeaguePlayerSave$$DayPlacementKey*/ func_0x0147ea20(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88,uVar15);
    if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (param_2 == 0) goto code_r0x0147c144;
    param_1 = 0;
    Atlas_Save_SaveManager__SetIntData
              (param_2,uVar16,*(undefined4 *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 0x10));
    uVar11 = 0;
    /*Atlas.League.LeaguePlayerSave$$SetReplayCountDay*/ func_0x0147eb60(uVar6,uVar15);
    uVar15 = (ulong)((int)uVar15 + 1);
  }
  lVar17 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,0xb);
  auVar23._8_8_ = lVar17;
  auVar23._0_8_ = uVar6;
  if (lVar17 == 0) {
code_r0x0147c144:
    func_0x00f78af4();
    param_4 = param_1;
  }
  else {
    uVar13 = (ulong)*(uint *)(lVar17 + 0x18);
    uVar12 = (ulong)(int)*(uint *)(lVar17 + 0x18);
    if ((long)uVar12 < 1) {
      uVar12 = 0;
    }
    if (uVar13 != 1 && (long)(uVar13 << 0x20) < 0x100000001) goto code_r0x0147c118;
    uVar14 = 0;
    while (param_4 = param_1, uVar14 < uVar13) {
      *(undefined4 *)(lVar17 + 0x20 + uVar14 * 4) = 0xffffffff;
      uVar14 = uVar14 + 1;
      if (uVar12 == uVar14) {
code_r0x0147c118:
        uVar11 = 0xffffffff;
        puVar19 = &UNK_0147c124;
        goto code_r0x0147c3a4;
      }
    }
  }
  uVar7 = func_0x00f78b24();
  puVar19 = &Atlas_League_LeaguePlayerSave__set_LatestPlayedDate;
  auVar22 = func_0x00f78ac0(uVar7,0);
  uVar12 = uVar11;
code_r0x0147c154:
  do {
    lVar17 = auVar22._0_8_;
    *(ulong *)(puVar3 + -0x30) = uVar16;
    *(ulong *)(puVar3 + -0x28) = param_2;
    *(ulong *)(puVar3 + -0x20) = uVar15;
    *(ulong *)(puVar3 + -0x18) = uVar6;
    *(undefined1 **)(puVar3 + -0x10) = puVar18;
    *(undefined **)(puVar3 + -8) = puVar19;
    param_1 = param_4;
    if ((bRam0000000003eb48dd & 1) == 0) {
      func_0x00f78a20(0x3d6f1f8);
      bRam0000000003eb48dd = 1;
      param_1 = param_4;
    }
    if (*(long *)(lVar17 + 0x10) != 0) {
      param_1 = 0;
      uVar12 = auVar22._8_8_;
      Atlas_Save_SaveManager__SetStringData(*(long *)(lVar17 + 0x10),/*STR('L_LPD')*/ uRam0000000003d6f1f8);
      lVar8 = *(long *)(lVar17 + 0x10);
      if (lVar8 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
    }
    auVar23 = func_0x00f78af4();
    lVar9 = auVar23._0_8_;
    *(ulong *)(puVar3 + -0x60) = uVar16;
    *(undefined8 *)(puVar3 + -0x58) = 0x3eb4000;
    *(ulong *)(puVar3 + -0x50) = auVar22._8_8_;
    *(long *)(puVar3 + -0x48) = lVar17;
    *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x38) = &Atlas_League_LeaguePlayerSave__set_LatestOpenedDate;
    if ((bRam0000000003eb48db & 1) == 0) {
      func_0x00f78a20(0x3d6f200);
      bRam0000000003eb48db = 1;
    }
    if (*(long *)(lVar9 + 0x10) != 0) {
      param_1 = 0;
      uVar12 = auVar23._8_8_;
      Atlas_Save_SaveManager__SetStringData(*(long *)(lVar9 + 0x10),/*STR('L_OD')*/ uRam0000000003d6f200);
      lVar8 = *(long *)(lVar9 + 0x10);
      if (lVar8 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
    }
    auVar22 = func_0x00f78af4();
    lVar17 = auVar22._0_8_;
    *(ulong *)(puVar3 + -0x90) = uVar16;
    *(undefined8 *)(puVar3 + -0x88) = 0x3eb4000;
    *(ulong *)(puVar3 + -0x80) = auVar23._8_8_;
    *(long *)(puVar3 + -0x78) = lVar9;
    *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x40;
    *(undefined **)(puVar3 + -0x68) = &Atlas_League_LeaguePlayerSave__set_ShowPodiumLatch;
    if ((bRam0000000003eb48df & 1) == 0) {
      func_0x00f78a20(0x3d6f230);
      bRam0000000003eb48df = 1;
    }
    if (*(long *)(lVar17 + 0x10) != 0) {
      param_1 = 0;
      uVar12 = auVar22._8_8_;
      Atlas_Save_SaveManager__SetIntData(*(long *)(lVar17 + 0x10),/*STR('L_SP')*/ uRam0000000003d6f230);
      lVar8 = *(long *)(lVar17 + 0x10);
      if (lVar8 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
    }
    auVar23 = func_0x00f78af4();
    uVar6 = auVar23._0_8_;
    puVar2 = puVar3 + -0xd0;
    *(undefined8 *)(puVar3 + -0xd0) = unaff_x24;
    *(undefined8 *)(puVar3 + -200) = unaff_x23;
    *(ulong *)(puVar3 + -0xc0) = uVar16;
    *(undefined8 *)(puVar3 + -0xb8) = 0x3eb4000;
    *(ulong *)(puVar3 + -0xb0) = auVar22._8_8_;
    *(long *)(puVar3 + -0xa8) = lVar17;
    *(undefined1 **)(puVar3 + -0xa0) = puVar3 + -0x70;
    *(undefined **)(puVar3 + -0x98) = &Atlas_League_LeaguePlayerSave__SetPlayerDayPlacement;
    puVar18 = puVar3 + -0xa0;
    unaff_x23 = 0x3d22e88;
    uVar16 = uVar6;
    uVar11 = uVar12;
    if ((bRam0000000003eb48e4 & 1) == 0) {
      uVar16 = func_0x00f78a20(0x3d22e88);
      bRam0000000003eb48e4 = 1;
    }
    param_2 = /*Atlas.League.LeaguePlayerSave$$DayPlacementKey*/ func_0x0147ea20(uVar16,auVar23._8_8_);
    uVar16 = *(ulong *)(uVar6 + 0x10);
    if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (uVar16 != 0) {
      uVar11 = (ulong)*(uint *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 0x10);
      param_1 = 0;
      iVar4 = Atlas_Save_SaveManager__GetIntData(uVar16,param_2);
      if (iVar4 <= (int)uVar12) {
        return;
      }
      if (*(long *)(uVar6 + 0x10) != 0) {
        param_1 = 0;
        uVar11 = uVar12;
        Atlas_Save_SaveManager__SetIntData(*(long *)(uVar6 + 0x10),param_2);
        lVar8 = *(long *)(uVar6 + 0x10);
        if (lVar8 != 0) goto Atlas_Save_SaveManager__MarkSaveAsDirty;
      }
    }
    puVar19 = &Atlas_League_LeaguePlayerSave__SaveLeaderboardForUI;
    auVar23 = func_0x00f78af4();
    uVar15 = uVar12;
code_r0x0147c3a4:
    lVar10 = auVar23._8_8_;
    lVar9 = auVar23._0_8_;
    *(ulong *)(puVar2 + -0x30) = uVar16;
    *(ulong *)(puVar2 + -0x28) = param_2;
    *(ulong *)(puVar2 + -0x20) = uVar15;
    *(ulong *)(puVar2 + -0x18) = uVar6;
    *(undefined1 **)(puVar2 + -0x10) = puVar18;
    *(undefined **)(puVar2 + -8) = puVar19;
    lVar17 = 0x3eb4000;
    param_3 = uVar11;
    if ((bRam0000000003eb48fb & 1) == 0) {
      func_0x00f78a20(0x3d6f1f0);
      bRam0000000003eb48fb = 1;
    }
    if (*(long *)(lVar9 + 0x10) != 0) {
      param_1 = 0;
      param_3 = uVar11;
      uVar7 = Atlas_Save_SaveManager__SetIntData(*(long *)(lVar9 + 0x10),/*STR('L_LB_P')*/ uRam0000000003d6f1f0);
      if (lVar10 != 0) {
        if (0 < *(int *)(lVar10 + 0x18)) {
          uVar11 = 0;
          lVar17 = lVar10 + 0x20;
          do {
            uVar7 = /*Atlas.League.LeaguePlayerSave$$ParseLeaderboardAIKey*/ func_0x0147f388(uVar7,uVar11);
            if (*(uint *)(lVar10 + 0x18) <= uVar11) goto code_r0x0147c474;
            if (*(long *)(lVar9 + 0x10) == 0) goto code_r0x0147c470;
            param_3 = (ulong)*(uint *)(lVar17 + uVar11 * 4);
            param_1 = 0;
            uVar7 = Atlas_Save_SaveManager__SetIntData(*(long *)(lVar9 + 0x10),uVar7);
            uVar11 = uVar11 + 1;
          } while ((long)uVar11 < (long)*(int *)(lVar10 + 0x18));
        }
        lVar8 = *(long *)(lVar9 + 0x10);
        if (lVar8 != 0) {
Atlas_Save_SaveManager__MarkSaveAsDirty:
          *(undefined1 *)(lVar8 + 0x110) = 1;
          return;
        }
      }
    }
code_r0x0147c470:
    func_0x00f78af4();
code_r0x0147c474:
    uVar7 = func_0x00f78b24();
    auVar23 = func_0x00f78ac0(uVar7,0);
    uVar6 = auVar23._0_8_;
    puVar1 = puVar2 + -0x80;
    *(ulong *)(puVar2 + -0x80) = unaff_x26;
    *(undefined8 *)(puVar2 + -0x78) = unaff_x25;
    *(undefined8 *)(puVar2 + -0x70) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x68) = unaff_x23;
    *(long *)(puVar2 + -0x60) = lVar17;
    *(ulong *)(puVar2 + -0x58) = uVar11;
    *(long *)(puVar2 + -0x50) = lVar10;
    *(long *)(puVar2 + -0x48) = lVar9;
    *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x38) =
         &Atlas_League_LeagueModeTester__TestPodiumPlaceBrokenLeaderboard2;
    puVar18 = puVar2 + -0x40;
    uVar16 = 0x3eb4000;
    uVar15 = param_3;
    if ((bRam0000000003eb48c2 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d1f100);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      func_0x00f78a20(0x3d653e8);
      bRam0000000003eb48c2 = 1;
    }
    if (uVar6 != 0) {
      puVar19 = &UNK_0147c500;
      uVar11 = uVar15;
      param_4 = param_1;
      param_1 = uVar6;
      param_2 = auVar23._8_8_;
      goto code_r0x0147bfe0;
    }
    auVar22 = func_0x00f78af4();
    uVar6 = auVar22._0_8_;
    puVar1 = puVar2 + -0xd0;
    *(ulong *)(puVar2 + -0xd0) = unaff_x26;
    *(undefined8 *)(puVar2 + -200) = unaff_x25;
    *(undefined8 *)(puVar2 + -0xc0) = unaff_x24;
    *(undefined8 *)(puVar2 + -0xb8) = unaff_x23;
    *(undefined8 *)(puVar2 + -0xb0) = 0x3eb4000;
    *(ulong *)(puVar2 + -0xa8) = auVar23._8_8_;
    *(undefined8 *)(puVar2 + -0xa0) = 0;
    *(ulong *)(puVar2 + -0x98) = param_3;
    *(undefined1 **)(puVar2 + -0x90) = puVar18;
    *(undefined **)(puVar2 + -0x88) =
         &Atlas_League_LeagueModeTester__TestPodiumPlaceBrokenLeaderboard3;
    puVar18 = puVar2 + -0x90;
    uVar16 = 0x3eb4000;
    param_3 = uVar15;
    if ((bRam0000000003eb48c3 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d1f100);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      func_0x00f78a20(0x3d653e0);
      bRam0000000003eb48c3 = 1;
    }
    if (uVar6 != 0) {
      puVar19 = &UNK_0147c6f0;
      uVar11 = param_3;
      param_4 = param_1;
      param_3 = uVar15;
      param_1 = uVar6;
      param_2 = auVar22._8_8_;
      goto code_r0x0147bfe0;
    }
    auVar23 = func_0x00f78af4();
    uVar6 = auVar23._0_8_;
    puVar1 = puVar2 + -0x110;
    *(undefined8 *)(puVar2 + -0x110) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x108) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x100) = 0x3eb4000;
    *(ulong *)(puVar2 + -0xf8) = auVar22._8_8_;
    *(undefined8 *)(puVar2 + -0xf0) = 0;
    *(ulong *)(puVar2 + -0xe8) = uVar15;
    *(undefined1 **)(puVar2 + -0xe0) = puVar18;
    *(undefined **)(puVar2 + -0xd8) = &Atlas_League_LeagueModeTester__TestPodium1stPlace;
    puVar18 = puVar2 + -0xe0;
    uVar16 = 0x3eb4000;
    uVar15 = param_3;
    if ((bRam0000000003eb48c4 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c4 = 1;
    }
    if (uVar6 != 0) {
      puVar19 = &UNK_0147c8c4;
      uVar11 = uVar15;
      param_4 = param_1;
      param_1 = uVar6;
      param_2 = auVar23._8_8_;
      goto code_r0x0147bfe0;
    }
    auVar22 = func_0x00f78af4();
    uVar6 = auVar22._0_8_;
    puVar1 = puVar2 + -0x150;
    *(undefined8 *)(puVar2 + -0x150) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x148) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x140) = 0x3eb4000;
    *(ulong *)(puVar2 + -0x138) = auVar23._8_8_;
    *(undefined8 *)(puVar2 + -0x130) = 0;
    *(ulong *)(puVar2 + -0x128) = param_3;
    *(undefined1 **)(puVar2 + -0x120) = puVar18;
    *(undefined **)(puVar2 + -0x118) = &Atlas_League_LeagueModeTester__TestPodium2ndPlace;
    puVar18 = puVar2 + -0x120;
    uVar16 = 0x3eb4000;
    param_3 = uVar15;
    if ((bRam0000000003eb48c5 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c5 = 1;
    }
    if (uVar6 != 0) {
      puVar19 = &UNK_0147ca34;
      uVar11 = param_3;
      param_4 = param_1;
      param_3 = uVar15;
      param_1 = uVar6;
      param_2 = auVar22._8_8_;
      goto code_r0x0147bfe0;
    }
    auVar23 = func_0x00f78af4();
    uVar6 = auVar23._0_8_;
    puVar1 = puVar2 + -400;
    *(undefined8 *)(puVar2 + -400) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x188) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x180) = 0x3eb4000;
    *(ulong *)(puVar2 + -0x178) = auVar22._8_8_;
    *(undefined8 *)(puVar2 + -0x170) = 0;
    *(ulong *)(puVar2 + -0x168) = uVar15;
    *(undefined1 **)(puVar2 + -0x160) = puVar18;
    *(undefined **)(puVar2 + -0x158) = &Atlas_League_LeagueModeTester__TestPodium6thPlace;
    puVar18 = puVar2 + -0x160;
    uVar16 = 0x3eb4000;
    uVar15 = param_3;
    if ((bRam0000000003eb48c6 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c6 = 1;
    }
    if (uVar6 != 0) {
      puVar19 = &UNK_0147cbb8;
      uVar11 = uVar15;
      param_4 = param_1;
      param_1 = uVar6;
      param_2 = auVar23._8_8_;
      goto code_r0x0147bfe0;
    }
    auVar22 = func_0x00f78af4();
    uVar6 = auVar22._0_8_;
    puVar1 = puVar2 + -0x1d0;
    *(undefined8 *)(puVar2 + -0x1d0) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x1c8) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x1c0) = 0x3eb4000;
    *(ulong *)(puVar2 + -0x1b8) = auVar23._8_8_;
    *(undefined8 *)(puVar2 + -0x1b0) = 0;
    *(ulong *)(puVar2 + -0x1a8) = param_3;
    *(undefined1 **)(puVar2 + -0x1a0) = puVar18;
    *(undefined **)(puVar2 + -0x198) = &Atlas_League_LeagueModeTester__TestPodium11thPlace;
    puVar18 = puVar2 + -0x1a0;
    uVar16 = 0x3eb4000;
    uVar12 = uVar15;
    if ((bRam0000000003eb48c7 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c7 = 1;
    }
    if (uVar6 != 0) {
      puVar19 = &UNK_0147cd64;
      uVar11 = uVar12;
      param_4 = param_1;
      param_3 = uVar15;
      param_1 = uVar6;
      param_2 = auVar22._8_8_;
      goto code_r0x0147bfe0;
    }
    auVar23 = func_0x00f78af4();
    uVar6 = auVar23._0_8_;
    puVar1 = puVar2 + -0x210;
    *(undefined8 *)(puVar2 + -0x210) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x208) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x200) = 0x3eb4000;
    *(ulong *)(puVar2 + -0x1f8) = auVar22._8_8_;
    *(undefined8 *)(puVar2 + -0x1f0) = 0;
    *(ulong *)(puVar2 + -0x1e8) = uVar15;
    *(undefined1 **)(puVar2 + -0x1e0) = puVar18;
    *(undefined **)(puVar2 + -0x1d8) = &Atlas_League_LeagueModeTester__TestPodium12thPlace;
    puVar18 = puVar2 + -0x1e0;
    uVar16 = 0x3eb4000;
    param_3 = uVar12;
    if ((bRam0000000003eb48c8 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c8 = 1;
    }
    if (uVar6 != 0) {
      puVar19 = &UNK_0147cfd8;
      uVar11 = param_3;
      param_4 = param_1;
      param_3 = uVar12;
      param_1 = uVar6;
      param_2 = auVar23._8_8_;
      goto code_r0x0147bfe0;
    }
    auVar22 = func_0x00f78af4();
    uVar16 = auVar22._8_8_;
    uVar6 = auVar22._0_8_;
    puVar1 = puVar2 + -0x260;
    *(ulong *)(puVar2 + -0x260) = unaff_x26;
    *(undefined8 *)(puVar2 + -600) = unaff_x25;
    *(undefined8 *)(puVar2 + -0x250) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x248) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x240) = 0x3eb4000;
    *(ulong *)(puVar2 + -0x238) = auVar23._8_8_;
    *(undefined8 *)(puVar2 + -0x230) = 0;
    *(ulong *)(puVar2 + -0x228) = uVar12;
    *(undefined1 **)(puVar2 + -0x220) = puVar18;
    *(undefined **)(puVar2 + -0x218) = &Atlas_League_LeagueModeTester__TestPodiumPlace;
    puVar18 = puVar2 + -0x220;
    unaff_x23 = 0x3eb4000;
    uVar11 = param_3;
    param_4 = param_1;
    if ((bRam0000000003eb48c9 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c9 = 1;
    }
    if (uVar6 != 0) break;
    auVar23 = func_0x00f78af4();
    lVar17 = auVar23._8_8_;
    uVar13 = auVar23._0_8_;
    puVar3 = puVar2 + -0x2d0;
    *(ulong *)(puVar2 + -0x2b0) = unaff_x26;
    *(undefined8 *)(puVar2 + -0x2a8) = unaff_x25;
    *(undefined8 *)(puVar2 + -0x2a0) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x298) = 0x3eb4000;
    *(ulong *)(puVar2 + -0x290) = uVar16;
    *(undefined8 *)(puVar2 + -0x288) = 0;
    *(ulong *)(puVar2 + -0x280) = param_1;
    *(ulong *)(puVar2 + -0x278) = param_3;
    *(undefined1 **)(puVar2 + -0x270) = puVar18;
    *(undefined **)(puVar2 + -0x268) = &Atlas_League_LeagueModeTester__TestPodiumAsIs;
    puVar18 = puVar2 + -0x270;
    uVar16 = 0x3eb4000;
    uVar6 = uVar11;
    if ((bRam0000000003eb48ca & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48ca = 1;
    }
    param_2 = 0;
    if (lVar17 != 0) {
      unaff_x25 = 0x3d21070;
      unaff_x24 = 0x3d25238;
      uVar7 = *(undefined8 *)(lVar17 + 0x38);
      *(undefined8 *)(puVar2 + -0x2b8) = uVar7;
      unaff_x26 = 7;
      iVar4 = -7;
      do {
        *(undefined8 *)(puVar2 + -0x2c0) = uVar7;
        uVar7 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0((double)iVar4,puVar2 + -0x2c0,0);
        *(undefined8 *)(puVar2 + -0x2b8) = uVar7;
        iVar5 = /*System.DateTime$$get_DayOfWeek*/ func_0x02a8e2a0(puVar2 + -0x2b8,0);
        uVar7 = *(undefined8 *)(lVar17 + 0x38);
        if (iVar5 == 0) break;
        iVar5 = (int)unaff_x26;
        unaff_x26 = (ulong)(iVar5 - 1);
        iVar4 = iVar4 + 1;
      } while (1 < iVar5);
      unaff_x23 = *(undefined8 *)(puVar2 + -0x2b8);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar7,unaff_x23,0);
      *(undefined8 *)(puVar2 + -0x2c8) = uVar7;
      dVar20 = (double)/*System.TimeSpan$$get_TotalDays*/ func_0x029f0390(puVar2 + -0x2c8,0);
      dVar21 = -dVar20;
      if (dVar20 != INFINITY) {
        dVar21 = dVar20;
      }
      uVar16 = (ulong)(uint)(int)dVar21;
      param_2 = *(ulong *)(lVar17 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)(int)dVar21,0);
      uVar6 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(param_2,uVar7);
      uVar7 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      auVar22._8_8_ = uVar7;
      auVar22._0_8_ = uVar13;
      if (uVar13 != 0) {
        puVar19 = &UNK_0147d4c4;
        uVar12 = uVar6;
        uVar6 = uVar11;
        uVar15 = uVar13;
        goto code_r0x0147c154;
      }
    }
    auVar23 = func_0x00f78af4();
    uVar15 = auVar23._0_8_;
    puVar3 = puVar2 + -0x310;
    *(undefined8 *)(puVar2 + -0x310) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x308) = unaff_x23;
    *(ulong *)(puVar2 + -0x300) = uVar16;
    *(ulong *)(puVar2 + -0x2f8) = param_2;
    *(ulong *)(puVar2 + -0x2f0) = uVar13;
    *(ulong *)(puVar2 + -0x2e8) = uVar11;
    *(undefined1 **)(puVar2 + -0x2e0) = puVar18;
    *(undefined **)(puVar2 + -0x2d8) = &Atlas_League_LeagueModeTester__TestDecayDemotion;
    puVar18 = puVar2 + -0x2e0;
    uVar11 = param_4;
    if ((bRam0000000003eb48cb & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48cb = 1;
    }
    if (auVar23._8_8_ == 0) {
code_r0x0147d610:
      func_0x00f78af4();
      return;
    }
    unaff_x23 = 0x3d21070;
    uVar16 = *(ulong *)(auVar23._8_8_ + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)(int)param_4,0);
    param_4 = uVar11;
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
      param_4 = uVar11;
    }
    uVar12 = 0;
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar16,uVar7);
    param_2 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    auVar22._8_8_ = param_2;
    auVar22._0_8_ = uVar15;
    if (uVar15 == 0) goto code_r0x0147d610;
    puVar19 = &UNK_0147d5e4;
  } while( true );
  puVar19 = &UNK_0147d22c;
  param_2 = uVar6;
  goto code_r0x0147bfe0;
}



// ============================================================
// RVA: 0x147c480 | Atlas.League.LeagueModeTester.TestPodiumPlaceBrokenLeaderboard2
// ============================================================

ulong Atlas_League_LeagueModeTester__TestPodiumPlaceBrokenLeaderboard2
                (long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  ulong unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 uVar15;
  ulong uVar16;
  ulong unaff_x22;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  int iVar21;
  undefined8 ****unaff_x29;
  undefined1 *puVar22;
  undefined *unaff_x30;
  code *pcVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auStack_2a0 [8];
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 ***pppuStack_240;
  undefined *puStack_238;
  undefined8 ***pppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  long lStack_1c0;
  ulong uStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  long lStack_180;
  ulong uStack_178;
  undefined8 ***pppuStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  long lStack_140;
  ulong uStack_138;
  undefined8 ***pppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  long lStack_100;
  ulong uStack_f8;
  undefined8 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined8 ***pppuStack_b0;
  undefined *puStack_a8;
  undefined8 ***pppuStack_60;
  undefined *puStack_58;
  
  uVar17 = 0x3eb4000;
  uVar12 = param_3;
  if ((bRam0000000003eb48c2 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d22e88);
    func_0x00f78a20(0x3d25238);
    func_0x00f78a20(0x3d653e8);
    bRam0000000003eb48c2 = 1;
  }
  if ((param_1 == 0) || (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(param_1), param_2 == 0)) {
LAB_0147c66c:
    auVar26 = func_0x00f78af4();
    uVar6 = auVar26._8_8_;
    lVar8 = auVar26._0_8_;
    puStack_58 = &Atlas_League_LeagueModeTester__TestPodiumPlaceBrokenLeaderboard3;
    uVar18 = 0x3eb4000;
    uVar13 = uVar12;
    pppuStack_60 = (undefined8 ***)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb48c3 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d1f100);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      func_0x00f78a20(0x3d653e0);
      bRam0000000003eb48c3 = 1;
    }
    if ((lVar8 != 0) && (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(lVar8), uVar6 != 0)) {
      uVar15 = *(undefined8 *)(uVar6 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar18 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x24 = 0x3d1f100;
      unaff_x23 = 0x3d653e0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar15,uVar18,0);
      uVar15 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(lVar8,uVar15);
      uVar15 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(lVar8);
      /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(lVar8,uVar15);
      /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(lVar8,1);
      iVar14 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= iVar14) break;
        /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(lVar8,iVar14,0);
        iVar20 = 0;
        do {
          param_4 = uVar12;
          Atlas_League_LeagueModeSave__SaveAIDayPlacement(iVar20,iVar14,iVar20);
          iVar20 = iVar20 + 1;
        } while (iVar20 != 0xc);
        iVar14 = iVar14 + 1;
        uVar18 = 0xc;
      }
      uVar6 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,0xb);
      /*System.Runtime.CompilerServices.RuntimeHelpers$$InitializeArray*/ func_0x02995384(uVar6,/*Field$<PrivateImplementationDetails>.3A9C421558546FFEC2136920883D1BF2D1C64AF2A1767DE97B667D62F2B054DF*/ uRam0000000003d653e0,0);
      uVar13 = 0;
      /*Atlas.League.LeaguePlayerSave$$SaveLeaderboardForUI*/ func_0x0147c3a4(lVar8,uVar6);
      if (uVar12 != 0) {
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
        uVar13 = uVar12;
        unaff_x19 = param_3;
        unaff_x20 = param_1;
        unaff_x21 = param_2;
        unaff_x22 = uVar17;
        unaff_x29 = (undefined8 ****)pppuStack_60;
        unaff_x30 = puStack_58;
        goto code_r0x014eb4e0;
      }
    }
    auVar26 = func_0x00f78af4();
    uVar16 = auVar26._8_8_;
    lVar9 = auVar26._0_8_;
    puStack_a8 = &Atlas_League_LeagueModeTester__TestPodium1stPlace;
    uVar19 = 0x3eb4000;
    uVar17 = uVar13;
    uStack_e0 = unaff_x24;
    uStack_d8 = unaff_x23;
    uStack_d0 = uVar18;
    uStack_c8 = uVar6;
    lStack_c0 = lVar8;
    uStack_b8 = uVar12;
    pppuStack_b0 = &pppuStack_60;
    if ((bRam0000000003eb48c4 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c4 = 1;
    }
    if ((lVar9 != 0) && (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(lVar9), uVar16 != 0)) {
      uVar15 = *(undefined8 *)(uVar16 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar19 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x23 = 0x3d22e88;
      uVar17 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar15,uVar19);
      uVar15 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(lVar9,uVar15);
      /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(lVar9,1);
      uVar15 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(lVar9);
      /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(lVar9,uVar15);
      uVar16 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)uVar16) break;
        uVar17 = 0;
        /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(lVar9,uVar16);
        uVar16 = (ulong)((int)uVar16 + 1);
      }
      if (uVar13 != 0) {
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff60;
        unaff_x19 = uStack_b8;
        unaff_x20 = lStack_c0;
        unaff_x21 = uStack_c8;
        unaff_x22 = uStack_d0;
        unaff_x29 = (undefined8 ****)pppuStack_b0;
        unaff_x30 = puStack_a8;
        goto code_r0x014eb4e0;
      }
    }
    auVar26 = func_0x00f78af4();
    uVar6 = auVar26._8_8_;
    lVar8 = auVar26._0_8_;
    puStack_e8 = &Atlas_League_LeagueModeTester__TestPodium2ndPlace;
    uVar18 = 0x3eb4000;
    uVar12 = uVar17;
    uStack_120 = unaff_x24;
    uStack_118 = unaff_x23;
    uStack_110 = uVar19;
    uStack_108 = uVar16;
    lStack_100 = lVar9;
    uStack_f8 = uVar13;
    pppuStack_f0 = &pppuStack_b0;
    if ((bRam0000000003eb48c5 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c5 = 1;
    }
    if ((lVar8 != 0) && (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(lVar8), uVar6 != 0)) {
      uVar15 = *(undefined8 *)(uVar6 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar18 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x23 = 0x3d22e88;
      uVar12 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar15,uVar18);
      uVar15 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(lVar8,uVar15);
      /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(lVar8,1);
      uVar15 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(lVar8);
      /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(lVar8,uVar15);
      uVar6 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)uVar6) break;
        /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(lVar8,uVar6,1);
        uVar12 = 0;
        param_4 = uVar17;
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,uVar6);
        uVar6 = (ulong)((int)uVar6 + 1);
      }
      if (uVar17 != 0) {
        register0x00000008 = (BADSPACEBASE *)&uStack_e0;
        uVar13 = uVar17;
        unaff_x19 = uStack_f8;
        unaff_x20 = lStack_100;
        unaff_x21 = uStack_108;
        unaff_x22 = uStack_110;
        unaff_x29 = (undefined8 ****)pppuStack_f0;
        unaff_x30 = puStack_e8;
        goto code_r0x014eb4e0;
      }
    }
    auVar26 = func_0x00f78af4();
    uVar16 = auVar26._8_8_;
    lVar9 = auVar26._0_8_;
    puStack_128 = &Atlas_League_LeagueModeTester__TestPodium6thPlace;
    uVar19 = 0x3eb4000;
    uVar13 = uVar12;
    uStack_160 = unaff_x24;
    uStack_158 = unaff_x23;
    uStack_150 = uVar18;
    uStack_148 = uVar6;
    lStack_140 = lVar8;
    uStack_138 = uVar17;
    pppuStack_130 = &pppuStack_f0;
    if ((bRam0000000003eb48c6 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c6 = 1;
    }
    if ((lVar9 != 0) && (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(lVar9), uVar16 != 0)) {
      uVar15 = *(undefined8 *)(uVar16 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar19 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x23 = 0x3d22e88;
      uVar13 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar15,uVar19);
      uVar15 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(lVar9,uVar15);
      /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(lVar9,1);
      uVar15 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(lVar9);
      /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(lVar9,uVar15);
      uVar16 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)uVar16) break;
        /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(lVar9,uVar16,5);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,uVar16,0,uVar12);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,uVar16,1,uVar12);
        uVar13 = 3;
        param_4 = uVar12;
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(2,uVar16);
        uVar16 = (ulong)((int)uVar16 + 1);
      }
      if (uVar12 != 0) {
        register0x00000008 = (BADSPACEBASE *)&uStack_120;
        uVar13 = uVar12;
        unaff_x19 = uStack_138;
        unaff_x20 = lStack_140;
        unaff_x21 = uStack_148;
        unaff_x22 = uStack_150;
        unaff_x29 = (undefined8 ****)pppuStack_130;
        unaff_x30 = puStack_128;
        goto code_r0x014eb4e0;
      }
    }
    auVar26 = func_0x00f78af4();
    uVar6 = auVar26._8_8_;
    lVar8 = auVar26._0_8_;
    puStack_168 = &Atlas_League_LeagueModeTester__TestPodium11thPlace;
    uVar18 = 0x3eb4000;
    uVar17 = uVar13;
    uStack_1a0 = unaff_x24;
    uStack_198 = unaff_x23;
    uStack_190 = uVar19;
    uStack_188 = uVar16;
    lStack_180 = lVar9;
    uStack_178 = uVar12;
    pppuStack_170 = &pppuStack_130;
    if ((bRam0000000003eb48c7 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c7 = 1;
    }
    if ((lVar8 != 0) && (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(lVar8), uVar6 != 0)) {
      uVar15 = *(undefined8 *)(uVar6 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar18 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x23 = 0x3d22e88;
      uVar17 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar15,uVar18);
      uVar15 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(lVar8,uVar15);
      uVar15 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(lVar8);
      /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(lVar8,uVar15);
      /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(lVar8,1);
      uVar6 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)uVar6) break;
        /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(lVar8,uVar6,0xb);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,uVar6,0,uVar13);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,uVar6,1,uVar13);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,uVar6,0,uVar13);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,uVar6,1,uVar13);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(2,uVar6,2,uVar13);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(3,uVar6,3,uVar13);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(4,uVar6,4,uVar13);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(5,uVar6,5,uVar13);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(6,uVar6,6,uVar13);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(7,uVar6,7,uVar13);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(8,uVar6,8,uVar13);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(9,uVar6,9,uVar13);
        uVar17 = 0xb;
        param_4 = uVar13;
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0xb,uVar6);
        uVar6 = (ulong)((int)uVar6 + 1);
      }
      if (uVar13 != 0) {
        register0x00000008 = (BADSPACEBASE *)&uStack_160;
        unaff_x19 = uStack_178;
        unaff_x20 = lStack_180;
        unaff_x21 = uStack_188;
        unaff_x22 = uStack_190;
        unaff_x29 = (undefined8 ****)pppuStack_170;
        unaff_x30 = puStack_168;
        goto code_r0x014eb4e0;
      }
    }
    auVar26 = func_0x00f78af4();
    unaff_x21 = auVar26._8_8_;
    unaff_x20 = auVar26._0_8_;
    puStack_1a8 = &Atlas_League_LeagueModeTester__TestPodium12thPlace;
    unaff_x22 = 0x3eb4000;
    uVar12 = uVar17;
    uStack_1e0 = unaff_x24;
    uStack_1d8 = unaff_x23;
    uStack_1d0 = uVar18;
    uStack_1c8 = uVar6;
    lStack_1c0 = lVar8;
    uStack_1b8 = uVar13;
    pppuStack_1b0 = &pppuStack_170;
    if ((bRam0000000003eb48c8 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c8 = 1;
    }
    if ((unaff_x20 != 0) && (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(unaff_x20), unaff_x21 != 0)) {
      uVar15 = *(undefined8 *)(unaff_x21 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x22 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar12 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar15,unaff_x22);
      uVar15 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(unaff_x20,uVar15);
      uVar15 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(unaff_x20);
      /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(unaff_x20,uVar15);
      /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(unaff_x20,1);
      unaff_x21 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)unaff_x21) break;
        /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(unaff_x20,unaff_x21,0xc);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,unaff_x21,0,uVar17);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,unaff_x21,1,uVar17);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(2,unaff_x21,2,uVar17);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(3,unaff_x21,3,uVar17);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(4,unaff_x21,4,uVar17);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(5,unaff_x21,5,uVar17);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(6,unaff_x21,6,uVar17);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(7,unaff_x21,7,uVar17);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(8,unaff_x21,8,uVar17);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(9,unaff_x21,9,uVar17);
        uVar12 = 10;
        param_4 = uVar17;
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(10,unaff_x21);
        unaff_x21 = (ulong)((int)unaff_x21 + 1);
      }
      if (uVar17 != 0) {
        register0x00000008 = (BADSPACEBASE *)&uStack_1a0;
        uVar13 = uVar17;
        unaff_x19 = uStack_1b8;
        unaff_x20 = lStack_1c0;
        unaff_x21 = uStack_1c8;
        unaff_x22 = uStack_1d0;
        unaff_x29 = (undefined8 ****)pppuStack_1b0;
        unaff_x30 = puStack_1a8;
        goto code_r0x014eb4e0;
      }
    }
    auVar26 = func_0x00f78af4();
    lVar8 = auVar26._0_8_;
    puStack_1e8 = &Atlas_League_LeagueModeTester__TestPodiumPlace;
    unaff_x19 = uVar12;
    uVar18 = param_4;
    pppuStack_1f0 = &pppuStack_1b0;
    if ((bRam0000000003eb48c9 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c9 = 1;
    }
    if ((lVar8 != 0) && (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(lVar8), auVar26._8_8_ != 0)) {
      uVar15 = *(undefined8 *)(auVar26._8_8_ + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x19 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar15,uVar7);
      uVar15 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(lVar8,uVar15);
      uVar15 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(lVar8);
      /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(lVar8,uVar15);
      /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(lVar8,1);
      iVar14 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= iVar14) break;
        unaff_x19 = param_4;
        /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(lVar8,iVar14);
        uVar13 = 0;
        do {
          iVar20 = (int)uVar13;
          if ((int)param_4 + -1 != iVar20) {
            uVar18 = uVar12;
            Atlas_League_LeagueModeSave__SaveAIDayPlacement(uVar13,iVar14);
            unaff_x19 = uVar13;
          }
          uVar2 = iVar20 + 1;
          uVar13 = (ulong)uVar2;
        } while (uVar2 != 0xc);
        iVar14 = iVar14 + 1;
      }
      if (uVar12 != 0) {
        register0x00000008 = (BADSPACEBASE *)&uStack_1e0;
        uVar13 = uVar12;
        unaff_x19 = uVar17;
        unaff_x29 = (undefined8 ****)pppuStack_1f0;
        unaff_x30 = puStack_1e8;
        goto code_r0x014eb4e0;
      }
    }
    auVar26 = func_0x00f78af4();
    lVar8 = auVar26._8_8_;
    unaff_x20 = auVar26._0_8_;
    puStack_238 = &Atlas_League_LeagueModeTester__TestPodiumAsIs;
    unaff_x29 = &pppuStack_240;
    unaff_x22 = 0x3eb4000;
    uVar13 = unaff_x19;
    pppuStack_240 = &pppuStack_1f0;
    if ((bRam0000000003eb48ca & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48ca = 1;
    }
    iVar14 = (int)uVar18;
    unaff_x21 = 0;
    if (lVar8 != 0) {
      uVar15 = *(undefined8 *)(lVar8 + 0x38);
      iVar20 = -7;
      uStack_288 = uVar15;
      iVar21 = 7;
      do {
        uStack_290 = uVar15;
        uStack_288 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0((double)iVar20,&uStack_290,0);
        iVar5 = /*System.DateTime$$get_DayOfWeek*/ func_0x02a8e2a0(&uStack_288,0);
        uVar7 = uStack_288;
        iVar14 = (int)uVar18;
        uVar15 = *(undefined8 *)(lVar8 + 0x38);
        if (iVar5 == 0) break;
        iVar20 = iVar20 + 1;
        bVar1 = 1 < iVar21;
        iVar21 = iVar21 + -1;
      } while (bVar1);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_298 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar15,uVar7,0);
      dVar24 = (double)/*System.TimeSpan$$get_TotalDays*/ func_0x029f0390(&uStack_298,0);
      dVar25 = -dVar24;
      if (dVar24 != INFINITY) {
        dVar25 = dVar24;
      }
      unaff_x22 = (ulong)(uint)(int)dVar25;
      unaff_x21 = *(ulong *)(lVar8 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar15 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)(int)dVar25,0);
      uVar13 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(unaff_x21,uVar15);
      uVar15 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      if (unaff_x20 != 0) {
        /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(unaff_x20,uVar15);
        uVar15 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(unaff_x20);
        /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(unaff_x20,uVar15);
        /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(unaff_x20,1);
        if (unaff_x19 != 0) {
          uVar17 = Atlas_Save_SaveManager__StartSave(unaff_x19,0);
          return uVar17;
        }
      }
    }
    auVar26 = func_0x00f78af4();
    lVar8 = auVar26._0_8_;
    if ((bRam0000000003eb48cb & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48cb = 1;
    }
    if (auVar26._8_8_ == 0) {
code_r0x0147d610:
      uVar17 = func_0x00f78af4();
      return uVar17;
    }
    uVar15 = *(undefined8 *)(auVar26._8_8_ + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)iVar14,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar15,uVar7,0);
    uVar15 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    if (lVar8 == 0) goto code_r0x0147d610;
    /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(lVar8,uVar15);
    /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(lVar8,uVar15);
    if (uVar13 == 0) goto code_r0x0147d610;
    unaff_x30 = &Atlas_League_LeagueModeTester__TestDecayDemotion;
    register0x00000008 = (BADSPACEBASE *)auStack_2a0;
  }
  else {
    uVar15 = *(undefined8 *)(param_2 + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar17 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x24 = 0x3d1f100;
    unaff_x23 = 0x3d653e8;
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar15,uVar17,0);
    uVar15 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(param_1,uVar15);
    uVar15 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(param_1);
    /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(param_1,uVar15);
    /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(param_1,1);
    iVar14 = 0;
    while( true ) {
      if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= iVar14) break;
      /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(param_1,iVar14,0);
      iVar20 = 0;
      do {
        param_4 = param_3;
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(iVar20,iVar14,iVar20);
        iVar20 = iVar20 + 1;
      } while (iVar20 != 0xc);
      iVar14 = iVar14 + 1;
      uVar17 = 0xc;
    }
    param_2 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,0xb);
    /*System.Runtime.CompilerServices.RuntimeHelpers$$InitializeArray*/ func_0x02995384(param_2,/*Field$<PrivateImplementationDetails>.53BFB09A8803B408833184310D7A89203A1665BF87CC3BDF75E5CD512C94352D*/ uRam0000000003d653e8,0);
    uVar12 = 0x14;
    /*Atlas.League.LeaguePlayerSave$$SaveLeaderboardForUI*/ func_0x0147c3a4(param_1,param_2);
    uVar13 = param_3;
    if (param_3 == 0) goto LAB_0147c66c;
  }
code_r0x014eb4e0:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *****)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (*(char *)(uVar13 + 0x108) != '\0') {
    return 0;
  }
  *(undefined4 *)(uVar13 + 0x54) = 0;
  *(undefined1 *)(uVar13 + 0x110) = 0;
  lVar8 = Atlas_Save_SaveManager__get_SaveData(uVar13,0);
  if (lVar8 == 0) {
code_r0x014eb554:
    lVar8 = func_0x00f78af4();
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x50);
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x38) = uVar13;
    *(undefined1 **)((long)register0x00000008 + -0x30) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x28) =
         Atlas_Save_SaveManager__UpdateDependantSaveDataFieldsPreSave;
    puVar22 = (undefined1 *)((long)register0x00000008 + -0x30);
    unaff_x21 = 0x3d21070;
    if ((bRam0000000003eb4c42 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      bRam0000000003eb4c42 = 1;
    }
    lVar9 = Atlas_Save_SaveManager__get_SaveData(lVar8);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar15 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
    if (lVar9 != 0) {
      *(undefined8 *)(lVar9 + 0x18) = uVar15;
      lVar10 = Atlas_Save_SaveManager__get_SaveData(lVar8);
      if (((*(long *)(lVar8 + 0x58) != 0) &&
          (lVar11 = *(long *)(*(long *)(lVar8 + 0x58) + 0x10), lVar9 = lVar10, lVar11 != 0)) &&
         (uVar17 = /*Atlas.Stats.StatsData$$Clone*/ func_0x01504c74(lVar11,0), lVar10 != 0)) {
        *(ulong *)(lVar10 + 0x30) = uVar17;
        return uVar17;
      }
    }
    pcVar23 = Atlas_Save_SaveManager__StartSave;
    auVar26 = func_0x00f78af4();
  }
  else {
    uVar17 = Atlas_Save_SaveData__get_IsValidSaveData();
    if ((uVar17 & 1) == 0) {
      if ((*(long *)(uVar13 + 0x98) == 0) ||
         (lVar8 = *(long *)(*(long *)(uVar13 + 0x98) + 0x48), lVar8 == 0)) goto code_r0x014eb554;
      /*Atlas.Analytics.AtlasAnalyticsEvents$$NewSaveGameEvent*/ func_0x01455860(lVar8,0);
    }
    Atlas_Save_SaveManager__UpdateDependantSaveDataFieldsPreSave(uVar13);
    auVar26._8_4_ = *(undefined4 *)(uVar13 + 0xf8);
    auVar26._0_8_ = uVar13;
    auVar26._12_4_ = 0;
    puVar22 = *(undefined1 **)((long)register0x00000008 + -0x10);
    pcVar23 = *(code **)((long)register0x00000008 + -8);
    lVar9 = *(long *)((long)register0x00000008 + -0x20);
    lVar8 = *(long *)((long)register0x00000008 + -0x18);
    puVar4 = (undefined1 *)register0x00000008;
  }
  lVar10 = auVar26._0_8_;
  *(ulong *)(puVar4 + -0x30) = unaff_x22;
  *(ulong *)(puVar4 + -0x28) = unaff_x21;
  *(long *)(puVar4 + -0x20) = lVar9;
  *(long *)(puVar4 + -0x18) = lVar8;
  *(undefined1 **)(puVar4 + -0x10) = puVar22;
  *(code **)(puVar4 + -8) = pcVar23;
  cVar3 = *(char *)(lVar10 + 0x50);
  if (cVar3 == '\0') {
    *(undefined1 *)(lVar10 + 0x50) = 1;
    Atlas_Save_SaveManager__SerializeSaveDataToSaveBuffer();
    uVar15 = Atlas_Save_SaveManager__AsyncSave(lVar10,auVar26._8_8_,0);
    *(undefined8 *)(lVar10 + 0x100) = uVar15;
    *(undefined4 *)(lVar10 + 0x54) = 0;
    *(undefined1 *)(lVar10 + 0x110) = 0;
  }
  return (ulong)(cVar3 == '\0');
}



// ============================================================
// RVA: 0x147c670 | Atlas.League.LeagueModeTester.TestPodiumPlaceBrokenLeaderboard3
// ============================================================

ulong Atlas_League_LeagueModeTester__TestPodiumPlaceBrokenLeaderboard3
                (long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  ulong unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_x22;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  int iVar20;
  undefined8 ****unaff_x29;
  undefined1 *puVar21;
  undefined *unaff_x30;
  code *pcVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auStack_250 [8];
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 ***pppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 ***pppuStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  long lStack_170;
  ulong uStack_168;
  undefined8 ***pppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  long lStack_130;
  ulong uStack_128;
  undefined8 ***pppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  undefined8 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  undefined8 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined8 ***pppuStack_60;
  undefined *puStack_58;
  
  uVar17 = 0x3eb4000;
  uVar11 = param_3;
  if ((bRam0000000003eb48c3 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d22e88);
    func_0x00f78a20(0x3d25238);
    func_0x00f78a20(0x3d653e0);
    bRam0000000003eb48c3 = 1;
  }
  if ((param_1 == 0) || (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(param_1), param_2 == 0)) {
LAB_0147c85c:
    auVar25 = func_0x00f78af4();
    uVar15 = auVar25._8_8_;
    lVar7 = auVar25._0_8_;
    puStack_58 = &Atlas_League_LeagueModeTester__TestPodium1stPlace;
    uVar18 = 0x3eb4000;
    uVar12 = uVar11;
    uStack_90 = unaff_x24;
    uStack_88 = unaff_x23;
    uStack_80 = uVar17;
    uStack_78 = param_2;
    lStack_70 = param_1;
    uStack_68 = param_3;
    pppuStack_60 = (undefined8 ***)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb48c4 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c4 = 1;
    }
    if ((lVar7 != 0) && (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(lVar7), uVar15 != 0)) {
      uVar14 = *(undefined8 *)(uVar15 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar18 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x23 = 0x3d22e88;
      uVar12 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar14,uVar18);
      uVar14 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(lVar7,uVar14);
      /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(lVar7,1);
      uVar14 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(lVar7);
      /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(lVar7,uVar14);
      uVar15 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)uVar15) break;
        uVar12 = 0;
        /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(lVar7,uVar15);
        uVar15 = (ulong)((int)uVar15 + 1);
      }
      if (uVar11 != 0) {
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
        param_3 = uVar11;
        unaff_x19 = uStack_68;
        unaff_x20 = lStack_70;
        unaff_x21 = uStack_78;
        unaff_x22 = uStack_80;
        unaff_x29 = (undefined8 ****)pppuStack_60;
        unaff_x30 = puStack_58;
        goto code_r0x014eb4e0;
      }
    }
    auVar25 = func_0x00f78af4();
    uVar16 = auVar25._8_8_;
    lVar8 = auVar25._0_8_;
    puStack_98 = &Atlas_League_LeagueModeTester__TestPodium2ndPlace;
    uVar17 = 0x3eb4000;
    param_3 = uVar12;
    uStack_d0 = unaff_x24;
    uStack_c8 = unaff_x23;
    uStack_c0 = uVar18;
    uStack_b8 = uVar15;
    lStack_b0 = lVar7;
    uStack_a8 = uVar11;
    pppuStack_a0 = &pppuStack_60;
    if ((bRam0000000003eb48c5 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c5 = 1;
    }
    if ((lVar8 != 0) && (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(lVar8), uVar16 != 0)) {
      uVar14 = *(undefined8 *)(uVar16 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar17 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x23 = 0x3d22e88;
      param_3 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar14,uVar17);
      uVar14 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(lVar8,uVar14);
      /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(lVar8,1);
      uVar14 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(lVar8);
      /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(lVar8,uVar14);
      uVar16 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)uVar16) break;
        /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(lVar8,uVar16,1);
        param_3 = 0;
        param_4 = uVar12;
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,uVar16);
        uVar16 = (ulong)((int)uVar16 + 1);
      }
      if (uVar12 != 0) {
        register0x00000008 = (BADSPACEBASE *)&uStack_90;
        param_3 = uVar12;
        unaff_x19 = uStack_a8;
        unaff_x20 = lStack_b0;
        unaff_x21 = uStack_b8;
        unaff_x22 = uStack_c0;
        unaff_x29 = (undefined8 ****)pppuStack_a0;
        unaff_x30 = puStack_98;
        goto code_r0x014eb4e0;
      }
    }
    auVar25 = func_0x00f78af4();
    uVar15 = auVar25._8_8_;
    lVar7 = auVar25._0_8_;
    puStack_d8 = &Atlas_League_LeagueModeTester__TestPodium6thPlace;
    uVar18 = 0x3eb4000;
    uVar11 = param_3;
    uStack_110 = unaff_x24;
    uStack_108 = unaff_x23;
    uStack_100 = uVar17;
    uStack_f8 = uVar16;
    lStack_f0 = lVar8;
    uStack_e8 = uVar12;
    pppuStack_e0 = &pppuStack_a0;
    if ((bRam0000000003eb48c6 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c6 = 1;
    }
    if ((lVar7 != 0) && (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(lVar7), uVar15 != 0)) {
      uVar14 = *(undefined8 *)(uVar15 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar18 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x23 = 0x3d22e88;
      uVar11 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar14,uVar18);
      uVar14 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(lVar7,uVar14);
      /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(lVar7,1);
      uVar14 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(lVar7);
      /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(lVar7,uVar14);
      uVar15 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)uVar15) break;
        /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(lVar7,uVar15,5);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,uVar15,0,param_3);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,uVar15,1,param_3);
        uVar11 = 3;
        param_4 = param_3;
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(2,uVar15);
        uVar15 = (ulong)((int)uVar15 + 1);
      }
      if (param_3 != 0) {
        register0x00000008 = (BADSPACEBASE *)&uStack_d0;
        unaff_x19 = uStack_e8;
        unaff_x20 = lStack_f0;
        unaff_x21 = uStack_f8;
        unaff_x22 = uStack_100;
        unaff_x29 = (undefined8 ****)pppuStack_e0;
        unaff_x30 = puStack_d8;
        goto code_r0x014eb4e0;
      }
    }
    auVar25 = func_0x00f78af4();
    uVar16 = auVar25._8_8_;
    lVar8 = auVar25._0_8_;
    puStack_118 = &Atlas_League_LeagueModeTester__TestPodium11thPlace;
    uVar12 = 0x3eb4000;
    uVar17 = uVar11;
    uStack_150 = unaff_x24;
    uStack_148 = unaff_x23;
    uStack_140 = uVar18;
    uStack_138 = uVar15;
    lStack_130 = lVar7;
    uStack_128 = param_3;
    pppuStack_120 = &pppuStack_e0;
    if ((bRam0000000003eb48c7 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c7 = 1;
    }
    if ((lVar8 != 0) && (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(lVar8), uVar16 != 0)) {
      uVar14 = *(undefined8 *)(uVar16 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar12 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x23 = 0x3d22e88;
      uVar17 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar14,uVar12);
      uVar14 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(lVar8,uVar14);
      uVar14 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(lVar8);
      /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(lVar8,uVar14);
      /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(lVar8,1);
      uVar16 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)uVar16) break;
        /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(lVar8,uVar16,0xb);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,uVar16,0,uVar11);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,uVar16,1,uVar11);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,uVar16,0,uVar11);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,uVar16,1,uVar11);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(2,uVar16,2,uVar11);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(3,uVar16,3,uVar11);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(4,uVar16,4,uVar11);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(5,uVar16,5,uVar11);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(6,uVar16,6,uVar11);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(7,uVar16,7,uVar11);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(8,uVar16,8,uVar11);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(9,uVar16,9,uVar11);
        uVar17 = 0xb;
        param_4 = uVar11;
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0xb,uVar16);
        uVar16 = (ulong)((int)uVar16 + 1);
      }
      if (uVar11 != 0) {
        register0x00000008 = (BADSPACEBASE *)&uStack_110;
        param_3 = uVar11;
        unaff_x19 = uStack_128;
        unaff_x20 = lStack_130;
        unaff_x21 = uStack_138;
        unaff_x22 = uStack_140;
        unaff_x29 = (undefined8 ****)pppuStack_120;
        unaff_x30 = puStack_118;
        goto code_r0x014eb4e0;
      }
    }
    auVar25 = func_0x00f78af4();
    unaff_x21 = auVar25._8_8_;
    unaff_x20 = auVar25._0_8_;
    puStack_158 = &Atlas_League_LeagueModeTester__TestPodium12thPlace;
    unaff_x22 = 0x3eb4000;
    param_3 = uVar17;
    uStack_190 = unaff_x24;
    uStack_188 = unaff_x23;
    uStack_180 = uVar12;
    uStack_178 = uVar16;
    lStack_170 = lVar8;
    uStack_168 = uVar11;
    pppuStack_160 = &pppuStack_120;
    if ((bRam0000000003eb48c8 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c8 = 1;
    }
    if ((unaff_x20 != 0) && (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(unaff_x20), unaff_x21 != 0)) {
      uVar14 = *(undefined8 *)(unaff_x21 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x22 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      param_3 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar14,unaff_x22);
      uVar14 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(unaff_x20,uVar14);
      uVar14 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(unaff_x20);
      /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(unaff_x20,uVar14);
      /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(unaff_x20,1);
      unaff_x21 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)unaff_x21) break;
        /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(unaff_x20,unaff_x21,0xc);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,unaff_x21,0,uVar17);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,unaff_x21,1,uVar17);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(2,unaff_x21,2,uVar17);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(3,unaff_x21,3,uVar17);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(4,unaff_x21,4,uVar17);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(5,unaff_x21,5,uVar17);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(6,unaff_x21,6,uVar17);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(7,unaff_x21,7,uVar17);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(8,unaff_x21,8,uVar17);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(9,unaff_x21,9,uVar17);
        param_3 = 10;
        param_4 = uVar17;
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(10,unaff_x21);
        unaff_x21 = (ulong)((int)unaff_x21 + 1);
      }
      if (uVar17 != 0) {
        register0x00000008 = (BADSPACEBASE *)&uStack_150;
        param_3 = uVar17;
        unaff_x19 = uStack_168;
        unaff_x20 = lStack_170;
        unaff_x21 = uStack_178;
        unaff_x22 = uStack_180;
        unaff_x29 = (undefined8 ****)pppuStack_160;
        unaff_x30 = puStack_158;
        goto code_r0x014eb4e0;
      }
    }
    auVar25 = func_0x00f78af4();
    lVar7 = auVar25._0_8_;
    puStack_198 = &Atlas_League_LeagueModeTester__TestPodiumPlace;
    unaff_x19 = param_3;
    uVar11 = param_4;
    pppuStack_1a0 = &pppuStack_160;
    if ((bRam0000000003eb48c9 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c9 = 1;
    }
    if ((lVar7 != 0) && (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(lVar7), auVar25._8_8_ != 0)) {
      uVar14 = *(undefined8 *)(auVar25._8_8_ + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar6 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x19 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar14,uVar6);
      uVar14 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(lVar7,uVar14);
      uVar14 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(lVar7);
      /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(lVar7,uVar14);
      /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(lVar7,1);
      iVar13 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= iVar13) break;
        unaff_x19 = param_4;
        /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(lVar7,iVar13);
        uVar12 = 0;
        do {
          iVar19 = (int)uVar12;
          if ((int)param_4 + -1 != iVar19) {
            uVar11 = param_3;
            Atlas_League_LeagueModeSave__SaveAIDayPlacement(uVar12,iVar13);
            unaff_x19 = uVar12;
          }
          uVar2 = iVar19 + 1;
          uVar12 = (ulong)uVar2;
        } while (uVar2 != 0xc);
        iVar13 = iVar13 + 1;
      }
      if (param_3 != 0) {
        register0x00000008 = (BADSPACEBASE *)&uStack_190;
        unaff_x19 = uVar17;
        unaff_x29 = (undefined8 ****)pppuStack_1a0;
        unaff_x30 = puStack_198;
        goto code_r0x014eb4e0;
      }
    }
    auVar25 = func_0x00f78af4();
    lVar7 = auVar25._8_8_;
    unaff_x20 = auVar25._0_8_;
    puStack_1e8 = &Atlas_League_LeagueModeTester__TestPodiumAsIs;
    unaff_x29 = &pppuStack_1f0;
    unaff_x22 = 0x3eb4000;
    param_3 = unaff_x19;
    pppuStack_1f0 = &pppuStack_1a0;
    if ((bRam0000000003eb48ca & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48ca = 1;
    }
    iVar13 = (int)uVar11;
    unaff_x21 = 0;
    if (lVar7 != 0) {
      uVar14 = *(undefined8 *)(lVar7 + 0x38);
      iVar19 = -7;
      uStack_238 = uVar14;
      iVar20 = 7;
      do {
        uStack_240 = uVar14;
        uStack_238 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0((double)iVar19,&uStack_240,0);
        iVar5 = /*System.DateTime$$get_DayOfWeek*/ func_0x02a8e2a0(&uStack_238,0);
        uVar6 = uStack_238;
        iVar13 = (int)uVar11;
        uVar14 = *(undefined8 *)(lVar7 + 0x38);
        if (iVar5 == 0) break;
        iVar19 = iVar19 + 1;
        bVar1 = 1 < iVar20;
        iVar20 = iVar20 + -1;
      } while (bVar1);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_248 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar14,uVar6,0);
      dVar23 = (double)/*System.TimeSpan$$get_TotalDays*/ func_0x029f0390(&uStack_248,0);
      dVar24 = -dVar23;
      if (dVar23 != INFINITY) {
        dVar24 = dVar23;
      }
      unaff_x22 = (ulong)(uint)(int)dVar24;
      unaff_x21 = *(ulong *)(lVar7 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar14 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)(int)dVar24,0);
      param_3 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(unaff_x21,uVar14);
      uVar14 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      if (unaff_x20 != 0) {
        /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(unaff_x20,uVar14);
        uVar14 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(unaff_x20);
        /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(unaff_x20,uVar14);
        /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(unaff_x20,1);
        if (unaff_x19 != 0) {
          uVar17 = Atlas_Save_SaveManager__StartSave(unaff_x19,0);
          return uVar17;
        }
      }
    }
    auVar25 = func_0x00f78af4();
    lVar7 = auVar25._0_8_;
    if ((bRam0000000003eb48cb & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48cb = 1;
    }
    if (auVar25._8_8_ == 0) {
code_r0x0147d610:
      uVar17 = func_0x00f78af4();
      return uVar17;
    }
    uVar14 = *(undefined8 *)(auVar25._8_8_ + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)iVar13,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar14,uVar6,0);
    uVar14 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    if (lVar7 == 0) goto code_r0x0147d610;
    /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(lVar7,uVar14);
    /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(lVar7,uVar14);
    if (param_3 == 0) goto code_r0x0147d610;
    unaff_x30 = &Atlas_League_LeagueModeTester__TestDecayDemotion;
    register0x00000008 = (BADSPACEBASE *)auStack_250;
  }
  else {
    uVar14 = *(undefined8 *)(param_2 + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar17 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x24 = 0x3d1f100;
    unaff_x23 = 0x3d653e0;
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar14,uVar17,0);
    uVar14 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(param_1,uVar14);
    uVar14 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(param_1);
    /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(param_1,uVar14);
    /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(param_1,1);
    iVar13 = 0;
    while( true ) {
      if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= iVar13) break;
      /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(param_1,iVar13,0);
      iVar19 = 0;
      do {
        param_4 = param_3;
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(iVar19,iVar13,iVar19);
        iVar19 = iVar19 + 1;
      } while (iVar19 != 0xc);
      iVar13 = iVar13 + 1;
      uVar17 = 0xc;
    }
    param_2 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,0xb);
    /*System.Runtime.CompilerServices.RuntimeHelpers$$InitializeArray*/ func_0x02995384(param_2,/*Field$<PrivateImplementationDetails>.3A9C421558546FFEC2136920883D1BF2D1C64AF2A1767DE97B667D62F2B054DF*/ uRam0000000003d653e0,0);
    uVar11 = 0;
    /*Atlas.League.LeaguePlayerSave$$SaveLeaderboardForUI*/ func_0x0147c3a4(param_1,param_2);
    if (param_3 == 0) goto LAB_0147c85c;
  }
code_r0x014eb4e0:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *****)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (*(char *)(param_3 + 0x108) != '\0') {
    return 0;
  }
  *(undefined4 *)(param_3 + 0x54) = 0;
  *(undefined1 *)(param_3 + 0x110) = 0;
  lVar7 = Atlas_Save_SaveManager__get_SaveData(param_3,0);
  if (lVar7 == 0) {
code_r0x014eb554:
    lVar7 = func_0x00f78af4();
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x50);
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x38) = param_3;
    *(undefined1 **)((long)register0x00000008 + -0x30) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x28) =
         Atlas_Save_SaveManager__UpdateDependantSaveDataFieldsPreSave;
    puVar21 = (undefined1 *)((long)register0x00000008 + -0x30);
    unaff_x21 = 0x3d21070;
    if ((bRam0000000003eb4c42 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      bRam0000000003eb4c42 = 1;
    }
    lVar8 = Atlas_Save_SaveManager__get_SaveData(lVar7);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar14 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
    if (lVar8 != 0) {
      *(undefined8 *)(lVar8 + 0x18) = uVar14;
      lVar9 = Atlas_Save_SaveManager__get_SaveData(lVar7);
      if (((*(long *)(lVar7 + 0x58) != 0) &&
          (lVar10 = *(long *)(*(long *)(lVar7 + 0x58) + 0x10), lVar8 = lVar9, lVar10 != 0)) &&
         (uVar17 = /*Atlas.Stats.StatsData$$Clone*/ func_0x01504c74(lVar10,0), lVar9 != 0)) {
        *(ulong *)(lVar9 + 0x30) = uVar17;
        return uVar17;
      }
    }
    pcVar22 = Atlas_Save_SaveManager__StartSave;
    auVar25 = func_0x00f78af4();
  }
  else {
    uVar17 = Atlas_Save_SaveData__get_IsValidSaveData();
    if ((uVar17 & 1) == 0) {
      if ((*(long *)(param_3 + 0x98) == 0) ||
         (lVar7 = *(long *)(*(long *)(param_3 + 0x98) + 0x48), lVar7 == 0)) goto code_r0x014eb554;
      /*Atlas.Analytics.AtlasAnalyticsEvents$$NewSaveGameEvent*/ func_0x01455860(lVar7,0);
    }
    Atlas_Save_SaveManager__UpdateDependantSaveDataFieldsPreSave(param_3);
    auVar25._8_4_ = *(undefined4 *)(param_3 + 0xf8);
    auVar25._0_8_ = param_3;
    auVar25._12_4_ = 0;
    puVar21 = *(undefined1 **)((long)register0x00000008 + -0x10);
    pcVar22 = *(code **)((long)register0x00000008 + -8);
    lVar8 = *(long *)((long)register0x00000008 + -0x20);
    lVar7 = *(long *)((long)register0x00000008 + -0x18);
    puVar4 = (undefined1 *)register0x00000008;
  }
  lVar9 = auVar25._0_8_;
  *(ulong *)(puVar4 + -0x30) = unaff_x22;
  *(ulong *)(puVar4 + -0x28) = unaff_x21;
  *(long *)(puVar4 + -0x20) = lVar8;
  *(long *)(puVar4 + -0x18) = lVar7;
  *(undefined1 **)(puVar4 + -0x10) = puVar21;
  *(code **)(puVar4 + -8) = pcVar22;
  cVar3 = *(char *)(lVar9 + 0x50);
  if (cVar3 == '\0') {
    *(undefined1 *)(lVar9 + 0x50) = 1;
    Atlas_Save_SaveManager__SerializeSaveDataToSaveBuffer();
    uVar14 = Atlas_Save_SaveManager__AsyncSave(lVar9,auVar25._8_8_,0);
    *(undefined8 *)(lVar9 + 0x100) = uVar14;
    *(undefined4 *)(lVar9 + 0x54) = 0;
    *(undefined1 *)(lVar9 + 0x110) = 0;
  }
  return (ulong)(cVar3 == '\0');
}



// ============================================================
// RVA: 0x147c860 | Atlas.League.LeagueModeTester.TestPodium1stPlace
// ============================================================

ulong Atlas_League_LeagueModeTester__TestPodium1stPlace
                (long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  ulong unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 uVar17;
  ulong unaff_x22;
  int iVar18;
  int iVar19;
  undefined8 ****unaff_x29;
  undefined1 *puVar20;
  undefined *unaff_x30;
  code *pcVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auStack_200 [8];
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 ***pppuStack_1a0;
  undefined *puStack_198;
  undefined8 ***pppuStack_150;
  undefined *puStack_148;
  undefined8 ***pppuStack_110;
  undefined *puStack_108;
  undefined8 ***pppuStack_d0;
  undefined *puStack_c8;
  undefined8 ***pppuStack_90;
  undefined *puStack_88;
  undefined8 ***pppuStack_50;
  undefined *puStack_48;
  
  uVar15 = param_3;
  if ((bRam0000000003eb48c4 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d22e88);
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb48c4 = 1;
  }
  uVar6 = 0x3eb4000;
  if ((param_1 == 0) || (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(param_1), param_2 == 0)) {
LAB_0147c9cc:
    unaff_x22 = uVar6;
    unaff_x21 = param_2;
    auVar24 = func_0x00f78af4();
    uVar6 = auVar24._8_8_;
    unaff_x20 = auVar24._0_8_;
    puStack_48 = &Atlas_League_LeagueModeTester__TestPodium2ndPlace;
    unaff_x19 = uVar15;
    pppuStack_50 = (undefined8 ***)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb48c5 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c5 = 1;
    }
    uVar7 = 0x3eb4000;
    if ((unaff_x20 != 0) && (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(unaff_x20), uVar6 != 0)) {
      uVar17 = *(undefined8 *)(uVar6 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x19 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar17,uVar7);
      uVar17 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(unaff_x20,uVar17);
      /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(unaff_x20,1);
      uVar17 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(unaff_x20);
      /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(unaff_x20,uVar17);
      uVar6 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)uVar6) break;
        /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(unaff_x20,uVar6,1);
        unaff_x19 = 0;
        param_4 = uVar15;
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,uVar6);
        uVar6 = (ulong)((int)uVar6 + 1);
      }
      if (uVar15 != 0) {
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        uVar7 = uVar15;
        unaff_x19 = param_3;
        unaff_x20 = param_1;
        unaff_x29 = (undefined8 ****)pppuStack_50;
        unaff_x30 = puStack_48;
        goto code_r0x014eb4e0;
      }
    }
    unaff_x22 = uVar7;
    unaff_x21 = uVar6;
    auVar24 = func_0x00f78af4();
    uVar7 = auVar24._8_8_;
    lVar11 = auVar24._0_8_;
    puStack_88 = &Atlas_League_LeagueModeTester__TestPodium6thPlace;
    uVar6 = unaff_x19;
    pppuStack_90 = &pppuStack_50;
    if ((bRam0000000003eb48c6 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c6 = 1;
    }
    uVar8 = 0x3eb4000;
    if ((lVar11 != 0) && (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(lVar11), uVar7 != 0)) {
      uVar17 = *(undefined8 *)(uVar7 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar6 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar17,uVar8);
      uVar17 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(lVar11,uVar17);
      /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(lVar11,1);
      uVar17 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(lVar11);
      /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(lVar11,uVar17);
      uVar7 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)uVar7) break;
        /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(lVar11,uVar7,5);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,uVar7,0,unaff_x19);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,uVar7,1,unaff_x19);
        uVar6 = 3;
        param_4 = unaff_x19;
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(2,uVar7);
        uVar7 = (ulong)((int)uVar7 + 1);
      }
      if (unaff_x19 != 0) {
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff80;
        uVar7 = unaff_x19;
        unaff_x19 = uVar15;
        unaff_x29 = (undefined8 ****)pppuStack_90;
        unaff_x30 = puStack_88;
        goto code_r0x014eb4e0;
      }
    }
    unaff_x22 = uVar8;
    unaff_x21 = uVar7;
    auVar24 = func_0x00f78af4();
    uVar7 = auVar24._8_8_;
    lVar12 = auVar24._0_8_;
    puStack_c8 = &Atlas_League_LeagueModeTester__TestPodium11thPlace;
    uVar15 = uVar6;
    pppuStack_d0 = &pppuStack_90;
    if ((bRam0000000003eb48c7 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c7 = 1;
    }
    uVar8 = 0x3eb4000;
    if ((lVar12 != 0) && (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(lVar12), uVar7 != 0)) {
      uVar17 = *(undefined8 *)(uVar7 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar15 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar17,uVar8);
      uVar17 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(lVar12,uVar17);
      uVar17 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(lVar12);
      /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(lVar12,uVar17);
      /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(lVar12,1);
      uVar7 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)uVar7) break;
        /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(lVar12,uVar7,0xb);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,uVar7,0,uVar6);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,uVar7,1,uVar6);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,uVar7,0,uVar6);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,uVar7,1,uVar6);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(2,uVar7,2,uVar6);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(3,uVar7,3,uVar6);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(4,uVar7,4,uVar6);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(5,uVar7,5,uVar6);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(6,uVar7,6,uVar6);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(7,uVar7,7,uVar6);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(8,uVar7,8,uVar6);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(9,uVar7,9,uVar6);
        uVar15 = 0xb;
        param_4 = uVar6;
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0xb,uVar7);
        uVar7 = (ulong)((int)uVar7 + 1);
      }
      if (uVar6 != 0) {
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff40;
        uVar7 = uVar6;
        unaff_x20 = lVar11;
        unaff_x29 = (undefined8 ****)pppuStack_d0;
        unaff_x30 = puStack_c8;
        goto code_r0x014eb4e0;
      }
    }
    unaff_x22 = uVar8;
    unaff_x21 = uVar7;
    auVar24 = func_0x00f78af4();
    uVar8 = auVar24._8_8_;
    unaff_x20 = auVar24._0_8_;
    puStack_108 = &Atlas_League_LeagueModeTester__TestPodium12thPlace;
    uVar7 = uVar15;
    pppuStack_110 = &pppuStack_d0;
    if ((bRam0000000003eb48c8 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c8 = 1;
    }
    uVar9 = 0x3eb4000;
    if ((unaff_x20 != 0) && (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(unaff_x20), uVar8 != 0)) {
      uVar17 = *(undefined8 *)(uVar8 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar9 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar17,uVar9);
      uVar17 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(unaff_x20,uVar17);
      uVar17 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(unaff_x20);
      /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(unaff_x20,uVar17);
      /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(unaff_x20,1);
      uVar8 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)uVar8) break;
        /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(unaff_x20,uVar8,0xc);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,uVar8,0,uVar15);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,uVar8,1,uVar15);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(2,uVar8,2,uVar15);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(3,uVar8,3,uVar15);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(4,uVar8,4,uVar15);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(5,uVar8,5,uVar15);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(6,uVar8,6,uVar15);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(7,uVar8,7,uVar15);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(8,uVar8,8,uVar15);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(9,uVar8,9,uVar15);
        uVar7 = 10;
        param_4 = uVar15;
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(10,uVar8);
        uVar8 = (ulong)((int)uVar8 + 1);
      }
      if (uVar15 != 0) {
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff00;
        uVar7 = uVar15;
        unaff_x19 = uVar6;
        unaff_x20 = lVar12;
        unaff_x29 = (undefined8 ****)pppuStack_110;
        unaff_x30 = puStack_108;
        goto code_r0x014eb4e0;
      }
    }
    unaff_x22 = uVar9;
    unaff_x21 = uVar8;
    auVar24 = func_0x00f78af4();
    lVar11 = auVar24._0_8_;
    puStack_148 = &Atlas_League_LeagueModeTester__TestPodiumPlace;
    unaff_x19 = uVar7;
    uVar6 = param_4;
    pppuStack_150 = &pppuStack_110;
    if ((bRam0000000003eb48c9 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c9 = 1;
    }
    if ((lVar11 != 0) && (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(lVar11), auVar24._8_8_ != 0)) {
      uVar17 = *(undefined8 *)(auVar24._8_8_ + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x19 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar17,uVar10);
      uVar17 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(lVar11,uVar17);
      uVar17 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(lVar11);
      /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(lVar11,uVar17);
      /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(lVar11,1);
      iVar16 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= iVar16) break;
        unaff_x19 = param_4;
        /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(lVar11,iVar16);
        uVar8 = 0;
        do {
          iVar18 = (int)uVar8;
          if ((int)param_4 + -1 != iVar18) {
            uVar6 = uVar7;
            Atlas_League_LeagueModeSave__SaveAIDayPlacement(uVar8,iVar16);
            unaff_x19 = uVar8;
          }
          uVar2 = iVar18 + 1;
          uVar8 = (ulong)uVar2;
        } while (uVar2 != 0xc);
        iVar16 = iVar16 + 1;
      }
      if (uVar7 != 0) {
        register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffec0;
        unaff_x19 = uVar15;
        unaff_x29 = (undefined8 ****)pppuStack_150;
        unaff_x30 = puStack_148;
        goto code_r0x014eb4e0;
      }
    }
    auVar24 = func_0x00f78af4();
    lVar11 = auVar24._8_8_;
    unaff_x20 = auVar24._0_8_;
    puStack_198 = &Atlas_League_LeagueModeTester__TestPodiumAsIs;
    unaff_x29 = &pppuStack_1a0;
    unaff_x22 = 0x3eb4000;
    uVar7 = unaff_x19;
    pppuStack_1a0 = &pppuStack_150;
    if ((bRam0000000003eb48ca & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48ca = 1;
    }
    iVar16 = (int)uVar6;
    unaff_x21 = 0;
    if (lVar11 != 0) {
      uVar17 = *(undefined8 *)(lVar11 + 0x38);
      iVar18 = -7;
      uStack_1e8 = uVar17;
      iVar19 = 7;
      do {
        uStack_1f0 = uVar17;
        uStack_1e8 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0((double)iVar18,&uStack_1f0,0);
        iVar5 = /*System.DateTime$$get_DayOfWeek*/ func_0x02a8e2a0(&uStack_1e8,0);
        uVar10 = uStack_1e8;
        iVar16 = (int)uVar6;
        uVar17 = *(undefined8 *)(lVar11 + 0x38);
        if (iVar5 == 0) break;
        iVar18 = iVar18 + 1;
        bVar1 = 1 < iVar19;
        iVar19 = iVar19 + -1;
      } while (bVar1);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_1f8 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar17,uVar10,0);
      dVar22 = (double)/*System.TimeSpan$$get_TotalDays*/ func_0x029f0390(&uStack_1f8,0);
      dVar23 = -dVar22;
      if (dVar22 != INFINITY) {
        dVar23 = dVar22;
      }
      unaff_x22 = (ulong)(uint)(int)dVar23;
      unaff_x21 = *(ulong *)(lVar11 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar17 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)(int)dVar23,0);
      uVar7 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(unaff_x21,uVar17);
      uVar17 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      if (unaff_x20 != 0) {
        /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(unaff_x20,uVar17);
        uVar17 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(unaff_x20);
        /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(unaff_x20,uVar17);
        /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(unaff_x20,1);
        if (unaff_x19 != 0) {
          uVar15 = Atlas_Save_SaveManager__StartSave(unaff_x19,0);
          return uVar15;
        }
      }
    }
    auVar24 = func_0x00f78af4();
    lVar11 = auVar24._0_8_;
    if ((bRam0000000003eb48cb & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48cb = 1;
    }
    if (auVar24._8_8_ == 0) {
code_r0x0147d610:
      uVar15 = func_0x00f78af4();
      return uVar15;
    }
    uVar17 = *(undefined8 *)(auVar24._8_8_ + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar10 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)iVar16,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar17,uVar10,0);
    uVar17 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    if (lVar11 == 0) goto code_r0x0147d610;
    /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(lVar11,uVar17);
    /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(lVar11,uVar17);
    if (uVar7 == 0) goto code_r0x0147d610;
    unaff_x30 = &Atlas_League_LeagueModeTester__TestDecayDemotion;
    register0x00000008 = (BADSPACEBASE *)auStack_200;
  }
  else {
    uVar17 = *(undefined8 *)(param_2 + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar15 = 0;
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar17,uVar6);
    uVar17 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(param_1,uVar17);
    /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(param_1,1);
    uVar17 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(param_1);
    /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(param_1,uVar17);
    param_2 = 0;
    while( true ) {
      if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)param_2) break;
      uVar15 = 0;
      /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(param_1,param_2);
      param_2 = (ulong)((int)param_2 + 1);
    }
    uVar7 = param_3;
    if (param_3 == 0) goto LAB_0147c9cc;
  }
code_r0x014eb4e0:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *****)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (*(char *)(uVar7 + 0x108) != '\0') {
    return 0;
  }
  *(undefined4 *)(uVar7 + 0x54) = 0;
  *(undefined1 *)(uVar7 + 0x110) = 0;
  lVar11 = Atlas_Save_SaveManager__get_SaveData(uVar7,0);
  if (lVar11 == 0) {
code_r0x014eb554:
    lVar11 = func_0x00f78af4();
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x50);
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x38) = uVar7;
    *(undefined1 **)((long)register0x00000008 + -0x30) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x28) =
         Atlas_Save_SaveManager__UpdateDependantSaveDataFieldsPreSave;
    puVar20 = (undefined1 *)((long)register0x00000008 + -0x30);
    unaff_x21 = 0x3d21070;
    if ((bRam0000000003eb4c42 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      bRam0000000003eb4c42 = 1;
    }
    lVar12 = Atlas_Save_SaveManager__get_SaveData(lVar11);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar17 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
    if (lVar12 != 0) {
      *(undefined8 *)(lVar12 + 0x18) = uVar17;
      lVar13 = Atlas_Save_SaveManager__get_SaveData(lVar11);
      if (((*(long *)(lVar11 + 0x58) != 0) &&
          (lVar14 = *(long *)(*(long *)(lVar11 + 0x58) + 0x10), lVar12 = lVar13, lVar14 != 0)) &&
         (uVar15 = /*Atlas.Stats.StatsData$$Clone*/ func_0x01504c74(lVar14,0), lVar13 != 0)) {
        *(ulong *)(lVar13 + 0x30) = uVar15;
        return uVar15;
      }
    }
    pcVar21 = Atlas_Save_SaveManager__StartSave;
    auVar24 = func_0x00f78af4();
  }
  else {
    uVar15 = Atlas_Save_SaveData__get_IsValidSaveData();
    if ((uVar15 & 1) == 0) {
      if ((*(long *)(uVar7 + 0x98) == 0) ||
         (lVar11 = *(long *)(*(long *)(uVar7 + 0x98) + 0x48), lVar11 == 0)) goto code_r0x014eb554;
      /*Atlas.Analytics.AtlasAnalyticsEvents$$NewSaveGameEvent*/ func_0x01455860(lVar11,0);
    }
    Atlas_Save_SaveManager__UpdateDependantSaveDataFieldsPreSave(uVar7);
    auVar24._8_4_ = *(undefined4 *)(uVar7 + 0xf8);
    auVar24._0_8_ = uVar7;
    auVar24._12_4_ = 0;
    puVar20 = *(undefined1 **)((long)register0x00000008 + -0x10);
    pcVar21 = *(code **)((long)register0x00000008 + -8);
    lVar12 = *(long *)((long)register0x00000008 + -0x20);
    lVar11 = *(long *)((long)register0x00000008 + -0x18);
    puVar4 = (undefined1 *)register0x00000008;
  }
  lVar13 = auVar24._0_8_;
  *(ulong *)(puVar4 + -0x30) = unaff_x22;
  *(ulong *)(puVar4 + -0x28) = unaff_x21;
  *(long *)(puVar4 + -0x20) = lVar12;
  *(long *)(puVar4 + -0x18) = lVar11;
  *(undefined1 **)(puVar4 + -0x10) = puVar20;
  *(code **)(puVar4 + -8) = pcVar21;
  cVar3 = *(char *)(lVar13 + 0x50);
  if (cVar3 == '\0') {
    *(undefined1 *)(lVar13 + 0x50) = 1;
    Atlas_Save_SaveManager__SerializeSaveDataToSaveBuffer();
    uVar17 = Atlas_Save_SaveManager__AsyncSave(lVar13,auVar24._8_8_,0);
    *(undefined8 *)(lVar13 + 0x100) = uVar17;
    *(undefined4 *)(lVar13 + 0x54) = 0;
    *(undefined1 *)(lVar13 + 0x110) = 0;
  }
  return (ulong)(cVar3 == '\0');
}



// ============================================================
// RVA: 0x147c9d0 | Atlas.League.LeagueModeTester.TestPodium2ndPlace
// ============================================================

ulong Atlas_League_LeagueModeTester__TestPodium2ndPlace
                (long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  ulong unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 uVar16;
  ulong unaff_x22;
  int iVar17;
  int iVar18;
  undefined8 ****unaff_x29;
  undefined1 *puVar19;
  undefined *unaff_x30;
  code *pcVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auStack_1c0 [8];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 ***pppuStack_160;
  undefined *puStack_158;
  undefined8 ***pppuStack_110;
  undefined *puStack_108;
  undefined8 ***pppuStack_d0;
  undefined *puStack_c8;
  undefined8 ***pppuStack_90;
  undefined *puStack_88;
  undefined8 ***pppuStack_50;
  undefined *puStack_48;
  
  uVar14 = param_3;
  if ((bRam0000000003eb48c5 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d22e88);
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb48c5 = 1;
  }
  uVar6 = 0x3eb4000;
  if ((param_1 == 0) || (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(param_1), param_2 == 0)) {
LAB_0147cb50:
    unaff_x22 = uVar6;
    unaff_x21 = param_2;
    auVar23 = func_0x00f78af4();
    uVar6 = auVar23._8_8_;
    unaff_x20 = auVar23._0_8_;
    puStack_48 = &Atlas_League_LeagueModeTester__TestPodium6thPlace;
    unaff_x19 = uVar14;
    pppuStack_50 = (undefined8 ***)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb48c6 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c6 = 1;
    }
    uVar7 = 0x3eb4000;
    if ((unaff_x20 != 0) && (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(unaff_x20), uVar6 != 0)) {
      uVar16 = *(undefined8 *)(uVar6 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x19 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar16,uVar7);
      uVar16 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(unaff_x20,uVar16);
      /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(unaff_x20,1);
      uVar16 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(unaff_x20);
      /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(unaff_x20,uVar16);
      uVar6 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)uVar6) break;
        /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(unaff_x20,uVar6,5);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,uVar6,0,uVar14);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,uVar6,1,uVar14);
        unaff_x19 = 3;
        param_4 = uVar14;
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(2,uVar6);
        uVar6 = (ulong)((int)uVar6 + 1);
      }
      if (uVar14 != 0) {
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        uVar7 = uVar14;
        unaff_x19 = param_3;
        unaff_x20 = param_1;
        unaff_x29 = (undefined8 ****)pppuStack_50;
        unaff_x30 = puStack_48;
        goto code_r0x014eb4e0;
      }
    }
    unaff_x22 = uVar7;
    unaff_x21 = uVar6;
    auVar23 = func_0x00f78af4();
    uVar7 = auVar23._8_8_;
    lVar10 = auVar23._0_8_;
    puStack_88 = &Atlas_League_LeagueModeTester__TestPodium11thPlace;
    uVar6 = unaff_x19;
    pppuStack_90 = &pppuStack_50;
    if ((bRam0000000003eb48c7 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c7 = 1;
    }
    uVar8 = 0x3eb4000;
    if ((lVar10 != 0) && (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(lVar10), uVar7 != 0)) {
      uVar16 = *(undefined8 *)(uVar7 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar6 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar16,uVar8);
      uVar16 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(lVar10,uVar16);
      uVar16 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(lVar10);
      /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(lVar10,uVar16);
      /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(lVar10,1);
      uVar7 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)uVar7) break;
        /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(lVar10,uVar7,0xb);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,uVar7,0,unaff_x19);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,uVar7,1,unaff_x19);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,uVar7,0,unaff_x19);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,uVar7,1,unaff_x19);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(2,uVar7,2,unaff_x19);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(3,uVar7,3,unaff_x19);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(4,uVar7,4,unaff_x19);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(5,uVar7,5,unaff_x19);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(6,uVar7,6,unaff_x19);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(7,uVar7,7,unaff_x19);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(8,uVar7,8,unaff_x19);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(9,uVar7,9,unaff_x19);
        uVar6 = 0xb;
        param_4 = unaff_x19;
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0xb,uVar7);
        uVar7 = (ulong)((int)uVar7 + 1);
      }
      if (unaff_x19 != 0) {
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff80;
        uVar7 = unaff_x19;
        unaff_x19 = uVar14;
        unaff_x29 = (undefined8 ****)pppuStack_90;
        unaff_x30 = puStack_88;
        goto code_r0x014eb4e0;
      }
    }
    unaff_x22 = uVar8;
    unaff_x21 = uVar7;
    auVar23 = func_0x00f78af4();
    uVar14 = auVar23._8_8_;
    unaff_x20 = auVar23._0_8_;
    puStack_c8 = &Atlas_League_LeagueModeTester__TestPodium12thPlace;
    uVar7 = uVar6;
    pppuStack_d0 = &pppuStack_90;
    if ((bRam0000000003eb48c8 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c8 = 1;
    }
    uVar8 = 0x3eb4000;
    if ((unaff_x20 != 0) && (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(unaff_x20), uVar14 != 0)) {
      uVar16 = *(undefined8 *)(uVar14 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar16,uVar8);
      uVar16 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(unaff_x20,uVar16);
      uVar16 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(unaff_x20);
      /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(unaff_x20,uVar16);
      /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(unaff_x20,1);
      uVar14 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)uVar14) break;
        /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(unaff_x20,uVar14,0xc);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,uVar14,0,uVar6);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,uVar14,1,uVar6);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(2,uVar14,2,uVar6);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(3,uVar14,3,uVar6);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(4,uVar14,4,uVar6);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(5,uVar14,5,uVar6);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(6,uVar14,6,uVar6);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(7,uVar14,7,uVar6);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(8,uVar14,8,uVar6);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(9,uVar14,9,uVar6);
        uVar7 = 10;
        param_4 = uVar6;
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(10,uVar14);
        uVar14 = (ulong)((int)uVar14 + 1);
      }
      if (uVar6 != 0) {
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff40;
        uVar7 = uVar6;
        unaff_x20 = lVar10;
        unaff_x29 = (undefined8 ****)pppuStack_d0;
        unaff_x30 = puStack_c8;
        goto code_r0x014eb4e0;
      }
    }
    unaff_x22 = uVar8;
    unaff_x21 = uVar14;
    auVar23 = func_0x00f78af4();
    lVar10 = auVar23._0_8_;
    puStack_108 = &Atlas_League_LeagueModeTester__TestPodiumPlace;
    unaff_x19 = uVar7;
    uVar14 = param_4;
    pppuStack_110 = &pppuStack_d0;
    if ((bRam0000000003eb48c9 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c9 = 1;
    }
    if ((lVar10 != 0) && (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(lVar10), auVar23._8_8_ != 0)) {
      uVar16 = *(undefined8 *)(auVar23._8_8_ + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar9 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x19 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar16,uVar9);
      uVar16 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(lVar10,uVar16);
      uVar16 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(lVar10);
      /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(lVar10,uVar16);
      /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(lVar10,1);
      iVar15 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= iVar15) break;
        unaff_x19 = param_4;
        /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(lVar10,iVar15);
        uVar8 = 0;
        do {
          iVar17 = (int)uVar8;
          if ((int)param_4 + -1 != iVar17) {
            uVar14 = uVar7;
            Atlas_League_LeagueModeSave__SaveAIDayPlacement(uVar8,iVar15);
            unaff_x19 = uVar8;
          }
          uVar2 = iVar17 + 1;
          uVar8 = (ulong)uVar2;
        } while (uVar2 != 0xc);
        iVar15 = iVar15 + 1;
      }
      if (uVar7 != 0) {
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff00;
        unaff_x19 = uVar6;
        unaff_x29 = (undefined8 ****)pppuStack_110;
        unaff_x30 = puStack_108;
        goto code_r0x014eb4e0;
      }
    }
    auVar23 = func_0x00f78af4();
    lVar10 = auVar23._8_8_;
    unaff_x20 = auVar23._0_8_;
    puStack_158 = &Atlas_League_LeagueModeTester__TestPodiumAsIs;
    unaff_x29 = &pppuStack_160;
    unaff_x22 = 0x3eb4000;
    uVar7 = unaff_x19;
    pppuStack_160 = &pppuStack_110;
    if ((bRam0000000003eb48ca & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48ca = 1;
    }
    iVar15 = (int)uVar14;
    unaff_x21 = 0;
    if (lVar10 != 0) {
      uVar16 = *(undefined8 *)(lVar10 + 0x38);
      iVar17 = -7;
      uStack_1a8 = uVar16;
      iVar18 = 7;
      do {
        uStack_1b0 = uVar16;
        uStack_1a8 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0((double)iVar17,&uStack_1b0,0);
        iVar5 = /*System.DateTime$$get_DayOfWeek*/ func_0x02a8e2a0(&uStack_1a8,0);
        uVar9 = uStack_1a8;
        iVar15 = (int)uVar14;
        uVar16 = *(undefined8 *)(lVar10 + 0x38);
        if (iVar5 == 0) break;
        iVar17 = iVar17 + 1;
        bVar1 = 1 < iVar18;
        iVar18 = iVar18 + -1;
      } while (bVar1);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_1b8 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar16,uVar9,0);
      dVar21 = (double)/*System.TimeSpan$$get_TotalDays*/ func_0x029f0390(&uStack_1b8,0);
      dVar22 = -dVar21;
      if (dVar21 != INFINITY) {
        dVar22 = dVar21;
      }
      unaff_x22 = (ulong)(uint)(int)dVar22;
      unaff_x21 = *(ulong *)(lVar10 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar16 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)(int)dVar22,0);
      uVar7 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(unaff_x21,uVar16);
      uVar16 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      if (unaff_x20 != 0) {
        /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(unaff_x20,uVar16);
        uVar16 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(unaff_x20);
        /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(unaff_x20,uVar16);
        /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(unaff_x20,1);
        if (unaff_x19 != 0) {
          uVar14 = Atlas_Save_SaveManager__StartSave(unaff_x19,0);
          return uVar14;
        }
      }
    }
    auVar23 = func_0x00f78af4();
    lVar10 = auVar23._0_8_;
    if ((bRam0000000003eb48cb & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48cb = 1;
    }
    if (auVar23._8_8_ == 0) {
code_r0x0147d610:
      uVar14 = func_0x00f78af4();
      return uVar14;
    }
    uVar16 = *(undefined8 *)(auVar23._8_8_ + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar9 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)iVar15,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar16,uVar9,0);
    uVar16 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    if (lVar10 == 0) goto code_r0x0147d610;
    /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(lVar10,uVar16);
    /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(lVar10,uVar16);
    if (uVar7 == 0) goto code_r0x0147d610;
    unaff_x30 = &Atlas_League_LeagueModeTester__TestDecayDemotion;
    register0x00000008 = (BADSPACEBASE *)auStack_1c0;
  }
  else {
    uVar16 = *(undefined8 *)(param_2 + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar14 = 0;
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar16,uVar6);
    uVar16 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(param_1,uVar16);
    /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(param_1,1);
    uVar16 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(param_1);
    /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(param_1,uVar16);
    param_2 = 0;
    while( true ) {
      if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)param_2) break;
      /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(param_1,param_2,1);
      uVar14 = 0;
      param_4 = param_3;
      Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,param_2);
      param_2 = (ulong)((int)param_2 + 1);
    }
    uVar7 = param_3;
    if (param_3 == 0) goto LAB_0147cb50;
  }
code_r0x014eb4e0:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *****)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (*(char *)(uVar7 + 0x108) != '\0') {
    return 0;
  }
  *(undefined4 *)(uVar7 + 0x54) = 0;
  *(undefined1 *)(uVar7 + 0x110) = 0;
  lVar10 = Atlas_Save_SaveManager__get_SaveData(uVar7,0);
  if (lVar10 == 0) {
code_r0x014eb554:
    lVar10 = func_0x00f78af4();
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x50);
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x38) = uVar7;
    *(undefined1 **)((long)register0x00000008 + -0x30) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x28) =
         Atlas_Save_SaveManager__UpdateDependantSaveDataFieldsPreSave;
    puVar19 = (undefined1 *)((long)register0x00000008 + -0x30);
    unaff_x21 = 0x3d21070;
    if ((bRam0000000003eb4c42 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      bRam0000000003eb4c42 = 1;
    }
    lVar11 = Atlas_Save_SaveManager__get_SaveData(lVar10);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar16 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
    if (lVar11 != 0) {
      *(undefined8 *)(lVar11 + 0x18) = uVar16;
      lVar12 = Atlas_Save_SaveManager__get_SaveData(lVar10);
      if (((*(long *)(lVar10 + 0x58) != 0) &&
          (lVar13 = *(long *)(*(long *)(lVar10 + 0x58) + 0x10), lVar11 = lVar12, lVar13 != 0)) &&
         (uVar14 = /*Atlas.Stats.StatsData$$Clone*/ func_0x01504c74(lVar13,0), lVar12 != 0)) {
        *(ulong *)(lVar12 + 0x30) = uVar14;
        return uVar14;
      }
    }
    pcVar20 = Atlas_Save_SaveManager__StartSave;
    auVar23 = func_0x00f78af4();
  }
  else {
    uVar14 = Atlas_Save_SaveData__get_IsValidSaveData();
    if ((uVar14 & 1) == 0) {
      if ((*(long *)(uVar7 + 0x98) == 0) ||
         (lVar10 = *(long *)(*(long *)(uVar7 + 0x98) + 0x48), lVar10 == 0)) goto code_r0x014eb554;
      /*Atlas.Analytics.AtlasAnalyticsEvents$$NewSaveGameEvent*/ func_0x01455860(lVar10,0);
    }
    Atlas_Save_SaveManager__UpdateDependantSaveDataFieldsPreSave(uVar7);
    auVar23._8_4_ = *(undefined4 *)(uVar7 + 0xf8);
    auVar23._0_8_ = uVar7;
    auVar23._12_4_ = 0;
    puVar19 = *(undefined1 **)((long)register0x00000008 + -0x10);
    pcVar20 = *(code **)((long)register0x00000008 + -8);
    lVar11 = *(long *)((long)register0x00000008 + -0x20);
    lVar10 = *(long *)((long)register0x00000008 + -0x18);
    puVar4 = (undefined1 *)register0x00000008;
  }
  lVar12 = auVar23._0_8_;
  *(ulong *)(puVar4 + -0x30) = unaff_x22;
  *(ulong *)(puVar4 + -0x28) = unaff_x21;
  *(long *)(puVar4 + -0x20) = lVar11;
  *(long *)(puVar4 + -0x18) = lVar10;
  *(undefined1 **)(puVar4 + -0x10) = puVar19;
  *(code **)(puVar4 + -8) = pcVar20;
  cVar3 = *(char *)(lVar12 + 0x50);
  if (cVar3 == '\0') {
    *(undefined1 *)(lVar12 + 0x50) = 1;
    Atlas_Save_SaveManager__SerializeSaveDataToSaveBuffer();
    uVar16 = Atlas_Save_SaveManager__AsyncSave(lVar12,auVar23._8_8_,0);
    *(undefined8 *)(lVar12 + 0x100) = uVar16;
    *(undefined4 *)(lVar12 + 0x54) = 0;
    *(undefined1 *)(lVar12 + 0x110) = 0;
  }
  return (ulong)(cVar3 == '\0');
}



// ============================================================
// RVA: 0x147cb54 | Atlas.League.LeagueModeTester.TestPodium6thPlace
// ============================================================

ulong Atlas_League_LeagueModeTester__TestPodium6thPlace
                (long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  ulong unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 uVar16;
  ulong uVar17;
  ulong unaff_x22;
  int iVar18;
  int iVar19;
  undefined8 ****unaff_x29;
  undefined1 *puVar20;
  undefined *unaff_x30;
  code *pcVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auStack_180 [8];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 ***pppuStack_120;
  undefined *puStack_118;
  undefined8 ***pppuStack_d0;
  undefined *puStack_c8;
  undefined8 ***pppuStack_90;
  undefined *puStack_88;
  undefined8 ***pppuStack_50;
  undefined *puStack_48;
  
  uVar14 = param_3;
  if ((bRam0000000003eb48c6 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d22e88);
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb48c6 = 1;
  }
  uVar6 = 0x3eb4000;
  if ((param_1 == 0) || (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(param_1), param_2 == 0)) {
LAB_0147ccfc:
    unaff_x22 = uVar6;
    unaff_x21 = param_2;
    auVar24 = func_0x00f78af4();
    uVar17 = auVar24._8_8_;
    lVar10 = auVar24._0_8_;
    puStack_48 = &Atlas_League_LeagueModeTester__TestPodium11thPlace;
    uVar6 = uVar14;
    pppuStack_50 = (undefined8 ***)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb48c7 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c7 = 1;
    }
    uVar7 = 0x3eb4000;
    if ((lVar10 != 0) && (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(lVar10), uVar17 != 0)) {
      uVar16 = *(undefined8 *)(uVar17 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar6 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar16,uVar7);
      uVar16 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(lVar10,uVar16);
      uVar16 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(lVar10);
      /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(lVar10,uVar16);
      /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(lVar10,1);
      uVar17 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)uVar17) break;
        /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(lVar10,uVar17,0xb);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,uVar17,0,uVar14);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,uVar17,1,uVar14);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,uVar17,0,uVar14);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,uVar17,1,uVar14);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(2,uVar17,2,uVar14);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(3,uVar17,3,uVar14);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(4,uVar17,4,uVar14);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(5,uVar17,5,uVar14);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(6,uVar17,6,uVar14);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(7,uVar17,7,uVar14);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(8,uVar17,8,uVar14);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(9,uVar17,9,uVar14);
        uVar6 = 0xb;
        param_4 = uVar14;
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0xb,uVar17);
        uVar17 = (ulong)((int)uVar17 + 1);
      }
      if (uVar14 != 0) {
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        uVar17 = uVar14;
        unaff_x19 = param_3;
        unaff_x20 = param_1;
        unaff_x29 = (undefined8 ****)pppuStack_50;
        unaff_x30 = puStack_48;
        goto code_r0x014eb4e0;
      }
    }
    unaff_x22 = uVar7;
    unaff_x21 = uVar17;
    auVar24 = func_0x00f78af4();
    uVar7 = auVar24._8_8_;
    unaff_x20 = auVar24._0_8_;
    puStack_88 = &Atlas_League_LeagueModeTester__TestPodium12thPlace;
    uVar17 = uVar6;
    pppuStack_90 = &pppuStack_50;
    if ((bRam0000000003eb48c8 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c8 = 1;
    }
    uVar8 = 0x3eb4000;
    if ((unaff_x20 != 0) && (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(unaff_x20), uVar7 != 0)) {
      uVar16 = *(undefined8 *)(uVar7 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar17 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar16,uVar8);
      uVar16 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(unaff_x20,uVar16);
      uVar16 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(unaff_x20);
      /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(unaff_x20,uVar16);
      /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(unaff_x20,1);
      uVar7 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)uVar7) break;
        /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(unaff_x20,uVar7,0xc);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,uVar7,0,uVar6);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,uVar7,1,uVar6);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(2,uVar7,2,uVar6);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(3,uVar7,3,uVar6);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(4,uVar7,4,uVar6);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(5,uVar7,5,uVar6);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(6,uVar7,6,uVar6);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(7,uVar7,7,uVar6);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(8,uVar7,8,uVar6);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(9,uVar7,9,uVar6);
        uVar17 = 10;
        param_4 = uVar6;
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(10,uVar7);
        uVar7 = (ulong)((int)uVar7 + 1);
      }
      if (uVar6 != 0) {
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff80;
        uVar17 = uVar6;
        unaff_x19 = uVar14;
        unaff_x20 = lVar10;
        unaff_x29 = (undefined8 ****)pppuStack_90;
        unaff_x30 = puStack_88;
        goto code_r0x014eb4e0;
      }
    }
    unaff_x22 = uVar8;
    unaff_x21 = uVar7;
    auVar24 = func_0x00f78af4();
    lVar10 = auVar24._0_8_;
    puStack_c8 = &Atlas_League_LeagueModeTester__TestPodiumPlace;
    unaff_x19 = uVar17;
    uVar14 = param_4;
    pppuStack_d0 = &pppuStack_90;
    if ((bRam0000000003eb48c9 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c9 = 1;
    }
    if ((lVar10 != 0) && (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(lVar10), auVar24._8_8_ != 0)) {
      uVar16 = *(undefined8 *)(auVar24._8_8_ + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar9 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x19 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar16,uVar9);
      uVar16 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(lVar10,uVar16);
      uVar16 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(lVar10);
      /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(lVar10,uVar16);
      /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(lVar10,1);
      iVar15 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= iVar15) break;
        unaff_x19 = param_4;
        /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(lVar10,iVar15);
        uVar7 = 0;
        do {
          iVar18 = (int)uVar7;
          if ((int)param_4 + -1 != iVar18) {
            uVar14 = uVar17;
            Atlas_League_LeagueModeSave__SaveAIDayPlacement(uVar7,iVar15);
            unaff_x19 = uVar7;
          }
          uVar2 = iVar18 + 1;
          uVar7 = (ulong)uVar2;
        } while (uVar2 != 0xc);
        iVar15 = iVar15 + 1;
      }
      if (uVar17 != 0) {
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff40;
        unaff_x19 = uVar6;
        unaff_x29 = (undefined8 ****)pppuStack_d0;
        unaff_x30 = puStack_c8;
        goto code_r0x014eb4e0;
      }
    }
    auVar24 = func_0x00f78af4();
    lVar10 = auVar24._8_8_;
    unaff_x20 = auVar24._0_8_;
    puStack_118 = &Atlas_League_LeagueModeTester__TestPodiumAsIs;
    unaff_x29 = &pppuStack_120;
    unaff_x22 = 0x3eb4000;
    uVar17 = unaff_x19;
    pppuStack_120 = &pppuStack_d0;
    if ((bRam0000000003eb48ca & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48ca = 1;
    }
    iVar15 = (int)uVar14;
    unaff_x21 = 0;
    if (lVar10 != 0) {
      uVar16 = *(undefined8 *)(lVar10 + 0x38);
      iVar18 = -7;
      uStack_168 = uVar16;
      iVar19 = 7;
      do {
        uStack_170 = uVar16;
        uStack_168 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0((double)iVar18,&uStack_170,0);
        iVar5 = /*System.DateTime$$get_DayOfWeek*/ func_0x02a8e2a0(&uStack_168,0);
        uVar9 = uStack_168;
        iVar15 = (int)uVar14;
        uVar16 = *(undefined8 *)(lVar10 + 0x38);
        if (iVar5 == 0) break;
        iVar18 = iVar18 + 1;
        bVar1 = 1 < iVar19;
        iVar19 = iVar19 + -1;
      } while (bVar1);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_178 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar16,uVar9,0);
      dVar22 = (double)/*System.TimeSpan$$get_TotalDays*/ func_0x029f0390(&uStack_178,0);
      dVar23 = -dVar22;
      if (dVar22 != INFINITY) {
        dVar23 = dVar22;
      }
      unaff_x22 = (ulong)(uint)(int)dVar23;
      unaff_x21 = *(ulong *)(lVar10 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar16 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)(int)dVar23,0);
      uVar17 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(unaff_x21,uVar16);
      uVar16 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      if (unaff_x20 != 0) {
        /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(unaff_x20,uVar16);
        uVar16 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(unaff_x20);
        /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(unaff_x20,uVar16);
        /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(unaff_x20,1);
        if (unaff_x19 != 0) {
          uVar14 = Atlas_Save_SaveManager__StartSave(unaff_x19,0);
          return uVar14;
        }
      }
    }
    auVar24 = func_0x00f78af4();
    lVar10 = auVar24._0_8_;
    if ((bRam0000000003eb48cb & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48cb = 1;
    }
    if (auVar24._8_8_ == 0) {
code_r0x0147d610:
      uVar14 = func_0x00f78af4();
      return uVar14;
    }
    uVar16 = *(undefined8 *)(auVar24._8_8_ + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar9 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)iVar15,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar16,uVar9,0);
    uVar16 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    if (lVar10 == 0) goto code_r0x0147d610;
    /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(lVar10,uVar16);
    /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(lVar10,uVar16);
    if (uVar17 == 0) goto code_r0x0147d610;
    unaff_x30 = &Atlas_League_LeagueModeTester__TestDecayDemotion;
    register0x00000008 = (BADSPACEBASE *)auStack_180;
  }
  else {
    uVar16 = *(undefined8 *)(param_2 + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar14 = 0;
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar16,uVar6);
    uVar16 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(param_1,uVar16);
    /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(param_1,1);
    uVar16 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(param_1);
    /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(param_1,uVar16);
    param_2 = 0;
    while( true ) {
      if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)param_2) break;
      /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(param_1,param_2,5);
      Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,param_2,0,param_3);
      Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,param_2,1,param_3);
      uVar14 = 3;
      param_4 = param_3;
      Atlas_League_LeagueModeSave__SaveAIDayPlacement(2,param_2);
      param_2 = (ulong)((int)param_2 + 1);
    }
    uVar17 = param_3;
    if (param_3 == 0) goto LAB_0147ccfc;
  }
code_r0x014eb4e0:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *****)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (*(char *)(uVar17 + 0x108) != '\0') {
    return 0;
  }
  *(undefined4 *)(uVar17 + 0x54) = 0;
  *(undefined1 *)(uVar17 + 0x110) = 0;
  lVar10 = Atlas_Save_SaveManager__get_SaveData(uVar17,0);
  if (lVar10 == 0) {
code_r0x014eb554:
    lVar10 = func_0x00f78af4();
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x50);
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x38) = uVar17;
    *(undefined1 **)((long)register0x00000008 + -0x30) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x28) =
         Atlas_Save_SaveManager__UpdateDependantSaveDataFieldsPreSave;
    puVar20 = (undefined1 *)((long)register0x00000008 + -0x30);
    unaff_x21 = 0x3d21070;
    if ((bRam0000000003eb4c42 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      bRam0000000003eb4c42 = 1;
    }
    lVar11 = Atlas_Save_SaveManager__get_SaveData(lVar10);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar16 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
    if (lVar11 != 0) {
      *(undefined8 *)(lVar11 + 0x18) = uVar16;
      lVar12 = Atlas_Save_SaveManager__get_SaveData(lVar10);
      if (((*(long *)(lVar10 + 0x58) != 0) &&
          (lVar13 = *(long *)(*(long *)(lVar10 + 0x58) + 0x10), lVar11 = lVar12, lVar13 != 0)) &&
         (uVar14 = /*Atlas.Stats.StatsData$$Clone*/ func_0x01504c74(lVar13,0), lVar12 != 0)) {
        *(ulong *)(lVar12 + 0x30) = uVar14;
        return uVar14;
      }
    }
    pcVar21 = Atlas_Save_SaveManager__StartSave;
    auVar24 = func_0x00f78af4();
  }
  else {
    uVar14 = Atlas_Save_SaveData__get_IsValidSaveData();
    if ((uVar14 & 1) == 0) {
      if ((*(long *)(uVar17 + 0x98) == 0) ||
         (lVar10 = *(long *)(*(long *)(uVar17 + 0x98) + 0x48), lVar10 == 0)) goto code_r0x014eb554;
      /*Atlas.Analytics.AtlasAnalyticsEvents$$NewSaveGameEvent*/ func_0x01455860(lVar10,0);
    }
    Atlas_Save_SaveManager__UpdateDependantSaveDataFieldsPreSave(uVar17);
    auVar24._8_4_ = *(undefined4 *)(uVar17 + 0xf8);
    auVar24._0_8_ = uVar17;
    auVar24._12_4_ = 0;
    puVar20 = *(undefined1 **)((long)register0x00000008 + -0x10);
    pcVar21 = *(code **)((long)register0x00000008 + -8);
    lVar11 = *(long *)((long)register0x00000008 + -0x20);
    lVar10 = *(long *)((long)register0x00000008 + -0x18);
    puVar4 = (undefined1 *)register0x00000008;
  }
  lVar12 = auVar24._0_8_;
  *(ulong *)(puVar4 + -0x30) = unaff_x22;
  *(ulong *)(puVar4 + -0x28) = unaff_x21;
  *(long *)(puVar4 + -0x20) = lVar11;
  *(long *)(puVar4 + -0x18) = lVar10;
  *(undefined1 **)(puVar4 + -0x10) = puVar20;
  *(code **)(puVar4 + -8) = pcVar21;
  cVar3 = *(char *)(lVar12 + 0x50);
  if (cVar3 == '\0') {
    *(undefined1 *)(lVar12 + 0x50) = 1;
    Atlas_Save_SaveManager__SerializeSaveDataToSaveBuffer();
    uVar16 = Atlas_Save_SaveManager__AsyncSave(lVar12,auVar24._8_8_,0);
    *(undefined8 *)(lVar12 + 0x100) = uVar16;
    *(undefined4 *)(lVar12 + 0x54) = 0;
    *(undefined1 *)(lVar12 + 0x110) = 0;
  }
  return (ulong)(cVar3 == '\0');
}



// ============================================================
// RVA: 0x147cd00 | Atlas.League.LeagueModeTester.TestPodium11thPlace
// ============================================================

ulong Atlas_League_LeagueModeTester__TestPodium11thPlace
                (long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  ulong unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 uVar16;
  ulong unaff_x22;
  int iVar17;
  int iVar18;
  undefined8 ****unaff_x29;
  undefined1 *puVar19;
  undefined *unaff_x30;
  code *pcVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auStack_140 [8];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined8 ***pppuStack_90;
  undefined *puStack_88;
  undefined8 ***pppuStack_50;
  undefined *puStack_48;
  
  uVar13 = param_3;
  if ((bRam0000000003eb48c7 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d22e88);
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb48c7 = 1;
  }
  uVar6 = 0x3eb4000;
  if ((param_1 == 0) || (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(param_1), param_2 == 0)) {
LAB_0147cf70:
    unaff_x22 = uVar6;
    unaff_x21 = param_2;
    auVar23 = func_0x00f78af4();
    uVar6 = auVar23._8_8_;
    unaff_x20 = auVar23._0_8_;
    puStack_48 = &Atlas_League_LeagueModeTester__TestPodium12thPlace;
    uVar14 = uVar13;
    pppuStack_50 = (undefined8 ***)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb48c8 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c8 = 1;
    }
    uVar7 = 0x3eb4000;
    if ((unaff_x20 != 0) && (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(unaff_x20), uVar6 != 0)) {
      uVar16 = *(undefined8 *)(uVar6 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar14 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar16,uVar7);
      uVar16 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(unaff_x20,uVar16);
      uVar16 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(unaff_x20);
      /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(unaff_x20,uVar16);
      /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(unaff_x20,1);
      uVar6 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)uVar6) break;
        /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(unaff_x20,uVar6,0xc);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,uVar6,0,uVar13);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,uVar6,1,uVar13);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(2,uVar6,2,uVar13);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(3,uVar6,3,uVar13);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(4,uVar6,4,uVar13);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(5,uVar6,5,uVar13);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(6,uVar6,6,uVar13);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(7,uVar6,7,uVar13);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(8,uVar6,8,uVar13);
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(9,uVar6,9,uVar13);
        uVar14 = 10;
        param_4 = uVar13;
        Atlas_League_LeagueModeSave__SaveAIDayPlacement(10,uVar6);
        uVar6 = (ulong)((int)uVar6 + 1);
      }
      if (uVar13 != 0) {
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        uVar14 = uVar13;
        unaff_x19 = param_3;
        unaff_x20 = param_1;
        unaff_x29 = (undefined8 ****)pppuStack_50;
        unaff_x30 = puStack_48;
        goto code_r0x014eb4e0;
      }
    }
    unaff_x22 = uVar7;
    unaff_x21 = uVar6;
    auVar23 = func_0x00f78af4();
    lVar9 = auVar23._0_8_;
    puStack_88 = &Atlas_League_LeagueModeTester__TestPodiumPlace;
    unaff_x19 = uVar14;
    uVar6 = param_4;
    pppuStack_90 = &pppuStack_50;
    if ((bRam0000000003eb48c9 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c9 = 1;
    }
    if ((lVar9 != 0) && (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(lVar9), auVar23._8_8_ != 0)) {
      uVar16 = *(undefined8 *)(auVar23._8_8_ + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x19 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar16,uVar8);
      uVar16 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(lVar9,uVar16);
      uVar16 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(lVar9);
      /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(lVar9,uVar16);
      /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(lVar9,1);
      iVar15 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= iVar15) break;
        unaff_x19 = param_4;
        /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(lVar9,iVar15);
        uVar7 = 0;
        do {
          iVar17 = (int)uVar7;
          if ((int)param_4 + -1 != iVar17) {
            uVar6 = uVar14;
            Atlas_League_LeagueModeSave__SaveAIDayPlacement(uVar7,iVar15);
            unaff_x19 = uVar7;
          }
          uVar2 = iVar17 + 1;
          uVar7 = (ulong)uVar2;
        } while (uVar2 != 0xc);
        iVar15 = iVar15 + 1;
      }
      if (uVar14 != 0) {
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff80;
        unaff_x19 = uVar13;
        unaff_x29 = (undefined8 ****)pppuStack_90;
        unaff_x30 = puStack_88;
        goto code_r0x014eb4e0;
      }
    }
    auVar23 = func_0x00f78af4();
    lVar9 = auVar23._8_8_;
    unaff_x20 = auVar23._0_8_;
    puStack_d8 = &Atlas_League_LeagueModeTester__TestPodiumAsIs;
    unaff_x29 = &pppuStack_e0;
    unaff_x22 = 0x3eb4000;
    uVar14 = unaff_x19;
    pppuStack_e0 = &pppuStack_90;
    if ((bRam0000000003eb48ca & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48ca = 1;
    }
    iVar15 = (int)uVar6;
    unaff_x21 = 0;
    if (lVar9 != 0) {
      uVar16 = *(undefined8 *)(lVar9 + 0x38);
      iVar17 = -7;
      uStack_128 = uVar16;
      iVar18 = 7;
      do {
        uStack_130 = uVar16;
        uStack_128 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0((double)iVar17,&uStack_130,0);
        iVar5 = /*System.DateTime$$get_DayOfWeek*/ func_0x02a8e2a0(&uStack_128,0);
        uVar8 = uStack_128;
        iVar15 = (int)uVar6;
        uVar16 = *(undefined8 *)(lVar9 + 0x38);
        if (iVar5 == 0) break;
        iVar17 = iVar17 + 1;
        bVar1 = 1 < iVar18;
        iVar18 = iVar18 + -1;
      } while (bVar1);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_138 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar16,uVar8,0);
      dVar21 = (double)/*System.TimeSpan$$get_TotalDays*/ func_0x029f0390(&uStack_138,0);
      dVar22 = -dVar21;
      if (dVar21 != INFINITY) {
        dVar22 = dVar21;
      }
      unaff_x22 = (ulong)(uint)(int)dVar22;
      unaff_x21 = *(ulong *)(lVar9 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar16 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)(int)dVar22,0);
      uVar14 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(unaff_x21,uVar16);
      uVar16 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      if (unaff_x20 != 0) {
        /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(unaff_x20,uVar16);
        uVar16 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(unaff_x20);
        /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(unaff_x20,uVar16);
        /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(unaff_x20,1);
        if (unaff_x19 != 0) {
          uVar13 = Atlas_Save_SaveManager__StartSave(unaff_x19,0);
          return uVar13;
        }
      }
    }
    auVar23 = func_0x00f78af4();
    lVar9 = auVar23._0_8_;
    if ((bRam0000000003eb48cb & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48cb = 1;
    }
    if (auVar23._8_8_ == 0) {
code_r0x0147d610:
      uVar13 = func_0x00f78af4();
      return uVar13;
    }
    uVar16 = *(undefined8 *)(auVar23._8_8_ + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)iVar15,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar16,uVar8,0);
    uVar16 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    if (lVar9 == 0) goto code_r0x0147d610;
    /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(lVar9,uVar16);
    /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(lVar9,uVar16);
    if (uVar14 == 0) goto code_r0x0147d610;
    unaff_x30 = &Atlas_League_LeagueModeTester__TestDecayDemotion;
    register0x00000008 = (BADSPACEBASE *)auStack_140;
  }
  else {
    uVar16 = *(undefined8 *)(param_2 + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar13 = 0;
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar16,uVar6);
    uVar16 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(param_1,uVar16);
    uVar16 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(param_1);
    /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(param_1,uVar16);
    /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(param_1,1);
    param_2 = 0;
    while( true ) {
      if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)param_2) break;
      /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(param_1,param_2,0xb);
      Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,param_2,0,param_3);
      Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,param_2,1,param_3);
      Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,param_2,0,param_3);
      Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,param_2,1,param_3);
      Atlas_League_LeagueModeSave__SaveAIDayPlacement(2,param_2,2,param_3);
      Atlas_League_LeagueModeSave__SaveAIDayPlacement(3,param_2,3,param_3);
      Atlas_League_LeagueModeSave__SaveAIDayPlacement(4,param_2,4,param_3);
      Atlas_League_LeagueModeSave__SaveAIDayPlacement(5,param_2,5,param_3);
      Atlas_League_LeagueModeSave__SaveAIDayPlacement(6,param_2,6,param_3);
      Atlas_League_LeagueModeSave__SaveAIDayPlacement(7,param_2,7,param_3);
      Atlas_League_LeagueModeSave__SaveAIDayPlacement(8,param_2,8,param_3);
      Atlas_League_LeagueModeSave__SaveAIDayPlacement(9,param_2,9,param_3);
      uVar13 = 0xb;
      param_4 = param_3;
      Atlas_League_LeagueModeSave__SaveAIDayPlacement(0xb,param_2);
      param_2 = (ulong)((int)param_2 + 1);
    }
    uVar14 = param_3;
    if (param_3 == 0) goto LAB_0147cf70;
  }
code_r0x014eb4e0:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *****)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (*(char *)(uVar14 + 0x108) != '\0') {
    return 0;
  }
  *(undefined4 *)(uVar14 + 0x54) = 0;
  *(undefined1 *)(uVar14 + 0x110) = 0;
  lVar9 = Atlas_Save_SaveManager__get_SaveData(uVar14,0);
  if (lVar9 == 0) {
code_r0x014eb554:
    lVar9 = func_0x00f78af4();
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x50);
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x38) = uVar14;
    *(undefined1 **)((long)register0x00000008 + -0x30) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x28) =
         Atlas_Save_SaveManager__UpdateDependantSaveDataFieldsPreSave;
    puVar19 = (undefined1 *)((long)register0x00000008 + -0x30);
    unaff_x21 = 0x3d21070;
    if ((bRam0000000003eb4c42 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      bRam0000000003eb4c42 = 1;
    }
    lVar10 = Atlas_Save_SaveManager__get_SaveData(lVar9);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar16 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
    if (lVar10 != 0) {
      *(undefined8 *)(lVar10 + 0x18) = uVar16;
      lVar11 = Atlas_Save_SaveManager__get_SaveData(lVar9);
      if (((*(long *)(lVar9 + 0x58) != 0) &&
          (lVar12 = *(long *)(*(long *)(lVar9 + 0x58) + 0x10), lVar10 = lVar11, lVar12 != 0)) &&
         (uVar13 = /*Atlas.Stats.StatsData$$Clone*/ func_0x01504c74(lVar12,0), lVar11 != 0)) {
        *(ulong *)(lVar11 + 0x30) = uVar13;
        return uVar13;
      }
    }
    pcVar20 = Atlas_Save_SaveManager__StartSave;
    auVar23 = func_0x00f78af4();
  }
  else {
    uVar13 = Atlas_Save_SaveData__get_IsValidSaveData();
    if ((uVar13 & 1) == 0) {
      if ((*(long *)(uVar14 + 0x98) == 0) ||
         (lVar9 = *(long *)(*(long *)(uVar14 + 0x98) + 0x48), lVar9 == 0)) goto code_r0x014eb554;
      /*Atlas.Analytics.AtlasAnalyticsEvents$$NewSaveGameEvent*/ func_0x01455860(lVar9,0);
    }
    Atlas_Save_SaveManager__UpdateDependantSaveDataFieldsPreSave(uVar14);
    auVar23._8_4_ = *(undefined4 *)(uVar14 + 0xf8);
    auVar23._0_8_ = uVar14;
    auVar23._12_4_ = 0;
    puVar19 = *(undefined1 **)((long)register0x00000008 + -0x10);
    pcVar20 = *(code **)((long)register0x00000008 + -8);
    lVar10 = *(long *)((long)register0x00000008 + -0x20);
    lVar9 = *(long *)((long)register0x00000008 + -0x18);
    puVar4 = (undefined1 *)register0x00000008;
  }
  lVar11 = auVar23._0_8_;
  *(ulong *)(puVar4 + -0x30) = unaff_x22;
  *(ulong *)(puVar4 + -0x28) = unaff_x21;
  *(long *)(puVar4 + -0x20) = lVar10;
  *(long *)(puVar4 + -0x18) = lVar9;
  *(undefined1 **)(puVar4 + -0x10) = puVar19;
  *(code **)(puVar4 + -8) = pcVar20;
  cVar3 = *(char *)(lVar11 + 0x50);
  if (cVar3 == '\0') {
    *(undefined1 *)(lVar11 + 0x50) = 1;
    Atlas_Save_SaveManager__SerializeSaveDataToSaveBuffer();
    uVar16 = Atlas_Save_SaveManager__AsyncSave(lVar11,auVar23._8_8_,0);
    *(undefined8 *)(lVar11 + 0x100) = uVar16;
    *(undefined4 *)(lVar11 + 0x54) = 0;
    *(undefined1 *)(lVar11 + 0x110) = 0;
  }
  return (ulong)(cVar3 == '\0');
}



// ============================================================
// RVA: 0x147cf74 | Atlas.League.LeagueModeTester.TestPodium12thPlace
// ============================================================

ulong Atlas_League_LeagueModeTester__TestPodium12thPlace
                (long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  ulong unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 uVar14;
  ulong unaff_x22;
  int iVar15;
  ulong uVar16;
  int iVar17;
  undefined8 ****unaff_x29;
  undefined1 *puVar18;
  undefined *unaff_x30;
  code *pcVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 ***pppuStack_50;
  undefined *puStack_48;
  
  uVar12 = param_3;
  if ((bRam0000000003eb48c8 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d22e88);
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb48c8 = 1;
  }
  uVar6 = 0x3eb4000;
  if ((param_1 == 0) || (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(param_1), param_2 == 0)) {
LAB_0147d1bc:
    unaff_x22 = uVar6;
    unaff_x21 = param_2;
    auVar22 = func_0x00f78af4();
    lVar8 = auVar22._0_8_;
    puStack_48 = &Atlas_League_LeagueModeTester__TestPodiumPlace;
    unaff_x19 = uVar12;
    uVar6 = param_4;
    pppuStack_50 = (undefined8 ***)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb48c9 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48c9 = 1;
    }
    if ((lVar8 != 0) && (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(lVar8), auVar22._8_8_ != 0)) {
      uVar14 = *(undefined8 *)(auVar22._8_8_ + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x19 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar14,uVar7);
      uVar14 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(lVar8,uVar14);
      uVar14 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(lVar8);
      /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(lVar8,uVar14);
      /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(lVar8,1);
      iVar13 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= iVar13) break;
        unaff_x19 = param_4;
        /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(lVar8,iVar13);
        uVar16 = 0;
        do {
          iVar15 = (int)uVar16;
          if ((int)param_4 + -1 != iVar15) {
            uVar6 = uVar12;
            Atlas_League_LeagueModeSave__SaveAIDayPlacement(uVar16,iVar13);
            unaff_x19 = uVar16;
          }
          uVar2 = iVar15 + 1;
          uVar16 = (ulong)uVar2;
        } while (uVar2 != 0xc);
        iVar13 = iVar13 + 1;
      }
      if (uVar12 != 0) {
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        uVar16 = uVar12;
        unaff_x19 = param_3;
        unaff_x20 = param_1;
        unaff_x29 = (undefined8 ****)pppuStack_50;
        unaff_x30 = puStack_48;
        goto code_r0x014eb4e0;
      }
    }
    auVar22 = func_0x00f78af4();
    lVar8 = auVar22._8_8_;
    unaff_x20 = auVar22._0_8_;
    puStack_98 = &Atlas_League_LeagueModeTester__TestPodiumAsIs;
    unaff_x29 = &pppuStack_a0;
    unaff_x22 = 0x3eb4000;
    uVar16 = unaff_x19;
    pppuStack_a0 = &pppuStack_50;
    if ((bRam0000000003eb48ca & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48ca = 1;
    }
    iVar13 = (int)uVar6;
    unaff_x21 = 0;
    if (lVar8 != 0) {
      uVar14 = *(undefined8 *)(lVar8 + 0x38);
      iVar15 = -7;
      uStack_e8 = uVar14;
      iVar17 = 7;
      do {
        uStack_f0 = uVar14;
        uStack_e8 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0((double)iVar15,&uStack_f0,0);
        iVar5 = /*System.DateTime$$get_DayOfWeek*/ func_0x02a8e2a0(&uStack_e8,0);
        uVar7 = uStack_e8;
        iVar13 = (int)uVar6;
        uVar14 = *(undefined8 *)(lVar8 + 0x38);
        if (iVar5 == 0) break;
        iVar15 = iVar15 + 1;
        bVar1 = 1 < iVar17;
        iVar17 = iVar17 + -1;
      } while (bVar1);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_f8 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar14,uVar7,0);
      dVar20 = (double)/*System.TimeSpan$$get_TotalDays*/ func_0x029f0390(&uStack_f8,0);
      dVar21 = -dVar20;
      if (dVar20 != INFINITY) {
        dVar21 = dVar20;
      }
      unaff_x22 = (ulong)(uint)(int)dVar21;
      unaff_x21 = *(ulong *)(lVar8 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar14 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)(int)dVar21,0);
      uVar16 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(unaff_x21,uVar14);
      uVar14 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      if (unaff_x20 != 0) {
        /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(unaff_x20,uVar14);
        uVar14 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(unaff_x20);
        /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(unaff_x20,uVar14);
        /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(unaff_x20,1);
        if (unaff_x19 != 0) {
          uVar12 = Atlas_Save_SaveManager__StartSave(unaff_x19,0);
          return uVar12;
        }
      }
    }
    auVar22 = func_0x00f78af4();
    lVar8 = auVar22._0_8_;
    if ((bRam0000000003eb48cb & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48cb = 1;
    }
    if (auVar22._8_8_ == 0) {
code_r0x0147d610:
      uVar12 = func_0x00f78af4();
      return uVar12;
    }
    uVar14 = *(undefined8 *)(auVar22._8_8_ + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)iVar13,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar14,uVar7,0);
    uVar14 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    if (lVar8 == 0) goto code_r0x0147d610;
    /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(lVar8,uVar14);
    /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(lVar8,uVar14);
    if (uVar16 == 0) goto code_r0x0147d610;
    unaff_x30 = &Atlas_League_LeagueModeTester__TestDecayDemotion;
    register0x00000008 = (BADSPACEBASE *)auStack_100;
  }
  else {
    uVar14 = *(undefined8 *)(param_2 + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar12 = 0;
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar14,uVar6);
    uVar14 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(param_1,uVar14);
    uVar14 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(param_1);
    /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(param_1,uVar14);
    /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(param_1,1);
    param_2 = 0;
    while( true ) {
      if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= (int)param_2) break;
      /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(param_1,param_2,0xc);
      Atlas_League_LeagueModeSave__SaveAIDayPlacement(0,param_2,0,param_3);
      Atlas_League_LeagueModeSave__SaveAIDayPlacement(1,param_2,1,param_3);
      Atlas_League_LeagueModeSave__SaveAIDayPlacement(2,param_2,2,param_3);
      Atlas_League_LeagueModeSave__SaveAIDayPlacement(3,param_2,3,param_3);
      Atlas_League_LeagueModeSave__SaveAIDayPlacement(4,param_2,4,param_3);
      Atlas_League_LeagueModeSave__SaveAIDayPlacement(5,param_2,5,param_3);
      Atlas_League_LeagueModeSave__SaveAIDayPlacement(6,param_2,6,param_3);
      Atlas_League_LeagueModeSave__SaveAIDayPlacement(7,param_2,7,param_3);
      Atlas_League_LeagueModeSave__SaveAIDayPlacement(8,param_2,8,param_3);
      Atlas_League_LeagueModeSave__SaveAIDayPlacement(9,param_2,9,param_3);
      uVar12 = 10;
      param_4 = param_3;
      Atlas_League_LeagueModeSave__SaveAIDayPlacement(10,param_2);
      param_2 = (ulong)((int)param_2 + 1);
    }
    uVar16 = param_3;
    if (param_3 == 0) goto LAB_0147d1bc;
  }
code_r0x014eb4e0:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *****)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (*(char *)(uVar16 + 0x108) != '\0') {
    return 0;
  }
  *(undefined4 *)(uVar16 + 0x54) = 0;
  *(undefined1 *)(uVar16 + 0x110) = 0;
  lVar8 = Atlas_Save_SaveManager__get_SaveData(uVar16,0);
  if (lVar8 == 0) {
code_r0x014eb554:
    lVar8 = func_0x00f78af4();
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x50);
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x38) = uVar16;
    *(undefined1 **)((long)register0x00000008 + -0x30) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x28) =
         Atlas_Save_SaveManager__UpdateDependantSaveDataFieldsPreSave;
    puVar18 = (undefined1 *)((long)register0x00000008 + -0x30);
    unaff_x21 = 0x3d21070;
    if ((bRam0000000003eb4c42 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      bRam0000000003eb4c42 = 1;
    }
    lVar9 = Atlas_Save_SaveManager__get_SaveData(lVar8);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar14 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
    if (lVar9 != 0) {
      *(undefined8 *)(lVar9 + 0x18) = uVar14;
      lVar10 = Atlas_Save_SaveManager__get_SaveData(lVar8);
      if (((*(long *)(lVar8 + 0x58) != 0) &&
          (lVar11 = *(long *)(*(long *)(lVar8 + 0x58) + 0x10), lVar9 = lVar10, lVar11 != 0)) &&
         (uVar12 = /*Atlas.Stats.StatsData$$Clone*/ func_0x01504c74(lVar11,0), lVar10 != 0)) {
        *(ulong *)(lVar10 + 0x30) = uVar12;
        return uVar12;
      }
    }
    pcVar19 = Atlas_Save_SaveManager__StartSave;
    auVar22 = func_0x00f78af4();
  }
  else {
    uVar12 = Atlas_Save_SaveData__get_IsValidSaveData();
    if ((uVar12 & 1) == 0) {
      if ((*(long *)(uVar16 + 0x98) == 0) ||
         (lVar8 = *(long *)(*(long *)(uVar16 + 0x98) + 0x48), lVar8 == 0)) goto code_r0x014eb554;
      /*Atlas.Analytics.AtlasAnalyticsEvents$$NewSaveGameEvent*/ func_0x01455860(lVar8,0);
    }
    Atlas_Save_SaveManager__UpdateDependantSaveDataFieldsPreSave(uVar16);
    auVar22._8_4_ = *(undefined4 *)(uVar16 + 0xf8);
    auVar22._0_8_ = uVar16;
    auVar22._12_4_ = 0;
    puVar18 = *(undefined1 **)((long)register0x00000008 + -0x10);
    pcVar19 = *(code **)((long)register0x00000008 + -8);
    lVar9 = *(long *)((long)register0x00000008 + -0x20);
    lVar8 = *(long *)((long)register0x00000008 + -0x18);
    puVar4 = (undefined1 *)register0x00000008;
  }
  lVar10 = auVar22._0_8_;
  *(ulong *)(puVar4 + -0x30) = unaff_x22;
  *(ulong *)(puVar4 + -0x28) = unaff_x21;
  *(long *)(puVar4 + -0x20) = lVar9;
  *(long *)(puVar4 + -0x18) = lVar8;
  *(undefined1 **)(puVar4 + -0x10) = puVar18;
  *(code **)(puVar4 + -8) = pcVar19;
  cVar3 = *(char *)(lVar10 + 0x50);
  if (cVar3 == '\0') {
    *(undefined1 *)(lVar10 + 0x50) = 1;
    Atlas_Save_SaveManager__SerializeSaveDataToSaveBuffer();
    uVar14 = Atlas_Save_SaveManager__AsyncSave(lVar10,auVar22._8_8_,0);
    *(undefined8 *)(lVar10 + 0x100) = uVar14;
    *(undefined4 *)(lVar10 + 0x54) = 0;
    *(undefined1 *)(lVar10 + 0x110) = 0;
  }
  return (ulong)(cVar3 == '\0');
}



// ============================================================
// RVA: 0x147d1c0 | Atlas.League.LeagueModeTester.TestPodiumPlace
// ============================================================

ulong Atlas_League_LeagueModeTester__TestPodiumPlace
                (long param_1,long param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  ulong unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  undefined8 uVar14;
  int iVar15;
  ulong uVar16;
  int iVar17;
  undefined1 **unaff_x29;
  undefined1 *puVar18;
  undefined *unaff_x30;
  code *pcVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  uVar11 = param_3;
  uVar13 = param_4;
  if ((bRam0000000003eb48c9 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d22e88);
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb48c9 = 1;
  }
  if ((param_1 == 0) || (/*Atlas.League.LeaguePlayerSave$$ClearAllDayPlacements*/ func_0x0147bfe0(param_1), param_2 == 0)) {
LAB_0147d368:
    auVar22 = func_0x00f78af4();
    lVar7 = auVar22._8_8_;
    unaff_x20 = auVar22._0_8_;
    puStack_58 = &Atlas_League_LeagueModeTester__TestPodiumAsIs;
    unaff_x29 = &puStack_60;
    unaff_x22 = 0x3eb4000;
    param_3 = uVar11;
    puStack_60 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb48ca & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48ca = 1;
    }
    iVar12 = (int)uVar13;
    unaff_x21 = 0;
    if (lVar7 != 0) {
      uVar14 = *(undefined8 *)(lVar7 + 0x38);
      iVar15 = -7;
      uStack_a8 = uVar14;
      iVar17 = 7;
      do {
        uStack_b0 = uVar14;
        uStack_a8 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0((double)iVar15,&uStack_b0,0);
        iVar5 = /*System.DateTime$$get_DayOfWeek*/ func_0x02a8e2a0(&uStack_a8,0);
        uVar6 = uStack_a8;
        iVar12 = (int)uVar13;
        uVar14 = *(undefined8 *)(lVar7 + 0x38);
        if (iVar5 == 0) break;
        iVar15 = iVar15 + 1;
        bVar1 = 1 < iVar17;
        iVar17 = iVar17 + -1;
      } while (bVar1);
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_b8 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar14,uVar6,0);
      dVar20 = (double)/*System.TimeSpan$$get_TotalDays*/ func_0x029f0390(&uStack_b8,0);
      dVar21 = -dVar20;
      if (dVar20 != INFINITY) {
        dVar21 = dVar20;
      }
      unaff_x22 = (ulong)(uint)(int)dVar21;
      unaff_x21 = *(undefined8 *)(lVar7 + 0x38);
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar14 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)(int)dVar21,0);
      param_3 = 0;
      /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(unaff_x21,uVar14);
      uVar14 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
      if (unaff_x20 != 0) {
        /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(unaff_x20,uVar14);
        uVar14 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(unaff_x20);
        /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(unaff_x20,uVar14);
        /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(unaff_x20,1);
        if (uVar11 != 0) {
          uVar11 = Atlas_Save_SaveManager__StartSave(uVar11,0);
          return uVar11;
        }
      }
    }
    auVar22 = func_0x00f78af4();
    lVar7 = auVar22._0_8_;
    if ((bRam0000000003eb48cb & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb48cb = 1;
    }
    if (auVar22._8_8_ == 0) {
code_r0x0147d610:
      uVar11 = func_0x00f78af4();
      return uVar11;
    }
    uVar14 = *(undefined8 *)(auVar22._8_8_ + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)iVar12,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar14,uVar6,0);
    uVar14 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    if (lVar7 == 0) goto code_r0x0147d610;
    /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(lVar7,uVar14);
    /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(lVar7,uVar14);
    if (param_3 == 0) goto code_r0x0147d610;
    unaff_x30 = &Atlas_League_LeagueModeTester__TestDecayDemotion;
    register0x00000008 = (BADSPACEBASE *)auStack_c0;
    unaff_x19 = uVar11;
  }
  else {
    uVar14 = *(undefined8 *)(param_2 + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*System.TimeSpan$$FromDays*/ func_0x029f0570(0x401c000000000000,0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar11 = 0;
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar14,uVar6);
    uVar14 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(param_1,uVar14);
    uVar14 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(param_1);
    /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(param_1,uVar14);
    /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(param_1,1);
    iVar12 = 0;
    while( true ) {
      if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= iVar12) break;
      uVar11 = param_4;
      /*Atlas.League.LeaguePlayerSave$$SetPlayerDayPlacement*/ func_0x0147c2bc(param_1,iVar12);
      uVar16 = 0;
      do {
        iVar15 = (int)uVar16;
        if ((int)param_4 + -1 != iVar15) {
          uVar13 = param_3;
          Atlas_League_LeagueModeSave__SaveAIDayPlacement(uVar16,iVar12);
          uVar11 = uVar16;
        }
        uVar2 = iVar15 + 1;
        uVar16 = (ulong)uVar2;
      } while (uVar2 != 0xc);
      iVar12 = iVar12 + 1;
    }
    if (param_3 == 0) goto LAB_0147d368;
  }
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (*(char *)(param_3 + 0x108) != '\0') {
    return 0;
  }
  *(undefined4 *)(param_3 + 0x54) = 0;
  *(undefined1 *)(param_3 + 0x110) = 0;
  lVar7 = Atlas_Save_SaveManager__get_SaveData(param_3,0);
  if (lVar7 == 0) {
code_r0x014eb554:
    lVar7 = func_0x00f78af4();
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x50);
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x38) = param_3;
    *(undefined1 **)((long)register0x00000008 + -0x30) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x28) =
         Atlas_Save_SaveManager__UpdateDependantSaveDataFieldsPreSave;
    puVar18 = (undefined1 *)((long)register0x00000008 + -0x30);
    unaff_x21 = 0x3d21070;
    if ((bRam0000000003eb4c42 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      bRam0000000003eb4c42 = 1;
    }
    lVar8 = Atlas_Save_SaveManager__get_SaveData(lVar7);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar14 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
    if (lVar8 != 0) {
      *(undefined8 *)(lVar8 + 0x18) = uVar14;
      lVar9 = Atlas_Save_SaveManager__get_SaveData(lVar7);
      if (((*(long *)(lVar7 + 0x58) != 0) &&
          (lVar10 = *(long *)(*(long *)(lVar7 + 0x58) + 0x10), lVar8 = lVar9, lVar10 != 0)) &&
         (uVar11 = /*Atlas.Stats.StatsData$$Clone*/ func_0x01504c74(lVar10,0), lVar9 != 0)) {
        *(ulong *)(lVar9 + 0x30) = uVar11;
        return uVar11;
      }
    }
    pcVar19 = Atlas_Save_SaveManager__StartSave;
    auVar22 = func_0x00f78af4();
  }
  else {
    uVar11 = Atlas_Save_SaveData__get_IsValidSaveData();
    if ((uVar11 & 1) == 0) {
      if ((*(long *)(param_3 + 0x98) == 0) ||
         (lVar7 = *(long *)(*(long *)(param_3 + 0x98) + 0x48), lVar7 == 0)) goto code_r0x014eb554;
      /*Atlas.Analytics.AtlasAnalyticsEvents$$NewSaveGameEvent*/ func_0x01455860(lVar7,0);
    }
    Atlas_Save_SaveManager__UpdateDependantSaveDataFieldsPreSave(param_3);
    auVar22._8_4_ = *(undefined4 *)(param_3 + 0xf8);
    auVar22._0_8_ = param_3;
    auVar22._12_4_ = 0;
    puVar18 = *(undefined1 **)((long)register0x00000008 + -0x10);
    pcVar19 = *(code **)((long)register0x00000008 + -8);
    lVar8 = *(long *)((long)register0x00000008 + -0x20);
    lVar7 = *(long *)((long)register0x00000008 + -0x18);
    puVar4 = (undefined1 *)register0x00000008;
  }
  lVar9 = auVar22._0_8_;
  *(ulong *)(puVar4 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
  *(long *)(puVar4 + -0x20) = lVar8;
  *(long *)(puVar4 + -0x18) = lVar7;
  *(undefined1 **)(puVar4 + -0x10) = puVar18;
  *(code **)(puVar4 + -8) = pcVar19;
  cVar3 = *(char *)(lVar9 + 0x50);
  if (cVar3 == '\0') {
    *(undefined1 *)(lVar9 + 0x50) = 1;
    Atlas_Save_SaveManager__SerializeSaveDataToSaveBuffer();
    uVar14 = Atlas_Save_SaveManager__AsyncSave(lVar9,auVar22._8_8_,0);
    *(undefined8 *)(lVar9 + 0x100) = uVar14;
    *(undefined4 *)(lVar9 + 0x54) = 0;
    *(undefined1 *)(lVar9 + 0x110) = 0;
  }
  return (ulong)(cVar3 == '\0');
}



// ============================================================
// RVA: 0x147d36c | Atlas.League.LeagueModeTester.TestPodiumAsIs
// ============================================================

ulong Atlas_League_LeagueModeTester__TestPodiumAsIs
                (long param_1,long param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  undefined8 ***pppuVar3;
  undefined8 ****ppppuVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  code *pcVar13;
  undefined8 ****ppppuVar14;
  long lVar15;
  int iVar16;
  long unaff_x23;
  long unaff_x24;
  int iVar17;
  code *pcVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined8 ***pppuStack_c0;
  code *pcStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 ***pppuStack_a0;
  code *pcStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 ***pppuStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  ppppuVar4 = (undefined8 ****)auStack_70;
  ppppuVar14 = (undefined8 ****)0x3eb4000;
  lVar15 = param_3;
  if ((bRam0000000003eb48ca & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb48ca = 1;
  }
  iVar12 = (int)param_4;
  pcVar13 = (code *)0x0;
  if (param_2 != 0) {
    unaff_x24 = 0x3d25238;
    lVar15 = *(long *)(param_2 + 0x38);
    iVar16 = -7;
    lStack_58 = lVar15;
    iVar17 = 7;
    do {
      lStack_60 = lVar15;
      lStack_58 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0((double)iVar16,&lStack_60,0);
      iVar5 = /*System.DateTime$$get_DayOfWeek*/ func_0x02a8e2a0(&lStack_58,0);
      unaff_x23 = lStack_58;
      iVar12 = (int)param_4;
      lVar15 = *(long *)(param_2 + 0x38);
      if (iVar5 == 0) break;
      iVar16 = iVar16 + 1;
      bVar1 = 1 < iVar17;
      iVar17 = iVar17 + -1;
    } while (bVar1);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_68 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(lVar15,unaff_x23,0);
    dVar19 = (double)/*System.TimeSpan$$get_TotalDays*/ func_0x029f0390(&uStack_68,0);
    dVar20 = -dVar19;
    if (dVar19 != INFINITY) {
      dVar20 = dVar19;
    }
    ppppuVar14 = (undefined8 ****)(ulong)(uint)(int)dVar20;
    pcVar13 = *(code **)(param_2 + 0x38);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)(int)dVar20,0);
    lVar15 = 0;
    /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(pcVar13,uVar6);
    uVar6 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
    if (param_1 != 0) {
      /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(param_1,uVar6);
      uVar6 = /*Atlas.League.LeaguePlayerSave$$get_LatestPlayedDate*/ func_0x0147a78c(param_1);
      /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(param_1,uVar6);
      /*Atlas.League.LeaguePlayerSave$$set_ShowPodiumLatch*/ func_0x0147c244(param_1,1);
      if (param_3 != 0) {
        uVar7 = Atlas_Save_SaveManager__StartSave(param_3,0);
        return uVar7;
      }
    }
  }
  auVar21 = func_0x00f78af4();
  lVar10 = auVar21._0_8_;
  pcStack_78 = (code *)&Atlas_League_LeagueModeTester__TestDecayDemotion;
  lStack_b0 = unaff_x24;
  lStack_a8 = unaff_x23;
  pppuStack_a0 = ppppuVar14;
  pcStack_98 = pcVar13;
  lStack_90 = param_1;
  lStack_88 = param_3;
  pppuStack_80 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb48cb & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb48cb = 1;
  }
  if (auVar21._8_8_ == 0) {
code_r0x0147d610:
    uVar7 = func_0x00f78af4();
    return uVar7;
  }
  uVar6 = *(undefined8 *)(auVar21._8_8_ + 0x38);
  if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)iVar12,0);
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar6,uVar8,0);
  uVar6 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
  if (lVar10 == 0) goto code_r0x0147d610;
  /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(lVar10,uVar6);
  /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(lVar10,uVar6);
  lVar10 = lStack_90;
  pcVar13 = pcStack_98;
  pppuVar3 = pppuStack_a0;
  if (lVar15 == 0) goto code_r0x0147d610;
  if (*(char *)(lVar15 + 0x108) != '\0') {
    return 0;
  }
  *(undefined4 *)(lVar15 + 0x54) = 0;
  *(undefined1 *)(lVar15 + 0x110) = 0;
  lVar9 = Atlas_Save_SaveManager__get_SaveData(lVar15,0);
  if (lVar9 == 0) {
code_r0x014eb554:
    lVar9 = func_0x00f78af4();
    ppppuVar4 = &pppuStack_c0;
    pppuStack_c0 = pppuVar3;
    pcStack_b8 = pcVar13;
    lStack_b0 = lVar10;
    pcStack_98 = Atlas_Save_SaveManager__UpdateDependantSaveDataFieldsPreSave;
    ppppuVar14 = &pppuStack_a0;
    pcVar13 = (code *)0x3d21070;
    lStack_a8 = lVar15;
    pppuStack_a0 = &pppuStack_80;
    if ((bRam0000000003eb4c42 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      bRam0000000003eb4c42 = 1;
    }
    lVar15 = Atlas_Save_SaveManager__get_SaveData(lVar9);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
    if (lVar15 != 0) {
      *(undefined8 *)(lVar15 + 0x18) = uVar6;
      lVar10 = Atlas_Save_SaveManager__get_SaveData(lVar9);
      if (((*(long *)(lVar9 + 0x58) != 0) &&
          (lVar11 = *(long *)(*(long *)(lVar9 + 0x58) + 0x10), lVar15 = lVar10, lVar11 != 0)) &&
         (uVar7 = /*Atlas.Stats.StatsData$$Clone*/ func_0x01504c74(lVar11,0), lVar10 != 0)) {
        *(ulong *)(lVar10 + 0x30) = uVar7;
        return uVar7;
      }
    }
    pcVar18 = Atlas_Save_SaveManager__StartSave;
    auVar21 = func_0x00f78af4();
  }
  else {
    uVar7 = Atlas_Save_SaveData__get_IsValidSaveData();
    if ((uVar7 & 1) == 0) {
      if ((*(long *)(lVar15 + 0x98) == 0) ||
         (lVar9 = *(long *)(*(long *)(lVar15 + 0x98) + 0x48), lVar9 == 0)) goto code_r0x014eb554;
      /*Atlas.Analytics.AtlasAnalyticsEvents$$NewSaveGameEvent*/ func_0x01455860(lVar9,0);
    }
    Atlas_Save_SaveManager__UpdateDependantSaveDataFieldsPreSave(lVar15);
    auVar21._8_4_ = *(undefined4 *)(lVar15 + 0xf8);
    auVar21._0_8_ = lVar15;
    auVar21._12_4_ = 0;
    lVar9 = lStack_88;
    lVar15 = lStack_90;
    ppppuVar14 = (undefined8 ****)pppuStack_80;
    pcVar18 = pcStack_78;
  }
  lVar10 = auVar21._0_8_;
  *(undefined8 ****)((long)ppppuVar4 + -0x30) = pppuVar3;
  *(code **)((long)ppppuVar4 + -0x28) = pcVar13;
  *(long *)((long)ppppuVar4 + -0x20) = lVar15;
  *(long *)((long)ppppuVar4 + -0x18) = lVar9;
  *(undefined8 *****)((long)ppppuVar4 + -0x10) = ppppuVar14;
  *(code **)((long)ppppuVar4 + -8) = pcVar18;
  cVar2 = *(char *)(lVar10 + 0x50);
  if (cVar2 == '\0') {
    *(undefined1 *)(lVar10 + 0x50) = 1;
    Atlas_Save_SaveManager__SerializeSaveDataToSaveBuffer();
    uVar6 = Atlas_Save_SaveManager__AsyncSave(lVar10,auVar21._8_8_,0);
    *(undefined8 *)(lVar10 + 0x100) = uVar6;
    *(undefined4 *)(lVar10 + 0x54) = 0;
    *(undefined1 *)(lVar10 + 0x110) = 0;
  }
  return (ulong)(cVar2 == '\0');
}



// ============================================================
// RVA: 0x147d514 | Atlas.League.LeagueModeTester.TestDecayDemotion
// ============================================================

ulong Atlas_League_LeagueModeTester__TestDecayDemotion
                (long param_1,long param_2,long param_3,int param_4)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar7;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar8 [16];
  undefined1 auStack_50 [16];
  
  if ((bRam0000000003eb48cb & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb48cb = 1;
  }
  if (param_2 == 0) {
LAB_0147d610:
    uVar5 = func_0x00f78af4();
    return uVar5;
  }
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*System.TimeSpan$$FromDays*/ func_0x029f0570((double)param_4,0);
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*System.DateTime$$op_Subtraction*/ func_0x02a8fa30(uVar7,uVar3,0);
  uVar7 = Atlas_League_LeagueModeHelper__ConvertDateTimeToSeedFormat();
  if (param_1 == 0) goto LAB_0147d610;
  /*Atlas.League.LeaguePlayerSave$$set_LatestPlayedDate*/ func_0x0147c154(param_1,uVar7);
  /*Atlas.League.LeaguePlayerSave$$set_LatestOpenedDate*/ func_0x0147c1cc(param_1,uVar7);
  if (param_3 == 0) goto LAB_0147d610;
  if (*(char *)(param_3 + 0x108) != '\0') {
    return 0;
  }
  *(undefined4 *)(param_3 + 0x54) = 0;
  *(undefined1 *)(param_3 + 0x110) = 0;
  lVar4 = Atlas_Save_SaveManager__get_SaveData(param_3,0);
  if (lVar4 == 0) {
code_r0x014eb554:
    unaff_x19 = func_0x00f78af4();
    puVar2 = auStack_50;
    unaff_x29 = &stack0xffffffffffffffd0;
    unaff_x21 = 0x3d21070;
    if ((bRam0000000003eb4c42 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      bRam0000000003eb4c42 = 1;
    }
    unaff_x20 = Atlas_Save_SaveManager__get_SaveData(unaff_x19);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
    if (unaff_x20 != 0) {
      *(undefined8 *)(unaff_x20 + 0x18) = uVar7;
      lVar4 = Atlas_Save_SaveManager__get_SaveData(unaff_x19);
      if (((*(long *)(unaff_x19 + 0x58) != 0) &&
          (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x58) + 0x10), unaff_x20 = lVar4, lVar6 != 0)) &&
         (uVar5 = /*Atlas.Stats.StatsData$$Clone*/ func_0x01504c74(lVar6,0), lVar4 != 0)) {
        *(ulong *)(lVar4 + 0x30) = uVar5;
        return uVar5;
      }
    }
    unaff_x30 = Atlas_Save_SaveManager__StartSave;
    auVar8 = func_0x00f78af4();
    uVar5 = auVar8._8_8_;
    param_3 = auVar8._0_8_;
  }
  else {
    uVar5 = Atlas_Save_SaveData__get_IsValidSaveData();
    if ((uVar5 & 1) == 0) {
      if ((*(long *)(param_3 + 0x98) == 0) ||
         (lVar4 = *(long *)(*(long *)(param_3 + 0x98) + 0x48), lVar4 == 0)) goto code_r0x014eb554;
      /*Atlas.Analytics.AtlasAnalyticsEvents$$NewSaveGameEvent*/ func_0x01455860(lVar4,0);
    }
    Atlas_Save_SaveManager__UpdateDependantSaveDataFieldsPreSave(param_3);
    uVar5 = (ulong)*(uint *)(param_3 + 0xf8);
    puVar2 = (undefined1 *)register0x00000008;
  }
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
  *(long *)(puVar2 + -0x20) = unaff_x20;
  *(long *)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
  *(code **)(puVar2 + -8) = unaff_x30;
  cVar1 = *(char *)(param_3 + 0x50);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_3 + 0x50) = 1;
    Atlas_Save_SaveManager__SerializeSaveDataToSaveBuffer();
    uVar7 = Atlas_Save_SaveManager__AsyncSave(param_3,uVar5,0);
    *(undefined8 *)(param_3 + 0x100) = uVar7;
    *(undefined4 *)(param_3 + 0x54) = 0;
    *(undefined1 *)(param_3 + 0x110) = 0;
  }
  return (ulong)(cVar1 == '\0');
}



// ============================================================
// RVA: 0x147d614 | Atlas.League.LeagueModeTester.ToggleTieWithAI
// ============================================================

void Atlas_League_LeagueModeTester__ToggleTieWithAI(void)

{
  return;
}



// ============================================================
// RVA: 0x147d618 | Atlas.League.LeagueModeTester..cctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_League_LeagueModeTester___cctor(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((bRam0000000003eb48cc & 1) == 0) {
    func_0x00f78a20(0x3d22e90);
    bRam0000000003eb48cc = 1;
  }
  uVar1 = _UNK_033f8370;
  puVar2 = *(undefined8 **)(/*Atlas.League.LeagueModeTester_TypeInfo*/ lRam0000000003d22e90 + 0xb8);
  puVar2[1] = _UNK_033f8378;
  *puVar2 = uVar1;
  puVar2[2] = _UNK_033f8398;
  return;
}



