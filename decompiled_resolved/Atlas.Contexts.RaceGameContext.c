// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.RaceGameContext

// ============================================================
// RVA: 0x14d2400 | Atlas.Contexts.RaceGameContext.GetContextName
// ============================================================

undefined8 Atlas_Contexts_RaceGameContext__GetContextName(void)

{
  if ((bRam0000000003eb4b90 & 1) == 0) {
    func_0x00f78a20(0x3d71920);
    bRam0000000003eb4b90 = 1;
  }
  return /*STR('RaceGameContext')*/ uRam0000000003d71920;
}



// ============================================================
// RVA: 0x14d2444 | Atlas.Contexts.RaceGameContext.get_NumberOfLaps
// ============================================================

undefined4 Atlas_Contexts_RaceGameContext__get_NumberOfLaps(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24c);
}



// ============================================================
// RVA: 0x14d244c | Atlas.Contexts.RaceGameContext.OnInit
// ============================================================

/* WARNING: Possible PIC construction at 0x014d28f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015aa69c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ae374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014d28f8) */
/* WARNING: Removing unreachable block (ram,0x015aa6a0) */
/* WARNING: Removing unreachable block (ram,0x015aa6b8) */
/* WARNING: Removing unreachable block (ram,0x015aa6c0) */
/* WARNING: Removing unreachable block (ram,0x015aa6c8) */
/* WARNING: Removing unreachable block (ram,0x015aa6e4) */
/* WARNING: Removing unreachable block (ram,0x015aa730) */
/* WARNING: Removing unreachable block (ram,0x015aa708) */
/* WARNING: Removing unreachable block (ram,0x015ae1c0) */
/* WARNING: Removing unreachable block (ram,0x015ae1e8) */
/* WARNING: Removing unreachable block (ram,0x015ae1fc) */
/* WARNING: Removing unreachable block (ram,0x015ae220) */
/* WARNING: Removing unreachable block (ram,0x015ae240) */
/* WARNING: Removing unreachable block (ram,0x015ae244) */
/* WARNING: Removing unreachable block (ram,0x015ae24c) */
/* WARNING: Removing unreachable block (ram,0x015ae224) */
/* WARNING: Removing unreachable block (ram,0x015ae228) */
/* WARNING: Removing unreachable block (ram,0x015ae230) */
/* WARNING: Removing unreachable block (ram,0x015ae204) */
/* WARNING: Removing unreachable block (ram,0x015ae208) */
/* WARNING: Removing unreachable block (ram,0x015ae210) */
/* WARNING: Removing unreachable block (ram,0x015ae258) */
/* WARNING: Removing unreachable block (ram,0x015ae26c) */
/* WARNING: Removing unreachable block (ram,0x015ae274) */
/* WARNING: Removing unreachable block (ram,0x015ae278) */
/* WARNING: Removing unreachable block (ram,0x015ae2b4) */
/* WARNING: Removing unreachable block (ram,0x015ae28c) */
/* WARNING: Removing unreachable block (ram,0x015ae294) */
/* WARNING: Removing unreachable block (ram,0x015ae2c4) */
/* WARNING: Removing unreachable block (ram,0x015ae2e4) */
/* WARNING: Removing unreachable block (ram,0x015ae310) */
/* WARNING: Removing unreachable block (ram,0x015ae330) */
/* WARNING: Removing unreachable block (ram,0x015ae340) */
/* WARNING: Removing unreachable block (ram,0x015ae348) */
/* WARNING: Removing unreachable block (ram,0x015ae34c) */
/* WARNING: Removing unreachable block (ram,0x015ae378) */
/* WARNING: Removing unreachable block (ram,0x015ae388) */
/* WARNING: Removing unreachable block (ram,0x015ae390) */
/* WARNING: Removing unreachable block (ram,0x015ae394) */
/* WARNING: Removing unreachable block (ram,0x015ae3d4) */
/* WARNING: Removing unreachable block (ram,0x015ae3a4) */
/* WARNING: Removing unreachable block (ram,0x015ae3ac) */
/* WARNING: Removing unreachable block (ram,0x015ae35c) */
/* WARNING: Removing unreachable block (ram,0x015ae3e4) */
/* WARNING: Removing unreachable block (ram,0x015ae364) */
/* WARNING: Removing unreachable block (ram,0x016b8cd4) */
/* WARNING: Removing unreachable block (ram,0x016b8d00) */
/* WARNING: Removing unreachable block (ram,0x016b8d14) */
/* WARNING: Removing unreachable block (ram,0x016b8d20) */
/* WARNING: Removing unreachable block (ram,0x016b8d28) */
/* WARNING: Removing unreachable block (ram,0x016b8d2c) */
/* WARNING: Removing unreachable block (ram,0x016962e4) */
/* WARNING: Removing unreachable block (ram,0x01696308) */
/* WARNING: Removing unreachable block (ram,0x01696328) */
/* WARNING: Removing unreachable block (ram,0x016963a8) */
/* WARNING: Removing unreachable block (ram,0x0169632c) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */
/* WARNING: Removing unreachable block (ram,0x01696364) */
/* WARNING: Removing unreachable block (ram,0x01696370) */
/* WARNING: Removing unreachable block (ram,0x01696378) */
/* WARNING: Removing unreachable block (ram,0x0169637c) */
/* WARNING: Removing unreachable block (ram,0x016963ac) */
/* WARNING: Removing unreachable block (ram,0x015ae2d8) */
/* WARNING: Removing unreachable block (ram,0x014b3b58) */
/* WARNING: Removing unreachable block (ram,0x014b3b70) */
/* WARNING: Removing unreachable block (ram,0x014b3b78) */
/* WARNING: Removing unreachable block (ram,0x015ae29c) */
/* WARNING: Removing unreachable block (ram,0x032c2184) */
/* WARNING: Removing unreachable block (ram,0x032c21bc) */
/* WARNING: Removing unreachable block (ram,0x032c21d0) */
/* WARNING: Removing unreachable block (ram,0x032c21e4) */
/* WARNING: Removing unreachable block (ram,0x032c21ec) */
/* WARNING: Removing unreachable block (ram,0x032c21f0) */
/* WARNING: Removing unreachable block (ram,0x032c22b0) */
/* WARNING: Removing unreachable block (ram,0x032c22bc) */
/* WARNING: Removing unreachable block (ram,0x032c22c4) */
/* WARNING: Removing unreachable block (ram,0x032c22c8) */
/* WARNING: Removing unreachable block (ram,0x032c22dc) */
/* WARNING: Removing unreachable block (ram,0x032c22e0) */
/* WARNING: Removing unreachable block (ram,0x032c232c) */
/* WARNING: Removing unreachable block (ram,0x032c2330) */
/* WARNING: Removing unreachable block (ram,0x032c2354) */
/* WARNING: Removing unreachable block (ram,0x032c235c) */
/* WARNING: Removing unreachable block (ram,0x032c2360) */
/* WARNING: Removing unreachable block (ram,0x032c2204) */
/* WARNING: Removing unreachable block (ram,0x032c2214) */
/* WARNING: Removing unreachable block (ram,0x032c221c) */
/* WARNING: Removing unreachable block (ram,0x032c2220) */
/* WARNING: Removing unreachable block (ram,0x032c242c) */
/* WARNING: Removing unreachable block (ram,0x032c2234) */
/* WARNING: Removing unreachable block (ram,0x032c223c) */
/* WARNING: Removing unreachable block (ram,0x032c226c) */
/* WARNING: Removing unreachable block (ram,0x032c2274) */
/* WARNING: Removing unreachable block (ram,0x032c2278) */
/* WARNING: Removing unreachable block (ram,0x032c236c) */
/* WARNING: Removing unreachable block (ram,0x032c2288) */
/* WARNING: Removing unreachable block (ram,0x032c228c) */
/* WARNING: Removing unreachable block (ram,0x032c2374) */
/* WARNING: Removing unreachable block (ram,0x032c2378) */
/* WARNING: Removing unreachable block (ram,0x032c237c) */
/* WARNING: Removing unreachable block (ram,0x032c2380) */
/* WARNING: Removing unreachable block (ram,0x032c2394) */
/* WARNING: Removing unreachable block (ram,0x032c23ac) */
/* WARNING: Removing unreachable block (ram,0x032c23b4) */
/* WARNING: Removing unreachable block (ram,0x032c23b8) */
/* WARNING: Removing unreachable block (ram,0x032c23cc) */
/* WARNING: Removing unreachable block (ram,0x032c2448) */
/* WARNING: Removing unreachable block (ram,0x032c23d0) */
/* WARNING: Removing unreachable block (ram,0x032c23e0) */
/* WARNING: Removing unreachable block (ram,0x032c23ec) */
/* WARNING: Removing unreachable block (ram,0x032c23f4) */
/* WARNING: Removing unreachable block (ram,0x032c23f8) */
/* WARNING: Removing unreachable block (ram,0x032c2400) */
/* WARNING: Removing unreachable block (ram,0x032c244c) */
/* WARNING: Removing unreachable block (ram,0x032c2474) */
/* WARNING: Removing unreachable block (ram,0x032c2494) */
/* WARNING: Removing unreachable block (ram,0x032c24ac) */
/* WARNING: Removing unreachable block (ram,0x032c24b4) */
/* WARNING: Removing unreachable block (ram,0x032c24b8) */
/* WARNING: Removing unreachable block (ram,0x032c24cc) */
/* WARNING: Removing unreachable block (ram,0x032c2550) */
/* WARNING: Removing unreachable block (ram,0x032c24d8) */
/* WARNING: Removing unreachable block (ram,0x032c24f0) */
/* WARNING: Removing unreachable block (ram,0x032c24f8) */
/* WARNING: Removing unreachable block (ram,0x032c24fc) */
/* WARNING: Removing unreachable block (ram,0x032c2510) */
/* WARNING: Removing unreachable block (ram,0x032c2524) */
/* WARNING: Removing unreachable block (ram,0x032c252c) */
/* WARNING: Removing unreachable block (ram,0x032c2530) */
/* WARNING: Removing unreachable block (ram,0x032c2540) */
/* WARNING: Removing unreachable block (ram,0x015ac734) */
/* WARNING: Type propagation algorithm not settling */

long * Atlas_Contexts_RaceGameContext__OnInit
                 (undefined1 param_1 [16],ulong param_2,ulong param_3,float param_4,long param_5,
                 long param_6,long param_7)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  int extraout_w1;
  long extraout_x1;
  long extraout_x1_00;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  ulong uVar20;
  char cVar21;
  long *plVar22;
  code *pcVar23;
  long *plVar24;
  long **unaff_x24;
  long **pplVar25;
  long lVar26;
  uint uVar27;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  uint uVar40;
  uint uVar41;
  undefined1 auVar42 [16];
  int iStack_3f4;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  long lStack_3e0;
  int aiStack_3d8 [5];
  int iStack_3c4;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  float fStack_3a8;
  undefined8 uStack_3a0;
  float fStack_398;
  undefined8 uStack_390;
  float fStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long lStack_370;
  undefined8 uStack_2d8;
  long *******ppppppplStack_2d0;
  undefined *puStack_2c8;
  long *plStack_2c0;
  long lStack_2b8;
  long **pplStack_2b0;
  long lStack_2a8;
  long ****pppplStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long ******pppppplStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 ******ppppppuStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long ******pppppplStack_220;
  undefined *puStack_218;
  long **pplStack_210;
  long *plStack_208;
  long *plStack_200;
  ulong uStack_1f8;
  long *plStack_1f0;
  long lStack_1e8;
  undefined8 ****ppppuStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  long lStack_1c8;
  long **pplStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  ulong uStack_1a8;
  long *plStack_1a0;
  undefined *puStack_198;
  undefined1 ***pppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  long *plStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  plVar12 = (long *)0x3d287c8;
  if ((bRam0000000003eb4b91 & 1) == 0) {
    func_0x00f78a20(0x3d287c8);
    bRam0000000003eb4b91 = 1;
  }
  plVar7 = (long *)func_0x00f78aec(/*Atlas.Contexts.RaceGameContext.<OnInit>d__8_TypeInfo*/ uRam0000000003d287c8);
  /*Atlas.Contexts.RaceGameContext.<OnInit>d__8$$.ctor*/ func_0x01563764(plVar7,0,0);
  if (plVar7 != (long *)0x0) {
    plVar7[4] = param_5;
    plVar7[5] = param_6;
    plVar7[6] = param_7;
    return plVar7;
  }
  lVar8 = func_0x00f78af4();
  puStack_48 = &Atlas_Contexts_RaceGameContext__OnDeInit;
  plStack_70 = plVar7;
  lStack_68 = param_5;
  lStack_60 = param_6;
  lStack_58 = param_7;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b92 & 1) == 0) {
    func_0x00f78a20(0x3d287c0);
    bRam0000000003eb4b92 = 1;
  }
  plVar7 = (long *)func_0x00f78aec(/*Atlas.Contexts.RaceGameContext.<OnDeInit>d__9_TypeInfo*/ uRam0000000003d287c0);
  /*Atlas.Contexts.RaceGameContext.<OnDeInit>d__9$$.ctor*/ func_0x0156348c(plVar7,0,0);
  if (plVar7 != (long *)0x0) {
    plVar7[4] = lVar8;
    return plVar7;
  }
  auVar42 = func_0x00f78af4();
  plVar7 = auVar42._8_8_;
  lVar8 = auVar42._0_8_;
  puStack_78 = &Atlas_Contexts_RaceGameContext__OnLateUpdate;
  uVar20 = 0x3eb4000;
  ppuStack_80 = &puStack_50;
  if ((bRam0000000003eb4b93 & 1) == 0) {
    func_0x00f78a20(0x3d21b10);
    func_0x00f78a20(0x3d1d448);
    func_0x00f78a20(0x3d1d578);
    bRam0000000003eb4b93 = 1;
  }
  puVar16 = (undefined8 *)0x0;
  Atlas_Contexts_GameContextBase__OnLateUpdate(lVar8,plVar7);
  plVar13 = (long *)0x0;
  plVar22 = plVar13;
  plVar24 = plVar12;
  if (*(long *)(lVar8 + 0x40) != 0) {
    lVar9 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetLocalGameContextPlayer*/ func_0x01599b24(*(long *)(lVar8 + 0x40),0);
    if (lVar9 == 0) {
      return (long *)0x0;
    }
    plVar7 = *(long **)(lVar8 + 0x250);
    uVar10 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar9,0);
    if (plVar7 != (long *)0x0) {
      puVar16 = (undefined8 *)0x0;
      /*Atlas.Audio.AtlasAudioManager$$UpdateLaps*/ func_0x01459740(plVar7,uVar10);
      plVar24 = (long *)0x3d287c8;
      if ((*(long *)(lVar8 + 0x40) != 0) &&
         (plVar7 = *(long **)(*(long *)(lVar8 + 0x40) + 0x28), plVar7 != (long *)0x0)) {
        uVar20 = 0;
        pplVar25 = (long **)0x3d1d578;
        uVar10 = 0x3d1d448;
        uVar28 = 0x3d21b10;
        plVar24 = plVar12;
        do {
          lVar9 = *plVar7;
          uVar18 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == /*System.Collections.Generic.IReadOnlyCollection<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d578) {
                puVar11 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
                goto code_r0x014d2664;
              }
              piVar19 = piVar19 + 4;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          puVar16 = (undefined8 *)0x0;
          puVar11 = (undefined8 *)func_0x00fac1f0(plVar7);
code_r0x014d2664:
          plVar12 = (long *)(*(code *)*puVar11)(plVar7,puVar11[1]);
          if ((int)plVar12 <= (int)uVar20) {
            return plVar12;
          }
          plVar22 = plVar13;
          unaff_x24 = (long **)0x3d1d578;
          unaff_x25 = 0x3d1d448;
          unaff_x26 = 0x3d21b10;
          if ((*(long *)(lVar8 + 0x40) == 0) ||
             (plVar22 = *(long **)(*(long *)(lVar8 + 0x40) + 0x28), plVar22 == (long *)0x0)) break;
          lVar9 = *plVar22;
          uVar18 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == /*System.Collections.Generic.IList<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d448) {
                puVar11 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
                goto code_r0x014d26d4;
              }
              piVar19 = piVar19 + 4;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          puVar11 = (undefined8 *)func_0x00fac1f0(plVar22,/*System.Collections.Generic.IList<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d448,0);
code_r0x014d26d4:
          puVar16 = (undefined8 *)puVar11[1];
          plVar13 = (long *)(*(code *)*puVar11)(plVar22,uVar20);
          unaff_x24 = pplVar25;
          unaff_x25 = uVar10;
          unaff_x26 = uVar28;
          if (plVar13 == (long *)0x0) break;
          if ((char)plVar13[0x13] == '\0') {
            plVar22 = plVar13;
            if (plVar13[2] == 0) break;
            if ((((*(uint *)(plVar13[2] + 0x50) | 2) == 2) &&
                (iVar4 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(plVar13,0), *(int *)(lVar8 + 0x24c) < iVar4)) &&
               (*(char *)(lVar8 + 0x238) == '\0')) {
              if ((*(long *)(lVar8 + 600) == 0) ||
                 (lVar9 = *(long *)(*(long *)(lVar8 + 600) + 0x20), lVar9 == 0)) break;
              /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_148,lVar9,0);
              uStack_128 = uStack_140;
              uStack_130 = uStack_148;
              uStack_120 = uStack_138;
              uStack_158 = uStack_140;
              uStack_160 = uStack_148;
              uStack_150 = uStack_138;
              puVar16 = (undefined8 *)0x0;
              /*Atlas.Gameplay.Player.GameContextPlayer$$OnFinishedGame*/ func_0x015a5760(plVar13,&uStack_160);
              if ((*(long *)(lVar8 + 600) == 0) || (lVar9 = plVar13[2], lVar9 == 0)) break;
              plVar24 = *(long **)(*(long *)(lVar8 + 600) + 0x20);
              uStack_178 = *(undefined8 *)(lVar9 + 0x50);
              uStack_180 = *(undefined8 *)(lVar9 + 0x48);
              uStack_168 = *(undefined8 *)(lVar9 + 0x60);
              param_2 = *(ulong *)(lVar9 + 0x58);
              uStack_170 = param_2;
              /*Atlas.Gameplay.Player.GameContextPlayer$$GetRaceProgress*/ func_0x015a569c(plVar13,0);
              if (plVar24 == (long *)0x0) break;
              puVar16 = (undefined8 *)(ulong)*(uint *)(plVar13 + 0xf);
              uStack_e8 = uStack_178;
              uStack_f0 = uStack_180;
              uStack_d8 = uStack_168;
              uStack_e0 = uStack_170;
              uStack_108 = uStack_128;
              uStack_110 = uStack_130;
              uStack_100 = uStack_120;
              param_2 = uStack_130;
              param_3 = uStack_170;
              (**(code **)(*plVar24 + 0x248))
                        (plVar24,&uStack_f0,puVar16,0,&uStack_110,*(undefined8 *)(*plVar24 + 0x250))
              ;
              iVar4 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_IsLocalPlayer*/ func_0x0159dd28(plVar13,0);
              if (iVar4 != 0) {
                if (*(long *)(lVar8 + 0x20) == 0) break;
                plVar12 = (long *)/*Core.StateManagement.StateMachine$$get_ActiveState*/ func_0x02b95214(*(long *)(lVar8 + 0x20),0);
                if (plVar12 != (long *)0x0) {
                  if ((*(byte *)(/*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10 + 300) <= *(byte *)(*plVar12 + 300)) &&
                     (*(long *)(*(long *)(*plVar12 + 200) +
                                (ulong)*(byte *)(/*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10 + 300) * 8 + -8) ==
                      /*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10)) {
                    Atlas_Contexts_GameContextBaseInProgressState__NotifyGameContextFinished
                              (plVar12,0);
                  }
                }
              }
            }
          }
          uVar20 = (ulong)((int)uVar20 + 1);
        } while( true );
      }
    }
  }
  func_0x00f78af4();
  if (extraout_x1 != 0) {
    plVar12 = *(long **)(extraout_x1 + 0x60);
    if (plVar12 == (long *)0x0) {
      return (long *)0x0;
    }
    uVar10 = 0;
    plStack_1d0 = (long *)unaff_x26;
    lStack_1c8 = unaff_x25;
    pplStack_1c0 = unaff_x24;
    plStack_1b8 = plVar24;
    plStack_1b0 = plVar22;
    uStack_1a8 = uVar20;
    plStack_1a0 = plVar7;
    puStack_198 = (undefined *)lVar8;
    pppuStack_190 = &ppuStack_80;
    puStack_188 = &Atlas_Contexts_RaceGameContext__GameComplete;
    plStack_1d8 = plVar12;
    lVar8 = plVar12[0xd];
    if (lVar8 == 0) {
      pplVar25 = &plStack_1d8;
      lVar9 = 1;
    }
    else {
      lVar9 = *(long *)(lVar8 + 0x18);
      if (lVar9 == 0) {
        return plVar12;
      }
      pplVar25 = (long **)(lVar8 + 0x20);
    }
    lVar8 = 0;
    do {
      plVar13 = pplVar25[lVar8];
      pcVar23 = (code *)plVar13[2];
      plVar7 = (long *)plVar13[4];
      lVar15 = plVar13[5];
      if (*(short *)(lVar15 + 0x48) == -1) {
        func_0x00f78ad8(lVar15,uVar10);
      }
      iVar4 = func_0x00f78a4c(lVar15);
      if (iVar4 == 0) {
        if ((((plVar7 == (long *)0x0) || (*(short *)(lVar15 + 0x48) == -1)) ||
            ((*(byte *)(*plVar7 + 0x115) & 1) != 0)) || (plVar12[3] == 0)) goto code_r0x02924d98;
        iVar4 = func_0x00f78a44(lVar15);
        iVar6 = func_0x00f78ec0(lVar15);
        if (iVar4 == 0) {
          uVar1 = *(ushort *)(lVar15 + 0x48);
          if (iVar6 == 0) {
            lVar15 = *plVar7 + (ulong)uVar1 * 0x10;
            auVar42 = (**(code **)(lVar15 + 0x138))(plVar7,*(undefined8 *)(lVar15 + 0x140));
            goto code_r0x02924da4;
          }
          lVar15 = func_0x00f78a48(lVar15);
          lVar17 = *plVar7;
          uVar20 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar20 != 0) {
            piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == lVar15) {
                puVar16 = (undefined8 *)
                          (lVar17 + (long)(int)(*piVar19 + (uint)uVar1) * 0x10 + 0x138);
                goto code_r0x02924e68;
              }
              piVar19 = piVar19 + 4;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
          puVar16 = (undefined8 *)func_0x00fac1f0(plVar7,lVar15,(ulong)uVar1);
code_r0x02924e68:
          pcVar23 = (code *)*puVar16;
          puVar16 = (undefined8 *)puVar16[1];
        }
        else {
          if (iVar6 == 0) {
            uVar10 = *(undefined8 *)(*plVar7 + (ulong)*(ushort *)(lVar15 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar17 = *plVar7;
            uVar20 = (ulong)*(ushort *)(lVar17 + 0x12a);
            if (uVar20 != 0) {
              piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)(lVar15 + 0x18)) {
                  lVar17 = lVar17 + (long)(int)(*piVar19 + (uint)*(ushort *)(lVar15 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02924e40;
                }
                piVar19 = piVar19 + 4;
                uVar20 = uVar20 - 1;
              } while (uVar20 != 0);
            }
            lVar17 = func_0x00fac1f0(plVar7);
code_r0x02924e40:
            uVar10 = *(undefined8 *)(lVar17 + 8);
          }
          puVar16 = (undefined8 *)func_0x00f78acc(uVar10,lVar15);
          pcVar23 = (code *)*puVar16;
        }
        auVar42 = (*pcVar23)(plVar7,puVar16);
      }
      else if (*(char *)(lVar15 + 0x4a) == '\0') {
        auVar42 = (*pcVar23)(lVar15);
      }
      else {
code_r0x02924d98:
        auVar42 = (*pcVar23)(plVar7,lVar15);
      }
code_r0x02924da4:
      uVar10 = auVar42._8_8_;
      lVar8 = lVar8 + 1;
      if (lVar8 == lVar9) {
        return auVar42._0_8_;
      }
    } while( true );
  }
  puStack_188 = &Atlas_Contexts_RaceGameContext__GameComplete;
  pppuStack_190 = &ppuStack_80;
  func_0x00f78af4();
  puStack_198 = &Atlas_Contexts_RaceGameContext__GetRankingForPlayer;
  *puVar16 = 0;
  puVar16[1] = 0;
  puVar16[2] = 0;
  plStack_1b0 = plVar7;
  uStack_1a8 = lVar8;
  if (extraout_x1_00 != 0) {
    plStack_1a0 = (long *)&pppuStack_190;
    plVar12 = (long *)/*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(extraout_x1_00,0);
    return plVar12;
  }
  plStack_1a0 = (long *)&pppuStack_190;
  auVar42 = func_0x00f78af4();
  lVar9 = auVar42._8_8_;
  plStack_1b8 = (long *)&Atlas_Contexts_RaceGameContext__SetupGameContextScreen;
  *(long *)(auVar42._0_8_ + 0x48) = lVar9;
  pplStack_210 = unaff_x24;
  plStack_208 = plVar24;
  plStack_200 = plVar22;
  uStack_1f8 = uVar20;
  plStack_1f0 = plVar7;
  ppppuStack_1e0 = (undefined8 ****)&pplStack_1c0;
  plStack_1d0 = plVar7;
  lStack_1c8 = lVar8;
  pplStack_1c0 = &plStack_1a0;
  if (puVar16 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar16 + 0x52) = 0;
    lVar8 = 0;
    if (lVar9 != 0) {
      plStack_1d8 = (long *)&UNK_014d28f8;
      lStack_1e8 = lVar9;
      if ((bRam0000000003eb522b & 1) == 0) {
        func_0x00f78a20(0x3d41080,8,0,0);
        bRam0000000003eb522b = 1;
      }
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41080);
      if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x015ac724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar12 = (long *)(*(code *)(&UNK_015ac728 + (ulong)UNK_033f8a48 * 4))(lVar8,8,0,0);
        return plVar12;
      }
      uVar10 = func_0x00f78af4();
      uStack_240 = 0x3eb5000;
      uStack_230 = 8;
      uStack_228 = 0;
      puStack_218 = &Atlas_UI_Screens_GameInProgressScreen__UpdateArcade;
      lStack_238 = lVar9;
      pppppplStack_220 = (long ******)&ppppuStack_1e0;
      if ((bRam0000000003eb5227 & 1) == 0) {
        func_0x00f78a20(0x3d41088);
        bRam0000000003eb5227 = 1;
      }
      plVar12 = (long *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar10,uRam0000000003d41088);
      if ((plVar12 != (long *)0x0) && (plVar12[6] != 0)) {
        return plVar12;
      }
      uVar28 = func_0x00f78af4();
      uStack_270 = 0x3eb5000;
      uStack_268 = 0x3d41088;
      uStack_260 = 0x3eb5000;
      puStack_248 = &Atlas_UI_Screens_GameInProgressScreen__OnLateUpdate;
      pppppplStack_280 = (long ******)&ppppppuStack_250;
      uStack_258 = uVar10;
      ppppppuStack_250 = &pppppplStack_220;
      if ((bRam0000000003eb5228 & 1) == 0) {
        func_0x00f78a20(0x3d41080);
        func_0x00f78a20(0x3d41088);
        bRam0000000003eb5228 = 1;
      }
      lStack_2a8 = 0x3d41080;
      pppplStack_2a0 = (long ****)0x3eb5000;
      puStack_298 = (undefined *)0x3eb5000;
      uStack_290 = 0x3d41088;
      puStack_278 = &UNK_015aa6a0;
      pplStack_2b0 = unaff_x24;
      uStack_288 = uVar28;
      if ((bRam0000000003eb522e & 1) == 0) {
        func_0x00f78a20(0x3d3b9d0);
        func_0x00f78a20(0x3d3b898);
        func_0x00f78a20(0x3d41080);
        func_0x00f78a20(0x3d41088);
        bRam0000000003eb522e = 1;
      }
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar28,uRam0000000003d41088);
      if (((lVar8 != 0) && (*(long *)(lVar8 + 0x38) != 0)) &&
         (lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 200), lVar8 != 0)) {
        iVar4 = *(int *)(lVar8 + 0x18);
        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar28,uRam0000000003d41088);
        if (((lVar8 != 0) && (*(long *)(lVar8 + 0x38) != 0)) &&
           (lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0xd0), lVar8 != 0)) {
          iVar6 = *(int *)(lVar8 + 0x18);
          lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar28,uRam0000000003d41080);
          if (lVar8 != 0) {
            /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetWeaponIndicatorActive*/ func_0x015adeac(lVar8,0 < iVar6 + iVar4,0);
            lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar28,uRam0000000003d41080);
            lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar28,uRam0000000003d41088);
            if (((lVar9 != 0) && (*(long *)(lVar9 + 0x38) != 0)) &&
               (lStack_2b8 = *(long *)(*(long *)(lVar9 + 0x38) + 200), lVar8 != 0)) {
              /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetCulturePodWeaponIndicatorArrows*/ func_0x015adf10(lVar8,&lStack_2b8,0);
              lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar28,uRam0000000003d41080);
              lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar28,uRam0000000003d41088);
              if (((lVar9 != 0) && (*(long *)(lVar9 + 0x38) != 0)) &&
                 (plStack_2c0 = *(long **)(*(long *)(lVar9 + 0x38) + 0xd0), lVar8 != 0)) {
                plVar12 = (long *)/*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetSheldonWeaponIndicatorArrows*/ func_0x015ae03c(lVar8,&plStack_2c0,0);
                return plVar12;
              }
            }
          }
        }
      }
      lVar8 = func_0x00f78af4();
      puStack_2c8 = &Atlas_UI_Screens_GameInProgressScreen__UpdateKartIndicator;
      uStack_2d8 = uVar28;
      ppppppplStack_2d0 = &pppppplStack_280;
      if ((bRam0000000003eb5230 & 1) == 0) {
        func_0x00f78a20(0x3d33450);
        func_0x00f78a20(0x3d33458);
        func_0x00f78a20(0x3d33460);
        func_0x00f78a20(0x3d3d1c8);
        func_0x00f78a20(0x3d41080);
        func_0x00f78a20(0x3d41088);
        func_0x00f78a20(0x3d41090);
        bRam0000000003eb5230 = 1;
      }
      uStack_380 = 0;
      uStack_378 = 0;
      lStack_370 = 0;
      fStack_388 = 0.0;
      uStack_390 = 0;
      fStack_398 = 0.0;
      uStack_3a0 = 0;
      fStack_3a8 = 0.0;
      uStack_3b8 = 0;
      uStack_3b0 = 0;
      uStack_3c0 = 0;
      iStack_3c4 = 0;
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if (((lVar9 == 0) || (*(long *)(lVar9 + 0x1c0) == 0)) ||
         (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar9 + 0x1c0),0), lVar9 == 0)) goto code_r0x015ab4c4;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar9,*(char *)(lVar8 + 0x109) == '\0',0);
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if (((lVar9 == 0) || (*(long *)(lVar9 + 0x1c0) == 0)) ||
         (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar9 + 0x1c0),0), lVar9 == 0)) goto code_r0x015ab4c4;
      plVar12 = (long *)/*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar9,0);
      if ((int)plVar12 == 0) {
        return plVar12;
      }
      *(undefined1 *)(lVar8 + 0x9c) = 0;
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar8,uRam0000000003d41090);
      if ((lVar9 == 0) || (*(long *)(lVar9 + 0x40) == 0)) goto code_r0x015ab4c4;
      lVar9 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(lVar9 + 0x40),0);
      if (*(long *)(lVar8 + 0x78) == 0) {
code_r0x015aaa34:
        lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar8,uRam0000000003d41088);
        if ((lVar15 == 0) || (*(long *)(lVar15 + 0x38) == 0)) goto code_r0x015ab4c4;
        if (*(int *)(*(long *)(lVar15 + 0x38) + 0x74) == 1) {
          *(undefined8 *)(lVar8 + 0x78) = *(undefined8 *)(lVar8 + 0x80);
        }
      }
      else {
        lVar15 = *(long *)(*(long *)(lVar8 + 0x78) + 0x10);
        if (lVar15 == 0) goto code_r0x015ab4c4;
        if (*(int *)(lVar15 + 0x74) != 1) goto code_r0x015aaa34;
      }
      plVar12 = (long *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if (plVar12 == (long *)0x0) {
code_r0x015ab4c4:
        func_0x00f78af4();
code_r0x015ab4c8:
        uVar10 = func_0x00f78b24();
        func_0x00f78ac0(uVar10,0);
        __Unwind_Resume();
code_r0x015ab4d8:
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x15ab4dc);
        (*pcVar23)();
      }
      iVar6 = 0;
      iVar4 = 0;
      iStack_3f4 = 0;
      uVar27 = 0;
code_r0x015aaa94:
      if (plVar12[0x39] == 0) goto code_r0x015ab4c4;
      if (*(int *)(plVar12[0x39] + 0x18) <= (int)uVar27) {
        return plVar12;
      }
      if (*(int *)(lVar8 + 0xbc) <= iStack_3f4) {
        return plVar12;
      }
      lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x1c8), lVar15 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar15 + 0x18) <= uVar27) goto code_r0x015ab4c8;
      lVar17 = (long)(int)uVar27;
      lVar15 = *(long *)(lVar15 + lVar17 * 8 + 0x20);
      if (lVar15 == 0) goto code_r0x015ab4c4;
      if (*(long *)(lVar15 + 0x80) == 0) {
        bVar3 = false;
      }
      else {
        lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
        if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x1c8), lVar15 == 0))
        goto code_r0x015ab4c4;
        if (*(uint *)(lVar15 + 0x18) <= uVar27) goto code_r0x015ab4c8;
        lVar15 = *(long *)(lVar15 + lVar17 * 8 + 0x20);
        if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x80), lVar15 == 0))
        goto code_r0x015ab4c4;
        bVar3 = *(int *)(lVar15 + 0x74) == 1;
      }
      lVar15 = *(long *)(lVar8 + 0x78);
      if ((bool)(bVar3 & lVar15 == 0)) {
        if (*(long *)(lVar8 + 0x70) == 0) goto code_r0x015ab4c4;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_3f0,*(long *)(lVar8 + 0x70),uRam0000000003d3d1c8);
        uStack_378 = uStack_3e8;
        uStack_380 = uStack_3f0;
        lStack_370 = lStack_3e0;
        do {
          uVar20 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_380,uRam0000000003d33458);
          lVar15 = lStack_370;
          if ((uVar20 & 1) == 0) goto code_r0x015aabdc;
          if (lStack_370 == 0) {
            func_0x00f78af4();
            goto code_r0x015ab4d8;
          }
          lVar26 = *(long *)(lStack_370 + 0x10);
          lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
          if (lVar14 == 0) {
            func_0x00f78af4();
            goto code_r0x015ab4d8;
          }
          lVar14 = *(long *)(lVar14 + 0x1c8);
          if (lVar14 == 0) {
            func_0x00f78af4();
            goto code_r0x015ab4d8;
          }
          if (*(uint *)(lVar14 + 0x18) <= uVar27) {
            uVar10 = func_0x00f78b24();
            func_0x00f78ac0(uVar10,0);
            goto code_r0x015ab4d8;
          }
          lVar14 = *(long *)(lVar14 + lVar17 * 8 + 0x20);
          if (lVar14 == 0) {
            func_0x00f78af4();
            goto code_r0x015ab4d8;
          }
        } while (lVar26 != *(long *)(lVar14 + 0x80));
        *(long *)(lVar8 + 0x78) = lVar15;
code_r0x015aabdc:
        aiStack_3d8[iVar4] = 0x132;
        iVar6 = iStack_3c4;
        iVar4 = iStack_3c4 + 1;
        iStack_3c4 = iVar4;
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_380,uRam0000000003d33450);
        if ((iVar4 != 0) && (aiStack_3d8[iVar6] == 0x132)) {
          iStack_3c4 = iVar6;
          iVar4 = iVar6;
        }
        lVar15 = *(long *)(lVar8 + 0x78);
        iVar6 = iVar4;
      }
      if (lVar15 == 0) {
code_r0x015aac8c:
        uVar10 = 0;
        cVar21 = '\0';
      }
      else {
        lVar14 = *(long *)(lVar15 + 0x10);
        lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
        if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x1c8), lVar15 == 0))
        goto code_r0x015ab4c4;
        if (*(uint *)(lVar15 + 0x18) <= uVar27) goto code_r0x015ab4c8;
        lVar15 = *(long *)(lVar15 + lVar17 * 8 + 0x20);
        if (lVar15 == 0) goto code_r0x015ab4c4;
        if (!(bool)(bVar3 & lVar14 == *(long *)(lVar15 + 0x80))) goto code_r0x015aac8c;
        cVar21 = *(char *)(lVar8 + 0xb8);
        uVar10 = 1;
      }
      lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x1c8), lVar15 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar15 + 0x18) <= uVar27) goto code_r0x015ab4c8;
      lVar15 = *(long *)(lVar15 + lVar17 * 8 + 0x20);
      if (lVar15 == 0) goto code_r0x015ab4c4;
      if (*(long *)(lVar15 + 0x80) != 0) {
        lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
        if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x1c8), lVar15 == 0))
        goto code_r0x015ab4c4;
        if (*(uint *)(lVar15 + 0x18) <= uVar27) goto code_r0x015ab4c8;
        lVar15 = *(long *)(lVar15 + lVar17 * 8 + 0x20);
        if (lVar15 == 0) goto code_r0x015ab4c4;
        iVar5 = /*Atlas.UI.KartIndicatorBehaviour$$get_CanUpdateTarget*/ func_0x015cc628(lVar15,0);
        fVar38 = (float)param_3;
        fVar37 = (float)param_2;
        if ((iVar5 != 0) && (*(char *)(lVar8 + 0xb8) == '\0')) goto code_r0x015aaf94;
        lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
        if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x1c8), lVar15 == 0))
        goto code_r0x015ab4c4;
        if (*(uint *)(lVar15 + 0x18) <= uVar27) goto code_r0x015ab4c8;
        lVar15 = *(long *)(lVar15 + lVar17 * 8 + 0x20);
        if ((((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x80), lVar15 == 0)) ||
            (lVar15 = *(long *)(lVar15 + 0x10), lVar15 == 0)) ||
           (lVar15 = *(long *)(lVar15 + 0x18), lVar15 == 0)) goto code_r0x015ab4c4;
        fVar29 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre
                                  (lVar15,0);
        uStack_390 = CONCAT44(fVar37,fVar29);
        fVar31 = fVar37;
        fVar35 = fVar38;
        fStack_388 = fVar38;
        lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar8,uRam0000000003d41088);
        if (((lVar15 == 0) || (*(long *)(lVar15 + 0x38) == 0)) ||
           ((lVar15 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10), lVar15 == 0 ||
            (lVar15 = *(long *)(lVar15 + 0x18), lVar15 == 0)))) goto code_r0x015ab4c4;
        fVar30 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre
                                  (lVar15,0);
        uStack_3a0 = CONCAT44(fVar31,fVar30);
        fStack_3a8 = fVar38 - fVar35;
        param_3 = (ulong)(uint)fStack_3a8;
        uStack_3b0 = CONCAT44(fVar37 - fVar31,fVar29 - fVar30);
        fStack_398 = fVar35;
        if (cVar21 != '\0') {
          if (lVar9 == 0) goto code_r0x015ab4c4;
code_r0x015aadd4:
          uVar18 = (ulong)(uint)(fVar38 + *(float *)(lVar8 + 0xa8));
          param_4 = *(float *)(lVar8 + 0xa0);
          uVar20 = (ulong)(uint)(fVar37 + *(float *)(lVar8 + 0xa4));
          fVar31 = (float)/*UnityEngine.Camera$$WorldToViewportPoint*/ func_0x0321fe94(fVar29 + param_4,lVar9,0);
          fVar37 = (float)uVar20;
          fVar38 = (float)uVar18;
          if (cVar21 == '\0') {
            bVar3 = false;
            bVar2 = true;
            if (0.0 <= fVar31) {
              bVar3 = false;
              bVar2 = true;
              if (!NAN(fVar31)) {
                bVar3 = fVar31 == 1.0;
                bVar2 = 1.0 <= fVar31;
              }
            }
            param_2 = uVar20;
            param_3 = uVar18;
            if (!bVar2 || bVar3) {
              bVar3 = false;
              bVar2 = true;
              if (0.0 <= fVar37) {
                bVar3 = false;
                bVar2 = true;
                if (!NAN(fVar37)) {
                  bVar3 = fVar37 == 1.0;
                  bVar2 = 1.0 <= fVar37;
                }
              }
              if ((!bVar2 || bVar3) && (0.0 <= fVar38)) {
                iVar5 = /*Atlas.UI.Screens.GameInProgressScreen$$CanSeeTarget*/ func_0x015ab70c(lVar8,&uStack_3a0,&uStack_390,1,1);
                fVar37 = (float)param_2;
                fVar38 = (float)param_3;
                if (iVar5 != 0) goto code_r0x015aae04;
              }
            }
            goto code_r0x015aaf94;
          }
code_r0x015aae04:
          lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
          if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x1c8), lVar15 == 0))
          goto code_r0x015ab4c4;
          if (*(uint *)(lVar15 + 0x18) <= uVar27) goto code_r0x015ab4c8;
          lVar14 = *(long *)(lVar15 + lVar17 * 8 + 0x20);
          lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
          if ((lVar15 == 0) || (*(long *)(lVar15 + 0x1c0) == 0)) goto code_r0x015ab4c4;
          uVar32 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar15 + 0x1c0),0);
          uStack_3c0 = CONCAT44(fVar37,uVar32);
          uStack_3b8 = CONCAT44(param_4,fVar38);
          param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_3c0,0);
          if (lVar14 == 0) goto code_r0x015ab4c4;
          param_2 = uVar20 & 0xffffffff;
          param_3 = uVar18 & 0xffffffff;
          /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(fVar31,lVar14,0);
          lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
          if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x1c8), lVar15 == 0))
          goto code_r0x015ab4c4;
          if (*(uint *)(lVar15 + 0x18) <= uVar27) goto code_r0x015ab4c8;
          lVar15 = *(long *)(lVar15 + lVar17 * 8 + 0x20);
          if (lVar15 == 0) goto code_r0x015ab4c4;
          /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar15,uVar10,*(undefined1 *)(lVar8 + 0xb8),0);
          if (*(char *)(lVar8 + 0xb8) != '\0') {
            lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
            if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x1c8), lVar15 == 0))
            goto code_r0x015ab4c4;
            if (*(uint *)(lVar15 + 0x18) <= uVar27) goto code_r0x015ab4c8;
            lVar15 = *(long *)(lVar15 + lVar17 * 8 + 0x20);
            if (lVar15 == 0) goto code_r0x015ab4c4;
            *(undefined4 *)(lVar15 + 0x88) = *(undefined4 *)(lVar8 + 0x98);
          }
          iStack_3f4 = iStack_3f4 + 1;
          goto code_r0x015ab2c0;
        }
        fVar31 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_3b0,0);
        fVar35 = *(float *)(lVar8 + 0x8c);
        param_2 = (ulong)(uint)fVar35;
        if (fVar35 <= fVar31) goto code_r0x015aaf94;
        fVar31 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_3b0,0);
        if (lVar9 == 0) goto code_r0x015ab4c4;
        fVar30 = (float)param_3;
        fVar36 = fVar35;
        lVar15 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar9,0);
        if (lVar15 == 0) goto code_r0x015ab4c4;
        fVar33 = (float)/*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar15,0);
        param_2 = (ulong)(uint)*(float *)(lVar8 + 0x94);
        if (*(float *)(lVar8 + 0x94) < fVar30 * (float)param_3 + fVar31 * fVar33 + fVar35 * fVar36)
        goto code_r0x015aadd4;
      }
code_r0x015aaf94:
      lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x1c8), lVar15 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar15 + 0x18) <= uVar27) goto code_r0x015ab4c8;
      lVar15 = *(long *)(lVar15 + lVar17 * 8 + 0x20);
      if (lVar15 == 0) goto code_r0x015ab4c4;
      if (*(long *)(lVar15 + 0x80) != 0) {
        lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
        if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x1c8), lVar15 == 0))
        goto code_r0x015ab4c4;
        if (*(uint *)(lVar15 + 0x18) <= uVar27) goto code_r0x015ab4c8;
        lVar15 = *(long *)(lVar15 + lVar17 * 8 + 0x20);
        if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x80), lVar15 == 0))
        goto code_r0x015ab4c4;
        *(undefined1 *)(lVar15 + 0x9c) = 0;
      }
      if (*(char *)(lVar8 + 0x9c) == '\0') {
        if (*(char *)(lVar8 + 0xb8) == '\0') {
          /*Atlas.UI.Screens.GameInProgressScreen$$UpdateAllKartIndicatorDataRace*/ func_0x015abdd0(lVar8);
        }
        else {
          /*Atlas.UI.Screens.GameInProgressScreen$$UpdateAllKartIndicatorDataBattle*/ func_0x015ab8c0(lVar8);
        }
      }
      if (*(char *)(lVar8 + 0x10a) == '\0') {
        cVar21 = *(char *)(lVar8 + 0xb8);
      }
      else {
        cVar21 = '\0';
      }
      if (*(long *)(lVar8 + 0x70) == 0) goto code_r0x015ab4c4;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_3f0,*(long *)(lVar8 + 0x70),uRam0000000003d3d1c8);
      uStack_378 = uStack_3e8;
      uStack_380 = uStack_3f0;
      lStack_370 = lStack_3e0;
      do {
        do {
          uVar20 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_380,uRam0000000003d33458);
          lVar15 = lStack_370;
          uVar32 = (undefined4)param_3;
          if ((uVar20 & 1) == 0) {
code_r0x015ab1e8:
            bVar3 = false;
            goto code_r0x015ab1ec;
          }
          if (lStack_370 == 0) {
            func_0x00f78af4();
            goto code_r0x015ab4d8;
          }
          fVar37 = *(float *)(lVar8 + 0x8c);
          param_2 = (ulong)(uint)fVar37;
          if ((fVar37 < *(float *)(lStack_370 + 0x18)) && (lStack_370 != *(long *)(lVar8 + 0x78)))
          goto code_r0x015ab1e8;
        } while (*(char *)(lStack_370 + 0x28) == '\0');
        lVar14 = *(long *)(lStack_370 + 0x10);
        if (lVar14 == 0) {
          func_0x00f78af4();
          goto code_r0x015ab4d8;
        }
      } while (*(char *)(lVar14 + 0x9c) != '\0');
      *(undefined1 *)(lVar14 + 0x9c) = 1;
      lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if (lVar14 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar14 = *(long *)(lVar14 + 0x1c8);
      if (lVar14 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar27) {
        uVar10 = func_0x00f78b24();
        func_0x00f78ac0(uVar10,0);
        goto code_r0x015ab4d8;
      }
      lVar14 = *(long *)(lVar14 + lVar17 * 8 + 0x20);
      if (lVar14 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(*(undefined4 *)(lVar8 + 0x98),lVar14,*(undefined8 *)(lVar15 + 0x10),
                      cVar21 != '\0',0);
      lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if (lVar14 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar14 = *(long *)(lVar14 + 0x1c8);
      if (lVar14 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar27) {
        uVar10 = func_0x00f78b24();
        func_0x00f78ac0(uVar10,0);
        goto code_r0x015ab4d8;
      }
      lVar14 = *(long *)(lVar14 + lVar17 * 8 + 0x20);
      uVar39 = *(undefined4 *)(lVar15 + 0x1c);
      uVar40 = *(uint *)(lVar15 + 0x20);
      uVar41 = *(uint *)(lVar15 + 0x24);
      lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if (lVar15 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      if (*(long *)(lVar15 + 0x1c0) == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      uVar34 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar15 + 0x1c0),0);
      uStack_3c0 = CONCAT44(fVar37,uVar34);
      uStack_3b8 = CONCAT44(param_4,uVar32);
      param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_3c0,0);
      if (lVar14 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      param_2 = (ulong)uVar40;
      param_3 = (ulong)uVar41;
      /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(uVar39,lVar14,0);
      lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if (lVar15 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar15 = *(long *)(lVar15 + 0x1c8);
      if (lVar15 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      if (*(uint *)(lVar15 + 0x18) <= uVar27) {
        uVar10 = func_0x00f78b24();
        func_0x00f78ac0(uVar10,0);
        goto code_r0x015ab4d8;
      }
      lVar15 = *(long *)(lVar15 + lVar17 * 8 + 0x20);
      if (lVar15 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar15,uVar10,*(undefined1 *)(lVar8 + 0xb8),0);
      iStack_3f4 = iStack_3f4 + 1;
      bVar3 = true;
code_r0x015ab1ec:
      aiStack_3d8[iVar6] = 0x41c;
      iVar4 = iStack_3c4;
      iVar6 = iStack_3c4 + 1;
      iStack_3c4 = iVar6;
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_380,uRam0000000003d33450);
      if ((iVar6 != 0) && (aiStack_3d8[iVar4] == 0x41c)) {
        iStack_3c4 = iVar4;
        iVar6 = iVar4;
      }
      iVar4 = iVar6;
      if (!bVar3) {
        lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
        if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x1c8), lVar15 == 0))
        goto code_r0x015ab4c4;
        if (*(uint *)(lVar15 + 0x18) <= uVar27) goto code_r0x015ab4c8;
        lVar15 = *(long *)(lVar15 + lVar17 * 8 + 0x20);
        if (lVar15 == 0) goto code_r0x015ab4c4;
        if (*(long *)(lVar15 + 0x80) != 0) {
          lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
          if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x1c8), lVar15 == 0))
          goto code_r0x015ab4c4;
          if (*(uint *)(lVar15 + 0x18) <= uVar27) goto code_r0x015ab4c8;
          lVar15 = *(long *)(lVar15 + lVar17 * 8 + 0x20);
          if (lVar15 == 0) goto code_r0x015ab4c4;
          /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(0,lVar15,0,cVar21 != '\0',0);
        }
      }
