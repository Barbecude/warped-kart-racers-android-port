// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.BattleGameContext

// ============================================================
// RVA: 0x1539ce0 | Atlas.Contexts.BattleGameContext.GetContextName
// ============================================================

undefined8 Atlas_Contexts_BattleGameContext__GetContextName(void)

{
  if ((bRam0000000003eb4eff & 1) == 0) {
    func_0x00f78a20(0x3d69658);
    bRam0000000003eb4eff = 1;
  }
  return /*STR('BattleGameContext')*/ uRam0000000003d69658;
}



// ============================================================
// RVA: 0x1539d24 | Atlas.Contexts.BattleGameContext.set_AllowFrenzy
// ============================================================

void Atlas_Contexts_BattleGameContext__set_AllowFrenzy(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x260) = param_2;
  return;
}



// ============================================================
// RVA: 0x1539d2c | Atlas.Contexts.BattleGameContext.get_ScorePerHit
// ============================================================

undefined4 Atlas_Contexts_BattleGameContext__get_ScorePerHit(long param_1)

{
  if (*(char *)(param_1 + 0x26c) != '\0') {
    return *(undefined4 *)(param_1 + 0x264);
  }
  return 1;
}



// ============================================================
// RVA: 0x1539d44 | Atlas.Contexts.BattleGameContext.OnInit
// ============================================================

/* WARNING: Possible PIC construction at 0x0153a154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153a714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015aa69c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ae374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153a248: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0153a718) */
/* WARNING: Removing unreachable block (ram,0x0153a158) */
/* WARNING: Removing unreachable block (ram,0x0153a16c) */
/* WARNING: Removing unreachable block (ram,0x0153a17c) */
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

long * Atlas_Contexts_BattleGameContext__OnInit
                 (undefined1 param_1 [16],ulong param_2,float param_3,float param_4,long param_5,
                 long param_6,long param_7)

{
  code *pcVar1;
  long *plVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  int extraout_w1;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  undefined8 uVar21;
  long lVar22;
  char cVar23;
  undefined8 *puVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 unaff_x24;
  long lVar27;
  uint uVar28;
  undefined8 unaff_x25;
  int iVar29;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar30;
  undefined *puVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 unaff_d8;
  uint uVar41;
  undefined8 unaff_d9;
  float fVar42;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined1 auVar43 [16];
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_230;
  undefined4 uStack_228;
  long lStack_224;
  undefined8 uStack_21c;
  undefined4 uStack_214;
  undefined8 uStack_210;
  ulong uStack_208;
  undefined8 *puStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  undefined8 *******pppppppuStack_1e0;
  undefined *puStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 ******ppppppuStack_a0;
  undefined *puStack_98;
  undefined8 *****pppppuStack_50;
  undefined *puStack_48;
  
  uVar25 = 0x3d26ae0;
  if ((bRam0000000003eb4f00 & 1) == 0) {
    func_0x00f78a20(0x3d26ae0);
    bRam0000000003eb4f00 = 1;
  }
  plVar7 = (long *)func_0x00f78aec(/*Atlas.Contexts.BattleGameContext.<OnInit>d__13_TypeInfo*/ uRam0000000003d26ae0);
  /*Atlas.Contexts.BattleGameContext.<OnInit>d__13$$.ctor*/ func_0x015471f0(plVar7,0,0);
  if (plVar7 != (long *)0x0) {
    plVar7[4] = param_5;
    plVar7[5] = param_6;
    plVar7[6] = param_7;
    return plVar7;
  }
  lVar8 = func_0x00f78af4();
  puStack_48 = &Atlas_Contexts_BattleGameContext__OnDeInit;
  uVar21 = 0x3eb4000;
  pppppuStack_50 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4f01 & 1) == 0) {
    func_0x00f78a20(0x3d2a4a8);
    func_0x00f78a20(0x3d1b668);
    func_0x00f78a20(0x3d52848);
    bRam0000000003eb4f01 = 1;
  }
  puVar24 = (undefined8 *)0x0;
  if (((*(long *)(lVar8 + 600) == 0) ||
      (lVar18 = *(long *)(*(long *)(lVar8 + 600) + 0x20), lVar18 == 0)) ||
     (puVar24 = *(undefined8 **)(lVar18 + 0x10), puVar24 == (undefined8 *)0x0)) {
    func_0x00f78af4();
  }
  else {
    uVar25 = 0x3d1b668;
    unaff_x24 = 0x3d52000;
    unaff_x25 = 0x3d2a000;
    uVar21 = puVar24[0x14];
    param_5 = func_0x00f78aec(/*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668);
    /*System.Action<NetworkSessionTime, uint>$$.ctor*/ func_0x01e6d100(param_5,lVar8,uRam0000000003d52848,uRam0000000003d2a4a8);
    plVar7 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar21,param_5,0);
    if ((plVar7 == (long *)0x0) || (*plVar7 == /*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668)) {
      puVar24[0x14] = plVar7;
      if ((bRam0000000003eb51a2 & 1) == 0) {
        func_0x00f78a20(0x3d276d8,0);
        bRam0000000003eb51a2 = 1;
      }
      plVar7 = (long *)func_0x00f78aec(/*Atlas.Contexts.GameContextBase.<OnDeInit>d__132_TypeInfo*/ uRam0000000003d276d8);
      /*Atlas.Contexts.GameContextBase.<OnDeInit>d__132$$.ctor*/ func_0x015503c8(plVar7,0,0);
      if (plVar7 == (long *)0x0) {
        lVar8 = func_0x00f78af4();
        if (*(long *)(lVar8 + 0x130) != 0) {
          Atlas_Gameplay_Kart_KartManager__DeInit(*(long *)(lVar8 + 0x130),0);
        }
        if (*(long *)(lVar8 + 0x1f8) != 0) {
          /*Atlas.Lighting.LightWorld$$DeInit*/ func_0x01484d78(*(long *)(lVar8 + 0x1f8),0);
        }
        *(undefined8 *)(lVar8 + 0x1d8) = 0;
        if (*(long *)(lVar8 + 0x150) != 0) {
          /*Atlas.Audio.AtlasAudioManager$$SetAudioMapBehaviour*/ func_0x01458758(*(long *)(lVar8 + 0x150),0,0);
        }
        if (*(long *)(lVar8 + 0x208) != 0) {
          /*Atlas.Gameplay.VfxHitVolumeManager$$DeInit*/ func_0x01527f1c(*(long *)(lVar8 + 0x208),0);
        }
        *(undefined8 *)(lVar8 + 0x208) = 0;
        plVar7 = (long *)0x0;
        if (*(long *)(lVar8 + 0x1d0) != 0) {
          plVar7 = (long *)/*Atlas.Maps.MapBehaviour$$DeInit*/ func_0x0148d2ec(*(long *)(lVar8 + 0x1d0),0);
        }
        *(undefined8 *)(lVar8 + 0x1d0) = 0;
        *(undefined8 *)(lVar8 + 0x1e0) = 0;
        return plVar7;
      }
      plVar7[4] = lVar8;
      return plVar7;
    }
  }
  auVar43 = func_0x00f78e5c();
  plVar7 = auVar43._8_8_;
  plVar13 = auVar43._0_8_;
  plVar2 = &lStack_1d0;
  puStack_98 = &Atlas_Contexts_BattleGameContext__OnLateUpdate;
  uStack_d0 = unaff_x24;
  uStack_c8 = uVar25;
  puStack_c0 = puVar24;
  lStack_b8 = param_5;
  uStack_b0 = uVar21;
  lStack_a8 = lVar8;
  ppppppuStack_a0 = &pppppuStack_50;
  if ((bRam0000000003eb4f02 & 1) == 0) {
    func_0x00f78a20(0x3d21b10);
    func_0x00f78a20(0x3d237b8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5d980);
    bRam0000000003eb4f02 = 1;
  }
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_130 = 0;
  puVar17 = (undefined8 *)0x0;
  /*Atlas.Contexts.GameContextBase$$OnLateUpdate*/ func_0x01598b5c(plVar13,plVar7);
  plVar9 = (long *)0x3eb4000;
  if (plVar13[4] == 0) {
code_r0x0153a270:
    puVar31 = &Atlas_Contexts_BattleGameContext__FinishAi;
    plVar11 = (long *)func_0x00f78af4();
    plStack_1f8 = plVar9;
  }
  else {
    plVar9 = (long *)/*Core.StateManagement.StateMachine$$get_ActiveState*/ func_0x02b95214(plVar13[4],0);
    if (plVar9 == (long *)0x0) {
      return (long *)0x0;
    }
    if (*(byte *)(*plVar9 + 300) < *(byte *)(/*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10 + 300)) {
      return plVar9;
    }
    plVar7 = plVar9;
    if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10 + 300) * 8 + -8)
        != /*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10) {
      plVar7 = (long *)0x0;
    }
    if (plVar7 == (long *)0x0) {
      return plVar9;
    }
    if (plVar13[9] == 0) {
      return plVar9;
    }
    plVar9 = *(long **)(plVar13[9] + 0x28);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar10 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar9,0);
    if ((int)plVar10 == 0) {
      return plVar10;
    }
    if ((plVar13[0x4b] == 0) || (lVar8 = *(long *)(plVar13[0x4b] + 0x20), lVar8 == 0))
    goto code_r0x0153a270;
    puVar24 = &uStack_128;
    /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_128,lVar8,0);
    plVar9 = plVar13 + 0x4e;
    if (*(char *)((long)plVar13 + 0x274) == '\0') {
      uStack_e8 = uStack_120;
      uStack_f0 = uStack_128;
      uStack_e0 = uStack_118;
      if (plVar13[0x38] == 0) goto code_r0x0153a270;
      uVar28 = *(uint *)(plVar13[0x38] + 0xcc);
      uVar25 = (ulong)uVar28;
      if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_148 = uStack_e8;
      uStack_150 = uStack_f0;
      uStack_140 = uStack_e0;
      /*Core.Networking.NetworkSessionTime$$op_Addition*/ func_0x0165f11c(&lStack_168,&uStack_150,uVar28 * 1000,0);
      plVar13[0x4f] = lStack_160;
      *plVar9 = lStack_168;
      plVar13[0x50] = lStack_158;
    }
    uStack_e8 = uStack_120;
    uStack_f0 = uStack_128;
    uStack_e0 = uStack_118;
    lStack_108 = plVar13[0x4f];
    lStack_110 = *plVar9;
    lStack_100 = plVar13[0x50];
    if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_178 = uStack_e8;
    uStack_180 = uStack_f0;
    uStack_170 = uStack_e0;
    lStack_198 = lStack_108;
    lStack_1a0 = lStack_110;
    lStack_190 = lStack_100;
    puVar17 = (undefined8 *)0x0;
    iVar5 = /*Core.Networking.NetworkSessionTime$$op_GreaterThanOrEqual*/ func_0x0165e314(&uStack_180,&lStack_1a0);
    if ((iVar5 == 0) || ((char)plVar13[0x47] != '\0')) {
      lStack_1c8 = plVar13[0x4f];
      lStack_1d0 = *plVar9;
      lStack_1c0 = plVar13[0x50];
      puVar17 = (undefined8 *)0x0;
      iVar5 = /*Core.Networking.NetworkSessionTime$$Delta*/ func_0x0165e480(&uStack_128,&lStack_1d0);
      if (plVar13[9] != 0) {
        plVar7 = (long *)(ulong)(uint)(iVar5 / 1000);
        puVar17 = (undefined8 *)0x0;
        /*Atlas.UI.Screens.GameInProgressScreen$$SetTimerSecondsRemaining*/ func_0x015ab4dc(plVar13[9],plVar7);
        if (plVar13[0x46] == 0) {
          if (plVar13[0x4a] == 0) goto code_r0x0153a270;
          puVar17 = (undefined8 *)0x0;
          /*Atlas.Audio.AtlasAudioManager$$UpdateTimeRemaining*/ func_0x0145983c(plVar13[0x4a],plVar7);
        }
        puVar31 = &UNK_0153a158;
        plVar10 = plVar13;
        pppppppuVar30 = &ppppppuStack_a0;
        goto code_r0x0153a5a8;
      }
      goto code_r0x0153a270;
    }
    if (plVar13[4] == 0) goto code_r0x0153a270;
    puVar17 = puRam0000000003d5d980;
    iVar5 = /*Core.StateManagement.StateMachine$$TryGetState<object>*/ func_0x018e1570(plVar13[4],&uStack_130);
    if (iVar5 == 0) {
      plVar7 = (long *)/*Atlas.Contexts.GameContextBaseInProgressState$$NotifyGameContextFinished*/ func_0x0159e9f8(plVar7,0);
      return plVar7;
    }
    if ((plVar13[8] == 0) ||
       (plStack_1f8 = (long *)/*Atlas.Gameplay.Player.GameContextPlayerManager$$GetLocalGameContextPlayer*/ func_0x01599b24(plVar13[8],0), plStack_1f8 == (long *)0x0))
    goto code_r0x0153a270;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    puVar17 = (undefined8 *)0x0;
    /*Atlas.Gameplay.Player.GameContextPlayer$$OnFinishedGame*/ func_0x015a5760(plStack_1f8,&uStack_1b8);
    plVar9 = plStack_1f8;
    if ((plVar13[0x4b] == 0) ||
       ((lVar8 = plStack_1f8[2], lVar8 == 0 ||
        (plVar10 = *(long **)(plVar13[0x4b] + 0x20), plVar10 == (long *)0x0))))
    goto code_r0x0153a270;
    puVar17 = (undefined8 *)(ulong)*(uint *)(plStack_1f8 + 0xf);
    uStack_e8 = *(undefined8 *)(lVar8 + 0x50);
    uStack_f0 = *(undefined8 *)(lVar8 + 0x48);
    uStack_d8 = *(undefined8 *)(lVar8 + 0x60);
    param_2 = *(ulong *)(lVar8 + 0x58);
    lStack_108 = plStack_1f8[0x11];
    lStack_110 = plStack_1f8[0x10];
    lStack_100 = plStack_1f8[0x12];
    uStack_e0 = param_2;
    (**(code **)(*plVar10 + 0x248))
              (0,plVar10,&uStack_f0,puVar17,0,&lStack_110,*(undefined8 *)(*plVar10 + 0x250));
    puVar31 = &UNK_0153a24c;
    plVar11 = plVar13;
  }
  plVar2 = &uStack_250;
  pppppppuVar30 = &pppppppuStack_1e0;
  uStack_210 = unaff_x24;
  uStack_208 = uVar25;
  puStack_200 = puVar24;
  plStack_1f0 = plVar7;
  plStack_1e8 = plVar13;
  pppppppuStack_1e0 = &ppppppuStack_a0;
  puStack_1d8 = puVar31;
  if ((bRam0000000003eb4f04 & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d0a0);
    func_0x00f78a20(0x3d1d260);
    func_0x00f78a20(0x3d22180);
    bRam0000000003eb4f04 = 1;
  }
  if (plVar11[0x4b] == 0) {
code_r0x0153a554:
    func_0x00f78af4();
  }
  else {
    plVar7 = (long *)/*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(plVar11[0x4b],0);
    if ((int)plVar7 == 0) {
      return plVar7;
    }
    if ((plVar11[8] == 0) || (plVar7 = *(long **)(plVar11[8] + 0x28), plVar7 == (long *)0x0))
    goto code_r0x0153a554;
    lVar8 = *plVar7;
    uVar25 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar25 != 0) {
      piVar20 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == /*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0) {
          puVar24 = (undefined8 *)(lVar8 + (long)*piVar20 * 0x10 + 0x138);
          goto code_r0x0153a34c;
        }
        piVar20 = piVar20 + 4;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
    puVar17 = (undefined8 *)0x0;
    puVar24 = (undefined8 *)func_0x00fac1f0(plVar7);
code_r0x0153a34c:
    plVar10 = (long *)(*(code *)*puVar24)(plVar7,puVar24[1]);
    if (plVar10 != (long *)0x0) {
      plVar9 = &lStack_224;
      puVar24 = (undefined8 *)0x3d22180;
      uVar25 = 0x3d1d260;
      unaff_x24 = 2;
code_r0x0153a37c:
      lVar8 = *plVar10;
      uVar19 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar12 = (undefined8 *)(lVar8 + (long)*piVar20 * 0x10 + 0x138);
            goto code_r0x0153a3c8;
          }
          piVar20 = piVar20 + 4;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      puVar17 = (undefined8 *)0x0;
      puVar12 = (undefined8 *)func_0x00fac1f0(plVar10);
code_r0x0153a3c8:
      plVar13 = (long *)(*(code *)*puVar12)(plVar10,puVar12[1]);
      if (((ulong)plVar13 & 1) == 0) {
        plVar7 = (long *)0x0;
        goto joined_r0x0153a4b4;
      }
      lVar8 = *plVar10;
      uVar19 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == /*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260) {
            puVar12 = (undefined8 *)(lVar8 + (long)*piVar20 * 0x10 + 0x138);
            goto code_r0x0153a424;
          }
          piVar20 = piVar20 + 4;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      puVar17 = (undefined8 *)0x0;
      puVar12 = (undefined8 *)func_0x00fac1f0(plVar10);
code_r0x0153a424:
      lVar8 = (*(code *)*puVar12)(plVar10,puVar12[1]);
      if (lVar8 == 0) {
        func_0x00f78af4();
        goto code_r0x0153a55c;
      }
      lVar18 = *(long *)(lVar8 + 0x10);
      if (lVar18 != 0) {
        if (*(int *)(lVar18 + 0x50) == 2) {
          if (plVar11[0x4b] == 0) {
            func_0x00f78af4();
            goto code_r0x0153a55c;
          }
          plVar7 = *(long **)(plVar11[0x4b] + 0x20);
          if (plVar7 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x0153a55c;
          }
          uStack_230 = *(undefined8 *)(lVar18 + 0x48);
          puVar17 = (undefined8 *)(ulong)*(uint *)(lVar8 + 0x78);
          uStack_228 = 2;
          uStack_21c = *(undefined8 *)(lVar18 + 0x5c);
          lStack_224 = *(long *)(lVar18 + 0x54);
          uStack_214 = *(undefined4 *)(lVar18 + 100);
          uStack_248 = *(undefined8 *)(lVar8 + 0x88);
          uStack_250 = *(undefined8 *)(lVar8 + 0x80);
          uStack_240 = *(undefined8 *)(lVar8 + 0x90);
          (**(code **)(*plVar7 + 0x248))
                    (0,plVar7,&uStack_230,puVar17,0,&uStack_250,*(undefined8 *)(*plVar7 + 0x250));
        }
        goto code_r0x0153a37c;
      }
      func_0x00f78af4();
      goto code_r0x0153a55c;
    }
  }
  func_0x00f78af4();
code_r0x0153a55c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x153a560);
  (*pcVar1)();
joined_r0x0153a4b4:
  if (plVar10 != (long *)0x0) {
    lVar8 = *plVar10;
    uVar19 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar12 = (undefined8 *)(lVar8 + (long)*piVar20 * 0x10 + 0x138);
          goto code_r0x0153a50c;
        }
        piVar20 = piVar20 + 4;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    puVar17 = (undefined8 *)0x0;
    puVar12 = (undefined8 *)func_0x00fac1f0(plVar10);
code_r0x0153a50c:
    plVar13 = (long *)(*(code *)*puVar12)(plVar10,puVar12[1]);
  }
  if (plVar7 == (long *)0x0) {
    return plVar13;
  }
  func_0x00f78ac0(plVar7,0);
  if (extraout_w1 != 1) goto code_r0x0153a5a4;
  plVar7 = (long *)___cxa_begin_catch();
  plVar7 = (long *)*plVar7;
  plVar13 = (long *)___cxa_end_catch();
  goto joined_r0x0153a4b4;
code_r0x0153a5a4:
  puVar31 = &Atlas_Contexts_BattleGameContext__IsFrenzyActive;
  plVar13 = (long *)__Unwind_Resume();
code_r0x0153a5a8:
  *(long **)((long)plVar2 + -0x20) = plVar7;
  *(long **)((long)plVar2 + -0x18) = plVar10;
  *(undefined8 ********)((long)plVar2 + -0x10) = pppppppuVar30;
  *(undefined **)((long)plVar2 + -8) = puVar31;
  if ((bRam0000000003eb4f03 & 1) == 0) {
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb4f03 = 1;
  }
  if ((*(char *)((long)plVar13 + 0x274) == '\0') || ((char)plVar13[0x4c] == '\0')) {
    return (long *)0x0;
  }
  if ((plVar13[0x4b] != 0) && (lVar8 = *(long *)(plVar13[0x4b] + 0x20), lVar8 != 0)) {
    /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c((undefined1 *)((long)plVar2 + -0x38),lVar8,0);
    lVar8 = plVar13[0x4e];
    *(long *)((long)plVar2 + -0x48) = plVar13[0x4f];
    *(long *)((long)plVar2 + -0x50) = lVar8;
    *(long *)((long)plVar2 + -0x40) = plVar13[0x50];
    lVar8 = plVar13[0x4d];
    if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(undefined8 *)((long)plVar2 + -0x78) = *(undefined8 *)((long)plVar2 + -0x48);
    *(undefined8 *)((long)plVar2 + -0x80) = *(undefined8 *)((long)plVar2 + -0x50);
    *(undefined8 *)((long)plVar2 + -0x70) = *(undefined8 *)((long)plVar2 + -0x40);
    /*Core.Networking.NetworkSessionTime$$op_Subtraction*/ func_0x0165f1c4((undefined1 *)((long)plVar2 + -0x68),(undefined1 *)((long)plVar2 + -0x80),
                    (int)lVar8,0);
    *(undefined8 *)((long)plVar2 + -0x98) = *(undefined8 *)((long)plVar2 + -0x30);
    *(undefined8 *)((long)plVar2 + -0xa0) = *(undefined8 *)((long)plVar2 + -0x38);
    *(undefined8 *)((long)plVar2 + -0x90) = *(undefined8 *)((long)plVar2 + -0x28);
    *(undefined8 *)((long)plVar2 + -0xb8) = *(undefined8 *)((long)plVar2 + -0x60);
    *(undefined8 *)((long)plVar2 + -0xc0) = *(undefined8 *)((long)plVar2 + -0x68);
    *(undefined8 *)((long)plVar2 + -0xb0) = *(undefined8 *)((long)plVar2 + -0x58);
    plVar7 = (long *)/*Core.Networking.NetworkSessionTime$$op_GreaterThanOrEqual*/ func_0x0165e314((undefined1 *)((long)plVar2 + -0xa0),
                                     (undefined1 *)((long)plVar2 + -0xc0),0);
    return plVar7;
  }
  auVar43 = func_0x00f78af4();
  lVar8 = auVar43._8_8_;
  *(undefined1 **)((long)plVar2 + -0xd0) = (undefined1 *)((long)plVar2 + -0x10);
  *(undefined **)((long)plVar2 + -200) = &Atlas_Contexts_BattleGameContext__GetRankingForPlayer;
  if (lVar8 != 0) {
    uVar14 = *(undefined8 *)(lVar8 + 0x88);
    uVar21 = *(undefined8 *)(lVar8 + 0x80);
    puVar17[2] = *(undefined8 *)(lVar8 + 0x90);
    puVar17[1] = uVar14;
    *puVar17 = uVar21;
    return auVar43._0_8_;
  }
  auVar43 = func_0x00f78af4();
  lVar8 = auVar43._8_8_;
  *(undefined8 *)((long)plVar2 + -0xf0) = 0x3eb4000;
  *(long **)((long)plVar2 + -0xe8) = plVar13;
  *(undefined1 **)((long)plVar2 + -0xe0) = (undefined1 *)((long)plVar2 + -0xd0);
  *(undefined **)((long)plVar2 + -0xd8) = &Atlas_Contexts_BattleGameContext__SetupGameContextScreen;
  *(long *)(auVar43._0_8_ + 0x48) = lVar8;
  if (puVar17 == (undefined8 *)0x0) {
code_r0x0153a734:
    plVar10 = (long *)func_0x00f78af4();
    *(undefined8 **)((long)plVar2 + -0x120) = puVar24;
    *(long **)((long)plVar2 + -0x118) = plVar9;
    *(undefined8 *)((long)plVar2 + -0x110) = 0x3eb4000;
    *(long **)((long)plVar2 + -0x108) = plVar13;
    *(undefined1 **)((long)plVar2 + -0x100) = (undefined1 *)((long)plVar2 + -0xe0);
    *(undefined **)((long)plVar2 + -0xf8) = &Atlas_Contexts_BattleGameContext__OnHostMigrationSynced
    ;
    plVar7 = plVar10;
    if ((bRam0000000003eb4f05 & 1) == 0) {
      plVar7 = (long *)func_0x00f78a20(0x3d237b8);
      bRam0000000003eb4f05 = 1;
    }
    if (*(char *)((long)plVar10 + 0x274) != '\0') {
      lVar8 = plVar10[0x4e];
      *(long *)((long)plVar2 + -0x138) = plVar10[0x4f];
      *(long *)((long)plVar2 + -0x140) = lVar8;
      *(long *)((long)plVar2 + -0x130) = plVar10[0x50];
      if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined8 *)((long)plVar2 + -0x158) = *(undefined8 *)((long)plVar2 + -0x138);
      *(undefined8 *)((long)plVar2 + -0x160) = *(undefined8 *)((long)plVar2 + -0x140);
      *(undefined8 *)((long)plVar2 + -0x150) = *(undefined8 *)((long)plVar2 + -0x130);
      plVar7 = (long *)/*Core.Networking.NetworkSessionTime$$op_Addition*/ func_0x0165f11c((undefined1 *)((long)plVar2 + -0x178),
                                       (undefined1 *)((long)plVar2 + -0x160),puVar17,0);
      lVar8 = *(long *)((long)plVar2 + -0x178);
      plVar10[0x4f] = *(long *)((long)plVar2 + -0x170);
      plVar10[0x4e] = lVar8;
      plVar10[0x50] = *(long *)((long)plVar2 + -0x168);
    }
    return plVar7;
  }
  *(undefined4 *)(puVar17 + 0x52) = 1;
  plVar13 = (long *)0x0;
  if (lVar8 == 0) goto code_r0x0153a734;
  *(undefined8 *)((long)plVar2 + -0x130) = unaff_x24;
  *(ulong *)((long)plVar2 + -0x128) = uVar25;
  *(undefined8 **)((long)plVar2 + -0x120) = puVar24;
  *(long **)((long)plVar2 + -0x118) = plVar9;
  *(undefined8 *)((long)plVar2 + -0x110) = 0x3eb4000;
  *(long *)((long)plVar2 + -0x108) = lVar8;
  *(undefined1 **)((long)plVar2 + -0x100) = (undefined1 *)((long)plVar2 + -0xe0);
  *(undefined **)((long)plVar2 + -0xf8) = &UNK_0153a718;
  uVar21 = 0x3eb5000;
  uVar25 = 0x3d41080;
  if ((bRam0000000003eb522b & 1) == 0) {
    func_0x00f78a20(0x3d41080,8,1,0);
    bRam0000000003eb522b = 1;
  }
  lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (lVar18 != 0) {
    *(undefined8 *)((long)plVar2 + -0x110) = *(undefined8 *)((long)plVar2 + -0x110);
    *(undefined8 *)((long)plVar2 + -0x108) = *(undefined8 *)((long)plVar2 + -0x108);
    *(undefined8 *)((long)plVar2 + -0x100) = *(undefined8 *)((long)plVar2 + -0x100);
    *(undefined8 *)((long)plVar2 + -0xf8) = *(undefined8 *)((long)plVar2 + -0xf8);
                    /* WARNING: Could not recover jumptable at 0x015ac724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar7 = (long *)(*(code *)(&UNK_015ac728 + (ulong)UNK_033f8a48 * 4))(lVar18,8,1,0);
    return plVar7;
  }
  uVar14 = func_0x00f78af4();
  *(undefined8 *)((long)plVar2 + -0x160) = 0x3eb5000;
  *(long *)((long)plVar2 + -0x158) = lVar8;
  *(undefined8 *)((long)plVar2 + -0x150) = 8;
  *(undefined8 *)((long)plVar2 + -0x148) = 1;
  *(undefined1 **)((long)plVar2 + -0x140) = (undefined1 *)((long)plVar2 + -0x100);
  *(undefined **)((long)plVar2 + -0x138) = &Atlas_UI_Screens_GameInProgressScreen__UpdateArcade;
  if ((bRam0000000003eb5227 & 1) == 0) {
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb5227 = 1;
  }
  plVar7 = (long *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar14,uRam0000000003d41088);
  if ((plVar7 != (long *)0x0) && (plVar7[6] != 0)) {
    return plVar7;
  }
  uVar15 = func_0x00f78af4();
  *(undefined8 *)((long)plVar2 + -400) = 0x3eb5000;
  *(undefined8 *)((long)plVar2 + -0x188) = 0x3d41088;
  *(undefined8 *)((long)plVar2 + -0x180) = 0x3eb5000;
  *(undefined8 *)((long)plVar2 + -0x178) = uVar14;
  *(undefined1 **)((long)plVar2 + -0x170) = (undefined1 *)((long)plVar2 + -0x140);
  *(undefined **)((long)plVar2 + -0x168) = &Atlas_UI_Screens_GameInProgressScreen__OnLateUpdate;
  if ((bRam0000000003eb5228 & 1) == 0) {
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb5228 = 1;
  }
  *(undefined8 *)((long)plVar2 + -0x1d0) = unaff_x24;
  *(undefined8 *)((long)plVar2 + -0x1c8) = 0x3d41080;
  *(undefined8 *)((long)plVar2 + -0x1c0) = 0x3eb5000;
  *(undefined8 *)((long)plVar2 + -0x1b8) = 0x3eb5000;
  *(undefined8 *)((long)plVar2 + -0x1b0) = 0x3d41088;
  *(undefined8 *)((long)plVar2 + -0x1a8) = uVar15;
  *(undefined1 **)((long)plVar2 + -0x1a0) = (undefined1 *)((long)plVar2 + -0x170);
  *(undefined **)((long)plVar2 + -0x198) = &UNK_015aa6a0;
  uVar19 = 0x3eb5000;
  if ((bRam0000000003eb522e & 1) == 0) {
    func_0x00f78a20(0x3d3b9d0);
    func_0x00f78a20(0x3d3b898);
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb522e = 1;
  }
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar15,uRam0000000003d41088);
  uVar26 = 0x3d41080;
  if (((lVar8 != 0) && (*(long *)(lVar8 + 0x38) != 0)) &&
     (lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 200), uVar26 = uVar25, lVar8 != 0)) {
    uVar28 = *(uint *)(lVar8 + 0x18);
    uVar19 = (ulong)uVar28;
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar15,uRam0000000003d41088);
    if (((lVar8 != 0) && (*(long *)(lVar8 + 0x38) != 0)) &&
       (lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0xd0), lVar8 != 0)) {
      uVar14 = 0x3d41080;
      uVar41 = *(uint *)(lVar8 + 0x18);
      uVar26 = (ulong)uVar41;
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar15,uRam0000000003d41080);
      uVar21 = 0x3d41080;
      if (lVar8 != 0) {
        /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetWeaponIndicatorActive*/ func_0x015adeac(lVar8,0 < (int)(uVar41 + uVar28),0);
        uVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar15,uRam0000000003d41080);
        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar15,uRam0000000003d41088);
        if (((lVar8 != 0) && (uVar21 = uVar14, *(long *)(lVar8 + 0x38) != 0)) &&
           (*(undefined8 *)((long)plVar2 + -0x1d8) = *(undefined8 *)(*(long *)(lVar8 + 0x38) + 200),
           uVar19 != 0)) {
          /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetCulturePodWeaponIndicatorArrows*/ func_0x015adf10(uVar19,(undefined1 *)((long)plVar2 + -0x1d8),0);
          uVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar15,uRam0000000003d41080);
          lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar15,uRam0000000003d41088);
          if (((lVar8 != 0) && (*(long *)(lVar8 + 0x38) != 0)) &&
             (*(undefined8 *)((long)plVar2 + -0x1e0) =
                   *(undefined8 *)(*(long *)(lVar8 + 0x38) + 0xd0), uVar19 != 0)) {
            plVar7 = (long *)/*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetSheldonWeaponIndicatorArrows*/ func_0x015ae03c(uVar19,(undefined1 *)((long)plVar2 + -0x1e0),0);
            return plVar7;
          }
        }
      }
    }
  }
  lVar8 = func_0x00f78af4();
  *(undefined8 *)((long)plVar2 + -0x280) = unaff_d15;
  *(undefined8 *)((long)plVar2 + -0x278) = unaff_d14;
  *(undefined8 *)((long)plVar2 + -0x270) = unaff_d13;
  *(undefined8 *)((long)plVar2 + -0x268) = unaff_d12;
  *(undefined8 *)((long)plVar2 + -0x260) = unaff_d11;
  *(undefined8 *)((long)plVar2 + -600) = unaff_d10;
  *(undefined8 *)((long)plVar2 + -0x250) = unaff_d9;
  *(undefined8 *)((long)plVar2 + -0x248) = unaff_d8;
  *(undefined8 *)((long)plVar2 + -0x240) = unaff_x28;
  *(undefined8 *)((long)plVar2 + -0x238) = unaff_x27;
  *(undefined8 *)((long)plVar2 + -0x230) = unaff_x26;
  *(undefined8 *)((long)plVar2 + -0x228) = unaff_x25;
  *(undefined8 *)((long)plVar2 + -0x220) = unaff_x24;
  *(ulong *)((long)plVar2 + -0x218) = uVar26;
  *(undefined8 *)((long)plVar2 + -0x210) = uVar21;
  *(undefined8 *)((long)plVar2 + -0x208) = 0x3d41088;
  *(ulong *)((long)plVar2 + -0x200) = uVar19;
  *(undefined8 *)((long)plVar2 + -0x1f8) = uVar15;
  *(undefined1 **)((long)plVar2 + -0x1f0) = (undefined1 *)((long)plVar2 + -0x1a0);
  *(undefined **)((long)plVar2 + -0x1e8) =
       &Atlas_UI_Screens_GameInProgressScreen__UpdateKartIndicator;
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
  *(undefined8 *)((long)plVar2 + -0x2a0) = 0;
  *(undefined8 *)((long)plVar2 + -0x298) = 0;
  *(undefined8 *)((long)plVar2 + -0x290) = 0;
  *(undefined4 *)((long)plVar2 + -0x2a8) = 0;
  *(undefined8 *)((long)plVar2 + -0x2b0) = 0;
  *(undefined4 *)((long)plVar2 + -0x2b8) = 0;
  *(undefined8 *)((long)plVar2 + -0x2c0) = 0;
  *(undefined4 *)((long)plVar2 + -0x2c8) = 0;
  *(undefined8 *)((long)plVar2 + -0x2d8) = 0;
  *(undefined8 *)((long)plVar2 + -0x2d0) = 0;
  *(undefined8 *)((long)plVar2 + -0x2e0) = 0;
  *(undefined4 *)((long)plVar2 + -0x2e4) = 0;
  lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (((lVar18 == 0) || (*(long *)(lVar18 + 0x1c0) == 0)) ||
     (lVar18 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar18 + 0x1c0),0), lVar18 == 0)) goto code_r0x015ab4c4;
  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar18,*(char *)(lVar8 + 0x109) == '\0',0);
  lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (((lVar18 == 0) || (*(long *)(lVar18 + 0x1c0) == 0)) ||
     (lVar18 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar18 + 0x1c0),0), lVar18 == 0)) goto code_r0x015ab4c4;
  plVar7 = (long *)/*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar18,0);
  if ((int)plVar7 == 0) {
    return plVar7;
  }
  *(undefined1 *)(lVar8 + 0x9c) = 0;
  lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar8,uRam0000000003d41090);
  if ((lVar18 == 0) || (*(long *)(lVar18 + 0x40) == 0)) goto code_r0x015ab4c4;
  uVar21 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(lVar18 + 0x40),0);
  *(undefined8 *)((long)plVar2 + -800) = uVar21;
  if (*(long *)(lVar8 + 0x78) == 0) {
code_r0x015aaa34:
    lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar8,uRam0000000003d41088);
    if ((lVar18 == 0) || (*(long *)(lVar18 + 0x38) == 0)) goto code_r0x015ab4c4;
    if (*(int *)(*(long *)(lVar18 + 0x38) + 0x74) == 1) {
      *(undefined8 *)(lVar8 + 0x78) = *(undefined8 *)(lVar8 + 0x80);
    }
  }
  else {
    lVar18 = *(long *)(*(long *)(lVar8 + 0x78) + 0x10);
    if (lVar18 == 0) goto code_r0x015ab4c4;
    if (*(int *)(lVar18 + 0x74) != 1) goto code_r0x015aaa34;
  }
  plVar7 = (long *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (plVar7 == (long *)0x0) {
code_r0x015ab4c4:
    func_0x00f78af4();
code_r0x015ab4c8:
    uVar21 = func_0x00f78b24();
    func_0x00f78ac0(uVar21,0);
    __Unwind_Resume();
code_r0x015ab4d8:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x15ab4dc);
    (*pcVar1)();
  }
  iVar29 = 0;
  iVar5 = 0;
  *(undefined4 *)((long)plVar2 + -0x314) = 0;
  uVar28 = 0;
code_r0x015aaa94:
  if (plVar7[0x39] == 0) goto code_r0x015ab4c4;
  if (*(int *)(plVar7[0x39] + 0x18) <= (int)uVar28) {
    return plVar7;
  }
  if (*(int *)(lVar8 + 0xbc) <= *(int *)((long)plVar2 + -0x314)) {
    return plVar7;
  }
  lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x1c8), lVar18 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar18 + 0x18) <= uVar28) goto code_r0x015ab4c8;
  lVar22 = (long)(int)uVar28;
  lVar18 = *(long *)(lVar18 + lVar22 * 8 + 0x20);
  if (lVar18 == 0) goto code_r0x015ab4c4;
  if (*(long *)(lVar18 + 0x80) == 0) {
    bVar4 = false;
  }
  else {
    lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
    if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x1c8), lVar18 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar18 + 0x18) <= uVar28) goto code_r0x015ab4c8;
    lVar18 = *(long *)(lVar18 + lVar22 * 8 + 0x20);
    if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x80), lVar18 == 0)) goto code_r0x015ab4c4;
    bVar4 = *(int *)(lVar18 + 0x74) == 1;
  }
  lVar18 = *(long *)(lVar8 + 0x78);
  if ((bool)(bVar4 & lVar18 == 0)) {
    if (*(long *)(lVar8 + 0x70) == 0) goto code_r0x015ab4c4;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)plVar2 + -0x310),*(long *)(lVar8 + 0x70),
                    uRam0000000003d3d1c8);
    *(undefined8 *)((long)plVar2 + -0x298) = *(undefined8 *)((long)plVar2 + -0x308);
    *(undefined8 *)((long)plVar2 + -0x2a0) = *(undefined8 *)((long)plVar2 + -0x310);
    *(undefined8 *)((long)plVar2 + -0x290) = *(undefined8 *)((long)plVar2 + -0x300);
    do {
      uVar25 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)plVar2 + -0x2a0),uRam0000000003d33458);
      if ((uVar25 & 1) == 0) goto code_r0x015aabdc;
      lVar18 = *(long *)((long)plVar2 + -0x290);
      if (lVar18 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar27 = *(long *)(lVar18 + 0x10);
      lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if (lVar16 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar16 = *(long *)(lVar16 + 0x1c8);
      if (lVar16 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      if (*(uint *)(lVar16 + 0x18) <= uVar28) {
        uVar21 = func_0x00f78b24();
        func_0x00f78ac0(uVar21,0);
        goto code_r0x015ab4d8;
      }
      lVar16 = *(long *)(lVar16 + lVar22 * 8 + 0x20);
      if (lVar16 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
    } while (lVar27 != *(long *)(lVar16 + 0x80));
    *(long *)(lVar8 + 0x78) = lVar18;
code_r0x015aabdc:
    *(undefined4 *)((long)plVar2 + (long)iVar5 * 4 + -0x2f8) = 0x132;
    iVar29 = *(int *)((long)plVar2 + -0x2e4);
    iVar5 = iVar29 + 1;
    *(int *)((long)plVar2 + -0x2e4) = iVar5;
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)plVar2 + -0x2a0),uRam0000000003d33450);
    if ((iVar5 != 0) && (*(int *)((long)plVar2 + (long)iVar29 * 4 + -0x2f8) == 0x132)) {
      *(int *)((long)plVar2 + -0x2e4) = iVar29;
      iVar5 = iVar29;
    }
    lVar18 = *(long *)(lVar8 + 0x78);
    iVar29 = iVar5;
  }
  if (lVar18 == 0) {
code_r0x015aac8c:
    uVar21 = 0;
    cVar23 = '\0';
  }
  else {
    lVar16 = *(long *)(lVar18 + 0x10);
    lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
    if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x1c8), lVar18 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar18 + 0x18) <= uVar28) goto code_r0x015ab4c8;
    lVar18 = *(long *)(lVar18 + lVar22 * 8 + 0x20);
    if (lVar18 == 0) goto code_r0x015ab4c4;
    if (!(bool)(bVar4 & lVar16 == *(long *)(lVar18 + 0x80))) goto code_r0x015aac8c;
    cVar23 = *(char *)(lVar8 + 0xb8);
    uVar21 = 1;
  }
  lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x1c8), lVar18 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar18 + 0x18) <= uVar28) goto code_r0x015ab4c8;
  lVar18 = *(long *)(lVar18 + lVar22 * 8 + 0x20);
  if (lVar18 == 0) goto code_r0x015ab4c4;
  fVar39 = param_3;
  if (*(long *)(lVar18 + 0x80) != 0) {
    lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
    if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x1c8), lVar18 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar18 + 0x18) <= uVar28) goto code_r0x015ab4c8;
    lVar18 = *(long *)(lVar18 + lVar22 * 8 + 0x20);
    if (lVar18 == 0) goto code_r0x015ab4c4;
    iVar6 = /*Atlas.UI.KartIndicatorBehaviour$$get_CanUpdateTarget*/ func_0x015cc628(lVar18,0);
    fVar42 = (float)param_2;
    if ((iVar6 != 0) && (fVar39 = param_3, *(char *)(lVar8 + 0xb8) == '\0')) goto code_r0x015aaf94;
    lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
    if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x1c8), lVar18 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar18 + 0x18) <= uVar28) goto code_r0x015ab4c8;
    lVar18 = *(long *)(lVar18 + lVar22 * 8 + 0x20);
    if ((((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x80), lVar18 == 0)) ||
        (lVar18 = *(long *)(lVar18 + 0x10), lVar18 == 0)) ||
       (lVar18 = *(long *)(lVar18 + 0x18), lVar18 == 0)) goto code_r0x015ab4c4;
    fVar32 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar18,0);
    *(float *)((long)plVar2 + -0x2b0) = fVar32;
    *(float *)((long)plVar2 + -0x2ac) = fVar42;
    *(float *)((long)plVar2 + -0x2a8) = param_3;
    fVar40 = param_3;
    fVar39 = fVar42;
    lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar8,uRam0000000003d41088);
    if (((lVar18 == 0) || (*(long *)(lVar18 + 0x38) == 0)) ||
       ((lVar18 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10), lVar18 == 0 ||
        (lVar18 = *(long *)(lVar18 + 0x18), lVar18 == 0)))) goto code_r0x015ab4c4;
    fVar33 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar18,0);
    *(float *)((long)plVar2 + -0x2c0) = fVar33;
    *(float *)((long)plVar2 + -700) = fVar39;
    *(float *)((long)plVar2 + -0x2b8) = fVar40;
    fVar40 = param_3 - fVar40;
    *(float *)((long)plVar2 + -0x2d0) = fVar32 - fVar33;
    *(float *)((long)plVar2 + -0x2cc) = fVar42 - fVar39;
    *(float *)((long)plVar2 + -0x2c8) = fVar40;
    if (cVar23 != '\0') {
      if (*(long *)((long)plVar2 + -800) == 0) goto code_r0x015ab4c4;
code_r0x015aadd4:
      param_3 = param_3 + *(float *)(lVar8 + 0xa8);
      param_4 = *(float *)(lVar8 + 0xa0);
      uVar25 = (ulong)(uint)(fVar42 + *(float *)(lVar8 + 0xa4));
      fVar40 = (float)/*UnityEngine.Camera$$WorldToViewportPoint*/ func_0x0321fe94(fVar32 + param_4,*(undefined8 *)((long)plVar2 + -800),0);
      fVar42 = (float)uVar25;
      fVar39 = param_3;
      if (cVar23 == '\0') {
        bVar4 = false;
        bVar3 = true;
        if (0.0 <= fVar40) {
          bVar4 = false;
          bVar3 = true;
          if (!NAN(fVar40)) {
            bVar4 = fVar40 == 1.0;
            bVar3 = 1.0 <= fVar40;
          }
        }
        param_2 = uVar25;
        if (!bVar3 || bVar4) {
          bVar4 = false;
          bVar3 = true;
          if (0.0 <= fVar42) {
            bVar4 = false;
            bVar3 = true;
            if (!NAN(fVar42)) {
              bVar4 = fVar42 == 1.0;
              bVar3 = 1.0 <= fVar42;
            }
          }
          if ((!bVar3 || bVar4) && (0.0 <= param_3)) {
            iVar6 = /*Atlas.UI.Screens.GameInProgressScreen$$CanSeeTarget*/ func_0x015ab70c(lVar8,(undefined1 *)((long)plVar2 + -0x2c0),
                                    (undefined1 *)((long)plVar2 + -0x2b0),1,1);
            fVar42 = (float)param_2;
            if (iVar6 != 0) goto code_r0x015aae04;
          }
        }
        goto code_r0x015aaf94;
      }
code_r0x015aae04:
      lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x1c8), lVar18 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar18 + 0x18) <= uVar28) goto code_r0x015ab4c8;
      lVar16 = *(long *)(lVar18 + lVar22 * 8 + 0x20);
      lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if ((lVar18 == 0) || (*(long *)(lVar18 + 0x1c0) == 0)) goto code_r0x015ab4c4;
      uVar34 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar18 + 0x1c0),0);
      *(undefined4 *)((long)plVar2 + -0x2e0) = uVar34;
      *(float *)((long)plVar2 + -0x2dc) = fVar42;
      *(float *)((long)plVar2 + -0x2d8) = fVar39;
      *(float *)((long)plVar2 + -0x2d4) = param_4;
      param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584((undefined1 *)((long)plVar2 + -0x2e0),0);
      if (lVar16 == 0) goto code_r0x015ab4c4;
      param_2 = uVar25 & 0xffffffff;
      /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(fVar40,lVar16,0);
      lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x1c8), lVar18 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar18 + 0x18) <= uVar28) goto code_r0x015ab4c8;
      lVar18 = *(long *)(lVar18 + lVar22 * 8 + 0x20);
      if (lVar18 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar18,uVar21,*(undefined1 *)(lVar8 + 0xb8),0);
      if (*(char *)(lVar8 + 0xb8) != '\0') {
        lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
        if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x1c8), lVar18 == 0))
        goto code_r0x015ab4c4;
        if (*(uint *)(lVar18 + 0x18) <= uVar28) goto code_r0x015ab4c8;
        lVar18 = *(long *)(lVar18 + lVar22 * 8 + 0x20);
        if (lVar18 == 0) goto code_r0x015ab4c4;
        *(undefined4 *)(lVar18 + 0x88) = *(undefined4 *)(lVar8 + 0x98);
      }
      *(int *)((long)plVar2 + -0x314) = *(int *)((long)plVar2 + -0x314) + 1;
      goto code_r0x015ab2c0;
    }
    fVar33 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0((undefined1 *)((long)plVar2 + -0x2d0),0);
    fVar37 = *(float *)(lVar8 + 0x8c);
    param_2 = (ulong)(uint)fVar37;
    fVar39 = fVar40;
    if (fVar37 <= fVar33) goto code_r0x015aaf94;
    fVar33 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4((undefined1 *)((long)plVar2 + -0x2d0),0);
    if ((*(long *)((long)plVar2 + -800) == 0) ||
       (fVar39 = fVar40, fVar38 = fVar37, lVar18 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)((long)plVar2 + -800),0)
       , lVar18 == 0)) goto code_r0x015ab4c4;
    fVar35 = (float)/*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar18,0);
    param_2 = (ulong)(uint)*(float *)(lVar8 + 0x94);
    if (*(float *)(lVar8 + 0x94) < fVar40 * fVar39 + fVar33 * fVar35 + fVar37 * fVar38)
    goto code_r0x015aadd4;
  }
code_r0x015aaf94:
  lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x1c8), lVar18 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar18 + 0x18) <= uVar28) goto code_r0x015ab4c8;
  lVar18 = *(long *)(lVar18 + lVar22 * 8 + 0x20);
  if (lVar18 == 0) goto code_r0x015ab4c4;
  param_3 = fVar39;
  if (*(long *)(lVar18 + 0x80) != 0) {
    lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
    if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x1c8), lVar18 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar18 + 0x18) <= uVar28) goto code_r0x015ab4c8;
    lVar18 = *(long *)(lVar18 + lVar22 * 8 + 0x20);
    if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x80), lVar18 == 0)) goto code_r0x015ab4c4;
    *(undefined1 *)(lVar18 + 0x9c) = 0;
    param_3 = fVar39;
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
    cVar23 = *(char *)(lVar8 + 0xb8);
  }
  else {
    cVar23 = '\0';
  }
  if (*(long *)(lVar8 + 0x70) == 0) goto code_r0x015ab4c4;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)plVar2 + -0x310),*(long *)(lVar8 + 0x70),uRam0000000003d3d1c8
                 );
  *(undefined8 *)((long)plVar2 + -0x298) = *(undefined8 *)((long)plVar2 + -0x308);
  *(undefined8 *)((long)plVar2 + -0x2a0) = *(undefined8 *)((long)plVar2 + -0x310);
  *(undefined8 *)((long)plVar2 + -0x290) = *(undefined8 *)((long)plVar2 + -0x300);
  do {
    do {
      uVar25 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)plVar2 + -0x2a0),uRam0000000003d33458);
      if ((uVar25 & 1) == 0) {
code_r0x015ab1e8:
        bVar4 = false;
        goto code_r0x015ab1ec;
      }
      lVar18 = *(long *)((long)plVar2 + -0x290);
      if (lVar18 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      fVar39 = *(float *)(lVar8 + 0x8c);
      param_2 = (ulong)(uint)fVar39;
      if ((fVar39 < *(float *)(lVar18 + 0x18)) && (lVar18 != *(long *)(lVar8 + 0x78)))
      goto code_r0x015ab1e8;
    } while (*(char *)(lVar18 + 0x28) == '\0');
    lVar16 = *(long *)(lVar18 + 0x10);
    if (lVar16 == 0) {
      func_0x00f78af4();
      goto code_r0x015ab4d8;
    }
  } while (*(char *)(lVar16 + 0x9c) != '\0');
  *(undefined1 *)(lVar16 + 0x9c) = 1;
  lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (lVar16 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar16 = *(long *)(lVar16 + 0x1c8);
  if (lVar16 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar16 + 0x18) <= uVar28) {
    uVar21 = func_0x00f78b24();
    func_0x00f78ac0(uVar21,0);
    goto code_r0x015ab4d8;
  }
  lVar16 = *(long *)(lVar16 + lVar22 * 8 + 0x20);
  if (lVar16 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(*(undefined4 *)(lVar8 + 0x98),lVar16,*(undefined8 *)(lVar18 + 0x10),cVar23 != '\0'
                  ,0);
  lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (lVar16 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar16 = *(long *)(lVar16 + 0x1c8);
  if (lVar16 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar16 + 0x18) <= uVar28) {
    uVar21 = func_0x00f78b24();
    func_0x00f78ac0(uVar21,0);
    goto code_r0x015ab4d8;
  }
  lVar16 = *(long *)(lVar16 + lVar22 * 8 + 0x20);
  uVar34 = *(undefined4 *)(lVar18 + 0x1c);
  uVar41 = *(uint *)(lVar18 + 0x20);
  fVar42 = *(float *)(lVar18 + 0x24);
  lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (lVar18 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(long *)(lVar18 + 0x1c0) == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  uVar36 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar18 + 0x1c0),0);
  *(undefined4 *)((long)plVar2 + -0x2e0) = uVar36;
  *(float *)((long)plVar2 + -0x2dc) = fVar39;
  *(float *)((long)plVar2 + -0x2d8) = param_3;
  *(float *)((long)plVar2 + -0x2d4) = param_4;
  param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584((undefined1 *)((long)plVar2 + -0x2e0),0);
  if (lVar16 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  param_2 = (ulong)uVar41;
  /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(uVar34,lVar16,0);
  lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (lVar18 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar18 = *(long *)(lVar18 + 0x1c8);
  if (lVar18 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar18 + 0x18) <= uVar28) {
    uVar21 = func_0x00f78b24();
    func_0x00f78ac0(uVar21,0);
    goto code_r0x015ab4d8;
  }
  lVar18 = *(long *)(lVar18 + lVar22 * 8 + 0x20);
  if (lVar18 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar18,uVar21,*(undefined1 *)(lVar8 + 0xb8),0);
  *(int *)((long)plVar2 + -0x314) = *(int *)((long)plVar2 + -0x314) + 1;
  bVar4 = true;
  param_3 = fVar42;
code_r0x015ab1ec:
  *(undefined4 *)((long)plVar2 + (long)iVar29 * 4 + -0x2f8) = 0x41c;
  iVar5 = *(int *)((long)plVar2 + -0x2e4);
  iVar29 = iVar5 + 1;
  *(int *)((long)plVar2 + -0x2e4) = iVar29;
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)plVar2 + -0x2a0),uRam0000000003d33450);
  if ((iVar29 != 0) && (*(int *)((long)plVar2 + (long)iVar5 * 4 + -0x2f8) == 0x41c)) {
    *(int *)((long)plVar2 + -0x2e4) = iVar5;
    iVar29 = iVar5;
  }
  iVar5 = iVar29;
  if (!bVar4) {
    lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
    if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x1c8), lVar18 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar18 + 0x18) <= uVar28) goto code_r0x015ab4c8;
    lVar18 = *(long *)(lVar18 + lVar22 * 8 + 0x20);
    if (lVar18 == 0) goto code_r0x015ab4c4;
    if (*(long *)(lVar18 + 0x80) != 0) {
      lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x1c8), lVar18 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar18 + 0x18) <= uVar28) goto code_r0x015ab4c8;
      lVar18 = *(long *)(lVar18 + lVar22 * 8 + 0x20);
      if (lVar18 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(0,lVar18,0,cVar23 != '\0',0);
    }
  }
code_r0x015ab2c0:
  uVar28 = uVar28 + 1;
  plVar7 = (long *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (plVar7 == (long *)0x0) goto code_r0x015ab4c4;
  goto code_r0x015aaa94;
}



// ============================================================
// RVA: 0x1539dcc | Atlas.Contexts.BattleGameContext.OnDeInit
// ============================================================

/* WARNING: Possible PIC construction at 0x0153a154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153a714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015aa69c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ae374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153a248: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0153a718) */
/* WARNING: Removing unreachable block (ram,0x0153a158) */
/* WARNING: Removing unreachable block (ram,0x0153a16c) */
/* WARNING: Removing unreachable block (ram,0x0153a17c) */
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

