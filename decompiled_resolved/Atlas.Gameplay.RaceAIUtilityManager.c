// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.RaceAIUtilityManager

// ============================================================
// RVA: 0x14d1cfc | Atlas.Gameplay.RaceAIUtilityManager.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x014d20b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014d23c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014d20bc) */

ulong Atlas_Gameplay_RaceAIUtilityManager__Init
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong unaff_x23;
  ulong uVar12;
  segment_command *unaff_x24;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  undefined1 *puVar16;
  undefined *puVar17;
  undefined4 extraout_s0;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  puVar1 = &stack0xffffffffffffffa0;
  puVar16 = &stack0xfffffffffffffff0;
  uVar11 = 0x3eb4000;
  uVar3 = param_1;
  if ((bRam0000000003eb4b8d & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d1f2c0);
    uVar3 = func_0x00f78a20(0x3d24050);
    bRam0000000003eb4b8d = 1;
  }
  if (*(char *)(param_1 + 0x20) == '\0') {
    *(ulong *)(param_1 + 0x10) = param_2;
    *(ulong *)(param_1 + 0x18) = param_3;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = 0;
    uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(param_3,0,0);
    if (((uVar3 & 1) == 0) && (*(long *)(param_1 + 0x10) != 0)) {
      if ((param_3 != 0) && (*(long *)(param_3 + 0x80) != 0)) {
        uVar3 = 0x3d1f2c0;
        uVar12 = 0x3d1f2c0;
        uVar4 = func_0x00f78a34(/*Atlas.Gameplay.RaceAIGroupCache[]_TypeInfo*/ uRam0000000003d1f2c0,
                                *(undefined4 *)(*(long *)(param_3 + 0x80) + 0x18));
        *(undefined8 *)(param_1 + 0x28) = uVar4;
        unaff_x23 = uVar3;
        if (*(long *)(param_3 + 0x80) != 0) {
          param_2 = 1;
          if (0 < *(int *)(*(long *)(param_3 + 0x80) + 0x18)) {
            lVar13 = 4;
            unaff_x24 = &segment_command_00000020;
            do {
              uVar11 = func_0x00f78aec(/*Atlas.Gameplay.RaceAIGroupCache_TypeInfo*/ uRam0000000003d24050);
              /*System.Object$$.ctor*/ func_0x0294d018(uVar11,0);
              lVar8 = *(long *)(param_3 + 0x80);
              unaff_x23 = uVar3;
              if (lVar8 == 0) goto LAB_014d1f58;
              uVar14 = lVar13 - 4;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_014d1f5c;
              unaff_x23 = uVar12;
              if (uVar11 == 0) goto LAB_014d1f58;
              uVar4 = *(undefined8 *)(unaff_x24->segname + lVar8 + -8);
              *(undefined8 *)(uVar11 + 0x18) = *(undefined8 *)(unaff_x24->segname + lVar8 + -8 + 8);
              *(undefined8 *)(uVar11 + 0x10) = uVar4;
              iVar2 = (int)param_2;
              *(int *)(uVar11 + 0x20) = iVar2;
              *(int *)(uVar11 + 0x24) = iVar2 + (int)uVar4 + -1;
              plVar15 = *(long **)(param_1 + 0x28);
              if (plVar15 == (long *)0x0) goto LAB_014d1f58;
              lVar8 = func_0x00f78adc(uVar11,*(undefined8 *)(*plVar15 + 0x40));
              unaff_x23 = uVar3;
              if (lVar8 == 0) goto LAB_014d1f64;
              if (*(uint *)(plVar15 + 3) <= uVar14) goto LAB_014d1f5c;
              plVar15[lVar13] = uVar11;
              lVar8 = *(long *)(param_3 + 0x80);
              unaff_x23 = uVar12;
              if (lVar8 == 0) goto LAB_014d1f58;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_014d1f5c;
              param_2 = (ulong)(uint)(*(int *)(unaff_x24->segname + lVar8 + -8) + iVar2);
              lVar9 = lVar13 + -3;
              lVar13 = lVar13 + 1;
              unaff_x24 = (segment_command *)(unaff_x24->segname + 8);
            } while (lVar9 < (int)*(uint *)(lVar8 + 0x18));
          }
          uVar3 = func_0x00f78a34(/*Atlas.Gameplay.RaceAIGroupCache[]_TypeInfo*/ uRam0000000003d1f2c0,param_2);
          *(ulong *)(param_1 + 0x30) = uVar3;
          param_2 = *(ulong *)(param_1 + 0x28);
          unaff_x23 = uVar12;
          if (param_2 != 0) {
            uVar6 = *(uint *)(param_2 + 0x18);
            if (0 < (int)uVar6) {
              uVar11 = 0;
              unaff_x23 = 0;
              do {
                uVar10 = (uint)uVar11;
                if (uVar6 <= uVar10) goto LAB_014d1f5c;
                param_3 = *(ulong *)(param_2 + (long)(int)uVar10 * 8 + 0x20);
                if (param_3 == 0) goto LAB_014d1f58;
                while (uVar6 = (uint)unaff_x23, (int)uVar6 <= *(int *)(param_3 + 0x24)) {
                  unaff_x24 = *(segment_command **)(param_1 + 0x30);
                  if (unaff_x24 == (segment_command *)0x0) goto LAB_014d1f58;
                  if ((int)uVar6 < (int)unaff_x24->vmaddr) {
                    uVar3 = func_0x00f78adc(param_3,*(undefined8 *)(*(long *)unaff_x24 + 0x40));
                    if (uVar3 == 0) goto LAB_014d1f64;
                    if ((uint)unaff_x24->vmaddr <= uVar6) goto LAB_014d1f5c;
                    *(ulong *)(unaff_x24->segname + (long)(int)uVar6 * 8 + 0x18) = param_3;
                  }
                  unaff_x23 = (ulong)(uVar6 + 1);
                }
                uVar11 = (ulong)(uVar10 + 1);
                uVar6 = *(uint *)(param_2 + 0x18);
              } while ((int)(uVar10 + 1) < (int)uVar6);
            }
            *(undefined1 *)(param_1 + 0x20) = 1;
            return uVar3;
          }
        }
      }
LAB_014d1f58:
      func_0x00f78af4();
LAB_014d1f5c:
      uVar4 = func_0x00f78b24();
      goto code_r0x014d1f68;
    }
  }
  return uVar3;