code_r0x015ab2c0:
      uVar27 = uVar27 + 1;
      plVar12 = (long *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if (plVar12 == (long *)0x0) goto code_r0x015ab4c4;
      goto code_r0x015aaa94;
    }
  }
  lVar9 = func_0x00f78af4();
  plStack_1d8 = (long *)&Atlas_Contexts_RaceGameContext__OnEventTimeExceeded;
  lStack_1e8 = lVar8;
  if ((bRam0000000003eb4b94 & 1) == 0) {
    func_0x00f78a20(0x3d21b10);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d0a0);
    func_0x00f78a20(0x3d1d260);
    func_0x00f78a20(0x3d22180);
    bRam0000000003eb4b94 = 1;
  }
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  if ((*(long *)(lVar9 + 0x40) == 0) ||
     (plVar12 = *(long **)(*(long *)(lVar9 + 0x40) + 0x28), plVar12 == (long *)0x0)) {
code_r0x014d2c78:
    func_0x00f78af4();
  }
  else {
    lVar8 = *plVar12;
    uVar20 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar20 != 0) {
      piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == /*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0) {
          puVar11 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
          goto code_r0x014d29f0;
        }
        piVar19 = piVar19 + 4;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    puVar16 = (undefined8 *)0x0;
    puVar11 = (undefined8 *)func_0x00fac1f0(plVar12);
code_r0x014d29f0:
    plVar12 = (long *)(*(code *)*puVar11)(plVar12,puVar11[1]);
    if (plVar12 != (long *)0x0) {
code_r0x014d2a14:
      lVar8 = *plVar12;
      uVar20 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar20 != 0) {
        piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar11 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
            goto code_r0x014d2a60;
          }
          piVar19 = piVar19 + 4;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
      puVar16 = (undefined8 *)0x0;
      puVar11 = (undefined8 *)func_0x00fac1f0(plVar12);
code_r0x014d2a60:
      uVar20 = (*(code *)*puVar11)(plVar12,puVar11[1]);
      if ((uVar20 & 1) == 0) {
        lVar8 = 0;
        goto joined_r0x014d2b68;
      }
      lVar8 = *plVar12;
      uVar20 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar20 != 0) {
        piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == /*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260) {
            puVar11 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
            goto code_r0x014d2abc;
          }
          piVar19 = piVar19 + 4;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
      puVar16 = (undefined8 *)0x0;
      puVar11 = (undefined8 *)func_0x00fac1f0(plVar12);
code_r0x014d2abc:
      lVar8 = (*(code *)*puVar11)(plVar12,puVar11[1]);
      if (lVar8 == 0) {
        func_0x00f78af4();
        goto code_r0x014d2c80;
      }
      lVar15 = *(long *)(lVar8 + 0x10);
      if (lVar15 != 0) {
        uStack_268 = *(undefined8 *)(lVar15 + 0x50);
        uStack_270 = *(undefined8 *)(lVar15 + 0x48);
        uStack_258 = *(undefined8 *)(lVar15 + 0x60);
        uStack_260 = *(undefined8 *)(lVar15 + 0x58);
        uVar20 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&uStack_270,0);
        if (((uVar20 & 1) != 0) && (*(char *)(lVar8 + 0x98) == '\0')) {
          if (*(long *)(lVar9 + 600) == 0) {
            func_0x00f78af4();
            goto code_r0x014d2c80;
          }
          lVar15 = *(long *)(lVar8 + 0x10);
          if (lVar15 == 0) {
            func_0x00f78af4();
            goto code_r0x014d2c80;
          }
          plVar22 = *(long **)(*(long *)(lVar9 + 600) + 0x20);
          uStack_288 = *(undefined8 *)(lVar15 + 0x50);
          uStack_290 = *(undefined8 *)(lVar15 + 0x48);
          puStack_278 = *(undefined **)(lVar15 + 0x60);
          pppppplStack_280 = *(long *******)(lVar15 + 0x58);
          /*Atlas.Gameplay.Player.GameContextPlayer$$GetRaceProgress*/ func_0x015a569c(lVar8,0);
          if (plVar22 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014d2c80;
          }
          puVar16 = (undefined8 *)(ulong)*(uint *)(lVar8 + 0x78);
          uStack_228 = uStack_288;
          uStack_230 = uStack_290;
          puStack_218 = puStack_278;
          pppppplStack_220 = pppppplStack_280;
          uStack_240 = 0;
          lStack_238 = 0;
          puStack_248 = (undefined *)0x0;
          (**(code **)(*plVar22 + 0x248))
                    (plVar22,&uStack_230,puVar16,1,&puStack_248,*(undefined8 *)(*plVar22 + 0x250));
        }
        goto code_r0x014d2a14;
      }
      func_0x00f78af4();
      goto code_r0x014d2c80;
    }
  }
  func_0x00f78af4();
code_r0x014d2c80:
                    /* WARNING: Does not return */
  pcVar23 = (code *)SoftwareBreakpoint(1,0x14d2c84);
  (*pcVar23)();
joined_r0x014d2b68:
  if (plVar12 != (long *)0x0) {
    lVar15 = *plVar12;
    uVar20 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar20 != 0) {
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
          goto code_r0x014d2bc0;
        }
        piVar19 = piVar19 + 4;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    puVar16 = (undefined8 *)0x0;
    puVar11 = (undefined8 *)func_0x00fac1f0(plVar12);
code_r0x014d2bc0:
    (*(code *)*puVar11)(plVar12,puVar11[1]);
  }
  if (lVar8 == 0) {
    if (*(long *)(lVar9 + 0x20) == 0) goto code_r0x014d2c78;
    plVar12 = (long *)/*Core.StateManagement.StateMachine$$get_ActiveState*/ func_0x02b95214(*(long *)(lVar9 + 0x20),0);
    if (plVar12 != (long *)0x0) {
      if (*(byte *)(/*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10 + 300) <= *(byte *)(*plVar12 + 300)) {
        plVar7 = plVar12;
        if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10 + 300) * 8 +
                     -8) != /*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10) {
          plVar7 = (long *)0x0;
        }
        if (plVar7 != (long *)0x0) {
          if (*(long *)(lVar9 + 0x40) == 0) goto code_r0x014d2c78;
          /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetLocalGameContextPlayer*/ func_0x01599b24(*(long *)(lVar9 + 0x40),0);
          plVar12 = (long *)Atlas_Contexts_GameContextBaseInProgressState__NotifyGameContextFinished
                                      (plVar7,0);
        }
      }
    }
    return plVar12;
  }
  func_0x00f78ac0(lVar8,0);
  if (extraout_w1 != 1) {
    auVar42 = __Unwind_Resume();
    ppppppplStack_2d0 = (long *******)0x3d1d260;
    puStack_2c8 = (undefined *)0x3d22180;
    puStack_298 = &Atlas_Contexts_RaceGameContext__OnEnterShortCut;
    plStack_2c0 = plVar22;
    lStack_2b8 = lVar8;
    pplStack_2b0 = (long **)plVar12;
    lStack_2a8 = lVar9;
    pppplStack_2a0 = (long ****)&ppppuStack_1e0;
    if ((bRam0000000003eb4b95 & 1) == 0) {
      func_0x00f78a20(0x3d21b08);
      bRam0000000003eb4b95 = 1;
    }
    uStack_2d8 = 0;
    if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar12 = (long *)Atlas_Contexts_GameContextBase__TryGetKartCompositeFromCollider
                                (auVar42._8_8_,&uStack_2d8,0);
    if ((int)plVar12 != 0) {
      lVar8 = *(long *)(auVar42._0_8_ + 0x18);
      if (lVar8 == 0) {
        plVar12 = (long *)func_0x00f78af4();
        if ((bRam0000000003eb4b96 & 1) == 0) {
          func_0x00f78a20(0x3d21b08);
          bRam0000000003eb4b96 = 1;
        }
        if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        *(undefined1 *)((long)plVar12 + 0x249) = 1;
        *(undefined1 *)(plVar12 + 2) = 1;
        return plVar12;
      }
      plVar12 = (long *)/*Atlas.Stats.AtlasStats$$OnKartEnterShortcut*/ func_0x0146f188(lVar8,uStack_2d8,puVar16,0);
    }
    return plVar12;
  }
  plVar7 = (long *)___cxa_begin_catch();
  lVar8 = *plVar7;
  ___cxa_end_catch();
  goto joined_r0x014d2b68;
}



// ============================================================
// RVA: 0x14d24d4 | Atlas.Contexts.RaceGameContext.OnDeInit
// ============================================================

/* WARNING: Possible PIC construction at 0x014d28f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015aa69c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ae374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014d28f8) */
/* WARNING: Removing unreachable block (ram,0x015aa6a0) */
/* WARNING: Removing unreachable block (ram,0x015aa6b8) */
/* WARNING: Removing unreachable block (ram,0x015aa6c0) */
/* WARNING: Removing unreachable block (ram,0x015aa6c8) */
/* WARNING: Removing unreachable block (ram,0x015aa6e4) */
/* WARNING: Removing unreachable block (ram,0x015aa730) */
/* WARNING: Removing unreachable block (ram,0x015aa708) */
/* WARNING: Removing unreachable block (ram,0x015ae1c0) */
/* WARNING: Removing unreachable block (ram,0x015ae1e8) */
/* WARNING: Removing unreachable block (ram,0x015ae1fc) */
/* WARNING: Removing unreachable block (ram,0x015ae220) */
/* WARNING: Removing unreachable block (ram,0x015ae240) */
/* WARNING: Removing unreachable block (ram,0x015ae244) */
/* WARNING: Removing unreachable block (ram,0x015ae24c) */
/* WARNING: Removing unreachable block (ram,0x015ae224) */
/* WARNING: Removing unreachable block (ram,0x015ae228) */
/* WARNING: Removing unreachable block (ram,0x015ae230) */
/* WARNING: Removing unreachable block (ram,0x015ae204) */
/* WARNING: Removing unreachable block (ram,0x015ae208) */
/* WARNING: Removing unreachable block (ram,0x015ae210) */
/* WARNING: Removing unreachable block (ram,0x015ae258) */
/* WARNING: Removing unreachable block (ram,0x015ae26c) */
/* WARNING: Removing unreachable block (ram,0x015ae274) */
/* WARNING: Removing unreachable block (ram,0x015ae278) */
/* WARNING: Removing unreachable block (ram,0x015ae2b4) */
/* WARNING: Removing unreachable block (ram,0x015ae28c) */
/* WARNING: Removing unreachable block (ram,0x015ae294) */
/* WARNING: Removing unreachable block (ram,0x015ae2c4) */
/* WARNING: Removing unreachable block (ram,0x015ae2e4) */
/* WARNING: Removing unreachable block (ram,0x015ae310) */
/* WARNING: Removing unreachable block (ram,0x015ae330) */
/* WARNING: Removing unreachable block (ram,0x015ae340) */
/* WARNING: Removing unreachable block (ram,0x015ae348) */
/* WARNING: Removing unreachable block (ram,0x015ae34c) */
/* WARNING: Removing unreachable block (ram,0x015ae378) */
/* WARNING: Removing unreachable block (ram,0x015ae388) */
/* WARNING: Removing unreachable block (ram,0x015ae390) */
/* WARNING: Removing unreachable block (ram,0x015ae394) */
/* WARNING: Removing unreachable block (ram,0x015ae3d4) */
/* WARNING: Removing unreachable block (ram,0x015ae3a4) */
/* WARNING: Removing unreachable block (ram,0x015ae3ac) */
/* WARNING: Removing unreachable block (ram,0x015ae35c) */
/* WARNING: Removing unreachable block (ram,0x015ae3e4) */
/* WARNING: Removing unreachable block (ram,0x015ae364) */
/* WARNING: Removing unreachable block (ram,0x016b8cd4) */
/* WARNING: Removing unreachable block (ram,0x016b8d00) */
/* WARNING: Removing unreachable block (ram,0x016b8d14) */
/* WARNING: Removing unreachable block (ram,0x016b8d20) */
/* WARNING: Removing unreachable block (ram,0x016b8d28) */
/* WARNING: Removing unreachable block (ram,0x016b8d2c) */
/* WARNING: Removing unreachable block (ram,0x016962e4) */
/* WARNING: Removing unreachable block (ram,0x01696308) */
/* WARNING: Removing unreachable block (ram,0x01696328) */
/* WARNING: Removing unreachable block (ram,0x016963a8) */
/* WARNING: Removing unreachable block (ram,0x0169632c) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */
/* WARNING: Removing unreachable block (ram,0x01696364) */
/* WARNING: Removing unreachable block (ram,0x01696370) */
/* WARNING: Removing unreachable block (ram,0x01696378) */
/* WARNING: Removing unreachable block (ram,0x0169637c) */
/* WARNING: Removing unreachable block (ram,0x016963ac) */
/* WARNING: Removing unreachable block (ram,0x015ae2d8) */
/* WARNING: Removing unreachable block (ram,0x014b3b58) */
/* WARNING: Removing unreachable block (ram,0x014b3b70) */
/* WARNING: Removing unreachable block (ram,0x014b3b78) */
/* WARNING: Removing unreachable block (ram,0x015ae29c) */
/* WARNING: Removing unreachable block (ram,0x032c2184) */
/* WARNING: Removing unreachable block (ram,0x032c21bc) */
/* WARNING: Removing unreachable block (ram,0x032c21d0) */
/* WARNING: Removing unreachable block (ram,0x032c21e4) */
/* WARNING: Removing unreachable block (ram,0x032c21ec) */
/* WARNING: Removing unreachable block (ram,0x032c21f0) */
/* WARNING: Removing unreachable block (ram,0x032c22b0) */
/* WARNING: Removing unreachable block (ram,0x032c22bc) */
/* WARNING: Removing unreachable block (ram,0x032c22c4) */
/* WARNING: Removing unreachable block (ram,0x032c22c8) */
/* WARNING: Removing unreachable block (ram,0x032c22dc) */
/* WARNING: Removing unreachable block (ram,0x032c22e0) */
/* WARNING: Removing unreachable block (ram,0x032c232c) */
/* WARNING: Removing unreachable block (ram,0x032c2330) */
/* WARNING: Removing unreachable block (ram,0x032c2354) */
/* WARNING: Removing unreachable block (ram,0x032c235c) */
/* WARNING: Removing unreachable block (ram,0x032c2360) */
/* WARNING: Removing unreachable block (ram,0x032c2204) */
/* WARNING: Removing unreachable block (ram,0x032c2214) */
/* WARNING: Removing unreachable block (ram,0x032c221c) */
/* WARNING: Removing unreachable block (ram,0x032c2220) */
/* WARNING: Removing unreachable block (ram,0x032c242c) */
/* WARNING: Removing unreachable block (ram,0x032c2234) */
/* WARNING: Removing unreachable block (ram,0x032c223c) */
/* WARNING: Removing unreachable block (ram,0x032c226c) */
/* WARNING: Removing unreachable block (ram,0x032c2274) */
/* WARNING: Removing unreachable block (ram,0x032c2278) */
/* WARNING: Removing unreachable block (ram,0x032c236c) */
/* WARNING: Removing unreachable block (ram,0x032c2288) */
/* WARNING: Removing unreachable block (ram,0x032c228c) */
/* WARNING: Removing unreachable block (ram,0x032c2374) */
/* WARNING: Removing unreachable block (ram,0x032c2378) */
/* WARNING: Removing unreachable block (ram,0x032c237c) */
/* WARNING: Removing unreachable block (ram,0x032c2380) */
/* WARNING: Removing unreachable block (ram,0x032c2394) */
/* WARNING: Removing unreachable block (ram,0x032c23ac) */
/* WARNING: Removing unreachable block (ram,0x032c23b4) */
/* WARNING: Removing unreachable block (ram,0x032c23b8) */
/* WARNING: Removing unreachable block (ram,0x032c23cc) */
/* WARNING: Removing unreachable block (ram,0x032c2448) */
/* WARNING: Removing unreachable block (ram,0x032c23d0) */
/* WARNING: Removing unreachable block (ram,0x032c23e0) */
/* WARNING: Removing unreachable block (ram,0x032c23ec) */
/* WARNING: Removing unreachable block (ram,0x032c23f4) */
/* WARNING: Removing unreachable block (ram,0x032c23f8) */
/* WARNING: Removing unreachable block (ram,0x032c2400) */
/* WARNING: Removing unreachable block (ram,0x032c244c) */
/* WARNING: Removing unreachable block (ram,0x032c2474) */
/* WARNING: Removing unreachable block (ram,0x032c2494) */
/* WARNING: Removing unreachable block (ram,0x032c24ac) */
/* WARNING: Removing unreachable block (ram,0x032c24b4) */
/* WARNING: Removing unreachable block (ram,0x032c24b8) */
/* WARNING: Removing unreachable block (ram,0x032c24cc) */
/* WARNING: Removing unreachable block (ram,0x032c2550) */
/* WARNING: Removing unreachable block (ram,0x032c24d8) */
/* WARNING: Removing unreachable block (ram,0x032c24f0) */
/* WARNING: Removing unreachable block (ram,0x032c24f8) */
/* WARNING: Removing unreachable block (ram,0x032c24fc) */
/* WARNING: Removing unreachable block (ram,0x032c2510) */
/* WARNING: Removing unreachable block (ram,0x032c2524) */
/* WARNING: Removing unreachable block (ram,0x032c252c) */
/* WARNING: Removing unreachable block (ram,0x032c2530) */
/* WARNING: Removing unreachable block (ram,0x032c2540) */
/* WARNING: Removing unreachable block (ram,0x015ac734) */
/* WARNING: Type propagation algorithm not settling */