long * Atlas_Contexts_BattleGameContext__OnDeInit
                 (undefined1 param_1 [16],ulong param_2,float param_3,float param_4,long param_5)

{
  code *pcVar1;
  long *plVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  int extraout_w1;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  int *piVar20;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  undefined8 unaff_x21;
  char cVar24;
  undefined8 *unaff_x22;
  ulong unaff_x23;
  ulong uVar25;
  undefined8 unaff_x24;
  long lVar26;
  uint uVar27;
  undefined8 unaff_x25;
  int iVar28;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar29;
  undefined *puVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 unaff_d8;
  uint uVar40;
  undefined8 unaff_d9;
  float fVar41;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined1 auVar42 [16];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  long lStack_1e4;
  undefined8 uStack_1dc;
  undefined4 uStack_1d4;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  undefined8 *puStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined8 *******pppppppuStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 ******ppppppuStack_60;
  undefined *puStack_58;
  
  uVar21 = 0x3eb4000;
  if ((bRam0000000003eb4f01 & 1) == 0) {
    func_0x00f78a20(0x3d2a4a8);
    func_0x00f78a20(0x3d1b668);
    func_0x00f78a20(0x3d52848);
    bRam0000000003eb4f01 = 1;
  }
  if (((*(long *)(param_5 + 600) == 0) ||
      (lVar17 = *(long *)(*(long *)(param_5 + 600) + 0x20), lVar17 == 0)) ||
     (unaff_x22 = *(undefined8 **)(lVar17 + 0x10), unaff_x22 == (undefined8 *)0x0)) {
    func_0x00f78af4();
  }
  else {
    unaff_x23 = 0x3d1b668;
    unaff_x24 = 0x3d52000;
    unaff_x25 = 0x3d2a000;
    uVar21 = unaff_x22[0x14];
    unaff_x21 = func_0x00f78aec(/*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668);
    /*System.Action<NetworkSessionTime, uint>$$.ctor*/ func_0x01e6d100(unaff_x21,param_5,uRam0000000003d52848,uRam0000000003d2a4a8);
    plVar7 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar21,unaff_x21,0);
    if ((plVar7 == (long *)0x0) || (*plVar7 == /*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668)) {
      unaff_x22[0x14] = plVar7;
      if ((bRam0000000003eb51a2 & 1) == 0) {
        func_0x00f78a20(0x3d276d8,0);
        bRam0000000003eb51a2 = 1;
      }
      plVar7 = (long *)func_0x00f78aec(/*Atlas.Contexts.GameContextBase.<OnDeInit>d__132_TypeInfo*/ uRam0000000003d276d8);
      /*Atlas.Contexts.GameContextBase.<OnDeInit>d__132$$.ctor*/ func_0x015503c8(plVar7,0,0);
      if (plVar7 == (long *)0x0) {
        lVar17 = func_0x00f78af4();
        if (*(long *)(lVar17 + 0x130) != 0) {
          Atlas_Gameplay_Kart_KartManager__DeInit(*(long *)(lVar17 + 0x130),0);
        }
        if (*(long *)(lVar17 + 0x1f8) != 0) {
          /*Atlas.Lighting.LightWorld$$DeInit*/ func_0x01484d78(*(long *)(lVar17 + 0x1f8),0);
        }
        *(undefined8 *)(lVar17 + 0x1d8) = 0;
        if (*(long *)(lVar17 + 0x150) != 0) {
          /*Atlas.Audio.AtlasAudioManager$$SetAudioMapBehaviour*/ func_0x01458758(*(long *)(lVar17 + 0x150),0,0);
        }
        if (*(long *)(lVar17 + 0x208) != 0) {
          /*Atlas.Gameplay.VfxHitVolumeManager$$DeInit*/ func_0x01527f1c(*(long *)(lVar17 + 0x208),0);
        }
        *(undefined8 *)(lVar17 + 0x208) = 0;
        plVar7 = (long *)0x0;
        if (*(long *)(lVar17 + 0x1d0) != 0) {
          plVar7 = (long *)/*Atlas.Maps.MapBehaviour$$DeInit*/ func_0x0148d2ec(*(long *)(lVar17 + 0x1d0),0);
        }
        *(undefined8 *)(lVar17 + 0x1d0) = 0;
        *(undefined8 *)(lVar17 + 0x1e0) = 0;
        return plVar7;
      }
      plVar7[4] = param_5;
      return plVar7;
    }
  }
  auVar42 = func_0x00f78e5c();
  plVar7 = auVar42._8_8_;
  plVar12 = auVar42._0_8_;
  plVar2 = &lStack_190;
  puStack_58 = &Atlas_Contexts_BattleGameContext__OnLateUpdate;
  uStack_90 = unaff_x24;
  uStack_88 = unaff_x23;
  puStack_80 = unaff_x22;
  uStack_78 = unaff_x21;
  uStack_70 = uVar21;
  lStack_68 = param_5;
  ppppppuStack_60 = (undefined8 ******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4f02 & 1) == 0) {
    func_0x00f78a20(0x3d21b10);
    func_0x00f78a20(0x3d237b8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5d980);
    bRam0000000003eb4f02 = 1;
  }
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_f0 = 0;
  puVar16 = (undefined8 *)0x0;
  /*Atlas.Contexts.GameContextBase$$OnLateUpdate*/ func_0x01598b5c(plVar12,plVar7);
  plVar8 = (long *)0x3eb4000;
  if (plVar12[4] == 0) {
code_r0x0153a270:
    puVar30 = &Atlas_Contexts_BattleGameContext__FinishAi;
    plVar10 = (long *)func_0x00f78af4();
    plStack_1b8 = plVar8;
  }
  else {
    plVar8 = (long *)/*Core.StateManagement.StateMachine$$get_ActiveState*/ func_0x02b95214(plVar12[4],0);
    if (plVar8 == (long *)0x0) {
      return (long *)0x0;
    }
    if (*(byte *)(*plVar8 + 300) < *(byte *)(/*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10 + 300)) {
      return plVar8;
    }
    plVar7 = plVar8;
    if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10 + 300) * 8 + -8)
        != /*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10) {
      plVar7 = (long *)0x0;
    }
    if (plVar7 == (long *)0x0) {
      return plVar8;
    }
    if (plVar12[9] == 0) {
      return plVar8;
    }
    plVar8 = *(long **)(plVar12[9] + 0x28);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar9 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar8,0);
    if ((int)plVar9 == 0) {
      return plVar9;
    }
    if ((plVar12[0x4b] == 0) || (lVar17 = *(long *)(plVar12[0x4b] + 0x20), lVar17 == 0))
    goto code_r0x0153a270;
    unaff_x22 = &uStack_e8;
    /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_e8,lVar17,0);
    plVar8 = plVar12 + 0x4e;
    if (*(char *)((long)plVar12 + 0x274) == '\0') {
      uStack_a8 = uStack_e0;
      uStack_b0 = uStack_e8;
      uStack_a0 = uStack_d8;
      if (plVar12[0x38] == 0) goto code_r0x0153a270;
      uVar27 = *(uint *)(plVar12[0x38] + 0xcc);
      unaff_x23 = (ulong)uVar27;
      if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_108 = uStack_a8;
      uStack_110 = uStack_b0;
      uStack_100 = uStack_a0;
      /*Core.Networking.NetworkSessionTime$$op_Addition*/ func_0x0165f11c(&lStack_128,&uStack_110,uVar27 * 1000,0);
      plVar12[0x4f] = lStack_120;
      *plVar8 = lStack_128;
      plVar12[0x50] = lStack_118;
    }
    uStack_a8 = uStack_e0;
    uStack_b0 = uStack_e8;
    uStack_a0 = uStack_d8;
    lStack_c8 = plVar12[0x4f];
    lStack_d0 = *plVar8;
    lStack_c0 = plVar12[0x50];
    if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_138 = uStack_a8;
    uStack_140 = uStack_b0;
    uStack_130 = uStack_a0;
    lStack_158 = lStack_c8;
    lStack_160 = lStack_d0;
    lStack_150 = lStack_c0;
    puVar16 = (undefined8 *)0x0;
    iVar5 = /*Core.Networking.NetworkSessionTime$$op_GreaterThanOrEqual*/ func_0x0165e314(&uStack_140,&lStack_160);
    if ((iVar5 == 0) || ((char)plVar12[0x47] != '\0')) {
      lStack_188 = plVar12[0x4f];
      lStack_190 = *plVar8;
      lStack_180 = plVar12[0x50];
      puVar16 = (undefined8 *)0x0;
      iVar5 = /*Core.Networking.NetworkSessionTime$$Delta*/ func_0x0165e480(&uStack_e8,&lStack_190);
      if (plVar12[9] != 0) {
        plVar7 = (long *)(ulong)(uint)(iVar5 / 1000);
        puVar16 = (undefined8 *)0x0;
        /*Atlas.UI.Screens.GameInProgressScreen$$SetTimerSecondsRemaining*/ func_0x015ab4dc(plVar12[9],plVar7);
        if (plVar12[0x46] == 0) {
          if (plVar12[0x4a] == 0) goto code_r0x0153a270;
          puVar16 = (undefined8 *)0x0;
          /*Atlas.Audio.AtlasAudioManager$$UpdateTimeRemaining*/ func_0x0145983c(plVar12[0x4a],plVar7);
        }
        puVar30 = &UNK_0153a158;
        plVar9 = plVar12;
        pppppppuVar29 = &ppppppuStack_60;
        goto code_r0x0153a5a8;
      }
      goto code_r0x0153a270;
    }
    if (plVar12[4] == 0) goto code_r0x0153a270;
    puVar16 = puRam0000000003d5d980;
    iVar5 = /*Core.StateManagement.StateMachine$$TryGetState<object>*/ func_0x018e1570(plVar12[4],&uStack_f0);
    if (iVar5 == 0) {
      plVar7 = (long *)/*Atlas.Contexts.GameContextBaseInProgressState$$NotifyGameContextFinished*/ func_0x0159e9f8(plVar7,0);
      return plVar7;
    }
    if ((plVar12[8] == 0) ||
       (plStack_1b8 = (long *)/*Atlas.Gameplay.Player.GameContextPlayerManager$$GetLocalGameContextPlayer*/ func_0x01599b24(plVar12[8],0), plStack_1b8 == (long *)0x0))
    goto code_r0x0153a270;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    puVar16 = (undefined8 *)0x0;
    /*Atlas.Gameplay.Player.GameContextPlayer$$OnFinishedGame*/ func_0x015a5760(plStack_1b8,&uStack_178);
    plVar8 = plStack_1b8;
    if ((plVar12[0x4b] == 0) ||
       ((lVar17 = plStack_1b8[2], lVar17 == 0 ||
        (plVar9 = *(long **)(plVar12[0x4b] + 0x20), plVar9 == (long *)0x0)))) goto code_r0x0153a270;
    puVar16 = (undefined8 *)(ulong)*(uint *)(plStack_1b8 + 0xf);
    uStack_a8 = *(undefined8 *)(lVar17 + 0x50);
    uStack_b0 = *(undefined8 *)(lVar17 + 0x48);
    uStack_98 = *(undefined8 *)(lVar17 + 0x60);
    param_2 = *(ulong *)(lVar17 + 0x58);
    lStack_c8 = plStack_1b8[0x11];
    lStack_d0 = plStack_1b8[0x10];
    lStack_c0 = plStack_1b8[0x12];
    uStack_a0 = param_2;
    (**(code **)(*plVar9 + 0x248))
              (0,plVar9,&uStack_b0,puVar16,0,&lStack_d0,*(undefined8 *)(*plVar9 + 0x250));
    puVar30 = &UNK_0153a24c;
    plVar10 = plVar12;
  }
  plVar2 = &uStack_210;
  pppppppuVar29 = &pppppppuStack_1a0;
  uStack_1d0 = unaff_x24;
  uStack_1c8 = unaff_x23;
  puStack_1c0 = unaff_x22;
  plStack_1b0 = plVar7;
  plStack_1a8 = plVar12;
  pppppppuStack_1a0 = &ppppppuStack_60;
  puStack_198 = puVar30;
  if ((bRam0000000003eb4f04 & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d0a0);
    func_0x00f78a20(0x3d1d260);
    func_0x00f78a20(0x3d22180);
    bRam0000000003eb4f04 = 1;
  }
  if (plVar10[0x4b] == 0) {
code_r0x0153a554:
    func_0x00f78af4();
  }
  else {
    plVar7 = (long *)/*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(plVar10[0x4b],0);
    if ((int)plVar7 == 0) {
      return plVar7;
    }
    if ((plVar10[8] == 0) || (plVar7 = *(long **)(plVar10[8] + 0x28), plVar7 == (long *)0x0))
    goto code_r0x0153a554;
    lVar17 = *plVar7;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == /*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0) {
          puVar11 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
          goto code_r0x0153a34c;
        }
        piVar20 = piVar20 + 4;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    puVar16 = (undefined8 *)0x0;
    puVar11 = (undefined8 *)func_0x00fac1f0(plVar7);
code_r0x0153a34c:
    plVar9 = (long *)(*(code *)*puVar11)(plVar7,puVar11[1]);
    if (plVar9 != (long *)0x0) {
      plVar8 = &lStack_1e4;
      unaff_x22 = (undefined8 *)0x3d22180;
      unaff_x23 = 0x3d1d260;
      unaff_x24 = 2;
code_r0x0153a37c:
      lVar17 = *plVar9;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar18 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar11 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto code_r0x0153a3c8;
          }
          piVar20 = piVar20 + 4;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      puVar16 = (undefined8 *)0x0;
      puVar11 = (undefined8 *)func_0x00fac1f0(plVar9);
code_r0x0153a3c8:
      plVar12 = (long *)(*(code *)*puVar11)(plVar9,puVar11[1]);
      if (((ulong)plVar12 & 1) == 0) {
        plVar7 = (long *)0x0;
        goto joined_r0x0153a4b4;
      }
      lVar17 = *plVar9;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar18 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == /*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260) {
            puVar11 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto code_r0x0153a424;
          }
          piVar20 = piVar20 + 4;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      puVar16 = (undefined8 *)0x0;
      puVar11 = (undefined8 *)func_0x00fac1f0(plVar9);
code_r0x0153a424:
      lVar17 = (*(code *)*puVar11)(plVar9,puVar11[1]);
      if (lVar17 == 0) {
        func_0x00f78af4();
        goto code_r0x0153a55c;
      }
      lVar19 = *(long *)(lVar17 + 0x10);
      if (lVar19 != 0) {
        if (*(int *)(lVar19 + 0x50) == 2) {
          if (plVar10[0x4b] == 0) {
            func_0x00f78af4();
            goto code_r0x0153a55c;
          }
          plVar7 = *(long **)(plVar10[0x4b] + 0x20);
          if (plVar7 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x0153a55c;
          }
          uStack_1f0 = *(undefined8 *)(lVar19 + 0x48);
          puVar16 = (undefined8 *)(ulong)*(uint *)(lVar17 + 0x78);
          uStack_1e8 = 2;
          uStack_1dc = *(undefined8 *)(lVar19 + 0x5c);
          lStack_1e4 = *(long *)(lVar19 + 0x54);
          uStack_1d4 = *(undefined4 *)(lVar19 + 100);
          uStack_208 = *(undefined8 *)(lVar17 + 0x88);
          uStack_210 = *(undefined8 *)(lVar17 + 0x80);
          uStack_200 = *(undefined8 *)(lVar17 + 0x90);
          (**(code **)(*plVar7 + 0x248))
                    (0,plVar7,&uStack_1f0,puVar16,0,&uStack_210,*(undefined8 *)(*plVar7 + 0x250));
        }
        goto code_r0x0153a37c;
      }
      func_0x00f78af4();
      goto code_r0x0153a55c;
    }
  }
  func_0x00f78af4();
code_r0x0153a55c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x153a560);
  (*pcVar1)();
joined_r0x0153a4b4:
  if (plVar9 != (long *)0x0) {
    lVar17 = *plVar9;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar11 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
          goto code_r0x0153a50c;
        }
        piVar20 = piVar20 + 4;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    puVar16 = (undefined8 *)0x0;
    puVar11 = (undefined8 *)func_0x00fac1f0(plVar9);
code_r0x0153a50c:
    plVar12 = (long *)(*(code *)*puVar11)(plVar9,puVar11[1]);
  }
  if (plVar7 == (long *)0x0) {
    return plVar12;
  }
  func_0x00f78ac0(plVar7,0);
  if (extraout_w1 != 1) goto code_r0x0153a5a4;
  plVar7 = (long *)___cxa_begin_catch();
  plVar7 = (long *)*plVar7;
  plVar12 = (long *)___cxa_end_catch();
  goto joined_r0x0153a4b4;
code_r0x0153a5a4:
  puVar30 = &Atlas_Contexts_BattleGameContext__IsFrenzyActive;
  plVar12 = (long *)__Unwind_Resume();
code_r0x0153a5a8:
  *(long **)((long)plVar2 + -0x20) = plVar7;
  *(long **)((long)plVar2 + -0x18) = plVar9;
  *(undefined8 ********)((long)plVar2 + -0x10) = pppppppuVar29;
  *(undefined **)((long)plVar2 + -8) = puVar30;
  if ((bRam0000000003eb4f03 & 1) == 0) {
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb4f03 = 1;
  }
  if ((*(char *)((long)plVar12 + 0x274) == '\0') || ((char)plVar12[0x4c] == '\0')) {
    return (long *)0x0;
  }
  if ((plVar12[0x4b] != 0) && (lVar17 = *(long *)(plVar12[0x4b] + 0x20), lVar17 != 0)) {
    /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c((undefined1 *)((long)plVar2 + -0x38),lVar17,0);
    lVar17 = plVar12[0x4e];
    *(long *)((long)plVar2 + -0x48) = plVar12[0x4f];
    *(long *)((long)plVar2 + -0x50) = lVar17;
    *(long *)((long)plVar2 + -0x40) = plVar12[0x50];
    lVar17 = plVar12[0x4d];
    if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(undefined8 *)((long)plVar2 + -0x78) = *(undefined8 *)((long)plVar2 + -0x48);
    *(undefined8 *)((long)plVar2 + -0x80) = *(undefined8 *)((long)plVar2 + -0x50);
    *(undefined8 *)((long)plVar2 + -0x70) = *(undefined8 *)((long)plVar2 + -0x40);
    /*Core.Networking.NetworkSessionTime$$op_Subtraction*/ func_0x0165f1c4((undefined1 *)((long)plVar2 + -0x68),(undefined1 *)((long)plVar2 + -0x80),
                    (int)lVar17,0);
    *(undefined8 *)((long)plVar2 + -0x98) = *(undefined8 *)((long)plVar2 + -0x30);
    *(undefined8 *)((long)plVar2 + -0xa0) = *(undefined8 *)((long)plVar2 + -0x38);
    *(undefined8 *)((long)plVar2 + -0x90) = *(undefined8 *)((long)plVar2 + -0x28);
    *(undefined8 *)((long)plVar2 + -0xb8) = *(undefined8 *)((long)plVar2 + -0x60);
    *(undefined8 *)((long)plVar2 + -0xc0) = *(undefined8 *)((long)plVar2 + -0x68);
    *(undefined8 *)((long)plVar2 + -0xb0) = *(undefined8 *)((long)plVar2 + -0x58);
    plVar7 = (long *)/*Core.Networking.NetworkSessionTime$$op_GreaterThanOrEqual*/ func_0x0165e314((undefined1 *)((long)plVar2 + -0xa0),
                                     (undefined1 *)((long)plVar2 + -0xc0),0);
    return plVar7;
  }
  auVar42 = func_0x00f78af4();
  lVar17 = auVar42._8_8_;
  *(undefined1 **)((long)plVar2 + -0xd0) = (undefined1 *)((long)plVar2 + -0x10);
  *(undefined **)((long)plVar2 + -200) = &Atlas_Contexts_BattleGameContext__GetRankingForPlayer;
  if (lVar17 != 0) {
    uVar13 = *(undefined8 *)(lVar17 + 0x88);
    uVar21 = *(undefined8 *)(lVar17 + 0x80);
    puVar16[2] = *(undefined8 *)(lVar17 + 0x90);
    puVar16[1] = uVar13;
    *puVar16 = uVar21;
    return auVar42._0_8_;
  }
  auVar42 = func_0x00f78af4();
  lVar17 = auVar42._8_8_;
  *(undefined8 *)((long)plVar2 + -0xf0) = 0x3eb4000;
  *(long **)((long)plVar2 + -0xe8) = plVar12;
  *(undefined1 **)((long)plVar2 + -0xe0) = (undefined1 *)((long)plVar2 + -0xd0);
  *(undefined **)((long)plVar2 + -0xd8) = &Atlas_Contexts_BattleGameContext__SetupGameContextScreen;
  *(long *)(auVar42._0_8_ + 0x48) = lVar17;
  if (puVar16 == (undefined8 *)0x0) {
code_r0x0153a734:
    plVar9 = (long *)func_0x00f78af4();
    *(undefined8 **)((long)plVar2 + -0x120) = unaff_x22;
    *(long **)((long)plVar2 + -0x118) = plVar8;
    *(undefined8 *)((long)plVar2 + -0x110) = 0x3eb4000;
    *(long **)((long)plVar2 + -0x108) = plVar12;
    *(undefined1 **)((long)plVar2 + -0x100) = (undefined1 *)((long)plVar2 + -0xe0);
    *(undefined **)((long)plVar2 + -0xf8) = &Atlas_Contexts_BattleGameContext__OnHostMigrationSynced
    ;
    plVar7 = plVar9;
    if ((bRam0000000003eb4f05 & 1) == 0) {
      plVar7 = (long *)func_0x00f78a20(0x3d237b8);
      bRam0000000003eb4f05 = 1;
    }
    if (*(char *)((long)plVar9 + 0x274) != '\0') {
      lVar17 = plVar9[0x4e];
      *(long *)((long)plVar2 + -0x138) = plVar9[0x4f];
      *(long *)((long)plVar2 + -0x140) = lVar17;
      *(long *)((long)plVar2 + -0x130) = plVar9[0x50];
      if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined8 *)((long)plVar2 + -0x158) = *(undefined8 *)((long)plVar2 + -0x138);
      *(undefined8 *)((long)plVar2 + -0x160) = *(undefined8 *)((long)plVar2 + -0x140);
      *(undefined8 *)((long)plVar2 + -0x150) = *(undefined8 *)((long)plVar2 + -0x130);
      plVar7 = (long *)/*Core.Networking.NetworkSessionTime$$op_Addition*/ func_0x0165f11c((undefined1 *)((long)plVar2 + -0x178),
                                       (undefined1 *)((long)plVar2 + -0x160),puVar16,0);
      lVar17 = *(long *)((long)plVar2 + -0x178);
      plVar9[0x4f] = *(long *)((long)plVar2 + -0x170);
      plVar9[0x4e] = lVar17;
      plVar9[0x50] = *(long *)((long)plVar2 + -0x168);
    }
    return plVar7;
  }
  *(undefined4 *)(puVar16 + 0x52) = 1;
  plVar12 = (long *)0x0;
  if (lVar17 == 0) goto code_r0x0153a734;
  *(undefined8 *)((long)plVar2 + -0x130) = unaff_x24;
  *(ulong *)((long)plVar2 + -0x128) = unaff_x23;
  *(undefined8 **)((long)plVar2 + -0x120) = unaff_x22;
  *(long **)((long)plVar2 + -0x118) = plVar8;
  *(undefined8 *)((long)plVar2 + -0x110) = 0x3eb4000;
  *(long *)((long)plVar2 + -0x108) = lVar17;
  *(undefined1 **)((long)plVar2 + -0x100) = (undefined1 *)((long)plVar2 + -0xe0);
  *(undefined **)((long)plVar2 + -0xf8) = &UNK_0153a718;
  uVar21 = 0x3eb5000;
  uVar18 = 0x3d41080;
  if ((bRam0000000003eb522b & 1) == 0) {
    func_0x00f78a20(0x3d41080,8,1,0);
    bRam0000000003eb522b = 1;
  }
  lVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar17,uRam0000000003d41080);
  if (lVar19 != 0) {
    *(undefined8 *)((long)plVar2 + -0x110) = *(undefined8 *)((long)plVar2 + -0x110);
    *(undefined8 *)((long)plVar2 + -0x108) = *(undefined8 *)((long)plVar2 + -0x108);
    *(undefined8 *)((long)plVar2 + -0x100) = *(undefined8 *)((long)plVar2 + -0x100);
    *(undefined8 *)((long)plVar2 + -0xf8) = *(undefined8 *)((long)plVar2 + -0xf8);
                    /* WARNING: Could not recover jumptable at 0x015ac724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar7 = (long *)(*(code *)(&UNK_015ac728 + (ulong)UNK_033f8a48 * 4))(lVar19,8,1,0);
    return plVar7;
  }
  uVar13 = func_0x00f78af4();
  *(undefined8 *)((long)plVar2 + -0x160) = 0x3eb5000;
  *(long *)((long)plVar2 + -0x158) = lVar17;
  *(undefined8 *)((long)plVar2 + -0x150) = 8;
  *(undefined8 *)((long)plVar2 + -0x148) = 1;
  *(undefined1 **)((long)plVar2 + -0x140) = (undefined1 *)((long)plVar2 + -0x100);
  *(undefined **)((long)plVar2 + -0x138) = &Atlas_UI_Screens_GameInProgressScreen__UpdateArcade;
  if ((bRam0000000003eb5227 & 1) == 0) {
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb5227 = 1;
  }
  plVar7 = (long *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar13,uRam0000000003d41088);
  if ((plVar7 != (long *)0x0) && (plVar7[6] != 0)) {
    return plVar7;
  }
  uVar14 = func_0x00f78af4();
  *(undefined8 *)((long)plVar2 + -400) = 0x3eb5000;
  *(undefined8 *)((long)plVar2 + -0x188) = 0x3d41088;
  *(undefined8 *)((long)plVar2 + -0x180) = 0x3eb5000;
  *(undefined8 *)((long)plVar2 + -0x178) = uVar13;
  *(undefined1 **)((long)plVar2 + -0x170) = (undefined1 *)((long)plVar2 + -0x140);
  *(undefined **)((long)plVar2 + -0x168) = &Atlas_UI_Screens_GameInProgressScreen__OnLateUpdate;
  if ((bRam0000000003eb5228 & 1) == 0) {
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb5228 = 1;
  }
  *(undefined8 *)((long)plVar2 + -0x1d0) = unaff_x24;
  *(undefined8 *)((long)plVar2 + -0x1c8) = 0x3d41080;
  *(undefined8 *)((long)plVar2 + -0x1c0) = 0x3eb5000;
  *(undefined8 *)((long)plVar2 + -0x1b8) = 0x3eb5000;
  *(undefined8 *)((long)plVar2 + -0x1b0) = 0x3d41088;
  *(undefined8 *)((long)plVar2 + -0x1a8) = uVar14;
  *(undefined1 **)((long)plVar2 + -0x1a0) = (undefined1 *)((long)plVar2 + -0x170);
  *(undefined **)((long)plVar2 + -0x198) = &UNK_015aa6a0;
  uVar22 = 0x3eb5000;
  if ((bRam0000000003eb522e & 1) == 0) {
    func_0x00f78a20(0x3d3b9d0);
    func_0x00f78a20(0x3d3b898);
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb522e = 1;
  }
  lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar14,uRam0000000003d41088);
  uVar25 = 0x3d41080;
  if (((lVar17 != 0) && (*(long *)(lVar17 + 0x38) != 0)) &&
     (lVar17 = *(long *)(*(long *)(lVar17 + 0x38) + 200), uVar25 = uVar18, lVar17 != 0)) {
    uVar27 = *(uint *)(lVar17 + 0x18);
    uVar22 = (ulong)uVar27;
    lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar14,uRam0000000003d41088);
    if (((lVar17 != 0) && (*(long *)(lVar17 + 0x38) != 0)) &&
       (lVar17 = *(long *)(*(long *)(lVar17 + 0x38) + 0xd0), lVar17 != 0)) {
      uVar13 = 0x3d41080;
      uVar40 = *(uint *)(lVar17 + 0x18);
      uVar25 = (ulong)uVar40;
      lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar14,uRam0000000003d41080);
      uVar21 = 0x3d41080;
      if (lVar17 != 0) {
        /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetWeaponIndicatorActive*/ func_0x015adeac(lVar17,0 < (int)(uVar40 + uVar27),0);
        uVar22 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar14,uRam0000000003d41080);
        lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar14,uRam0000000003d41088);
        if (((lVar17 != 0) && (uVar21 = uVar13, *(long *)(lVar17 + 0x38) != 0)) &&
           (*(undefined8 *)((long)plVar2 + -0x1d8) = *(undefined8 *)(*(long *)(lVar17 + 0x38) + 200)
           , uVar22 != 0)) {
          /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetCulturePodWeaponIndicatorArrows*/ func_0x015adf10(uVar22,(undefined1 *)((long)plVar2 + -0x1d8),0);
          uVar22 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar14,uRam0000000003d41080);
          lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar14,uRam0000000003d41088);
          if (((lVar17 != 0) && (*(long *)(lVar17 + 0x38) != 0)) &&
             (*(undefined8 *)((long)plVar2 + -0x1e0) =
                   *(undefined8 *)(*(long *)(lVar17 + 0x38) + 0xd0), uVar22 != 0)) {
            plVar7 = (long *)/*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetSheldonWeaponIndicatorArrows*/ func_0x015ae03c(uVar22,(undefined1 *)((long)plVar2 + -0x1e0),0);
            return plVar7;
          }
        }
      }
    }
  }
  lVar17 = func_0x00f78af4();
  *(undefined8 *)((long)plVar2 + -0x280) = unaff_d15;
  *(undefined8 *)((long)plVar2 + -0x278) = unaff_d14;
  *(undefined8 *)((long)plVar2 + -0x270) = unaff_d13;
  *(undefined8 *)((long)plVar2 + -0x268) = unaff_d12;
  *(undefined8 *)((long)plVar2 + -0x260) = unaff_d11;
  *(undefined8 *)((long)plVar2 + -600) = unaff_d10;
  *(undefined8 *)((long)plVar2 + -0x250) = unaff_d9;
  *(undefined8 *)((long)plVar2 + -0x248) = unaff_d8;
  *(undefined8 *)((long)plVar2 + -0x240) = unaff_x28;
  *(undefined8 *)((long)plVar2 + -0x238) = unaff_x27;
  *(undefined8 *)((long)plVar2 + -0x230) = unaff_x26;
  *(undefined8 *)((long)plVar2 + -0x228) = unaff_x25;
  *(undefined8 *)((long)plVar2 + -0x220) = unaff_x24;
  *(ulong *)((long)plVar2 + -0x218) = uVar25;
  *(undefined8 *)((long)plVar2 + -0x210) = uVar21;
  *(undefined8 *)((long)plVar2 + -0x208) = 0x3d41088;
  *(ulong *)((long)plVar2 + -0x200) = uVar22;
  *(undefined8 *)((long)plVar2 + -0x1f8) = uVar14;
  *(undefined1 **)((long)plVar2 + -0x1f0) = (undefined1 *)((long)plVar2 + -0x1a0);
  *(undefined **)((long)plVar2 + -0x1e8) =
       &Atlas_UI_Screens_GameInProgressScreen__UpdateKartIndicator;
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
  *(undefined8 *)((long)plVar2 + -0x2a0) = 0;
  *(undefined8 *)((long)plVar2 + -0x298) = 0;
  *(undefined8 *)((long)plVar2 + -0x290) = 0;
  *(undefined4 *)((long)plVar2 + -0x2a8) = 0;
  *(undefined8 *)((long)plVar2 + -0x2b0) = 0;
  *(undefined4 *)((long)plVar2 + -0x2b8) = 0;
  *(undefined8 *)((long)plVar2 + -0x2c0) = 0;
  *(undefined4 *)((long)plVar2 + -0x2c8) = 0;
  *(undefined8 *)((long)plVar2 + -0x2d8) = 0;
  *(undefined8 *)((long)plVar2 + -0x2d0) = 0;
  *(undefined8 *)((long)plVar2 + -0x2e0) = 0;
  *(undefined4 *)((long)plVar2 + -0x2e4) = 0;
  lVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar17,uRam0000000003d41080);
  if (((lVar19 == 0) || (*(long *)(lVar19 + 0x1c0) == 0)) ||
     (lVar19 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar19 + 0x1c0),0), lVar19 == 0)) goto code_r0x015ab4c4;
  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar19,*(char *)(lVar17 + 0x109) == '\0',0);
  lVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar17,uRam0000000003d41080);
  if (((lVar19 == 0) || (*(long *)(lVar19 + 0x1c0) == 0)) ||
     (lVar19 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar19 + 0x1c0),0), lVar19 == 0)) goto code_r0x015ab4c4;
  plVar7 = (long *)/*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar19,0);
  if ((int)plVar7 == 0) {
    return plVar7;
  }
  *(undefined1 *)(lVar17 + 0x9c) = 0;
  lVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar17,uRam0000000003d41090);
  if ((lVar19 == 0) || (*(long *)(lVar19 + 0x40) == 0)) goto code_r0x015ab4c4;
  uVar21 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(lVar19 + 0x40),0);
  *(undefined8 *)((long)plVar2 + -800) = uVar21;
  if (*(long *)(lVar17 + 0x78) == 0) {
code_r0x015aaa34:
    lVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar17,uRam0000000003d41088);
    if ((lVar19 == 0) || (*(long *)(lVar19 + 0x38) == 0)) goto code_r0x015ab4c4;
    if (*(int *)(*(long *)(lVar19 + 0x38) + 0x74) == 1) {
      *(undefined8 *)(lVar17 + 0x78) = *(undefined8 *)(lVar17 + 0x80);
    }
  }
  else {
    lVar19 = *(long *)(*(long *)(lVar17 + 0x78) + 0x10);
    if (lVar19 == 0) goto code_r0x015ab4c4;
    if (*(int *)(lVar19 + 0x74) != 1) goto code_r0x015aaa34;
  }
  plVar7 = (long *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar17,uRam0000000003d41080);
  if (plVar7 == (long *)0x0) {
code_r0x015ab4c4:
    func_0x00f78af4();
code_r0x015ab4c8:
    uVar21 = func_0x00f78b24();
    func_0x00f78ac0(uVar21,0);
    __Unwind_Resume();
code_r0x015ab4d8:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x15ab4dc);
    (*pcVar1)();
  }
  iVar28 = 0;
  iVar5 = 0;
  *(undefined4 *)((long)plVar2 + -0x314) = 0;
  uVar27 = 0;
code_r0x015aaa94:
  if (plVar7[0x39] == 0) goto code_r0x015ab4c4;
  if (*(int *)(plVar7[0x39] + 0x18) <= (int)uVar27) {
    return plVar7;
  }
  if (*(int *)(lVar17 + 0xbc) <= *(int *)((long)plVar2 + -0x314)) {
    return plVar7;
  }
  lVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar17,uRam0000000003d41080);
  if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x1c8), lVar19 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar19 + 0x18) <= uVar27) goto code_r0x015ab4c8;
  lVar23 = (long)(int)uVar27;
  lVar19 = *(long *)(lVar19 + lVar23 * 8 + 0x20);
  if (lVar19 == 0) goto code_r0x015ab4c4;
  if (*(long *)(lVar19 + 0x80) == 0) {
    bVar4 = false;
  }
  else {
    lVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar17,uRam0000000003d41080);
    if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x1c8), lVar19 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar19 + 0x18) <= uVar27) goto code_r0x015ab4c8;
    lVar19 = *(long *)(lVar19 + lVar23 * 8 + 0x20);
    if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x80), lVar19 == 0)) goto code_r0x015ab4c4;
    bVar4 = *(int *)(lVar19 + 0x74) == 1;
  }
  lVar19 = *(long *)(lVar17 + 0x78);
  if ((bool)(bVar4 & lVar19 == 0)) {
    if (*(long *)(lVar17 + 0x70) == 0) goto code_r0x015ab4c4;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)plVar2 + -0x310),*(long *)(lVar17 + 0x70),
                    uRam0000000003d3d1c8);
    *(undefined8 *)((long)plVar2 + -0x298) = *(undefined8 *)((long)plVar2 + -0x308);
    *(undefined8 *)((long)plVar2 + -0x2a0) = *(undefined8 *)((long)plVar2 + -0x310);
    *(undefined8 *)((long)plVar2 + -0x290) = *(undefined8 *)((long)plVar2 + -0x300);
    do {
      uVar18 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)plVar2 + -0x2a0),uRam0000000003d33458);
      if ((uVar18 & 1) == 0) goto code_r0x015aabdc;
      lVar19 = *(long *)((long)plVar2 + -0x290);
      if (lVar19 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar26 = *(long *)(lVar19 + 0x10);
      lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar17,uRam0000000003d41080);
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
        uVar21 = func_0x00f78b24();
        func_0x00f78ac0(uVar21,0);
        goto code_r0x015ab4d8;
      }
      lVar15 = *(long *)(lVar15 + lVar23 * 8 + 0x20);
      if (lVar15 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
    } while (lVar26 != *(long *)(lVar15 + 0x80));
    *(long *)(lVar17 + 0x78) = lVar19;
code_r0x015aabdc:
    *(undefined4 *)((long)plVar2 + (long)iVar5 * 4 + -0x2f8) = 0x132;
    iVar28 = *(int *)((long)plVar2 + -0x2e4);
    iVar5 = iVar28 + 1;
    *(int *)((long)plVar2 + -0x2e4) = iVar5;
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)plVar2 + -0x2a0),uRam0000000003d33450);
    if ((iVar5 != 0) && (*(int *)((long)plVar2 + (long)iVar28 * 4 + -0x2f8) == 0x132)) {
      *(int *)((long)plVar2 + -0x2e4) = iVar28;
      iVar5 = iVar28;
    }
    lVar19 = *(long *)(lVar17 + 0x78);
    iVar28 = iVar5;
  }
  if (lVar19 == 0) {
code_r0x015aac8c:
    uVar21 = 0;
    cVar24 = '\0';
  }
  else {
    lVar15 = *(long *)(lVar19 + 0x10);
    lVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar17,uRam0000000003d41080);
    if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x1c8), lVar19 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar19 + 0x18) <= uVar27) goto code_r0x015ab4c8;
    lVar19 = *(long *)(lVar19 + lVar23 * 8 + 0x20);
    if (lVar19 == 0) goto code_r0x015ab4c4;
    if (!(bool)(bVar4 & lVar15 == *(long *)(lVar19 + 0x80))) goto code_r0x015aac8c;
    cVar24 = *(char *)(lVar17 + 0xb8);
    uVar21 = 1;
  }
  lVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar17,uRam0000000003d41080);
  if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x1c8), lVar19 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar19 + 0x18) <= uVar27) goto code_r0x015ab4c8;
  lVar19 = *(long *)(lVar19 + lVar23 * 8 + 0x20);
  if (lVar19 == 0) goto code_r0x015ab4c4;
  fVar38 = param_3;
  if (*(long *)(lVar19 + 0x80) != 0) {
    lVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar17,uRam0000000003d41080);
    if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x1c8), lVar19 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar19 + 0x18) <= uVar27) goto code_r0x015ab4c8;
    lVar19 = *(long *)(lVar19 + lVar23 * 8 + 0x20);
    if (lVar19 == 0) goto code_r0x015ab4c4;
    iVar6 = /*Atlas.UI.KartIndicatorBehaviour$$get_CanUpdateTarget*/ func_0x015cc628(lVar19,0);
    fVar41 = (float)param_2;
    if ((iVar6 != 0) && (fVar38 = param_3, *(char *)(lVar17 + 0xb8) == '\0')) goto code_r0x015aaf94;
    lVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar17,uRam0000000003d41080);
    if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x1c8), lVar19 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar19 + 0x18) <= uVar27) goto code_r0x015ab4c8;
    lVar19 = *(long *)(lVar19 + lVar23 * 8 + 0x20);
    if ((((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x80), lVar19 == 0)) ||
        (lVar19 = *(long *)(lVar19 + 0x10), lVar19 == 0)) ||
       (lVar19 = *(long *)(lVar19 + 0x18), lVar19 == 0)) goto code_r0x015ab4c4;
    fVar31 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar19,0);
    *(float *)((long)plVar2 + -0x2b0) = fVar31;
    *(float *)((long)plVar2 + -0x2ac) = fVar41;
    *(float *)((long)plVar2 + -0x2a8) = param_3;
    fVar39 = param_3;
    fVar38 = fVar41;
    lVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar17,uRam0000000003d41088);
    if (((lVar19 == 0) || (*(long *)(lVar19 + 0x38) == 0)) ||
       ((lVar19 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10), lVar19 == 0 ||
        (lVar19 = *(long *)(lVar19 + 0x18), lVar19 == 0)))) goto code_r0x015ab4c4;
    fVar32 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar19,0);
    *(float *)((long)plVar2 + -0x2c0) = fVar32;
    *(float *)((long)plVar2 + -700) = fVar38;
    *(float *)((long)plVar2 + -0x2b8) = fVar39;
    fVar39 = param_3 - fVar39;
    *(float *)((long)plVar2 + -0x2d0) = fVar31 - fVar32;
    *(float *)((long)plVar2 + -0x2cc) = fVar41 - fVar38;
    *(float *)((long)plVar2 + -0x2c8) = fVar39;
    if (cVar24 != '\0') {
      if (*(long *)((long)plVar2 + -800) == 0) goto code_r0x015ab4c4;
code_r0x015aadd4:
      param_3 = param_3 + *(float *)(lVar17 + 0xa8);
      param_4 = *(float *)(lVar17 + 0xa0);
      uVar18 = (ulong)(uint)(fVar41 + *(float *)(lVar17 + 0xa4));
      fVar39 = (float)/*UnityEngine.Camera$$WorldToViewportPoint*/ func_0x0321fe94(fVar31 + param_4,*(undefined8 *)((long)plVar2 + -800),0);
      fVar41 = (float)uVar18;
      fVar38 = param_3;
      if (cVar24 == '\0') {
        bVar4 = false;
        bVar3 = true;
        if (0.0 <= fVar39) {
          bVar4 = false;
          bVar3 = true;
          if (!NAN(fVar39)) {
            bVar4 = fVar39 == 1.0;
            bVar3 = 1.0 <= fVar39;
          }
        }
        param_2 = uVar18;
        if (!bVar3 || bVar4) {
          bVar4 = false;
          bVar3 = true;
          if (0.0 <= fVar41) {
            bVar4 = false;
            bVar3 = true;
            if (!NAN(fVar41)) {
              bVar4 = fVar41 == 1.0;
              bVar3 = 1.0 <= fVar41;
            }
          }
          if ((!bVar3 || bVar4) && (0.0 <= param_3)) {
            iVar6 = /*Atlas.UI.Screens.GameInProgressScreen$$CanSeeTarget*/ func_0x015ab70c(lVar17,(undefined1 *)((long)plVar2 + -0x2c0),
                                    (undefined1 *)((long)plVar2 + -0x2b0),1,1);
            fVar41 = (float)param_2;
            if (iVar6 != 0) goto code_r0x015aae04;
          }
        }
        goto code_r0x015aaf94;
      }
code_r0x015aae04:
      lVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar17,uRam0000000003d41080);
      if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x1c8), lVar19 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar19 + 0x18) <= uVar27) goto code_r0x015ab4c8;
      lVar15 = *(long *)(lVar19 + lVar23 * 8 + 0x20);
      lVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar17,uRam0000000003d41080);
      if ((lVar19 == 0) || (*(long *)(lVar19 + 0x1c0) == 0)) goto code_r0x015ab4c4;
      uVar33 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar19 + 0x1c0),0);
      *(undefined4 *)((long)plVar2 + -0x2e0) = uVar33;
      *(float *)((long)plVar2 + -0x2dc) = fVar41;
      *(float *)((long)plVar2 + -0x2d8) = fVar38;
      *(float *)((long)plVar2 + -0x2d4) = param_4;
      param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584((undefined1 *)((long)plVar2 + -0x2e0),0);
      if (lVar15 == 0) goto code_r0x015ab4c4;
      param_2 = uVar18 & 0xffffffff;
      /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(fVar39,lVar15,0);
      lVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar17,uRam0000000003d41080);
      if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x1c8), lVar19 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar19 + 0x18) <= uVar27) goto code_r0x015ab4c8;
      lVar19 = *(long *)(lVar19 + lVar23 * 8 + 0x20);
      if (lVar19 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar19,uVar21,*(undefined1 *)(lVar17 + 0xb8),0);
      if (*(char *)(lVar17 + 0xb8) != '\0') {
        lVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar17,uRam0000000003d41080);
        if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x1c8), lVar19 == 0))
        goto code_r0x015ab4c4;
        if (*(uint *)(lVar19 + 0x18) <= uVar27) goto code_r0x015ab4c8;
        lVar19 = *(long *)(lVar19 + lVar23 * 8 + 0x20);
        if (lVar19 == 0) goto code_r0x015ab4c4;
        *(undefined4 *)(lVar19 + 0x88) = *(undefined4 *)(lVar17 + 0x98);
      }
      *(int *)((long)plVar2 + -0x314) = *(int *)((long)plVar2 + -0x314) + 1;
      goto code_r0x015ab2c0;
    }
    fVar32 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0((undefined1 *)((long)plVar2 + -0x2d0),0);
    fVar36 = *(float *)(lVar17 + 0x8c);
    param_2 = (ulong)(uint)fVar36;
    fVar38 = fVar39;
    if (fVar36 <= fVar32) goto code_r0x015aaf94;
    fVar32 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4((undefined1 *)((long)plVar2 + -0x2d0),0);
    if ((*(long *)((long)plVar2 + -800) == 0) ||
       (fVar38 = fVar39, fVar37 = fVar36, lVar19 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)((long)plVar2 + -800),0)
       , lVar19 == 0)) goto code_r0x015ab4c4;
    fVar34 = (float)/*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar19,0);
    param_2 = (ulong)(uint)*(float *)(lVar17 + 0x94);
    if (*(float *)(lVar17 + 0x94) < fVar39 * fVar38 + fVar32 * fVar34 + fVar36 * fVar37)
    goto code_r0x015aadd4;
  }
code_r0x015aaf94:
  lVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar17,uRam0000000003d41080);
  if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x1c8), lVar19 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar19 + 0x18) <= uVar27) goto code_r0x015ab4c8;
  lVar19 = *(long *)(lVar19 + lVar23 * 8 + 0x20);
  if (lVar19 == 0) goto code_r0x015ab4c4;
  param_3 = fVar38;
  if (*(long *)(lVar19 + 0x80) != 0) {
    lVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar17,uRam0000000003d41080);
    if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x1c8), lVar19 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar19 + 0x18) <= uVar27) goto code_r0x015ab4c8;
    lVar19 = *(long *)(lVar19 + lVar23 * 8 + 0x20);
    if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x80), lVar19 == 0)) goto code_r0x015ab4c4;
    *(undefined1 *)(lVar19 + 0x9c) = 0;
    param_3 = fVar38;
  }
  if (*(char *)(lVar17 + 0x9c) == '\0') {
    if (*(char *)(lVar17 + 0xb8) == '\0') {
      /*Atlas.UI.Screens.GameInProgressScreen$$UpdateAllKartIndicatorDataRace*/ func_0x015abdd0(lVar17);
    }
    else {
      /*Atlas.UI.Screens.GameInProgressScreen$$UpdateAllKartIndicatorDataBattle*/ func_0x015ab8c0(lVar17);
    }
  }
  if (*(char *)(lVar17 + 0x10a) == '\0') {
    cVar24 = *(char *)(lVar17 + 0xb8);
  }
  else {
    cVar24 = '\0';
  }
  if (*(long *)(lVar17 + 0x70) == 0) goto code_r0x015ab4c4;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)plVar2 + -0x310),*(long *)(lVar17 + 0x70),
                  uRam0000000003d3d1c8);
  *(undefined8 *)((long)plVar2 + -0x298) = *(undefined8 *)((long)plVar2 + -0x308);
  *(undefined8 *)((long)plVar2 + -0x2a0) = *(undefined8 *)((long)plVar2 + -0x310);
  *(undefined8 *)((long)plVar2 + -0x290) = *(undefined8 *)((long)plVar2 + -0x300);
  do {
    do {
      uVar18 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)plVar2 + -0x2a0),uRam0000000003d33458);
      if ((uVar18 & 1) == 0) {
code_r0x015ab1e8:
        bVar4 = false;
        goto code_r0x015ab1ec;
      }
      lVar19 = *(long *)((long)plVar2 + -0x290);
      if (lVar19 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      fVar38 = *(float *)(lVar17 + 0x8c);
      param_2 = (ulong)(uint)fVar38;
      if ((fVar38 < *(float *)(lVar19 + 0x18)) && (lVar19 != *(long *)(lVar17 + 0x78)))
      goto code_r0x015ab1e8;
    } while (*(char *)(lVar19 + 0x28) == '\0');
    lVar15 = *(long *)(lVar19 + 0x10);
    if (lVar15 == 0) {
      func_0x00f78af4();
      goto code_r0x015ab4d8;
    }
  } while (*(char *)(lVar15 + 0x9c) != '\0');
  *(undefined1 *)(lVar15 + 0x9c) = 1;
  lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar17,uRam0000000003d41080);
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
    uVar21 = func_0x00f78b24();
    func_0x00f78ac0(uVar21,0);
    goto code_r0x015ab4d8;
  }
  lVar15 = *(long *)(lVar15 + lVar23 * 8 + 0x20);
  if (lVar15 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(*(undefined4 *)(lVar17 + 0x98),lVar15,*(undefined8 *)(lVar19 + 0x10),
                  cVar24 != '\0',0);
  lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar17,uRam0000000003d41080);
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
    uVar21 = func_0x00f78b24();
    func_0x00f78ac0(uVar21,0);
    goto code_r0x015ab4d8;
  }
  lVar15 = *(long *)(lVar15 + lVar23 * 8 + 0x20);
  uVar33 = *(undefined4 *)(lVar19 + 0x1c);
  uVar40 = *(uint *)(lVar19 + 0x20);
  fVar41 = *(float *)(lVar19 + 0x24);
  lVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar17,uRam0000000003d41080);
  if (lVar19 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(long *)(lVar19 + 0x1c0) == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  uVar35 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar19 + 0x1c0),0);
  *(undefined4 *)((long)plVar2 + -0x2e0) = uVar35;
  *(float *)((long)plVar2 + -0x2dc) = fVar38;
  *(float *)((long)plVar2 + -0x2d8) = param_3;
  *(float *)((long)plVar2 + -0x2d4) = param_4;
  param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584((undefined1 *)((long)plVar2 + -0x2e0),0);
  if (lVar15 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  param_2 = (ulong)uVar40;
  /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(uVar33,lVar15,0);
  lVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar17,uRam0000000003d41080);
  if (lVar19 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar19 = *(long *)(lVar19 + 0x1c8);
  if (lVar19 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar19 + 0x18) <= uVar27) {
    uVar21 = func_0x00f78b24();
    func_0x00f78ac0(uVar21,0);
    goto code_r0x015ab4d8;
  }
  lVar19 = *(long *)(lVar19 + lVar23 * 8 + 0x20);
  if (lVar19 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar19,uVar21,*(undefined1 *)(lVar17 + 0xb8),0);
  *(int *)((long)plVar2 + -0x314) = *(int *)((long)plVar2 + -0x314) + 1;
  bVar4 = true;
  param_3 = fVar41;