LAB_014d1f64:
  uVar4 = func_0x00f78b14();
code_r0x014d1f68:
  puVar17 = &Atlas_Gameplay_RaceAIUtilityManager__PostInit;
  uVar3 = func_0x00f78ac0(uVar4,0);
  if (*(char *)(uVar3 + 0x21) != '\0') {
    return uVar3;
  }
code_r0x014d1f80:
  do {
    *(ulong *)(puVar1 + -0x30) = uVar11;
    *(ulong *)(puVar1 + -0x28) = param_2;
    *(ulong *)(puVar1 + -0x20) = param_3;
    *(ulong *)(puVar1 + -0x18) = param_1;
    *(undefined1 **)(puVar1 + -0x10) = puVar16;
    *(undefined **)(puVar1 + -8) = puVar17;
    if (*(char *)(uVar3 + 0x20) == '\0') {
      return uVar3;
    }
    if (*(char *)(uVar3 + 0x21) != '\0') {
      return uVar3;
    }
    if ((*(long *)(uVar3 + 0x10) == 0) ||
       (lVar13 = *(long *)(*(long *)(uVar3 + 0x10) + 0x40), lVar13 == 0)) {
code_r0x014d2064:
      func_0x00f78af4();
    }
    else {
      lVar13 = Atlas_Gameplay_Player_GameContextPlayerManager__GetLastHumanPlayer(lVar13,0);
      *(long *)(uVar3 + 0x38) = lVar13;
      if (lVar13 == 0) goto code_r0x014d2064;
      uVar12 = Atlas_Gameplay_Player_GameContextPlayer__GetRaceProgress(lVar13,0);
      *(undefined4 *)(uVar3 + 0x40) = extraout_s0;
      param_3 = *(ulong *)(uVar3 + 0x28);
      if (param_3 == 0) goto code_r0x014d2064;
      uVar6 = *(uint *)(param_3 + 0x18);
      if ((int)uVar6 < 1) {
code_r0x014d204c:
        *(undefined1 *)(uVar3 + 0x21) = 1;
        return uVar12;
      }
      param_2 = 0;
      while (uVar10 = (uint)param_2, uVar10 < uVar6) {
        if (((*(long *)(uVar3 + 0x10) == 0) ||
            (uVar11 = *(ulong *)(param_3 + (long)(int)uVar10 * 8 + 0x20), uVar11 == 0)) ||
           (lVar13 = *(long *)(*(long *)(uVar3 + 0x10) + 0x40), lVar13 == 0)) goto code_r0x014d2064;
        uVar7 = 0;
        uVar4 = Atlas_Gameplay_Player_GameContextPlayerManager__GetNthPlacedAI
                          (lVar13,*(undefined4 *)(uVar11 + 0x20));
        *(undefined8 *)(uVar11 + 0x28) = uVar4;
        if ((*(long *)(uVar3 + 0x10) == 0) ||
           (lVar13 = *(long *)(*(long *)(uVar3 + 0x10) + 0x40), lVar13 == 0)) goto code_r0x014d2064;
        uVar7 = 0;
        uVar12 = Atlas_Gameplay_Player_GameContextPlayerManager__GetNthPlacedAI
                           (lVar13,*(undefined4 *)(uVar11 + 0x24));
        *(ulong *)(uVar11 + 0x30) = uVar12;
        param_2 = (ulong)(uVar10 + 1);
        uVar6 = *(uint *)(param_3 + 0x18);
        if ((int)uVar6 <= (int)(uVar10 + 1)) goto code_r0x014d204c;
      }
    }
    uVar4 = func_0x00f78b24();
    auVar18 = func_0x00f78ac0(uVar4,0);
    param_1 = auVar18._8_8_;
    uVar12 = auVar18._0_8_;
    *(ulong *)(puVar1 + -0x50) = param_3;
    *(ulong *)(puVar1 + -0x48) = uVar3;
    *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x38) =
         &Atlas_Gameplay_RaceAIUtilityManager__GetAIGroupBasedOnRacePlacement;
    puVar16 = puVar1 + -0x40;
    uVar14 = 0;
    uVar6 = auVar18._8_4_;
    if (((int)uVar6 < 0) || (*(char *)(uVar12 + 0x20) == '\0')) {
      return uVar14;
    }
    lVar13 = *(long *)(uVar12 + 0x30);
    if (lVar13 == 0) {
      uVar14 = func_0x00f78af4();
      param_3 = param_4;
code_r0x014d20f0:
      uVar4 = func_0x00f78b24(uVar14);
      auVar18 = func_0x00f78ac0(uVar4,0);
      lVar13 = auVar18._0_8_;
      *(segment_command **)(puVar1 + -0x90) = unaff_x24;
      *(ulong *)(puVar1 + -0x88) = unaff_x23;
      *(ulong *)(puVar1 + -0x80) = uVar11;
      *(ulong *)(puVar1 + -0x78) = param_2;
      *(ulong *)(puVar1 + -0x70) = uVar12;
      *(ulong *)(puVar1 + -0x68) = uVar3;
      *(undefined1 **)(puVar1 + -0x60) = puVar16;
      *(undefined **)(puVar1 + -0x58) =
           &Atlas_Gameplay_RaceAIUtilityManager__GetAIGroupBasedOnCharacter;
      uVar4 = 0x3eb4000;
      if ((bRam0000000003eb4b8e & 1) == 0) {
        func_0x00f78a20(0x3d21270);
        func_0x00f78a20(0x3d3af50);
        func_0x00f78a20(0x3d3af58);
        bRam0000000003eb4b8e = 1;
      }
      param_2 = 0;
      lVar8 = Atlas_League_LeagueModeSave__GetCharacterPositions(0xc,uVar7);
      if (*(long *)(lVar13 + 0x30) == 0) {
        return 0;
      }
      if (lVar8 == 0) {
code_r0x014d2228:
        func_0x00f78af4();
      }
      else {
        uVar6 = *(uint *)(lVar8 + 0x18);
        if ((int)uVar6 < 1) {
          return 0;
        }
        unaff_x23 = 0;
        unaff_x24 = (segment_command *)0x3d21270;
        while( true ) {
          uVar10 = (uint)unaff_x23;
          if (uVar6 <= uVar10) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar9 = *(long *)(*(long *)(lVar8 + 0x10) + (long)(int)uVar10 * 8 + 0x20);
          if (lVar9 == 0) goto code_r0x014d2228;
          uVar4 = *(undefined8 *)(lVar9 + 0x10);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          param_2 = 0;
          iVar2 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar4,auVar18._8_8_);
          if (iVar2 != 0) break;
          unaff_x23 = (ulong)(uVar10 + 1);
          uVar6 = *(uint *)(lVar8 + 0x18);
          if ((int)uVar6 <= (int)(uVar10 + 1)) {
            return 0;
          }
        }
        lVar9 = *(long *)(lVar13 + 0x30);
        if (lVar9 == 0) goto code_r0x014d2228;
        if (uVar10 < *(uint *)(lVar9 + 0x18)) {
          return *(ulong *)(lVar9 + (long)(int)uVar10 * 8 + 0x20);
        }
      }
      uVar5 = func_0x00f78b24();
      auVar19 = func_0x00f78ac0(uVar5,0);
      uVar11 = auVar19._8_8_;
      lVar9 = auVar19._0_8_;
      *(segment_command **)(puVar1 + -0xd0) = unaff_x24;
      *(ulong *)(puVar1 + -200) = unaff_x23;
      *(undefined8 *)(puVar1 + -0xc0) = uVar4;
      *(long *)(puVar1 + -0xb8) = lVar8;
      *(long *)(puVar1 + -0xb0) = auVar18._8_8_;
      *(long *)(puVar1 + -0xa8) = lVar13;
      *(undefined1 **)(puVar1 + -0xa0) = puVar1 + -0x60;
      *(undefined **)(puVar1 + -0x98) =
           &Atlas_Gameplay_RaceAIUtilityManager__GetAiGroupBasedOnAlternateCharacter;
      unaff_x23 = 0x3eb4000;
      uVar7 = param_2;
      param_4 = param_3;
      if ((bRam0000000003eb4b8f & 1) == 0) {
        func_0x00f78a20(0x3d21270);
        func_0x00f78a20(0x3d57270);
        func_0x00f78a20(0x3d3af50);
        func_0x00f78a20(0x3d3af58);
        bRam0000000003eb4b8f = 1;
      }
      if ((param_3 == 0) ||
         (uVar7 = uRam0000000003d57270, lVar13 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(param_3,uVar11), lVar13 == 0)) {
code_r0x014d2398:
        func_0x00f78af4();
      }
      else {
        if (*(long *)(lVar9 + 0x30) == 0) {
          return 0;
        }
        param_3 = *(ulong *)(lVar13 + 0x70);
        uVar7 = 0;
        uVar3 = Atlas_League_LeagueModeSave__GetCharacterPositions(0xc,param_2);
        if (uVar3 == 0) goto code_r0x014d2398;
        uVar6 = *(uint *)(uVar3 + 0x18);
        if ((int)uVar6 < 1) {
          return 0;
        }
        unaff_x23 = 0;
        unaff_x24 = (segment_command *)0x3d21270;
        while( true ) {
          uVar10 = (uint)unaff_x23;
          if (uVar6 <= uVar10) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar13 = *(long *)(*(long *)(uVar3 + 0x10) + (long)(int)uVar10 * 8 + 0x20);
          param_2 = uVar3;
          if (lVar13 == 0) goto code_r0x014d2398;
          uVar11 = *(ulong *)(lVar13 + 0x10);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar7 = 0;
          iVar2 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar11,param_3);
          if (iVar2 != 0) break;
          unaff_x23 = (ulong)(uVar10 + 1);
          uVar6 = *(uint *)(uVar3 + 0x18);
          if ((int)uVar6 <= (int)(uVar10 + 1)) {
            return 0;
          }
        }
        lVar13 = *(long *)(lVar9 + 0x30);
        if (lVar13 == 0) goto code_r0x014d2398;
        if (uVar10 < *(uint *)(lVar13 + 0x18)) {
          return *(ulong *)(lVar13 + (long)(int)uVar10 * 8 + 0x20);
        }
      }
      uVar4 = func_0x00f78b24();
      uVar3 = func_0x00f78ac0(uVar4,0);
      *(ulong *)(puVar1 + -0xf0) = param_3;
      *(long *)(puVar1 + -0xe8) = lVar9;
      *(undefined1 **)(puVar1 + -0xe0) = puVar1 + -0xa0;
      *(undefined **)(puVar1 + -0xd8) =
           &Atlas_Gameplay_RaceAIUtilityManager__GetReferenceHumanPlayerProgress;
      puVar16 = puVar1 + -0xe0;
      if (*(char *)(uVar3 + 0x21) != '\0') {
        return uVar3;
      }
      puVar17 = &UNK_014d23c8;
      puVar1 = puVar1 + -0xf0;
      param_1 = uVar3;
      goto code_r0x014d1f80;
    }
    if (*(int *)(lVar13 + 0x18) <= (int)uVar6) {
      return 0;
    }
    if (*(char *)(uVar12 + 0x21) != '\0') {
      param_3 = param_4;
      uVar3 = param_1;
      if (uVar6 < *(uint *)(lVar13 + 0x18)) {
        return *(ulong *)(lVar13 + (param_1 & 0xffffffff) * 8 + 0x20);
      }
      goto code_r0x014d20f0;
    }
    puVar17 = &UNK_014d20bc;
    puVar1 = puVar1 + -0x50;
    uVar3 = uVar12;
    param_3 = uVar12;
  } while( true );
}