long * Atlas_Contexts_RaceGameContext__OnDeInit
                 (undefined1 param_1 [16],ulong param_2,ulong param_3,float param_4,long param_5)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  int extraout_w1;
  long extraout_x1;
  long extraout_x1_00;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  ulong uVar20;
  char cVar21;
  long *unaff_x22;
  code *pcVar22;
  long *unaff_x23;
  long **unaff_x24;
  long **pplVar23;
  long lVar24;
  uint uVar25;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  uint uVar38;
  uint uVar39;
  undefined1 auVar40 [16];
  int iStack_3b4;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  long lStack_3a0;
  int aiStack_398 [5];
  int iStack_384;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  float fStack_368;
  undefined8 uStack_360;
  float fStack_358;
  undefined8 uStack_350;
  float fStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_330;
  undefined8 uStack_298;
  long *******ppppppplStack_290;
  undefined *puStack_288;
  long *plStack_280;
  long lStack_278;
  long **pplStack_270;
  long lStack_268;
  long ****pppplStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long ******pppppplStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 ******ppppppuStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long ******pppppplStack_1e0;
  undefined *puStack_1d8;
  long **pplStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  ulong uStack_1b8;
  long *plStack_1b0;
  long lStack_1a8;
  undefined8 ****ppppuStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long lStack_188;
  long **pplStack_180;
  long *plStack_178;
  long *plStack_170;
  ulong uStack_168;
  long *plStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4b92 & 1) == 0) {
    func_0x00f78a20(0x3d287c0);
    bRam0000000003eb4b92 = 1;
  }
  plVar7 = (long *)func_0x00f78aec(/*Atlas.Contexts.RaceGameContext.<OnDeInit>d__9_TypeInfo*/ uRam0000000003d287c0);
  /*Atlas.Contexts.RaceGameContext.<OnDeInit>d__9$$.ctor*/ func_0x0156348c(plVar7,0,0);
  if (plVar7 != (long *)0x0) {
    plVar7[4] = param_5;
    return plVar7;
  }
  auVar40 = func_0x00f78af4();
  plVar7 = auVar40._8_8_;
  lVar16 = auVar40._0_8_;
  puStack_38 = &Atlas_Contexts_RaceGameContext__OnLateUpdate;
  uVar20 = 0x3eb4000;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b93 & 1) == 0) {
    func_0x00f78a20(0x3d21b10);
    func_0x00f78a20(0x3d1d448);
    func_0x00f78a20(0x3d1d578);
    bRam0000000003eb4b93 = 1;
  }
  puVar15 = (undefined8 *)0x0;
  Atlas_Contexts_GameContextBase__OnLateUpdate(lVar16,plVar7);
  plVar11 = unaff_x22;
  if (*(long *)(lVar16 + 0x40) != 0) {
    lVar8 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetLocalGameContextPlayer*/ func_0x01599b24(*(long *)(lVar16 + 0x40),0);
    if (lVar8 == 0) {
      return (long *)0x0;
    }
    plVar7 = *(long **)(lVar16 + 0x250);
    uVar9 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar8,0);
    if (plVar7 != (long *)0x0) {
      puVar15 = (undefined8 *)0x0;
      /*Atlas.Audio.AtlasAudioManager$$UpdateLaps*/ func_0x01459740(plVar7,uVar9);
      if ((*(long *)(lVar16 + 0x40) != 0) &&
         (plVar7 = *(long **)(*(long *)(lVar16 + 0x40) + 0x28), plVar7 != (long *)0x0)) {
        uVar20 = 0;
        pplVar23 = (long **)0x3d1d578;
        uVar9 = 0x3d1d448;
        uVar26 = 0x3d21b10;
        do {
          lVar8 = *plVar7;
          uVar18 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == /*System.Collections.Generic.IReadOnlyCollection<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d578) {
                puVar10 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
                goto code_r0x014d2664;
              }
              piVar19 = piVar19 + 4;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          puVar15 = (undefined8 *)0x0;
          puVar10 = (undefined8 *)func_0x00fac1f0(plVar7);
code_r0x014d2664:
          plVar11 = (long *)(*(code *)*puVar10)(plVar7,puVar10[1]);
          if ((int)plVar11 <= (int)uVar20) {
            return plVar11;
          }
          plVar11 = unaff_x22;
          unaff_x24 = (long **)0x3d1d578;
          unaff_x25 = 0x3d1d448;
          unaff_x26 = 0x3d21b10;
          if ((*(long *)(lVar16 + 0x40) == 0) ||
             (plVar11 = *(long **)(*(long *)(lVar16 + 0x40) + 0x28), plVar11 == (long *)0x0)) break;
          lVar8 = *plVar11;
          uVar18 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == /*System.Collections.Generic.IList<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d448) {
                puVar10 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
                goto code_r0x014d26d4;
              }
              piVar19 = piVar19 + 4;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          puVar10 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.Generic.IList<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d448,0);
code_r0x014d26d4:
          puVar15 = (undefined8 *)puVar10[1];
          unaff_x22 = (long *)(*(code *)*puVar10)(plVar11,uVar20);
          unaff_x24 = pplVar23;
          unaff_x25 = uVar9;
          unaff_x26 = uVar26;
          if (unaff_x22 == (long *)0x0) break;
          if ((char)unaff_x22[0x13] == '\0') {
            plVar11 = unaff_x22;
            if (unaff_x22[2] == 0) break;
            if ((((*(uint *)(unaff_x22[2] + 0x50) | 2) == 2) &&
                (iVar4 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(unaff_x22,0), *(int *)(lVar16 + 0x24c) < iVar4)) &&
               (*(char *)(lVar16 + 0x238) == '\0')) {
              if ((*(long *)(lVar16 + 600) == 0) ||
                 (lVar8 = *(long *)(*(long *)(lVar16 + 600) + 0x20), lVar8 == 0)) break;
              /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_108,lVar8,0);
              uStack_e8 = uStack_100;
              uStack_f0 = uStack_108;
              uStack_e0 = uStack_f8;
              uStack_118 = uStack_100;
              uStack_120 = uStack_108;
              uStack_110 = uStack_f8;
              puVar15 = (undefined8 *)0x0;
              /*Atlas.Gameplay.Player.GameContextPlayer$$OnFinishedGame*/ func_0x015a5760(unaff_x22,&uStack_120);
              if ((*(long *)(lVar16 + 600) == 0) || (lVar8 = unaff_x22[2], lVar8 == 0)) break;
              unaff_x23 = *(long **)(*(long *)(lVar16 + 600) + 0x20);
              uStack_138 = *(undefined8 *)(lVar8 + 0x50);
              uStack_140 = *(undefined8 *)(lVar8 + 0x48);
              uStack_128 = *(undefined8 *)(lVar8 + 0x60);
              param_2 = *(ulong *)(lVar8 + 0x58);
              uStack_130 = param_2;
              /*Atlas.Gameplay.Player.GameContextPlayer$$GetRaceProgress*/ func_0x015a569c(unaff_x22,0);
              if (unaff_x23 == (long *)0x0) break;
              puVar15 = (undefined8 *)(ulong)*(uint *)(unaff_x22 + 0xf);
              uStack_a8 = uStack_138;
              uStack_b0 = uStack_140;
              uStack_98 = uStack_128;
              uStack_a0 = uStack_130;
              uStack_c8 = uStack_e8;
              uStack_d0 = uStack_f0;
              uStack_c0 = uStack_e0;
              param_2 = uStack_f0;
              param_3 = uStack_130;
              (**(code **)(*unaff_x23 + 0x248))
                        (unaff_x23,&uStack_b0,puVar15,0,&uStack_d0,
                         *(undefined8 *)(*unaff_x23 + 0x250));
              iVar4 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_IsLocalPlayer*/ func_0x0159dd28(unaff_x22,0);
              if (iVar4 != 0) {
                if (*(long *)(lVar16 + 0x20) == 0) break;
                plVar11 = (long *)/*Core.StateManagement.StateMachine$$get_ActiveState*/ func_0x02b95214(*(long *)(lVar16 + 0x20),0);
                if (plVar11 != (long *)0x0) {
                  if ((*(byte *)(/*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10 + 300) <= *(byte *)(*plVar11 + 300)) &&
                     (*(long *)(*(long *)(*plVar11 + 200) +
                                (ulong)*(byte *)(/*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10 + 300) * 8 + -8) ==
                      /*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10)) {
                    Atlas_Contexts_GameContextBaseInProgressState__NotifyGameContextFinished
                              (plVar11,0);
                  }
                }
              }
            }
          }
          uVar20 = (ulong)((int)uVar20 + 1);
        } while( true );
      }
    }
  }
  func_0x00f78af4();
  if (extraout_x1 != 0) {
    plVar14 = *(long **)(extraout_x1 + 0x60);
    if (plVar14 == (long *)0x0) {
      return (long *)0x0;
    }
    uVar9 = 0;
    plStack_190 = (long *)unaff_x26;
    lStack_188 = unaff_x25;
    pplStack_180 = unaff_x24;
    plStack_178 = unaff_x23;
    plStack_170 = plVar11;
    uStack_168 = uVar20;
    plStack_160 = plVar7;
    puStack_158 = (undefined *)lVar16;
    ppuStack_150 = &puStack_40;
    puStack_148 = &Atlas_Contexts_RaceGameContext__GameComplete;
    plStack_198 = plVar14;
    lVar16 = plVar14[0xd];
    if (lVar16 == 0) {
      pplVar23 = &plStack_198;
      lVar8 = 1;
    }
    else {
      lVar8 = *(long *)(lVar16 + 0x18);
      if (lVar8 == 0) {
        return plVar14;
      }
      pplVar23 = (long **)(lVar16 + 0x20);
    }
    lVar16 = 0;
    do {
      plVar11 = pplVar23[lVar16];
      pcVar22 = (code *)plVar11[2];
      plVar7 = (long *)plVar11[4];
      lVar13 = plVar11[5];
      if (*(short *)(lVar13 + 0x48) == -1) {
        func_0x00f78ad8(lVar13,uVar9);
      }
      iVar4 = func_0x00f78a4c(lVar13);
      if (iVar4 == 0) {
        if ((((plVar7 == (long *)0x0) || (*(short *)(lVar13 + 0x48) == -1)) ||
            ((*(byte *)(*plVar7 + 0x115) & 1) != 0)) || (plVar14[3] == 0)) goto code_r0x02924d98;
        iVar4 = func_0x00f78a44(lVar13);
        iVar6 = func_0x00f78ec0(lVar13);
        if (iVar4 == 0) {
          uVar1 = *(ushort *)(lVar13 + 0x48);
          if (iVar6 == 0) {
            lVar13 = *plVar7 + (ulong)uVar1 * 0x10;
            auVar40 = (**(code **)(lVar13 + 0x138))(plVar7,*(undefined8 *)(lVar13 + 0x140));
            goto code_r0x02924da4;
          }
          lVar13 = func_0x00f78a48(lVar13);
          lVar17 = *plVar7;
          uVar20 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar20 != 0) {
            piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == lVar13) {
                puVar15 = (undefined8 *)
                          (lVar17 + (long)(int)(*piVar19 + (uint)uVar1) * 0x10 + 0x138);
                goto code_r0x02924e68;
              }
              piVar19 = piVar19 + 4;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
          puVar15 = (undefined8 *)func_0x00fac1f0(plVar7,lVar13,(ulong)uVar1);
code_r0x02924e68:
          pcVar22 = (code *)*puVar15;
          puVar15 = (undefined8 *)puVar15[1];
        }
        else {
          if (iVar6 == 0) {
            uVar9 = *(undefined8 *)(*plVar7 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar17 = *plVar7;
            uVar20 = (ulong)*(ushort *)(lVar17 + 0x12a);
            if (uVar20 != 0) {
              piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)(lVar13 + 0x18)) {
                  lVar17 = lVar17 + (long)(int)(*piVar19 + (uint)*(ushort *)(lVar13 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02924e40;
                }
                piVar19 = piVar19 + 4;
                uVar20 = uVar20 - 1;
              } while (uVar20 != 0);
            }
            lVar17 = func_0x00fac1f0(plVar7);
code_r0x02924e40:
            uVar9 = *(undefined8 *)(lVar17 + 8);
          }
          puVar15 = (undefined8 *)func_0x00f78acc(uVar9,lVar13);
          pcVar22 = (code *)*puVar15;
        }
        auVar40 = (*pcVar22)(plVar7,puVar15);
      }
      else if (*(char *)(lVar13 + 0x4a) == '\0') {
        auVar40 = (*pcVar22)(lVar13);
      }
      else {
code_r0x02924d98:
        auVar40 = (*pcVar22)(plVar7,lVar13);
      }
code_r0x02924da4:
      uVar9 = auVar40._8_8_;
      lVar16 = lVar16 + 1;
      if (lVar16 == lVar8) {
        return auVar40._0_8_;
      }
    } while( true );
  }
  puStack_148 = &Atlas_Contexts_RaceGameContext__GameComplete;
  ppuStack_150 = &puStack_40;
  func_0x00f78af4();
  puStack_158 = &Atlas_Contexts_RaceGameContext__GetRankingForPlayer;
  *puVar15 = 0;
  puVar15[1] = 0;
  puVar15[2] = 0;
  plStack_170 = plVar7;
  uStack_168 = lVar16;
  if (extraout_x1_00 != 0) {
    plStack_160 = (long *)&ppuStack_150;
    plVar7 = (long *)/*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(extraout_x1_00,0);
    return plVar7;
  }
  plStack_160 = (long *)&ppuStack_150;
  auVar40 = func_0x00f78af4();
  lVar8 = auVar40._8_8_;
  plStack_178 = (long *)&Atlas_Contexts_RaceGameContext__SetupGameContextScreen;
  *(long *)(auVar40._0_8_ + 0x48) = lVar8;
  pplStack_1d0 = unaff_x24;
  plStack_1c8 = unaff_x23;
  plStack_1c0 = plVar11;
  uStack_1b8 = uVar20;
  plStack_1b0 = plVar7;
  ppppuStack_1a0 = (undefined8 ****)&pplStack_180;
  plStack_190 = plVar7;
  lStack_188 = lVar16;
  pplStack_180 = &plStack_160;
  if (puVar15 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar15 + 0x52) = 0;
    lVar16 = 0;
    if (lVar8 != 0) {
      plStack_198 = (long *)&UNK_014d28f8;
      lStack_1a8 = lVar8;
      if ((bRam0000000003eb522b & 1) == 0) {
        func_0x00f78a20(0x3d41080,8,0,0);
        bRam0000000003eb522b = 1;
      }
      lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if (lVar16 != 0) {
                    /* WARNING: Could not recover jumptable at 0x015ac724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar7 = (long *)(*(code *)(&UNK_015ac728 + (ulong)UNK_033f8a48 * 4))(lVar16,8,0,0);
        return plVar7;
      }
      uVar9 = func_0x00f78af4();
      uStack_200 = 0x3eb5000;
      uStack_1f0 = 8;
      uStack_1e8 = 0;
      puStack_1d8 = &Atlas_UI_Screens_GameInProgressScreen__UpdateArcade;
      lStack_1f8 = lVar8;
      pppppplStack_1e0 = (long ******)&ppppuStack_1a0;
      if ((bRam0000000003eb5227 & 1) == 0) {
        func_0x00f78a20(0x3d41088);
        bRam0000000003eb5227 = 1;
      }
      plVar7 = (long *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar9,uRam0000000003d41088);
      if ((plVar7 != (long *)0x0) && (plVar7[6] != 0)) {
        return plVar7;
      }
      uVar26 = func_0x00f78af4();
      uStack_230 = 0x3eb5000;
      uStack_228 = 0x3d41088;
      uStack_220 = 0x3eb5000;
      puStack_208 = &Atlas_UI_Screens_GameInProgressScreen__OnLateUpdate;
      pppppplStack_240 = (long ******)&ppppppuStack_210;
      uStack_218 = uVar9;
      ppppppuStack_210 = &pppppplStack_1e0;
      if ((bRam0000000003eb5228 & 1) == 0) {
        func_0x00f78a20(0x3d41080);
        func_0x00f78a20(0x3d41088);
        bRam0000000003eb5228 = 1;
      }
      lStack_268 = 0x3d41080;
      pppplStack_260 = (long ****)0x3eb5000;
      puStack_258 = (undefined *)0x3eb5000;
      uStack_250 = 0x3d41088;
      puStack_238 = &UNK_015aa6a0;
      pplStack_270 = unaff_x24;
      uStack_248 = uVar26;
      if ((bRam0000000003eb522e & 1) == 0) {
        func_0x00f78a20(0x3d3b9d0);
        func_0x00f78a20(0x3d3b898);
        func_0x00f78a20(0x3d41080);
        func_0x00f78a20(0x3d41088);
        bRam0000000003eb522e = 1;
      }
      lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar26,uRam0000000003d41088);
      if (((lVar16 != 0) && (*(long *)(lVar16 + 0x38) != 0)) &&
         (lVar16 = *(long *)(*(long *)(lVar16 + 0x38) + 200), lVar16 != 0)) {
        iVar4 = *(int *)(lVar16 + 0x18);
        lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar26,uRam0000000003d41088);
        if (((lVar16 != 0) && (*(long *)(lVar16 + 0x38) != 0)) &&
           (lVar16 = *(long *)(*(long *)(lVar16 + 0x38) + 0xd0), lVar16 != 0)) {
          iVar6 = *(int *)(lVar16 + 0x18);
          lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar26,uRam0000000003d41080);
          if (lVar16 != 0) {
            /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetWeaponIndicatorActive*/ func_0x015adeac(lVar16,0 < iVar6 + iVar4,0);
            lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar26,uRam0000000003d41080);
            lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar26,uRam0000000003d41088);
            if (((lVar8 != 0) && (*(long *)(lVar8 + 0x38) != 0)) &&
               (lStack_278 = *(long *)(*(long *)(lVar8 + 0x38) + 200), lVar16 != 0)) {
              /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetCulturePodWeaponIndicatorArrows*/ func_0x015adf10(lVar16,&lStack_278,0);
              lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar26,uRam0000000003d41080);
              lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar26,uRam0000000003d41088);
              if (((lVar8 != 0) && (*(long *)(lVar8 + 0x38) != 0)) &&
                 (plStack_280 = *(long **)(*(long *)(lVar8 + 0x38) + 0xd0), lVar16 != 0)) {
                plVar7 = (long *)/*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetSheldonWeaponIndicatorArrows*/ func_0x015ae03c(lVar16,&plStack_280,0);
                return plVar7;
              }
            }
          }
        }
      }
      lVar16 = func_0x00f78af4();
      puStack_288 = &Atlas_UI_Screens_GameInProgressScreen__UpdateKartIndicator;
      uStack_298 = uVar26;
      ppppppplStack_290 = &pppppplStack_240;
      if ((bRam0000000003eb5230 & 1) == 0) {
        func_0x00f78a20(0x3d33450);
        func_0x00f78a20(0x3d33458);
        func_0x00f78a20(0x3d33460);
        func_0x00f78a20(0x3d3d1c8);
        func_0x00f78a20(0x3d41080);
        func_0x00f78a20(0x3d41088);
        func_0x00f78a20(0x3d41090);
        bRam0000000003eb5230 = 1;
      }
      uStack_340 = 0;
      uStack_338 = 0;
      lStack_330 = 0;
      fStack_348 = 0.0;
      uStack_350 = 0;
      fStack_358 = 0.0;
      uStack_360 = 0;
      fStack_368 = 0.0;
      uStack_378 = 0;
      uStack_370 = 0;
      uStack_380 = 0;
      iStack_384 = 0;
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
      if (((lVar8 == 0) || (*(long *)(lVar8 + 0x1c0) == 0)) ||
         (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar8 + 0x1c0),0), lVar8 == 0)) goto code_r0x015ab4c4;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar8,*(char *)(lVar16 + 0x109) == '\0',0);
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
      if (((lVar8 == 0) || (*(long *)(lVar8 + 0x1c0) == 0)) ||
         (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar8 + 0x1c0),0), lVar8 == 0)) goto code_r0x015ab4c4;
      plVar7 = (long *)/*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar8,0);
      if ((int)plVar7 == 0) {
        return plVar7;
      }
      *(undefined1 *)(lVar16 + 0x9c) = 0;
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar16,uRam0000000003d41090);
      if ((lVar8 == 0) || (*(long *)(lVar8 + 0x40) == 0)) goto code_r0x015ab4c4;
      lVar8 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(lVar8 + 0x40),0);
      if (*(long *)(lVar16 + 0x78) == 0) {
code_r0x015aaa34:
        lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar16,uRam0000000003d41088);
        if ((lVar13 == 0) || (*(long *)(lVar13 + 0x38) == 0)) goto code_r0x015ab4c4;
        if (*(int *)(*(long *)(lVar13 + 0x38) + 0x74) == 1) {
          *(undefined8 *)(lVar16 + 0x78) = *(undefined8 *)(lVar16 + 0x80);
        }
      }
      else {
        lVar13 = *(long *)(*(long *)(lVar16 + 0x78) + 0x10);
        if (lVar13 == 0) goto code_r0x015ab4c4;
        if (*(int *)(lVar13 + 0x74) != 1) goto code_r0x015aaa34;
      }
      plVar7 = (long *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
      if (plVar7 == (long *)0x0) {
code_r0x015ab4c4:
        func_0x00f78af4();
code_r0x015ab4c8:
        uVar9 = func_0x00f78b24();
        func_0x00f78ac0(uVar9,0);
        __Unwind_Resume();
code_r0x015ab4d8:
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x15ab4dc);
        (*pcVar22)();
      }
      iVar6 = 0;
      iVar4 = 0;
      iStack_3b4 = 0;
      uVar25 = 0;
code_r0x015aaa94:
      if (plVar7[0x39] == 0) goto code_r0x015ab4c4;
      if (*(int *)(plVar7[0x39] + 0x18) <= (int)uVar25) {
        return plVar7;
      }
      if (*(int *)(lVar16 + 0xbc) <= iStack_3b4) {
        return plVar7;
      }
      lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
      if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x1c8), lVar13 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar13 + 0x18) <= uVar25) goto code_r0x015ab4c8;
      lVar17 = (long)(int)uVar25;
      lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
      if (lVar13 == 0) goto code_r0x015ab4c4;
      if (*(long *)(lVar13 + 0x80) == 0) {
        bVar3 = false;
      }
      else {
        lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
        if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x1c8), lVar13 == 0))
        goto code_r0x015ab4c4;
        if (*(uint *)(lVar13 + 0x18) <= uVar25) goto code_r0x015ab4c8;
        lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
        if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x80), lVar13 == 0))
        goto code_r0x015ab4c4;
        bVar3 = *(int *)(lVar13 + 0x74) == 1;
      }
      lVar13 = *(long *)(lVar16 + 0x78);
      if ((bool)(bVar3 & lVar13 == 0)) {
        if (*(long *)(lVar16 + 0x70) == 0) goto code_r0x015ab4c4;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_3b0,*(long *)(lVar16 + 0x70),uRam0000000003d3d1c8);
        uStack_338 = uStack_3a8;
        uStack_340 = uStack_3b0;
        lStack_330 = lStack_3a0;
        do {
          uVar20 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_340,uRam0000000003d33458);
          lVar13 = lStack_330;
          if ((uVar20 & 1) == 0) goto code_r0x015aabdc;
          if (lStack_330 == 0) {
            func_0x00f78af4();
            goto code_r0x015ab4d8;
          }
          lVar24 = *(long *)(lStack_330 + 0x10);
          lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
          if (lVar12 == 0) {
            func_0x00f78af4();
            goto code_r0x015ab4d8;
          }
          lVar12 = *(long *)(lVar12 + 0x1c8);
          if (lVar12 == 0) {
            func_0x00f78af4();
            goto code_r0x015ab4d8;
          }
          if (*(uint *)(lVar12 + 0x18) <= uVar25) {
            uVar9 = func_0x00f78b24();
            func_0x00f78ac0(uVar9,0);
            goto code_r0x015ab4d8;
          }
          lVar12 = *(long *)(lVar12 + lVar17 * 8 + 0x20);
          if (lVar12 == 0) {
            func_0x00f78af4();
            goto code_r0x015ab4d8;
          }
        } while (lVar24 != *(long *)(lVar12 + 0x80));
        *(long *)(lVar16 + 0x78) = lVar13;
code_r0x015aabdc:
        aiStack_398[iVar4] = 0x132;
        iVar6 = iStack_384;
        iVar4 = iStack_384 + 1;
        iStack_384 = iVar4;
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_340,uRam0000000003d33450);
        if ((iVar4 != 0) && (aiStack_398[iVar6] == 0x132)) {
          iStack_384 = iVar6;
          iVar4 = iVar6;
        }
        lVar13 = *(long *)(lVar16 + 0x78);
        iVar6 = iVar4;
      }
      if (lVar13 == 0) {
code_r0x015aac8c:
        uVar9 = 0;
        cVar21 = '\0';
      }
      else {
        lVar12 = *(long *)(lVar13 + 0x10);
        lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
        if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x1c8), lVar13 == 0))
        goto code_r0x015ab4c4;
        if (*(uint *)(lVar13 + 0x18) <= uVar25) goto code_r0x015ab4c8;
        lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
        if (lVar13 == 0) goto code_r0x015ab4c4;
        if (!(bool)(bVar3 & lVar12 == *(long *)(lVar13 + 0x80))) goto code_r0x015aac8c;
        cVar21 = *(char *)(lVar16 + 0xb8);
        uVar9 = 1;
      }
      lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
      if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x1c8), lVar13 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar13 + 0x18) <= uVar25) goto code_r0x015ab4c8;
      lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
      if (lVar13 == 0) goto code_r0x015ab4c4;
      if (*(long *)(lVar13 + 0x80) != 0) {
        lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
        if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x1c8), lVar13 == 0))
        goto code_r0x015ab4c4;
        if (*(uint *)(lVar13 + 0x18) <= uVar25) goto code_r0x015ab4c8;
        lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
        if (lVar13 == 0) goto code_r0x015ab4c4;
        iVar5 = /*Atlas.UI.KartIndicatorBehaviour$$get_CanUpdateTarget*/ func_0x015cc628(lVar13,0);
        fVar36 = (float)param_3;
        fVar35 = (float)param_2;
        if ((iVar5 != 0) && (*(char *)(lVar16 + 0xb8) == '\0')) goto code_r0x015aaf94;
        lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
        if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x1c8), lVar13 == 0))
        goto code_r0x015ab4c4;
        if (*(uint *)(lVar13 + 0x18) <= uVar25) goto code_r0x015ab4c8;
        lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
        if ((((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x80), lVar13 == 0)) ||
            (lVar13 = *(long *)(lVar13 + 0x10), lVar13 == 0)) ||
           (lVar13 = *(long *)(lVar13 + 0x18), lVar13 == 0)) goto code_r0x015ab4c4;
        fVar27 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre
                                  (lVar13,0);
        uStack_350 = CONCAT44(fVar35,fVar27);
        fVar29 = fVar35;
        fVar33 = fVar36;
        fStack_348 = fVar36;
        lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar16,uRam0000000003d41088);
        if (((lVar13 == 0) || (*(long *)(lVar13 + 0x38) == 0)) ||
           ((lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10), lVar13 == 0 ||
            (lVar13 = *(long *)(lVar13 + 0x18), lVar13 == 0)))) goto code_r0x015ab4c4;
        fVar28 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre
                                  (lVar13,0);
        uStack_360 = CONCAT44(fVar29,fVar28);
        fStack_368 = fVar36 - fVar33;
        param_3 = (ulong)(uint)fStack_368;
        uStack_370 = CONCAT44(fVar35 - fVar29,fVar27 - fVar28);
        fStack_358 = fVar33;
        if (cVar21 != '\0') {
          if (lVar8 == 0) goto code_r0x015ab4c4;
code_r0x015aadd4:
          uVar18 = (ulong)(uint)(fVar36 + *(float *)(lVar16 + 0xa8));
          param_4 = *(float *)(lVar16 + 0xa0);
          uVar20 = (ulong)(uint)(fVar35 + *(float *)(lVar16 + 0xa4));
          fVar29 = (float)/*UnityEngine.Camera$$WorldToViewportPoint*/ func_0x0321fe94(fVar27 + param_4,lVar8,0);
          fVar35 = (float)uVar20;
          fVar36 = (float)uVar18;
          if (cVar21 == '\0') {
            bVar3 = false;
            bVar2 = true;
            if (0.0 <= fVar29) {
              bVar3 = false;
              bVar2 = true;
              if (!NAN(fVar29)) {
                bVar3 = fVar29 == 1.0;
                bVar2 = 1.0 <= fVar29;
              }
            }
            param_2 = uVar20;
            param_3 = uVar18;
            if (!bVar2 || bVar3) {
              bVar3 = false;
              bVar2 = true;
              if (0.0 <= fVar35) {
                bVar3 = false;
                bVar2 = true;
                if (!NAN(fVar35)) {
                  bVar3 = fVar35 == 1.0;
                  bVar2 = 1.0 <= fVar35;
                }
              }
              if ((!bVar2 || bVar3) && (0.0 <= fVar36)) {
                iVar5 = /*Atlas.UI.Screens.GameInProgressScreen$$CanSeeTarget*/ func_0x015ab70c(lVar16,&uStack_360,&uStack_350,1,1);
                fVar35 = (float)param_2;
                fVar36 = (float)param_3;
                if (iVar5 != 0) goto code_r0x015aae04;
              }
            }
            goto code_r0x015aaf94;
          }
code_r0x015aae04:
          lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
          if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x1c8), lVar13 == 0))
          goto code_r0x015ab4c4;
          if (*(uint *)(lVar13 + 0x18) <= uVar25) goto code_r0x015ab4c8;
          lVar12 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
          lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
          if ((lVar13 == 0) || (*(long *)(lVar13 + 0x1c0) == 0)) goto code_r0x015ab4c4;
          uVar30 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar13 + 0x1c0),0);
          uStack_380 = CONCAT44(fVar35,uVar30);
          uStack_378 = CONCAT44(param_4,fVar36);
          param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_380,0);
          if (lVar12 == 0) goto code_r0x015ab4c4;
          param_2 = uVar20 & 0xffffffff;
          param_3 = uVar18 & 0xffffffff;
          /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(fVar29,lVar12,0);
          lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
          if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x1c8), lVar13 == 0))
          goto code_r0x015ab4c4;
          if (*(uint *)(lVar13 + 0x18) <= uVar25) goto code_r0x015ab4c8;
          lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
          if (lVar13 == 0) goto code_r0x015ab4c4;
          /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar13,uVar9,*(undefined1 *)(lVar16 + 0xb8),0);
          if (*(char *)(lVar16 + 0xb8) != '\0') {
            lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
            if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x1c8), lVar13 == 0))
            goto code_r0x015ab4c4;
            if (*(uint *)(lVar13 + 0x18) <= uVar25) goto code_r0x015ab4c8;
            lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
            if (lVar13 == 0) goto code_r0x015ab4c4;
            *(undefined4 *)(lVar13 + 0x88) = *(undefined4 *)(lVar16 + 0x98);
          }
          iStack_3b4 = iStack_3b4 + 1;
          goto code_r0x015ab2c0;
        }
        fVar29 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_370,0);
        fVar33 = *(float *)(lVar16 + 0x8c);
        param_2 = (ulong)(uint)fVar33;
        if (fVar33 <= fVar29) goto code_r0x015aaf94;
        fVar29 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_370,0);
        if (lVar8 == 0) goto code_r0x015ab4c4;
        fVar28 = (float)param_3;
        fVar34 = fVar33;
        lVar13 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar8,0);
        if (lVar13 == 0) goto code_r0x015ab4c4;
        fVar31 = (float)/*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar13,0);
        param_2 = (ulong)(uint)*(float *)(lVar16 + 0x94);
        if (*(float *)(lVar16 + 0x94) < fVar28 * (float)param_3 + fVar29 * fVar31 + fVar33 * fVar34)
        goto code_r0x015aadd4;
      }
code_r0x015aaf94:
      lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
      if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x1c8), lVar13 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar13 + 0x18) <= uVar25) goto code_r0x015ab4c8;
      lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
      if (lVar13 == 0) goto code_r0x015ab4c4;
      if (*(long *)(lVar13 + 0x80) != 0) {
        lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
        if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x1c8), lVar13 == 0))
        goto code_r0x015ab4c4;
        if (*(uint *)(lVar13 + 0x18) <= uVar25) goto code_r0x015ab4c8;
        lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
        if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x80), lVar13 == 0))
        goto code_r0x015ab4c4;
        *(undefined1 *)(lVar13 + 0x9c) = 0;
      }
      if (*(char *)(lVar16 + 0x9c) == '\0') {
        if (*(char *)(lVar16 + 0xb8) == '\0') {
          /*Atlas.UI.Screens.GameInProgressScreen$$UpdateAllKartIndicatorDataRace*/ func_0x015abdd0(lVar16);
        }
        else {
          /*Atlas.UI.Screens.GameInProgressScreen$$UpdateAllKartIndicatorDataBattle*/ func_0x015ab8c0(lVar16);
        }
      }
      if (*(char *)(lVar16 + 0x10a) == '\0') {
        cVar21 = *(char *)(lVar16 + 0xb8);
      }
      else {
        cVar21 = '\0';
      }
      if (*(long *)(lVar16 + 0x70) == 0) goto code_r0x015ab4c4;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_3b0,*(long *)(lVar16 + 0x70),uRam0000000003d3d1c8);
      uStack_338 = uStack_3a8;
      uStack_340 = uStack_3b0;
      lStack_330 = lStack_3a0;
      do {
        do {
          uVar20 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_340,uRam0000000003d33458);
          lVar13 = lStack_330;
          uVar30 = (undefined4)param_3;
          if ((uVar20 & 1) == 0) {
code_r0x015ab1e8:
            bVar3 = false;
            goto code_r0x015ab1ec;
          }
          if (lStack_330 == 0) {
            func_0x00f78af4();
            goto code_r0x015ab4d8;
          }
          fVar35 = *(float *)(lVar16 + 0x8c);
          param_2 = (ulong)(uint)fVar35;
          if ((fVar35 < *(float *)(lStack_330 + 0x18)) && (lStack_330 != *(long *)(lVar16 + 0x78)))
          goto code_r0x015ab1e8;
        } while (*(char *)(lStack_330 + 0x28) == '\0');
        lVar12 = *(long *)(lStack_330 + 0x10);
        if (lVar12 == 0) {
          func_0x00f78af4();
          goto code_r0x015ab4d8;
        }
      } while (*(char *)(lVar12 + 0x9c) != '\0');
      *(undefined1 *)(lVar12 + 0x9c) = 1;
      lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
      if (lVar12 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar12 = *(long *)(lVar12 + 0x1c8);
      if (lVar12 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar25) {
        uVar9 = func_0x00f78b24();
        func_0x00f78ac0(uVar9,0);
        goto code_r0x015ab4d8;
      }
      lVar12 = *(long *)(lVar12 + lVar17 * 8 + 0x20);
      if (lVar12 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(*(undefined4 *)(lVar16 + 0x98),lVar12,*(undefined8 *)(lVar13 + 0x10),
                      cVar21 != '\0',0);
      lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
      if (lVar12 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar12 = *(long *)(lVar12 + 0x1c8);
      if (lVar12 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar25) {
        uVar9 = func_0x00f78b24();
        func_0x00f78ac0(uVar9,0);
        goto code_r0x015ab4d8;
      }
      lVar12 = *(long *)(lVar12 + lVar17 * 8 + 0x20);
      uVar37 = *(undefined4 *)(lVar13 + 0x1c);
      uVar38 = *(uint *)(lVar13 + 0x20);
      uVar39 = *(uint *)(lVar13 + 0x24);
      lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
      if (lVar13 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      if (*(long *)(lVar13 + 0x1c0) == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      uVar32 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar13 + 0x1c0),0);
      uStack_380 = CONCAT44(fVar35,uVar32);
      uStack_378 = CONCAT44(param_4,uVar30);
      param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_380,0);
      if (lVar12 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      param_2 = (ulong)uVar38;
      param_3 = (ulong)uVar39;
      /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(uVar37,lVar12,0);
      lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
      if (lVar13 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar13 = *(long *)(lVar13 + 0x1c8);
      if (lVar13 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      if (*(uint *)(lVar13 + 0x18) <= uVar25) {
        uVar9 = func_0x00f78b24();
        func_0x00f78ac0(uVar9,0);
        goto code_r0x015ab4d8;
      }
      lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
      if (lVar13 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar13,uVar9,*(undefined1 *)(lVar16 + 0xb8),0);
      iStack_3b4 = iStack_3b4 + 1;
      bVar3 = true;
code_r0x015ab1ec:
      aiStack_398[iVar6] = 0x41c;
      iVar4 = iStack_384;
      iVar6 = iStack_384 + 1;
      iStack_384 = iVar6;
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_340,uRam0000000003d33450);
      if ((iVar6 != 0) && (aiStack_398[iVar4] == 0x41c)) {
        iStack_384 = iVar4;
        iVar6 = iVar4;
      }
      iVar4 = iVar6;
      if (!bVar3) {
        lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
        if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x1c8), lVar13 == 0))
        goto code_r0x015ab4c4;
        if (*(uint *)(lVar13 + 0x18) <= uVar25) goto code_r0x015ab4c8;
        lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
        if (lVar13 == 0) goto code_r0x015ab4c4;
        if (*(long *)(lVar13 + 0x80) != 0) {
          lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
          if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x1c8), lVar13 == 0))
          goto code_r0x015ab4c4;
          if (*(uint *)(lVar13 + 0x18) <= uVar25) goto code_r0x015ab4c8;
          lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
          if (lVar13 == 0) goto code_r0x015ab4c4;
          /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(0,lVar13,0,cVar21 != '\0',0);
        }
      }
code_r0x015ab2c0:
      uVar25 = uVar25 + 1;
      plVar7 = (long *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
      if (plVar7 == (long *)0x0) goto code_r0x015ab4c4;
      goto code_r0x015aaa94;
    }
  }
  lVar8 = func_0x00f78af4();
  plStack_198 = (long *)&Atlas_Contexts_RaceGameContext__OnEventTimeExceeded;
  lStack_1a8 = lVar16;
  if ((bRam0000000003eb4b94 & 1) == 0) {
    func_0x00f78a20(0x3d21b10);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d0a0);
    func_0x00f78a20(0x3d1d260);
    func_0x00f78a20(0x3d22180);
    bRam0000000003eb4b94 = 1;
  }
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  if ((*(long *)(lVar8 + 0x40) == 0) ||
     (plVar7 = *(long **)(*(long *)(lVar8 + 0x40) + 0x28), plVar7 == (long *)0x0)) {
code_r0x014d2c78:
    func_0x00f78af4();
  }
  else {
    lVar16 = *plVar7;
    uVar20 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar20 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == /*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0) {
          puVar10 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
          goto code_r0x014d29f0;
        }
        piVar19 = piVar19 + 4;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    puVar15 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)func_0x00fac1f0(plVar7);
code_r0x014d29f0:
    plVar7 = (long *)(*(code *)*puVar10)(plVar7,puVar10[1]);
    if (plVar7 != (long *)0x0) {
code_r0x014d2a14:
      lVar16 = *plVar7;
      uVar20 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar20 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar10 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
            goto code_r0x014d2a60;
          }
          piVar19 = piVar19 + 4;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
      puVar15 = (undefined8 *)0x0;
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar7);
code_r0x014d2a60:
      uVar20 = (*(code *)*puVar10)(plVar7,puVar10[1]);
      if ((uVar20 & 1) == 0) {
        lVar16 = 0;
        goto joined_r0x014d2b68;
      }
      lVar16 = *plVar7;
      uVar20 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar20 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == /*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260) {
            puVar10 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
            goto code_r0x014d2abc;
          }
          piVar19 = piVar19 + 4;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
      puVar15 = (undefined8 *)0x0;
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar7);
code_r0x014d2abc:
      lVar16 = (*(code *)*puVar10)(plVar7,puVar10[1]);
      if (lVar16 == 0) {
        func_0x00f78af4();
        goto code_r0x014d2c80;
      }
      lVar13 = *(long *)(lVar16 + 0x10);
      if (lVar13 != 0) {
        uStack_228 = *(undefined8 *)(lVar13 + 0x50);
        uStack_230 = *(undefined8 *)(lVar13 + 0x48);
        uStack_218 = *(undefined8 *)(lVar13 + 0x60);
        uStack_220 = *(undefined8 *)(lVar13 + 0x58);
        uVar20 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&uStack_230,0);
        if (((uVar20 & 1) != 0) && (*(char *)(lVar16 + 0x98) == '\0')) {
          if (*(long *)(lVar8 + 600) == 0) {
            func_0x00f78af4();
            goto code_r0x014d2c80;
          }
          lVar13 = *(long *)(lVar16 + 0x10);
          if (lVar13 == 0) {
            func_0x00f78af4();
            goto code_r0x014d2c80;
          }
          plVar11 = *(long **)(*(long *)(lVar8 + 600) + 0x20);
          uStack_248 = *(undefined8 *)(lVar13 + 0x50);
          uStack_250 = *(undefined8 *)(lVar13 + 0x48);
          puStack_238 = *(undefined **)(lVar13 + 0x60);
          pppppplStack_240 = *(long *******)(lVar13 + 0x58);
          /*Atlas.Gameplay.Player.GameContextPlayer$$GetRaceProgress*/ func_0x015a569c(lVar16,0);
          if (plVar11 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014d2c80;
          }
          puVar15 = (undefined8 *)(ulong)*(uint *)(lVar16 + 0x78);
          uStack_1e8 = uStack_248;
          uStack_1f0 = uStack_250;
          puStack_1d8 = puStack_238;
          pppppplStack_1e0 = pppppplStack_240;
          uStack_200 = 0;
          lStack_1f8 = 0;
          puStack_208 = (undefined *)0x0;
          (**(code **)(*plVar11 + 0x248))
                    (plVar11,&uStack_1f0,puVar15,1,&puStack_208,*(undefined8 *)(*plVar11 + 0x250));
        }
        goto code_r0x014d2a14;
      }
      func_0x00f78af4();
      goto code_r0x014d2c80;
    }
  }
  func_0x00f78af4();
code_r0x014d2c80:
                    /* WARNING: Does not return */
  pcVar22 = (code *)SoftwareBreakpoint(1,0x14d2c84);
  (*pcVar22)();
joined_r0x014d2b68:
  if (plVar7 != (long *)0x0) {
    lVar13 = *plVar7;
    uVar20 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar20 != 0) {
      piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
          goto code_r0x014d2bc0;
        }
        piVar19 = piVar19 + 4;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    puVar15 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)func_0x00fac1f0(plVar7);
code_r0x014d2bc0:
    (*(code *)*puVar10)(plVar7,puVar10[1]);
  }
  if (lVar16 == 0) {
    if (*(long *)(lVar8 + 0x20) == 0) goto code_r0x014d2c78;
    plVar7 = (long *)/*Core.StateManagement.StateMachine$$get_ActiveState*/ func_0x02b95214(*(long *)(lVar8 + 0x20),0);
    if (plVar7 != (long *)0x0) {
      if (*(byte *)(/*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10 + 300) <= *(byte *)(*plVar7 + 300)) {
        plVar11 = plVar7;
        if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10 + 300) * 8 +
                     -8) != /*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10) {
          plVar11 = (long *)0x0;
        }
        if (plVar11 != (long *)0x0) {
          if (*(long *)(lVar8 + 0x40) == 0) goto code_r0x014d2c78;
          /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetLocalGameContextPlayer*/ func_0x01599b24(*(long *)(lVar8 + 0x40),0);
          plVar7 = (long *)Atlas_Contexts_GameContextBaseInProgressState__NotifyGameContextFinished
                                     (plVar11,0);
        }
      }
    }
    return plVar7;
  }
  func_0x00f78ac0(lVar16,0);
  if (extraout_w1 != 1) {
    auVar40 = __Unwind_Resume();
    ppppppplStack_290 = (long *******)0x3d1d260;
    puStack_288 = (undefined *)0x3d22180;
    puStack_258 = &Atlas_Contexts_RaceGameContext__OnEnterShortCut;
    plStack_280 = plVar11;
    lStack_278 = lVar16;
    pplStack_270 = (long **)plVar7;
    lStack_268 = lVar8;
    pppplStack_260 = (long ****)&ppppuStack_1a0;
    if ((bRam0000000003eb4b95 & 1) == 0) {
      func_0x00f78a20(0x3d21b08);
      bRam0000000003eb4b95 = 1;
    }
    uStack_298 = 0;
    if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar7 = (long *)Atlas_Contexts_GameContextBase__TryGetKartCompositeFromCollider
                               (auVar40._8_8_,&uStack_298,0);
    if ((int)plVar7 != 0) {
      lVar16 = *(long *)(auVar40._0_8_ + 0x18);
      if (lVar16 == 0) {
        plVar7 = (long *)func_0x00f78af4();
        if ((bRam0000000003eb4b96 & 1) == 0) {
          func_0x00f78a20(0x3d21b08);
          bRam0000000003eb4b96 = 1;
        }
        if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        *(undefined1 *)((long)plVar7 + 0x249) = 1;
        *(undefined1 *)(plVar7 + 2) = 1;
        return plVar7;
      }
      plVar7 = (long *)/*Atlas.Stats.AtlasStats$$OnKartEnterShortcut*/ func_0x0146f188(lVar16,uStack_298,puVar15,0);
    }
    return plVar7;
  }
  plVar14 = (long *)___cxa_begin_catch();
  lVar16 = *plVar14;
  ___cxa_end_catch();
  goto joined_r0x014d2b68;
}