code_r0x015ab1ec:
  *(undefined4 *)((long)plVar2 + (long)iVar28 * 4 + -0x2f8) = 0x41c;
  iVar5 = *(int *)((long)plVar2 + -0x2e4);
  iVar28 = iVar5 + 1;
  *(int *)((long)plVar2 + -0x2e4) = iVar28;
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)plVar2 + -0x2a0),uRam0000000003d33450);
  if ((iVar28 != 0) && (*(int *)((long)plVar2 + (long)iVar5 * 4 + -0x2f8) == 0x41c)) {
    *(int *)((long)plVar2 + -0x2e4) = iVar5;
    iVar28 = iVar5;
  }
  iVar5 = iVar28;
  if (!bVar4) {
    lVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar17,uRam0000000003d41080);
    if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x1c8), lVar19 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar19 + 0x18) <= uVar27) goto code_r0x015ab4c8;
    lVar19 = *(long *)(lVar19 + lVar23 * 8 + 0x20);
    if (lVar19 == 0) goto code_r0x015ab4c4;
    if (*(long *)(lVar19 + 0x80) != 0) {
      lVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar17,uRam0000000003d41080);
      if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x1c8), lVar19 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar19 + 0x18) <= uVar27) goto code_r0x015ab4c8;
      lVar19 = *(long *)(lVar19 + lVar23 * 8 + 0x20);
      if (lVar19 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(0,lVar19,0,cVar24 != '\0',0);
    }
  }