// ============================================================
// RVA: 0x14d1f70 | Atlas.Gameplay.RaceAIUtilityManager.PostInit
// ============================================================

/* WARNING: Possible PIC construction at 0x014d20b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014d23c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014d20bc) */

ulong Atlas_Gameplay_RaceAIUtilityManager__PostInit
                (ulong param_1,undefined8 param_2,ulong param_3,long param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lVar10;
  uint uVar11;
  ulong unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined4 extraout_s0;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  auVar12._8_8_ = unaff_x19;
  auVar12._0_8_ = unaff_x20;
  if (*(char *)(param_1 + 0x21) != '\0') {
    return param_1;
  }
code_r0x014d1f80:
  do {
    lVar10 = auVar12._0_8_;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x20) = auVar12;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if (*(char *)(param_1 + 0x20) == '\0') {
      return param_1;
    }
    if (*(char *)(param_1 + 0x21) != '\0') {
      return param_1;
    }
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x40), lVar2 == 0)) {
code_r0x014d2064:
      func_0x00f78af4();
    }
    else {
      lVar2 = Atlas_Gameplay_Player_GameContextPlayerManager__GetLastHumanPlayer(lVar2,0);
      *(long *)(param_1 + 0x38) = lVar2;
      if (lVar2 == 0) goto code_r0x014d2064;
      uVar3 = Atlas_Gameplay_Player_GameContextPlayer__GetRaceProgress(lVar2,0);
      *(undefined4 *)(param_1 + 0x40) = extraout_s0;
      lVar10 = *(long *)(param_1 + 0x28);
      if (lVar10 == 0) goto code_r0x014d2064;
      uVar8 = *(uint *)(lVar10 + 0x18);
      if ((int)uVar8 < 1) {
code_r0x014d204c:
        *(undefined1 *)(param_1 + 0x21) = 1;
        return uVar3;
      }
      unaff_x21 = 0;
      while (uVar11 = (uint)unaff_x21, uVar11 < uVar8) {
        if (((*(long *)(param_1 + 0x10) == 0) ||
            (unaff_x22 = *(long *)(lVar10 + (long)(int)uVar11 * 8 + 0x20), unaff_x22 == 0)) ||
           (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x40), lVar2 == 0)) goto code_r0x014d2064;
        param_3 = 0;
        uVar4 = Atlas_Gameplay_Player_GameContextPlayerManager__GetNthPlacedAI
                          (lVar2,*(undefined4 *)(unaff_x22 + 0x20));
        *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x40), lVar2 == 0)) goto code_r0x014d2064;
        param_3 = 0;
        uVar3 = Atlas_Gameplay_Player_GameContextPlayerManager__GetNthPlacedAI
                          (lVar2,*(undefined4 *)(unaff_x22 + 0x24));
        *(ulong *)(unaff_x22 + 0x30) = uVar3;
        unaff_x21 = (ulong)(uVar11 + 1);
        uVar8 = *(uint *)(lVar10 + 0x18);
        if ((int)uVar8 <= (int)(uVar11 + 1)) goto code_r0x014d204c;
      }
    }
    uVar4 = func_0x00f78b24();
    auVar12 = func_0x00f78ac0(uVar4,0);
    uVar3 = auVar12._0_8_;
    *(long *)((long)register0x00000008 + -0x50) = lVar10;
    *(ulong *)((long)register0x00000008 + -0x48) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) =
         &Atlas_Gameplay_RaceAIUtilityManager__GetAIGroupBasedOnRacePlacement;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x40);
    uVar5 = 0;
    uVar8 = auVar12._8_4_;
    if (((int)uVar8 < 0) || (*(char *)(uVar3 + 0x20) == '\0')) {
      return uVar5;
    }
    lVar10 = *(long *)(uVar3 + 0x30);
    if (lVar10 == 0) {
      uVar5 = func_0x00f78af4();
      lVar2 = param_4;
code_r0x014d20f0:
      uVar4 = func_0x00f78b24(uVar5);
      auVar12 = func_0x00f78ac0(uVar4,0);
      lVar10 = auVar12._0_8_;
      *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x24;
      *(ulong *)((long)register0x00000008 + -0x88) = unaff_x23;
      *(long *)((long)register0x00000008 + -0x80) = unaff_x22;
      *(ulong *)((long)register0x00000008 + -0x78) = unaff_x21;
      *(ulong *)((long)register0x00000008 + -0x70) = uVar3;
      *(ulong *)((long)register0x00000008 + -0x68) = param_1;
      *(undefined1 **)((long)register0x00000008 + -0x60) = unaff_x29;
      *(undefined **)((long)register0x00000008 + -0x58) =
           &Atlas_Gameplay_RaceAIUtilityManager__GetAIGroupBasedOnCharacter;
      uVar4 = 0x3eb4000;
      if ((bRam0000000003eb4b8e & 1) == 0) {
        func_0x00f78a20(0x3d21270);
        func_0x00f78a20(0x3d3af50);
        func_0x00f78a20(0x3d3af58);
        bRam0000000003eb4b8e = 1;
      }
      unaff_x21 = 0;
      lVar6 = Atlas_League_LeagueModeSave__GetCharacterPositions(0xc,param_3);
      if (*(long *)(lVar10 + 0x30) == 0) {
        return 0;
      }
      if (lVar6 == 0) {
code_r0x014d2228:
        func_0x00f78af4();
      }
      else {
        uVar8 = *(uint *)(lVar6 + 0x18);
        if ((int)uVar8 < 1) {
          return 0;
        }
        unaff_x23 = 0;
        unaff_x24 = 0x3d21270;
        while( true ) {
          uVar11 = (uint)unaff_x23;
          if (uVar8 <= uVar11) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar9 = *(long *)(*(long *)(lVar6 + 0x10) + (long)(int)uVar11 * 8 + 0x20);
          if (lVar9 == 0) goto code_r0x014d2228;
          uVar4 = *(undefined8 *)(lVar9 + 0x10);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          unaff_x21 = 0;
          iVar1 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar4,auVar12._8_8_);
          if (iVar1 != 0) break;
          unaff_x23 = (ulong)(uVar11 + 1);
          uVar8 = *(uint *)(lVar6 + 0x18);
          if ((int)uVar8 <= (int)(uVar11 + 1)) {
            return 0;
          }
        }
        lVar9 = *(long *)(lVar10 + 0x30);
        if (lVar9 == 0) goto code_r0x014d2228;
        if (uVar11 < *(uint *)(lVar9 + 0x18)) {
          return *(ulong *)(lVar9 + (long)(int)uVar11 * 8 + 0x20);
        }
      }
      uVar7 = func_0x00f78b24();
      auVar13 = func_0x00f78ac0(uVar7,0);
      unaff_x22 = auVar13._8_8_;
      lVar9 = auVar13._0_8_;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_x24;
      *(ulong *)((long)register0x00000008 + -200) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar4;
      *(long *)((long)register0x00000008 + -0xb8) = lVar6;
      *(long *)((long)register0x00000008 + -0xb0) = auVar12._8_8_;
      *(long *)((long)register0x00000008 + -0xa8) = lVar10;
      *(undefined1 **)((long)register0x00000008 + -0xa0) =
           (undefined1 *)((long)register0x00000008 + -0x60);
      *(undefined **)((long)register0x00000008 + -0x98) =
           &Atlas_Gameplay_RaceAIUtilityManager__GetAiGroupBasedOnAlternateCharacter;
      unaff_x23 = 0x3eb4000;
      param_3 = unaff_x21;
      param_4 = lVar2;
      if ((bRam0000000003eb4b8f & 1) == 0) {
        func_0x00f78a20(0x3d21270);
        func_0x00f78a20(0x3d57270);
        func_0x00f78a20(0x3d3af50);
        func_0x00f78a20(0x3d3af58);
        bRam0000000003eb4b8f = 1;
      }
      if ((lVar2 == 0) ||
         (param_3 = uRam0000000003d57270, lVar10 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar2,unaff_x22), lVar10 == 0)) {
code_r0x014d2398:
        func_0x00f78af4();
      }
      else {
        if (*(long *)(lVar9 + 0x30) == 0) {
          return 0;
        }
        lVar2 = *(long *)(lVar10 + 0x70);
        param_3 = 0;
        uVar3 = Atlas_League_LeagueModeSave__GetCharacterPositions(0xc,unaff_x21);
        if (uVar3 == 0) goto code_r0x014d2398;
        uVar8 = *(uint *)(uVar3 + 0x18);
        if ((int)uVar8 < 1) {
          return 0;
        }
        unaff_x23 = 0;
        unaff_x24 = 0x3d21270;
        while( true ) {
          uVar11 = (uint)unaff_x23;
          if (uVar8 <= uVar11) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar10 = *(long *)(*(long *)(uVar3 + 0x10) + (long)(int)uVar11 * 8 + 0x20);
          unaff_x21 = uVar3;
          if (lVar10 == 0) goto code_r0x014d2398;
          unaff_x22 = *(long *)(lVar10 + 0x10);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          param_3 = 0;
          iVar1 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(unaff_x22,lVar2);
          if (iVar1 != 0) break;
          unaff_x23 = (ulong)(uVar11 + 1);
          uVar8 = *(uint *)(uVar3 + 0x18);
          if ((int)uVar8 <= (int)(uVar11 + 1)) {
            return 0;
          }
        }
        lVar10 = *(long *)(lVar9 + 0x30);
        if (lVar10 == 0) goto code_r0x014d2398;
        if (uVar11 < *(uint *)(lVar10 + 0x18)) {
          return *(ulong *)(lVar10 + (long)(int)uVar11 * 8 + 0x20);
        }
      }
      uVar4 = func_0x00f78b24();
      param_1 = func_0x00f78ac0(uVar4,0);
      auVar12._8_8_ = param_1;
      auVar12._0_8_ = lVar2;
      *(long *)((long)register0x00000008 + -0xf0) = lVar2;
      *(long *)((long)register0x00000008 + -0xe8) = lVar9;
      *(undefined1 **)((long)register0x00000008 + -0xe0) =
           (undefined1 *)((long)register0x00000008 + -0xa0);
      *(undefined **)((long)register0x00000008 + -0xd8) =
           &Atlas_Gameplay_RaceAIUtilityManager__GetReferenceHumanPlayerProgress;
      unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xe0);
      if (*(char *)(param_1 + 0x21) != '\0') {
        return param_1;
      }
      unaff_x30 = &UNK_014d23c8;
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
      goto code_r0x014d1f80;
    }
    if (*(int *)(lVar10 + 0x18) <= (int)uVar8) {
      return 0;
    }
    if (*(char *)(uVar3 + 0x21) != '\0') {
      lVar2 = param_4;
      param_1 = auVar12._8_8_;
      if (uVar8 < *(uint *)(lVar10 + 0x18)) {
        return *(ulong *)(lVar10 + (auVar12._8_8_ & 0xffffffff) * 8 + 0x20);
      }
      goto code_r0x014d20f0;
    }
    unaff_x30 = &UNK_014d20bc;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_1 = uVar3;
  } while( true );
}