// ============================================================
// RVA: 0x14d2548 | Atlas.Contexts.RaceGameContext.OnLateUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x014d28f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015aa69c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ae374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014d28f8) */
/* WARNING: Removing unreachable block (ram,0x015aa6a0) */
/* WARNING: Removing unreachable block (ram,0x015aa6b8) */
/* WARNING: Removing unreachable block (ram,0x015aa6c0) */
/* WARNING: Removing unreachable block (ram,0x015aa6c8) */
/* WARNING: Removing unreachable block (ram,0x015aa6e4) */
/* WARNING: Removing unreachable block (ram,0x015aa730) */
/* WARNING: Removing unreachable block (ram,0x015aa708) */
/* WARNING: Removing unreachable block (ram,0x015ae1c0) */
/* WARNING: Removing unreachable block (ram,0x015ae1e8) */
/* WARNING: Removing unreachable block (ram,0x015ae1fc) */
/* WARNING: Removing unreachable block (ram,0x015ae220) */
/* WARNING: Removing unreachable block (ram,0x015ae240) */
/* WARNING: Removing unreachable block (ram,0x015ae244) */
/* WARNING: Removing unreachable block (ram,0x015ae24c) */
/* WARNING: Removing unreachable block (ram,0x015ae224) */
/* WARNING: Removing unreachable block (ram,0x015ae228) */
/* WARNING: Removing unreachable block (ram,0x015ae230) */
/* WARNING: Removing unreachable block (ram,0x015ae204) */
/* WARNING: Removing unreachable block (ram,0x015ae208) */
/* WARNING: Removing unreachable block (ram,0x015ae210) */
/* WARNING: Removing unreachable block (ram,0x015ae258) */
/* WARNING: Removing unreachable block (ram,0x015ae26c) */
/* WARNING: Removing unreachable block (ram,0x015ae274) */
/* WARNING: Removing unreachable block (ram,0x015ae278) */
/* WARNING: Removing unreachable block (ram,0x015ae2b4) */
/* WARNING: Removing unreachable block (ram,0x015ae28c) */
/* WARNING: Removing unreachable block (ram,0x015ae294) */
/* WARNING: Removing unreachable block (ram,0x015ae2c4) */
/* WARNING: Removing unreachable block (ram,0x015ae2e4) */
/* WARNING: Removing unreachable block (ram,0x015ae310) */
/* WARNING: Removing unreachable block (ram,0x015ae330) */
/* WARNING: Removing unreachable block (ram,0x015ae340) */
/* WARNING: Removing unreachable block (ram,0x015ae348) */
/* WARNING: Removing unreachable block (ram,0x015ae34c) */
/* WARNING: Removing unreachable block (ram,0x015ae378) */
/* WARNING: Removing unreachable block (ram,0x015ae388) */
/* WARNING: Removing unreachable block (ram,0x015ae390) */
/* WARNING: Removing unreachable block (ram,0x015ae394) */
/* WARNING: Removing unreachable block (ram,0x015ae3d4) */
/* WARNING: Removing unreachable block (ram,0x015ae3a4) */
/* WARNING: Removing unreachable block (ram,0x015ae3ac) */
/* WARNING: Removing unreachable block (ram,0x015ae35c) */
/* WARNING: Removing unreachable block (ram,0x015ae3e4) */
/* WARNING: Removing unreachable block (ram,0x015ae364) */
/* WARNING: Removing unreachable block (ram,0x016b8cd4) */
/* WARNING: Removing unreachable block (ram,0x016b8d00) */
/* WARNING: Removing unreachable block (ram,0x016b8d14) */
/* WARNING: Removing unreachable block (ram,0x016b8d20) */
/* WARNING: Removing unreachable block (ram,0x016b8d28) */
/* WARNING: Removing unreachable block (ram,0x016b8d2c) */
/* WARNING: Removing unreachable block (ram,0x016962e4) */
/* WARNING: Removing unreachable block (ram,0x01696308) */
/* WARNING: Removing unreachable block (ram,0x01696328) */
/* WARNING: Removing unreachable block (ram,0x016963a8) */
/* WARNING: Removing unreachable block (ram,0x0169632c) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */
/* WARNING: Removing unreachable block (ram,0x01696364) */
/* WARNING: Removing unreachable block (ram,0x01696370) */
/* WARNING: Removing unreachable block (ram,0x01696378) */
/* WARNING: Removing unreachable block (ram,0x0169637c) */
/* WARNING: Removing unreachable block (ram,0x016963ac) */
/* WARNING: Removing unreachable block (ram,0x015ae2d8) */
/* WARNING: Removing unreachable block (ram,0x014b3b58) */
/* WARNING: Removing unreachable block (ram,0x014b3b70) */
/* WARNING: Removing unreachable block (ram,0x014b3b78) */
/* WARNING: Removing unreachable block (ram,0x015ae29c) */
/* WARNING: Removing unreachable block (ram,0x032c2184) */
/* WARNING: Removing unreachable block (ram,0x032c21bc) */
/* WARNING: Removing unreachable block (ram,0x032c21d0) */
/* WARNING: Removing unreachable block (ram,0x032c21e4) */
/* WARNING: Removing unreachable block (ram,0x032c21ec) */
/* WARNING: Removing unreachable block (ram,0x032c21f0) */
/* WARNING: Removing unreachable block (ram,0x032c22b0) */
/* WARNING: Removing unreachable block (ram,0x032c22bc) */
/* WARNING: Removing unreachable block (ram,0x032c22c4) */
/* WARNING: Removing unreachable block (ram,0x032c22c8) */
/* WARNING: Removing unreachable block (ram,0x032c22dc) */
/* WARNING: Removing unreachable block (ram,0x032c22e0) */
/* WARNING: Removing unreachable block (ram,0x032c232c) */
/* WARNING: Removing unreachable block (ram,0x032c2330) */
/* WARNING: Removing unreachable block (ram,0x032c2354) */
/* WARNING: Removing unreachable block (ram,0x032c235c) */
/* WARNING: Removing unreachable block (ram,0x032c2360) */
/* WARNING: Removing unreachable block (ram,0x032c2204) */
/* WARNING: Removing unreachable block (ram,0x032c2214) */
/* WARNING: Removing unreachable block (ram,0x032c221c) */
/* WARNING: Removing unreachable block (ram,0x032c2220) */
/* WARNING: Removing unreachable block (ram,0x032c242c) */
/* WARNING: Removing unreachable block (ram,0x032c2234) */
/* WARNING: Removing unreachable block (ram,0x032c223c) */
/* WARNING: Removing unreachable block (ram,0x032c226c) */
/* WARNING: Removing unreachable block (ram,0x032c2274) */
/* WARNING: Removing unreachable block (ram,0x032c2278) */
/* WARNING: Removing unreachable block (ram,0x032c236c) */
/* WARNING: Removing unreachable block (ram,0x032c2288) */
/* WARNING: Removing unreachable block (ram,0x032c228c) */
/* WARNING: Removing unreachable block (ram,0x032c2374) */
/* WARNING: Removing unreachable block (ram,0x032c2378) */
/* WARNING: Removing unreachable block (ram,0x032c237c) */
/* WARNING: Removing unreachable block (ram,0x032c2380) */
/* WARNING: Removing unreachable block (ram,0x032c2394) */
/* WARNING: Removing unreachable block (ram,0x032c23ac) */
/* WARNING: Removing unreachable block (ram,0x032c23b4) */
/* WARNING: Removing unreachable block (ram,0x032c23b8) */
/* WARNING: Removing unreachable block (ram,0x032c23cc) */
/* WARNING: Removing unreachable block (ram,0x032c2448) */
/* WARNING: Removing unreachable block (ram,0x032c23d0) */
/* WARNING: Removing unreachable block (ram,0x032c23e0) */
/* WARNING: Removing unreachable block (ram,0x032c23ec) */
/* WARNING: Removing unreachable block (ram,0x032c23f4) */
/* WARNING: Removing unreachable block (ram,0x032c23f8) */
/* WARNING: Removing unreachable block (ram,0x032c2400) */
/* WARNING: Removing unreachable block (ram,0x032c244c) */
/* WARNING: Removing unreachable block (ram,0x032c2474) */
/* WARNING: Removing unreachable block (ram,0x032c2494) */
/* WARNING: Removing unreachable block (ram,0x032c24ac) */
/* WARNING: Removing unreachable block (ram,0x032c24b4) */
/* WARNING: Removing unreachable block (ram,0x032c24b8) */
/* WARNING: Removing unreachable block (ram,0x032c24cc) */
/* WARNING: Removing unreachable block (ram,0x032c2550) */
/* WARNING: Removing unreachable block (ram,0x032c24d8) */
/* WARNING: Removing unreachable block (ram,0x032c24f0) */
/* WARNING: Removing unreachable block (ram,0x032c24f8) */
/* WARNING: Removing unreachable block (ram,0x032c24fc) */
/* WARNING: Removing unreachable block (ram,0x032c2510) */
/* WARNING: Removing unreachable block (ram,0x032c2524) */
/* WARNING: Removing unreachable block (ram,0x032c252c) */
/* WARNING: Removing unreachable block (ram,0x032c2530) */
/* WARNING: Removing unreachable block (ram,0x032c2540) */
/* WARNING: Removing unreachable block (ram,0x015ac734) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16]
Atlas_Contexts_RaceGameContext__OnLateUpdate
          (undefined1 param_1 [16],ulong param_2,ulong param_3,float param_4,long param_5,
          long *param_6)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  int extraout_w1;
  long extraout_x1;
  long extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 *puVar17;
  undefined *puVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  long *plVar22;
  ulong uVar23;
  char cVar24;
  long *unaff_x22;
  long *plVar25;
  code *pcVar26;
  long *unaff_x23;
  long lVar27;
  long **unaff_x24;
  long **pplVar28;
  long lVar29;
  undefined **ppuVar30;
  uint uVar31;
  undefined8 unaff_x25;
  undefined8 uVar32;
  undefined8 unaff_x26;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  undefined4 uVar39;
  undefined8 extraout_d0;
  undefined8 extraout_d0_04;
  undefined8 extraout_d0_05;
  undefined8 extraout_d0_06;
  undefined8 extraout_d0_07;
  undefined8 extraout_d0_00;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar40 [16];
  undefined8 extraout_d0_01;
  undefined8 extraout_var_01;
  undefined1 auVar41 [16];
  undefined8 extraout_d0_02;
  undefined8 extraout_var_02;
  undefined1 auVar42 [16];
  undefined8 extraout_d0_03;
  undefined8 extraout_var_03;
  undefined1 auVar43 [16];
  undefined8 extraout_var_04;
  undefined1 auVar44 [16];
  undefined8 extraout_var_05;
  undefined8 extraout_var_06;
  undefined8 extraout_var_07;
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  uint uVar51;
  uint uVar52;
  int iStack_384;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long lStack_370;
  int aiStack_368 [5];
  int iStack_354;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  float fStack_338;
  undefined8 uStack_330;
  float fStack_328;
  undefined8 uStack_320;
  float fStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long lStack_300;
  undefined8 uStack_268;
  long *******ppppppplStack_260;
  undefined *puStack_258;
  long *plStack_250;
  long lStack_248;
  long **pplStack_240;
  long lStack_238;
  long ****pppplStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long ******pppppplStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 ******ppppppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long ******pppppplStack_1b0;
  undefined *puStack_1a8;
  long **pplStack_1a0;
  long *plStack_198;
  long *plStack_190;
  ulong uStack_188;
  long *plStack_180;
  long lStack_178;
  undefined8 ****ppppuStack_170;
  undefined *puStack_168;
  long *plStack_160;
  long lStack_158;
  long **pplStack_150;
  long *plStack_148;
  long *plStack_140;
  ulong uStack_138;
  long *plStack_130;
  undefined *puStack_128;
  undefined1 *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  uVar23 = 0x3eb4000;
  if ((bRam0000000003eb4b93 & 1) == 0) {
    func_0x00f78a20(0x3d21b10);
    func_0x00f78a20(0x3d1d448);
    func_0x00f78a20(0x3d1d578);
    bRam0000000003eb4b93 = 1;
  }
  puVar17 = (undefined8 *)0x0;
  Atlas_Contexts_GameContextBase__OnLateUpdate(param_5,param_6);
  plVar25 = unaff_x22;
  if (*(long *)(param_5 + 0x40) != 0) {
    lVar9 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetLocalGameContextPlayer*/ func_0x01599b24(*(long *)(param_5 + 0x40),0);
    uVar10 = extraout_d0;
    uVar13 = extraout_var;
    if (lVar9 == 0) {
LAB_014d2840:
      auVar40._8_8_ = uVar13;
      auVar40._0_8_ = uVar10;
      return auVar40;
    }
    param_6 = *(long **)(param_5 + 0x250);
    uVar10 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar9,0);
    if (param_6 != (long *)0x0) {
      puVar17 = (undefined8 *)0x0;
      /*Atlas.Audio.AtlasAudioManager$$UpdateLaps*/ func_0x01459740(param_6,uVar10);
      if ((*(long *)(param_5 + 0x40) != 0) &&
         (param_6 = *(long **)(*(long *)(param_5 + 0x40) + 0x28), param_6 != (long *)0x0)) {
        uVar23 = 0;
        pplVar28 = (long **)0x3d1d578;
        uVar32 = 0x3d1d448;
        uVar33 = 0x3d21b10;
        do {
          lVar9 = *param_6;
          uVar20 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == /*System.Collections.Generic.IReadOnlyCollection<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d578) {
                puVar11 = (undefined8 *)(lVar9 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_014d2664;
              }
              piVar21 = piVar21 + 4;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
          puVar17 = (undefined8 *)0x0;
          puVar11 = (undefined8 *)func_0x00fac1f0(param_6);
LAB_014d2664:
          iVar6 = (*(code *)*puVar11)(param_6,puVar11[1]);
          uVar10 = extraout_d0_00;
          uVar13 = extraout_var_00;
          if (iVar6 <= (int)uVar23) goto LAB_014d2840;
          plVar25 = unaff_x22;
          unaff_x24 = (long **)0x3d1d578;
          unaff_x25 = 0x3d1d448;
          unaff_x26 = 0x3d21b10;
          if ((*(long *)(param_5 + 0x40) == 0) ||
             (plVar25 = *(long **)(*(long *)(param_5 + 0x40) + 0x28), plVar25 == (long *)0x0))
          break;
          lVar9 = *plVar25;
          uVar20 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == /*System.Collections.Generic.IList<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d448) {
                puVar11 = (undefined8 *)(lVar9 + (long)*piVar21 * 0x10 + 0x138);
                goto code_r0x014d26d4;
              }
              piVar21 = piVar21 + 4;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
          puVar11 = (undefined8 *)func_0x00fac1f0(plVar25,/*System.Collections.Generic.IList<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d448,0);
code_r0x014d26d4:
          puVar17 = (undefined8 *)puVar11[1];
          unaff_x22 = (long *)(*(code *)*puVar11)(plVar25,uVar23);
          unaff_x24 = pplVar28;
          unaff_x25 = uVar32;
          unaff_x26 = uVar33;
          if (unaff_x22 == (long *)0x0) break;
          if ((char)unaff_x22[0x13] == '\0') {
            plVar25 = unaff_x22;
            if (unaff_x22[2] == 0) break;
            if ((((*(uint *)(unaff_x22[2] + 0x50) | 2) == 2) &&
                (iVar6 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(unaff_x22,0), *(int *)(param_5 + 0x24c) < iVar6)) &&
               (*(char *)(param_5 + 0x238) == '\0')) {
              if ((*(long *)(param_5 + 600) == 0) ||
                 (lVar9 = *(long *)(*(long *)(param_5 + 600) + 0x20), lVar9 == 0)) break;
              /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_d8,lVar9,0);
              uStack_b8 = uStack_d0;
              uStack_c0 = uStack_d8;
              uStack_b0 = uStack_c8;
              uStack_e8 = uStack_d0;
              uStack_f0 = uStack_d8;
              uStack_e0 = uStack_c8;
              puVar17 = (undefined8 *)0x0;
              /*Atlas.Gameplay.Player.GameContextPlayer$$OnFinishedGame*/ func_0x015a5760(unaff_x22,&uStack_f0);
              if ((*(long *)(param_5 + 600) == 0) || (lVar9 = unaff_x22[2], lVar9 == 0)) break;
              unaff_x23 = *(long **)(*(long *)(param_5 + 600) + 0x20);
              uStack_108 = *(undefined8 *)(lVar9 + 0x50);
              uStack_110 = *(undefined8 *)(lVar9 + 0x48);
              uStack_f8 = *(undefined8 *)(lVar9 + 0x60);
              param_2 = *(ulong *)(lVar9 + 0x58);
              uStack_100 = param_2;
              /*Atlas.Gameplay.Player.GameContextPlayer$$GetRaceProgress*/ func_0x015a569c(unaff_x22,0);
              if (unaff_x23 == (long *)0x0) break;
              puVar17 = (undefined8 *)(ulong)*(uint *)(unaff_x22 + 0xf);
              uStack_78 = uStack_108;
              uStack_80 = uStack_110;
              uStack_68 = uStack_f8;
              uStack_70 = uStack_100;
              uStack_98 = uStack_b8;
              uStack_a0 = uStack_c0;
              uStack_90 = uStack_b0;
              param_2 = uStack_c0;
              param_3 = uStack_100;
              (**(code **)(*unaff_x23 + 0x248))
                        (unaff_x23,&uStack_80,puVar17,0,&uStack_a0,
                         *(undefined8 *)(*unaff_x23 + 0x250));
              iVar6 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_IsLocalPlayer*/ func_0x0159dd28(unaff_x22,0);
              if (iVar6 != 0) {
                if (*(long *)(param_5 + 0x20) == 0) break;
                plVar25 = (long *)/*Core.StateManagement.StateMachine$$get_ActiveState*/ func_0x02b95214(*(long *)(param_5 + 0x20),0);
                if (plVar25 != (long *)0x0) {
                  if ((*(byte *)(/*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10 + 300) <= *(byte *)(*plVar25 + 300)) &&
                     (*(long *)(*(long *)(*plVar25 + 200) +
                                (ulong)*(byte *)(/*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10 + 300) * 8 + -8) ==
                      /*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10)) {
                    Atlas_Contexts_GameContextBaseInProgressState__NotifyGameContextFinished
                              (plVar25,0);
                  }
                }
              }
            }
          }
          uVar23 = (ulong)((int)uVar23 + 1);
        } while( true );
      }
    }
  }
  auVar40 = func_0x00f78af4();
  if (extraout_x1 != 0) {
    puVar16 = *(undefined **)(extraout_x1 + 0x60);
    if (puVar16 == (undefined *)0x0) {
      return auVar40;
    }
    uVar10 = 0;
    plStack_160 = (long *)unaff_x26;
    lStack_158 = unaff_x25;
    pplStack_150 = unaff_x24;
    plStack_148 = unaff_x23;
    plStack_140 = plVar25;
    uStack_138 = uVar23;
    plStack_130 = param_6;
    puStack_128 = (undefined *)param_5;
    puStack_120 = &stack0xfffffffffffffff0;
    puStack_118 = &Atlas_Contexts_RaceGameContext__GameComplete;
    puStack_168 = puVar16;
    lVar9 = *(long *)(puVar16 + 0x68);
    if (lVar9 == 0) {
      ppuVar30 = &puStack_168;
      lVar27 = 1;
    }
    else {
      lVar27 = *(long *)(lVar9 + 0x18);
      if (lVar27 == 0) {
        return auVar40;
      }
      ppuVar30 = (undefined **)(lVar9 + 0x20);
    }
    lVar9 = 0;
    do {
      puVar18 = ppuVar30[lVar9];
      pcVar26 = *(code **)(puVar18 + 0x10);
      plVar25 = *(long **)(puVar18 + 0x20);
      lVar15 = *(long *)(puVar18 + 0x28);
      if (*(short *)(lVar15 + 0x48) == -1) {
        func_0x00f78ad8(lVar15,uVar10);
      }
      iVar6 = func_0x00f78a4c(lVar15);
      if (iVar6 == 0) {
        if ((((plVar25 == (long *)0x0) || (*(short *)(lVar15 + 0x48) == -1)) ||
            ((*(byte *)(*plVar25 + 0x115) & 1) != 0)) || (*(long *)(puVar16 + 0x18) == 0))
        goto code_r0x02924d98;
        iVar6 = func_0x00f78a44(lVar15);
        iVar8 = func_0x00f78ec0(lVar15);
        if (iVar6 == 0) {
          uVar1 = *(ushort *)(lVar15 + 0x48);
          if (iVar8 == 0) {
            lVar15 = *plVar25 + (ulong)uVar1 * 0x10;
            auVar40 = (**(code **)(lVar15 + 0x138))(plVar25,*(undefined8 *)(lVar15 + 0x140));
            uVar10 = extraout_x1_03;
            goto code_r0x02924da4;
          }
          lVar15 = func_0x00f78a48(lVar15);
          lVar19 = *plVar25;
          uVar23 = (ulong)*(ushort *)(lVar19 + 0x12a);
          if (uVar23 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == lVar15) {
                puVar17 = (undefined8 *)
                          (lVar19 + (long)(int)(*piVar21 + (uint)uVar1) * 0x10 + 0x138);
                goto code_r0x02924e68;
              }
              piVar21 = piVar21 + 4;
              uVar23 = uVar23 - 1;
            } while (uVar23 != 0);
          }
          puVar17 = (undefined8 *)func_0x00fac1f0(plVar25,lVar15,(ulong)uVar1);
code_r0x02924e68:
          pcVar26 = (code *)*puVar17;
          puVar17 = (undefined8 *)puVar17[1];
        }
        else {
          if (iVar8 == 0) {
            uVar10 = *(undefined8 *)(*plVar25 + (ulong)*(ushort *)(lVar15 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar19 = *plVar25;
            uVar23 = (ulong)*(ushort *)(lVar19 + 0x12a);
            if (uVar23 != 0) {
              piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)(lVar15 + 0x18)) {
                  lVar19 = lVar19 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar15 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02924e40;
                }
                piVar21 = piVar21 + 4;
                uVar23 = uVar23 - 1;
              } while (uVar23 != 0);
            }
            lVar19 = func_0x00fac1f0(plVar25);
code_r0x02924e40:
            uVar10 = *(undefined8 *)(lVar19 + 8);
          }
          puVar17 = (undefined8 *)func_0x00f78acc(uVar10,lVar15);
          pcVar26 = (code *)*puVar17;
        }
        auVar40 = (*pcVar26)(plVar25,puVar17);
        uVar10 = extraout_x1_04;
      }
      else if (*(char *)(lVar15 + 0x4a) == '\0') {
        auVar40 = (*pcVar26)(lVar15);
        uVar10 = extraout_x1_01;
      }
      else {
code_r0x02924d98:
        auVar40 = (*pcVar26)(plVar25,lVar15);
        uVar10 = extraout_x1_02;
      }
code_r0x02924da4:
      lVar9 = lVar9 + 1;
      if (lVar9 == lVar27) {
        return auVar40;
      }
    } while( true );
  }
  puStack_118 = &Atlas_Contexts_RaceGameContext__GameComplete;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00f78af4();
  puStack_128 = &Atlas_Contexts_RaceGameContext__GetRankingForPlayer;
  *puVar17 = 0;
  puVar17[1] = 0;
  puVar17[2] = 0;
  plStack_140 = param_6;
  uStack_138 = param_5;
  if (extraout_x1_00 != 0) {
    plStack_130 = (long *)&puStack_120;
    iVar6 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(extraout_x1_00,0);
    return ZEXT416((uint)(*(float *)(extraout_x1_00 + 0x70) + (float)iVar6));
  }
  plStack_130 = (long *)&puStack_120;
  auVar40 = func_0x00f78af4();
  lVar9 = auVar40._8_8_;
  plStack_148 = (long *)&Atlas_Contexts_RaceGameContext__SetupGameContextScreen;
  *(long *)(auVar40._0_8_ + 0x48) = lVar9;
  pplStack_1a0 = unaff_x24;
  plStack_198 = unaff_x23;
  plStack_190 = plVar25;
  uStack_188 = uVar23;
  plStack_180 = param_6;
  ppppuStack_170 = (undefined8 ****)&pplStack_150;
  plStack_160 = param_6;
  lStack_158 = param_5;
  pplStack_150 = &plStack_130;
  if (puVar17 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar17 + 0x52) = 0;
    param_5 = 0;
    if (lVar9 != 0) {
      puStack_168 = &UNK_014d28f8;
      lStack_178 = lVar9;
      if ((bRam0000000003eb522b & 1) == 0) {
        func_0x00f78a20(0x3d41080,8,0,0);
        bRam0000000003eb522b = 1;
      }
      lVar27 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41080);
      if (lVar27 != 0) {
                    /* WARNING: Could not recover jumptable at 0x015ac724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar40 = (*(code *)(&UNK_015ac728 + (ulong)UNK_033f8a48 * 4))(lVar27,8,0,0);
        return auVar40;
      }
      uVar10 = func_0x00f78af4();
      uStack_1d0 = 0x3eb5000;
      uStack_1c0 = 8;
      uStack_1b8 = 0;
      puStack_1a8 = &Atlas_UI_Screens_GameInProgressScreen__UpdateArcade;
      lStack_1c8 = lVar9;
      pppppplStack_1b0 = (long ******)&ppppuStack_170;
      if ((bRam0000000003eb5227 & 1) == 0) {
        func_0x00f78a20(0x3d41088);
        bRam0000000003eb5227 = 1;
      }
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar10,uRam0000000003d41088);
      if ((lVar9 != 0) && (*(long *)(lVar9 + 0x30) != 0)) {
        auVar44._8_8_ = extraout_var_04;
        auVar44._0_8_ = extraout_d0_04;
        return auVar44;
      }
      uVar13 = func_0x00f78af4();
      uStack_200 = 0x3eb5000;
      uStack_1f8 = 0x3d41088;
      uStack_1f0 = 0x3eb5000;
      puStack_1d8 = &Atlas_UI_Screens_GameInProgressScreen__OnLateUpdate;
      pppppplStack_210 = (long ******)&ppppppuStack_1e0;
      uStack_1e8 = uVar10;
      ppppppuStack_1e0 = &pppppplStack_1b0;
      if ((bRam0000000003eb5228 & 1) == 0) {
        func_0x00f78a20(0x3d41080);
        func_0x00f78a20(0x3d41088);
        bRam0000000003eb5228 = 1;
      }
      lStack_238 = 0x3d41080;
      pppplStack_230 = (long ****)0x3eb5000;
      puStack_228 = (undefined *)0x3eb5000;
      uStack_220 = 0x3d41088;
      puStack_208 = &UNK_015aa6a0;
      pplStack_240 = unaff_x24;
      uStack_218 = uVar13;
      if ((bRam0000000003eb522e & 1) == 0) {
        func_0x00f78a20(0x3d3b9d0);
        func_0x00f78a20(0x3d3b898);
        func_0x00f78a20(0x3d41080);
        func_0x00f78a20(0x3d41088);
        bRam0000000003eb522e = 1;
      }
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar13,uRam0000000003d41088);
      if (((lVar9 != 0) && (*(long *)(lVar9 + 0x38) != 0)) &&
         (lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 200), lVar9 != 0)) {
        iVar6 = *(int *)(lVar9 + 0x18);
        lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar13,uRam0000000003d41088);
        if (((lVar9 != 0) && (*(long *)(lVar9 + 0x38) != 0)) &&
           (lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0xd0), lVar9 != 0)) {
          iVar8 = *(int *)(lVar9 + 0x18);
          lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar13,uRam0000000003d41080);
          if (lVar9 != 0) {
            /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetWeaponIndicatorActive*/ func_0x015adeac(lVar9,0 < iVar8 + iVar6,0);
            lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar13,uRam0000000003d41080);
            lVar27 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar13,uRam0000000003d41088);
            if (((lVar27 != 0) && (*(long *)(lVar27 + 0x38) != 0)) &&
               (lStack_248 = *(long *)(*(long *)(lVar27 + 0x38) + 200), lVar9 != 0)) {
              /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetCulturePodWeaponIndicatorArrows*/ func_0x015adf10(lVar9,&lStack_248,0);
              lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar13,uRam0000000003d41080);
              lVar27 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar13,uRam0000000003d41088);
              if (((lVar27 != 0) && (*(long *)(lVar27 + 0x38) != 0)) &&
                 (plStack_250 = *(long **)(*(long *)(lVar27 + 0x38) + 0xd0), lVar9 != 0)) {
                auVar40 = /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetSheldonWeaponIndicatorArrows*/ func_0x015ae03c(lVar9,&plStack_250,0);
                return auVar40;
              }
            }
          }
        }
      }
      lVar9 = func_0x00f78af4();
      puStack_258 = &Atlas_UI_Screens_GameInProgressScreen__UpdateKartIndicator;
      uStack_268 = uVar13;
      ppppppplStack_260 = &pppppplStack_210;
      if ((bRam0000000003eb5230 & 1) == 0) {
        func_0x00f78a20(0x3d33450);
        func_0x00f78a20(0x3d33458);
        func_0x00f78a20(0x3d33460);
        func_0x00f78a20(0x3d3d1c8);
        func_0x00f78a20(0x3d41080);
        func_0x00f78a20(0x3d41088);
        func_0x00f78a20(0x3d41090);
        bRam0000000003eb5230 = 1;
      }
      uStack_310 = 0;
      uStack_308 = 0;
      lStack_300 = 0;
      fStack_318 = 0.0;
      uStack_320 = 0;
      fStack_328 = 0.0;
      uStack_330 = 0;
      fStack_338 = 0.0;
      uStack_348 = 0;
      uStack_340 = 0;
      uStack_350 = 0;
      iStack_354 = 0;
      lVar27 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41080);
      if (((lVar27 == 0) || (*(long *)(lVar27 + 0x1c0) == 0)) ||
         (lVar27 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar27 + 0x1c0),0), lVar27 == 0))
      goto code_r0x015ab4c4;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar27,*(char *)(lVar9 + 0x109) == '\0',0);
      lVar27 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41080);
      if (((lVar27 == 0) || (*(long *)(lVar27 + 0x1c0) == 0)) ||
         (lVar27 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar27 + 0x1c0),0), lVar27 == 0))
      goto code_r0x015ab4c4;
      iVar6 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar27,0);
      uVar10 = extraout_d0_05;
      uVar13 = extraout_var_05;
      if (iVar6 == 0) {
code_r0x015ab494:
        auVar45._8_8_ = uVar13;
        auVar45._0_8_ = uVar10;
        return auVar45;
      }
      *(undefined1 *)(lVar9 + 0x9c) = 0;
      lVar27 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar9,uRam0000000003d41090);
      if ((lVar27 == 0) || (*(long *)(lVar27 + 0x40) == 0)) goto code_r0x015ab4c4;
      lVar27 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(lVar27 + 0x40),0);
      if (*(long *)(lVar9 + 0x78) == 0) {
code_r0x015aaa34:
        lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar9,uRam0000000003d41088);
        if ((lVar15 == 0) || (*(long *)(lVar15 + 0x38) == 0)) goto code_r0x015ab4c4;
        if (*(int *)(*(long *)(lVar15 + 0x38) + 0x74) == 1) {
          *(undefined8 *)(lVar9 + 0x78) = *(undefined8 *)(lVar9 + 0x80);
        }
      }
      else {
        lVar15 = *(long *)(*(long *)(lVar9 + 0x78) + 0x10);
        if (lVar15 == 0) goto code_r0x015ab4c4;
        if (*(int *)(lVar15 + 0x74) != 1) goto code_r0x015aaa34;
      }
      lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41080);
      if (lVar15 == 0) {
code_r0x015ab4c4:
        func_0x00f78af4();
code_r0x015ab4c8:
        uVar10 = func_0x00f78b24();
        func_0x00f78ac0(uVar10,0);
        __Unwind_Resume();
code_r0x015ab4d8:
                    /* WARNING: Does not return */
        pcVar26 = (code *)SoftwareBreakpoint(1,0x15ab4dc);
        (*pcVar26)();
      }
      iVar8 = 0;
      iVar6 = 0;
      iStack_384 = 0;
      uVar31 = 0;
      uVar10 = extraout_d0_06;
      uVar13 = extraout_var_06;
code_r0x015aaa94:
      if (*(long *)(lVar15 + 0x1c8) == 0) goto code_r0x015ab4c4;
      if ((*(int *)(*(long *)(lVar15 + 0x1c8) + 0x18) <= (int)uVar31) ||
         (*(int *)(lVar9 + 0xbc) <= iStack_384)) goto code_r0x015ab494;
      lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41080);
      if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x1c8), lVar15 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar15 + 0x18) <= uVar31) goto code_r0x015ab4c8;
      lVar19 = (long)(int)uVar31;
      lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
      if (lVar15 == 0) goto code_r0x015ab4c4;
      if (*(long *)(lVar15 + 0x80) == 0) {
        bVar5 = false;
      }
      else {
        lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41080);
        if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x1c8), lVar15 == 0))
        goto code_r0x015ab4c4;
        if (*(uint *)(lVar15 + 0x18) <= uVar31) goto code_r0x015ab4c8;
        lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
        if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x80), lVar15 == 0))
        goto code_r0x015ab4c4;
        bVar5 = *(int *)(lVar15 + 0x74) == 1;
      }
      lVar15 = *(long *)(lVar9 + 0x78);
      if ((bool)(bVar5 & lVar15 == 0)) {
        if (*(long *)(lVar9 + 0x70) == 0) goto code_r0x015ab4c4;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_380,*(long *)(lVar9 + 0x70),uRam0000000003d3d1c8);
        uStack_308 = uStack_378;
        uStack_310 = uStack_380;
        lStack_300 = lStack_370;
        do {
          uVar23 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_310,uRam0000000003d33458);
          lVar15 = lStack_300;
          if ((uVar23 & 1) == 0) goto code_r0x015aabdc;
          if (lStack_300 == 0) {
            func_0x00f78af4();
            goto code_r0x015ab4d8;
          }
          lVar29 = *(long *)(lStack_300 + 0x10);
          lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41080);
          if (lVar14 == 0) {
            func_0x00f78af4();
            goto code_r0x015ab4d8;
          }
          lVar14 = *(long *)(lVar14 + 0x1c8);
          if (lVar14 == 0) {
            func_0x00f78af4();
            goto code_r0x015ab4d8;
          }
          if (*(uint *)(lVar14 + 0x18) <= uVar31) {
            uVar10 = func_0x00f78b24();
            func_0x00f78ac0(uVar10,0);
            goto code_r0x015ab4d8;
          }
          lVar14 = *(long *)(lVar14 + lVar19 * 8 + 0x20);
          if (lVar14 == 0) {
            func_0x00f78af4();
            goto code_r0x015ab4d8;
          }
        } while (lVar29 != *(long *)(lVar14 + 0x80));
        *(long *)(lVar9 + 0x78) = lVar15;
code_r0x015aabdc:
        aiStack_368[iVar6] = 0x132;
        iVar8 = iStack_354;
        iVar6 = iStack_354 + 1;
        iStack_354 = iVar6;
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_310,uRam0000000003d33450);
        if ((iVar6 != 0) && (aiStack_368[iVar8] == 0x132)) {
          iStack_354 = iVar8;
          iVar6 = iVar8;
        }
        lVar15 = *(long *)(lVar9 + 0x78);
        iVar8 = iVar6;
      }
      if (lVar15 == 0) {
code_r0x015aac8c:
        uVar10 = 0;
        cVar24 = '\0';
      }
      else {
        lVar14 = *(long *)(lVar15 + 0x10);
        lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41080);
        if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x1c8), lVar15 == 0))
        goto code_r0x015ab4c4;
        if (*(uint *)(lVar15 + 0x18) <= uVar31) goto code_r0x015ab4c8;
        lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
        if (lVar15 == 0) goto code_r0x015ab4c4;
        if (!(bool)(bVar5 & lVar14 == *(long *)(lVar15 + 0x80))) goto code_r0x015aac8c;
        cVar24 = *(char *)(lVar9 + 0xb8);
        uVar10 = 1;
      }
      lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41080);
      if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x1c8), lVar15 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar15 + 0x18) <= uVar31) goto code_r0x015ab4c8;
      lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
      if (lVar15 == 0) goto code_r0x015ab4c4;
      if (*(long *)(lVar15 + 0x80) != 0) {
        lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41080);
        if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x1c8), lVar15 == 0))
        goto code_r0x015ab4c4;
        if (*(uint *)(lVar15 + 0x18) <= uVar31) goto code_r0x015ab4c8;
        lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
        if (lVar15 == 0) goto code_r0x015ab4c4;
        iVar7 = /*Atlas.UI.KartIndicatorBehaviour$$get_CanUpdateTarget*/ func_0x015cc628(lVar15,0);
        fVar49 = (float)param_3;
        fVar48 = (float)param_2;
        if ((iVar7 != 0) && (*(char *)(lVar9 + 0xb8) == '\0')) goto code_r0x015aaf94;
        lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41080);
        if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x1c8), lVar15 == 0))
        goto code_r0x015ab4c4;
        if (*(uint *)(lVar15 + 0x18) <= uVar31) goto code_r0x015ab4c8;
        lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
        if ((((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x80), lVar15 == 0)) ||
            (lVar15 = *(long *)(lVar15 + 0x10), lVar15 == 0)) ||
           (lVar15 = *(long *)(lVar15 + 0x18), lVar15 == 0)) goto code_r0x015ab4c4;
        fVar34 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre
                                  (lVar15,0);
        uStack_320 = CONCAT44(fVar48,fVar34);
        fVar36 = fVar48;
        fVar46 = fVar49;
        fStack_318 = fVar49;
        lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar9,uRam0000000003d41088);
        if (((lVar15 == 0) || (*(long *)(lVar15 + 0x38) == 0)) ||
           ((lVar15 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10), lVar15 == 0 ||
            (lVar15 = *(long *)(lVar15 + 0x18), lVar15 == 0)))) goto code_r0x015ab4c4;
        fVar35 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre
                                  (lVar15,0);
        uStack_330 = CONCAT44(fVar36,fVar35);
        fStack_338 = fVar49 - fVar46;
        param_3 = (ulong)(uint)fStack_338;
        uStack_340 = CONCAT44(fVar48 - fVar36,fVar34 - fVar35);
        fStack_328 = fVar46;
        if (cVar24 != '\0') {
          if (lVar27 == 0) goto code_r0x015ab4c4;
code_r0x015aadd4:
          uVar20 = (ulong)(uint)(fVar49 + *(float *)(lVar9 + 0xa8));
          param_4 = *(float *)(lVar9 + 0xa0);
          uVar23 = (ulong)(uint)(fVar48 + *(float *)(lVar9 + 0xa4));
          fVar36 = (float)/*UnityEngine.Camera$$WorldToViewportPoint*/ func_0x0321fe94(fVar34 + param_4,lVar27,0);
          fVar48 = (float)uVar23;
          fVar49 = (float)uVar20;
          if (cVar24 == '\0') {
            bVar5 = false;
            bVar4 = true;
            if (0.0 <= fVar36) {
              bVar5 = false;
              bVar4 = true;
              if (!NAN(fVar36)) {
                bVar5 = fVar36 == 1.0;
                bVar4 = 1.0 <= fVar36;
              }
            }
            param_2 = uVar23;
            param_3 = uVar20;
            if (!bVar4 || bVar5) {
              bVar5 = false;
              bVar4 = true;
              if (0.0 <= fVar48) {
                bVar5 = false;
                bVar4 = true;
                if (!NAN(fVar48)) {
                  bVar5 = fVar48 == 1.0;
                  bVar4 = 1.0 <= fVar48;
                }
              }
              if ((!bVar4 || bVar5) && (0.0 <= fVar49)) {
                iVar7 = /*Atlas.UI.Screens.GameInProgressScreen$$CanSeeTarget*/ func_0x015ab70c(lVar9,&uStack_330,&uStack_320,1,1);
                fVar48 = (float)param_2;
                fVar49 = (float)param_3;
                if (iVar7 != 0) goto code_r0x015aae04;
              }
            }
            goto code_r0x015aaf94;
          }
code_r0x015aae04:
          lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41080);
          if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x1c8), lVar15 == 0))
          goto code_r0x015ab4c4;
          if (*(uint *)(lVar15 + 0x18) <= uVar31) goto code_r0x015ab4c8;
          lVar14 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
          lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41080);
          if ((lVar15 == 0) || (*(long *)(lVar15 + 0x1c0) == 0)) goto code_r0x015ab4c4;
          uVar37 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar15 + 0x1c0),0);
          uStack_350 = CONCAT44(fVar48,uVar37);
          uStack_348 = CONCAT44(param_4,fVar49);
          param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_350,0);
          if (lVar14 == 0) goto code_r0x015ab4c4;
          param_2 = uVar23 & 0xffffffff;
          param_3 = uVar20 & 0xffffffff;
          /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(fVar36,lVar14,0);
          lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41080);
          if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x1c8), lVar15 == 0))
          goto code_r0x015ab4c4;
          if (*(uint *)(lVar15 + 0x18) <= uVar31) goto code_r0x015ab4c8;
          lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
          if (lVar15 == 0) goto code_r0x015ab4c4;
          /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar15,uVar10,*(undefined1 *)(lVar9 + 0xb8),0);
          if (*(char *)(lVar9 + 0xb8) != '\0') {
            lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41080);
            if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x1c8), lVar15 == 0))
            goto code_r0x015ab4c4;
            if (*(uint *)(lVar15 + 0x18) <= uVar31) goto code_r0x015ab4c8;
            lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
            if (lVar15 == 0) goto code_r0x015ab4c4;
            *(undefined4 *)(lVar15 + 0x88) = *(undefined4 *)(lVar9 + 0x98);
          }
          iStack_384 = iStack_384 + 1;
          goto code_r0x015ab2c0;
        }
        fVar36 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_340,0);
        fVar46 = *(float *)(lVar9 + 0x8c);
        param_2 = (ulong)(uint)fVar46;
        if (fVar46 <= fVar36) goto code_r0x015aaf94;
        fVar36 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_340,0);
        if (lVar27 == 0) goto code_r0x015ab4c4;
        fVar35 = (float)param_3;
        fVar47 = fVar46;
        lVar15 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar27,0);
        if (lVar15 == 0) goto code_r0x015ab4c4;
        fVar38 = (float)/*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar15,0);
        param_2 = (ulong)(uint)*(float *)(lVar9 + 0x94);
        if (*(float *)(lVar9 + 0x94) < fVar35 * (float)param_3 + fVar36 * fVar38 + fVar46 * fVar47)
        goto code_r0x015aadd4;
      }
code_r0x015aaf94:
      lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41080);
      if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x1c8), lVar15 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar15 + 0x18) <= uVar31) goto code_r0x015ab4c8;
      lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
      if (lVar15 == 0) goto code_r0x015ab4c4;
      if (*(long *)(lVar15 + 0x80) != 0) {
        lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41080);
        if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x1c8), lVar15 == 0))
        goto code_r0x015ab4c4;
        if (*(uint *)(lVar15 + 0x18) <= uVar31) goto code_r0x015ab4c8;
        lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
        if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x80), lVar15 == 0))
        goto code_r0x015ab4c4;
        *(undefined1 *)(lVar15 + 0x9c) = 0;
      }
      if (*(char *)(lVar9 + 0x9c) == '\0') {
        if (*(char *)(lVar9 + 0xb8) == '\0') {
          /*Atlas.UI.Screens.GameInProgressScreen$$UpdateAllKartIndicatorDataRace*/ func_0x015abdd0(lVar9);
        }
        else {
          /*Atlas.UI.Screens.GameInProgressScreen$$UpdateAllKartIndicatorDataBattle*/ func_0x015ab8c0(lVar9);
        }
      }
      if (*(char *)(lVar9 + 0x10a) == '\0') {
        cVar24 = *(char *)(lVar9 + 0xb8);
      }
      else {
        cVar24 = '\0';
      }
      if (*(long *)(lVar9 + 0x70) == 0) goto code_r0x015ab4c4;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_380,*(long *)(lVar9 + 0x70),uRam0000000003d3d1c8);
      uStack_308 = uStack_378;
      uStack_310 = uStack_380;
      lStack_300 = lStack_370;
      do {
        do {
          uVar23 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_310,uRam0000000003d33458);
          lVar15 = lStack_300;
          uVar37 = (undefined4)param_3;
          if ((uVar23 & 1) == 0) {
code_r0x015ab1e8:
            bVar5 = false;
            goto code_r0x015ab1ec;
          }
          if (lStack_300 == 0) {
            func_0x00f78af4();
            goto code_r0x015ab4d8;
          }
          fVar48 = *(float *)(lVar9 + 0x8c);
          param_2 = (ulong)(uint)fVar48;
          if ((fVar48 < *(float *)(lStack_300 + 0x18)) && (lStack_300 != *(long *)(lVar9 + 0x78)))
          goto code_r0x015ab1e8;
        } while (*(char *)(lStack_300 + 0x28) == '\0');
        lVar14 = *(long *)(lStack_300 + 0x10);
        if (lVar14 == 0) {
          func_0x00f78af4();
          goto code_r0x015ab4d8;
        }
      } while (*(char *)(lVar14 + 0x9c) != '\0');
      *(undefined1 *)(lVar14 + 0x9c) = 1;
      lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41080);
      if (lVar14 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar14 = *(long *)(lVar14 + 0x1c8);
      if (lVar14 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar31) {
        uVar10 = func_0x00f78b24();
        func_0x00f78ac0(uVar10,0);
        goto code_r0x015ab4d8;
      }
      lVar14 = *(long *)(lVar14 + lVar19 * 8 + 0x20);
      if (lVar14 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(*(undefined4 *)(lVar9 + 0x98),lVar14,*(undefined8 *)(lVar15 + 0x10),
                      cVar24 != '\0',0);
      lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41080);
      if (lVar14 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar14 = *(long *)(lVar14 + 0x1c8);
      if (lVar14 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar31) {
        uVar10 = func_0x00f78b24();
        func_0x00f78ac0(uVar10,0);
        goto code_r0x015ab4d8;
      }
      lVar14 = *(long *)(lVar14 + lVar19 * 8 + 0x20);
      uVar50 = *(undefined4 *)(lVar15 + 0x1c);
      uVar51 = *(uint *)(lVar15 + 0x20);
      uVar52 = *(uint *)(lVar15 + 0x24);
      lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41080);
      if (lVar15 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      if (*(long *)(lVar15 + 0x1c0) == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      uVar39 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar15 + 0x1c0),0);
      uStack_350 = CONCAT44(fVar48,uVar39);
      uStack_348 = CONCAT44(param_4,uVar37);
      param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_350,0);
      if (lVar14 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      param_2 = (ulong)uVar51;
      param_3 = (ulong)uVar52;
      /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(uVar50,lVar14,0);
      lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41080);
      if (lVar15 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar15 = *(long *)(lVar15 + 0x1c8);
      if (lVar15 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      if (*(uint *)(lVar15 + 0x18) <= uVar31) {
        uVar10 = func_0x00f78b24();
        func_0x00f78ac0(uVar10,0);
        goto code_r0x015ab4d8;
      }
      lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
      if (lVar15 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar15,uVar10,*(undefined1 *)(lVar9 + 0xb8),0);
      iStack_384 = iStack_384 + 1;
      bVar5 = true;
code_r0x015ab1ec:
      aiStack_368[iVar8] = 0x41c;
      iVar6 = iStack_354;
      iVar8 = iStack_354 + 1;
      iStack_354 = iVar8;
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_310,uRam0000000003d33450);
      if ((iVar8 != 0) && (aiStack_368[iVar6] == 0x41c)) {
        iStack_354 = iVar6;
        iVar8 = iVar6;
      }
      iVar6 = iVar8;
      if (!bVar5) {
        lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41080);
        if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x1c8), lVar15 == 0))
        goto code_r0x015ab4c4;
        if (*(uint *)(lVar15 + 0x18) <= uVar31) goto code_r0x015ab4c8;
        lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
        if (lVar15 == 0) goto code_r0x015ab4c4;
        if (*(long *)(lVar15 + 0x80) != 0) {
          lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41080);
          if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x1c8), lVar15 == 0))
          goto code_r0x015ab4c4;
          if (*(uint *)(lVar15 + 0x18) <= uVar31) goto code_r0x015ab4c8;
          lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
          if (lVar15 == 0) goto code_r0x015ab4c4;
          /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(0,lVar15,0,cVar24 != '\0',0);
        }
      }