code_r0x015ab2c0:
  uVar27 = uVar27 + 1;
  plVar7 = (long *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar17,uRam0000000003d41080);
  if (plVar7 == (long *)0x0) goto code_r0x015ab4c4;
  goto code_r0x015aaa94;
}



// ============================================================
// RVA: 0x1539ec0 | Atlas.Contexts.BattleGameContext.OnLateUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x0153a154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153a714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015aa69c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ae374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153a248: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0153a718) */
/* WARNING: Removing unreachable block (ram,0x0153a158) */
/* WARNING: Removing unreachable block (ram,0x0153a16c) */
/* WARNING: Removing unreachable block (ram,0x0153a17c) */
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

long * Atlas_Contexts_BattleGameContext__OnLateUpdate
                 (undefined1 param_1 [16],ulong param_2,float param_3,float param_4,long *param_5,
                 undefined8 param_6)

{
  code *pcVar1;
  long *plVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  int extraout_w1;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  ulong uVar21;
  long lVar22;
  undefined8 uVar23;
  char cVar24;
  ulong unaff_x23;
  ulong uVar25;
  undefined8 unaff_x24;
  long lVar26;
  uint uVar27;
  undefined8 unaff_x25;
  int iVar28;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar29;
  undefined *puVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 unaff_d8;
  uint uVar40;
  undefined8 unaff_d9;
  float fVar41;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined1 auVar42 [16];
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  long lStack_194;
  undefined8 uStack_18c;
  undefined4 uStack_184;
  undefined8 *******pppppppuStack_150;
  undefined *puStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  plVar2 = &lStack_140;
  if ((bRam0000000003eb4f02 & 1) == 0) {
    func_0x00f78a20(0x3d21b10);
    func_0x00f78a20(0x3d237b8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5d980);
    bRam0000000003eb4f02 = 1;
  }
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_a0 = 0;
  puVar17 = (undefined8 *)0x0;
  /*Atlas.Contexts.GameContextBase$$OnLateUpdate*/ func_0x01598b5c(param_5,param_6);
  if (param_5[4] == 0) {
LAB_0153a270:
    puVar30 = &Atlas_Contexts_BattleGameContext__FinishAi;
    param_5 = (long *)func_0x00f78af4();
  }
  else {
    plVar7 = (long *)/*Core.StateManagement.StateMachine$$get_ActiveState*/ func_0x02b95214(param_5[4],0);
    if (plVar7 == (long *)0x0) {
      return (long *)0x0;
    }
    if (*(byte *)(*plVar7 + 300) < *(byte *)(/*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10 + 300)) {
      return plVar7;
    }
    plVar10 = plVar7;
    if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10 + 300) * 8 + -8)
        != /*Atlas.Contexts.GameContextBaseInProgressState_TypeInfo*/ lRam0000000003d21b10) {
      plVar10 = (long *)0x0;
    }
    if (plVar10 == (long *)0x0) {
      return plVar7;
    }
    if (param_5[9] == 0) {
      return plVar7;
    }
    uVar23 = *(undefined8 *)(param_5[9] + 0x28);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar7 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar23,0);
    if ((int)plVar7 == 0) {
      return plVar7;
    }
    if ((param_5[0x4b] == 0) || (lVar8 = *(long *)(param_5[0x4b] + 0x20), lVar8 == 0))
    goto LAB_0153a270;
    puVar9 = &uStack_98;
    /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_98,lVar8,0);
    plVar7 = param_5 + 0x4e;
    if (*(char *)((long)param_5 + 0x274) == '\0') {
      uStack_58 = uStack_90;
      uStack_60 = uStack_98;
      uStack_50 = uStack_88;
      if (param_5[0x38] == 0) goto LAB_0153a270;
      uVar27 = *(uint *)(param_5[0x38] + 0xcc);
      unaff_x23 = (ulong)uVar27;
      if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_b8 = uStack_58;
      uStack_c0 = uStack_60;
      uStack_b0 = uStack_50;
      /*Core.Networking.NetworkSessionTime$$op_Addition*/ func_0x0165f11c(&lStack_d8,&uStack_c0,uVar27 * 1000,0);
      param_5[0x4f] = lStack_d0;
      *plVar7 = lStack_d8;
      param_5[0x50] = lStack_c8;
    }
    uStack_58 = uStack_90;
    uStack_60 = uStack_98;
    uStack_50 = uStack_88;
    lStack_78 = param_5[0x4f];
    lStack_80 = *plVar7;
    lStack_70 = param_5[0x50];
    if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_e8 = uStack_58;
    uStack_f0 = uStack_60;
    uStack_e0 = uStack_50;
    lStack_108 = lStack_78;
    lStack_110 = lStack_80;
    lStack_100 = lStack_70;
    puVar17 = (undefined8 *)0x0;
    iVar5 = /*Core.Networking.NetworkSessionTime$$op_GreaterThanOrEqual*/ func_0x0165e314(&uStack_f0,&lStack_110);
    if ((iVar5 == 0) || ((char)param_5[0x47] != '\0')) {
      lStack_138 = param_5[0x4f];
      lStack_140 = *plVar7;
      lStack_130 = param_5[0x50];
      puVar17 = (undefined8 *)0x0;
      iVar5 = /*Core.Networking.NetworkSessionTime$$Delta*/ func_0x0165e480(&uStack_98,&lStack_140);
      if (param_5[9] != 0) {
        uVar21 = (ulong)(uint)(iVar5 / 1000);
        puVar17 = (undefined8 *)0x0;
        /*Atlas.UI.Screens.GameInProgressScreen$$SetTimerSecondsRemaining*/ func_0x015ab4dc(param_5[9],uVar21);
        if (param_5[0x46] == 0) {
          if (param_5[0x4a] == 0) goto LAB_0153a270;
          puVar17 = (undefined8 *)0x0;
          /*Atlas.Audio.AtlasAudioManager$$UpdateTimeRemaining*/ func_0x0145983c(param_5[0x4a],uVar21);
        }
        puVar30 = (undefined *)0x153a158;
        plVar10 = param_5;
        pppppppuVar29 = (undefined8 *******)&stack0xfffffffffffffff0;
        goto code_r0x0153a5a8;
      }
      goto LAB_0153a270;
    }
    if (param_5[4] == 0) goto LAB_0153a270;
    puVar17 = puRam0000000003d5d980;
    iVar5 = /*Core.StateManagement.StateMachine$$TryGetState<object>*/ func_0x018e1570(param_5[4],&uStack_a0);
    if (iVar5 == 0) {
      plVar7 = (long *)/*Atlas.Contexts.GameContextBaseInProgressState$$NotifyGameContextFinished*/ func_0x0159e9f8(plVar10,0);
      return plVar7;
    }
    if ((param_5[8] == 0) || (lVar8 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetLocalGameContextPlayer*/ func_0x01599b24(param_5[8],0), lVar8 == 0)) goto LAB_0153a270;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    puVar17 = (undefined8 *)0x0;
    /*Atlas.Gameplay.Player.GameContextPlayer$$OnFinishedGame*/ func_0x015a5760(lVar8,&uStack_128);
    if ((param_5[0x4b] == 0) ||
       ((lVar18 = *(long *)(lVar8 + 0x10), lVar18 == 0 ||
        (plVar7 = *(long **)(param_5[0x4b] + 0x20), plVar7 == (long *)0x0)))) goto LAB_0153a270;
    puVar17 = (undefined8 *)(ulong)*(uint *)(lVar8 + 0x78);
    uStack_58 = *(undefined8 *)(lVar18 + 0x50);
    uStack_60 = *(undefined8 *)(lVar18 + 0x48);
    uStack_48 = *(undefined8 *)(lVar18 + 0x60);
    param_2 = *(ulong *)(lVar18 + 0x58);
    lStack_78 = *(long *)(lVar8 + 0x88);
    lStack_80 = *(long *)(lVar8 + 0x80);
    lStack_70 = *(long *)(lVar8 + 0x90);
    uStack_50 = param_2;
    (**(code **)(*plVar7 + 0x248))
              (0,plVar7,&uStack_60,puVar17,0,&lStack_80,*(undefined8 *)(*plVar7 + 0x250));
    puVar30 = &UNK_0153a24c;
  }
  plVar2 = &uStack_1c0;
  pppppppuVar29 = &pppppppuStack_150;
  pppppppuStack_150 = (undefined8 *******)&stack0xfffffffffffffff0;
  puStack_148 = puVar30;
  if ((bRam0000000003eb4f04 & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d0a0);
    func_0x00f78a20(0x3d1d260);
    func_0x00f78a20(0x3d22180);
    bRam0000000003eb4f04 = 1;
  }
  if (param_5[0x4b] == 0) {
code_r0x0153a554:
    func_0x00f78af4();
  }
  else {
    plVar7 = (long *)/*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(param_5[0x4b],0);
    if ((int)plVar7 == 0) {
      return plVar7;
    }
    if ((param_5[8] == 0) || (plVar7 = *(long **)(param_5[8] + 0x28), plVar7 == (long *)0x0))
    goto code_r0x0153a554;
    lVar8 = *plVar7;
    uVar21 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar21 != 0) {
      piVar20 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == /*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar20 * 0x10 + 0x138);
          goto code_r0x0153a34c;
        }
        piVar20 = piVar20 + 4;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
    puVar17 = (undefined8 *)0x0;
    puVar9 = (undefined8 *)func_0x00fac1f0(plVar7);
code_r0x0153a34c:
    plVar10 = (long *)(*(code *)*puVar9)(plVar7,puVar9[1]);
    if (plVar10 != (long *)0x0) {
      plVar7 = &lStack_194;
      puVar9 = (undefined8 *)0x3d22180;
      unaff_x23 = 0x3d1d260;
      unaff_x24 = 2;
code_r0x0153a37c:
      lVar8 = *plVar10;
      uVar21 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar21 != 0) {
        piVar20 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar11 = (undefined8 *)(lVar8 + (long)*piVar20 * 0x10 + 0x138);
            goto code_r0x0153a3c8;
          }
          piVar20 = piVar20 + 4;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      puVar17 = (undefined8 *)0x0;
      puVar11 = (undefined8 *)func_0x00fac1f0(plVar10);
code_r0x0153a3c8:
      plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
      if (((ulong)plVar12 & 1) == 0) {
        uVar21 = 0;
        goto joined_r0x0153a4b4;
      }
      lVar8 = *plVar10;
      uVar21 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar21 != 0) {
        piVar20 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == /*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260) {
            puVar11 = (undefined8 *)(lVar8 + (long)*piVar20 * 0x10 + 0x138);
            goto code_r0x0153a424;
          }
          piVar20 = piVar20 + 4;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      puVar17 = (undefined8 *)0x0;
      puVar11 = (undefined8 *)func_0x00fac1f0(plVar10);
code_r0x0153a424:
      lVar8 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      if (lVar8 == 0) {
        func_0x00f78af4();
        goto code_r0x0153a55c;
      }
      lVar18 = *(long *)(lVar8 + 0x10);
      if (lVar18 != 0) {
        if (*(int *)(lVar18 + 0x50) == 2) {
          if (param_5[0x4b] == 0) {
            func_0x00f78af4();
            goto code_r0x0153a55c;
          }
          plVar12 = *(long **)(param_5[0x4b] + 0x20);
          if (plVar12 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x0153a55c;
          }
          uStack_1a0 = *(undefined8 *)(lVar18 + 0x48);
          puVar17 = (undefined8 *)(ulong)*(uint *)(lVar8 + 0x78);
          uStack_198 = 2;
          uStack_18c = *(undefined8 *)(lVar18 + 0x5c);
          lStack_194 = *(long *)(lVar18 + 0x54);
          uStack_184 = *(undefined4 *)(lVar18 + 100);
          uStack_1b8 = *(undefined8 *)(lVar8 + 0x88);
          uStack_1c0 = *(undefined8 *)(lVar8 + 0x80);
          uStack_1b0 = *(undefined8 *)(lVar8 + 0x90);
          (**(code **)(*plVar12 + 0x248))
                    (0,plVar12,&uStack_1a0,puVar17,0,&uStack_1c0,*(undefined8 *)(*plVar12 + 0x250));
        }
        goto code_r0x0153a37c;
      }
      func_0x00f78af4();
      goto code_r0x0153a55c;
    }
  }
  func_0x00f78af4();
code_r0x0153a55c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x153a560);
  (*pcVar1)();
joined_r0x0153a4b4:
  if (plVar10 != (long *)0x0) {
    lVar8 = *plVar10;
    uVar19 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar11 = (undefined8 *)(lVar8 + (long)*piVar20 * 0x10 + 0x138);
          goto code_r0x0153a50c;
        }
        piVar20 = piVar20 + 4;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    puVar17 = (undefined8 *)0x0;
    puVar11 = (undefined8 *)func_0x00fac1f0(plVar10);
code_r0x0153a50c:
    plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
  }
  if (uVar21 == 0) {
    return plVar12;
  }
  func_0x00f78ac0(uVar21,0);
  if (extraout_w1 != 1) goto code_r0x0153a5a4;
  puVar13 = (ulong *)___cxa_begin_catch();
  uVar21 = *puVar13;
  plVar12 = (long *)___cxa_end_catch();
  goto joined_r0x0153a4b4;
code_r0x0153a5a4:
  puVar30 = &Atlas_Contexts_BattleGameContext__IsFrenzyActive;
  param_5 = (long *)__Unwind_Resume();
code_r0x0153a5a8:
  *(ulong *)((long)plVar2 + -0x20) = uVar21;
  *(long **)((long)plVar2 + -0x18) = plVar10;
  *(undefined8 ********)((long)plVar2 + -0x10) = pppppppuVar29;
  *(undefined **)((long)plVar2 + -8) = puVar30;
  if ((bRam0000000003eb4f03 & 1) == 0) {
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb4f03 = 1;
  }
  if ((*(char *)((long)param_5 + 0x274) == '\0') || ((char)param_5[0x4c] == '\0')) {
    return (long *)0x0;
  }
  if ((param_5[0x4b] != 0) && (lVar8 = *(long *)(param_5[0x4b] + 0x20), lVar8 != 0)) {
    /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c((undefined1 *)((long)plVar2 + -0x38),lVar8,0);
    lVar8 = param_5[0x4e];
    *(long *)((long)plVar2 + -0x48) = param_5[0x4f];
    *(long *)((long)plVar2 + -0x50) = lVar8;
    *(long *)((long)plVar2 + -0x40) = param_5[0x50];
    lVar8 = param_5[0x4d];
    if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(undefined8 *)((long)plVar2 + -0x78) = *(undefined8 *)((long)plVar2 + -0x48);
    *(undefined8 *)((long)plVar2 + -0x80) = *(undefined8 *)((long)plVar2 + -0x50);
    *(undefined8 *)((long)plVar2 + -0x70) = *(undefined8 *)((long)plVar2 + -0x40);
    /*Core.Networking.NetworkSessionTime$$op_Subtraction*/ func_0x0165f1c4((undefined1 *)((long)plVar2 + -0x68),(undefined1 *)((long)plVar2 + -0x80),
                    (int)lVar8,0);
    *(undefined8 *)((long)plVar2 + -0x98) = *(undefined8 *)((long)plVar2 + -0x30);
    *(undefined8 *)((long)plVar2 + -0xa0) = *(undefined8 *)((long)plVar2 + -0x38);
    *(undefined8 *)((long)plVar2 + -0x90) = *(undefined8 *)((long)plVar2 + -0x28);
    *(undefined8 *)((long)plVar2 + -0xb8) = *(undefined8 *)((long)plVar2 + -0x60);
    *(undefined8 *)((long)plVar2 + -0xc0) = *(undefined8 *)((long)plVar2 + -0x68);
    *(undefined8 *)((long)plVar2 + -0xb0) = *(undefined8 *)((long)plVar2 + -0x58);
    plVar7 = (long *)/*Core.Networking.NetworkSessionTime$$op_GreaterThanOrEqual*/ func_0x0165e314((undefined1 *)((long)plVar2 + -0xa0),
                                     (undefined1 *)((long)plVar2 + -0xc0),0);
    return plVar7;
  }
  auVar42 = func_0x00f78af4();
  lVar8 = auVar42._8_8_;
  *(undefined1 **)((long)plVar2 + -0xd0) = (undefined1 *)((long)plVar2 + -0x10);
  *(undefined **)((long)plVar2 + -200) = &Atlas_Contexts_BattleGameContext__GetRankingForPlayer;
  if (lVar8 != 0) {
    uVar14 = *(undefined8 *)(lVar8 + 0x88);
    uVar23 = *(undefined8 *)(lVar8 + 0x80);
    puVar17[2] = *(undefined8 *)(lVar8 + 0x90);
    puVar17[1] = uVar14;
    *puVar17 = uVar23;
    return auVar42._0_8_;
  }
  auVar42 = func_0x00f78af4();
  lVar8 = auVar42._8_8_;
  *(undefined8 *)((long)plVar2 + -0xf0) = 0x3eb4000;
  *(long **)((long)plVar2 + -0xe8) = param_5;
  *(undefined1 **)((long)plVar2 + -0xe0) = (undefined1 *)((long)plVar2 + -0xd0);
  *(undefined **)((long)plVar2 + -0xd8) = &Atlas_Contexts_BattleGameContext__SetupGameContextScreen;
  *(long *)(auVar42._0_8_ + 0x48) = lVar8;
  if (puVar17 == (undefined8 *)0x0) {
code_r0x0153a734:
    plVar10 = (long *)func_0x00f78af4();
    *(undefined8 **)((long)plVar2 + -0x120) = puVar9;
    *(long **)((long)plVar2 + -0x118) = plVar7;
    *(undefined8 *)((long)plVar2 + -0x110) = 0x3eb4000;
    *(long **)((long)plVar2 + -0x108) = param_5;
    *(undefined1 **)((long)plVar2 + -0x100) = (undefined1 *)((long)plVar2 + -0xe0);
    *(undefined **)((long)plVar2 + -0xf8) = &Atlas_Contexts_BattleGameContext__OnHostMigrationSynced
    ;
    plVar7 = plVar10;
    if ((bRam0000000003eb4f05 & 1) == 0) {
      plVar7 = (long *)func_0x00f78a20(0x3d237b8);
      bRam0000000003eb4f05 = 1;
    }
    if (*(char *)((long)plVar10 + 0x274) != '\0') {
      lVar8 = plVar10[0x4e];
      *(long *)((long)plVar2 + -0x138) = plVar10[0x4f];
      *(long *)((long)plVar2 + -0x140) = lVar8;
      *(long *)((long)plVar2 + -0x130) = plVar10[0x50];
      if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined8 *)((long)plVar2 + -0x158) = *(undefined8 *)((long)plVar2 + -0x138);
      *(undefined8 *)((long)plVar2 + -0x160) = *(undefined8 *)((long)plVar2 + -0x140);
      *(undefined8 *)((long)plVar2 + -0x150) = *(undefined8 *)((long)plVar2 + -0x130);
      plVar7 = (long *)/*Core.Networking.NetworkSessionTime$$op_Addition*/ func_0x0165f11c((undefined1 *)((long)plVar2 + -0x178),
                                       (undefined1 *)((long)plVar2 + -0x160),puVar17,0);
      lVar8 = *(long *)((long)plVar2 + -0x178);
      plVar10[0x4f] = *(long *)((long)plVar2 + -0x170);
      plVar10[0x4e] = lVar8;
      plVar10[0x50] = *(long *)((long)plVar2 + -0x168);
    }
    return plVar7;
  }
  *(undefined4 *)(puVar17 + 0x52) = 1;
  param_5 = (long *)0x0;
  if (lVar8 == 0) goto code_r0x0153a734;
  *(undefined8 *)((long)plVar2 + -0x130) = unaff_x24;
  *(ulong *)((long)plVar2 + -0x128) = unaff_x23;
  *(undefined8 **)((long)plVar2 + -0x120) = puVar9;
  *(long **)((long)plVar2 + -0x118) = plVar7;
  *(undefined8 *)((long)plVar2 + -0x110) = 0x3eb4000;
  *(long *)((long)plVar2 + -0x108) = lVar8;
  *(undefined1 **)((long)plVar2 + -0x100) = (undefined1 *)((long)plVar2 + -0xe0);
  *(undefined **)((long)plVar2 + -0xf8) = &UNK_0153a718;
  uVar23 = 0x3eb5000;
  uVar21 = 0x3d41080;
  if ((bRam0000000003eb522b & 1) == 0) {
    func_0x00f78a20(0x3d41080,8,1,0);
    bRam0000000003eb522b = 1;
  }
  lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (lVar18 != 0) {
    *(undefined8 *)((long)plVar2 + -0x110) = *(undefined8 *)((long)plVar2 + -0x110);
    *(undefined8 *)((long)plVar2 + -0x108) = *(undefined8 *)((long)plVar2 + -0x108);
    *(undefined8 *)((long)plVar2 + -0x100) = *(undefined8 *)((long)plVar2 + -0x100);
    *(undefined8 *)((long)plVar2 + -0xf8) = *(undefined8 *)((long)plVar2 + -0xf8);
                    /* WARNING: Could not recover jumptable at 0x015ac724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar7 = (long *)(*(code *)(&UNK_015ac728 + (ulong)UNK_033f8a48 * 4))(lVar18,8,1,0);
    return plVar7;
  }
  uVar14 = func_0x00f78af4();
  *(undefined8 *)((long)plVar2 + -0x160) = 0x3eb5000;
  *(long *)((long)plVar2 + -0x158) = lVar8;
  *(undefined8 *)((long)plVar2 + -0x150) = 8;
  *(undefined8 *)((long)plVar2 + -0x148) = 1;
  *(undefined1 **)((long)plVar2 + -0x140) = (undefined1 *)((long)plVar2 + -0x100);
  *(undefined **)((long)plVar2 + -0x138) = &Atlas_UI_Screens_GameInProgressScreen__UpdateArcade;
  if ((bRam0000000003eb5227 & 1) == 0) {
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb5227 = 1;
  }
  plVar7 = (long *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar14,uRam0000000003d41088);
  if ((plVar7 != (long *)0x0) && (plVar7[6] != 0)) {
    return plVar7;
  }
  uVar15 = func_0x00f78af4();
  *(undefined8 *)((long)plVar2 + -400) = 0x3eb5000;
  *(undefined8 *)((long)plVar2 + -0x188) = 0x3d41088;
  *(undefined8 *)((long)plVar2 + -0x180) = 0x3eb5000;
  *(undefined8 *)((long)plVar2 + -0x178) = uVar14;
  *(undefined1 **)((long)plVar2 + -0x170) = (undefined1 *)((long)plVar2 + -0x140);
  *(undefined **)((long)plVar2 + -0x168) = &Atlas_UI_Screens_GameInProgressScreen__OnLateUpdate;
  if ((bRam0000000003eb5228 & 1) == 0) {
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb5228 = 1;
  }
  *(undefined8 *)((long)plVar2 + -0x1d0) = unaff_x24;
  *(undefined8 *)((long)plVar2 + -0x1c8) = 0x3d41080;
  *(undefined8 *)((long)plVar2 + -0x1c0) = 0x3eb5000;
  *(undefined8 *)((long)plVar2 + -0x1b8) = 0x3eb5000;
  *(undefined8 *)((long)plVar2 + -0x1b0) = 0x3d41088;
  *(undefined8 *)((long)plVar2 + -0x1a8) = uVar15;
  *(undefined1 **)((long)plVar2 + -0x1a0) = (undefined1 *)((long)plVar2 + -0x170);
  *(undefined **)((long)plVar2 + -0x198) = &UNK_015aa6a0;
  uVar19 = 0x3eb5000;
  if ((bRam0000000003eb522e & 1) == 0) {
    func_0x00f78a20(0x3d3b9d0);
    func_0x00f78a20(0x3d3b898);
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb522e = 1;
  }
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar15,uRam0000000003d41088);
  uVar25 = 0x3d41080;
  if (((lVar8 != 0) && (*(long *)(lVar8 + 0x38) != 0)) &&
     (lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 200), uVar25 = uVar21, lVar8 != 0)) {
    uVar27 = *(uint *)(lVar8 + 0x18);
    uVar19 = (ulong)uVar27;
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar15,uRam0000000003d41088);
    if (((lVar8 != 0) && (*(long *)(lVar8 + 0x38) != 0)) &&
       (lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0xd0), lVar8 != 0)) {
      uVar14 = 0x3d41080;
      uVar40 = *(uint *)(lVar8 + 0x18);
      uVar25 = (ulong)uVar40;
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar15,uRam0000000003d41080);
      uVar23 = 0x3d41080;
      if (lVar8 != 0) {
        /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetWeaponIndicatorActive*/ func_0x015adeac(lVar8,0 < (int)(uVar40 + uVar27),0);
        uVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar15,uRam0000000003d41080);
        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar15,uRam0000000003d41088);
        if (((lVar8 != 0) && (uVar23 = uVar14, *(long *)(lVar8 + 0x38) != 0)) &&
           (*(undefined8 *)((long)plVar2 + -0x1d8) = *(undefined8 *)(*(long *)(lVar8 + 0x38) + 200),
           uVar19 != 0)) {
          /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetCulturePodWeaponIndicatorArrows*/ func_0x015adf10(uVar19,(undefined1 *)((long)plVar2 + -0x1d8),0);
          uVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar15,uRam0000000003d41080);
          lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar15,uRam0000000003d41088);
          if (((lVar8 != 0) && (*(long *)(lVar8 + 0x38) != 0)) &&
             (*(undefined8 *)((long)plVar2 + -0x1e0) =
                   *(undefined8 *)(*(long *)(lVar8 + 0x38) + 0xd0), uVar19 != 0)) {
            plVar7 = (long *)/*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetSheldonWeaponIndicatorArrows*/ func_0x015ae03c(uVar19,(undefined1 *)((long)plVar2 + -0x1e0),0);
            return plVar7;
          }
        }
      }
    }
  }
  lVar8 = func_0x00f78af4();
  *(undefined8 *)((long)plVar2 + -0x280) = unaff_d15;
  *(undefined8 *)((long)plVar2 + -0x278) = unaff_d14;
  *(undefined8 *)((long)plVar2 + -0x270) = unaff_d13;
  *(undefined8 *)((long)plVar2 + -0x268) = unaff_d12;
  *(undefined8 *)((long)plVar2 + -0x260) = unaff_d11;
  *(undefined8 *)((long)plVar2 + -600) = unaff_d10;
  *(undefined8 *)((long)plVar2 + -0x250) = unaff_d9;
  *(undefined8 *)((long)plVar2 + -0x248) = unaff_d8;
  *(undefined8 *)((long)plVar2 + -0x240) = unaff_x28;
  *(undefined8 *)((long)plVar2 + -0x238) = unaff_x27;
  *(undefined8 *)((long)plVar2 + -0x230) = unaff_x26;
  *(undefined8 *)((long)plVar2 + -0x228) = unaff_x25;
  *(undefined8 *)((long)plVar2 + -0x220) = unaff_x24;
  *(ulong *)((long)plVar2 + -0x218) = uVar25;
  *(undefined8 *)((long)plVar2 + -0x210) = uVar23;
  *(undefined8 *)((long)plVar2 + -0x208) = 0x3d41088;
  *(ulong *)((long)plVar2 + -0x200) = uVar19;
  *(undefined8 *)((long)plVar2 + -0x1f8) = uVar15;
  *(undefined1 **)((long)plVar2 + -0x1f0) = (undefined1 *)((long)plVar2 + -0x1a0);
  *(undefined **)((long)plVar2 + -0x1e8) =
       &Atlas_UI_Screens_GameInProgressScreen__UpdateKartIndicator;
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
  *(undefined8 *)((long)plVar2 + -0x2a0) = 0;
  *(undefined8 *)((long)plVar2 + -0x298) = 0;
  *(undefined8 *)((long)plVar2 + -0x290) = 0;
  *(undefined4 *)((long)plVar2 + -0x2a8) = 0;
  *(undefined8 *)((long)plVar2 + -0x2b0) = 0;
  *(undefined4 *)((long)plVar2 + -0x2b8) = 0;
  *(undefined8 *)((long)plVar2 + -0x2c0) = 0;
  *(undefined4 *)((long)plVar2 + -0x2c8) = 0;
  *(undefined8 *)((long)plVar2 + -0x2d8) = 0;
  *(undefined8 *)((long)plVar2 + -0x2d0) = 0;
  *(undefined8 *)((long)plVar2 + -0x2e0) = 0;
  *(undefined4 *)((long)plVar2 + -0x2e4) = 0;
  lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (((lVar18 == 0) || (*(long *)(lVar18 + 0x1c0) == 0)) ||
     (lVar18 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar18 + 0x1c0),0), lVar18 == 0)) goto code_r0x015ab4c4;
  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar18,*(char *)(lVar8 + 0x109) == '\0',0);
  lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (((lVar18 == 0) || (*(long *)(lVar18 + 0x1c0) == 0)) ||
     (lVar18 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar18 + 0x1c0),0), lVar18 == 0)) goto code_r0x015ab4c4;
  plVar7 = (long *)/*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar18,0);
  if ((int)plVar7 == 0) {
    return plVar7;
  }
  *(undefined1 *)(lVar8 + 0x9c) = 0;
  lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar8,uRam0000000003d41090);
  if ((lVar18 == 0) || (*(long *)(lVar18 + 0x40) == 0)) goto code_r0x015ab4c4;
  uVar23 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(lVar18 + 0x40),0);
  *(undefined8 *)((long)plVar2 + -800) = uVar23;
  if (*(long *)(lVar8 + 0x78) == 0) {
code_r0x015aaa34:
    lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar8,uRam0000000003d41088);
    if ((lVar18 == 0) || (*(long *)(lVar18 + 0x38) == 0)) goto code_r0x015ab4c4;
    if (*(int *)(*(long *)(lVar18 + 0x38) + 0x74) == 1) {
      *(undefined8 *)(lVar8 + 0x78) = *(undefined8 *)(lVar8 + 0x80);
    }
  }
  else {
    lVar18 = *(long *)(*(long *)(lVar8 + 0x78) + 0x10);
    if (lVar18 == 0) goto code_r0x015ab4c4;
    if (*(int *)(lVar18 + 0x74) != 1) goto code_r0x015aaa34;
  }
  plVar7 = (long *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (plVar7 == (long *)0x0) {
code_r0x015ab4c4:
    func_0x00f78af4();
code_r0x015ab4c8:
    uVar23 = func_0x00f78b24();
    func_0x00f78ac0(uVar23,0);
    __Unwind_Resume();
code_r0x015ab4d8:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x15ab4dc);
    (*pcVar1)();
  }
  iVar28 = 0;
  iVar5 = 0;
  *(undefined4 *)((long)plVar2 + -0x314) = 0;
  uVar27 = 0;
code_r0x015aaa94:
  if (plVar7[0x39] == 0) goto code_r0x015ab4c4;
  if (*(int *)(plVar7[0x39] + 0x18) <= (int)uVar27) {
    return plVar7;
  }
  if (*(int *)(lVar8 + 0xbc) <= *(int *)((long)plVar2 + -0x314)) {
    return plVar7;
  }
  lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x1c8), lVar18 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar18 + 0x18) <= uVar27) goto code_r0x015ab4c8;
  lVar22 = (long)(int)uVar27;
  lVar18 = *(long *)(lVar18 + lVar22 * 8 + 0x20);
  if (lVar18 == 0) goto code_r0x015ab4c4;
  if (*(long *)(lVar18 + 0x80) == 0) {
    bVar4 = false;
  }
  else {
    lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
    if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x1c8), lVar18 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar18 + 0x18) <= uVar27) goto code_r0x015ab4c8;
    lVar18 = *(long *)(lVar18 + lVar22 * 8 + 0x20);
    if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x80), lVar18 == 0)) goto code_r0x015ab4c4;
    bVar4 = *(int *)(lVar18 + 0x74) == 1;
  }
  lVar18 = *(long *)(lVar8 + 0x78);
  if ((bool)(bVar4 & lVar18 == 0)) {
    if (*(long *)(lVar8 + 0x70) == 0) goto code_r0x015ab4c4;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)plVar2 + -0x310),*(long *)(lVar8 + 0x70),
                    uRam0000000003d3d1c8);
    *(undefined8 *)((long)plVar2 + -0x298) = *(undefined8 *)((long)plVar2 + -0x308);
    *(undefined8 *)((long)plVar2 + -0x2a0) = *(undefined8 *)((long)plVar2 + -0x310);
    *(undefined8 *)((long)plVar2 + -0x290) = *(undefined8 *)((long)plVar2 + -0x300);
    do {
      uVar21 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)plVar2 + -0x2a0),uRam0000000003d33458);
      if ((uVar21 & 1) == 0) goto code_r0x015aabdc;
      lVar18 = *(long *)((long)plVar2 + -0x290);
      if (lVar18 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar26 = *(long *)(lVar18 + 0x10);
      lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if (lVar16 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar16 = *(long *)(lVar16 + 0x1c8);
      if (lVar16 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      if (*(uint *)(lVar16 + 0x18) <= uVar27) {
        uVar23 = func_0x00f78b24();
        func_0x00f78ac0(uVar23,0);
        goto code_r0x015ab4d8;
      }
      lVar16 = *(long *)(lVar16 + lVar22 * 8 + 0x20);
      if (lVar16 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
    } while (lVar26 != *(long *)(lVar16 + 0x80));
    *(long *)(lVar8 + 0x78) = lVar18;
code_r0x015aabdc:
    *(undefined4 *)((long)plVar2 + (long)iVar5 * 4 + -0x2f8) = 0x132;
    iVar28 = *(int *)((long)plVar2 + -0x2e4);
    iVar5 = iVar28 + 1;
    *(int *)((long)plVar2 + -0x2e4) = iVar5;
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)plVar2 + -0x2a0),uRam0000000003d33450);
    if ((iVar5 != 0) && (*(int *)((long)plVar2 + (long)iVar28 * 4 + -0x2f8) == 0x132)) {
      *(int *)((long)plVar2 + -0x2e4) = iVar28;
      iVar5 = iVar28;
    }
    lVar18 = *(long *)(lVar8 + 0x78);
    iVar28 = iVar5;
  }
  if (lVar18 == 0) {
code_r0x015aac8c:
    uVar23 = 0;
    cVar24 = '\0';
  }
  else {
    lVar16 = *(long *)(lVar18 + 0x10);
    lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
    if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x1c8), lVar18 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar18 + 0x18) <= uVar27) goto code_r0x015ab4c8;
    lVar18 = *(long *)(lVar18 + lVar22 * 8 + 0x20);
    if (lVar18 == 0) goto code_r0x015ab4c4;
    if (!(bool)(bVar4 & lVar16 == *(long *)(lVar18 + 0x80))) goto code_r0x015aac8c;
    cVar24 = *(char *)(lVar8 + 0xb8);
    uVar23 = 1;
  }
  lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x1c8), lVar18 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar18 + 0x18) <= uVar27) goto code_r0x015ab4c8;
  lVar18 = *(long *)(lVar18 + lVar22 * 8 + 0x20);
  if (lVar18 == 0) goto code_r0x015ab4c4;
  fVar38 = param_3;
  if (*(long *)(lVar18 + 0x80) != 0) {
    lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
    if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x1c8), lVar18 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar18 + 0x18) <= uVar27) goto code_r0x015ab4c8;
    lVar18 = *(long *)(lVar18 + lVar22 * 8 + 0x20);
    if (lVar18 == 0) goto code_r0x015ab4c4;
    iVar6 = /*Atlas.UI.KartIndicatorBehaviour$$get_CanUpdateTarget*/ func_0x015cc628(lVar18,0);
    fVar41 = (float)param_2;
    if ((iVar6 != 0) && (fVar38 = param_3, *(char *)(lVar8 + 0xb8) == '\0')) goto code_r0x015aaf94;
    lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
    if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x1c8), lVar18 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar18 + 0x18) <= uVar27) goto code_r0x015ab4c8;
    lVar18 = *(long *)(lVar18 + lVar22 * 8 + 0x20);
    if ((((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x80), lVar18 == 0)) ||
        (lVar18 = *(long *)(lVar18 + 0x10), lVar18 == 0)) ||
       (lVar18 = *(long *)(lVar18 + 0x18), lVar18 == 0)) goto code_r0x015ab4c4;
    fVar31 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar18,0);
    *(float *)((long)plVar2 + -0x2b0) = fVar31;
    *(float *)((long)plVar2 + -0x2ac) = fVar41;
    *(float *)((long)plVar2 + -0x2a8) = param_3;
    fVar39 = param_3;
    fVar38 = fVar41;
    lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar8,uRam0000000003d41088);
    if (((lVar18 == 0) || (*(long *)(lVar18 + 0x38) == 0)) ||
       ((lVar18 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10), lVar18 == 0 ||
        (lVar18 = *(long *)(lVar18 + 0x18), lVar18 == 0)))) goto code_r0x015ab4c4;
    fVar32 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar18,0);
    *(float *)((long)plVar2 + -0x2c0) = fVar32;
    *(float *)((long)plVar2 + -700) = fVar38;
    *(float *)((long)plVar2 + -0x2b8) = fVar39;
    fVar39 = param_3 - fVar39;
    *(float *)((long)plVar2 + -0x2d0) = fVar31 - fVar32;
    *(float *)((long)plVar2 + -0x2cc) = fVar41 - fVar38;
    *(float *)((long)plVar2 + -0x2c8) = fVar39;
    if (cVar24 != '\0') {
      if (*(long *)((long)plVar2 + -800) == 0) goto code_r0x015ab4c4;
code_r0x015aadd4:
      param_3 = param_3 + *(float *)(lVar8 + 0xa8);
      param_4 = *(float *)(lVar8 + 0xa0);
      uVar21 = (ulong)(uint)(fVar41 + *(float *)(lVar8 + 0xa4));
      fVar39 = (float)/*UnityEngine.Camera$$WorldToViewportPoint*/ func_0x0321fe94(fVar31 + param_4,*(undefined8 *)((long)plVar2 + -800),0);
      fVar41 = (float)uVar21;
      fVar38 = param_3;
      if (cVar24 == '\0') {
        bVar4 = false;
        bVar3 = true;
        if (0.0 <= fVar39) {
          bVar4 = false;
          bVar3 = true;
          if (!NAN(fVar39)) {
            bVar4 = fVar39 == 1.0;
            bVar3 = 1.0 <= fVar39;
          }
        }
        param_2 = uVar21;
        if (!bVar3 || bVar4) {
          bVar4 = false;
          bVar3 = true;
          if (0.0 <= fVar41) {
            bVar4 = false;
            bVar3 = true;
            if (!NAN(fVar41)) {
              bVar4 = fVar41 == 1.0;
              bVar3 = 1.0 <= fVar41;
            }
          }
          if ((!bVar3 || bVar4) && (0.0 <= param_3)) {
            iVar6 = /*Atlas.UI.Screens.GameInProgressScreen$$CanSeeTarget*/ func_0x015ab70c(lVar8,(undefined1 *)((long)plVar2 + -0x2c0),
                                    (undefined1 *)((long)plVar2 + -0x2b0),1,1);
            fVar41 = (float)param_2;
            if (iVar6 != 0) goto code_r0x015aae04;
          }
        }
        goto code_r0x015aaf94;
      }
code_r0x015aae04:
      lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x1c8), lVar18 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar18 + 0x18) <= uVar27) goto code_r0x015ab4c8;
      lVar16 = *(long *)(lVar18 + lVar22 * 8 + 0x20);
      lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if ((lVar18 == 0) || (*(long *)(lVar18 + 0x1c0) == 0)) goto code_r0x015ab4c4;
      uVar33 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar18 + 0x1c0),0);
      *(undefined4 *)((long)plVar2 + -0x2e0) = uVar33;
      *(float *)((long)plVar2 + -0x2dc) = fVar41;
      *(float *)((long)plVar2 + -0x2d8) = fVar38;
      *(float *)((long)plVar2 + -0x2d4) = param_4;
      param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584((undefined1 *)((long)plVar2 + -0x2e0),0);
      if (lVar16 == 0) goto code_r0x015ab4c4;
      param_2 = uVar21 & 0xffffffff;
      /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(fVar39,lVar16,0);
      lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x1c8), lVar18 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar18 + 0x18) <= uVar27) goto code_r0x015ab4c8;
      lVar18 = *(long *)(lVar18 + lVar22 * 8 + 0x20);
      if (lVar18 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar18,uVar23,*(undefined1 *)(lVar8 + 0xb8),0);
      if (*(char *)(lVar8 + 0xb8) != '\0') {
        lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
        if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x1c8), lVar18 == 0))
        goto code_r0x015ab4c4;
        if (*(uint *)(lVar18 + 0x18) <= uVar27) goto code_r0x015ab4c8;
        lVar18 = *(long *)(lVar18 + lVar22 * 8 + 0x20);
        if (lVar18 == 0) goto code_r0x015ab4c4;
        *(undefined4 *)(lVar18 + 0x88) = *(undefined4 *)(lVar8 + 0x98);
      }
      *(int *)((long)plVar2 + -0x314) = *(int *)((long)plVar2 + -0x314) + 1;
      goto code_r0x015ab2c0;
    }
    fVar32 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0((undefined1 *)((long)plVar2 + -0x2d0),0);
    fVar36 = *(float *)(lVar8 + 0x8c);
    param_2 = (ulong)(uint)fVar36;
    fVar38 = fVar39;
    if (fVar36 <= fVar32) goto code_r0x015aaf94;
    fVar32 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4((undefined1 *)((long)plVar2 + -0x2d0),0);
    if ((*(long *)((long)plVar2 + -800) == 0) ||
       (fVar38 = fVar39, fVar37 = fVar36, lVar18 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)((long)plVar2 + -800),0)
       , lVar18 == 0)) goto code_r0x015ab4c4;
    fVar34 = (float)/*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar18,0);
    param_2 = (ulong)(uint)*(float *)(lVar8 + 0x94);
    if (*(float *)(lVar8 + 0x94) < fVar39 * fVar38 + fVar32 * fVar34 + fVar36 * fVar37)
    goto code_r0x015aadd4;
  }
code_r0x015aaf94:
  lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x1c8), lVar18 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar18 + 0x18) <= uVar27) goto code_r0x015ab4c8;
  lVar18 = *(long *)(lVar18 + lVar22 * 8 + 0x20);
  if (lVar18 == 0) goto code_r0x015ab4c4;
  param_3 = fVar38;
  if (*(long *)(lVar18 + 0x80) != 0) {
    lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
    if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x1c8), lVar18 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar18 + 0x18) <= uVar27) goto code_r0x015ab4c8;
    lVar18 = *(long *)(lVar18 + lVar22 * 8 + 0x20);
    if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x80), lVar18 == 0)) goto code_r0x015ab4c4;
    *(undefined1 *)(lVar18 + 0x9c) = 0;
    param_3 = fVar38;
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
    cVar24 = *(char *)(lVar8 + 0xb8);
  }
  else {
    cVar24 = '\0';
  }
  if (*(long *)(lVar8 + 0x70) == 0) goto code_r0x015ab4c4;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)plVar2 + -0x310),*(long *)(lVar8 + 0x70),uRam0000000003d3d1c8
                 );
  *(undefined8 *)((long)plVar2 + -0x298) = *(undefined8 *)((long)plVar2 + -0x308);
  *(undefined8 *)((long)plVar2 + -0x2a0) = *(undefined8 *)((long)plVar2 + -0x310);
  *(undefined8 *)((long)plVar2 + -0x290) = *(undefined8 *)((long)plVar2 + -0x300);
  do {
    do {
      uVar21 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)plVar2 + -0x2a0),uRam0000000003d33458);
      if ((uVar21 & 1) == 0) {
code_r0x015ab1e8:
        bVar4 = false;
        goto code_r0x015ab1ec;
      }
      lVar18 = *(long *)((long)plVar2 + -0x290);
      if (lVar18 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      fVar38 = *(float *)(lVar8 + 0x8c);
      param_2 = (ulong)(uint)fVar38;
      if ((fVar38 < *(float *)(lVar18 + 0x18)) && (lVar18 != *(long *)(lVar8 + 0x78)))
      goto code_r0x015ab1e8;
    } while (*(char *)(lVar18 + 0x28) == '\0');
    lVar16 = *(long *)(lVar18 + 0x10);
    if (lVar16 == 0) {
      func_0x00f78af4();
      goto code_r0x015ab4d8;
    }
  } while (*(char *)(lVar16 + 0x9c) != '\0');
  *(undefined1 *)(lVar16 + 0x9c) = 1;
  lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (lVar16 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar16 = *(long *)(lVar16 + 0x1c8);
  if (lVar16 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar16 + 0x18) <= uVar27) {
    uVar23 = func_0x00f78b24();
    func_0x00f78ac0(uVar23,0);
    goto code_r0x015ab4d8;
  }
  lVar16 = *(long *)(lVar16 + lVar22 * 8 + 0x20);
  if (lVar16 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(*(undefined4 *)(lVar8 + 0x98),lVar16,*(undefined8 *)(lVar18 + 0x10),cVar24 != '\0'
                  ,0);
  lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (lVar16 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar16 = *(long *)(lVar16 + 0x1c8);
  if (lVar16 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar16 + 0x18) <= uVar27) {
    uVar23 = func_0x00f78b24();
    func_0x00f78ac0(uVar23,0);
    goto code_r0x015ab4d8;
  }
  lVar16 = *(long *)(lVar16 + lVar22 * 8 + 0x20);
  uVar33 = *(undefined4 *)(lVar18 + 0x1c);
  uVar40 = *(uint *)(lVar18 + 0x20);
  fVar41 = *(float *)(lVar18 + 0x24);
  lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (lVar18 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(long *)(lVar18 + 0x1c0) == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  uVar35 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar18 + 0x1c0),0);
  *(undefined4 *)((long)plVar2 + -0x2e0) = uVar35;
  *(float *)((long)plVar2 + -0x2dc) = fVar38;
  *(float *)((long)plVar2 + -0x2d8) = param_3;
  *(float *)((long)plVar2 + -0x2d4) = param_4;
  param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584((undefined1 *)((long)plVar2 + -0x2e0),0);
  if (lVar16 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  param_2 = (ulong)uVar40;
  /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(uVar33,lVar16,0);
  lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (lVar18 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar18 = *(long *)(lVar18 + 0x1c8);
  if (lVar18 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar18 + 0x18) <= uVar27) {
    uVar23 = func_0x00f78b24();
    func_0x00f78ac0(uVar23,0);
    goto code_r0x015ab4d8;
  }
  lVar18 = *(long *)(lVar18 + lVar22 * 8 + 0x20);
  if (lVar18 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar18,uVar23,*(undefined1 *)(lVar8 + 0xb8),0);
  *(int *)((long)plVar2 + -0x314) = *(int *)((long)plVar2 + -0x314) + 1;
  bVar4 = true;
  param_3 = fVar41;
code_r0x015ab1ec:
  *(undefined4 *)((long)plVar2 + (long)iVar28 * 4 + -0x2f8) = 0x41c;
  iVar5 = *(int *)((long)plVar2 + -0x2e4);
  iVar28 = iVar5 + 1;
  *(int *)((long)plVar2 + -0x2e4) = iVar28;
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)plVar2 + -0x2a0),uRam0000000003d33450);
  if ((iVar28 != 0) && (*(int *)((long)plVar2 + (long)iVar5 * 4 + -0x2f8) == 0x41c)) {
    *(int *)((long)plVar2 + -0x2e4) = iVar5;
    iVar28 = iVar5;
  }
  iVar5 = iVar28;
  if (!bVar4) {
    lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
    if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x1c8), lVar18 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar18 + 0x18) <= uVar27) goto code_r0x015ab4c8;
    lVar18 = *(long *)(lVar18 + lVar22 * 8 + 0x20);
    if (lVar18 == 0) goto code_r0x015ab4c4;
    if (*(long *)(lVar18 + 0x80) != 0) {
      lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x1c8), lVar18 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar18 + 0x18) <= uVar27) goto code_r0x015ab4c8;
      lVar18 = *(long *)(lVar18 + lVar22 * 8 + 0x20);
      if (lVar18 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(0,lVar18,0,cVar24 != '\0',0);
    }
  }
code_r0x015ab2c0:
  uVar27 = uVar27 + 1;
  plVar7 = (long *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (plVar7 == (long *)0x0) goto code_r0x015ab4c4;
  goto code_r0x015aaa94;
}



// ============================================================
// RVA: 0x153a274 | Atlas.Contexts.BattleGameContext.FinishAi
// ============================================================

/* WARNING: Possible PIC construction at 0x0153a714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015aa69c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ae374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0153a718) */
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