// ============================================================
// RVA: 0x14d1f80 | Atlas.Gameplay.RaceAIUtilityManager.UpdateValidData
// ============================================================

long Atlas_Gameplay_RaceAIUtilityManager__UpdateValidData
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined4 extraout_s0;
  undefined1 auVar9 [16];
  
  if ((*(char *)(param_1 + 0x20) == '\0') || (*(char *)(param_1 + 0x21) != '\0')) {
    return param_1;
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x40), lVar2 != 0)) {
    lVar2 = Atlas_Gameplay_Player_GameContextPlayerManager__GetLastHumanPlayer(lVar2,0);
    *(long *)(param_1 + 0x38) = lVar2;
    if (lVar2 != 0) {
      lVar2 = Atlas_Gameplay_Player_GameContextPlayer__GetRaceProgress(lVar2,0);
      *(undefined4 *)(param_1 + 0x40) = extraout_s0;
      lVar5 = *(long *)(param_1 + 0x28);
      if (lVar5 != 0) {
        uVar4 = *(uint *)(lVar5 + 0x18);
        if (0 < (int)uVar4) {
          uVar8 = 0;
          do {
            if (uVar4 <= uVar8) goto LAB_014d2068;
            if (((*(long *)(param_1 + 0x10) == 0) ||
                (lVar6 = *(long *)(lVar5 + (long)(int)uVar8 * 8 + 0x20), lVar6 == 0)) ||
               (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x40), lVar2 == 0)) goto LAB_014d2064;
            param_3 = 0;
            uVar3 = Atlas_Gameplay_Player_GameContextPlayerManager__GetNthPlacedAI
                              (lVar2,*(undefined4 *)(lVar6 + 0x20),0);
            *(undefined8 *)(lVar6 + 0x28) = uVar3;
            if ((*(long *)(param_1 + 0x10) == 0) ||
               (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x40), lVar2 == 0)) goto LAB_014d2064;
            param_3 = 0;
            lVar2 = Atlas_Gameplay_Player_GameContextPlayerManager__GetNthPlacedAI
                              (lVar2,*(undefined4 *)(lVar6 + 0x24));
            *(long *)(lVar6 + 0x30) = lVar2;
            uVar8 = uVar8 + 1;
            uVar4 = *(uint *)(lVar5 + 0x18);
          } while ((int)uVar8 < (int)uVar4);
        }
        *(undefined1 *)(param_1 + 0x21) = 1;
        return lVar2;
      }
    }
  }