code_r0x015ab2c0:
      uVar31 = uVar31 + 1;
      lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41080);
      uVar10 = extraout_d0_07;
      uVar13 = extraout_var_07;
      if (lVar15 == 0) goto code_r0x015ab4c4;
      goto code_r0x015aaa94;
    }
  }
  lVar9 = func_0x00f78af4();
  puStack_168 = &Atlas_Contexts_RaceGameContext__OnEventTimeExceeded;
  lStack_178 = param_5;
  if ((bRam0000000003eb4b94 & 1) == 0) {
    func_0x00f78a20(0x3d21b10);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d0a0);
    func_0x00f78a20(0x3d1d260);
    func_0x00f78a20(0x3d22180);
    bRam0000000003eb4b94 = 1;
  }
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  if ((*(long *)(lVar9 + 0x40) == 0) ||
     (plVar22 = *(long **)(*(long *)(lVar9 + 0x40) + 0x28), plVar22 == (long *)0x0)) {
code_r0x014d2c78:
    func_0x00f78af4();
  }
  else {
    lVar27 = *plVar22;
    uVar23 = (ulong)*(ushort *)(lVar27 + 0x12a);
    if (uVar23 != 0) {
      piVar21 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == /*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0) {
          puVar11 = (undefined8 *)(lVar27 + (long)*piVar21 * 0x10 + 0x138);
          goto code_r0x014d29f0;
        }
        piVar21 = piVar21 + 4;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
    puVar17 = (undefined8 *)0x0;
    puVar11 = (undefined8 *)func_0x00fac1f0(plVar22);
code_r0x014d29f0:
    plVar22 = (long *)(*(code *)*puVar11)(plVar22,puVar11[1]);
    if (plVar22 != (long *)0x0) {
code_r0x014d2a14:
      lVar27 = *plVar22;
      uVar23 = (ulong)*(ushort *)(lVar27 + 0x12a);
      if (uVar23 != 0) {
        piVar21 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar11 = (undefined8 *)(lVar27 + (long)*piVar21 * 0x10 + 0x138);
            goto code_r0x014d2a60;
          }
          piVar21 = piVar21 + 4;
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
      }
      puVar17 = (undefined8 *)0x0;
      puVar11 = (undefined8 *)func_0x00fac1f0(plVar22);
code_r0x014d2a60:
      uVar23 = (*(code *)*puVar11)(plVar22,puVar11[1]);
      if ((uVar23 & 1) == 0) {
        lVar27 = 0;
        goto joined_r0x014d2b68;
      }
      lVar27 = *plVar22;
      uVar23 = (ulong)*(ushort *)(lVar27 + 0x12a);
      if (uVar23 != 0) {
        piVar21 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == /*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260) {
            puVar11 = (undefined8 *)(lVar27 + (long)*piVar21 * 0x10 + 0x138);
            goto code_r0x014d2abc;
          }
          piVar21 = piVar21 + 4;
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
      }
      puVar17 = (undefined8 *)0x0;
      puVar11 = (undefined8 *)func_0x00fac1f0(plVar22);
code_r0x014d2abc:
      lVar27 = (*(code *)*puVar11)(plVar22,puVar11[1]);
      if (lVar27 == 0) {
        func_0x00f78af4();
        goto code_r0x014d2c80;
      }
      lVar15 = *(long *)(lVar27 + 0x10);
      if (lVar15 != 0) {
        uStack_1f8 = *(undefined8 *)(lVar15 + 0x50);
        uStack_200 = *(undefined8 *)(lVar15 + 0x48);
        uStack_1e8 = *(undefined8 *)(lVar15 + 0x60);
        uStack_1f0 = *(undefined8 *)(lVar15 + 0x58);
        uVar23 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&uStack_200,0);
        if (((uVar23 & 1) != 0) && (*(char *)(lVar27 + 0x98) == '\0')) {
          if (*(long *)(lVar9 + 600) == 0) {
            func_0x00f78af4();
            goto code_r0x014d2c80;
          }
          lVar15 = *(long *)(lVar27 + 0x10);
          if (lVar15 == 0) {
            func_0x00f78af4();
            goto code_r0x014d2c80;
          }
          plVar25 = *(long **)(*(long *)(lVar9 + 600) + 0x20);
          uStack_218 = *(undefined8 *)(lVar15 + 0x50);
          uStack_220 = *(undefined8 *)(lVar15 + 0x48);
          puStack_208 = *(undefined **)(lVar15 + 0x60);
          pppppplStack_210 = *(long *******)(lVar15 + 0x58);
          /*Atlas.Gameplay.Player.GameContextPlayer$$GetRaceProgress*/ func_0x015a569c(lVar27,0);
          if (plVar25 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014d2c80;
          }
          puVar17 = (undefined8 *)(ulong)*(uint *)(lVar27 + 0x78);
          uStack_1b8 = uStack_218;
          uStack_1c0 = uStack_220;
          puStack_1a8 = puStack_208;
          pppppplStack_1b0 = pppppplStack_210;
          uStack_1d0 = 0;
          lStack_1c8 = 0;
          puStack_1d8 = (undefined *)0x0;
          (**(code **)(*plVar25 + 0x248))
                    (plVar25,&uStack_1c0,puVar17,1,&puStack_1d8,*(undefined8 *)(*plVar25 + 0x250));
        }
        goto code_r0x014d2a14;
      }
      func_0x00f78af4();
      goto code_r0x014d2c80;
    }
  }
  func_0x00f78af4();
code_r0x014d2c80:
                    /* WARNING: Does not return */
  pcVar26 = (code *)SoftwareBreakpoint(1,0x14d2c84);
  (*pcVar26)();
joined_r0x014d2b68:
  if (plVar22 != (long *)0x0) {
    lVar15 = *plVar22;
    uVar23 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar23 != 0) {
      piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
          goto code_r0x014d2bc0;
        }
        piVar21 = piVar21 + 4;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
    puVar17 = (undefined8 *)0x0;
    puVar11 = (undefined8 *)func_0x00fac1f0(plVar22);
code_r0x014d2bc0:
    (*(code *)*puVar11)(plVar22,puVar11[1]);
  }
  if (lVar27 == 0) {
    if (*(long *)(lVar9 + 0x20) == 0) goto code_r0x014d2c78;
    plVar25 = (long *)/*Core.StateManagement.StateMachine$$get_ActiveState*/ func_0x02b95214(*(long *)(lVar9 + 0x20),0);
    auVar3._8_8_ = extraout_var_01;
    auVar3._0_8_ = extraout_d0_01;
    auVar2._8_8_ = extraout_var_01;
    auVar2._0_8_ = extraout_d0_01;
    auVar41._8_8_ = extraout_var_01;
    auVar41._0_8_ = extraout_d0_01;
    if (plVar25 != (long *)0x0) {
      auVar41 = auVar2;
      if (*(byte *)(/*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10 + 300) <= *(byte *)(*plVar25 + 300)) {
        if (*(long *)(*(long *)(*plVar25 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10 + 300) * 8 +
                     -8) != /*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10) {
          plVar25 = (long *)0x0;
        }
        auVar41 = auVar3;
        if (plVar25 != (long *)0x0) {
          if (*(long *)(lVar9 + 0x40) == 0) goto code_r0x014d2c78;
          /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetLocalGameContextPlayer*/ func_0x01599b24(*(long *)(lVar9 + 0x40),0);
          auVar41 = Atlas_Contexts_GameContextBaseInProgressState__NotifyGameContextFinished
                              (plVar25,0);
        }
      }
    }
    return auVar41;
  }
  func_0x00f78ac0(lVar27,0);
  if (extraout_w1 != 1) {
    auVar40 = __Unwind_Resume();
    ppppppplStack_260 = (long *******)0x3d1d260;
    puStack_258 = (undefined *)0x3d22180;
    puStack_228 = &Atlas_Contexts_RaceGameContext__OnEnterShortCut;
    plStack_250 = plVar25;
    lStack_248 = lVar27;
    pplStack_240 = (long **)plVar22;
    lStack_238 = lVar9;
    pppplStack_230 = (long ****)&ppppuStack_170;
    if ((bRam0000000003eb4b95 & 1) == 0) {
      func_0x00f78a20(0x3d21b08);
      bRam0000000003eb4b95 = 1;
    }
    uStack_268 = 0;
    if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar6 = Atlas_Contexts_GameContextBase__TryGetKartCompositeFromCollider
                      (auVar40._8_8_,&uStack_268,0);
    auVar42._8_8_ = extraout_var_02;
    auVar42._0_8_ = extraout_d0_02;
    if (iVar6 != 0) {
      lVar9 = *(long *)(auVar40._0_8_ + 0x18);
      if (lVar9 == 0) {
        lVar9 = func_0x00f78af4();
        auVar43._8_8_ = extraout_var_03;
        auVar43._0_8_ = extraout_d0_03;
        if ((bRam0000000003eb4b96 & 1) == 0) {
          auVar43 = func_0x00f78a20(0x3d21b08);
          bRam0000000003eb4b96 = 1;
        }
        if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
          auVar43 = func_0x00f78ad0();
        }
        *(undefined1 *)(lVar9 + 0x249) = 1;
        *(undefined1 *)(lVar9 + 0x10) = 1;
        return auVar43;
      }
      auVar42 = /*Atlas.Stats.AtlasStats$$OnKartEnterShortcut*/ func_0x0146f188(lVar9,uStack_268,puVar17,0);
    }
    return auVar42;
  }
  plVar12 = (long *)___cxa_begin_catch();
  lVar27 = *plVar12;
  ___cxa_end_catch();
  goto joined_r0x014d2b68;
}



// ============================================================
// RVA: 0x14d2864 | Atlas.Contexts.RaceGameContext.GameComplete
// ============================================================

/* WARNING: Possible PIC construction at 0x014d28f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015aa69c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ae374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014d28f8) */
/* WARNING: Removing unreachable block (ram,0x015aa6a0) */
/* WARNING: Removing unreachable block (ram,0x015aa6b8) */
/* WARNING: Removing unreachable block (ram,0x015aa6c0) */
/* WARNING: Removing unreachable block (ram,0x015aa6c8) */
/* WARNING: Removing unreachable block (ram,0x015aa6e4) */
/* WARNING: Removing unreachable block (ram,0x015aa730) */
/* WARNING: Removing unreachable block (ram,0x015aa708) */
/* WARNING: Removing unreachable block (ram,0x015ae1c0) */
/* WARNING: Removing unreachable block (ram,0x015ae1e8) */
/* WARNING: Removing unreachable block (ram,0x015ae1fc) */
/* WARNING: Removing unreachable block (ram,0x015ae220) */
/* WARNING: Removing unreachable block (ram,0x015ae240) */
/* WARNING: Removing unreachable block (ram,0x015ae244) */
/* WARNING: Removing unreachable block (ram,0x015ae24c) */
/* WARNING: Removing unreachable block (ram,0x015ae224) */
/* WARNING: Removing unreachable block (ram,0x015ae228) */
/* WARNING: Removing unreachable block (ram,0x015ae230) */
/* WARNING: Removing unreachable block (ram,0x015ae204) */
/* WARNING: Removing unreachable block (ram,0x015ae208) */
/* WARNING: Removing unreachable block (ram,0x015ae210) */
/* WARNING: Removing unreachable block (ram,0x015ae258) */
/* WARNING: Removing unreachable block (ram,0x015ae26c) */
/* WARNING: Removing unreachable block (ram,0x015ae274) */
/* WARNING: Removing unreachable block (ram,0x015ae278) */
/* WARNING: Removing unreachable block (ram,0x015ae2b4) */
/* WARNING: Removing unreachable block (ram,0x015ae28c) */
/* WARNING: Removing unreachable block (ram,0x015ae294) */
/* WARNING: Removing unreachable block (ram,0x015ae2c4) */
/* WARNING: Removing unreachable block (ram,0x015ae2e4) */
/* WARNING: Removing unreachable block (ram,0x015ae310) */
/* WARNING: Removing unreachable block (ram,0x015ae330) */
/* WARNING: Removing unreachable block (ram,0x015ae340) */
/* WARNING: Removing unreachable block (ram,0x015ae348) */
/* WARNING: Removing unreachable block (ram,0x015ae34c) */
/* WARNING: Removing unreachable block (ram,0x015ae378) */
/* WARNING: Removing unreachable block (ram,0x015ae388) */
/* WARNING: Removing unreachable block (ram,0x015ae390) */
/* WARNING: Removing unreachable block (ram,0x015ae394) */
/* WARNING: Removing unreachable block (ram,0x015ae3d4) */
/* WARNING: Removing unreachable block (ram,0x015ae3a4) */
/* WARNING: Removing unreachable block (ram,0x015ae3ac) */
/* WARNING: Removing unreachable block (ram,0x015ae35c) */
/* WARNING: Removing unreachable block (ram,0x015ae3e4) */
/* WARNING: Removing unreachable block (ram,0x015ae364) */
/* WARNING: Removing unreachable block (ram,0x016b8cd4) */
/* WARNING: Removing unreachable block (ram,0x016b8d00) */
/* WARNING: Removing unreachable block (ram,0x016b8d14) */
/* WARNING: Removing unreachable block (ram,0x016b8d20) */
/* WARNING: Removing unreachable block (ram,0x016b8d28) */
/* WARNING: Removing unreachable block (ram,0x016b8d2c) */
/* WARNING: Removing unreachable block (ram,0x016962e4) */
/* WARNING: Removing unreachable block (ram,0x01696308) */
/* WARNING: Removing unreachable block (ram,0x01696328) */
/* WARNING: Removing unreachable block (ram,0x016963a8) */
/* WARNING: Removing unreachable block (ram,0x0169632c) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */
/* WARNING: Removing unreachable block (ram,0x01696364) */
/* WARNING: Removing unreachable block (ram,0x01696370) */
/* WARNING: Removing unreachable block (ram,0x01696378) */
/* WARNING: Removing unreachable block (ram,0x0169637c) */
/* WARNING: Removing unreachable block (ram,0x016963ac) */
/* WARNING: Removing unreachable block (ram,0x015ae2d8) */
/* WARNING: Removing unreachable block (ram,0x014b3b58) */
/* WARNING: Removing unreachable block (ram,0x014b3b70) */
/* WARNING: Removing unreachable block (ram,0x014b3b78) */
/* WARNING: Removing unreachable block (ram,0x015ae29c) */
/* WARNING: Removing unreachable block (ram,0x032c2184) */
/* WARNING: Removing unreachable block (ram,0x032c21bc) */
/* WARNING: Removing unreachable block (ram,0x032c21d0) */
/* WARNING: Removing unreachable block (ram,0x032c21e4) */
/* WARNING: Removing unreachable block (ram,0x032c21ec) */
/* WARNING: Removing unreachable block (ram,0x032c21f0) */
/* WARNING: Removing unreachable block (ram,0x032c22b0) */
/* WARNING: Removing unreachable block (ram,0x032c22bc) */
/* WARNING: Removing unreachable block (ram,0x032c22c4) */
/* WARNING: Removing unreachable block (ram,0x032c22c8) */
/* WARNING: Removing unreachable block (ram,0x032c22dc) */
/* WARNING: Removing unreachable block (ram,0x032c22e0) */
/* WARNING: Removing unreachable block (ram,0x032c232c) */
/* WARNING: Removing unreachable block (ram,0x032c2330) */
/* WARNING: Removing unreachable block (ram,0x032c2354) */
/* WARNING: Removing unreachable block (ram,0x032c235c) */
/* WARNING: Removing unreachable block (ram,0x032c2360) */
/* WARNING: Removing unreachable block (ram,0x032c2204) */
/* WARNING: Removing unreachable block (ram,0x032c2214) */
/* WARNING: Removing unreachable block (ram,0x032c221c) */
/* WARNING: Removing unreachable block (ram,0x032c2220) */
/* WARNING: Removing unreachable block (ram,0x032c242c) */
/* WARNING: Removing unreachable block (ram,0x032c2234) */
/* WARNING: Removing unreachable block (ram,0x032c223c) */
/* WARNING: Removing unreachable block (ram,0x032c226c) */
/* WARNING: Removing unreachable block (ram,0x032c2274) */
/* WARNING: Removing unreachable block (ram,0x032c2278) */
/* WARNING: Removing unreachable block (ram,0x032c236c) */
/* WARNING: Removing unreachable block (ram,0x032c2288) */
/* WARNING: Removing unreachable block (ram,0x032c228c) */
/* WARNING: Removing unreachable block (ram,0x032c2374) */
/* WARNING: Removing unreachable block (ram,0x032c2378) */
/* WARNING: Removing unreachable block (ram,0x032c237c) */
/* WARNING: Removing unreachable block (ram,0x032c2380) */
/* WARNING: Removing unreachable block (ram,0x032c2394) */
/* WARNING: Removing unreachable block (ram,0x032c23ac) */
/* WARNING: Removing unreachable block (ram,0x032c23b4) */
/* WARNING: Removing unreachable block (ram,0x032c23b8) */
/* WARNING: Removing unreachable block (ram,0x032c23cc) */
/* WARNING: Removing unreachable block (ram,0x032c2448) */
/* WARNING: Removing unreachable block (ram,0x032c23d0) */
/* WARNING: Removing unreachable block (ram,0x032c23e0) */
/* WARNING: Removing unreachable block (ram,0x032c23ec) */
/* WARNING: Removing unreachable block (ram,0x032c23f4) */
/* WARNING: Removing unreachable block (ram,0x032c23f8) */
/* WARNING: Removing unreachable block (ram,0x032c2400) */
/* WARNING: Removing unreachable block (ram,0x032c244c) */
/* WARNING: Removing unreachable block (ram,0x032c2474) */
/* WARNING: Removing unreachable block (ram,0x032c2494) */
/* WARNING: Removing unreachable block (ram,0x032c24ac) */
/* WARNING: Removing unreachable block (ram,0x032c24b4) */
/* WARNING: Removing unreachable block (ram,0x032c24b8) */
/* WARNING: Removing unreachable block (ram,0x032c24cc) */
/* WARNING: Removing unreachable block (ram,0x032c2550) */
/* WARNING: Removing unreachable block (ram,0x032c24d8) */
/* WARNING: Removing unreachable block (ram,0x032c24f0) */
/* WARNING: Removing unreachable block (ram,0x032c24f8) */
/* WARNING: Removing unreachable block (ram,0x032c24fc) */
/* WARNING: Removing unreachable block (ram,0x032c2510) */
/* WARNING: Removing unreachable block (ram,0x032c2524) */
/* WARNING: Removing unreachable block (ram,0x032c252c) */
/* WARNING: Removing unreachable block (ram,0x032c2530) */
/* WARNING: Removing unreachable block (ram,0x032c2540) */
/* WARNING: Removing unreachable block (ram,0x015ac734) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16]
Atlas_Contexts_RaceGameContext__GameComplete
          (undefined1 param_1 [16],ulong param_2,ulong param_3,float param_4,undefined8 param_5,
          long param_6,undefined8 *param_7)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  int extraout_w1;
  long extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 uVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  long *plVar21;
  char cVar22;
  long *unaff_x22;
  code *pcVar23;
  long lVar24;
  long lVar25;
  undefined **ppuVar26;
  uint uVar27;
  float fVar28;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar34 [16];
  undefined8 extraout_d0_01;
  undefined8 extraout_var_01;
  undefined1 auVar35 [16];
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  undefined4 uVar33;
  undefined8 extraout_d0_02;
  undefined8 extraout_var_02;
  undefined1 auVar36 [16];
  undefined8 extraout_d0_03;
  undefined8 extraout_d0_04;
  undefined8 extraout_d0_05;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  undefined8 extraout_var_05;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  ulong uVar43;
  undefined4 uVar44;
  uint uVar45;
  uint uVar46;
  int iStack_274;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  int aiStack_258 [5];
  int iStack_244;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  float fStack_228;
  undefined8 uStack_220;
  float fStack_218;
  undefined8 uStack_210;
  float fStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_158;
  undefined8 ******ppppppuStack_150;
  undefined *puStack_148;
  long *plStack_140;
  long lStack_138;
  undefined1 ******ppppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *****pppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *****pppppuStack_a0;
  undefined *puStack_98;
  undefined8 ***pppuStack_60;
  undefined *puStack_58;
  
  if (param_6 != 0) {
    puVar14 = *(undefined **)(param_6 + 0x60);
    if (puVar14 == (undefined *)0x0) {
      return param_1;
    }
    uVar15 = 0;
    puStack_58 = puVar14;
    lVar16 = *(long *)(puVar14 + 0x68);
    if (lVar16 == 0) {
      ppuVar26 = &puStack_58;
      lVar24 = 1;
    }
    else {
      lVar24 = *(long *)(lVar16 + 0x18);
      if (lVar24 == 0) {
        return param_1;
      }
      ppuVar26 = (undefined **)(lVar16 + 0x20);
    }
    lVar16 = 0;
    do {
      puVar17 = ppuVar26[lVar16];
      pcVar23 = *(code **)(puVar17 + 0x10);
      plVar21 = *(long **)(puVar17 + 0x20);
      lVar12 = *(long *)(puVar17 + 0x28);
      if (*(short *)(lVar12 + 0x48) == -1) {
        func_0x00f78ad8(lVar12,uVar15);
      }
      iVar7 = func_0x00f78a4c(lVar12);
      if (iVar7 == 0) {
        if ((((plVar21 == (long *)0x0) || (*(short *)(lVar12 + 0x48) == -1)) ||
            ((*(byte *)(*plVar21 + 0x115) & 1) != 0)) || (*(long *)(puVar14 + 0x18) == 0))
        goto code_r0x02924d98;
        iVar7 = func_0x00f78a44(lVar12);
        iVar8 = func_0x00f78ec0(lVar12);
        if (iVar7 == 0) {
          uVar1 = *(ushort *)(lVar12 + 0x48);
          if (iVar8 == 0) {
            lVar12 = *plVar21 + (ulong)uVar1 * 0x10;
            auVar38 = (**(code **)(lVar12 + 0x138))(plVar21,*(undefined8 *)(lVar12 + 0x140));
            uVar15 = extraout_x1_02;
            goto code_r0x02924da4;
          }
          lVar12 = func_0x00f78a48(lVar12);
          lVar18 = *plVar21;
          uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == lVar12) {
                puVar13 = (undefined8 *)
                          (lVar18 + (long)(int)(*piVar20 + (uint)uVar1) * 0x10 + 0x138);
                goto code_r0x02924e68;
              }
              piVar20 = piVar20 + 4;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
          puVar13 = (undefined8 *)func_0x00fac1f0(plVar21,lVar12,(ulong)uVar1);
code_r0x02924e68:
          pcVar23 = (code *)*puVar13;
          puVar13 = (undefined8 *)puVar13[1];
        }
        else {
          if (iVar8 == 0) {
            uVar15 = *(undefined8 *)(*plVar21 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar18 = *plVar21;
            uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar18 = lVar18 + (long)(int)(*piVar20 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02924e40;
                }
                piVar20 = piVar20 + 4;
                uVar19 = uVar19 - 1;
              } while (uVar19 != 0);
            }
            lVar18 = func_0x00fac1f0(plVar21);
code_r0x02924e40:
            uVar15 = *(undefined8 *)(lVar18 + 8);
          }
          puVar13 = (undefined8 *)func_0x00f78acc(uVar15,lVar12);
          pcVar23 = (code *)*puVar13;
        }
        auVar38 = (*pcVar23)(plVar21,puVar13);
        uVar15 = extraout_x1_03;
      }
      else if (*(char *)(lVar12 + 0x4a) == '\0') {
        auVar38 = (*pcVar23)(lVar12);
        uVar15 = extraout_x1_00;
      }
      else {
code_r0x02924d98:
        auVar38 = (*pcVar23)(plVar21,lVar12);
        uVar15 = extraout_x1_01;
      }
code_r0x02924da4:
      lVar16 = lVar16 + 1;
      if (lVar16 == lVar24) {
        return auVar38;
      }
    } while( true );
  }
  func_0x00f78af4();
  *param_7 = 0;
  param_7[1] = 0;
  param_7[2] = 0;
  if (extraout_x1 != 0) {
    iVar7 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(extraout_x1,0);
    return ZEXT416((uint)(*(float *)(extraout_x1 + 0x70) + (float)iVar7));
  }
  auVar38 = func_0x00f78af4();
  lVar16 = auVar38._8_8_;
  pppuStack_60 = (undefined8 ***)&stack0xffffffffffffffc0;
  *(long *)(auVar38._0_8_ + 0x48) = lVar16;
  if ((param_7 == (undefined8 *)0x0) || (*(undefined4 *)(param_7 + 0x52) = 0, lVar16 == 0)) {
    lVar16 = func_0x00f78af4();
    puStack_58 = &Atlas_Contexts_RaceGameContext__OnEventTimeExceeded;
    if ((bRam0000000003eb4b94 & 1) == 0) {
      func_0x00f78a20(0x3d21b10);
      func_0x00f78a20(0x3d220f0);
      func_0x00f78a20(0x3d1d0a0);
      func_0x00f78a20(0x3d1d260);
      func_0x00f78a20(0x3d22180);
      bRam0000000003eb4b94 = 1;
    }
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    if ((*(long *)(lVar16 + 0x40) == 0) ||
       (plVar21 = *(long **)(*(long *)(lVar16 + 0x40) + 0x28), plVar21 == (long *)0x0)) {
code_r0x014d2c78:
      func_0x00f78af4();
    }
    else {
      lVar24 = *plVar21;
      uVar19 = (ulong)*(ushort *)(lVar24 + 0x12a);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == /*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0) {
            puVar13 = (undefined8 *)(lVar24 + (long)*piVar20 * 0x10 + 0x138);
            goto code_r0x014d29f0;
          }
          piVar20 = piVar20 + 4;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      param_7 = (undefined8 *)0x0;
      puVar13 = (undefined8 *)func_0x00fac1f0(plVar21);
code_r0x014d29f0:
      plVar21 = (long *)(*(code *)*puVar13)(plVar21,puVar13[1]);
      if (plVar21 != (long *)0x0) {
code_r0x014d2a14:
        lVar24 = *plVar21;
        uVar19 = (ulong)*(ushort *)(lVar24 + 0x12a);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar13 = (undefined8 *)(lVar24 + (long)*piVar20 * 0x10 + 0x138);
              goto code_r0x014d2a60;
            }
            piVar20 = piVar20 + 4;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        param_7 = (undefined8 *)0x0;
        puVar13 = (undefined8 *)func_0x00fac1f0(plVar21);
code_r0x014d2a60:
        uVar19 = (*(code *)*puVar13)(plVar21,puVar13[1]);
        if ((uVar19 & 1) == 0) {
          lVar24 = 0;
          goto joined_r0x014d2b68;
        }
        lVar24 = *plVar21;
        uVar19 = (ulong)*(ushort *)(lVar24 + 0x12a);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == /*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260) {
              puVar13 = (undefined8 *)(lVar24 + (long)*piVar20 * 0x10 + 0x138);
              goto code_r0x014d2abc;
            }
            piVar20 = piVar20 + 4;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        param_7 = (undefined8 *)0x0;
        puVar13 = (undefined8 *)func_0x00fac1f0(plVar21);
code_r0x014d2abc:
        lVar24 = (*(code *)*puVar13)(plVar21,puVar13[1]);
        if (lVar24 == 0) {
          func_0x00f78af4();
          goto code_r0x014d2c80;
        }
        lVar12 = *(long *)(lVar24 + 0x10);
        if (lVar12 != 0) {
          uStack_e8 = *(undefined8 *)(lVar12 + 0x50);
          uStack_f0 = *(undefined8 *)(lVar12 + 0x48);
          uStack_d8 = *(undefined8 *)(lVar12 + 0x60);
          uStack_e0 = *(undefined8 *)(lVar12 + 0x58);
          uVar19 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&uStack_f0,0);
          if (((uVar19 & 1) != 0) && (*(char *)(lVar24 + 0x98) == '\0')) {
            if (*(long *)(lVar16 + 600) == 0) {
              func_0x00f78af4();
              goto code_r0x014d2c80;
            }
            lVar12 = *(long *)(lVar24 + 0x10);
            if (lVar12 == 0) {
              func_0x00f78af4();
              goto code_r0x014d2c80;
            }
            unaff_x22 = *(long **)(*(long *)(lVar16 + 600) + 0x20);
            uVar10 = *(undefined8 *)(lVar12 + 0x50);
            uVar15 = *(undefined8 *)(lVar12 + 0x48);
            puStack_f8 = *(undefined **)(lVar12 + 0x60);
            ppppppuStack_100 = *(undefined1 *******)(lVar12 + 0x58);
            /*Atlas.Gameplay.Player.GameContextPlayer$$GetRaceProgress*/ func_0x015a569c(lVar24,0);
            if (unaff_x22 == (long *)0x0) {
              func_0x00f78af4();
              goto code_r0x014d2c80;
            }
            param_7 = (undefined8 *)(ulong)*(uint *)(lVar24 + 0x78);
            puStack_98 = puStack_f8;
            pppppuStack_a0 = ppppppuStack_100;
            uStack_c0 = 0;
            lStack_b8 = 0;
            puStack_c8 = (undefined *)0x0;
            uStack_b0 = uVar15;
            uStack_a8 = uVar10;
            (**(code **)(*unaff_x22 + 0x248))
                      (unaff_x22,&uStack_b0,param_7,1,&puStack_c8,
                       *(undefined8 *)(*unaff_x22 + 0x250));
          }
          goto code_r0x014d2a14;
        }
        func_0x00f78af4();
        goto code_r0x014d2c80;
      }
    }
    func_0x00f78af4();
