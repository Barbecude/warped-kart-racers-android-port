// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.ArcadeMapSelectScreen.<>c__DisplayClass50_0

// ============================================================
// RVA: 0x1533860 | Atlas.UI.Screens.ArcadeMapSelectScreen.<>c__DisplayClass50_0..ctor
// ============================================================

void Atlas_UI_Screens_ArcadeMapSelectScreen___c__DisplayClass50_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1533868 | Atlas.UI.Screens.ArcadeMapSelectScreen.<>c__DisplayClass50_0.<OnRewardPanelClicked>b__0
// ============================================================

ulong Atlas_UI_Screens_ArcadeMapSelectScreen___c__DisplayClass50_0___OnRewardPanelClicked_b__0
                (ulong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  
  uVar4 = param_1;
  if ((bRam0000000003eb4eb7 & 1) == 0) {
    func_0x00f78a20(0x3d3e188);
    uVar4 = func_0x00f78a20(0x3d40fb0);
    bRam0000000003eb4eb7 = 1;
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    return uVar4;
  }
  lVar9 = *(long *)(param_1 + 0x18);
  if (lVar9 != 0) {
    if (*(uint *)(lVar9 + 0x18) <= *(uint *)(param_1 + 0x20)) goto code_r0x015339b0;
    lVar9 = *(long *)(lVar9 + (long)(int)*(uint *)(param_1 + 0x20) * 8 + 0x20);
    if ((lVar9 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
      lVar12 = *(long *)(lVar9 + 0x70);
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(*(long *)(param_1 + 0x28),uRam0000000003d40fb0);
      if ((lVar9 != 0) && (lVar10 = *(long *)(param_1 + 0x18), lVar10 != 0)) {
        if (*(uint *)(lVar10 + 0x18) <= *(uint *)(param_1 + 0x20)) goto code_r0x015339b0;
        lVar10 = *(long *)(lVar10 + (long)(int)*(uint *)(param_1 + 0x20) * 8 + 0x20);
        if ((((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x70), lVar10 != 0)) &&
            (*(long *)(lVar9 + 0x88) != 0)) &&
           (uVar5 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(lVar9 + 0x88),*(undefined8 *)(lVar10 + 0x28),0),
           lVar12 != 0)) {
          *(undefined8 *)(lVar12 + 0x30) = uVar5;
          if (((*(long *)(param_1 + 0x28) != 0) &&
              (lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(*(long *)(param_1 + 0x28),uRam0000000003d40fb0),
              puVar2 = puRam0000000003d3e188, lVar9 != 0)) &&
             (lVar12 = *(long *)(param_1 + 0x18), lVar12 != 0)) {
            if (*(uint *)(lVar12 + 0x18) <= *(uint *)(param_1 + 0x20)) goto code_r0x015339b0;
            lVar12 = *(long *)(lVar12 + (long)(int)*(uint *)(param_1 + 0x20) * 8 + 0x20);
            if ((lVar12 != 0) && (plVar6 = *(long **)(lVar9 + 0x98), plVar6 != (long *)0x0)) {
              plVar7 = *(long **)(lVar12 + 0x70);
              puVar8 = puRam0000000003d3e188;
              if ((bRam0000000003eb832a & 1) == 0) {
                func_0x00f78a20(0x3d3b330);
                func_0x00f78a20(0x3d3b348);
                func_0x00f78a20(0x3d717e8);
                bRam0000000003eb832a = 1;
              }
              if (plVar7 != (long *)0x0) {
                uVar5 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
                puVar8 = (undefined8 *)0x0;
                uVar5 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar5);
                if (plVar6 != (long *)0x0) {
                  puVar8 = *(undefined8 **)(*(long *)(puVar2[3] + 0xc0) + 8);
                  (*(code *)*puVar8)(plVar6,uVar5);
                  if (plVar6[7] != 0) {
                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar6[7],plVar7,uRam0000000003d3b330);
                    puVar8 = (undefined8 *)plVar6[8];
                    if ((puVar8 == (undefined8 *)0x0) || ((int)plVar7[2] <= *(int *)(puVar8 + 2))) {
code_r0x025dfcb4:
                      uVar4 = (*(code *)**(undefined8 **)(*(long *)(puVar2[3] + 0xc0) + 0x30))
                                        (plVar6);
                      if ((uVar4 & 1) != 0) {
                        return uVar4;
                      }
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      uVar4 = (**(code **)(*plVar6 + 0x1a8))
                                        (plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
                      return uVar4;
                    }
                    if (plVar6[7] != 0) {
                      /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar6[7],0,puVar8,uRam0000000003d3b348);
                      (*(code *)**(undefined8 **)(*(long *)(puVar2[3] + 0xc0) + 0x60))(plVar6);
                      goto code_r0x025dfcb4;
                    }
                  }
                }
              }
              auVar16 = func_0x00f78af4();
              plVar6 = auVar16._8_8_;
              lVar9 = auVar16._0_8_;
              if (plVar6 != (long *)0x0) {
                uVar5 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
                if (lVar9 != 0) {
                  uVar3 = (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x70))
                                    (lVar9,uVar5);
                  if ((uVar3 & 1) == 0) {
                    (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x78))(lVar9,plVar6);
                  }
                  return (ulong)(uVar3 ^ 1);
                }
              }
              auVar16 = func_0x00f78af4();
              iVar11 = 0x3eb8000;
              if ((bRam0000000003eb832b & 1) == 0) {
                func_0x00f78a20(0x3d3b358);
                func_0x00f78a20(0x3d3b360);
                bRam0000000003eb832b = 1;
              }
              lVar9 = *(long *)(auVar16._0_8_ + 0x38);
              if (lVar9 != 0) {
                iVar11 = *(int *)(lVar9 + 0x18);
                if (iVar11 < 1) goto code_r0x025dfe48;
                uVar3 = 0;
                iVar15 = -0x80000000;
                uVar13 = 0;
                do {
                  if (*(uint *)(lVar9 + 0x18) <= uVar3) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
                  if (lVar9 == 0) break;
                  iVar1 = *(int *)(lVar9 + 0x10);
                  uVar14 = uVar3;
                  if (iVar1 <= iVar15) {
                    uVar14 = uVar13;
                  }
                  if (iVar11 - 1U == uVar3) goto code_r0x025dfe4c;
                  if (iVar1 <= iVar15) {
                    iVar1 = iVar15;
                  }
                  lVar9 = *(long *)(auVar16._0_8_ + 0x38);
                  uVar3 = uVar3 + 1;
                  iVar15 = iVar1;
                  uVar13 = uVar14;
                } while (lVar9 != 0);
              }
              func_0x00f78af4();
code_r0x025dfe48:
              uVar14 = 0;
code_r0x025dfe4c:
              *auVar16._8_8_ = uVar14;
              return (ulong)(0 < iVar11);
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x015339b0:
  uVar5 = func_0x00f78b24();
  auVar17 = func_0x00f78ac0(uVar5,0);
  uVar4 = /*System.Object$$.ctor*/ func_0x0294d018(auVar17._0_8_,0);
  *(int *)(auVar17._0_8_ + 0x10) = auVar17._8_4_;
  return uVar4;
}