LAB_014d2064:
  func_0x00f78af4();
LAB_014d2068:
  uVar3 = func_0x00f78b24();
  auVar9 = func_0x00f78ac0(uVar3,0);
  lVar2 = auVar9._0_8_;
  uVar3 = 0;
  uVar4 = auVar9._8_4_;
  if ((int)uVar4 < 0) {
    return 0;
  }
  if (*(char *)(lVar2 + 0x20) == '\0') {
    return 0;
  }
  lVar5 = *(long *)(lVar2 + 0x30);
  if (lVar5 == 0) {
code_r0x014d20ec:
    func_0x00f78af4(uVar3);
  }
  else {
    if (*(int *)(lVar5 + 0x18) <= (int)uVar4) {
      return 0;
    }
    if (*(char *)(lVar2 + 0x21) == '\0') {
      uVar3 = Atlas_Gameplay_RaceAIUtilityManager__UpdateValidData(lVar2);
      lVar5 = *(long *)(lVar2 + 0x30);
      if (lVar5 == 0) goto code_r0x014d20ec;
    }
    if (uVar4 < *(uint *)(lVar5 + 0x18)) {
      return *(long *)(lVar5 + (auVar9._8_8_ & 0xffffffff) * 8 + 0x20);
    }
  }
  uVar3 = func_0x00f78b24();
  auVar9 = func_0x00f78ac0(uVar3,0);
  if ((bRam0000000003eb4b8e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d3af50);
    func_0x00f78a20(0x3d3af58);
    bRam0000000003eb4b8e = 1;
  }
  uVar3 = 0;
  lVar2 = Atlas_League_LeagueModeSave__GetCharacterPositions(0xc,param_3,0);
  if (*(long *)(auVar9._0_8_ + 0x30) != 0) {
    if (lVar2 == 0) {
code_r0x014d2228:
      func_0x00f78af4();
code_r0x014d222c:
      uVar7 = func_0x00f78b24();
      auVar9 = func_0x00f78ac0(uVar7,0);
      if ((bRam0000000003eb4b8f & 1) == 0) {
        func_0x00f78a20(0x3d21270);
        func_0x00f78a20(0x3d57270);
        func_0x00f78a20(0x3d3af50);
        func_0x00f78a20(0x3d3af58);
        bRam0000000003eb4b8f = 1;
      }
      if ((param_4 != 0) &&
         (lVar2 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(param_4,auVar9._8_8_,uRam0000000003d57270), lVar2 != 0)) {
        if (*(long *)(auVar9._0_8_ + 0x30) != 0) {
          uVar7 = *(undefined8 *)(lVar2 + 0x70);
          lVar2 = Atlas_League_LeagueModeSave__GetCharacterPositions(0xc,uVar3,0);
          if (lVar2 == 0) goto code_r0x014d2398;
          uVar4 = *(uint *)(lVar2 + 0x18);
          if (0 < (int)uVar4) {
            uVar8 = 0;
            do {
              if (uVar4 <= uVar8) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar5 = *(long *)(*(long *)(lVar2 + 0x10) + (long)(int)uVar8 * 8 + 0x20);
              if (lVar5 == 0) goto code_r0x014d2398;
              uVar3 = *(undefined8 *)(lVar5 + 0x10);
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar1 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar3,uVar7,0);
              if (iVar1 != 0) {
                lVar2 = *(long *)(auVar9._0_8_ + 0x30);
                if (lVar2 == 0) goto code_r0x014d2398;
                if (uVar8 < *(uint *)(lVar2 + 0x18)) {
                  return *(long *)(lVar2 + (long)(int)uVar8 * 8 + 0x20);
                }
                goto code_r0x014d239c;
              }
              uVar8 = uVar8 + 1;
              uVar4 = *(uint *)(lVar2 + 0x18);
            } while ((int)uVar8 < (int)uVar4);
          }
        }
        return 0;
      }
code_r0x014d2398:
      func_0x00f78af4();
code_r0x014d239c:
      uVar3 = func_0x00f78b24();
      lVar2 = func_0x00f78ac0(uVar3,0);
      if (*(char *)(lVar2 + 0x21) == '\0') {
        lVar2 = Atlas_Gameplay_RaceAIUtilityManager__UpdateValidData(lVar2);
      }
      return lVar2;
    }
    uVar4 = *(uint *)(lVar2 + 0x18);
    if (0 < (int)uVar4) {
      uVar8 = 0;
      do {
        if (uVar4 <= uVar8) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar5 = *(long *)(*(long *)(lVar2 + 0x10) + (long)(int)uVar8 * 8 + 0x20);
        if (lVar5 == 0) goto code_r0x014d2228;
        uVar7 = *(undefined8 *)(lVar5 + 0x10);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar3 = 0;
        iVar1 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar7,auVar9._8_8_,0);
        if (iVar1 != 0) {
          lVar2 = *(long *)(auVar9._0_8_ + 0x30);
          if (lVar2 == 0) goto code_r0x014d2228;
          if (uVar8 < *(uint *)(lVar2 + 0x18)) {
            return *(long *)(lVar2 + (long)(int)uVar8 * 8 + 0x20);
          }
          goto code_r0x014d222c;
        }
        uVar8 = uVar8 + 1;
        uVar4 = *(uint *)(lVar2 + 0x18);
      } while ((int)uVar8 < (int)uVar4);
    }
  }
  return 0;
}