code_r0x014d2c80:
                    /* WARNING: Does not return */
    pcVar23 = (code *)SoftwareBreakpoint(1,0x14d2c84);
    (*pcVar23)();
  }
  puStack_58 = &UNK_014d28f8;
  if ((bRam0000000003eb522b & 1) == 0) {
    func_0x00f78a20(0x3d41080,8,0,0);
    bRam0000000003eb522b = 1;
  }
  lVar24 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
  if (lVar24 != 0) {
                    /* WARNING: Could not recover jumptable at 0x015ac724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar38 = (*(code *)(&UNK_015ac728 + (ulong)UNK_033f8a48 * 4))(lVar24,8,0,0);
    return auVar38;
  }
  uVar15 = func_0x00f78af4();
  uStack_c0 = 0x3eb5000;
  uStack_b0 = 8;
  uStack_a8 = 0;
  puStack_98 = &Atlas_UI_Screens_GameInProgressScreen__UpdateArcade;
  lStack_b8 = lVar16;
  pppppuStack_a0 = (undefined8 *****)&pppuStack_60;
  if ((bRam0000000003eb5227 & 1) == 0) {
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb5227 = 1;
  }
  lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar15,uRam0000000003d41088);
  if ((lVar16 != 0) && (*(long *)(lVar16 + 0x30) != 0)) {
    auVar36._8_8_ = extraout_var_02;
    auVar36._0_8_ = extraout_d0_02;
    return auVar36;
  }
  uVar10 = func_0x00f78af4();
  uStack_f0 = 0x3eb5000;
  uStack_e8 = 0x3d41088;
  uStack_e0 = 0x3eb5000;
  puStack_c8 = &Atlas_UI_Screens_GameInProgressScreen__OnLateUpdate;
  ppppppuStack_100 = (undefined1 ******)&pppppuStack_d0;
  uStack_d8 = uVar15;
  pppppuStack_d0 = &pppppuStack_a0;
  if ((bRam0000000003eb5228 & 1) == 0) {
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb5228 = 1;
  }
  puStack_f8 = &UNK_015aa6a0;
  if ((bRam0000000003eb522e & 1) == 0) {
    func_0x00f78a20(0x3d3b9d0);
    func_0x00f78a20(0x3d3b898);
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb522e = 1;
  }
  lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar10,uRam0000000003d41088);
  if (((lVar16 != 0) && (*(long *)(lVar16 + 0x38) != 0)) &&
     (lVar16 = *(long *)(*(long *)(lVar16 + 0x38) + 200), lVar16 != 0)) {
    iVar7 = *(int *)(lVar16 + 0x18);
    lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar10,uRam0000000003d41088);
    if (((lVar16 != 0) && (*(long *)(lVar16 + 0x38) != 0)) &&
       (lVar16 = *(long *)(*(long *)(lVar16 + 0x38) + 0xd0), lVar16 != 0)) {
      iVar8 = *(int *)(lVar16 + 0x18);
      lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar10,uRam0000000003d41080);
      if (lVar16 != 0) {
        /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetWeaponIndicatorActive*/ func_0x015adeac(lVar16,0 < iVar8 + iVar7,0);
        lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar10,uRam0000000003d41080);
        lVar24 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar10,uRam0000000003d41088);
        if (((lVar24 != 0) && (*(long *)(lVar24 + 0x38) != 0)) &&
           (lStack_138 = *(long *)(*(long *)(lVar24 + 0x38) + 200), lVar16 != 0)) {
          /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetCulturePodWeaponIndicatorArrows*/ func_0x015adf10(lVar16,&lStack_138,0);
          lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar10,uRam0000000003d41080);
          lVar24 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar10,uRam0000000003d41088);
          if (((lVar24 != 0) && (*(long *)(lVar24 + 0x38) != 0)) &&
             (plStack_140 = *(long **)(*(long *)(lVar24 + 0x38) + 0xd0), lVar16 != 0)) {
            auVar38 = /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetSheldonWeaponIndicatorArrows*/ func_0x015ae03c(lVar16,&plStack_140,0);
            return auVar38;
          }
        }
      }
    }
  }
  lVar16 = func_0x00f78af4();
  puStack_148 = &Atlas_UI_Screens_GameInProgressScreen__UpdateKartIndicator;
  uStack_158 = uVar10;
  ppppppuStack_150 = &ppppppuStack_100;
  if ((bRam0000000003eb5230 & 1) == 0) {
    func_0x00f78a20(0x3d33450);
    func_0x00f78a20(0x3d33458);
    func_0x00f78a20(0x3d33460);
    func_0x00f78a20(0x3d3d1c8);
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    func_0x00f78a20(0x3d41090);
    bRam0000000003eb5230 = 1;
  }
  uStack_200 = 0;
  uStack_1f8 = 0;
  lStack_1f0 = 0;
  fStack_208 = 0.0;
  uStack_210 = 0;
  fStack_218 = 0.0;
  uStack_220 = 0;
  fStack_228 = 0.0;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_240 = 0;
  iStack_244 = 0;
  lVar24 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
  if (((lVar24 == 0) || (*(long *)(lVar24 + 0x1c0) == 0)) ||
     (lVar24 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar24 + 0x1c0),0), lVar24 == 0)) goto code_r0x015ab4c4;
  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar24,*(char *)(lVar16 + 0x109) == '\0',0);
  lVar24 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
  if (((lVar24 == 0) || (*(long *)(lVar24 + 0x1c0) == 0)) ||
     (lVar24 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar24 + 0x1c0),0), lVar24 == 0)) goto code_r0x015ab4c4;
  iVar7 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar24,0);
  uVar15 = extraout_d0_03;
  uVar10 = extraout_var_03;
  if (iVar7 == 0) {
code_r0x015ab494:
    auVar37._8_8_ = uVar10;
    auVar37._0_8_ = uVar15;
    return auVar37;
  }
  *(undefined1 *)(lVar16 + 0x9c) = 0;
  lVar24 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar16,uRam0000000003d41090);
  if ((lVar24 == 0) || (*(long *)(lVar24 + 0x40) == 0)) goto code_r0x015ab4c4;
  lVar24 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(lVar24 + 0x40),0);
  if (*(long *)(lVar16 + 0x78) == 0) {
code_r0x015aaa34:
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar16,uRam0000000003d41088);
    if ((lVar12 == 0) || (*(long *)(lVar12 + 0x38) == 0)) goto code_r0x015ab4c4;
    if (*(int *)(*(long *)(lVar12 + 0x38) + 0x74) == 1) {
      *(undefined8 *)(lVar16 + 0x78) = *(undefined8 *)(lVar16 + 0x80);
    }
  }
  else {
    lVar12 = *(long *)(*(long *)(lVar16 + 0x78) + 0x10);
    if (lVar12 == 0) goto code_r0x015ab4c4;
    if (*(int *)(lVar12 + 0x74) != 1) goto code_r0x015aaa34;
  }
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
  if (lVar12 == 0) {
code_r0x015ab4c4:
    func_0x00f78af4();
code_r0x015ab4c8:
    uVar15 = func_0x00f78b24();
    func_0x00f78ac0(uVar15,0);
    __Unwind_Resume();
code_r0x015ab4d8:
                    /* WARNING: Does not return */
    pcVar23 = (code *)SoftwareBreakpoint(1,0x15ab4dc);
    (*pcVar23)();
  }
  iVar8 = 0;
  iVar7 = 0;
  iStack_274 = 0;
  uVar27 = 0;
  uVar15 = extraout_d0_04;
  uVar10 = extraout_var_04;
code_r0x015aaa94:
  if (*(long *)(lVar12 + 0x1c8) == 0) goto code_r0x015ab4c4;
  if ((*(int *)(*(long *)(lVar12 + 0x1c8) + 0x18) <= (int)uVar27) ||
     (*(int *)(lVar16 + 0xbc) <= iStack_274)) goto code_r0x015ab494;
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
  if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar12 + 0x18) <= uVar27) goto code_r0x015ab4c8;
  lVar18 = (long)(int)uVar27;
  lVar12 = *(long *)(lVar12 + lVar18 * 8 + 0x20);
  if (lVar12 == 0) goto code_r0x015ab4c4;
  if (*(long *)(lVar12 + 0x80) == 0) {
    bVar5 = false;
  }
  else {
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar12 + 0x18) <= uVar27) goto code_r0x015ab4c8;
    lVar12 = *(long *)(lVar12 + lVar18 * 8 + 0x20);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x80), lVar12 == 0)) goto code_r0x015ab4c4;
    bVar5 = *(int *)(lVar12 + 0x74) == 1;
  }
  lVar12 = *(long *)(lVar16 + 0x78);
  if ((bool)(bVar5 & lVar12 == 0)) {
    if (*(long *)(lVar16 + 0x70) == 0) goto code_r0x015ab4c4;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_270,*(long *)(lVar16 + 0x70),uRam0000000003d3d1c8);
    uStack_1f8 = uStack_268;
    uStack_200 = uStack_270;
    lStack_1f0 = lStack_260;
    do {
      uVar19 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_200,uRam0000000003d33458);
      lVar12 = lStack_1f0;
      if ((uVar19 & 1) == 0) goto code_r0x015aabdc;
      if (lStack_1f0 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar25 = *(long *)(lStack_1f0 + 0x10);
      lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
      if (lVar11 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar11 = *(long *)(lVar11 + 0x1c8);
      if (lVar11 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar27) {
        uVar15 = func_0x00f78b24();
        func_0x00f78ac0(uVar15,0);
        goto code_r0x015ab4d8;
      }
      lVar11 = *(long *)(lVar11 + lVar18 * 8 + 0x20);
      if (lVar11 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
    } while (lVar25 != *(long *)(lVar11 + 0x80));
    *(long *)(lVar16 + 0x78) = lVar12;
code_r0x015aabdc:
    aiStack_258[iVar7] = 0x132;
    iVar8 = iStack_244;
    iVar7 = iStack_244 + 1;
    iStack_244 = iVar7;
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_200,uRam0000000003d33450);
    if ((iVar7 != 0) && (aiStack_258[iVar8] == 0x132)) {
      iStack_244 = iVar8;
      iVar7 = iVar8;
    }
    lVar12 = *(long *)(lVar16 + 0x78);
    iVar8 = iVar7;
  }
  if (lVar12 == 0) {
code_r0x015aac8c:
    uVar15 = 0;
    cVar22 = '\0';
  }
  else {
    lVar11 = *(long *)(lVar12 + 0x10);
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar12 + 0x18) <= uVar27) goto code_r0x015ab4c8;
    lVar12 = *(long *)(lVar12 + lVar18 * 8 + 0x20);
    if (lVar12 == 0) goto code_r0x015ab4c4;
    if (!(bool)(bVar5 & lVar11 == *(long *)(lVar12 + 0x80))) goto code_r0x015aac8c;
    cVar22 = *(char *)(lVar16 + 0xb8);
    uVar15 = 1;
  }
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
  if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar12 + 0x18) <= uVar27) goto code_r0x015ab4c8;
  lVar12 = *(long *)(lVar12 + lVar18 * 8 + 0x20);
  if (lVar12 == 0) goto code_r0x015ab4c4;
  if (*(long *)(lVar12 + 0x80) != 0) {
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar12 + 0x18) <= uVar27) goto code_r0x015ab4c8;
    lVar12 = *(long *)(lVar12 + lVar18 * 8 + 0x20);
    if (lVar12 == 0) goto code_r0x015ab4c4;
    iVar6 = /*Atlas.UI.KartIndicatorBehaviour$$get_CanUpdateTarget*/ func_0x015cc628(lVar12,0);
    fVar42 = (float)param_3;
    fVar41 = (float)param_2;
    if ((iVar6 != 0) && (*(char *)(lVar16 + 0xb8) == '\0')) goto code_r0x015aaf94;
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar12 + 0x18) <= uVar27) goto code_r0x015ab4c8;
    lVar12 = *(long *)(lVar12 + lVar18 * 8 + 0x20);
    if ((((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x80), lVar12 == 0)) ||
        (lVar12 = *(long *)(lVar12 + 0x10), lVar12 == 0)) ||
       (lVar12 = *(long *)(lVar12 + 0x18), lVar12 == 0)) goto code_r0x015ab4c4;
    fVar28 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar12,0);
    uStack_210 = CONCAT44(fVar41,fVar28);
    fVar30 = fVar41;
    fVar39 = fVar42;
    fStack_208 = fVar42;
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar16,uRam0000000003d41088);
    if (((lVar12 == 0) || (*(long *)(lVar12 + 0x38) == 0)) ||
       ((lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10), lVar12 == 0 ||
        (lVar12 = *(long *)(lVar12 + 0x18), lVar12 == 0)))) goto code_r0x015ab4c4;
    fVar29 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar12,0);
    uStack_220 = CONCAT44(fVar30,fVar29);
    fStack_228 = fVar42 - fVar39;
    param_3 = (ulong)(uint)fStack_228;
    uStack_230 = CONCAT44(fVar41 - fVar30,fVar28 - fVar29);
    fStack_218 = fVar39;
    if (cVar22 != '\0') {
      if (lVar24 == 0) goto code_r0x015ab4c4;
code_r0x015aadd4:
      uVar43 = (ulong)(uint)(fVar42 + *(float *)(lVar16 + 0xa8));
      param_4 = *(float *)(lVar16 + 0xa0);
      uVar19 = (ulong)(uint)(fVar41 + *(float *)(lVar16 + 0xa4));
      fVar30 = (float)/*UnityEngine.Camera$$WorldToViewportPoint*/ func_0x0321fe94(fVar28 + param_4,lVar24,0);
      fVar41 = (float)uVar19;
      fVar42 = (float)uVar43;
      if (cVar22 == '\0') {
        bVar5 = false;
        bVar4 = true;
        if (0.0 <= fVar30) {
          bVar5 = false;
          bVar4 = true;
          if (!NAN(fVar30)) {
            bVar5 = fVar30 == 1.0;
            bVar4 = 1.0 <= fVar30;
          }
        }
        param_2 = uVar19;
        param_3 = uVar43;
        if (!bVar4 || bVar5) {
          bVar5 = false;
          bVar4 = true;
          if (0.0 <= fVar41) {
            bVar5 = false;
            bVar4 = true;
            if (!NAN(fVar41)) {
              bVar5 = fVar41 == 1.0;
              bVar4 = 1.0 <= fVar41;
            }
          }
          if ((!bVar4 || bVar5) && (0.0 <= fVar42)) {
            iVar6 = /*Atlas.UI.Screens.GameInProgressScreen$$CanSeeTarget*/ func_0x015ab70c(lVar16,&uStack_220,&uStack_210,1,1);
            fVar41 = (float)param_2;
            fVar42 = (float)param_3;
            if (iVar6 != 0) goto code_r0x015aae04;
          }
        }
        goto code_r0x015aaf94;
      }
code_r0x015aae04:
      lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
      if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar12 + 0x18) <= uVar27) goto code_r0x015ab4c8;
      lVar11 = *(long *)(lVar12 + lVar18 * 8 + 0x20);
      lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
      if ((lVar12 == 0) || (*(long *)(lVar12 + 0x1c0) == 0)) goto code_r0x015ab4c4;
      uVar31 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar12 + 0x1c0),0);
      uStack_240 = CONCAT44(fVar41,uVar31);
      uStack_238 = CONCAT44(param_4,fVar42);
      param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_240,0);
      if (lVar11 == 0) goto code_r0x015ab4c4;
      param_2 = uVar19 & 0xffffffff;
      param_3 = uVar43 & 0xffffffff;
      /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(fVar30,lVar11,0);
      lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
      if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar12 + 0x18) <= uVar27) goto code_r0x015ab4c8;
      lVar12 = *(long *)(lVar12 + lVar18 * 8 + 0x20);
      if (lVar12 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar12,uVar15,*(undefined1 *)(lVar16 + 0xb8),0);
      if (*(char *)(lVar16 + 0xb8) != '\0') {
        lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
        if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0))
        goto code_r0x015ab4c4;
        if (*(uint *)(lVar12 + 0x18) <= uVar27) goto code_r0x015ab4c8;
        lVar12 = *(long *)(lVar12 + lVar18 * 8 + 0x20);
        if (lVar12 == 0) goto code_r0x015ab4c4;
        *(undefined4 *)(lVar12 + 0x88) = *(undefined4 *)(lVar16 + 0x98);
      }
      iStack_274 = iStack_274 + 1;
      goto code_r0x015ab2c0;
    }
    fVar30 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_230,0);
    fVar39 = *(float *)(lVar16 + 0x8c);
    param_2 = (ulong)(uint)fVar39;
    if (fVar39 <= fVar30) goto code_r0x015aaf94;
    fVar30 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_230,0);
    if (lVar24 == 0) goto code_r0x015ab4c4;
    fVar29 = (float)param_3;
    fVar40 = fVar39;
    lVar12 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar24,0);
    if (lVar12 == 0) goto code_r0x015ab4c4;
    fVar32 = (float)/*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar12,0);
    param_2 = (ulong)(uint)*(float *)(lVar16 + 0x94);
    if (*(float *)(lVar16 + 0x94) < fVar29 * (float)param_3 + fVar30 * fVar32 + fVar39 * fVar40)
    goto code_r0x015aadd4;
  }
code_r0x015aaf94:
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
  if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar12 + 0x18) <= uVar27) goto code_r0x015ab4c8;
  lVar12 = *(long *)(lVar12 + lVar18 * 8 + 0x20);
  if (lVar12 == 0) goto code_r0x015ab4c4;
  if (*(long *)(lVar12 + 0x80) != 0) {
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar12 + 0x18) <= uVar27) goto code_r0x015ab4c8;
    lVar12 = *(long *)(lVar12 + lVar18 * 8 + 0x20);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x80), lVar12 == 0)) goto code_r0x015ab4c4;
    *(undefined1 *)(lVar12 + 0x9c) = 0;
  }
  if (*(char *)(lVar16 + 0x9c) == '\0') {
    if (*(char *)(lVar16 + 0xb8) == '\0') {
      /*Atlas.UI.Screens.GameInProgressScreen$$UpdateAllKartIndicatorDataRace*/ func_0x015abdd0(lVar16);
    }
    else {
      /*Atlas.UI.Screens.GameInProgressScreen$$UpdateAllKartIndicatorDataBattle*/ func_0x015ab8c0(lVar16);
    }
  }
  if (*(char *)(lVar16 + 0x10a) == '\0') {
    cVar22 = *(char *)(lVar16 + 0xb8);
  }
  else {
    cVar22 = '\0';
  }
  if (*(long *)(lVar16 + 0x70) == 0) goto code_r0x015ab4c4;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_270,*(long *)(lVar16 + 0x70),uRam0000000003d3d1c8);
  uStack_1f8 = uStack_268;
  uStack_200 = uStack_270;
  lStack_1f0 = lStack_260;
  do {
    do {
      uVar19 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_200,uRam0000000003d33458);
      lVar12 = lStack_1f0;
      uVar31 = (undefined4)param_3;
      if ((uVar19 & 1) == 0) {
code_r0x015ab1e8:
        bVar5 = false;
        goto code_r0x015ab1ec;
      }
      if (lStack_1f0 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      fVar41 = *(float *)(lVar16 + 0x8c);
      param_2 = (ulong)(uint)fVar41;
      if ((fVar41 < *(float *)(lStack_1f0 + 0x18)) && (lStack_1f0 != *(long *)(lVar16 + 0x78)))
      goto code_r0x015ab1e8;
    } while (*(char *)(lStack_1f0 + 0x28) == '\0');
    lVar11 = *(long *)(lStack_1f0 + 0x10);
    if (lVar11 == 0) {
      func_0x00f78af4();
      goto code_r0x015ab4d8;
    }
  } while (*(char *)(lVar11 + 0x9c) != '\0');
  *(undefined1 *)(lVar11 + 0x9c) = 1;
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar11 = *(long *)(lVar11 + 0x1c8);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar11 + 0x18) <= uVar27) {
    uVar15 = func_0x00f78b24();
    func_0x00f78ac0(uVar15,0);
    goto code_r0x015ab4d8;
  }
  lVar11 = *(long *)(lVar11 + lVar18 * 8 + 0x20);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(*(undefined4 *)(lVar16 + 0x98),lVar11,*(undefined8 *)(lVar12 + 0x10),
                  cVar22 != '\0',0);
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar11 = *(long *)(lVar11 + 0x1c8);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar11 + 0x18) <= uVar27) {
    uVar15 = func_0x00f78b24();
    func_0x00f78ac0(uVar15,0);
    goto code_r0x015ab4d8;
  }
  lVar11 = *(long *)(lVar11 + lVar18 * 8 + 0x20);
  uVar44 = *(undefined4 *)(lVar12 + 0x1c);
  uVar45 = *(uint *)(lVar12 + 0x20);
  uVar46 = *(uint *)(lVar12 + 0x24);
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
  if (lVar12 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(long *)(lVar12 + 0x1c0) == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  uVar33 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar12 + 0x1c0),0);
  uStack_240 = CONCAT44(fVar41,uVar33);
  uStack_238 = CONCAT44(param_4,uVar31);
  param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_240,0);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  param_2 = (ulong)uVar45;
  param_3 = (ulong)uVar46;
  /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(uVar44,lVar11,0);
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
  if (lVar12 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar12 = *(long *)(lVar12 + 0x1c8);
  if (lVar12 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar12 + 0x18) <= uVar27) {
    uVar15 = func_0x00f78b24();
    func_0x00f78ac0(uVar15,0);
    goto code_r0x015ab4d8;
  }
  lVar12 = *(long *)(lVar12 + lVar18 * 8 + 0x20);
  if (lVar12 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar12,uVar15,*(undefined1 *)(lVar16 + 0xb8),0);
  iStack_274 = iStack_274 + 1;
  bVar5 = true;
code_r0x015ab1ec:
  aiStack_258[iVar8] = 0x41c;
  iVar7 = iStack_244;
  iVar8 = iStack_244 + 1;
  iStack_244 = iVar8;
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_200,uRam0000000003d33450);
  if ((iVar8 != 0) && (aiStack_258[iVar7] == 0x41c)) {
    iStack_244 = iVar7;
    iVar8 = iVar7;
  }
  iVar7 = iVar8;
  if (!bVar5) {
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar12 + 0x18) <= uVar27) goto code_r0x015ab4c8;
    lVar12 = *(long *)(lVar12 + lVar18 * 8 + 0x20);
    if (lVar12 == 0) goto code_r0x015ab4c4;
    if (*(long *)(lVar12 + 0x80) != 0) {
      lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
      if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar12 + 0x18) <= uVar27) goto code_r0x015ab4c8;
      lVar12 = *(long *)(lVar12 + lVar18 * 8 + 0x20);
      if (lVar12 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(0,lVar12,0,cVar22 != '\0',0);
    }
  }
code_r0x015ab2c0:
  uVar27 = uVar27 + 1;
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar16,uRam0000000003d41080);
  uVar15 = extraout_d0_05;
  uVar10 = extraout_var_05;
  if (lVar12 == 0) goto code_r0x015ab4c4;
  goto code_r0x015aaa94;
joined_r0x014d2b68:
  if (plVar21 != (long *)0x0) {
    lVar12 = *plVar21;
    uVar19 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar13 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
          goto code_r0x014d2bc0;
        }
        piVar20 = piVar20 + 4;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    param_7 = (undefined8 *)0x0;
    puVar13 = (undefined8 *)func_0x00fac1f0(plVar21);
code_r0x014d2bc0:
    (*(code *)*puVar13)(plVar21,puVar13[1]);
  }
  if (lVar24 == 0) {
    if (*(long *)(lVar16 + 0x20) == 0) goto code_r0x014d2c78;
    plVar21 = (long *)/*Core.StateManagement.StateMachine$$get_ActiveState*/ func_0x02b95214(*(long *)(lVar16 + 0x20),0);
    auVar3._8_8_ = extraout_var;
    auVar3._0_8_ = extraout_d0;
    auVar2._8_8_ = extraout_var;
    auVar2._0_8_ = extraout_d0;
    auVar38._8_8_ = extraout_var;
    auVar38._0_8_ = extraout_d0;
    if (plVar21 != (long *)0x0) {
      auVar38 = auVar2;
      if (*(byte *)(/*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10 + 300) <= *(byte *)(*plVar21 + 300)) {
        if (*(long *)(*(long *)(*plVar21 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10 + 300) * 8 +
                     -8) != /*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10) {
          plVar21 = (long *)0x0;
        }
        auVar38 = auVar3;
        if (plVar21 != (long *)0x0) {
          if (*(long *)(lVar16 + 0x40) == 0) goto code_r0x014d2c78;
          /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetLocalGameContextPlayer*/ func_0x01599b24(*(long *)(lVar16 + 0x40),0);
          auVar38 = Atlas_Contexts_GameContextBaseInProgressState__NotifyGameContextFinished
                              (plVar21,0);
        }
      }
    }
    return auVar38;
  }
  func_0x00f78ac0(lVar24,0);
  if (extraout_w1 != 1) {
    auVar38 = __Unwind_Resume();
    ppppppuStack_150 = (undefined8 ******)0x3d1d260;
    puStack_148 = (undefined *)0x3d22180;
    plStack_140 = unaff_x22;
    lStack_138 = lVar24;
    if ((bRam0000000003eb4b95 & 1) == 0) {
      func_0x00f78a20(0x3d21b08);
      bRam0000000003eb4b95 = 1;
    }
    uStack_158 = 0;
    if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar7 = Atlas_Contexts_GameContextBase__TryGetKartCompositeFromCollider
                      (auVar38._8_8_,&uStack_158,0);
    auVar34._8_8_ = extraout_var_00;
    auVar34._0_8_ = extraout_d0_00;
    if (iVar7 != 0) {
      lVar16 = *(long *)(auVar38._0_8_ + 0x18);
      if (lVar16 == 0) {
        lVar16 = func_0x00f78af4();
        auVar35._8_8_ = extraout_var_01;
        auVar35._0_8_ = extraout_d0_01;
        if ((bRam0000000003eb4b96 & 1) == 0) {
          auVar35 = func_0x00f78a20(0x3d21b08);
          bRam0000000003eb4b96 = 1;
        }
        if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
          auVar35 = func_0x00f78ad0();
        }
        *(undefined1 *)(lVar16 + 0x249) = 1;
        *(undefined1 *)(lVar16 + 0x10) = 1;
        return auVar35;
      }
      auVar34 = /*Atlas.Stats.AtlasStats$$OnKartEnterShortcut*/ func_0x0146f188(lVar16,uStack_158,param_7,0);
    }
    return auVar34;
  }
  plVar9 = (long *)___cxa_begin_catch();
  lVar24 = *plVar9;
  ___cxa_end_catch();
  goto joined_r0x014d2b68;
}



// ============================================================
// RVA: 0x14d2880 | Atlas.Contexts.RaceGameContext.GetRankingForPlayer
// ============================================================

/* WARNING: Possible PIC construction at 0x014d28f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015aa69c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ae374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014d28f8) */
/* WARNING: Removing unreachable block (ram,0x015aa6a0) */
/* WARNING: Removing unreachable block (ram,0x015aa6b8) */
/* WARNING: Removing unreachable block (ram,0x015aa6c0) */
/* WARNING: Removing unreachable block (ram,0x015aa6c8) */
/* WARNING: Removing unreachable block (ram,0x015aa6e4) */
/* WARNING: Removing unreachable block (ram,0x015aa730) */
/* WARNING: Removing unreachable block (ram,0x015aa708) */
/* WARNING: Removing unreachable block (ram,0x015ae1c0) */
/* WARNING: Removing unreachable block (ram,0x015ae1e8) */
/* WARNING: Removing unreachable block (ram,0x015ae1fc) */
/* WARNING: Removing unreachable block (ram,0x015ae220) */
/* WARNING: Removing unreachable block (ram,0x015ae240) */
/* WARNING: Removing unreachable block (ram,0x015ae244) */
/* WARNING: Removing unreachable block (ram,0x015ae24c) */
/* WARNING: Removing unreachable block (ram,0x015ae224) */
/* WARNING: Removing unreachable block (ram,0x015ae228) */
/* WARNING: Removing unreachable block (ram,0x015ae230) */
/* WARNING: Removing unreachable block (ram,0x015ae204) */
/* WARNING: Removing unreachable block (ram,0x015ae208) */
/* WARNING: Removing unreachable block (ram,0x015ae210) */
/* WARNING: Removing unreachable block (ram,0x015ae258) */
/* WARNING: Removing unreachable block (ram,0x015ae26c) */
/* WARNING: Removing unreachable block (ram,0x015ae274) */
/* WARNING: Removing unreachable block (ram,0x015ae278) */
/* WARNING: Removing unreachable block (ram,0x015ae2b4) */
/* WARNING: Removing unreachable block (ram,0x015ae28c) */
/* WARNING: Removing unreachable block (ram,0x015ae294) */
/* WARNING: Removing unreachable block (ram,0x015ae2c4) */
/* WARNING: Removing unreachable block (ram,0x015ae2e4) */
/* WARNING: Removing unreachable block (ram,0x015ae310) */
/* WARNING: Removing unreachable block (ram,0x015ae330) */
/* WARNING: Removing unreachable block (ram,0x015ae340) */
/* WARNING: Removing unreachable block (ram,0x015ae348) */
/* WARNING: Removing unreachable block (ram,0x015ae34c) */
/* WARNING: Removing unreachable block (ram,0x015ae378) */
/* WARNING: Removing unreachable block (ram,0x015ae388) */
/* WARNING: Removing unreachable block (ram,0x015ae390) */
/* WARNING: Removing unreachable block (ram,0x015ae394) */
/* WARNING: Removing unreachable block (ram,0x015ae3d4) */
/* WARNING: Removing unreachable block (ram,0x015ae3a4) */
/* WARNING: Removing unreachable block (ram,0x015ae3ac) */
/* WARNING: Removing unreachable block (ram,0x015ae35c) */
/* WARNING: Removing unreachable block (ram,0x015ae3e4) */
/* WARNING: Removing unreachable block (ram,0x015ae364) */
/* WARNING: Removing unreachable block (ram,0x016b8cd4) */
/* WARNING: Removing unreachable block (ram,0x016b8d00) */
/* WARNING: Removing unreachable block (ram,0x016b8d14) */
/* WARNING: Removing unreachable block (ram,0x016b8d20) */
/* WARNING: Removing unreachable block (ram,0x016b8d28) */
/* WARNING: Removing unreachable block (ram,0x016b8d2c) */
/* WARNING: Removing unreachable block (ram,0x016962e4) */
/* WARNING: Removing unreachable block (ram,0x01696308) */
/* WARNING: Removing unreachable block (ram,0x01696328) */
/* WARNING: Removing unreachable block (ram,0x016963a8) */
/* WARNING: Removing unreachable block (ram,0x0169632c) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */
/* WARNING: Removing unreachable block (ram,0x01696364) */
/* WARNING: Removing unreachable block (ram,0x01696370) */
/* WARNING: Removing unreachable block (ram,0x01696378) */
/* WARNING: Removing unreachable block (ram,0x0169637c) */
/* WARNING: Removing unreachable block (ram,0x016963ac) */
/* WARNING: Removing unreachable block (ram,0x015ae2d8) */
/* WARNING: Removing unreachable block (ram,0x014b3b58) */
/* WARNING: Removing unreachable block (ram,0x014b3b70) */
/* WARNING: Removing unreachable block (ram,0x014b3b78) */
/* WARNING: Removing unreachable block (ram,0x015ae29c) */
/* WARNING: Removing unreachable block (ram,0x032c2184) */
/* WARNING: Removing unreachable block (ram,0x032c21bc) */
/* WARNING: Removing unreachable block (ram,0x032c21d0) */
/* WARNING: Removing unreachable block (ram,0x032c21e4) */
/* WARNING: Removing unreachable block (ram,0x032c21ec) */
/* WARNING: Removing unreachable block (ram,0x032c21f0) */
/* WARNING: Removing unreachable block (ram,0x032c22b0) */
/* WARNING: Removing unreachable block (ram,0x032c22bc) */
/* WARNING: Removing unreachable block (ram,0x032c22c4) */
/* WARNING: Removing unreachable block (ram,0x032c22c8) */
/* WARNING: Removing unreachable block (ram,0x032c22dc) */
/* WARNING: Removing unreachable block (ram,0x032c22e0) */
/* WARNING: Removing unreachable block (ram,0x032c232c) */
/* WARNING: Removing unreachable block (ram,0x032c2330) */
/* WARNING: Removing unreachable block (ram,0x032c2354) */
/* WARNING: Removing unreachable block (ram,0x032c235c) */
/* WARNING: Removing unreachable block (ram,0x032c2360) */
/* WARNING: Removing unreachable block (ram,0x032c2204) */
/* WARNING: Removing unreachable block (ram,0x032c2214) */
/* WARNING: Removing unreachable block (ram,0x032c221c) */
/* WARNING: Removing unreachable block (ram,0x032c2220) */
/* WARNING: Removing unreachable block (ram,0x032c242c) */
/* WARNING: Removing unreachable block (ram,0x032c2234) */
/* WARNING: Removing unreachable block (ram,0x032c223c) */
/* WARNING: Removing unreachable block (ram,0x032c226c) */
/* WARNING: Removing unreachable block (ram,0x032c2274) */
/* WARNING: Removing unreachable block (ram,0x032c2278) */
/* WARNING: Removing unreachable block (ram,0x032c236c) */
/* WARNING: Removing unreachable block (ram,0x032c2288) */
/* WARNING: Removing unreachable block (ram,0x032c228c) */
/* WARNING: Removing unreachable block (ram,0x032c2374) */
/* WARNING: Removing unreachable block (ram,0x032c2378) */
/* WARNING: Removing unreachable block (ram,0x032c237c) */
/* WARNING: Removing unreachable block (ram,0x032c2380) */
/* WARNING: Removing unreachable block (ram,0x032c2394) */
/* WARNING: Removing unreachable block (ram,0x032c23ac) */
/* WARNING: Removing unreachable block (ram,0x032c23b4) */
/* WARNING: Removing unreachable block (ram,0x032c23b8) */
/* WARNING: Removing unreachable block (ram,0x032c23cc) */
/* WARNING: Removing unreachable block (ram,0x032c2448) */
/* WARNING: Removing unreachable block (ram,0x032c23d0) */
/* WARNING: Removing unreachable block (ram,0x032c23e0) */
/* WARNING: Removing unreachable block (ram,0x032c23ec) */
/* WARNING: Removing unreachable block (ram,0x032c23f4) */
/* WARNING: Removing unreachable block (ram,0x032c23f8) */
/* WARNING: Removing unreachable block (ram,0x032c2400) */
/* WARNING: Removing unreachable block (ram,0x032c244c) */
/* WARNING: Removing unreachable block (ram,0x032c2474) */
/* WARNING: Removing unreachable block (ram,0x032c2494) */
/* WARNING: Removing unreachable block (ram,0x032c24ac) */
/* WARNING: Removing unreachable block (ram,0x032c24b4) */
/* WARNING: Removing unreachable block (ram,0x032c24b8) */
/* WARNING: Removing unreachable block (ram,0x032c24cc) */
/* WARNING: Removing unreachable block (ram,0x032c2550) */
/* WARNING: Removing unreachable block (ram,0x032c24d8) */
/* WARNING: Removing unreachable block (ram,0x032c24f0) */
/* WARNING: Removing unreachable block (ram,0x032c24f8) */
/* WARNING: Removing unreachable block (ram,0x032c24fc) */
/* WARNING: Removing unreachable block (ram,0x032c2510) */
/* WARNING: Removing unreachable block (ram,0x032c2524) */
/* WARNING: Removing unreachable block (ram,0x032c252c) */
/* WARNING: Removing unreachable block (ram,0x032c2530) */
/* WARNING: Removing unreachable block (ram,0x032c2540) */
/* WARNING: Removing unreachable block (ram,0x015ac734) */

undefined1  [16]
Atlas_Contexts_RaceGameContext__GetRankingForPlayer
          (undefined1 param_1 [16],ulong param_2,ulong param_3,float param_4,undefined8 param_5,
          long param_6,undefined8 *param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  int extraout_w1;
  long lVar16;
  int *piVar17;
  long *plVar18;
  long lVar19;
  char cVar20;
  long *unaff_x22;
  long lVar21;
  uint uVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  undefined8 extraout_d0;
  undefined8 extraout_d0_02;
  undefined8 extraout_d0_03;
  undefined8 extraout_d0_04;
  undefined8 extraout_d0_05;
  undefined8 extraout_d0_00;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar30 [16];
  undefined8 extraout_d0_01;
  undefined8 extraout_var_01;
  undefined1 auVar31 [16];
  undefined8 extraout_var_02;
  undefined1 auVar32 [16];
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  undefined8 extraout_var_05;
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  ulong uVar38;
  undefined4 uVar39;
  uint uVar40;
  uint uVar41;
  undefined1 auVar42 [16];
  int iStack_264;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  int aiStack_248 [5];
  int iStack_234;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  float fStack_218;
  undefined8 uStack_210;
  float fStack_208;
  undefined8 uStack_200;
  float fStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_148;
  undefined8 *****pppppuStack_140;
  undefined *puStack_138;
  long *plStack_130;
  long lStack_128;
  undefined1 *****pppppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 ****ppppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 ****ppppuStack_90;
  undefined *puStack_88;
  undefined8 **ppuStack_50;
  undefined *puStack_48;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  *param_7 = 0;
  param_7[1] = 0;
  param_7[2] = 0;
  if (param_6 != 0) {
    iVar6 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(param_6,0);
    return ZEXT416((uint)(*(float *)(param_6 + 0x70) + (float)iVar6));
  }
  auVar42 = func_0x00f78af4();
  lVar12 = auVar42._8_8_;
  puStack_28 = &Atlas_Contexts_RaceGameContext__SetupGameContextScreen;
  ppuStack_50 = (undefined8 **)&puStack_30;
  *(long *)(auVar42._0_8_ + 0x48) = lVar12;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((param_7 == (undefined8 *)0x0) || (*(undefined4 *)(param_7 + 0x52) = 0, lVar12 == 0)) {
    lVar12 = func_0x00f78af4();
    puStack_48 = &Atlas_Contexts_RaceGameContext__OnEventTimeExceeded;
    if ((bRam0000000003eb4b94 & 1) == 0) {
      func_0x00f78a20(0x3d21b10);
      func_0x00f78a20(0x3d220f0);
      func_0x00f78a20(0x3d1d0a0);
      func_0x00f78a20(0x3d1d260);
      func_0x00f78a20(0x3d22180);
      bRam0000000003eb4b94 = 1;
    }
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    if ((*(long *)(lVar12 + 0x40) == 0) ||
       (plVar18 = *(long **)(*(long *)(lVar12 + 0x40) + 0x28), plVar18 == (long *)0x0)) {
code_r0x014d2c78:
      func_0x00f78af4();
    }
    else {
      lVar10 = *plVar18;
      uVar14 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar14 != 0) {
        piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x014d29f0;
          }
          piVar17 = piVar17 + 4;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      param_7 = (undefined8 *)0x0;
      puVar8 = (undefined8 *)func_0x00fac1f0(plVar18);
code_r0x014d29f0:
      plVar18 = (long *)(*(code *)*puVar8)(plVar18,puVar8[1]);
      if (plVar18 != (long *)0x0) {
code_r0x014d2a14:
        lVar10 = *plVar18;
        uVar14 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar14 != 0) {
          piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x014d2a60;
            }
            piVar17 = piVar17 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        param_7 = (undefined8 *)0x0;
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar18);
code_r0x014d2a60:
        uVar14 = (*(code *)*puVar8)(plVar18,puVar8[1]);
        if ((uVar14 & 1) == 0) {
          lVar10 = 0;
          goto joined_r0x014d2b68;
        }
        lVar10 = *plVar18;
        uVar14 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar14 != 0) {
          piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x014d2abc;
            }
            piVar17 = piVar17 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        param_7 = (undefined8 *)0x0;
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar18);
code_r0x014d2abc:
        lVar10 = (*(code *)*puVar8)(plVar18,puVar8[1]);
        if (lVar10 == 0) {
          func_0x00f78af4();
          goto code_r0x014d2c80;
        }
        lVar16 = *(long *)(lVar10 + 0x10);
        if (lVar16 != 0) {
          uStack_d8 = *(undefined8 *)(lVar16 + 0x50);
          uStack_e0 = *(undefined8 *)(lVar16 + 0x48);
          uStack_c8 = *(undefined8 *)(lVar16 + 0x60);
          uStack_d0 = *(undefined8 *)(lVar16 + 0x58);
          uVar14 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&uStack_e0,0);
          if (((uVar14 & 1) != 0) && (*(char *)(lVar10 + 0x98) == '\0')) {
            if (*(long *)(lVar12 + 600) == 0) {
              func_0x00f78af4();
              goto code_r0x014d2c80;
            }
            lVar16 = *(long *)(lVar10 + 0x10);
            if (lVar16 == 0) {
              func_0x00f78af4();
              goto code_r0x014d2c80;
            }
            unaff_x22 = *(long **)(*(long *)(lVar12 + 600) + 0x20);
            uVar13 = *(undefined8 *)(lVar16 + 0x50);
            uVar11 = *(undefined8 *)(lVar16 + 0x48);
            puStack_e8 = *(undefined **)(lVar16 + 0x60);
            pppppuStack_f0 = *(undefined1 ******)(lVar16 + 0x58);
            /*Atlas.Gameplay.Player.GameContextPlayer$$GetRaceProgress*/ func_0x015a569c(lVar10,0);
            if (unaff_x22 == (long *)0x0) {
              func_0x00f78af4();
              goto code_r0x014d2c80;
            }
            param_7 = (undefined8 *)(ulong)*(uint *)(lVar10 + 0x78);
            puStack_88 = puStack_e8;
            ppppuStack_90 = pppppuStack_f0;
            uStack_b0 = 0;
            lStack_a8 = 0;
            puStack_b8 = (undefined *)0x0;
            uStack_a0 = uVar11;
            uStack_98 = uVar13;
            (**(code **)(*unaff_x22 + 0x248))
                      (unaff_x22,&uStack_a0,param_7,1,&puStack_b8,
                       *(undefined8 *)(*unaff_x22 + 0x250));
          }
          goto code_r0x014d2a14;
        }
        func_0x00f78af4();
        goto code_r0x014d2c80;
      }
    }
    func_0x00f78af4();