ulong Atlas_Contexts_BattleGameContext__FinishAi
                (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
                undefined8 param_6,undefined8 *param_7)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  int extraout_w1;
  long lVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  long *plVar16;
  long lVar17;
  char cVar18;
  long lVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  int iStack_394;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long lStack_380;
  int aiStack_378 [5];
  int iStack_364;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  float fStack_348;
  undefined8 uStack_340;
  float fStack_338;
  undefined8 uStack_330;
  float fStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_310;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 *****pppppuStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 ****ppppuStack_1f0;
  undefined *puStack_1e8;
  undefined1 ***pppuStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 ***pppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined1 **ppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
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
  long lStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  
  if ((bRam0000000003eb4f04 & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d0a0);
    func_0x00f78a20(0x3d1d260);
    func_0x00f78a20(0x3d22180);
    bRam0000000003eb4f04 = 1;
  }
  if (*(long *)(param_5 + 600) == 0) {
LAB_0153a554:
    func_0x00f78af4();
  }
  else {
    uVar5 = /*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(*(long *)(param_5 + 600),0);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    if ((*(long *)(param_5 + 0x40) == 0) ||
       (plVar16 = *(long **)(*(long *)(param_5 + 0x40) + 0x28), plVar16 == (long *)0x0))
    goto LAB_0153a554;
    lVar12 = *plVar16;
    uVar5 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar5 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == /*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0153a34c;
        }
        piVar15 = piVar15 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    param_7 = (undefined8 *)0x0;
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar16);
LAB_0153a34c:
    plVar16 = (long *)(*(code *)*puVar6)(plVar16,puVar6[1]);
    if (plVar16 != (long *)0x0) {
code_r0x0153a37c:
      lVar12 = *plVar16;
      uVar5 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto code_r0x0153a3c8;
          }
          piVar15 = piVar15 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      param_7 = (undefined8 *)0x0;
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar16);
code_r0x0153a3c8:
      uVar5 = (*(code *)*puVar6)(plVar16,puVar6[1]);
      if ((uVar5 & 1) == 0) {
        lVar12 = 0;
        goto joined_r0x0153a4b4;
      }
      lVar12 = *plVar16;
      uVar5 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == /*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto code_r0x0153a424;
          }
          piVar15 = piVar15 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      param_7 = (undefined8 *)0x0;
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar16);
code_r0x0153a424:
      lVar12 = (*(code *)*puVar6)(plVar16,puVar6[1]);
      if (lVar12 == 0) {
        func_0x00f78af4();
        goto code_r0x0153a55c;
      }
      lVar14 = *(long *)(lVar12 + 0x10);
      if (lVar14 != 0) {
        if (*(int *)(lVar14 + 0x50) == 2) {
          if (*(long *)(param_5 + 600) == 0) {
            func_0x00f78af4();
            goto code_r0x0153a55c;
          }
          plVar7 = *(long **)(*(long *)(param_5 + 600) + 0x20);
          if (plVar7 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x0153a55c;
          }
          uStack_60 = *(undefined8 *)(lVar14 + 0x48);
          param_7 = (undefined8 *)(ulong)*(uint *)(lVar12 + 0x78);
          uStack_58 = 2;
          uStack_4c = *(undefined8 *)(lVar14 + 0x5c);
          uStack_54 = *(undefined8 *)(lVar14 + 0x54);
          uStack_44 = *(undefined4 *)(lVar14 + 100);
          uStack_78 = *(undefined8 *)(lVar12 + 0x88);
          uStack_80 = *(undefined8 *)(lVar12 + 0x80);
          uStack_70 = *(undefined8 *)(lVar12 + 0x90);
          (**(code **)(*plVar7 + 0x248))
                    (0,plVar7,&uStack_60,param_7,0,&uStack_80,*(undefined8 *)(*plVar7 + 0x250));
        }
        goto code_r0x0153a37c;
      }
      func_0x00f78af4();
      goto code_r0x0153a55c;
    }
  }
  func_0x00f78af4();
code_r0x0153a55c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x153a560);
  (*pcVar1)();
joined_r0x0153a4b4:
  if (plVar16 != (long *)0x0) {
    lVar14 = *plVar16;
    uVar5 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar5 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
          goto code_r0x0153a50c;
        }
        piVar15 = piVar15 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    param_7 = (undefined8 *)0x0;
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar16);
code_r0x0153a50c:
    uVar5 = (*(code *)*puVar6)(plVar16,puVar6[1]);
  }
  if (lVar12 == 0) {
    return uVar5;
  }
  func_0x00f78ac0(lVar12,0);
  if (extraout_w1 != 1) goto code_r0x0153a5a4;
  plVar7 = (long *)___cxa_begin_catch();
  lVar12 = *plVar7;
  uVar5 = ___cxa_end_catch();
  goto joined_r0x0153a4b4;
code_r0x0153a5a4:
  lVar14 = __Unwind_Resume();
  puStack_88 = &Atlas_Contexts_BattleGameContext__IsFrenzyActive;
  lStack_a0 = lVar12;
  plStack_98 = plVar16;
  puStack_90 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4f03 & 1) == 0) {
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb4f03 = 1;
  }
  if ((*(char *)(lVar14 + 0x274) == '\0') || (*(char *)(lVar14 + 0x260) == '\0')) {
    return 0;
  }
  if ((*(long *)(lVar14 + 600) != 0) &&
     (lVar12 = *(long *)(*(long *)(lVar14 + 600) + 0x20), lVar12 != 0)) {
    /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_b8,lVar12,0);
    uStack_c8 = *(undefined8 *)(lVar14 + 0x278);
    uStack_d0 = *(undefined8 *)(lVar14 + 0x270);
    uStack_c0 = *(undefined8 *)(lVar14 + 0x280);
    uVar25 = *(undefined4 *)(lVar14 + 0x268);
    if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_f8 = uStack_c8;
    uStack_100 = uStack_d0;
    uStack_f0 = uStack_c0;
    /*Core.Networking.NetworkSessionTime$$op_Subtraction*/ func_0x0165f1c4(&uStack_e8,&uStack_100,uVar25,0);
    uStack_118 = uStack_b0;
    uStack_120 = uStack_b8;
    uStack_110 = uStack_a8;
    uStack_138 = uStack_e0;
    uStack_140 = uStack_e8;
    uStack_130 = uStack_d8;
    uVar5 = /*Core.Networking.NetworkSessionTime$$op_GreaterThanOrEqual*/ func_0x0165e314(&uStack_120,&uStack_140,0);
    return uVar5;
  }
  auVar32 = func_0x00f78af4();
  lVar12 = auVar32._8_8_;
  puStack_160 = (undefined1 *)&ppuStack_150;
  puStack_148 = &Atlas_Contexts_BattleGameContext__GetRankingForPlayer;
  if (lVar12 != 0) {
    uVar10 = *(undefined8 *)(lVar12 + 0x88);
    uVar9 = *(undefined8 *)(lVar12 + 0x80);
    param_7[2] = *(undefined8 *)(lVar12 + 0x90);
    param_7[1] = uVar10;
    *param_7 = uVar9;
    return auVar32._0_8_;
  }
  ppuStack_150 = &puStack_90;
  auVar32 = func_0x00f78af4();
  lVar12 = auVar32._8_8_;
  uStack_170 = 0x3eb4000;
  puStack_158 = &Atlas_Contexts_BattleGameContext__SetupGameContextScreen;
  ppuStack_180 = &puStack_160;
  *(long *)(auVar32._0_8_ + 0x48) = lVar12;
  lStack_188 = lVar14;
  puStack_198 = &uStack_54;
  lStack_168 = lVar14;
  if (param_7 == (undefined8 *)0x0) {
code_r0x0153a734:
    uVar8 = func_0x00f78af4();
    uStack_1a0 = 0x3d22180;
    uStack_190 = 0x3eb4000;
    puStack_178 = &Atlas_Contexts_BattleGameContext__OnHostMigrationSynced;
    uVar5 = uVar8;
    if ((bRam0000000003eb4f05 & 1) == 0) {
      uVar5 = func_0x00f78a20(0x3d237b8);
      bRam0000000003eb4f05 = 1;
    }
    if (*(char *)(uVar8 + 0x274) != '\0') {
      puStack_1b8 = *(undefined **)(uVar8 + 0x278);
      pppuStack_1c0 = *(undefined1 ****)(uVar8 + 0x270);
      uStack_1b0 = *(undefined8 *)(uVar8 + 0x280);
      if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lStack_1d8 = (long)puStack_1b8;
      pppuStack_1e0 = pppuStack_1c0;
      uStack_1d0 = uStack_1b0;
      uVar5 = /*Core.Networking.NetworkSessionTime$$op_Addition*/ func_0x0165f11c(&uStack_1f8,&pppuStack_1e0,param_7,0);
      *(undefined1 *****)(uVar8 + 0x278) = ppppuStack_1f0;
      *(undefined8 *)(uVar8 + 0x270) = uStack_1f8;
      *(undefined **)(uVar8 + 0x280) = puStack_1e8;
    }
    return uVar5;
  }
  *(undefined4 *)(param_7 + 0x52) = 1;
  lStack_188 = 0;
  if (lVar12 == 0) goto code_r0x0153a734;
  uStack_1b0 = 2;
  uStack_1a8 = 0x3d1d260;
  uStack_1a0 = 0x3d22180;
  uStack_190 = 0x3eb4000;
  puStack_178 = &UNK_0153a718;
  lStack_188 = lVar12;
  puStack_160 = (undefined1 *)&ppuStack_150;
  if ((bRam0000000003eb522b & 1) == 0) {
    puStack_160 = (undefined1 *)&ppuStack_150;
    func_0x00f78a20(0x3d41080,8,1,0);
    bRam0000000003eb522b = 1;
  }
  lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
  if (lVar14 != 0) {
                    /* WARNING: Could not recover jumptable at 0x015ac724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*(code *)(&UNK_015ac728 + (ulong)UNK_033f8a48 * 4))(lVar14,8,1,0);
    return uVar5;
  }
  uVar9 = func_0x00f78af4();
  pppuStack_1e0 = (undefined1 ***)0x3eb5000;
  uStack_1d0 = 8;
  uStack_1c8 = 1;
  puStack_1b8 = &Atlas_UI_Screens_GameInProgressScreen__UpdateArcade;
  lStack_1d8 = lVar12;
  pppuStack_1c0 = &ppuStack_180;
  if ((bRam0000000003eb5227 & 1) == 0) {
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb5227 = 1;
  }
  uVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar9,uRam0000000003d41088);
  if ((uVar5 != 0) && (*(long *)(uVar5 + 0x30) != 0)) {
    return uVar5;
  }
  uVar10 = func_0x00f78af4();
  uStack_210 = 0x3eb5000;
  uStack_208 = 0x3d41088;
  uStack_200 = 0x3eb5000;
  puStack_1e8 = &Atlas_UI_Screens_GameInProgressScreen__OnLateUpdate;
  pppppuStack_220 = &ppppuStack_1f0;
  uStack_1f8 = uVar9;
  ppppuStack_1f0 = &pppuStack_1c0;
  if ((bRam0000000003eb5228 & 1) == 0) {
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb5228 = 1;
  }
  uStack_250 = 2;
  uStack_248 = 0x3d41080;
  uStack_240 = 0x3eb5000;
  uStack_238 = 0x3eb5000;
  uStack_230 = 0x3d41088;
  puStack_218 = &UNK_015aa6a0;
  uStack_228 = uVar10;
  if ((bRam0000000003eb522e & 1) == 0) {
    func_0x00f78a20(0x3d3b9d0);
    func_0x00f78a20(0x3d3b898);
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb522e = 1;
  }
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar10,uRam0000000003d41088);
  if (((lVar12 != 0) && (*(long *)(lVar12 + 0x38) != 0)) &&
     (lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 200), lVar12 != 0)) {
    iVar22 = *(int *)(lVar12 + 0x18);
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar10,uRam0000000003d41088);
    if (((lVar12 != 0) && (*(long *)(lVar12 + 0x38) != 0)) &&
       (lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0xd0), lVar12 != 0)) {
      iVar21 = *(int *)(lVar12 + 0x18);
      lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar10,uRam0000000003d41080);
      if (lVar12 != 0) {
        /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetWeaponIndicatorActive*/ func_0x015adeac(lVar12,0 < iVar21 + iVar22,0);
        lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar10,uRam0000000003d41080);
        lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar10,uRam0000000003d41088);
        if (((lVar14 != 0) && (*(long *)(lVar14 + 0x38) != 0)) &&
           (uStack_258 = *(undefined8 *)(*(long *)(lVar14 + 0x38) + 200), lVar12 != 0)) {
          /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetCulturePodWeaponIndicatorArrows*/ func_0x015adf10(lVar12,&uStack_258,0);
          lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar10,uRam0000000003d41080);
          lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar10,uRam0000000003d41088);
          if (((lVar14 != 0) && (*(long *)(lVar14 + 0x38) != 0)) &&
             (uStack_260 = *(undefined8 *)(*(long *)(lVar14 + 0x38) + 0xd0), lVar12 != 0)) {
            uVar5 = /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetSheldonWeaponIndicatorArrows*/ func_0x015ae03c(lVar12,&uStack_260,0);
            return uVar5;
          }
        }
      }
    }
  }
  lVar12 = func_0x00f78af4();
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
  uStack_320 = 0;
  uStack_318 = 0;
  lStack_310 = 0;
  fStack_328 = 0.0;
  uStack_330 = 0;
  fStack_338 = 0.0;
  uStack_340 = 0;
  fStack_348 = 0.0;
  uStack_358 = 0;
  uStack_350 = 0;
  uStack_360 = 0;
  iStack_364 = 0;
  lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
  if (((lVar14 == 0) || (*(long *)(lVar14 + 0x1c0) == 0)) ||
     (lVar14 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar14 + 0x1c0),0), lVar14 == 0)) goto code_r0x015ab4c4;
  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar14,*(char *)(lVar12 + 0x109) == '\0',0);
  lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
  if (((lVar14 == 0) || (*(long *)(lVar14 + 0x1c0) == 0)) ||
     (lVar14 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar14 + 0x1c0),0), lVar14 == 0)) goto code_r0x015ab4c4;
  uVar5 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar14,0);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  *(undefined1 *)(lVar12 + 0x9c) = 0;
  lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar12,uRam0000000003d41090);
  if ((lVar14 == 0) || (*(long *)(lVar14 + 0x40) == 0)) goto code_r0x015ab4c4;
  lVar14 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(lVar14 + 0x40),0);
  if (*(long *)(lVar12 + 0x78) == 0) {
code_r0x015aaa34:
    lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar12,uRam0000000003d41088);
    if ((lVar13 == 0) || (*(long *)(lVar13 + 0x38) == 0)) goto code_r0x015ab4c4;
    if (*(int *)(*(long *)(lVar13 + 0x38) + 0x74) == 1) {
      *(undefined8 *)(lVar12 + 0x78) = *(undefined8 *)(lVar12 + 0x80);
    }
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar12 + 0x78) + 0x10);
    if (lVar13 == 0) goto code_r0x015ab4c4;
    if (*(int *)(lVar13 + 0x74) != 1) goto code_r0x015aaa34;
  }
  uVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
  if (uVar5 == 0) {
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
  iVar22 = 0;
  iStack_394 = 0;
  uVar20 = 0;
code_r0x015aaa94:
  if (*(long *)(uVar5 + 0x1c8) == 0) goto code_r0x015ab4c4;
  if (*(int *)(*(long *)(uVar5 + 0x1c8) + 0x18) <= (int)uVar20) {
    return uVar5;
  }
  if (*(int *)(lVar12 + 0xbc) <= iStack_394) {
    return uVar5;
  }
  lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
  if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x1c8), lVar13 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar13 + 0x18) <= uVar20) goto code_r0x015ab4c8;
  lVar17 = (long)(int)uVar20;
  lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
  if (lVar13 == 0) goto code_r0x015ab4c4;
  if (*(long *)(lVar13 + 0x80) == 0) {
    bVar3 = false;
  }
  else {
    lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
    if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x1c8), lVar13 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar13 + 0x18) <= uVar20) goto code_r0x015ab4c8;
    lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
    if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x80), lVar13 == 0)) goto code_r0x015ab4c4;
    bVar3 = *(int *)(lVar13 + 0x74) == 1;
  }
  lVar13 = *(long *)(lVar12 + 0x78);
  if ((bool)(bVar3 & lVar13 == 0)) {
    if (*(long *)(lVar12 + 0x70) == 0) goto code_r0x015ab4c4;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_390,*(long *)(lVar12 + 0x70),uRam0000000003d3d1c8);
    uStack_318 = uStack_388;
    uStack_320 = uStack_390;
    lStack_310 = lStack_380;
    do {
      uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_320,uRam0000000003d33458);
      lVar13 = lStack_310;
      if ((uVar5 & 1) == 0) goto code_r0x015aabdc;
      if (lStack_310 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar19 = *(long *)(lStack_310 + 0x10);
      lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
      if (lVar11 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar11 = *(long *)(lVar11 + 0x1c8);
      if (lVar11 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar20) {
        uVar9 = func_0x00f78b24();
        func_0x00f78ac0(uVar9,0);
        goto code_r0x015ab4d8;
      }
      lVar11 = *(long *)(lVar11 + lVar17 * 8 + 0x20);
      if (lVar11 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
    } while (lVar19 != *(long *)(lVar11 + 0x80));
    *(long *)(lVar12 + 0x78) = lVar13;
code_r0x015aabdc:
    aiStack_378[iVar22] = 0x132;
    iVar21 = iStack_364;
    iVar22 = iStack_364 + 1;
    iStack_364 = iVar22;
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_320,uRam0000000003d33450);
    if ((iVar22 != 0) && (aiStack_378[iVar21] == 0x132)) {
      iStack_364 = iVar21;
      iVar22 = iVar21;
    }
    lVar13 = *(long *)(lVar12 + 0x78);
    iVar21 = iVar22;
  }
  if (lVar13 == 0) {
code_r0x015aac8c:
    uVar9 = 0;
    cVar18 = '\0';
  }
  else {
    lVar11 = *(long *)(lVar13 + 0x10);
    lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
    if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x1c8), lVar13 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar13 + 0x18) <= uVar20) goto code_r0x015ab4c8;
    lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
    if (lVar13 == 0) goto code_r0x015ab4c4;
    if (!(bool)(bVar3 & lVar11 == *(long *)(lVar13 + 0x80))) goto code_r0x015aac8c;
    cVar18 = *(char *)(lVar12 + 0xb8);
    uVar9 = 1;
  }
  lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
  if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x1c8), lVar13 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar13 + 0x18) <= uVar20) goto code_r0x015ab4c8;
  lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
  if (lVar13 == 0) goto code_r0x015ab4c4;
  fVar29 = param_2;
  fVar31 = param_3;
  if (*(long *)(lVar13 + 0x80) != 0) {
    lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
    if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x1c8), lVar13 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar13 + 0x18) <= uVar20) goto code_r0x015ab4c8;
    lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
    if (lVar13 == 0) goto code_r0x015ab4c4;
    iVar4 = /*Atlas.UI.KartIndicatorBehaviour$$get_CanUpdateTarget*/ func_0x015cc628(lVar13,0);
    if ((iVar4 != 0) && (fVar29 = param_2, fVar31 = param_3, *(char *)(lVar12 + 0xb8) == '\0'))
    goto code_r0x015aaf94;
    lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
    if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x1c8), lVar13 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar13 + 0x18) <= uVar20) goto code_r0x015ab4c8;
    lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
    if ((((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x80), lVar13 == 0)) ||
        (lVar13 = *(long *)(lVar13 + 0x10), lVar13 == 0)) ||
       (lVar13 = *(long *)(lVar13 + 0x18), lVar13 == 0)) goto code_r0x015ab4c4;
    fVar23 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar13,0);
    uStack_330 = CONCAT44(param_2,fVar23);
    fVar29 = param_2;
    fVar31 = param_3;
    fStack_328 = param_3;
    lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar12,uRam0000000003d41088);
    if (((lVar13 == 0) || (*(long *)(lVar13 + 0x38) == 0)) ||
       ((lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10), lVar13 == 0 ||
        (lVar13 = *(long *)(lVar13 + 0x18), lVar13 == 0)))) goto code_r0x015ab4c4;
    fVar24 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar13,0);
    uStack_340 = CONCAT44(fVar29,fVar24);
    fVar30 = param_3 - fVar31;
    uStack_350 = CONCAT44(param_2 - fVar29,fVar23 - fVar24);
    fStack_348 = fVar30;
    fStack_338 = fVar31;
    if (cVar18 != '\0') {
      if (lVar14 == 0) goto code_r0x015ab4c4;
code_r0x015aadd4:
      param_3 = param_3 + *(float *)(lVar12 + 0xa8);
      param_4 = *(float *)(lVar12 + 0xa0);
      param_2 = param_2 + *(float *)(lVar12 + 0xa4);
      fVar23 = (float)/*UnityEngine.Camera$$WorldToViewportPoint*/ func_0x0321fe94(fVar23 + param_4,lVar14,0);
      fVar29 = param_2;
      fVar31 = param_3;
      if (cVar18 == '\0') {
        bVar3 = false;
        bVar2 = true;
        if (0.0 <= fVar23) {
          bVar3 = false;
          bVar2 = true;
          if (!NAN(fVar23)) {
            bVar3 = fVar23 == 1.0;
            bVar2 = 1.0 <= fVar23;
          }
        }
        if (!bVar2 || bVar3) {
          bVar3 = false;
          bVar2 = true;
          if (0.0 <= param_2) {
            bVar3 = false;
            bVar2 = true;
            if (!NAN(param_2)) {
              bVar3 = param_2 == 1.0;
              bVar2 = 1.0 <= param_2;
            }
          }
          if (((!bVar2 || bVar3) && (0.0 <= param_3)) &&
             (iVar4 = /*Atlas.UI.Screens.GameInProgressScreen$$CanSeeTarget*/ func_0x015ab70c(lVar12,&uStack_340,&uStack_330,1,1), iVar4 != 0))
          goto code_r0x015aae04;
        }
        goto code_r0x015aaf94;
      }
code_r0x015aae04:
      lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
      if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x1c8), lVar13 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar13 + 0x18) <= uVar20) goto code_r0x015ab4c8;
      lVar11 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
      lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
      if ((lVar13 == 0) || (*(long *)(lVar13 + 0x1c0) == 0)) goto code_r0x015ab4c4;
      uVar25 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar13 + 0x1c0),0);
      uStack_360 = CONCAT44(fVar29,uVar25);
      uStack_358 = CONCAT44(param_4,fVar31);
      param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_360,0);
      if (lVar11 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(fVar23,lVar11,0);
      lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
      if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x1c8), lVar13 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar13 + 0x18) <= uVar20) goto code_r0x015ab4c8;
      lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
      if (lVar13 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar13,uVar9,*(undefined1 *)(lVar12 + 0xb8),0);
      if (*(char *)(lVar12 + 0xb8) != '\0') {
        lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
        if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x1c8), lVar13 == 0))
        goto code_r0x015ab4c4;
        if (*(uint *)(lVar13 + 0x18) <= uVar20) goto code_r0x015ab4c8;
        lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
        if (lVar13 == 0) goto code_r0x015ab4c4;
        *(undefined4 *)(lVar13 + 0x88) = *(undefined4 *)(lVar12 + 0x98);
      }
      iStack_394 = iStack_394 + 1;
      goto code_r0x015ab2c0;
    }
    fVar24 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_350,0);
    fVar29 = *(float *)(lVar12 + 0x8c);
    fVar31 = fVar30;
    if (fVar29 <= fVar24) goto code_r0x015aaf94;
    fVar24 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_350,0);
    if ((lVar14 == 0) ||
       (fVar28 = fVar29, fVar31 = fVar30, lVar13 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar14,0), lVar13 == 0))
    goto code_r0x015ab4c4;
    fVar26 = (float)/*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar13,0);
    fVar28 = fVar29 * fVar28;
    fVar29 = *(float *)(lVar12 + 0x94);
    if (fVar29 < fVar30 * fVar31 + fVar24 * fVar26 + fVar28) goto code_r0x015aadd4;
  }
code_r0x015aaf94:
  lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
  if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x1c8), lVar13 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar13 + 0x18) <= uVar20) goto code_r0x015ab4c8;
  lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
  if (lVar13 == 0) goto code_r0x015ab4c4;
  param_3 = fVar31;
  if (*(long *)(lVar13 + 0x80) != 0) {
    lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
    if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x1c8), lVar13 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar13 + 0x18) <= uVar20) goto code_r0x015ab4c8;
    lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
    if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x80), lVar13 == 0)) goto code_r0x015ab4c4;
    *(undefined1 *)(lVar13 + 0x9c) = 0;
    param_3 = fVar31;
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
    cVar18 = *(char *)(lVar12 + 0xb8);
  }
  else {
    cVar18 = '\0';
  }
  if (*(long *)(lVar12 + 0x70) == 0) goto code_r0x015ab4c4;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_390,*(long *)(lVar12 + 0x70),uRam0000000003d3d1c8);
  uStack_318 = uStack_388;
  uStack_320 = uStack_390;
  lStack_310 = lStack_380;
  do {
    do {
      uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_320,uRam0000000003d33458);
      lVar13 = lStack_310;
      param_2 = fVar29;
      if ((uVar5 & 1) == 0) {
code_r0x015ab1e8:
        bVar3 = false;
        goto code_r0x015ab1ec;
      }
      if (lStack_310 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      fVar29 = *(float *)(lVar12 + 0x8c);
      if ((fVar29 < *(float *)(lStack_310 + 0x18)) &&
         (param_2 = fVar29, lStack_310 != *(long *)(lVar12 + 0x78))) goto code_r0x015ab1e8;
    } while (*(char *)(lStack_310 + 0x28) == '\0');
    lVar11 = *(long *)(lStack_310 + 0x10);
    if (lVar11 == 0) {
      func_0x00f78af4();
      goto code_r0x015ab4d8;
    }
  } while (*(char *)(lVar11 + 0x9c) != '\0');
  *(undefined1 *)(lVar11 + 0x9c) = 1;
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar11 = *(long *)(lVar11 + 0x1c8);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar11 + 0x18) <= uVar20) {
    uVar9 = func_0x00f78b24();
    func_0x00f78ac0(uVar9,0);
    goto code_r0x015ab4d8;
  }
  lVar11 = *(long *)(lVar11 + lVar17 * 8 + 0x20);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(*(undefined4 *)(lVar12 + 0x98),lVar11,*(undefined8 *)(lVar13 + 0x10),
                  cVar18 != '\0',0);
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar11 = *(long *)(lVar11 + 0x1c8);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar11 + 0x18) <= uVar20) {
    uVar9 = func_0x00f78b24();
    func_0x00f78ac0(uVar9,0);
    goto code_r0x015ab4d8;
  }
  lVar11 = *(long *)(lVar11 + lVar17 * 8 + 0x20);
  uVar25 = *(undefined4 *)(lVar13 + 0x1c);
  param_2 = *(float *)(lVar13 + 0x20);
  fVar31 = *(float *)(lVar13 + 0x24);
  lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
  if (lVar13 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(long *)(lVar13 + 0x1c0) == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  uVar27 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar13 + 0x1c0),0);
  uStack_360 = CONCAT44(fVar29,uVar27);
  uStack_358 = CONCAT44(param_4,param_3);
  param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_360,0);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(uVar25,lVar11,0);
  lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
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
  /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar13,uVar9,*(undefined1 *)(lVar12 + 0xb8),0);
  iStack_394 = iStack_394 + 1;
  bVar3 = true;
  param_3 = fVar31;
code_r0x015ab1ec:
  aiStack_378[iVar21] = 0x41c;
  iVar22 = iStack_364;
  iVar21 = iStack_364 + 1;
  iStack_364 = iVar21;
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_320,uRam0000000003d33450);
  if ((iVar21 != 0) && (aiStack_378[iVar22] == 0x41c)) {
    iStack_364 = iVar22;
    iVar21 = iVar22;
  }
  iVar22 = iVar21;
  if (!bVar3) {
    lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
    if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x1c8), lVar13 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar13 + 0x18) <= uVar20) goto code_r0x015ab4c8;
    lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
    if (lVar13 == 0) goto code_r0x015ab4c4;
    if (*(long *)(lVar13 + 0x80) != 0) {
      lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
      if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x1c8), lVar13 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar13 + 0x18) <= uVar20) goto code_r0x015ab4c8;
      lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
      if (lVar13 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(0,lVar13,0,cVar18 != '\0',0);
    }
  }
code_r0x015ab2c0:
  uVar20 = uVar20 + 1;
  uVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d41080);
  if (uVar5 == 0) goto code_r0x015ab4c4;
  goto code_r0x015aaa94;
}



// ============================================================
// RVA: 0x153a5a8 | Atlas.Contexts.BattleGameContext.IsFrenzyActive
// ============================================================

/* WARNING: Possible PIC construction at 0x0153a714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015aa69c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ae374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0153a718) */
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