// ============================================================
// RVA: 0x14d2074 | Atlas.Gameplay.RaceAIUtilityManager.GetAIGroupBasedOnRacePlacement
// ============================================================

long Atlas_Gameplay_RaceAIUtilityManager__GetAIGroupBasedOnRacePlacement
               (long param_1,uint param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  
  uVar3 = 0;
  if ((int)param_2 < 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x20) == '\0') {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
LAB_014d20ec:
    func_0x00f78af4(uVar3);
  }
  else {
    if (*(int *)(lVar4 + 0x18) <= (int)param_2) {
      return 0;
    }
    if (*(char *)(param_1 + 0x21) == '\0') {
      uVar3 = Atlas_Gameplay_RaceAIUtilityManager__UpdateValidData(param_1);
      lVar4 = *(long *)(param_1 + 0x30);
      if (lVar4 == 0) goto LAB_014d20ec;
    }
    if (param_2 < *(uint *)(lVar4 + 0x18)) {
      return *(long *)(lVar4 + (ulong)param_2 * 8 + 0x20);
    }
  }
  uVar3 = func_0x00f78b24();
  auVar8 = func_0x00f78ac0(uVar3,0);
  if ((bRam0000000003eb4b8e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d3af50);
    func_0x00f78a20(0x3d3af58);
    bRam0000000003eb4b8e = 1;
  }
  uVar3 = 0;
  lVar4 = Atlas_League_LeagueModeSave__GetCharacterPositions(0xc,param_3,0);
  if (*(long *)(auVar8._0_8_ + 0x30) != 0) {
    if (lVar4 == 0) {
code_r0x014d2228:
      func_0x00f78af4();
code_r0x014d222c:
      uVar6 = func_0x00f78b24();
      auVar8 = func_0x00f78ac0(uVar6,0);
      if ((bRam0000000003eb4b8f & 1) == 0) {
        func_0x00f78a20(0x3d21270);
        func_0x00f78a20(0x3d57270);
        func_0x00f78a20(0x3d3af50);
        func_0x00f78a20(0x3d3af58);
        bRam0000000003eb4b8f = 1;
      }
      if ((param_4 != 0) &&
         (lVar4 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(param_4,auVar8._8_8_,uRam0000000003d57270), lVar4 != 0)) {
        if (*(long *)(auVar8._0_8_ + 0x30) != 0) {
          uVar6 = *(undefined8 *)(lVar4 + 0x70);
          lVar4 = Atlas_League_LeagueModeSave__GetCharacterPositions(0xc,uVar3,0);
          if (lVar4 == 0) goto code_r0x014d2398;
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (0 < (int)uVar1) {
            uVar7 = 0;
            do {
              if (uVar1 <= uVar7) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar5 = *(long *)(*(long *)(lVar4 + 0x10) + (long)(int)uVar7 * 8 + 0x20);
              if (lVar5 == 0) goto code_r0x014d2398;
              uVar3 = *(undefined8 *)(lVar5 + 0x10);
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar2 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar3,uVar6,0);
              if (iVar2 != 0) {
                lVar4 = *(long *)(auVar8._0_8_ + 0x30);
                if (lVar4 == 0) goto code_r0x014d2398;
                if (uVar7 < *(uint *)(lVar4 + 0x18)) {
                  return *(long *)(lVar4 + (long)(int)uVar7 * 8 + 0x20);
                }
                goto code_r0x014d239c;
              }
              uVar7 = uVar7 + 1;
              uVar1 = *(uint *)(lVar4 + 0x18);
            } while ((int)uVar7 < (int)uVar1);
          }
        }
        return 0;
      }
code_r0x014d2398:
      func_0x00f78af4();
code_r0x014d239c:
      uVar3 = func_0x00f78b24();
      lVar4 = func_0x00f78ac0(uVar3,0);
      if (*(char *)(lVar4 + 0x21) == '\0') {
        lVar4 = Atlas_Gameplay_RaceAIUtilityManager__UpdateValidData(lVar4);
      }
      return lVar4;
    }
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      uVar7 = 0;
      do {
        if (uVar1 <= uVar7) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar5 = *(long *)(*(long *)(lVar4 + 0x10) + (long)(int)uVar7 * 8 + 0x20);
        if (lVar5 == 0) goto code_r0x014d2228;
        uVar6 = *(undefined8 *)(lVar5 + 0x10);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar3 = 0;
        iVar2 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar6,auVar8._8_8_,0);
        if (iVar2 != 0) {
          lVar4 = *(long *)(auVar8._0_8_ + 0x30);
          if (lVar4 == 0) goto code_r0x014d2228;
          if (uVar7 < *(uint *)(lVar4 + 0x18)) {
            return *(long *)(lVar4 + (long)(int)uVar7 * 8 + 0x20);
          }
          goto code_r0x014d222c;
        }
        uVar7 = uVar7 + 1;
        uVar1 = *(uint *)(lVar4 + 0x18);
      } while ((int)uVar7 < (int)uVar1);
    }
  }
  return 0;
}