code_r0x014d2c80:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x14d2c84);
    (*pcVar3)();
  }
  puStack_48 = &UNK_014d28f8;
  if ((bRam0000000003eb522b & 1) == 0) {
    func_0x00f78a20(0x3d41080,8,0,0);
    bRam0000000003eb522b = 1;
  }
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
  if (lVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x015ac724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar42 = (*(code *)(&UNK_015ac728 + (ulong)UNK_033f8a48 * 4))(lVar10,8,0,0);
    return auVar42;
  }
  uVar11 = func_0x00f78af4();
  uStack_b0 = 0x3eb5000;
  uStack_a0 = 8;
  uStack_98 = 0;
  puStack_88 = &Atlas_UI_Screens_GameInProgressScreen__UpdateArcade;
  lStack_a8 = lVar12;
  ppppuStack_90 = (undefined8 ****)&ppuStack_50;
  if ((bRam0000000003eb5227 & 1) == 0) {
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb5227 = 1;
  }
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar11,uRam0000000003d41088);
  if ((lVar12 != 0) && (*(long *)(lVar12 + 0x30) != 0)) {
    auVar32._8_8_ = extraout_var_02;
    auVar32._0_8_ = extraout_d0_02;
    return auVar32;
  }
  uVar13 = func_0x00f78af4();
  uStack_e0 = 0x3eb5000;
  uStack_d8 = 0x3d41088;
  uStack_d0 = 0x3eb5000;
  puStack_b8 = &Atlas_UI_Screens_GameInProgressScreen__OnLateUpdate;
  pppppuStack_f0 = (undefined1 *****)&ppppuStack_c0;
  uStack_c8 = uVar11;
  ppppuStack_c0 = &ppppuStack_90;
  if ((bRam0000000003eb5228 & 1) == 0) {
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb5228 = 1;
  }
  puStack_e8 = &UNK_015aa6a0;
  if ((bRam0000000003eb522e & 1) == 0) {
    func_0x00f78a20(0x3d3b9d0);
    func_0x00f78a20(0x3d3b898);
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb522e = 1;
  }
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar13,uRam0000000003d41088);
  if (((lVar12 != 0) && (*(long *)(lVar12 + 0x38) != 0)) &&
     (lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 200), lVar12 != 0)) {
    iVar6 = *(int *)(lVar12 + 0x18);
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar13,uRam0000000003d41088);
    if (((lVar12 != 0) && (*(long *)(lVar12 + 0x38) != 0)) &&
       (lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0xd0), lVar12 != 0)) {
      iVar23 = *(int *)(lVar12 + 0x18);
      lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar13,uRam0000000003d41080);
      if (lVar12 != 0) {
        /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetWeaponIndicatorActive*/ func_0x015adeac(lVar12,0 < iVar23 + iVar6,0);
        lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar13,uRam0000000003d41080);
        lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar13,uRam0000000003d41088);
        if (((lVar10 != 0) && (*(long *)(lVar10 + 0x38) != 0)) &&
           (lStack_128 = *(long *)(*(long *)(lVar10 + 0x38) + 200), lVar12 != 0)) {
          /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetCulturePodWeaponIndicatorArrows*/ func_0x015adf10(lVar12,&lStack_128,0);
          lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar13,uRam0000000003d41080);
          lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar13,uRam0000000003d41088);
          if (((lVar10 != 0) && (*(long *)(lVar10 + 0x38) != 0)) &&
             (plStack_130 = *(long **)(*(long *)(lVar10 + 0x38) + 0xd0), lVar12 != 0)) {
            auVar42 = /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetSheldonWeaponIndicatorArrows*/ func_0x015ae03c(lVar12,&plStack_130,0);
            return auVar42;
          }
        }
      }
    }
  }
  lVar12 = func_0x00f78af4();
  puStack_138 = &Atlas_UI_Screens_GameInProgressScreen__UpdateKartIndicator;
  uStack_148 = uVar13;
  pppppuStack_140 = &pppppuStack_f0;
  if ((bRam0000000003eb5230 & 1) == 0) {
    func_0x00f78a20(0x3d33450);
    func_0x00f78a20(0x3d33458);
    func_0x00f78a20(0x3d33460);
    func_0x00f78a20(0x3d3d1c8);
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    func_0x00f78a20(0x3d41090);
    bRam0000000003eb5230 = 1;
  }
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  lStack_1e0 = 0;
  fStack_1f8 = 0.0;
  uStack_200 = 0;
  fStack_208 = 0.0;
  uStack_210 = 0;
  fStack_218 = 0.0;
  uStack_228 = 0;
  uStack_220 = 0;
  uStack_230 = 0;
  iStack_234 = 0;
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
  if (((lVar10 == 0) || (*(long *)(lVar10 + 0x1c0) == 0)) ||
     (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar10 + 0x1c0),0), lVar10 == 0)) goto code_r0x015ab4c4;
  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,*(char *)(lVar12 + 0x109) == '\0',0);
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
  if (((lVar10 == 0) || (*(long *)(lVar10 + 0x1c0) == 0)) ||
     (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar10 + 0x1c0),0), lVar10 == 0)) goto code_r0x015ab4c4;
  iVar6 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar10,0);
  uVar11 = extraout_d0_03;
  uVar13 = extraout_var_03;
  if (iVar6 == 0) {
code_r0x015ab494:
    auVar33._8_8_ = uVar13;
    auVar33._0_8_ = uVar11;
    return auVar33;
  }
  *(undefined1 *)(lVar12 + 0x9c) = 0;
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar12,uRam0000000003d41090);
  if ((lVar10 == 0) || (*(long *)(lVar10 + 0x40) == 0)) goto code_r0x015ab4c4;
  lVar10 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(lVar10 + 0x40),0);
  if (*(long *)(lVar12 + 0x78) == 0) {
code_r0x015aaa34:
    lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar12,uRam0000000003d41088);
    if ((lVar16 == 0) || (*(long *)(lVar16 + 0x38) == 0)) goto code_r0x015ab4c4;
    if (*(int *)(*(long *)(lVar16 + 0x38) + 0x74) == 1) {
      *(undefined8 *)(lVar12 + 0x78) = *(undefined8 *)(lVar12 + 0x80);
    }
  }
  else {
    lVar16 = *(long *)(*(long *)(lVar12 + 0x78) + 0x10);
    if (lVar16 == 0) goto code_r0x015ab4c4;
    if (*(int *)(lVar16 + 0x74) != 1) goto code_r0x015aaa34;
  }
  lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
  if (lVar16 == 0) {
code_r0x015ab4c4:
    func_0x00f78af4();
code_r0x015ab4c8:
    uVar11 = func_0x00f78b24();
    func_0x00f78ac0(uVar11,0);
    __Unwind_Resume();
code_r0x015ab4d8:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x15ab4dc);
    (*pcVar3)();
  }
  iVar23 = 0;
  iVar6 = 0;
  iStack_264 = 0;
  uVar22 = 0;
  uVar11 = extraout_d0_04;
  uVar13 = extraout_var_04;
code_r0x015aaa94:
  if (*(long *)(lVar16 + 0x1c8) == 0) goto code_r0x015ab4c4;
  if ((*(int *)(*(long *)(lVar16 + 0x1c8) + 0x18) <= (int)uVar22) ||
     (*(int *)(lVar12 + 0xbc) <= iStack_264)) goto code_r0x015ab494;
  lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
  if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x1c8), lVar16 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar16 + 0x18) <= uVar22) goto code_r0x015ab4c8;
  lVar19 = (long)(int)uVar22;
  lVar16 = *(long *)(lVar16 + lVar19 * 8 + 0x20);
  if (lVar16 == 0) goto code_r0x015ab4c4;
  if (*(long *)(lVar16 + 0x80) == 0) {
    bVar5 = false;
  }
  else {
    lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
    if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x1c8), lVar16 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar16 + 0x18) <= uVar22) goto code_r0x015ab4c8;
    lVar16 = *(long *)(lVar16 + lVar19 * 8 + 0x20);
    if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x80), lVar16 == 0)) goto code_r0x015ab4c4;
    bVar5 = *(int *)(lVar16 + 0x74) == 1;
  }
  lVar16 = *(long *)(lVar12 + 0x78);
  if ((bool)(bVar5 & lVar16 == 0)) {
    if (*(long *)(lVar12 + 0x70) == 0) goto code_r0x015ab4c4;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_260,*(long *)(lVar12 + 0x70),uRam0000000003d3d1c8);
    uStack_1e8 = uStack_258;
    uStack_1f0 = uStack_260;
    lStack_1e0 = lStack_250;
    do {
      uVar14 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_1f0,uRam0000000003d33458);
      lVar16 = lStack_1e0;
      if ((uVar14 & 1) == 0) goto code_r0x015aabdc;
      if (lStack_1e0 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar21 = *(long *)(lStack_1e0 + 0x10);
      lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
      if (lVar15 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar15 = *(long *)(lVar15 + 0x1c8);
      if (lVar15 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      if (*(uint *)(lVar15 + 0x18) <= uVar22) {
        uVar11 = func_0x00f78b24();
        func_0x00f78ac0(uVar11,0);
        goto code_r0x015ab4d8;
      }
      lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
      if (lVar15 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
    } while (lVar21 != *(long *)(lVar15 + 0x80));
    *(long *)(lVar12 + 0x78) = lVar16;
code_r0x015aabdc:
    aiStack_248[iVar6] = 0x132;
    iVar23 = iStack_234;
    iVar6 = iStack_234 + 1;
    iStack_234 = iVar6;
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_1f0,uRam0000000003d33450);
    if ((iVar6 != 0) && (aiStack_248[iVar23] == 0x132)) {
      iStack_234 = iVar23;
      iVar6 = iVar23;
    }
    lVar16 = *(long *)(lVar12 + 0x78);
    iVar23 = iVar6;
  }
  if (lVar16 == 0) {
code_r0x015aac8c:
    uVar11 = 0;
    cVar20 = '\0';
  }
  else {
    lVar15 = *(long *)(lVar16 + 0x10);
    lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
    if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x1c8), lVar16 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar16 + 0x18) <= uVar22) goto code_r0x015ab4c8;
    lVar16 = *(long *)(lVar16 + lVar19 * 8 + 0x20);
    if (lVar16 == 0) goto code_r0x015ab4c4;
    if (!(bool)(bVar5 & lVar15 == *(long *)(lVar16 + 0x80))) goto code_r0x015aac8c;
    cVar20 = *(char *)(lVar12 + 0xb8);
    uVar11 = 1;
  }
  lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
  if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x1c8), lVar16 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar16 + 0x18) <= uVar22) goto code_r0x015ab4c8;
  lVar16 = *(long *)(lVar16 + lVar19 * 8 + 0x20);
  if (lVar16 == 0) goto code_r0x015ab4c4;
  if (*(long *)(lVar16 + 0x80) != 0) {
    lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
    if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x1c8), lVar16 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar16 + 0x18) <= uVar22) goto code_r0x015ab4c8;
    lVar16 = *(long *)(lVar16 + lVar19 * 8 + 0x20);
    if (lVar16 == 0) goto code_r0x015ab4c4;
    iVar7 = /*Atlas.UI.KartIndicatorBehaviour$$get_CanUpdateTarget*/ func_0x015cc628(lVar16,0);
    fVar37 = (float)param_3;
    fVar36 = (float)param_2;
    if ((iVar7 != 0) && (*(char *)(lVar12 + 0xb8) == '\0')) goto code_r0x015aaf94;
    lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
    if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x1c8), lVar16 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar16 + 0x18) <= uVar22) goto code_r0x015ab4c8;
    lVar16 = *(long *)(lVar16 + lVar19 * 8 + 0x20);
    if ((((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x80), lVar16 == 0)) ||
        (lVar16 = *(long *)(lVar16 + 0x10), lVar16 == 0)) ||
       (lVar16 = *(long *)(lVar16 + 0x18), lVar16 == 0)) goto code_r0x015ab4c4;
    fVar24 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar16,0);
    uStack_200 = CONCAT44(fVar36,fVar24);
    fVar26 = fVar36;
    fVar34 = fVar37;
    fStack_1f8 = fVar37;
    lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar12,uRam0000000003d41088);
    if (((lVar16 == 0) || (*(long *)(lVar16 + 0x38) == 0)) ||
       ((lVar16 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10), lVar16 == 0 ||
        (lVar16 = *(long *)(lVar16 + 0x18), lVar16 == 0)))) goto code_r0x015ab4c4;
    fVar25 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar16,0);
    uStack_210 = CONCAT44(fVar26,fVar25);
    fStack_218 = fVar37 - fVar34;
    param_3 = (ulong)(uint)fStack_218;
    uStack_220 = CONCAT44(fVar36 - fVar26,fVar24 - fVar25);
    fStack_208 = fVar34;
    if (cVar20 != '\0') {
      if (lVar10 == 0) goto code_r0x015ab4c4;
code_r0x015aadd4:
      uVar38 = (ulong)(uint)(fVar37 + *(float *)(lVar12 + 0xa8));
      param_4 = *(float *)(lVar12 + 0xa0);
      uVar14 = (ulong)(uint)(fVar36 + *(float *)(lVar12 + 0xa4));
      fVar26 = (float)/*UnityEngine.Camera$$WorldToViewportPoint*/ func_0x0321fe94(fVar24 + param_4,lVar10,0);
      fVar36 = (float)uVar14;
      fVar37 = (float)uVar38;
      if (cVar20 == '\0') {
        bVar5 = false;
        bVar4 = true;
        if (0.0 <= fVar26) {
          bVar5 = false;
          bVar4 = true;
          if (!NAN(fVar26)) {
            bVar5 = fVar26 == 1.0;
            bVar4 = 1.0 <= fVar26;
          }
        }
        param_2 = uVar14;
        param_3 = uVar38;
        if (!bVar4 || bVar5) {
          bVar5 = false;
          bVar4 = true;
          if (0.0 <= fVar36) {
            bVar5 = false;
            bVar4 = true;
            if (!NAN(fVar36)) {
              bVar5 = fVar36 == 1.0;
              bVar4 = 1.0 <= fVar36;
            }
          }
          if ((!bVar4 || bVar5) && (0.0 <= fVar37)) {
            iVar7 = /*Atlas.UI.Screens.GameInProgressScreen$$CanSeeTarget*/ func_0x015ab70c(lVar12,&uStack_210,&uStack_200,1,1);
            fVar36 = (float)param_2;
            fVar37 = (float)param_3;
            if (iVar7 != 0) goto code_r0x015aae04;
          }
        }
        goto code_r0x015aaf94;
      }
code_r0x015aae04:
      lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
      if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x1c8), lVar16 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar16 + 0x18) <= uVar22) goto code_r0x015ab4c8;
      lVar15 = *(long *)(lVar16 + lVar19 * 8 + 0x20);
      lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
      if ((lVar16 == 0) || (*(long *)(lVar16 + 0x1c0) == 0)) goto code_r0x015ab4c4;
      uVar27 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar16 + 0x1c0),0);
      uStack_230 = CONCAT44(fVar36,uVar27);
      uStack_228 = CONCAT44(param_4,fVar37);
      param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_230,0);
      if (lVar15 == 0) goto code_r0x015ab4c4;
      param_2 = uVar14 & 0xffffffff;
      param_3 = uVar38 & 0xffffffff;
      /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(fVar26,lVar15,0);
      lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
      if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x1c8), lVar16 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar16 + 0x18) <= uVar22) goto code_r0x015ab4c8;
      lVar16 = *(long *)(lVar16 + lVar19 * 8 + 0x20);
      if (lVar16 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar16,uVar11,*(undefined1 *)(lVar12 + 0xb8),0);
      if (*(char *)(lVar12 + 0xb8) != '\0') {
        lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
        if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x1c8), lVar16 == 0))
        goto code_r0x015ab4c4;
        if (*(uint *)(lVar16 + 0x18) <= uVar22) goto code_r0x015ab4c8;
        lVar16 = *(long *)(lVar16 + lVar19 * 8 + 0x20);
        if (lVar16 == 0) goto code_r0x015ab4c4;
        *(undefined4 *)(lVar16 + 0x88) = *(undefined4 *)(lVar12 + 0x98);
      }
      iStack_264 = iStack_264 + 1;
      goto code_r0x015ab2c0;
    }
    fVar26 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_220,0);
    fVar34 = *(float *)(lVar12 + 0x8c);
    param_2 = (ulong)(uint)fVar34;
    if (fVar26 < fVar34) {
      fVar26 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_220,0);
      if (lVar10 != 0) {
        fVar25 = (float)param_3;
        fVar35 = fVar34;
        lVar16 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar10,0);
        if (lVar16 != 0) {
          fVar28 = (float)/*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar16,0);
          param_2 = (ulong)(uint)*(float *)(lVar12 + 0x94);
          if (*(float *)(lVar12 + 0x94) <
              fVar25 * (float)param_3 + fVar26 * fVar28 + fVar34 * fVar35) goto code_r0x015aadd4;
          goto code_r0x015aaf94;
        }
      }
      goto code_r0x015ab4c4;
    }
  }
code_r0x015aaf94:
  lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
  if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x1c8), lVar16 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar16 + 0x18) <= uVar22) goto code_r0x015ab4c8;
  lVar16 = *(long *)(lVar16 + lVar19 * 8 + 0x20);
  if (lVar16 == 0) goto code_r0x015ab4c4;
  if (*(long *)(lVar16 + 0x80) != 0) {
    lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
    if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x1c8), lVar16 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar16 + 0x18) <= uVar22) goto code_r0x015ab4c8;
    lVar16 = *(long *)(lVar16 + lVar19 * 8 + 0x20);
    if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x80), lVar16 == 0)) goto code_r0x015ab4c4;
    *(undefined1 *)(lVar16 + 0x9c) = 0;
  }
  if (*(char *)(lVar12 + 0x9c) == '\0') {
    if (*(char *)(lVar12 + 0xb8) == '\0') {
      /*Atlas.UI.Screens.GameInProgressScreen$$UpdateAllKartIndicatorDataRace*/ func_0x015abdd0(lVar12);
    }
    else {
      /*Atlas.UI.Screens.GameInProgressScreen$$UpdateAllKartIndicatorDataBattle*/ func_0x015ab8c0(lVar12);
    }
  }
  if (*(char *)(lVar12 + 0x10a) == '\0') {
    cVar20 = *(char *)(lVar12 + 0xb8);
  }
  else {
    cVar20 = '\0';
  }
  if (*(long *)(lVar12 + 0x70) == 0) goto code_r0x015ab4c4;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_260,*(long *)(lVar12 + 0x70),uRam0000000003d3d1c8);
  uStack_1e8 = uStack_258;
  uStack_1f0 = uStack_260;
  lStack_1e0 = lStack_250;
  do {
    do {
      uVar14 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_1f0,uRam0000000003d33458);
      lVar16 = lStack_1e0;
      uVar27 = (undefined4)param_3;
      if ((uVar14 & 1) == 0) {
code_r0x015ab1e8:
        bVar5 = false;
        goto code_r0x015ab1ec;
      }
      if (lStack_1e0 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      fVar36 = *(float *)(lVar12 + 0x8c);
      param_2 = (ulong)(uint)fVar36;
      if ((fVar36 < *(float *)(lStack_1e0 + 0x18)) && (lStack_1e0 != *(long *)(lVar12 + 0x78)))
      goto code_r0x015ab1e8;
    } while (*(char *)(lStack_1e0 + 0x28) == '\0');
    lVar15 = *(long *)(lStack_1e0 + 0x10);
    if (lVar15 == 0) {
      func_0x00f78af4();
      goto code_r0x015ab4d8;
    }
  } while (*(char *)(lVar15 + 0x9c) != '\0');
  *(undefined1 *)(lVar15 + 0x9c) = 1;
  lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
  if (lVar15 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar15 = *(long *)(lVar15 + 0x1c8);
  if (lVar15 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar15 + 0x18) <= uVar22) {
    uVar11 = func_0x00f78b24();
    func_0x00f78ac0(uVar11,0);
    goto code_r0x015ab4d8;
  }
  lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
  if (lVar15 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(*(undefined4 *)(lVar12 + 0x98),lVar15,*(undefined8 *)(lVar16 + 0x10),
                  cVar20 != '\0',0);
  lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
  if (lVar15 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar15 = *(long *)(lVar15 + 0x1c8);
  if (lVar15 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar15 + 0x18) <= uVar22) {
    uVar11 = func_0x00f78b24();
    func_0x00f78ac0(uVar11,0);
    goto code_r0x015ab4d8;
  }
  lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x20);
  uVar39 = *(undefined4 *)(lVar16 + 0x1c);
  uVar40 = *(uint *)(lVar16 + 0x20);
  uVar41 = *(uint *)(lVar16 + 0x24);
  lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
  if (lVar16 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(long *)(lVar16 + 0x1c0) == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  uVar29 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar16 + 0x1c0),0);
  uStack_230 = CONCAT44(fVar36,uVar29);
  uStack_228 = CONCAT44(param_4,uVar27);
  param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_230,0);
  if (lVar15 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  param_2 = (ulong)uVar40;
  param_3 = (ulong)uVar41;
  /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(uVar39,lVar15,0);
  lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
  if (lVar16 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar16 = *(long *)(lVar16 + 0x1c8);
  if (lVar16 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar16 + 0x18) <= uVar22) {
    uVar11 = func_0x00f78b24();
    func_0x00f78ac0(uVar11,0);
    goto code_r0x015ab4d8;
  }
  lVar16 = *(long *)(lVar16 + lVar19 * 8 + 0x20);
  if (lVar16 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar16,uVar11,*(undefined1 *)(lVar12 + 0xb8),0);
  iStack_264 = iStack_264 + 1;
  bVar5 = true;
code_r0x015ab1ec:
  aiStack_248[iVar23] = 0x41c;
  iVar6 = iStack_234;
  iVar23 = iStack_234 + 1;
  iStack_234 = iVar23;
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_1f0,uRam0000000003d33450);
  if ((iVar23 != 0) && (aiStack_248[iVar6] == 0x41c)) {
    iStack_234 = iVar6;
    iVar23 = iVar6;
  }
  iVar6 = iVar23;
  if (!bVar5) {
    lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
    if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x1c8), lVar16 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar16 + 0x18) <= uVar22) goto code_r0x015ab4c8;
    lVar16 = *(long *)(lVar16 + lVar19 * 8 + 0x20);
    if (lVar16 == 0) goto code_r0x015ab4c4;
    if (*(long *)(lVar16 + 0x80) != 0) {
      lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
      if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x1c8), lVar16 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar16 + 0x18) <= uVar22) goto code_r0x015ab4c8;
      lVar16 = *(long *)(lVar16 + lVar19 * 8 + 0x20);
      if (lVar16 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(0,lVar16,0,cVar20 != '\0',0);
    }
  }
code_r0x015ab2c0:
  uVar22 = uVar22 + 1;
  lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
  uVar11 = extraout_d0_05;
  uVar13 = extraout_var_05;
  if (lVar16 == 0) goto code_r0x015ab4c4;
  goto code_r0x015aaa94;
joined_r0x014d2b68:
  if (plVar18 != (long *)0x0) {
    lVar16 = *plVar18;
    uVar14 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar14 != 0) {
      piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar8 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
          goto code_r0x014d2bc0;
        }
        piVar17 = piVar17 + 4;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    param_7 = (undefined8 *)0x0;
    puVar8 = (undefined8 *)func_0x00fac1f0(plVar18);
code_r0x014d2bc0:
    (*(code *)*puVar8)(plVar18,puVar8[1]);
  }
  if (lVar10 == 0) {
    if (*(long *)(lVar12 + 0x20) == 0) goto code_r0x014d2c78;
    plVar18 = (long *)/*Core.StateManagement.StateMachine$$get_ActiveState*/ func_0x02b95214(*(long *)(lVar12 + 0x20),0);
    auVar2._8_8_ = extraout_var;
    auVar2._0_8_ = extraout_d0;
    auVar1._8_8_ = extraout_var;
    auVar1._0_8_ = extraout_d0;
    auVar42._8_8_ = extraout_var;
    auVar42._0_8_ = extraout_d0;
    if (plVar18 != (long *)0x0) {
      auVar42 = auVar1;
      if (*(byte *)(/*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10 + 300) <= *(byte *)(*plVar18 + 300)) {
        if (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10 + 300) * 8 +
                     -8) != /*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10) {
          plVar18 = (long *)0x0;
        }
        auVar42 = auVar2;
        if (plVar18 != (long *)0x0) {
          if (*(long *)(lVar12 + 0x40) == 0) goto code_r0x014d2c78;
          /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetLocalGameContextPlayer*/ func_0x01599b24(*(long *)(lVar12 + 0x40),0);
          auVar42 = Atlas_Contexts_GameContextBaseInProgressState__NotifyGameContextFinished
                              (plVar18,0);
        }
      }
    }
    return auVar42;
  }
  func_0x00f78ac0(lVar10,0);
  if (extraout_w1 != 1) {
    auVar42 = __Unwind_Resume();
    pppppuStack_140 = (undefined8 *****)0x3d1d260;
    puStack_138 = (undefined *)0x3d22180;
    plStack_130 = unaff_x22;
    lStack_128 = lVar10;
    if ((bRam0000000003eb4b95 & 1) == 0) {
      func_0x00f78a20(0x3d21b08);
      bRam0000000003eb4b95 = 1;
    }
    uStack_148 = 0;
    if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar6 = Atlas_Contexts_GameContextBase__TryGetKartCompositeFromCollider
                      (auVar42._8_8_,&uStack_148,0);
    auVar30._8_8_ = extraout_var_00;
    auVar30._0_8_ = extraout_d0_00;
    if (iVar6 != 0) {
      lVar12 = *(long *)(auVar42._0_8_ + 0x18);
      if (lVar12 == 0) {
        lVar12 = func_0x00f78af4();
        auVar31._8_8_ = extraout_var_01;
        auVar31._0_8_ = extraout_d0_01;
        if ((bRam0000000003eb4b96 & 1) == 0) {
          auVar31 = func_0x00f78a20(0x3d21b08);
          bRam0000000003eb4b96 = 1;
        }
        if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
          auVar31 = func_0x00f78ad0();
        }
        *(undefined1 *)(lVar12 + 0x249) = 1;
        *(undefined1 *)(lVar12 + 0x10) = 1;
        return auVar31;
      }
      auVar30 = /*Atlas.Stats.AtlasStats$$OnKartEnterShortcut*/ func_0x0146f188(lVar12,uStack_148,param_7,0);
    }
    return auVar30;
  }
  plVar9 = (long *)___cxa_begin_catch();
  lVar10 = *plVar9;
  ___cxa_end_catch();
  goto joined_r0x014d2b68;
}



// ============================================================
// RVA: 0x14d28c4 | Atlas.Contexts.RaceGameContext.SetupGameContextScreen
// ============================================================

/* WARNING: Possible PIC construction at 0x014d28f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015aa69c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ae374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014d28f8) */
/* WARNING: Removing unreachable block (ram,0x015aa6a0) */
/* WARNING: Removing unreachable block (ram,0x015aa6b8) */
/* WARNING: Removing unreachable block (ram,0x015aa6c0) */
/* WARNING: Removing unreachable block (ram,0x015aa6c8) */
/* WARNING: Removing unreachable block (ram,0x015aa6e4) */
/* WARNING: Removing unreachable block (ram,0x015aa730) */
/* WARNING: Removing unreachable block (ram,0x015aa708) */
/* WARNING: Removing unreachable block (ram,0x015ae1c0) */
/* WARNING: Removing unreachable block (ram,0x015ae1e8) */
/* WARNING: Removing unreachable block (ram,0x015ae1fc) */
/* WARNING: Removing unreachable block (ram,0x015ae220) */
/* WARNING: Removing unreachable block (ram,0x015ae240) */
/* WARNING: Removing unreachable block (ram,0x015ae244) */
/* WARNING: Removing unreachable block (ram,0x015ae24c) */
/* WARNING: Removing unreachable block (ram,0x015ae224) */
/* WARNING: Removing unreachable block (ram,0x015ae228) */
/* WARNING: Removing unreachable block (ram,0x015ae230) */
/* WARNING: Removing unreachable block (ram,0x015ae204) */
/* WARNING: Removing unreachable block (ram,0x015ae208) */
/* WARNING: Removing unreachable block (ram,0x015ae210) */
/* WARNING: Removing unreachable block (ram,0x015ae258) */
/* WARNING: Removing unreachable block (ram,0x015ae26c) */
/* WARNING: Removing unreachable block (ram,0x015ae274) */
/* WARNING: Removing unreachable block (ram,0x015ae278) */
/* WARNING: Removing unreachable block (ram,0x015ae2b4) */
/* WARNING: Removing unreachable block (ram,0x015ae28c) */
/* WARNING: Removing unreachable block (ram,0x015ae294) */
/* WARNING: Removing unreachable block (ram,0x015ae2c4) */
/* WARNING: Removing unreachable block (ram,0x015ae2e4) */
/* WARNING: Removing unreachable block (ram,0x015ae310) */
/* WARNING: Removing unreachable block (ram,0x015ae330) */
/* WARNING: Removing unreachable block (ram,0x015ae340) */
/* WARNING: Removing unreachable block (ram,0x015ae348) */
/* WARNING: Removing unreachable block (ram,0x015ae34c) */
/* WARNING: Removing unreachable block (ram,0x015ae378) */
/* WARNING: Removing unreachable block (ram,0x015ae388) */
/* WARNING: Removing unreachable block (ram,0x015ae390) */
/* WARNING: Removing unreachable block (ram,0x015ae394) */
/* WARNING: Removing unreachable block (ram,0x015ae3d4) */
/* WARNING: Removing unreachable block (ram,0x015ae3a4) */
/* WARNING: Removing unreachable block (ram,0x015ae3ac) */
/* WARNING: Removing unreachable block (ram,0x015ae35c) */
/* WARNING: Removing unreachable block (ram,0x015ae3e4) */
/* WARNING: Removing unreachable block (ram,0x015ae364) */
/* WARNING: Removing unreachable block (ram,0x016b8cd4) */
/* WARNING: Removing unreachable block (ram,0x016b8d00) */
/* WARNING: Removing unreachable block (ram,0x016b8d14) */
/* WARNING: Removing unreachable block (ram,0x016b8d20) */
/* WARNING: Removing unreachable block (ram,0x016b8d28) */
/* WARNING: Removing unreachable block (ram,0x016b8d2c) */
/* WARNING: Removing unreachable block (ram,0x016962e4) */
/* WARNING: Removing unreachable block (ram,0x01696308) */
/* WARNING: Removing unreachable block (ram,0x01696328) */
/* WARNING: Removing unreachable block (ram,0x016963a8) */
/* WARNING: Removing unreachable block (ram,0x0169632c) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */
/* WARNING: Removing unreachable block (ram,0x01696364) */
/* WARNING: Removing unreachable block (ram,0x01696370) */
/* WARNING: Removing unreachable block (ram,0x01696378) */
/* WARNING: Removing unreachable block (ram,0x0169637c) */
/* WARNING: Removing unreachable block (ram,0x016963ac) */
/* WARNING: Removing unreachable block (ram,0x015ae2d8) */
/* WARNING: Removing unreachable block (ram,0x014b3b58) */
/* WARNING: Removing unreachable block (ram,0x014b3b70) */
/* WARNING: Removing unreachable block (ram,0x014b3b78) */
/* WARNING: Removing unreachable block (ram,0x015ae29c) */
/* WARNING: Removing unreachable block (ram,0x032c2184) */
/* WARNING: Removing unreachable block (ram,0x032c21bc) */
/* WARNING: Removing unreachable block (ram,0x032c21d0) */
/* WARNING: Removing unreachable block (ram,0x032c21e4) */
/* WARNING: Removing unreachable block (ram,0x032c21ec) */
/* WARNING: Removing unreachable block (ram,0x032c21f0) */
/* WARNING: Removing unreachable block (ram,0x032c22b0) */
/* WARNING: Removing unreachable block (ram,0x032c22bc) */
/* WARNING: Removing unreachable block (ram,0x032c22c4) */
/* WARNING: Removing unreachable block (ram,0x032c22c8) */
/* WARNING: Removing unreachable block (ram,0x032c22dc) */
/* WARNING: Removing unreachable block (ram,0x032c22e0) */
/* WARNING: Removing unreachable block (ram,0x032c232c) */
/* WARNING: Removing unreachable block (ram,0x032c2330) */
/* WARNING: Removing unreachable block (ram,0x032c2354) */
/* WARNING: Removing unreachable block (ram,0x032c235c) */
/* WARNING: Removing unreachable block (ram,0x032c2360) */
/* WARNING: Removing unreachable block (ram,0x032c2204) */
/* WARNING: Removing unreachable block (ram,0x032c2214) */
/* WARNING: Removing unreachable block (ram,0x032c221c) */
/* WARNING: Removing unreachable block (ram,0x032c2220) */
/* WARNING: Removing unreachable block (ram,0x032c242c) */
/* WARNING: Removing unreachable block (ram,0x032c2234) */
/* WARNING: Removing unreachable block (ram,0x032c223c) */
/* WARNING: Removing unreachable block (ram,0x032c226c) */
/* WARNING: Removing unreachable block (ram,0x032c2274) */
/* WARNING: Removing unreachable block (ram,0x032c2278) */
/* WARNING: Removing unreachable block (ram,0x032c236c) */
/* WARNING: Removing unreachable block (ram,0x032c2288) */
/* WARNING: Removing unreachable block (ram,0x032c228c) */
/* WARNING: Removing unreachable block (ram,0x032c2374) */
/* WARNING: Removing unreachable block (ram,0x032c2378) */
/* WARNING: Removing unreachable block (ram,0x032c237c) */
/* WARNING: Removing unreachable block (ram,0x032c2380) */
/* WARNING: Removing unreachable block (ram,0x032c2394) */
/* WARNING: Removing unreachable block (ram,0x032c23ac) */
/* WARNING: Removing unreachable block (ram,0x032c23b4) */
/* WARNING: Removing unreachable block (ram,0x032c23b8) */
/* WARNING: Removing unreachable block (ram,0x032c23cc) */
/* WARNING: Removing unreachable block (ram,0x032c2448) */
/* WARNING: Removing unreachable block (ram,0x032c23d0) */
/* WARNING: Removing unreachable block (ram,0x032c23e0) */
/* WARNING: Removing unreachable block (ram,0x032c23ec) */
/* WARNING: Removing unreachable block (ram,0x032c23f4) */
/* WARNING: Removing unreachable block (ram,0x032c23f8) */
/* WARNING: Removing unreachable block (ram,0x032c2400) */
/* WARNING: Removing unreachable block (ram,0x032c244c) */
/* WARNING: Removing unreachable block (ram,0x032c2474) */
/* WARNING: Removing unreachable block (ram,0x032c2494) */
/* WARNING: Removing unreachable block (ram,0x032c24ac) */
/* WARNING: Removing unreachable block (ram,0x032c24b4) */
/* WARNING: Removing unreachable block (ram,0x032c24b8) */
/* WARNING: Removing unreachable block (ram,0x032c24cc) */
/* WARNING: Removing unreachable block (ram,0x032c2550) */
/* WARNING: Removing unreachable block (ram,0x032c24d8) */
/* WARNING: Removing unreachable block (ram,0x032c24f0) */
/* WARNING: Removing unreachable block (ram,0x032c24f8) */
/* WARNING: Removing unreachable block (ram,0x032c24fc) */
/* WARNING: Removing unreachable block (ram,0x032c2510) */
/* WARNING: Removing unreachable block (ram,0x032c2524) */
/* WARNING: Removing unreachable block (ram,0x032c252c) */
/* WARNING: Removing unreachable block (ram,0x032c2530) */
/* WARNING: Removing unreachable block (ram,0x032c2540) */
/* WARNING: Removing unreachable block (ram,0x015ac734) */
/* WARNING: Type propagation algorithm not settling */