long Atlas_Contexts_BattleGameContext__IsFrenzyActive
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
               undefined8 param_6,undefined8 *param_7)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  char cVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  int iStack_314;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long lStack_300;
  int aiStack_2f8 [5];
  int iStack_2e4;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  float fStack_2c8;
  undefined8 uStack_2c0;
  float fStack_2b8;
  undefined8 uStack_2b0;
  float fStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_178;
  undefined1 ****ppppuStack_170;
  undefined *puStack_168;
  undefined1 ***pppuStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 ***pppuStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000003eb4f03 & 1) == 0) {
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb4f03 = 1;
  }
  if ((*(char *)(param_5 + 0x274) == '\0') || (*(char *)(param_5 + 0x260) == '\0')) {
    return 0;
  }
  if ((*(long *)(param_5 + 600) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_5 + 600) + 0x20), lVar5 != 0)) {
    /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_38,lVar5,0);
    uStack_48 = *(undefined8 *)(param_5 + 0x278);
    uStack_50 = *(undefined8 *)(param_5 + 0x270);
    uStack_40 = *(undefined8 *)(param_5 + 0x280);
    uVar20 = *(undefined4 *)(param_5 + 0x268);
    if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_70 = uStack_40;
    /*Core.Networking.NetworkSessionTime$$op_Subtraction*/ func_0x0165f1c4(&uStack_68,&uStack_80,uVar20,0);
    uStack_98 = uStack_30;
    uStack_a0 = uStack_38;
    uStack_90 = uStack_28;
    uStack_b8 = uStack_60;
    uStack_c0 = uStack_68;
    uStack_b0 = uStack_58;
    lVar5 = /*Core.Networking.NetworkSessionTime$$op_GreaterThanOrEqual*/ func_0x0165e314(&uStack_a0,&uStack_c0,0);
    return lVar5;
  }
  auVar27 = func_0x00f78af4();
  lVar5 = auVar27._8_8_;
  puStack_e0 = (undefined1 *)&puStack_d0;
  puStack_c8 = &Atlas_Contexts_BattleGameContext__GetRankingForPlayer;
  if (lVar5 != 0) {
    uVar8 = *(undefined8 *)(lVar5 + 0x88);
    uVar7 = *(undefined8 *)(lVar5 + 0x80);
    param_7[2] = *(undefined8 *)(lVar5 + 0x90);
    param_7[1] = uVar8;
    *param_7 = uVar7;
    return auVar27._0_8_;
  }
  puStack_d0 = &stack0xfffffffffffffff0;
  auVar27 = func_0x00f78af4();
  lVar5 = auVar27._8_8_;
  uStack_f0 = 0x3eb4000;
  puStack_d8 = &Atlas_Contexts_BattleGameContext__SetupGameContextScreen;
  ppuStack_100 = &puStack_e0;
  *(long *)(auVar27._0_8_ + 0x48) = lVar5;
  lStack_e8 = param_5;
  if ((param_7 == (undefined8 *)0x0) || (*(undefined4 *)(param_7 + 0x52) = 1, lVar5 == 0)) {
    lVar6 = func_0x00f78af4();
    puStack_f8 = &Atlas_Contexts_BattleGameContext__OnHostMigrationSynced;
    lVar5 = lVar6;
    if ((bRam0000000003eb4f05 & 1) == 0) {
      lVar5 = func_0x00f78a20(0x3d237b8);
      bRam0000000003eb4f05 = 1;
    }
    if (*(char *)(lVar6 + 0x274) != '\0') {
      puStack_138 = *(undefined **)(lVar6 + 0x278);
      pppuStack_140 = *(undefined1 ****)(lVar6 + 0x270);
      uVar7 = *(undefined8 *)(lVar6 + 0x280);
      if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lStack_158 = (long)puStack_138;
      pppuStack_160 = pppuStack_140;
      uStack_150 = uVar7;
      lVar5 = /*Core.Networking.NetworkSessionTime$$op_Addition*/ func_0x0165f11c(&uStack_178,&pppuStack_160,param_7,0);
      *(undefined1 *****)(lVar6 + 0x278) = ppppuStack_170;
      *(undefined8 *)(lVar6 + 0x270) = uStack_178;
      *(undefined **)(lVar6 + 0x280) = puStack_168;
    }
    return lVar5;
  }
  puStack_f8 = &UNK_0153a718;
  puStack_e0 = (undefined1 *)&puStack_d0;
  if ((bRam0000000003eb522b & 1) == 0) {
    puStack_e0 = (undefined1 *)&puStack_d0;
    func_0x00f78a20(0x3d41080,8,1,0);
    bRam0000000003eb522b = 1;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d41080);
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x015ac724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar5 = (*(code *)(&UNK_015ac728 + (ulong)UNK_033f8a48 * 4))(lVar6,8,1,0);
    return lVar5;
  }
  uVar7 = func_0x00f78af4();
  pppuStack_160 = (undefined1 ***)0x3eb5000;
  uStack_150 = 8;
  uStack_148 = 1;
  puStack_138 = &Atlas_UI_Screens_GameInProgressScreen__UpdateArcade;
  lStack_158 = lVar5;
  pppuStack_140 = &ppuStack_100;
  if ((bRam0000000003eb5227 & 1) == 0) {
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb5227 = 1;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar7,uRam0000000003d41088);
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x30) != 0)) {
    return lVar5;
  }
  uVar8 = func_0x00f78af4();
  puStack_168 = &Atlas_UI_Screens_GameInProgressScreen__OnLateUpdate;
  uStack_178 = uVar7;
  ppppuStack_170 = &pppuStack_140;
  if ((bRam0000000003eb5228 & 1) == 0) {
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb5228 = 1;
  }
  if ((bRam0000000003eb522e & 1) == 0) {
    func_0x00f78a20(0x3d3b9d0);
    func_0x00f78a20(0x3d3b898);
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb522e = 1;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar8,uRam0000000003d41088);
  if (((lVar5 != 0) && (*(long *)(lVar5 + 0x38) != 0)) &&
     (lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 200), lVar5 != 0)) {
    iVar17 = *(int *)(lVar5 + 0x18);
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar8,uRam0000000003d41088);
    if (((lVar5 != 0) && (*(long *)(lVar5 + 0x38) != 0)) &&
       (lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0xd0), lVar5 != 0)) {
      iVar16 = *(int *)(lVar5 + 0x18);
      lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar8,uRam0000000003d41080);
      if (lVar5 != 0) {
        /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetWeaponIndicatorActive*/ func_0x015adeac(lVar5,0 < iVar16 + iVar17,0);
        lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar8,uRam0000000003d41080);
        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar8,uRam0000000003d41088);
        if (((lVar6 != 0) && (*(long *)(lVar6 + 0x38) != 0)) &&
           (uStack_1d8 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + 200), lVar5 != 0)) {
          /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetCulturePodWeaponIndicatorArrows*/ func_0x015adf10(lVar5,&uStack_1d8,0);
          lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar8,uRam0000000003d41080);
          lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar8,uRam0000000003d41088);
          if (((lVar6 != 0) && (*(long *)(lVar6 + 0x38) != 0)) &&
             (uStack_1e0 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + 0xd0), lVar5 != 0)) {
            lVar5 = /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetSheldonWeaponIndicatorArrows*/ func_0x015ae03c(lVar5,&uStack_1e0,0);
            return lVar5;
          }
        }
      }
    }
  }
  lVar5 = func_0x00f78af4();
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
  uStack_2a0 = 0;
  uStack_298 = 0;
  lStack_290 = 0;
  fStack_2a8 = 0.0;
  uStack_2b0 = 0;
  fStack_2b8 = 0.0;
  uStack_2c0 = 0;
  fStack_2c8 = 0.0;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  uStack_2e0 = 0;
  iStack_2e4 = 0;
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d41080);
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x1c0) == 0)) ||
     (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar6 + 0x1c0),0), lVar6 == 0)) goto code_r0x015ab4c4;
  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar6,*(char *)(lVar5 + 0x109) == '\0',0);
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d41080);
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x1c0) == 0)) ||
     (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar6 + 0x1c0),0), lVar6 == 0)) goto code_r0x015ab4c4;
  lVar6 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar6,0);
  if ((int)lVar6 == 0) {
    return lVar6;
  }
  *(undefined1 *)(lVar5 + 0x9c) = 0;
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar5,uRam0000000003d41090);
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x40) == 0)) goto code_r0x015ab4c4;
  lVar6 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(lVar6 + 0x40),0);
  if (*(long *)(lVar5 + 0x78) == 0) {
code_r0x015aaa34:
    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar5,uRam0000000003d41088);
    if ((lVar11 == 0) || (*(long *)(lVar11 + 0x38) == 0)) goto code_r0x015ab4c4;
    if (*(int *)(*(long *)(lVar11 + 0x38) + 0x74) == 1) {
      *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(lVar5 + 0x80);
    }
  }
  else {
    lVar11 = *(long *)(*(long *)(lVar5 + 0x78) + 0x10);
    if (lVar11 == 0) goto code_r0x015ab4c4;
    if (*(int *)(lVar11 + 0x74) != 1) goto code_r0x015aaa34;
  }
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d41080);
  if (lVar11 == 0) {
code_r0x015ab4c4:
    func_0x00f78af4();
code_r0x015ab4c8:
    uVar7 = func_0x00f78b24();
    func_0x00f78ac0(uVar7,0);
    __Unwind_Resume();
code_r0x015ab4d8:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x15ab4dc);
    (*pcVar1)();
  }
  iVar16 = 0;
  iVar17 = 0;
  iStack_314 = 0;
  uVar15 = 0;