// ============================================================
// RVA: 0x14d20fc | Atlas.Gameplay.RaceAIUtilityManager.GetAIGroupBasedOnCharacter
// ============================================================

long Atlas_Gameplay_RaceAIUtilityManager__GetAIGroupBasedOnCharacter
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000003eb4b8e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d3af50);
    func_0x00f78a20(0x3d3af58);
    bRam0000000003eb4b8e = 1;
  }
  uVar4 = 0;
  lVar3 = Atlas_League_LeagueModeSave__GetCharacterPositions(0xc,param_3,0);
  if (*(long *)(param_1 + 0x30) != 0) {
    if (lVar3 == 0) {
LAB_014d2228:
      func_0x00f78af4();
code_r0x014d222c:
      uVar6 = func_0x00f78b24();
      auVar8 = func_0x00f78ac0(uVar6,0);
      if ((bRam0000000003eb4b8f & 1) == 0) {
        func_0x00f78a20(0x3d21270);
        func_0x00f78a20(0x3d57270);
        func_0x00f78a20(0x3d3af50);
        func_0x00f78a20(0x3d3af58);
        bRam0000000003eb4b8f = 1;
      }
      if ((param_4 != 0) &&
         (lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(param_4,auVar8._8_8_,uRam0000000003d57270), lVar3 != 0)) {
        if (*(long *)(auVar8._0_8_ + 0x30) != 0) {
          uVar6 = *(undefined8 *)(lVar3 + 0x70);
          lVar3 = Atlas_League_LeagueModeSave__GetCharacterPositions(0xc,uVar4,0);
          if (lVar3 == 0) goto code_r0x014d2398;
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (0 < (int)uVar1) {
            uVar7 = 0;
            do {
              if (uVar1 <= uVar7) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar5 = *(long *)(*(long *)(lVar3 + 0x10) + (long)(int)uVar7 * 8 + 0x20);
              if (lVar5 == 0) goto code_r0x014d2398;
              uVar4 = *(undefined8 *)(lVar5 + 0x10);
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar2 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar4,uVar6,0);
              if (iVar2 != 0) {
                lVar3 = *(long *)(auVar8._0_8_ + 0x30);
                if (lVar3 == 0) goto code_r0x014d2398;
                if (uVar7 < *(uint *)(lVar3 + 0x18)) {
                  return *(long *)(lVar3 + (long)(int)uVar7 * 8 + 0x20);
                }
                goto code_r0x014d239c;
              }
              uVar7 = uVar7 + 1;
              uVar1 = *(uint *)(lVar3 + 0x18);
            } while ((int)uVar7 < (int)uVar1);
          }
        }
        return 0;
      }
code_r0x014d2398:
      func_0x00f78af4();
code_r0x014d239c:
      uVar4 = func_0x00f78b24();
      lVar3 = func_0x00f78ac0(uVar4,0);
      if (*(char *)(lVar3 + 0x21) == '\0') {
        lVar3 = Atlas_Gameplay_RaceAIUtilityManager__UpdateValidData(lVar3);
      }
      return lVar3;
    }
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      uVar7 = 0;
      do {
        if (uVar1 <= uVar7) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar5 = *(long *)(*(long *)(lVar3 + 0x10) + (long)(int)uVar7 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_014d2228;
        uVar6 = *(undefined8 *)(lVar5 + 0x10);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar4 = 0;
        iVar2 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar6,param_2,0);
        if (iVar2 != 0) {
          lVar3 = *(long *)(param_1 + 0x30);
          if (lVar3 == 0) goto LAB_014d2228;
          if (uVar7 < *(uint *)(lVar3 + 0x18)) {
            return *(long *)(lVar3 + (long)(int)uVar7 * 8 + 0x20);
          }
          goto code_r0x014d222c;
        }
        uVar7 = uVar7 + 1;
        uVar1 = *(uint *)(lVar3 + 0x18);
      } while ((int)uVar7 < (int)uVar1);
    }
  }
  return 0;
}