void Atlas_Contexts_RaceGameContext__SetupGameContextScreen
               (undefined1 param_1 [16],ulong param_2,ulong param_3,float param_4,long param_5,
               long param_6,ulong param_7)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int extraout_w1;
  long lVar14;
  int *piVar15;
  long *plVar16;
  long lVar17;
  char cVar18;
  long *unaff_x22;
  long lVar19;
  uint uVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  ulong uVar32;
  undefined4 uVar33;
  uint uVar34;
  uint uVar35;
  undefined1 auVar36 [16];
  int iStack_244;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  int aiStack_228 [5];
  int iStack_214;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  float fStack_1f8;
  undefined8 uStack_1f0;
  float fStack_1e8;
  undefined8 uStack_1e0;
  float fStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_128;
  undefined8 ******ppppppuStack_120;
  undefined *puStack_118;
  long *plStack_110;
  long lStack_108;
  undefined1 ******ppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *****pppppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *****pppppuStack_70;
  undefined *puStack_68;
  undefined8 ***pppuStack_30;
  undefined *puStack_28;
  
  *(long *)(param_5 + 0x48) = param_6;
  pppuStack_30 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((param_7 == 0) || (*(undefined4 *)(param_7 + 0x290) = 0, param_6 == 0)) {
    lVar8 = func_0x00f78af4();
    puStack_28 = &Atlas_Contexts_RaceGameContext__OnEventTimeExceeded;
    if ((bRam0000000003eb4b94 & 1) == 0) {
      func_0x00f78a20(0x3d21b10);
      func_0x00f78a20(0x3d220f0);
      func_0x00f78a20(0x3d1d0a0);
      func_0x00f78a20(0x3d1d260);
      func_0x00f78a20(0x3d22180);
      bRam0000000003eb4b94 = 1;
    }
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    if ((*(long *)(lVar8 + 0x40) == 0) ||
       (plVar16 = *(long **)(*(long *)(lVar8 + 0x40) + 0x28), plVar16 == (long *)0x0)) {
code_r0x014d2c78:
      func_0x00f78af4();
    }
    else {
      lVar11 = *plVar16;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar12 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == /*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto code_r0x014d29f0;
          }
          piVar15 = piVar15 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      param_7 = 0;
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar16);
code_r0x014d29f0:
      plVar16 = (long *)(*(code *)*puVar6)(plVar16,puVar6[1]);
      if (plVar16 != (long *)0x0) {
code_r0x014d2a14:
        lVar11 = *plVar16;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar12 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto code_r0x014d2a60;
            }
            piVar15 = piVar15 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        param_7 = 0;
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar16);
code_r0x014d2a60:
        uVar12 = (*(code *)*puVar6)(plVar16,puVar6[1]);
        if ((uVar12 & 1) == 0) {
          lVar11 = 0;
          goto joined_r0x014d2b68;
        }
        lVar11 = *plVar16;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar12 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == /*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto code_r0x014d2abc;
            }
            piVar15 = piVar15 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        param_7 = 0;
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar16);
code_r0x014d2abc:
        lVar11 = (*(code *)*puVar6)(plVar16,puVar6[1]);
        if (lVar11 == 0) {
          func_0x00f78af4();
          goto code_r0x014d2c80;
        }
        lVar14 = *(long *)(lVar11 + 0x10);
        if (lVar14 != 0) {
          uStack_b8 = *(undefined8 *)(lVar14 + 0x50);
          uStack_c0 = *(undefined8 *)(lVar14 + 0x48);
          uStack_a8 = *(undefined8 *)(lVar14 + 0x60);
          uStack_b0 = *(undefined8 *)(lVar14 + 0x58);
          uVar12 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&uStack_c0,0);
          if (((uVar12 & 1) != 0) && (*(char *)(lVar11 + 0x98) == '\0')) {
            if (*(long *)(lVar8 + 600) == 0) {
              func_0x00f78af4();
              goto code_r0x014d2c80;
            }
            lVar14 = *(long *)(lVar11 + 0x10);
            if (lVar14 == 0) {
              func_0x00f78af4();
              goto code_r0x014d2c80;
            }
            unaff_x22 = *(long **)(*(long *)(lVar8 + 600) + 0x20);
            uVar10 = *(undefined8 *)(lVar14 + 0x50);
            uVar9 = *(undefined8 *)(lVar14 + 0x48);
            puStack_c8 = *(undefined **)(lVar14 + 0x60);
            ppppppuStack_d0 = *(undefined1 *******)(lVar14 + 0x58);
            /*Atlas.Gameplay.Player.GameContextPlayer$$GetRaceProgress*/ func_0x015a569c(lVar11,0);
            if (unaff_x22 == (long *)0x0) {
              func_0x00f78af4();
              goto code_r0x014d2c80;
            }
            param_7 = (ulong)*(uint *)(lVar11 + 0x78);
            puStack_68 = puStack_c8;
            pppppuStack_70 = ppppppuStack_d0;
            uStack_90 = 0;
            lStack_88 = 0;
            puStack_98 = (undefined *)0x0;
            uStack_80 = uVar9;
            uStack_78 = uVar10;
            (**(code **)(*unaff_x22 + 0x248))
                      (unaff_x22,&uStack_80,param_7,1,&puStack_98,
                       *(undefined8 *)(*unaff_x22 + 0x250));
          }
          goto code_r0x014d2a14;
        }
        func_0x00f78af4();
        goto code_r0x014d2c80;
      }
    }
    func_0x00f78af4();
code_r0x014d2c80:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x14d2c84);
    (*pcVar1)();
  }
  puStack_28 = (undefined *)0x14d28f8;
  if ((bRam0000000003eb522b & 1) == 0) {
    func_0x00f78a20(0x3d41080,8,0,0);
    bRam0000000003eb522b = 1;
  }
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_6,uRam0000000003d41080);
  if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x015ac724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_015ac728 + (ulong)UNK_033f8a48 * 4))(lVar8,8,0,0);
    return;
  }
  uVar9 = func_0x00f78af4();
  uStack_90 = 0x3eb5000;
  uStack_80 = 8;
  uStack_78 = 0;
  puStack_68 = &Atlas_UI_Screens_GameInProgressScreen__UpdateArcade;
  lStack_88 = param_6;
  pppppuStack_70 = (undefined8 *****)&pppuStack_30;
  if ((bRam0000000003eb5227 & 1) == 0) {
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb5227 = 1;
  }
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar9,uRam0000000003d41088);
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x30) != 0)) {
    return;
  }
  uVar10 = func_0x00f78af4();
  uStack_c0 = 0x3eb5000;
  uStack_b8 = 0x3d41088;
  uStack_b0 = 0x3eb5000;
  puStack_98 = &Atlas_UI_Screens_GameInProgressScreen__OnLateUpdate;
  ppppppuStack_d0 = (undefined1 ******)&pppppuStack_a0;
  uStack_a8 = uVar9;
  pppppuStack_a0 = &pppppuStack_70;
  if ((bRam0000000003eb5228 & 1) == 0) {
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb5228 = 1;
  }
  puStack_c8 = &UNK_015aa6a0;
  if ((bRam0000000003eb522e & 1) == 0) {
    func_0x00f78a20(0x3d3b9d0);
    func_0x00f78a20(0x3d3b898);
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb522e = 1;
  }
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar10,uRam0000000003d41088);
  if (((lVar8 != 0) && (*(long *)(lVar8 + 0x38) != 0)) &&
     (lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 200), lVar8 != 0)) {
    iVar4 = *(int *)(lVar8 + 0x18);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar10,uRam0000000003d41088);
    if (((lVar8 != 0) && (*(long *)(lVar8 + 0x38) != 0)) &&
       (lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0xd0), lVar8 != 0)) {
      iVar21 = *(int *)(lVar8 + 0x18);
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar10,uRam0000000003d41080);
      if (lVar8 != 0) {
        /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetWeaponIndicatorActive*/ func_0x015adeac(lVar8,0 < iVar21 + iVar4,0);
        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar10,uRam0000000003d41080);
        lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar10,uRam0000000003d41088);
        if (((lVar11 != 0) && (*(long *)(lVar11 + 0x38) != 0)) &&
           (lStack_108 = *(long *)(*(long *)(lVar11 + 0x38) + 200), lVar8 != 0)) {
          /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetCulturePodWeaponIndicatorArrows*/ func_0x015adf10(lVar8,&lStack_108,0);
          lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar10,uRam0000000003d41080);
          lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar10,uRam0000000003d41088);
          if (((lVar11 != 0) && (*(long *)(lVar11 + 0x38) != 0)) &&
             (plStack_110 = *(long **)(*(long *)(lVar11 + 0x38) + 0xd0), lVar8 != 0)) {
            /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetSheldonWeaponIndicatorArrows*/ func_0x015ae03c(lVar8,&plStack_110,0);
            return;
          }
        }
      }
    }
  }
  lVar8 = func_0x00f78af4();
  puStack_118 = &Atlas_UI_Screens_GameInProgressScreen__UpdateKartIndicator;
  uStack_128 = uVar10;
  ppppppuStack_120 = &ppppppuStack_d0;
  if ((bRam0000000003eb5230 & 1) == 0) {
    func_0x00f78a20(0x3d33450);
    func_0x00f78a20(0x3d33458);
    func_0x00f78a20(0x3d33460);
    func_0x00f78a20(0x3d3d1c8);
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    func_0x00f78a20(0x3d41090);
    bRam0000000003eb5230 = 1;
  }
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  lStack_1c0 = 0;
  fStack_1d8 = 0.0;
  uStack_1e0 = 0;
  fStack_1e8 = 0.0;
  uStack_1f0 = 0;
  fStack_1f8 = 0.0;
  uStack_208 = 0;
  uStack_200 = 0;
  uStack_210 = 0;
  iStack_214 = 0;
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (((lVar11 == 0) || (*(long *)(lVar11 + 0x1c0) == 0)) ||
     (lVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar11 + 0x1c0),0), lVar11 == 0)) goto code_r0x015ab4c4;
  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar11,*(char *)(lVar8 + 0x109) == '\0',0);
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (((lVar11 == 0) || (*(long *)(lVar11 + 0x1c0) == 0)) ||
     (lVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar11 + 0x1c0),0), lVar11 == 0)) goto code_r0x015ab4c4;
  iVar4 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar11,0);
  if (iVar4 == 0) {
    return;
  }
  *(undefined1 *)(lVar8 + 0x9c) = 0;
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar8,uRam0000000003d41090);
  if ((lVar11 == 0) || (*(long *)(lVar11 + 0x40) == 0)) goto code_r0x015ab4c4;
  lVar11 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(lVar11 + 0x40),0);
  if (*(long *)(lVar8 + 0x78) == 0) {
code_r0x015aaa34:
    lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar8,uRam0000000003d41088);
    if ((lVar14 == 0) || (*(long *)(lVar14 + 0x38) == 0)) goto code_r0x015ab4c4;
    if (*(int *)(*(long *)(lVar14 + 0x38) + 0x74) == 1) {
      *(undefined8 *)(lVar8 + 0x78) = *(undefined8 *)(lVar8 + 0x80);
    }
  }
  else {
    lVar14 = *(long *)(*(long *)(lVar8 + 0x78) + 0x10);
    if (lVar14 == 0) goto code_r0x015ab4c4;
    if (*(int *)(lVar14 + 0x74) != 1) goto code_r0x015aaa34;
  }
  lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (lVar14 == 0) {
code_r0x015ab4c4:
    func_0x00f78af4();
code_r0x015ab4c8:
    uVar9 = func_0x00f78b24();
    func_0x00f78ac0(uVar9,0);
    __Unwind_Resume();
code_r0x015ab4d8:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x15ab4dc);
    (*pcVar1)();
  }
  iVar21 = 0;
  iVar4 = 0;
  iStack_244 = 0;
  uVar20 = 0;
code_r0x015aaa94:
  if (*(long *)(lVar14 + 0x1c8) == 0) goto code_r0x015ab4c4;
  if (*(int *)(*(long *)(lVar14 + 0x1c8) + 0x18) <= (int)uVar20) {
    return;
  }
  if (*(int *)(lVar8 + 0xbc) <= iStack_244) {
    return;
  }
  lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x1c8), lVar14 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar14 + 0x18) <= uVar20) goto code_r0x015ab4c8;
  lVar17 = (long)(int)uVar20;
  lVar14 = *(long *)(lVar14 + lVar17 * 8 + 0x20);
  if (lVar14 == 0) goto code_r0x015ab4c4;
  if (*(long *)(lVar14 + 0x80) == 0) {
    bVar3 = false;
  }
  else {
    lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
    if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x1c8), lVar14 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar14 + 0x18) <= uVar20) goto code_r0x015ab4c8;
    lVar14 = *(long *)(lVar14 + lVar17 * 8 + 0x20);
    if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x80), lVar14 == 0)) goto code_r0x015ab4c4;
    bVar3 = *(int *)(lVar14 + 0x74) == 1;
  }
  lVar14 = *(long *)(lVar8 + 0x78);
  if ((bool)(bVar3 & lVar14 == 0)) {
    if (*(long *)(lVar8 + 0x70) == 0) goto code_r0x015ab4c4;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_240,*(long *)(lVar8 + 0x70),uRam0000000003d3d1c8);
    uStack_1c8 = uStack_238;
    uStack_1d0 = uStack_240;
    lStack_1c0 = lStack_230;
    do {
      uVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_1d0,uRam0000000003d33458);
      lVar14 = lStack_1c0;
      if ((uVar12 & 1) == 0) goto code_r0x015aabdc;
      if (lStack_1c0 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar19 = *(long *)(lStack_1c0 + 0x10);
      lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if (lVar13 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar13 = *(long *)(lVar13 + 0x1c8);
      if (lVar13 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      if (*(uint *)(lVar13 + 0x18) <= uVar20) {
        uVar9 = func_0x00f78b24();
        func_0x00f78ac0(uVar9,0);
        goto code_r0x015ab4d8;
      }
      lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
      if (lVar13 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
    } while (lVar19 != *(long *)(lVar13 + 0x80));
    *(long *)(lVar8 + 0x78) = lVar14;
code_r0x015aabdc:
    aiStack_228[iVar4] = 0x132;
    iVar21 = iStack_214;
    iVar4 = iStack_214 + 1;
    iStack_214 = iVar4;
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_1d0,uRam0000000003d33450);
    if ((iVar4 != 0) && (aiStack_228[iVar21] == 0x132)) {
      iStack_214 = iVar21;
      iVar4 = iVar21;
    }
    lVar14 = *(long *)(lVar8 + 0x78);
    iVar21 = iVar4;
  }
  if (lVar14 == 0) {
code_r0x015aac8c:
    uVar9 = 0;
    cVar18 = '\0';
  }
  else {
    lVar13 = *(long *)(lVar14 + 0x10);
    lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
    if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x1c8), lVar14 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar14 + 0x18) <= uVar20) goto code_r0x015ab4c8;
    lVar14 = *(long *)(lVar14 + lVar17 * 8 + 0x20);
    if (lVar14 == 0) goto code_r0x015ab4c4;
    if (!(bool)(bVar3 & lVar13 == *(long *)(lVar14 + 0x80))) goto code_r0x015aac8c;
    cVar18 = *(char *)(lVar8 + 0xb8);
    uVar9 = 1;
  }
  lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x1c8), lVar14 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar14 + 0x18) <= uVar20) goto code_r0x015ab4c8;
  lVar14 = *(long *)(lVar14 + lVar17 * 8 + 0x20);
  if (lVar14 == 0) goto code_r0x015ab4c4;
  if (*(long *)(lVar14 + 0x80) != 0) {
    lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
    if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x1c8), lVar14 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar14 + 0x18) <= uVar20) goto code_r0x015ab4c8;
    lVar14 = *(long *)(lVar14 + lVar17 * 8 + 0x20);
    if (lVar14 == 0) goto code_r0x015ab4c4;
    iVar5 = /*Atlas.UI.KartIndicatorBehaviour$$get_CanUpdateTarget*/ func_0x015cc628(lVar14,0);
    fVar31 = (float)param_3;
    fVar30 = (float)param_2;
    if ((iVar5 != 0) && (*(char *)(lVar8 + 0xb8) == '\0')) goto code_r0x015aaf94;
    lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
    if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x1c8), lVar14 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar14 + 0x18) <= uVar20) goto code_r0x015ab4c8;
    lVar14 = *(long *)(lVar14 + lVar17 * 8 + 0x20);
    if ((((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x80), lVar14 == 0)) ||
        (lVar14 = *(long *)(lVar14 + 0x10), lVar14 == 0)) ||
       (lVar14 = *(long *)(lVar14 + 0x18), lVar14 == 0)) goto code_r0x015ab4c4;
    fVar22 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar14,0);
    uStack_1e0 = CONCAT44(fVar30,fVar22);
    fVar24 = fVar30;
    fVar28 = fVar31;
    fStack_1d8 = fVar31;
    lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar8,uRam0000000003d41088);
    if (((lVar14 == 0) || (*(long *)(lVar14 + 0x38) == 0)) ||
       ((lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10), lVar14 == 0 ||
        (lVar14 = *(long *)(lVar14 + 0x18), lVar14 == 0)))) goto code_r0x015ab4c4;
    fVar23 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar14,0);
    uStack_1f0 = CONCAT44(fVar24,fVar23);
    fStack_1f8 = fVar31 - fVar28;
    param_3 = (ulong)(uint)fStack_1f8;
    uStack_200 = CONCAT44(fVar30 - fVar24,fVar22 - fVar23);
    fStack_1e8 = fVar28;
    if (cVar18 != '\0') {
      if (lVar11 == 0) goto code_r0x015ab4c4;
code_r0x015aadd4:
      uVar32 = (ulong)(uint)(fVar31 + *(float *)(lVar8 + 0xa8));
      param_4 = *(float *)(lVar8 + 0xa0);
      uVar12 = (ulong)(uint)(fVar30 + *(float *)(lVar8 + 0xa4));
      fVar24 = (float)/*UnityEngine.Camera$$WorldToViewportPoint*/ func_0x0321fe94(fVar22 + param_4,lVar11,0);
      fVar30 = (float)uVar12;
      fVar31 = (float)uVar32;
      if (cVar18 == '\0') {
        bVar3 = false;
        bVar2 = true;
        if (0.0 <= fVar24) {
          bVar3 = false;
          bVar2 = true;
          if (!NAN(fVar24)) {
            bVar3 = fVar24 == 1.0;
            bVar2 = 1.0 <= fVar24;
          }
        }
        param_2 = uVar12;
        param_3 = uVar32;
        if (!bVar2 || bVar3) {
          bVar3 = false;
          bVar2 = true;
          if (0.0 <= fVar30) {
            bVar3 = false;
            bVar2 = true;
            if (!NAN(fVar30)) {
              bVar3 = fVar30 == 1.0;
              bVar2 = 1.0 <= fVar30;
            }
          }
          if ((!bVar2 || bVar3) && (0.0 <= fVar31)) {
            iVar5 = /*Atlas.UI.Screens.GameInProgressScreen$$CanSeeTarget*/ func_0x015ab70c(lVar8,&uStack_1f0,&uStack_1e0,1,1);
            fVar30 = (float)param_2;
            fVar31 = (float)param_3;
            if (iVar5 != 0) goto code_r0x015aae04;
          }
        }
        goto code_r0x015aaf94;
      }
code_r0x015aae04:
      lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x1c8), lVar14 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar14 + 0x18) <= uVar20) goto code_r0x015ab4c8;
      lVar13 = *(long *)(lVar14 + lVar17 * 8 + 0x20);
      lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if ((lVar14 == 0) || (*(long *)(lVar14 + 0x1c0) == 0)) goto code_r0x015ab4c4;
      uVar25 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar14 + 0x1c0),0);
      uStack_210 = CONCAT44(fVar30,uVar25);
      uStack_208 = CONCAT44(param_4,fVar31);
      param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_210,0);
      if (lVar13 == 0) goto code_r0x015ab4c4;
      param_2 = uVar12 & 0xffffffff;
      param_3 = uVar32 & 0xffffffff;
      /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(fVar24,lVar13,0);
      lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x1c8), lVar14 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar14 + 0x18) <= uVar20) goto code_r0x015ab4c8;
      lVar14 = *(long *)(lVar14 + lVar17 * 8 + 0x20);
      if (lVar14 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar14,uVar9,*(undefined1 *)(lVar8 + 0xb8),0);
      if (*(char *)(lVar8 + 0xb8) != '\0') {
        lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
        if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x1c8), lVar14 == 0))
        goto code_r0x015ab4c4;
        if (*(uint *)(lVar14 + 0x18) <= uVar20) goto code_r0x015ab4c8;
        lVar14 = *(long *)(lVar14 + lVar17 * 8 + 0x20);
        if (lVar14 == 0) goto code_r0x015ab4c4;
        *(undefined4 *)(lVar14 + 0x88) = *(undefined4 *)(lVar8 + 0x98);
      }
      iStack_244 = iStack_244 + 1;
      goto code_r0x015ab2c0;
    }
    fVar24 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_200,0);
    fVar28 = *(float *)(lVar8 + 0x8c);
    param_2 = (ulong)(uint)fVar28;
    if (fVar28 <= fVar24) goto code_r0x015aaf94;
    fVar24 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_200,0);
    if (lVar11 == 0) goto code_r0x015ab4c4;
    fVar23 = (float)param_3;
    fVar29 = fVar28;
    lVar14 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar11,0);
    if (lVar14 == 0) goto code_r0x015ab4c4;
    fVar26 = (float)/*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar14,0);
    param_2 = (ulong)(uint)*(float *)(lVar8 + 0x94);
    if (*(float *)(lVar8 + 0x94) < fVar23 * (float)param_3 + fVar24 * fVar26 + fVar28 * fVar29)
    goto code_r0x015aadd4;
  }
code_r0x015aaf94:
  lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x1c8), lVar14 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar14 + 0x18) <= uVar20) goto code_r0x015ab4c8;
  lVar14 = *(long *)(lVar14 + lVar17 * 8 + 0x20);
  if (lVar14 == 0) goto code_r0x015ab4c4;
  if (*(long *)(lVar14 + 0x80) != 0) {
    lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
    if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x1c8), lVar14 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar14 + 0x18) <= uVar20) goto code_r0x015ab4c8;
    lVar14 = *(long *)(lVar14 + lVar17 * 8 + 0x20);
    if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x80), lVar14 == 0)) goto code_r0x015ab4c4;
    *(undefined1 *)(lVar14 + 0x9c) = 0;
  }
  if (*(char *)(lVar8 + 0x9c) == '\0') {
    if (*(char *)(lVar8 + 0xb8) == '\0') {
      /*Atlas.UI.Screens.GameInProgressScreen$$UpdateAllKartIndicatorDataRace*/ func_0x015abdd0(lVar8);
    }
    else {
      /*Atlas.UI.Screens.GameInProgressScreen$$UpdateAllKartIndicatorDataBattle*/ func_0x015ab8c0(lVar8);
    }
  }
  if (*(char *)(lVar8 + 0x10a) == '\0') {
    cVar18 = *(char *)(lVar8 + 0xb8);
  }
  else {
    cVar18 = '\0';
  }
  if (*(long *)(lVar8 + 0x70) == 0) goto code_r0x015ab4c4;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_240,*(long *)(lVar8 + 0x70),uRam0000000003d3d1c8);
  uStack_1c8 = uStack_238;
  uStack_1d0 = uStack_240;
  lStack_1c0 = lStack_230;
  do {
    do {
      uVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_1d0,uRam0000000003d33458);
      lVar14 = lStack_1c0;
      uVar25 = (undefined4)param_3;
      if ((uVar12 & 1) == 0) {
code_r0x015ab1e8:
        bVar3 = false;
        goto code_r0x015ab1ec;
      }
      if (lStack_1c0 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      fVar30 = *(float *)(lVar8 + 0x8c);
      param_2 = (ulong)(uint)fVar30;
      if ((fVar30 < *(float *)(lStack_1c0 + 0x18)) && (lStack_1c0 != *(long *)(lVar8 + 0x78)))
      goto code_r0x015ab1e8;
    } while (*(char *)(lStack_1c0 + 0x28) == '\0');
    lVar13 = *(long *)(lStack_1c0 + 0x10);
    if (lVar13 == 0) {
      func_0x00f78af4();
      goto code_r0x015ab4d8;
    }
  } while (*(char *)(lVar13 + 0x9c) != '\0');
  *(undefined1 *)(lVar13 + 0x9c) = 1;
  lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (lVar13 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar13 = *(long *)(lVar13 + 0x1c8);
  if (lVar13 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar13 + 0x18) <= uVar20) {
    uVar9 = func_0x00f78b24();
    func_0x00f78ac0(uVar9,0);
    goto code_r0x015ab4d8;
  }
  lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
  if (lVar13 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(*(undefined4 *)(lVar8 + 0x98),lVar13,*(undefined8 *)(lVar14 + 0x10),cVar18 != '\0'
                  ,0);
  lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (lVar13 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar13 = *(long *)(lVar13 + 0x1c8);
  if (lVar13 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar13 + 0x18) <= uVar20) {
    uVar9 = func_0x00f78b24();
    func_0x00f78ac0(uVar9,0);
    goto code_r0x015ab4d8;
  }
  lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
  uVar33 = *(undefined4 *)(lVar14 + 0x1c);
  uVar34 = *(uint *)(lVar14 + 0x20);
  uVar35 = *(uint *)(lVar14 + 0x24);
  lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (lVar14 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(long *)(lVar14 + 0x1c0) == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  uVar27 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar14 + 0x1c0),0);
  uStack_210 = CONCAT44(fVar30,uVar27);
  uStack_208 = CONCAT44(param_4,uVar25);
  param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_210,0);
  if (lVar13 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  param_2 = (ulong)uVar34;
  param_3 = (ulong)uVar35;
  /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(uVar33,lVar13,0);
  lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (lVar14 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar14 = *(long *)(lVar14 + 0x1c8);
  if (lVar14 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar14 + 0x18) <= uVar20) {
    uVar9 = func_0x00f78b24();
    func_0x00f78ac0(uVar9,0);
    goto code_r0x015ab4d8;
  }
  lVar14 = *(long *)(lVar14 + lVar17 * 8 + 0x20);
  if (lVar14 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar14,uVar9,*(undefined1 *)(lVar8 + 0xb8),0);
  iStack_244 = iStack_244 + 1;
  bVar3 = true;
code_r0x015ab1ec:
  aiStack_228[iVar21] = 0x41c;
  iVar4 = iStack_214;
  iVar21 = iStack_214 + 1;
  iStack_214 = iVar21;
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_1d0,uRam0000000003d33450);
  if ((iVar21 != 0) && (aiStack_228[iVar4] == 0x41c)) {
    iStack_214 = iVar4;
    iVar21 = iVar4;
  }
  iVar4 = iVar21;
  if (!bVar3) {
    lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
    if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x1c8), lVar14 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar14 + 0x18) <= uVar20) goto code_r0x015ab4c8;
    lVar14 = *(long *)(lVar14 + lVar17 * 8 + 0x20);
    if (lVar14 == 0) goto code_r0x015ab4c4;
    if (*(long *)(lVar14 + 0x80) != 0) {
      lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x1c8), lVar14 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar14 + 0x18) <= uVar20) goto code_r0x015ab4c8;
      lVar14 = *(long *)(lVar14 + lVar17 * 8 + 0x20);
      if (lVar14 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(0,lVar14,0,cVar18 != '\0',0);
    }
  }
code_r0x015ab2c0:
  uVar20 = uVar20 + 1;
  lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (lVar14 == 0) goto code_r0x015ab4c4;
  goto code_r0x015aaa94;
joined_r0x014d2b68:
  if (plVar16 != (long *)0x0) {
    lVar14 = *plVar16;
    uVar12 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar12 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
          goto code_r0x014d2bc0;
        }
        piVar15 = piVar15 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    param_7 = 0;
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar16);
code_r0x014d2bc0:
    (*(code *)*puVar6)(plVar16,puVar6[1]);
  }
  if (lVar11 == 0) {
    if (*(long *)(lVar8 + 0x20) == 0) goto code_r0x014d2c78;
    plVar16 = (long *)/*Core.StateManagement.StateMachine$$get_ActiveState*/ func_0x02b95214(*(long *)(lVar8 + 0x20),0);
    if (plVar16 != (long *)0x0) {
      if (*(byte *)(/*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10 + 300) <= *(byte *)(*plVar16 + 300)) {
        if (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10 + 300) * 8 +
                     -8) != /*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10) {
          plVar16 = (long *)0x0;
        }
        if (plVar16 != (long *)0x0) {
          if (*(long *)(lVar8 + 0x40) == 0) goto code_r0x014d2c78;
          /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetLocalGameContextPlayer*/ func_0x01599b24(*(long *)(lVar8 + 0x40),0);
          Atlas_Contexts_GameContextBaseInProgressState__NotifyGameContextFinished(plVar16,0);
        }
      }
    }
    return;
  }
  func_0x00f78ac0(lVar11,0);
  if (extraout_w1 != 1) {
    auVar36 = __Unwind_Resume();
    ppppppuStack_120 = (undefined8 ******)0x3d1d260;
    puStack_118 = (undefined *)0x3d22180;
    plStack_110 = unaff_x22;
    lStack_108 = lVar11;
    if ((bRam0000000003eb4b95 & 1) == 0) {
      func_0x00f78a20(0x3d21b08);
      bRam0000000003eb4b95 = 1;
    }
    uStack_128 = 0;
    if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = Atlas_Contexts_GameContextBase__TryGetKartCompositeFromCollider
                      (auVar36._8_8_,&uStack_128,0);
    if (iVar4 != 0) {
      lVar8 = *(long *)(auVar36._0_8_ + 0x18);
      if (lVar8 == 0) {
        lVar8 = func_0x00f78af4();
        if ((bRam0000000003eb4b96 & 1) == 0) {
          func_0x00f78a20(0x3d21b08);
          bRam0000000003eb4b96 = 1;
        }
        if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        *(undefined1 *)(lVar8 + 0x249) = 1;
        *(undefined1 *)(lVar8 + 0x10) = 1;
        return;
      }
      /*Atlas.Stats.AtlasStats$$OnKartEnterShortcut*/ func_0x0146f188(lVar8,uStack_128,param_7,0);
    }
    return;
  }
  plVar7 = (long *)___cxa_begin_catch();
  lVar11 = *plVar7;
  ___cxa_end_catch();
  goto joined_r0x014d2b68;
}



// ============================================================
// RVA: 0x14d2918 | Atlas.Contexts.RaceGameContext.OnEventTimeExceeded
// ============================================================

void Atlas_Contexts_RaceGameContext__OnEventTimeExceeded
               (long param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  int extraout_w1;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long *unaff_x22;
  undefined1 auVar10 [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  long lStack_e8;
  long *plStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb4b94 & 1) == 0) {
    func_0x00f78a20(0x3d21b10);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d0a0);
    func_0x00f78a20(0x3d1d260);
    func_0x00f78a20(0x3d22180);
    bRam0000000003eb4b94 = 1;
  }
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if ((*(long *)(param_1 + 0x40) == 0) ||
     (plVar9 = *(long **)(*(long *)(param_1 + 0x40) + 0x28), plVar9 == (long *)0x0)) {
LAB_014d2c78:
    func_0x00f78af4();
  }
  else {
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == /*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_014d29f0;
        }
        piVar8 = piVar8 + 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    param_3 = 0;
    puVar3 = (undefined8 *)func_0x00fac1f0(plVar9);
LAB_014d29f0:
    plVar9 = (long *)(*(code *)*puVar3)(plVar9,puVar3[1]);
    if (plVar9 != (long *)0x0) {
code_r0x014d2a14:
      lVar5 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto code_r0x014d2a60;
          }
          piVar8 = piVar8 + 4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      param_3 = 0;
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar9);
code_r0x014d2a60:
      uVar7 = (*(code *)*puVar3)(plVar9,puVar3[1]);
      if ((uVar7 & 1) == 0) {
        lVar5 = 0;
        goto joined_r0x014d2b68;
      }
      lVar5 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == /*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto code_r0x014d2abc;
          }
          piVar8 = piVar8 + 4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      param_3 = 0;
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar9);
code_r0x014d2abc:
      lVar5 = (*(code *)*puVar3)(plVar9,puVar3[1]);
      if (lVar5 == 0) {
        func_0x00f78af4();
        goto code_r0x014d2c80;
      }
      lVar6 = *(long *)(lVar5 + 0x10);
      if (lVar6 != 0) {
        uStack_98 = *(undefined8 *)(lVar6 + 0x50);
        uStack_a0 = *(undefined8 *)(lVar6 + 0x48);
        uStack_88 = *(undefined8 *)(lVar6 + 0x60);
        uStack_90 = *(undefined8 *)(lVar6 + 0x58);
        uVar7 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&uStack_a0,0);
        if (((uVar7 & 1) != 0) && (*(char *)(lVar5 + 0x98) == '\0')) {
          if (*(long *)(param_1 + 600) == 0) {
            func_0x00f78af4();
            goto code_r0x014d2c80;
          }
          lVar6 = *(long *)(lVar5 + 0x10);
          if (lVar6 == 0) {
            func_0x00f78af4();
            goto code_r0x014d2c80;
          }
          unaff_x22 = *(long **)(*(long *)(param_1 + 600) + 0x20);
          uStack_b8 = *(undefined8 *)(lVar6 + 0x50);
          uStack_c0 = *(undefined8 *)(lVar6 + 0x48);
          uStack_a8 = *(undefined8 *)(lVar6 + 0x60);
          uStack_b0 = *(undefined8 *)(lVar6 + 0x58);
          /*Atlas.Gameplay.Player.GameContextPlayer$$GetRaceProgress*/ func_0x015a569c(lVar5,0);
          if (unaff_x22 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014d2c80;
          }
          param_3 = (ulong)*(uint *)(lVar5 + 0x78);
          uStack_58 = uStack_b8;
          uStack_60 = uStack_c0;
          uStack_48 = uStack_a8;
          uStack_50 = uStack_b0;
          uStack_70 = 0;
          uStack_68 = 0;
          uStack_78 = 0;
          (**(code **)(*unaff_x22 + 0x248))
                    (unaff_x22,&uStack_60,param_3,1,&uStack_78,*(undefined8 *)(*unaff_x22 + 0x250));
        }
        goto code_r0x014d2a14;
      }
      func_0x00f78af4();
      goto code_r0x014d2c80;
    }
  }
  func_0x00f78af4();
code_r0x014d2c80:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14d2c84);
  (*pcVar1)();
joined_r0x014d2b68:
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto code_r0x014d2bc0;
        }
        piVar8 = piVar8 + 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    param_3 = 0;
    puVar3 = (undefined8 *)func_0x00fac1f0(plVar9);
code_r0x014d2bc0:
    (*(code *)*puVar3)(plVar9,puVar3[1]);
  }
  if (lVar5 == 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_014d2c78;
    plVar9 = (long *)/*Core.StateManagement.StateMachine$$get_ActiveState*/ func_0x02b95214(*(long *)(param_1 + 0x20),0);
    if (plVar9 != (long *)0x0) {
      if (*(byte *)(/*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10 + 300) <= *(byte *)(*plVar9 + 300)) {
        if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10 + 300) * 8 +
                     -8) != /*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10) {
          plVar9 = (long *)0x0;
        }
        if (plVar9 != (long *)0x0) {
          if (*(long *)(param_1 + 0x40) == 0) goto LAB_014d2c78;
          /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetLocalGameContextPlayer*/ func_0x01599b24(*(long *)(param_1 + 0x40),0);
          Atlas_Contexts_GameContextBaseInProgressState__NotifyGameContextFinished(plVar9,0);
        }
      }
    }
    return;
  }
  func_0x00f78ac0(lVar5,0);
  if (extraout_w1 != 1) {
    auVar10 = __Unwind_Resume();
    uStack_100 = 0x3d1d260;
    uStack_f8 = 0x3d22180;
    puStack_c8 = &Atlas_Contexts_RaceGameContext__OnEnterShortCut;
    plStack_f0 = unaff_x22;
    lStack_e8 = lVar5;
    plStack_e0 = plVar9;
    lStack_d8 = param_1;
    puStack_d0 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb4b95 & 1) == 0) {
      func_0x00f78a20(0x3d21b08);
      bRam0000000003eb4b95 = 1;
    }
    uStack_108 = 0;
    if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = Atlas_Contexts_GameContextBase__TryGetKartCompositeFromCollider
                      (auVar10._8_8_,&uStack_108,0);
    if (iVar2 != 0) {
      lVar5 = *(long *)(auVar10._0_8_ + 0x18);
      if (lVar5 == 0) {
        lVar5 = func_0x00f78af4();
        if ((bRam0000000003eb4b96 & 1) == 0) {
          func_0x00f78a20(0x3d21b08);
          bRam0000000003eb4b96 = 1;
        }
        if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        *(undefined1 *)(lVar5 + 0x249) = 1;
        *(undefined1 *)(lVar5 + 0x10) = 1;
        return;
      }
      /*Atlas.Stats.AtlasStats$$OnKartEnterShortcut*/ func_0x0146f188(lVar5,uStack_108,param_3,0);
    }
    return;
  }
  plVar4 = (long *)___cxa_begin_catch();
  lVar5 = *plVar4;
  ___cxa_end_catch();
  goto joined_r0x014d2b68;
}



// ============================================================
// RVA: 0x14d2cd8 | Atlas.Contexts.RaceGameContext.OnEnterShortCut
// ============================================================

void Atlas_Contexts_RaceGameContext__OnEnterShortCut
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb4b95 & 1) == 0) {
    func_0x00f78a20(0x3d21b08);
    bRam0000000003eb4b95 = 1;
  }
  uStack_48 = 0;
  if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = Atlas_Contexts_GameContextBase__TryGetKartCompositeFromCollider(param_2,&uStack_48,0);
  if (iVar1 != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      lVar2 = func_0x00f78af4();
      if ((bRam0000000003eb4b96 & 1) == 0) {
        func_0x00f78a20(0x3d21b08);
        bRam0000000003eb4b96 = 1;
      }
      if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined1 *)(lVar2 + 0x249) = 1;
      *(undefined1 *)(lVar2 + 0x10) = 1;
      return;
    }
    /*Atlas.Stats.AtlasStats$$OnKartEnterShortcut*/ func_0x0146f188(*(long *)(param_1 + 0x18),uStack_48,param_3,0);
  }
  return;
}



// ============================================================
// RVA: 0x14d2d88 | Atlas.Contexts.RaceGameContext..ctor
// ============================================================

void Atlas_Contexts_RaceGameContext___ctor(long param_1)

{
  if ((bRam0000000003eb4b96 & 1) == 0) {
    func_0x00f78a20(0x3d21b08);
    bRam0000000003eb4b96 = 1;
  }
  if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined1 *)(param_1 + 0x249) = 1;
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



// ============================================================
// RVA: 0x14d2df4 | Atlas.Contexts.RaceGameContext.<>n__0
// ============================================================

long Atlas_Contexts_RaceGameContext____n__0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if ((bRam0000000003eb519d & 1) == 0) {
    func_0x00f78a20(0x3d276e0,param_2,param_3,0);
    bRam0000000003eb519d = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.Contexts.GameContextBase.<OnInit>d__125_TypeInfo*/ uRam0000000003d276e0);
  Atlas_Contexts_GameContextBase__OnInit_d__125___ctor(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    *(undefined8 *)(lVar1 + 0x28) = param_2;
    *(undefined8 *)(lVar1 + 0x30) = param_3;
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  return *(long *)(lVar1 + 0x198);
}



// ============================================================
// RVA: 0x14d2dfc | Atlas.Contexts.RaceGameContext.<>n__1
// ============================================================

long Atlas_Contexts_RaceGameContext____n__1(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  if ((bRam0000000003eb51a2 & 1) == 0) {
    func_0x00f78a20(0x3d276d8,0);
    bRam0000000003eb51a2 = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.Contexts.GameContextBase.<OnDeInit>d__132_TypeInfo*/ uRam0000000003d276d8);
  Atlas_Contexts_GameContextBase__OnDeInit_d__132___ctor(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x130) != 0) {
    Atlas_Gameplay_Kart_KartManager__DeInit(*(long *)(lVar1 + 0x130),0);
  }
  if (*(long *)(lVar1 + 0x1f8) != 0) {
    /*Atlas.Lighting.LightWorld$$DeInit*/ func_0x01484d78(*(long *)(lVar1 + 0x1f8),0);
  }
  *(undefined8 *)(lVar1 + 0x1d8) = 0;
  if (*(long *)(lVar1 + 0x150) != 0) {
    /*Atlas.Audio.AtlasAudioManager$$SetAudioMapBehaviour*/ func_0x01458758(*(long *)(lVar1 + 0x150),0,0);
  }
  if (*(long *)(lVar1 + 0x208) != 0) {
    /*Atlas.Gameplay.VfxHitVolumeManager$$DeInit*/ func_0x01527f1c(*(long *)(lVar1 + 0x208),0);
  }
  *(undefined8 *)(lVar1 + 0x208) = 0;
  lVar2 = 0;
  if (*(long *)(lVar1 + 0x1d0) != 0) {
    lVar2 = /*Atlas.Maps.MapBehaviour$$DeInit*/ func_0x0148d2ec(*(long *)(lVar1 + 0x1d0),0);
  }
  *(undefined8 *)(lVar1 + 0x1d0) = 0;
  *(undefined8 *)(lVar1 + 0x1e0) = 0;
  return lVar2;
}