code_r0x015aaa94:
  if (*(long *)(lVar11 + 0x1c8) == 0) goto code_r0x015ab4c4;
  if (*(int *)(*(long *)(lVar11 + 0x1c8) + 0x18) <= (int)uVar15) {
    return lVar11;
  }
  if (*(int *)(lVar5 + 0xbc) <= iStack_314) {
    return lVar11;
  }
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d41080);
  if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x1c8), lVar11 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar11 + 0x18) <= uVar15) goto code_r0x015ab4c8;
  lVar12 = (long)(int)uVar15;
  lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x20);
  if (lVar11 == 0) goto code_r0x015ab4c4;
  if (*(long *)(lVar11 + 0x80) == 0) {
    bVar3 = false;
  }
  else {
    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d41080);
    if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x1c8), lVar11 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar11 + 0x18) <= uVar15) goto code_r0x015ab4c8;
    lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x20);
    if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x80), lVar11 == 0)) goto code_r0x015ab4c4;
    bVar3 = *(int *)(lVar11 + 0x74) == 1;
  }
  lVar11 = *(long *)(lVar5 + 0x78);
  if ((bool)(bVar3 & lVar11 == 0)) {
    if (*(long *)(lVar5 + 0x70) == 0) goto code_r0x015ab4c4;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_310,*(long *)(lVar5 + 0x70),uRam0000000003d3d1c8);
    uStack_298 = uStack_308;
    uStack_2a0 = uStack_310;
    lStack_290 = lStack_300;
    do {
      uVar9 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_2a0,uRam0000000003d33458);
      lVar11 = lStack_290;
      if ((uVar9 & 1) == 0) goto code_r0x015aabdc;
      if (lStack_290 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar14 = *(long *)(lStack_290 + 0x10);
      lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d41080);
      if (lVar10 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar10 = *(long *)(lVar10 + 0x1c8);
      if (lVar10 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar15) {
        uVar7 = func_0x00f78b24();
        func_0x00f78ac0(uVar7,0);
        goto code_r0x015ab4d8;
      }
      lVar10 = *(long *)(lVar10 + lVar12 * 8 + 0x20);
      if (lVar10 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
    } while (lVar14 != *(long *)(lVar10 + 0x80));
    *(long *)(lVar5 + 0x78) = lVar11;
code_r0x015aabdc:
    aiStack_2f8[iVar17] = 0x132;
    iVar16 = iStack_2e4;
    iVar17 = iStack_2e4 + 1;
    iStack_2e4 = iVar17;
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_2a0,uRam0000000003d33450);
    if ((iVar17 != 0) && (aiStack_2f8[iVar16] == 0x132)) {
      iStack_2e4 = iVar16;
      iVar17 = iVar16;
    }
    lVar11 = *(long *)(lVar5 + 0x78);
    iVar16 = iVar17;
  }
  if (lVar11 == 0) {
code_r0x015aac8c:
    uVar7 = 0;
    cVar13 = '\0';
  }
  else {
    lVar10 = *(long *)(lVar11 + 0x10);
    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d41080);
    if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x1c8), lVar11 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar11 + 0x18) <= uVar15) goto code_r0x015ab4c8;
    lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x20);
    if (lVar11 == 0) goto code_r0x015ab4c4;
    if (!(bool)(bVar3 & lVar10 == *(long *)(lVar11 + 0x80))) goto code_r0x015aac8c;
    cVar13 = *(char *)(lVar5 + 0xb8);
    uVar7 = 1;
  }
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d41080);
  if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x1c8), lVar11 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar11 + 0x18) <= uVar15) goto code_r0x015ab4c8;
  lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x20);
  if (lVar11 == 0) goto code_r0x015ab4c4;
  fVar24 = param_2;
  fVar26 = param_3;
  if (*(long *)(lVar11 + 0x80) != 0) {
    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d41080);
    if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x1c8), lVar11 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar11 + 0x18) <= uVar15) goto code_r0x015ab4c8;
    lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x20);
    if (lVar11 == 0) goto code_r0x015ab4c4;
    iVar4 = /*Atlas.UI.KartIndicatorBehaviour$$get_CanUpdateTarget*/ func_0x015cc628(lVar11,0);
    if ((iVar4 != 0) && (fVar24 = param_2, fVar26 = param_3, *(char *)(lVar5 + 0xb8) == '\0'))
    goto code_r0x015aaf94;
    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d41080);
    if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x1c8), lVar11 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar11 + 0x18) <= uVar15) goto code_r0x015ab4c8;
    lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x20);
    if ((((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x80), lVar11 == 0)) ||
        (lVar11 = *(long *)(lVar11 + 0x10), lVar11 == 0)) ||
       (lVar11 = *(long *)(lVar11 + 0x18), lVar11 == 0)) goto code_r0x015ab4c4;
    fVar18 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar11,0);
    uStack_2b0 = CONCAT44(param_2,fVar18);
    fVar24 = param_2;
    fVar26 = param_3;
    fStack_2a8 = param_3;
    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar5,uRam0000000003d41088);
    if (((lVar11 == 0) || (*(long *)(lVar11 + 0x38) == 0)) ||
       ((lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10), lVar11 == 0 ||
        (lVar11 = *(long *)(lVar11 + 0x18), lVar11 == 0)))) goto code_r0x015ab4c4;
    fVar19 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar11,0);
    uStack_2c0 = CONCAT44(fVar24,fVar19);
    fVar25 = param_3 - fVar26;
    uStack_2d0 = CONCAT44(param_2 - fVar24,fVar18 - fVar19);
    fStack_2c8 = fVar25;
    fStack_2b8 = fVar26;
    if (cVar13 != '\0') {
      if (lVar6 == 0) goto code_r0x015ab4c4;
code_r0x015aadd4:
      param_3 = param_3 + *(float *)(lVar5 + 0xa8);
      param_4 = *(float *)(lVar5 + 0xa0);
      param_2 = param_2 + *(float *)(lVar5 + 0xa4);
      fVar18 = (float)/*UnityEngine.Camera$$WorldToViewportPoint*/ func_0x0321fe94(fVar18 + param_4,lVar6,0);
      fVar24 = param_2;
      fVar26 = param_3;
      if (cVar13 == '\0') {
        bVar3 = false;
        bVar2 = true;
        if (0.0 <= fVar18) {
          bVar3 = false;
          bVar2 = true;
          if (!NAN(fVar18)) {
            bVar3 = fVar18 == 1.0;
            bVar2 = 1.0 <= fVar18;
          }
        }
        if (!bVar2 || bVar3) {
          bVar3 = false;
          bVar2 = true;
          if (0.0 <= param_2) {
            bVar3 = false;
            bVar2 = true;
            if (!NAN(param_2)) {
              bVar3 = param_2 == 1.0;
              bVar2 = 1.0 <= param_2;
            }
          }
          if (((!bVar2 || bVar3) && (0.0 <= param_3)) &&
             (iVar4 = /*Atlas.UI.Screens.GameInProgressScreen$$CanSeeTarget*/ func_0x015ab70c(lVar5,&uStack_2c0,&uStack_2b0,1,1), iVar4 != 0))
          goto code_r0x015aae04;
        }
        goto code_r0x015aaf94;
      }
code_r0x015aae04:
      lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d41080);
      if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x1c8), lVar11 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar11 + 0x18) <= uVar15) goto code_r0x015ab4c8;
      lVar10 = *(long *)(lVar11 + lVar12 * 8 + 0x20);
      lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d41080);
      if ((lVar11 == 0) || (*(long *)(lVar11 + 0x1c0) == 0)) goto code_r0x015ab4c4;
      uVar20 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar11 + 0x1c0),0);
      uStack_2e0 = CONCAT44(fVar24,uVar20);
      uStack_2d8 = CONCAT44(param_4,fVar26);
      param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_2e0,0);
      if (lVar10 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(fVar18,lVar10,0);
      lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d41080);
      if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x1c8), lVar11 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar11 + 0x18) <= uVar15) goto code_r0x015ab4c8;
      lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x20);
      if (lVar11 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar11,uVar7,*(undefined1 *)(lVar5 + 0xb8),0);
      if (*(char *)(lVar5 + 0xb8) != '\0') {
        lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d41080);
        if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x1c8), lVar11 == 0))
        goto code_r0x015ab4c4;
        if (*(uint *)(lVar11 + 0x18) <= uVar15) goto code_r0x015ab4c8;
        lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x20);
        if (lVar11 == 0) goto code_r0x015ab4c4;
        *(undefined4 *)(lVar11 + 0x88) = *(undefined4 *)(lVar5 + 0x98);
      }
      iStack_314 = iStack_314 + 1;
      goto code_r0x015ab2c0;
    }
    fVar19 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_2d0,0);
    fVar24 = *(float *)(lVar5 + 0x8c);
    fVar26 = fVar25;
    if (fVar19 < fVar24) {
      fVar19 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_2d0,0);
      if ((lVar6 != 0) &&
         (fVar23 = fVar24, fVar26 = fVar25, lVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar6,0), lVar11 != 0)) {
        fVar21 = (float)/*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar11,0);
        fVar23 = fVar24 * fVar23;
        fVar24 = *(float *)(lVar5 + 0x94);
        if (fVar24 < fVar25 * fVar26 + fVar19 * fVar21 + fVar23) goto code_r0x015aadd4;
        goto code_r0x015aaf94;
      }
      goto code_r0x015ab4c4;
    }
  }
code_r0x015aaf94:
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d41080);
  if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x1c8), lVar11 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar11 + 0x18) <= uVar15) goto code_r0x015ab4c8;
  lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x20);
  if (lVar11 == 0) goto code_r0x015ab4c4;
  param_3 = fVar26;
  if (*(long *)(lVar11 + 0x80) != 0) {
    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d41080);
    if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x1c8), lVar11 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar11 + 0x18) <= uVar15) goto code_r0x015ab4c8;
    lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x20);
    if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x80), lVar11 == 0)) goto code_r0x015ab4c4;
    *(undefined1 *)(lVar11 + 0x9c) = 0;
    param_3 = fVar26;
  }
  if (*(char *)(lVar5 + 0x9c) == '\0') {
    if (*(char *)(lVar5 + 0xb8) == '\0') {
      /*Atlas.UI.Screens.GameInProgressScreen$$UpdateAllKartIndicatorDataRace*/ func_0x015abdd0(lVar5);
    }
    else {
      /*Atlas.UI.Screens.GameInProgressScreen$$UpdateAllKartIndicatorDataBattle*/ func_0x015ab8c0(lVar5);
    }
  }
  if (*(char *)(lVar5 + 0x10a) == '\0') {
    cVar13 = *(char *)(lVar5 + 0xb8);
  }
  else {
    cVar13 = '\0';
  }
  if (*(long *)(lVar5 + 0x70) == 0) goto code_r0x015ab4c4;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_310,*(long *)(lVar5 + 0x70),uRam0000000003d3d1c8);
  uStack_298 = uStack_308;
  uStack_2a0 = uStack_310;
  lStack_290 = lStack_300;
  do {
    do {
      uVar9 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_2a0,uRam0000000003d33458);
      lVar11 = lStack_290;
      param_2 = fVar24;
      if ((uVar9 & 1) == 0) {
code_r0x015ab1e8:
        bVar3 = false;
        goto code_r0x015ab1ec;
      }
      if (lStack_290 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      fVar24 = *(float *)(lVar5 + 0x8c);
      if ((fVar24 < *(float *)(lStack_290 + 0x18)) &&
         (param_2 = fVar24, lStack_290 != *(long *)(lVar5 + 0x78))) goto code_r0x015ab1e8;
    } while (*(char *)(lStack_290 + 0x28) == '\0');
    lVar10 = *(long *)(lStack_290 + 0x10);
    if (lVar10 == 0) {
      func_0x00f78af4();
      goto code_r0x015ab4d8;
    }
  } while (*(char *)(lVar10 + 0x9c) != '\0');
  *(undefined1 *)(lVar10 + 0x9c) = 1;
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d41080);
  if (lVar10 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar10 = *(long *)(lVar10 + 0x1c8);
  if (lVar10 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar10 + 0x18) <= uVar15) {
    uVar7 = func_0x00f78b24();
    func_0x00f78ac0(uVar7,0);
    goto code_r0x015ab4d8;
  }
  lVar10 = *(long *)(lVar10 + lVar12 * 8 + 0x20);
  if (lVar10 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(*(undefined4 *)(lVar5 + 0x98),lVar10,*(undefined8 *)(lVar11 + 0x10),cVar13 != '\0'
                  ,0);
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d41080);
  if (lVar10 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar10 = *(long *)(lVar10 + 0x1c8);
  if (lVar10 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar10 + 0x18) <= uVar15) {
    uVar7 = func_0x00f78b24();
    func_0x00f78ac0(uVar7,0);
    goto code_r0x015ab4d8;
  }
  lVar10 = *(long *)(lVar10 + lVar12 * 8 + 0x20);
  uVar20 = *(undefined4 *)(lVar11 + 0x1c);
  param_2 = *(float *)(lVar11 + 0x20);
  fVar26 = *(float *)(lVar11 + 0x24);
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d41080);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(long *)(lVar11 + 0x1c0) == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  uVar22 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar11 + 0x1c0),0);
  uStack_2e0 = CONCAT44(fVar24,uVar22);
  uStack_2d8 = CONCAT44(param_4,param_3);
  param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_2e0,0);
  if (lVar10 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(uVar20,lVar10,0);
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d41080);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar11 = *(long *)(lVar11 + 0x1c8);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar11 + 0x18) <= uVar15) {
    uVar7 = func_0x00f78b24();
    func_0x00f78ac0(uVar7,0);
    goto code_r0x015ab4d8;
  }
  lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x20);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar11,uVar7,*(undefined1 *)(lVar5 + 0xb8),0);
  iStack_314 = iStack_314 + 1;
  bVar3 = true;
  param_3 = fVar26;
code_r0x015ab1ec:
  aiStack_2f8[iVar16] = 0x41c;
  iVar17 = iStack_2e4;
  iVar16 = iStack_2e4 + 1;
  iStack_2e4 = iVar16;
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_2a0,uRam0000000003d33450);
  if ((iVar16 != 0) && (aiStack_2f8[iVar17] == 0x41c)) {
    iStack_2e4 = iVar17;
    iVar16 = iVar17;
  }
  iVar17 = iVar16;
  if (!bVar3) {
    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d41080);
    if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x1c8), lVar11 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar11 + 0x18) <= uVar15) goto code_r0x015ab4c8;
    lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x20);
    if (lVar11 == 0) goto code_r0x015ab4c4;
    if (*(long *)(lVar11 + 0x80) != 0) {
      lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d41080);
      if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x1c8), lVar11 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar11 + 0x18) <= uVar15) goto code_r0x015ab4c8;
      lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x20);
      if (lVar11 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(0,lVar11,0,cVar13 != '\0',0);
    }
  }
code_r0x015ab2c0:
  uVar15 = uVar15 + 1;
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d41080);
  if (lVar11 == 0) goto code_r0x015ab4c4;
  goto code_r0x015aaa94;
}



// ============================================================
// RVA: 0x153a6b0 | Atlas.Contexts.BattleGameContext.GetRankingForPlayer
// ============================================================

/* WARNING: Possible PIC construction at 0x0153a714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015aa69c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ae374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0153a718) */
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
Atlas_Contexts_BattleGameContext__GetRankingForPlayer
          (undefined1 param_1 [16],float param_2,float param_3,float param_4,undefined8 param_5,
          long param_6,undefined8 *param_7)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  char cVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_d0_01;
  undefined8 extraout_d0_02;
  undefined8 extraout_d0_03;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar23 [16];
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined8 extraout_var_03;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  int iStack_254;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  int aiStack_238 [5];
  int iStack_224;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  float fStack_208;
  undefined8 uStack_200;
  float fStack_1f8;
  undefined8 uStack_1f0;
  float fStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_b8;
  undefined1 ****ppppuStack_b0;
  undefined *puStack_a8;
  undefined1 ***pppuStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 ***pppuStack_80;
  undefined *puStack_78;
  undefined1 **ppuStack_40;
  undefined *puStack_38;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (param_6 != 0) {
    uVar9 = *(undefined8 *)(param_6 + 0x88);
    uVar7 = *(undefined8 *)(param_6 + 0x80);
    param_7[2] = *(undefined8 *)(param_6 + 0x90);
    param_7[1] = uVar9;
    *param_7 = uVar7;
    return ZEXT416((uint)(float)*(int *)(param_6 + 0x78));
  }
  auVar29 = func_0x00f78af4();
  lVar8 = auVar29._8_8_;
  puStack_18 = &Atlas_Contexts_BattleGameContext__SetupGameContextScreen;
  ppuStack_40 = &puStack_20;
  *(long *)(auVar29._0_8_ + 0x48) = lVar8;
  if ((param_7 == (undefined8 *)0x0) || (*(undefined4 *)(param_7 + 0x52) = 1, lVar8 == 0)) {
    puStack_20 = &stack0xfffffffffffffff0;
    lVar8 = func_0x00f78af4();
    auVar29._8_8_ = extraout_var;
    auVar29._0_8_ = extraout_d0;
    puStack_38 = &Atlas_Contexts_BattleGameContext__OnHostMigrationSynced;
    if ((bRam0000000003eb4f05 & 1) == 0) {
      auVar29 = func_0x00f78a20(0x3d237b8);
      bRam0000000003eb4f05 = 1;
    }
    if (*(char *)(lVar8 + 0x274) != '\0') {
      puStack_78 = *(undefined **)(lVar8 + 0x278);
      pppuStack_80 = *(undefined1 ****)(lVar8 + 0x270);
      uVar7 = *(undefined8 *)(lVar8 + 0x280);
      if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lStack_98 = (long)puStack_78;
      pppuStack_a0 = pppuStack_80;
      uStack_90 = uVar7;
      /*Core.Networking.NetworkSessionTime$$op_Addition*/ func_0x0165f11c(&uStack_b8,&pppuStack_a0,param_7,0);
      auVar29._8_8_ = ppppuStack_b0;
      auVar29._0_8_ = uStack_b8;
      *(undefined1 *****)(lVar8 + 0x278) = ppppuStack_b0;
      *(undefined8 *)(lVar8 + 0x270) = uStack_b8;
      *(undefined **)(lVar8 + 0x280) = puStack_a8;
    }
    return auVar29;
  }
  puStack_38 = &UNK_0153a718;
  puStack_20 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb522b & 1) == 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x00f78a20(0x3d41080,8,1,0);
    bRam0000000003eb522b = 1;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x015ac724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar29 = (*(code *)(&UNK_015ac728 + (ulong)UNK_033f8a48 * 4))(lVar6,8,1,0);
    return auVar29;
  }
  uVar7 = func_0x00f78af4();
  pppuStack_a0 = (undefined1 ***)0x3eb5000;
  uStack_90 = 8;
  uStack_88 = 1;
  puStack_78 = &Atlas_UI_Screens_GameInProgressScreen__UpdateArcade;
  lStack_98 = lVar8;
  pppuStack_80 = &ppuStack_40;
  if ((bRam0000000003eb5227 & 1) == 0) {
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb5227 = 1;
  }
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar7,uRam0000000003d41088);
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x30) != 0)) {
    auVar23._8_8_ = extraout_var_00;
    auVar23._0_8_ = extraout_d0_00;
    return auVar23;
  }
  uVar9 = func_0x00f78af4();
  puStack_a8 = &Atlas_UI_Screens_GameInProgressScreen__OnLateUpdate;
  uStack_b8 = uVar7;
  ppppuStack_b0 = &pppuStack_80;
  if ((bRam0000000003eb5228 & 1) == 0) {
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb5228 = 1;
  }
  if ((bRam0000000003eb522e & 1) == 0) {
    func_0x00f78a20(0x3d3b9d0);
    func_0x00f78a20(0x3d3b898);
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb522e = 1;
  }
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar9,uRam0000000003d41088);
  if (((lVar8 != 0) && (*(long *)(lVar8 + 0x38) != 0)) &&
     (lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 200), lVar8 != 0)) {
    iVar4 = *(int *)(lVar8 + 0x18);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar9,uRam0000000003d41088);
    if (((lVar8 != 0) && (*(long *)(lVar8 + 0x38) != 0)) &&
       (lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0xd0), lVar8 != 0)) {
      iVar17 = *(int *)(lVar8 + 0x18);
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar9,uRam0000000003d41080);
      if (lVar8 != 0) {
        /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetWeaponIndicatorActive*/ func_0x015adeac(lVar8,0 < iVar17 + iVar4,0);
        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar9,uRam0000000003d41080);
        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar9,uRam0000000003d41088);
        if (((lVar6 != 0) && (*(long *)(lVar6 + 0x38) != 0)) &&
           (uStack_118 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + 200), lVar8 != 0)) {
          /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetCulturePodWeaponIndicatorArrows*/ func_0x015adf10(lVar8,&uStack_118,0);
          lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar9,uRam0000000003d41080);
          lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar9,uRam0000000003d41088);
          if (((lVar6 != 0) && (*(long *)(lVar6 + 0x38) != 0)) &&
             (uStack_120 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + 0xd0), lVar8 != 0)) {
            auVar29 = /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetSheldonWeaponIndicatorArrows*/ func_0x015ae03c(lVar8,&uStack_120,0);
            return auVar29;
          }
        }
      }
    }
  }
  lVar8 = func_0x00f78af4();
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
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  lStack_1d0 = 0;
  fStack_1e8 = 0.0;
  uStack_1f0 = 0;
  fStack_1f8 = 0.0;
  uStack_200 = 0;
  fStack_208 = 0.0;
  uStack_218 = 0;
  uStack_210 = 0;
  uStack_220 = 0;
  iStack_224 = 0;
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x1c0) == 0)) ||
     (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar6 + 0x1c0),0), lVar6 == 0)) goto code_r0x015ab4c4;
  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar6,*(char *)(lVar8 + 0x109) == '\0',0);
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x1c0) == 0)) ||
     (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar6 + 0x1c0),0), lVar6 == 0)) goto code_r0x015ab4c4;
  iVar4 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar6,0);
  uVar7 = extraout_d0_01;
  uVar9 = extraout_var_01;
  if (iVar4 == 0) {
code_r0x015ab494:
    auVar24._8_8_ = uVar9;
    auVar24._0_8_ = uVar7;
    return auVar24;
  }
  *(undefined1 *)(lVar8 + 0x9c) = 0;
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar8,uRam0000000003d41090);
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x40) == 0)) goto code_r0x015ab4c4;
  lVar6 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(lVar6 + 0x40),0);
  if (*(long *)(lVar8 + 0x78) == 0) {
code_r0x015aaa34:
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar8,uRam0000000003d41088);
    if ((lVar12 == 0) || (*(long *)(lVar12 + 0x38) == 0)) goto code_r0x015ab4c4;
    if (*(int *)(*(long *)(lVar12 + 0x38) + 0x74) == 1) {
      *(undefined8 *)(lVar8 + 0x78) = *(undefined8 *)(lVar8 + 0x80);
    }
  }
  else {
    lVar12 = *(long *)(*(long *)(lVar8 + 0x78) + 0x10);
    if (lVar12 == 0) goto code_r0x015ab4c4;
    if (*(int *)(lVar12 + 0x74) != 1) goto code_r0x015aaa34;
  }
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (lVar12 == 0) {
code_r0x015ab4c4:
    func_0x00f78af4();
code_r0x015ab4c8:
    uVar7 = func_0x00f78b24();
    func_0x00f78ac0(uVar7,0);
    __Unwind_Resume();
code_r0x015ab4d8:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x15ab4dc);
    (*pcVar1)();
  }
  iVar17 = 0;
  iVar4 = 0;
  iStack_254 = 0;
  uVar16 = 0;
  uVar7 = extraout_d0_02;
  uVar9 = extraout_var_02;