// ============================================================
// RVA: 0x14d2238 | Atlas.Gameplay.RaceAIUtilityManager.GetAiGroupBasedOnAlternateCharacter
// ============================================================

long Atlas_Gameplay_RaceAIUtilityManager__GetAiGroupBasedOnAlternateCharacter
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  
  if ((bRam0000000003eb4b8f & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3af50);
    func_0x00f78a20(0x3d3af58);
    bRam0000000003eb4b8f = 1;
  }
  if ((param_4 != 0) && (lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(param_4,param_2,uRam0000000003d57270), lVar3 != 0))
  {
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar5 = *(undefined8 *)(lVar3 + 0x70);
      lVar3 = Atlas_League_LeagueModeSave__GetCharacterPositions(0xc,param_3,0);
      if (lVar3 == 0) goto LAB_014d2398;
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (0 < (int)uVar1) {
        uVar7 = 0;
        do {
          if (uVar1 <= uVar7) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar4 = *(long *)(*(long *)(lVar3 + 0x10) + (long)(int)uVar7 * 8 + 0x20);
          if (lVar4 == 0) goto LAB_014d2398;
          uVar6 = *(undefined8 *)(lVar4 + 0x10);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar2 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar6,uVar5,0);
          if (iVar2 != 0) {
            lVar3 = *(long *)(param_1 + 0x30);
            if (lVar3 == 0) goto LAB_014d2398;
            if (uVar7 < *(uint *)(lVar3 + 0x18)) {
              return *(long *)(lVar3 + (long)(int)uVar7 * 8 + 0x20);
            }
            goto code_r0x014d239c;
          }
          uVar7 = uVar7 + 1;
          uVar1 = *(uint *)(lVar3 + 0x18);
        } while ((int)uVar7 < (int)uVar1);
      }
    }
    return 0;
  }
LAB_014d2398:
  func_0x00f78af4();
code_r0x014d239c:
  uVar5 = func_0x00f78b24();
  lVar3 = func_0x00f78ac0(uVar5,0);
  if (*(char *)(lVar3 + 0x21) == '\0') {
    lVar3 = Atlas_Gameplay_RaceAIUtilityManager__UpdateValidData(lVar3);
  }
  return lVar3;
}



// ============================================================
// RVA: 0x14d23a8 | Atlas.Gameplay.RaceAIUtilityManager.GetReferenceHumanPlayerProgress
// ============================================================

undefined4 Atlas_Gameplay_RaceAIUtilityManager__GetReferenceHumanPlayerProgress(long param_1)

{
  if (*(char *)(param_1 + 0x21) == '\0') {
    Atlas_Gameplay_RaceAIUtilityManager__UpdateValidData(param_1);
  }
  return *(undefined4 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x14d23d8 | Atlas.Gameplay.RaceAIUtilityManager.LateUpdate
// ============================================================

void Atlas_Gameplay_RaceAIUtilityManager__LateUpdate(long param_1)

{
  *(undefined1 *)(param_1 + 0x21) = 0;
  return;
}



// ============================================================
// RVA: 0x14d23e0 | Atlas.Gameplay.RaceAIUtilityManager.DeInit
// ============================================================

void Atlas_Gameplay_RaceAIUtilityManager__DeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



// ============================================================
// RVA: 0x14d23f8 | Atlas.Gameplay.RaceAIUtilityManager..ctor
// ============================================================

void Atlas_Gameplay_RaceAIUtilityManager___ctor(void)

{
  return;
}