code_r0x015aaa94:
  if (*(long *)(lVar12 + 0x1c8) == 0) goto code_r0x015ab4c4;
  if ((*(int *)(*(long *)(lVar12 + 0x1c8) + 0x18) <= (int)uVar16) ||
     (*(int *)(lVar8 + 0xbc) <= iStack_254)) goto code_r0x015ab494;
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x015ab4c8;
  lVar13 = (long)(int)uVar16;
  lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x20);
  if (lVar12 == 0) goto code_r0x015ab4c4;
  if (*(long *)(lVar12 + 0x80) == 0) {
    bVar3 = false;
  }
  else {
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x015ab4c8;
    lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x20);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x80), lVar12 == 0)) goto code_r0x015ab4c4;
    bVar3 = *(int *)(lVar12 + 0x74) == 1;
  }
  lVar12 = *(long *)(lVar8 + 0x78);
  if ((bool)(bVar3 & lVar12 == 0)) {
    if (*(long *)(lVar8 + 0x70) == 0) goto code_r0x015ab4c4;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_250,*(long *)(lVar8 + 0x70),uRam0000000003d3d1c8);
    uStack_1d8 = uStack_248;
    uStack_1e0 = uStack_250;
    lStack_1d0 = lStack_240;
    do {
      uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_1e0,uRam0000000003d33458);
      lVar12 = lStack_1d0;
      if ((uVar10 & 1) == 0) goto code_r0x015aabdc;
      if (lStack_1d0 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar15 = *(long *)(lStack_1d0 + 0x10);
      lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if (lVar11 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar11 = *(long *)(lVar11 + 0x1c8);
      if (lVar11 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar16) {
        uVar7 = func_0x00f78b24();
        func_0x00f78ac0(uVar7,0);
        goto code_r0x015ab4d8;
      }
      lVar11 = *(long *)(lVar11 + lVar13 * 8 + 0x20);
      if (lVar11 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
    } while (lVar15 != *(long *)(lVar11 + 0x80));
    *(long *)(lVar8 + 0x78) = lVar12;
code_r0x015aabdc:
    aiStack_238[iVar4] = 0x132;
    iVar17 = iStack_224;
    iVar4 = iStack_224 + 1;
    iStack_224 = iVar4;
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_1e0,uRam0000000003d33450);
    if ((iVar4 != 0) && (aiStack_238[iVar17] == 0x132)) {
      iStack_224 = iVar17;
      iVar4 = iVar17;
    }
    lVar12 = *(long *)(lVar8 + 0x78);
    iVar17 = iVar4;
  }
  if (lVar12 == 0) {
code_r0x015aac8c:
    uVar7 = 0;
    cVar14 = '\0';
  }
  else {
    lVar11 = *(long *)(lVar12 + 0x10);
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x015ab4c8;
    lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x20);
    if (lVar12 == 0) goto code_r0x015ab4c4;
    if (!(bool)(bVar3 & lVar11 == *(long *)(lVar12 + 0x80))) goto code_r0x015aac8c;
    cVar14 = *(char *)(lVar8 + 0xb8);
    uVar7 = 1;
  }
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x015ab4c8;
  lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x20);
  if (lVar12 == 0) goto code_r0x015ab4c4;
  fVar26 = param_2;
  fVar28 = param_3;
  if (*(long *)(lVar12 + 0x80) != 0) {
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x015ab4c8;
    lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x20);
    if (lVar12 == 0) goto code_r0x015ab4c4;
    iVar5 = /*Atlas.UI.KartIndicatorBehaviour$$get_CanUpdateTarget*/ func_0x015cc628(lVar12,0);
    if ((iVar5 != 0) && (fVar26 = param_2, fVar28 = param_3, *(char *)(lVar8 + 0xb8) == '\0'))
    goto code_r0x015aaf94;
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x015ab4c8;
    lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x20);
    if ((((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x80), lVar12 == 0)) ||
        (lVar12 = *(long *)(lVar12 + 0x10), lVar12 == 0)) ||
       (lVar12 = *(long *)(lVar12 + 0x18), lVar12 == 0)) goto code_r0x015ab4c4;
    fVar18 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar12,0);
    uStack_1f0 = CONCAT44(param_2,fVar18);
    fVar26 = param_2;
    fVar28 = param_3;
    fStack_1e8 = param_3;
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar8,uRam0000000003d41088);
    if (((lVar12 == 0) || (*(long *)(lVar12 + 0x38) == 0)) ||
       ((lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10), lVar12 == 0 ||
        (lVar12 = *(long *)(lVar12 + 0x18), lVar12 == 0)))) goto code_r0x015ab4c4;
    fVar19 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar12,0);
    uStack_200 = CONCAT44(fVar26,fVar19);
    fVar27 = param_3 - fVar28;
    uStack_210 = CONCAT44(param_2 - fVar26,fVar18 - fVar19);
    fStack_208 = fVar27;
    fStack_1f8 = fVar28;
    if (cVar14 != '\0') {
      if (lVar6 == 0) goto code_r0x015ab4c4;
code_r0x015aadd4:
      param_3 = param_3 + *(float *)(lVar8 + 0xa8);
      param_4 = *(float *)(lVar8 + 0xa0);
      param_2 = param_2 + *(float *)(lVar8 + 0xa4);
      fVar18 = (float)/*UnityEngine.Camera$$WorldToViewportPoint*/ func_0x0321fe94(fVar18 + param_4,lVar6,0);
      fVar26 = param_2;
      fVar28 = param_3;
      if (cVar14 == '\0') {
        bVar3 = false;
        bVar2 = true;
        if (0.0 <= fVar18) {
          bVar3 = false;
          bVar2 = true;
          if (!NAN(fVar18)) {
            bVar3 = fVar18 == 1.0;
            bVar2 = 1.0 <= fVar18;
          }
        }
        if (!bVar2 || bVar3) {
          bVar3 = false;
          bVar2 = true;
          if (0.0 <= param_2) {
            bVar3 = false;
            bVar2 = true;
            if (!NAN(param_2)) {
              bVar3 = param_2 == 1.0;
              bVar2 = 1.0 <= param_2;
            }
          }
          if (((!bVar2 || bVar3) && (0.0 <= param_3)) &&
             (iVar5 = /*Atlas.UI.Screens.GameInProgressScreen$$CanSeeTarget*/ func_0x015ab70c(lVar8,&uStack_200,&uStack_1f0,1,1), iVar5 != 0))
          goto code_r0x015aae04;
        }
        goto code_r0x015aaf94;
      }
code_r0x015aae04:
      lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x015ab4c8;
      lVar11 = *(long *)(lVar12 + lVar13 * 8 + 0x20);
      lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if ((lVar12 == 0) || (*(long *)(lVar12 + 0x1c0) == 0)) goto code_r0x015ab4c4;
      uVar20 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar12 + 0x1c0),0);
      uStack_220 = CONCAT44(fVar26,uVar20);
      uStack_218 = CONCAT44(param_4,fVar28);
      param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_220,0);
      if (lVar11 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(fVar18,lVar11,0);
      lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x015ab4c8;
      lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x20);
      if (lVar12 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar12,uVar7,*(undefined1 *)(lVar8 + 0xb8),0);
      if (*(char *)(lVar8 + 0xb8) != '\0') {
        lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
        if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0))
        goto code_r0x015ab4c4;
        if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x015ab4c8;
        lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x20);
        if (lVar12 == 0) goto code_r0x015ab4c4;
        *(undefined4 *)(lVar12 + 0x88) = *(undefined4 *)(lVar8 + 0x98);
      }
      iStack_254 = iStack_254 + 1;
      goto code_r0x015ab2c0;
    }
    fVar19 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_210,0);
    fVar26 = *(float *)(lVar8 + 0x8c);
    fVar28 = fVar27;
    if (fVar26 <= fVar19) goto code_r0x015aaf94;
    fVar19 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_210,0);
    if ((lVar6 == 0) ||
       (fVar25 = fVar26, fVar28 = fVar27, lVar12 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar6,0), lVar12 == 0))
    goto code_r0x015ab4c4;
    fVar21 = (float)/*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar12,0);
    fVar25 = fVar26 * fVar25;
    fVar26 = *(float *)(lVar8 + 0x94);
    if (fVar26 < fVar27 * fVar28 + fVar19 * fVar21 + fVar25) goto code_r0x015aadd4;
  }
code_r0x015aaf94:
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x015ab4c8;
  lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x20);
  if (lVar12 == 0) goto code_r0x015ab4c4;
  param_3 = fVar28;
  if (*(long *)(lVar12 + 0x80) != 0) {
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x015ab4c8;
    lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x20);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x80), lVar12 == 0)) goto code_r0x015ab4c4;
    *(undefined1 *)(lVar12 + 0x9c) = 0;
    param_3 = fVar28;
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
    cVar14 = *(char *)(lVar8 + 0xb8);
  }
  else {
    cVar14 = '\0';
  }
  if (*(long *)(lVar8 + 0x70) == 0) goto code_r0x015ab4c4;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_250,*(long *)(lVar8 + 0x70),uRam0000000003d3d1c8);
  uStack_1d8 = uStack_248;
  uStack_1e0 = uStack_250;
  lStack_1d0 = lStack_240;
  do {
    do {
      uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_1e0,uRam0000000003d33458);
      lVar12 = lStack_1d0;
      param_2 = fVar26;
      if ((uVar10 & 1) == 0) {
code_r0x015ab1e8:
        bVar3 = false;
        goto code_r0x015ab1ec;
      }
      if (lStack_1d0 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      fVar26 = *(float *)(lVar8 + 0x8c);
      if ((fVar26 < *(float *)(lStack_1d0 + 0x18)) &&
         (param_2 = fVar26, lStack_1d0 != *(long *)(lVar8 + 0x78))) goto code_r0x015ab1e8;
    } while (*(char *)(lStack_1d0 + 0x28) == '\0');
    lVar11 = *(long *)(lStack_1d0 + 0x10);
    if (lVar11 == 0) {
      func_0x00f78af4();
      goto code_r0x015ab4d8;
    }
  } while (*(char *)(lVar11 + 0x9c) != '\0');
  *(undefined1 *)(lVar11 + 0x9c) = 1;
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar11 = *(long *)(lVar11 + 0x1c8);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar11 + 0x18) <= uVar16) {
    uVar7 = func_0x00f78b24();
    func_0x00f78ac0(uVar7,0);
    goto code_r0x015ab4d8;
  }
  lVar11 = *(long *)(lVar11 + lVar13 * 8 + 0x20);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(*(undefined4 *)(lVar8 + 0x98),lVar11,*(undefined8 *)(lVar12 + 0x10),cVar14 != '\0'
                  ,0);
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar11 = *(long *)(lVar11 + 0x1c8);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar11 + 0x18) <= uVar16) {
    uVar7 = func_0x00f78b24();
    func_0x00f78ac0(uVar7,0);
    goto code_r0x015ab4d8;
  }
  lVar11 = *(long *)(lVar11 + lVar13 * 8 + 0x20);
  uVar20 = *(undefined4 *)(lVar12 + 0x1c);
  param_2 = *(float *)(lVar12 + 0x20);
  fVar28 = *(float *)(lVar12 + 0x24);
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (lVar12 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(long *)(lVar12 + 0x1c0) == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  uVar22 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar12 + 0x1c0),0);
  uStack_220 = CONCAT44(fVar26,uVar22);
  uStack_218 = CONCAT44(param_4,param_3);
  param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_220,0);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(uVar20,lVar11,0);
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  if (lVar12 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar12 = *(long *)(lVar12 + 0x1c8);
  if (lVar12 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar12 + 0x18) <= uVar16) {
    uVar7 = func_0x00f78b24();
    func_0x00f78ac0(uVar7,0);
    goto code_r0x015ab4d8;
  }
  lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x20);
  if (lVar12 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar12,uVar7,*(undefined1 *)(lVar8 + 0xb8),0);
  iStack_254 = iStack_254 + 1;
  bVar3 = true;
  param_3 = fVar28;
code_r0x015ab1ec:
  aiStack_238[iVar17] = 0x41c;
  iVar4 = iStack_224;
  iVar17 = iStack_224 + 1;
  iStack_224 = iVar17;
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_1e0,uRam0000000003d33450);
  if ((iVar17 != 0) && (aiStack_238[iVar4] == 0x41c)) {
    iStack_224 = iVar4;
    iVar17 = iVar4;
  }
  iVar4 = iVar17;
  if (!bVar3) {
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x015ab4c8;
    lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x20);
    if (lVar12 == 0) goto code_r0x015ab4c4;
    if (*(long *)(lVar12 + 0x80) != 0) {
      lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
      if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x015ab4c8;
      lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x20);
      if (lVar12 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(0,lVar12,0,cVar14 != '\0',0);
    }
  }
code_r0x015ab2c0:
  uVar16 = uVar16 + 1;
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41080);
  uVar7 = extraout_d0_03;
  uVar9 = extraout_var_03;
  if (lVar12 == 0) goto code_r0x015ab4c4;
  goto code_r0x015aaa94;
}



// ============================================================
// RVA: 0x153a6e0 | Atlas.Contexts.BattleGameContext.SetupGameContextScreen
// ============================================================

/* WARNING: Possible PIC construction at 0x0153a714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015aa69c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ae374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0153a718) */
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

void Atlas_Contexts_BattleGameContext__SetupGameContextScreen
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
               long param_6,long param_7)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  char cVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
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
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  *(long *)(param_5 + 0x48) = param_6;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((param_7 == 0) || (*(undefined4 *)(param_7 + 0x290) = 1, param_6 == 0)) {
    lVar6 = func_0x00f78af4();
    puStack_28 = &Atlas_Contexts_BattleGameContext__OnHostMigrationSynced;
    if ((bRam0000000003eb4f05 & 1) == 0) {
      func_0x00f78a20(0x3d237b8);
      bRam0000000003eb4f05 = 1;
    }
    if (*(char *)(lVar6 + 0x274) != '\0') {
      puStack_68 = *(undefined **)(lVar6 + 0x278);
      ppuStack_70 = *(undefined1 ***)(lVar6 + 0x270);
      uVar7 = *(undefined8 *)(lVar6 + 0x280);
      if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lStack_88 = (long)puStack_68;
      ppuStack_90 = ppuStack_70;
      uStack_80 = uVar7;
      /*Core.Networking.NetworkSessionTime$$op_Addition*/ func_0x0165f11c(&uStack_a8,&ppuStack_90,param_7,0);
      *(undefined1 ****)(lVar6 + 0x278) = pppuStack_a0;
      *(undefined8 *)(lVar6 + 0x270) = uStack_a8;
      *(undefined **)(lVar6 + 0x280) = puStack_98;
    }
    return;
  }
  puStack_28 = (undefined *)0x153a718;
  if ((bRam0000000003eb522b & 1) == 0) {
    func_0x00f78a20(0x3d41080,8,1,0);
    bRam0000000003eb522b = 1;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_6,uRam0000000003d41080);
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x015ac724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_015ac728 + (ulong)UNK_033f8a48 * 4))(lVar6,8,1,0);
    return;
  }
  uVar7 = func_0x00f78af4();
  ppuStack_90 = (undefined1 **)0x3eb5000;
  uStack_80 = 8;
  uStack_78 = 1;
  puStack_68 = &Atlas_UI_Screens_GameInProgressScreen__UpdateArcade;
  lStack_88 = param_6;
  ppuStack_70 = &puStack_30;
  if ((bRam0000000003eb5227 & 1) == 0) {
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb5227 = 1;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar7,uRam0000000003d41088);
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x30) != 0)) {
    return;
  }
  uVar8 = func_0x00f78af4();
  puStack_98 = &Atlas_UI_Screens_GameInProgressScreen__OnLateUpdate;
  uStack_a8 = uVar7;
  pppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eb5228 & 1) == 0) {
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb5228 = 1;
  }
  if ((bRam0000000003eb522e & 1) == 0) {
    func_0x00f78a20(0x3d3b9d0);
    func_0x00f78a20(0x3d3b898);
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb522e = 1;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar8,uRam0000000003d41088);
  if (((lVar6 != 0) && (*(long *)(lVar6 + 0x38) != 0)) &&
     (lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 200), lVar6 != 0)) {
    iVar4 = *(int *)(lVar6 + 0x18);
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar8,uRam0000000003d41088);
    if (((lVar6 != 0) && (*(long *)(lVar6 + 0x38) != 0)) &&
       (lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0xd0), lVar6 != 0)) {
      iVar17 = *(int *)(lVar6 + 0x18);
      lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar8,uRam0000000003d41080);
      if (lVar6 != 0) {
        /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetWeaponIndicatorActive*/ func_0x015adeac(lVar6,0 < iVar17 + iVar4,0);
        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar8,uRam0000000003d41080);
        lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar8,uRam0000000003d41088);
        if (((lVar9 != 0) && (*(long *)(lVar9 + 0x38) != 0)) &&
           (uStack_108 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + 200), lVar6 != 0)) {
          /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetCulturePodWeaponIndicatorArrows*/ func_0x015adf10(lVar6,&uStack_108,0);
          lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar8,uRam0000000003d41080);
          lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar8,uRam0000000003d41088);
          if (((lVar9 != 0) && (*(long *)(lVar9 + 0x38) != 0)) &&
             (uStack_110 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + 0xd0), lVar6 != 0)) {
            /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$SetSheldonWeaponIndicatorArrows*/ func_0x015ae03c(lVar6,&uStack_110,0);
            return;
          }
        }
      }
    }
  }
  lVar6 = func_0x00f78af4();
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
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (((lVar9 == 0) || (*(long *)(lVar9 + 0x1c0) == 0)) ||
     (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar9 + 0x1c0),0), lVar9 == 0)) goto code_r0x015ab4c4;
  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar9,*(char *)(lVar6 + 0x109) == '\0',0);
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (((lVar9 == 0) || (*(long *)(lVar9 + 0x1c0) == 0)) ||
     (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar9 + 0x1c0),0), lVar9 == 0)) goto code_r0x015ab4c4;
  iVar4 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar9,0);
  if (iVar4 == 0) {
    return;
  }
  *(undefined1 *)(lVar6 + 0x9c) = 0;
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar6,uRam0000000003d41090);
  if ((lVar9 == 0) || (*(long *)(lVar9 + 0x40) == 0)) goto code_r0x015ab4c4;
  lVar9 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(lVar9 + 0x40),0);
  if (*(long *)(lVar6 + 0x78) == 0) {
code_r0x015aaa34:
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar6,uRam0000000003d41088);
    if ((lVar12 == 0) || (*(long *)(lVar12 + 0x38) == 0)) goto code_r0x015ab4c4;
    if (*(int *)(*(long *)(lVar12 + 0x38) + 0x74) == 1) {
      *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(lVar6 + 0x80);
    }
  }
  else {
    lVar12 = *(long *)(*(long *)(lVar6 + 0x78) + 0x10);
    if (lVar12 == 0) goto code_r0x015ab4c4;
    if (*(int *)(lVar12 + 0x74) != 1) goto code_r0x015aaa34;
  }
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (lVar12 == 0) {
code_r0x015ab4c4:
    func_0x00f78af4();
code_r0x015ab4c8:
    uVar7 = func_0x00f78b24();
    func_0x00f78ac0(uVar7,0);
    __Unwind_Resume();
code_r0x015ab4d8:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x15ab4dc);
    (*pcVar1)();
  }
  iVar17 = 0;
  iVar4 = 0;
  iStack_244 = 0;
  uVar16 = 0;
code_r0x015aaa94:
  if (*(long *)(lVar12 + 0x1c8) == 0) goto code_r0x015ab4c4;
  if (*(int *)(*(long *)(lVar12 + 0x1c8) + 0x18) <= (int)uVar16) {
    return;
  }
  if (*(int *)(lVar6 + 0xbc) <= iStack_244) {
    return;
  }
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x015ab4c8;
  lVar13 = (long)(int)uVar16;
  lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x20);
  if (lVar12 == 0) goto code_r0x015ab4c4;
  if (*(long *)(lVar12 + 0x80) == 0) {
    bVar3 = false;
  }
  else {
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x015ab4c8;
    lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x20);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x80), lVar12 == 0)) goto code_r0x015ab4c4;
    bVar3 = *(int *)(lVar12 + 0x74) == 1;
  }
  lVar12 = *(long *)(lVar6 + 0x78);
  if ((bool)(bVar3 & lVar12 == 0)) {
    if (*(long *)(lVar6 + 0x70) == 0) goto code_r0x015ab4c4;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_240,*(long *)(lVar6 + 0x70),uRam0000000003d3d1c8);
    uStack_1c8 = uStack_238;
    uStack_1d0 = uStack_240;
    lStack_1c0 = lStack_230;
    do {
      uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_1d0,uRam0000000003d33458);
      lVar12 = lStack_1c0;
      if ((uVar10 & 1) == 0) goto code_r0x015aabdc;
      if (lStack_1c0 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar15 = *(long *)(lStack_1c0 + 0x10);
      lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
      if (lVar11 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      lVar11 = *(long *)(lVar11 + 0x1c8);
      if (lVar11 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar16) {
        uVar7 = func_0x00f78b24();
        func_0x00f78ac0(uVar7,0);
        goto code_r0x015ab4d8;
      }
      lVar11 = *(long *)(lVar11 + lVar13 * 8 + 0x20);
      if (lVar11 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
    } while (lVar15 != *(long *)(lVar11 + 0x80));
    *(long *)(lVar6 + 0x78) = lVar12;
code_r0x015aabdc:
    aiStack_228[iVar4] = 0x132;
    iVar17 = iStack_214;
    iVar4 = iStack_214 + 1;
    iStack_214 = iVar4;
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_1d0,uRam0000000003d33450);
    if ((iVar4 != 0) && (aiStack_228[iVar17] == 0x132)) {
      iStack_214 = iVar17;
      iVar4 = iVar17;
    }
    lVar12 = *(long *)(lVar6 + 0x78);
    iVar17 = iVar4;
  }
  if (lVar12 == 0) {
code_r0x015aac8c:
    uVar7 = 0;
    cVar14 = '\0';
  }
  else {
    lVar11 = *(long *)(lVar12 + 0x10);
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x015ab4c8;
    lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x20);
    if (lVar12 == 0) goto code_r0x015ab4c4;
    if (!(bool)(bVar3 & lVar11 == *(long *)(lVar12 + 0x80))) goto code_r0x015aac8c;
    cVar14 = *(char *)(lVar6 + 0xb8);
    uVar7 = 1;
  }
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x015ab4c8;
  lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x20);
  if (lVar12 == 0) goto code_r0x015ab4c4;
  fVar24 = param_2;
  fVar26 = param_3;
  if (*(long *)(lVar12 + 0x80) != 0) {
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x015ab4c8;
    lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x20);
    if (lVar12 == 0) goto code_r0x015ab4c4;
    iVar5 = /*Atlas.UI.KartIndicatorBehaviour$$get_CanUpdateTarget*/ func_0x015cc628(lVar12,0);
    if ((iVar5 != 0) && (fVar24 = param_2, fVar26 = param_3, *(char *)(lVar6 + 0xb8) == '\0'))
    goto code_r0x015aaf94;
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x015ab4c8;
    lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x20);
    if ((((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x80), lVar12 == 0)) ||
        (lVar12 = *(long *)(lVar12 + 0x10), lVar12 == 0)) ||
       (lVar12 = *(long *)(lVar12 + 0x18), lVar12 == 0)) goto code_r0x015ab4c4;
    fVar18 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar12,0);
    uStack_1e0 = CONCAT44(param_2,fVar18);
    fVar24 = param_2;
    fVar26 = param_3;
    fStack_1d8 = param_3;
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar6,uRam0000000003d41088);
    if (((lVar12 == 0) || (*(long *)(lVar12 + 0x38) == 0)) ||
       ((lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10), lVar12 == 0 ||
        (lVar12 = *(long *)(lVar12 + 0x18), lVar12 == 0)))) goto code_r0x015ab4c4;
    fVar19 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(lVar12,0);
    uStack_1f0 = CONCAT44(fVar24,fVar19);
    fVar25 = param_3 - fVar26;
    uStack_200 = CONCAT44(param_2 - fVar24,fVar18 - fVar19);
    fStack_1f8 = fVar25;
    fStack_1e8 = fVar26;
    if (cVar14 != '\0') {
      if (lVar9 == 0) goto code_r0x015ab4c4;
code_r0x015aadd4:
      param_3 = param_3 + *(float *)(lVar6 + 0xa8);
      param_4 = *(float *)(lVar6 + 0xa0);
      param_2 = param_2 + *(float *)(lVar6 + 0xa4);
      fVar18 = (float)/*UnityEngine.Camera$$WorldToViewportPoint*/ func_0x0321fe94(fVar18 + param_4,lVar9,0);
      fVar24 = param_2;
      fVar26 = param_3;
      if (cVar14 == '\0') {
        bVar3 = false;
        bVar2 = true;
        if (0.0 <= fVar18) {
          bVar3 = false;
          bVar2 = true;
          if (!NAN(fVar18)) {
            bVar3 = fVar18 == 1.0;
            bVar2 = 1.0 <= fVar18;
          }
        }
        if (!bVar2 || bVar3) {
          bVar3 = false;
          bVar2 = true;
          if (0.0 <= param_2) {
            bVar3 = false;
            bVar2 = true;
            if (!NAN(param_2)) {
              bVar3 = param_2 == 1.0;
              bVar2 = 1.0 <= param_2;
            }
          }
          if (((!bVar2 || bVar3) && (0.0 <= param_3)) &&
             (iVar5 = /*Atlas.UI.Screens.GameInProgressScreen$$CanSeeTarget*/ func_0x015ab70c(lVar6,&uStack_1f0,&uStack_1e0,1,1), iVar5 != 0))
          goto code_r0x015aae04;
        }
        goto code_r0x015aaf94;
      }
code_r0x015aae04:
      lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
      if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x015ab4c8;
      lVar11 = *(long *)(lVar12 + lVar13 * 8 + 0x20);
      lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
      if ((lVar12 == 0) || (*(long *)(lVar12 + 0x1c0) == 0)) goto code_r0x015ab4c4;
      uVar20 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar12 + 0x1c0),0);
      uStack_210 = CONCAT44(fVar24,uVar20);
      uStack_208 = CONCAT44(param_4,fVar26);
      param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_210,0);
      if (lVar11 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(fVar18,lVar11,0);
      lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
      if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x015ab4c8;
      lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x20);
      if (lVar12 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar12,uVar7,*(undefined1 *)(lVar6 + 0xb8),0);
      if (*(char *)(lVar6 + 0xb8) != '\0') {
        lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
        if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0))
        goto code_r0x015ab4c4;
        if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x015ab4c8;
        lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x20);
        if (lVar12 == 0) goto code_r0x015ab4c4;
        *(undefined4 *)(lVar12 + 0x88) = *(undefined4 *)(lVar6 + 0x98);
      }
      iStack_244 = iStack_244 + 1;
      goto code_r0x015ab2c0;
    }
    fVar19 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_200,0);
    fVar24 = *(float *)(lVar6 + 0x8c);
    fVar26 = fVar25;
    if (fVar19 < fVar24) {
      fVar19 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_200,0);
      if ((lVar9 != 0) &&
         (fVar23 = fVar24, fVar26 = fVar25, lVar12 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar9,0), lVar12 != 0)) {
        fVar21 = (float)/*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar12,0);
        fVar23 = fVar24 * fVar23;
        fVar24 = *(float *)(lVar6 + 0x94);
        if (fVar24 < fVar25 * fVar26 + fVar19 * fVar21 + fVar23) goto code_r0x015aadd4;
        goto code_r0x015aaf94;
      }
      goto code_r0x015ab4c4;
    }
  }
code_r0x015aaf94:
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
  if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x015ab4c8;
  lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x20);
  if (lVar12 == 0) goto code_r0x015ab4c4;
  param_3 = fVar26;
  if (*(long *)(lVar12 + 0x80) != 0) {
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x015ab4c8;
    lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x20);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x80), lVar12 == 0)) goto code_r0x015ab4c4;
    *(undefined1 *)(lVar12 + 0x9c) = 0;
    param_3 = fVar26;
  }
  if (*(char *)(lVar6 + 0x9c) == '\0') {
    if (*(char *)(lVar6 + 0xb8) == '\0') {
      /*Atlas.UI.Screens.GameInProgressScreen$$UpdateAllKartIndicatorDataRace*/ func_0x015abdd0(lVar6);
    }
    else {
      /*Atlas.UI.Screens.GameInProgressScreen$$UpdateAllKartIndicatorDataBattle*/ func_0x015ab8c0(lVar6);
    }
  }
  if (*(char *)(lVar6 + 0x10a) == '\0') {
    cVar14 = *(char *)(lVar6 + 0xb8);
  }
  else {
    cVar14 = '\0';
  }
  if (*(long *)(lVar6 + 0x70) == 0) goto code_r0x015ab4c4;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_240,*(long *)(lVar6 + 0x70),uRam0000000003d3d1c8);
  uStack_1c8 = uStack_238;
  uStack_1d0 = uStack_240;
  lStack_1c0 = lStack_230;
  do {
    do {
      uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_1d0,uRam0000000003d33458);
      lVar12 = lStack_1c0;
      param_2 = fVar24;
      if ((uVar10 & 1) == 0) {
code_r0x015ab1e8:
        bVar3 = false;
        goto code_r0x015ab1ec;
      }
      if (lStack_1c0 == 0) {
        func_0x00f78af4();
        goto code_r0x015ab4d8;
      }
      fVar24 = *(float *)(lVar6 + 0x8c);
      if ((fVar24 < *(float *)(lStack_1c0 + 0x18)) &&
         (param_2 = fVar24, lStack_1c0 != *(long *)(lVar6 + 0x78))) goto code_r0x015ab1e8;
    } while (*(char *)(lStack_1c0 + 0x28) == '\0');
    lVar11 = *(long *)(lStack_1c0 + 0x10);
    if (lVar11 == 0) {
      func_0x00f78af4();
      goto code_r0x015ab4d8;
    }
  } while (*(char *)(lVar11 + 0x9c) != '\0');
  *(undefined1 *)(lVar11 + 0x9c) = 1;
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar11 = *(long *)(lVar11 + 0x1c8);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar11 + 0x18) <= uVar16) {
    uVar7 = func_0x00f78b24();
    func_0x00f78ac0(uVar7,0);
    goto code_r0x015ab4d8;
  }
  lVar11 = *(long *)(lVar11 + lVar13 * 8 + 0x20);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(*(undefined4 *)(lVar6 + 0x98),lVar11,*(undefined8 *)(lVar12 + 0x10),cVar14 != '\0'
                  ,0);
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar11 = *(long *)(lVar11 + 0x1c8);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar11 + 0x18) <= uVar16) {
    uVar7 = func_0x00f78b24();
    func_0x00f78ac0(uVar7,0);
    goto code_r0x015ab4d8;
  }
  lVar11 = *(long *)(lVar11 + lVar13 * 8 + 0x20);
  uVar20 = *(undefined4 *)(lVar12 + 0x1c);
  param_2 = *(float *)(lVar12 + 0x20);
  fVar26 = *(float *)(lVar12 + 0x24);
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (lVar12 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(long *)(lVar12 + 0x1c0) == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  uVar22 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar12 + 0x1c0),0);
  uStack_210 = CONCAT44(fVar24,uVar22);
  uStack_208 = CONCAT44(param_4,param_3);
  param_4 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_210,0);
  if (lVar11 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetScreenPos*/ func_0x015ccab8(uVar20,lVar11,0);
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (lVar12 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  lVar12 = *(long *)(lVar12 + 0x1c8);
  if (lVar12 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  if (*(uint *)(lVar12 + 0x18) <= uVar16) {
    uVar7 = func_0x00f78b24();
    func_0x00f78ac0(uVar7,0);
    goto code_r0x015ab4d8;
  }
  lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x20);
  if (lVar12 == 0) {
    func_0x00f78af4();
    goto code_r0x015ab4d8;
  }
  /*Atlas.UI.KartIndicatorBehaviour$$SetCrownIconVisible*/ func_0x015ccc60(lVar12,uVar7,*(undefined1 *)(lVar6 + 0xb8),0);
  iStack_244 = iStack_244 + 1;
  bVar3 = true;
  param_3 = fVar26;
code_r0x015ab1ec:
  aiStack_228[iVar17] = 0x41c;
  iVar4 = iStack_214;
  iVar17 = iStack_214 + 1;
  iStack_214 = iVar17;
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_1d0,uRam0000000003d33450);
  if ((iVar17 != 0) && (aiStack_228[iVar4] == 0x41c)) {
    iStack_214 = iVar4;
    iVar17 = iVar4;
  }
  iVar4 = iVar17;
  if (!bVar3) {
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
    if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x015ab4c8;
    lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x20);
    if (lVar12 == 0) goto code_r0x015ab4c4;
    if (*(long *)(lVar12 + 0x80) != 0) {
      lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
      if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x1c8), lVar12 == 0)) goto code_r0x015ab4c4;
      if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x015ab4c8;
      lVar12 = *(long *)(lVar12 + lVar13 * 8 + 0x20);
      if (lVar12 == 0) goto code_r0x015ab4c4;
      /*Atlas.UI.KartIndicatorBehaviour$$SetTarget*/ func_0x015cc940(0,lVar12,0,cVar14 != '\0',0);
    }
  }
code_r0x015ab2c0:
  uVar16 = uVar16 + 1;
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41080);
  if (lVar12 == 0) goto code_r0x015ab4c4;
  goto code_r0x015aaa94;
}



// ============================================================
// RVA: 0x153a738 | Atlas.Contexts.BattleGameContext.OnHostMigrationSynced
// ============================================================

void Atlas_Contexts_BattleGameContext__OnHostMigrationSynced
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000003eb4f05 & 1) == 0) {
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb4f05 = 1;
  }
  if (*(char *)(param_1 + 0x274) != '\0') {
    uStack_48 = *(undefined8 *)(param_1 + 0x278);
    uStack_50 = *(undefined8 *)(param_1 + 0x270);
    uStack_40 = *(undefined8 *)(param_1 + 0x280);
    if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_68 = uStack_48;
    uStack_70 = uStack_50;
    uStack_60 = uStack_40;
    /*Core.Networking.NetworkSessionTime$$op_Addition*/ func_0x0165f11c(&uStack_88,&uStack_70,param_3,0);
    *(undefined8 *)(param_1 + 0x278) = uStack_80;
    *(undefined8 *)(param_1 + 0x270) = uStack_88;
    *(undefined8 *)(param_1 + 0x280) = uStack_78;
  }
  return;
}



// ============================================================
// RVA: 0x153a7f8 | Atlas.Contexts.BattleGameContext..ctor
// ============================================================

void Atlas_Contexts_BattleGameContext___ctor(long param_1)

{
  if ((bRam0000000003eb4f06 & 1) == 0) {
    func_0x00f78a20(0x3d21b08);
    bRam0000000003eb4f06 = 1;
  }
  *(undefined1 *)(param_1 + 0x260) = 1;
  if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined1 *)(param_1 + 0x249) = 1;
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



// ============================================================
// RVA: 0x153a86c | Atlas.Contexts.BattleGameContext.<>n__0
// ============================================================

long Atlas_Contexts_BattleGameContext____n__0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if ((bRam0000000003eb519d & 1) == 0) {
    func_0x00f78a20(0x3d276e0,param_2,param_3,0);
    bRam0000000003eb519d = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.Contexts.GameContextBase.<OnInit>d__125_TypeInfo*/ uRam0000000003d276e0);
  /*Atlas.Contexts.GameContextBase.<OnInit>d__125$$.ctor*/ func_0x01550b38(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    *(undefined8 *)(lVar1 + 0x28) = param_2;
    *(undefined8 *)(lVar1 + 0x30) = param_3;
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  return *(long *)(lVar1 + 0x198);
}



