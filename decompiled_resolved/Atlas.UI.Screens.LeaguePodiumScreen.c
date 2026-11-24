// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.LeaguePodiumScreen

// ============================================================
// RVA: 0x147f550 | Atlas.UI.Screens.LeaguePodiumScreen.OnBeforeEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x0147f5f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014486a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147ff64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147fff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bc20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bbf4) */
/* WARNING: Removing unreachable block (ram,0x0150bbfc) */
/* WARNING: Removing unreachable block (ram,0x0150bc14) */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x0147fff8) */
/* WARNING: Removing unreachable block (ram,0x0147fffc) */
/* WARNING: Removing unreachable block (ram,0x01480014) */
/* WARNING: Removing unreachable block (ram,0x0148001c) */
/* WARNING: Removing unreachable block (ram,0x0148002c) */
/* WARNING: Removing unreachable block (ram,0x01480044) */
/* WARNING: Removing unreachable block (ram,0x01480054) */
/* WARNING: Removing unreachable block (ram,0x0148005c) */
/* WARNING: Removing unreachable block (ram,0x0150b9fc) */
/* WARNING: Removing unreachable block (ram,0x0150ba14) */
/* WARNING: Removing unreachable block (ram,0x0150ba34) */
/* WARNING: Removing unreachable block (ram,0x0150ba20) */
/* WARNING: Removing unreachable block (ram,0x0150ba38) */
/* WARNING: Removing unreachable block (ram,0x0150ba50) */
/* WARNING: Removing unreachable block (ram,0x0150ba58) */
/* WARNING: Removing unreachable block (ram,0x0150ba78) */
/* WARNING: Removing unreachable block (ram,0x0150ba80) */
/* WARNING: Removing unreachable block (ram,0x0150ba70) */
/* WARNING: Removing unreachable block (ram,0x0150ba90) */
/* WARNING: Removing unreachable block (ram,0x0150ba98) */
/* WARNING: Removing unreachable block (ram,0x0150bab4) */
/* WARNING: Removing unreachable block (ram,0x0150bb24) */
/* WARNING: Removing unreachable block (ram,0x0150bb30) */
/* WARNING: Removing unreachable block (ram,0x0150bb4c) */
/* WARNING: Removing unreachable block (ram,0x0150bb44) */
/* WARNING: Removing unreachable block (ram,0x0150bb50) */
/* WARNING: Removing unreachable block (ram,0x0150bb74) */
/* WARNING: Removing unreachable block (ram,0x0150bb64) */
/* WARNING: Removing unreachable block (ram,0x0150bb78) */
/* WARNING: Removing unreachable block (ram,0x0150bb9c) */
/* WARNING: Removing unreachable block (ram,0x0150bb7c) */
/* WARNING: Removing unreachable block (ram,0x0150bba0) */
/* WARNING: Removing unreachable block (ram,0x0150bbc8) */
/* WARNING: Removing unreachable block (ram,0x0150bbe4) */
/* WARNING: Removing unreachable block (ram,0x0150bbbc) */
/* WARNING: Removing unreachable block (ram,0x0150bb88) */
/* WARNING: Removing unreachable block (ram,0x0150babc) */
/* WARNING: Removing unreachable block (ram,0x0150baa8) */
/* WARNING: Removing unreachable block (ram,0x0150bad0) */
/* WARNING: Removing unreachable block (ram,0x0150bad4) */
/* WARNING: Removing unreachable block (ram,0x0150bab0) */
/* WARNING: Removing unreachable block (ram,0x0150bae4) */
/* WARNING: Removing unreachable block (ram,0x0150bb14) */
/* WARNING: Removing unreachable block (ram,0x0150baf4) */
/* WARNING: Removing unreachable block (ram,0x0147ff68) */
/* WARNING: Removing unreachable block (ram,0x0147f5f4) */
/* WARNING: Removing unreachable block (ram,0x0147f604) */
/* WARNING: Removing unreachable block (ram,0x0147f638) */
/* WARNING: Removing unreachable block (ram,0x0147f65c) */
/* WARNING: Removing unreachable block (ram,0x0147f664) */
/* WARNING: Removing unreachable block (ram,0x0147f684) */
/* WARNING: Removing unreachable block (ram,0x0147f6a4) */
/* WARNING: Removing unreachable block (ram,0x0147f6dc) */
/* WARNING: Removing unreachable block (ram,0x0147f70c) */
/* WARNING: Removing unreachable block (ram,0x0147f720) */
/* WARNING: Removing unreachable block (ram,0x0147f728) */
/* WARNING: Removing unreachable block (ram,0x0147f730) */
/* WARNING: Removing unreachable block (ram,0x0147f744) */
/* WARNING: Removing unreachable block (ram,0x0147f74c) */
/* WARNING: Removing unreachable block (ram,0x0147f758) */
/* WARNING: Removing unreachable block (ram,0x0147f764) */
/* WARNING: Removing unreachable block (ram,0x0147f77c) */
/* WARNING: Removing unreachable block (ram,0x0147f790) */
/* WARNING: Removing unreachable block (ram,0x0147f7c4) */
/* WARNING: Removing unreachable block (ram,0x0147f7ec) */
/* WARNING: Removing unreachable block (ram,0x0147f800) */
/* WARNING: Removing unreachable block (ram,0x0147f808) */
/* WARNING: Removing unreachable block (ram,0x0147f81c) */
/* WARNING: Removing unreachable block (ram,0x0147f824) */
/* WARNING: Removing unreachable block (ram,0x0147f85c) */
/* WARNING: Removing unreachable block (ram,0x0147f860) */
/* WARNING: Removing unreachable block (ram,0x0147f830) */
/* WARNING: Removing unreachable block (ram,0x014484f0) */
/* WARNING: Removing unreachable block (ram,0x01448518) */
/* WARNING: Removing unreachable block (ram,0x01448538) */
/* WARNING: Removing unreachable block (ram,0x0144853c) */
/* WARNING: Removing unreachable block (ram,0x01448544) */
/* WARNING: Removing unreachable block (ram,0x0144854c) */
/* WARNING: Removing unreachable block (ram,0x014485a0) */
/* WARNING: Removing unreachable block (ram,0x014485c8) */
/* WARNING: Removing unreachable block (ram,0x014485d8) */
/* WARNING: Removing unreachable block (ram,0x01448618) */
/* WARNING: Removing unreachable block (ram,0x01448620) */
/* WARNING: Removing unreachable block (ram,0x01448600) */
/* WARNING: Removing unreachable block (ram,0x0144862c) */
/* WARNING: Removing unreachable block (ram,0x01448604) */
/* WARNING: Removing unreachable block (ram,0x0144860c) */
/* WARNING: Removing unreachable block (ram,0x01448630) */
/* WARNING: Removing unreachable block (ram,0x01448638) */
/* WARNING: Removing unreachable block (ram,0x01448654) */
/* WARNING: Removing unreachable block (ram,0x014486c4) */
/* WARNING: Removing unreachable block (ram,0x01448664) */
/* WARNING: Removing unreachable block (ram,0x014486c8) */
/* WARNING: Removing unreachable block (ram,0x014486dc) */
/* WARNING: Removing unreachable block (ram,0x014486e4) */
/* WARNING: Removing unreachable block (ram,0x014486ec) */
/* WARNING: Removing unreachable block (ram,0x014486f4) */
/* WARNING: Removing unreachable block (ram,0x014486fc) */
/* WARNING: Removing unreachable block (ram,0x01448704) */
/* WARNING: Removing unreachable block (ram,0x0144870c) */
/* WARNING: Removing unreachable block (ram,0x0144871c) */
/* WARNING: Removing unreachable block (ram,0x01448734) */
/* WARNING: Removing unreachable block (ram,0x01448724) */
/* WARNING: Removing unreachable block (ram,0x01448714) */
/* WARNING: Removing unreachable block (ram,0x01448670) */
/* WARNING: Removing unreachable block (ram,0x014486a4) */
/* WARNING: Removing unreachable block (ram,0x01448694) */
/* WARNING: Removing unreachable block (ram,0x01448558) */
/* WARNING: Removing unreachable block (ram,0x01448560) */
/* WARNING: Removing unreachable block (ram,0x01448590) */
/* WARNING: Removing unreachable block (ram,0x01448568) */
/* WARNING: Removing unreachable block (ram,0x014473ec) */
/* WARNING: Removing unreachable block (ram,0x0144741c) */
/* WARNING: Removing unreachable block (ram,0x0144743c) */
/* WARNING: Removing unreachable block (ram,0x01447448) */
/* WARNING: Removing unreachable block (ram,0x01447468) */
/* WARNING: Removing unreachable block (ram,0x0144746c) */
/* WARNING: Removing unreachable block (ram,0x01447470) */
/* WARNING: Removing unreachable block (ram,0x01447478) */
/* WARNING: Removing unreachable block (ram,0x014474c0) */
/* WARNING: Removing unreachable block (ram,0x01447498) */
/* WARNING: Removing unreachable block (ram,0x014474a8) */
/* WARNING: Removing unreachable block (ram,0x0150bc24) */
/* WARNING: Removing unreachable block (ram,0x0150bc44) */
/* WARNING: Removing unreachable block (ram,0x0150bc2c) */
/* WARNING: Removing unreachable block (ram,0x0150bc48) */
/* WARNING: Removing unreachable block (ram,0x0150bcb4) */
/* WARNING: Removing unreachable block (ram,0x0150bc5c) */
/* WARNING: Removing unreachable block (ram,0x0150bcc0) */
/* WARNING: Removing unreachable block (ram,0x0150bc68) */
/* WARNING: Removing unreachable block (ram,0x0150bcc4) */
/* WARNING: Removing unreachable block (ram,0x0150bce8) */
/* WARNING: Removing unreachable block (ram,0x0150bce0) */
/* WARNING: Removing unreachable block (ram,0x0150bcec) */
/* WARNING: Removing unreachable block (ram,0x0150bc78) */
/* WARNING: Removing unreachable block (ram,0x0150bc80) */
/* WARNING: Removing unreachable block (ram,0x0150bc94) */
/* WARNING: Removing unreachable block (ram,0x0150bca0) */
/* WARNING: Removing unreachable block (ram,0x0150c5a8) */
/* WARNING: Removing unreachable block (ram,0x0150c5dc) */
/* WARNING: Removing unreachable block (ram,0x0150c5fc) */
/* WARNING: Removing unreachable block (ram,0x0150c604) */
/* WARNING: Removing unreachable block (ram,0x0150c610) */
/* WARNING: Removing unreachable block (ram,0x0150c644) */
/* WARNING: Removing unreachable block (ram,0x0150c6c0) */
/* WARNING: Removing unreachable block (ram,0x0150c6d4) */
/* WARNING: Removing unreachable block (ram,0x0150c6d8) */
/* WARNING: Removing unreachable block (ram,0x0150c6c4) */
/* WARNING: Removing unreachable block (ram,0x0150c64c) */
/* WARNING: Removing unreachable block (ram,0x0150c650) */
/* WARNING: Removing unreachable block (ram,0x0150c6cc) */
/* WARNING: Removing unreachable block (ram,0x0150c658) */
/* WARNING: Removing unreachable block (ram,0x0150c65c) */
/* WARNING: Removing unreachable block (ram,0x0150c66c) */
/* WARNING: Removing unreachable block (ram,0x0150c67c) */
/* WARNING: Removing unreachable block (ram,0x0150c724) */
/* WARNING: Removing unreachable block (ram,0x0150c72c) */
/* WARNING: Removing unreachable block (ram,0x0150c734) */
/* WARNING: Removing unreachable block (ram,0x0150c740) */
/* WARNING: Removing unreachable block (ram,0x0150c768) */
/* WARNING: Removing unreachable block (ram,0x0150c77c) */
/* WARNING: Removing unreachable block (ram,0x0150c784) */
/* WARNING: Removing unreachable block (ram,0x0150c788) */
/* WARNING: Removing unreachable block (ram,0x0150c79c) */
/* WARNING: Removing unreachable block (ram,0x0150c7d4) */
/* WARNING: Removing unreachable block (ram,0x0150c7d8) */
/* WARNING: Removing unreachable block (ram,0x0150c838) */
/* WARNING: Removing unreachable block (ram,0x0150c87c) */
/* WARNING: Removing unreachable block (ram,0x018eea6c) */
/* WARNING: Removing unreachable block (ram,0x018eea70) */
/* WARNING: Removing unreachable block (ram,0x018eea78) */
/* WARNING: Removing unreachable block (ram,0x018eea7c) */
/* WARNING: Removing unreachable block (ram,0x0150c7a0) */
/* WARNING: Removing unreachable block (ram,0x0150c7b4) */
/* WARNING: Type propagation algorithm not settling */

undefined8 * Atlas_UI_Screens_LeaguePodiumScreen__OnBeforeEnter(undefined8 param_1)

{
  undefined8 *******pppppppuVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  ulong *puVar14;
  uint uVar15;
  ulong uVar16;
  long unaff_x22;
  long unaff_x23;
  long lVar17;
  undefined8 *******pppppppuVar18;
  undefined *puVar19;
  float extraout_s0;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined8 *******pppppppuStack_1f0;
  code *pcStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 *******pppppppuStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  ulong *puStack_1a0;
  long lStack_198;
  undefined8 ******ppppppuStack_190;
  undefined *puStack_188;
  long lStack_180;
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
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *****pppppuStack_a0;
  undefined *puStack_98;
  undefined8 ***pppuStack_70;
  undefined8 uStack_68;
  
  puVar10 = (undefined8 *)0x3d41108;
  if ((bRam0000000003eb48fe & 1) == 0) {
    func_0x00f78a20(0x3d29bc0);
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d22e58);
    func_0x00f78a20(0x3d59f10);
    func_0x00f78a20(0x3d410f8);
    func_0x00f78a20(0x3d41108);
    func_0x00f78a20(0x3d25a68);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb48fe = 1;
  }
  uStack_68 = 0x147f5f4;
  pppuStack_70 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4902 & 1) == 0) {
    func_0x00f78a20(0x3d410f8);
    bRam0000000003eb4902 = 1;
  }
  puVar3 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d410f8);
  if ((puVar3 != (undefined8 *)0x0) && (lVar12 = puVar3[0xd], lVar12 != 0)) {
    uVar15 = *(uint *)(lVar12 + 0x18);
    if (0 < (int)uVar15) {
      uVar13 = 0;
      do {
        if (uVar15 <= uVar13) {
          uVar5 = func_0x00f78b24();
          func_0x00f78ac0(uVar5,0);
          goto code_r0x0147f91c;
        }
        lVar4 = *(long *)(lVar12 + (long)(int)uVar13 * 8 + 0x20);
        if (lVar4 == 0) goto code_r0x0147f91c;
        puVar3 = (undefined8 *)/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,0,0);
        uVar13 = uVar13 + 1;
        uVar15 = *(uint *)(lVar12 + 0x18);
      } while ((int)uVar13 < (int)uVar15);
    }
    return puVar3;
  }
code_r0x0147f91c:
  lVar12 = func_0x00f78af4();
  puStack_98 = &Atlas_UI_Screens_LeaguePodiumScreen__OnUpdate;
  puVar14 = (ulong *)0x3eb4000;
  pppppuStack_a0 = (undefined8 *****)&pppuStack_70;
  if ((bRam0000000003eb48ff & 1) == 0) {
    func_0x00f78a20(0x3d2c770);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d56dc0);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3d438);
    func_0x00f78a20(0x3d3d440);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d410f8);
    func_0x00f78a20(0x3d41100);
    func_0x00f78a20(0x3d41108);
    func_0x00f78a20(0x3d79008);
    func_0x00f78a20(0x3d79090);
    func_0x00f78a20(0x3d78f50);
    bRam0000000003eb48ff = 1;
  }
  if (*(char *)(lVar12 + 0xa8) != '\0') {
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar12,uRam0000000003d41108);
    uVar16 = 0x3d410f8;
    puVar3 = puVar10;
    if (lVar4 == 0) goto code_r0x0147fe50;
    if (*(long *)(lVar4 + 0x78) == 0) goto code_r0x0147fe50;
    puVar3 = (undefined8 *)/*Atlas.UI.TransitionManager$$get_IsTransitionFullyVisible*/ func_0x01511a60(*(long *)(lVar4 + 0x78),0);
    if ((int)puVar3 == 0) {
      return puVar3;
    }
    *(undefined1 *)(lVar12 + 0xa8) = 0;
    /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/GeneralButton')*/ uRam0000000003d79008,0);
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar12,uRam0000000003d41100);
    uVar16 = 0x3d410f8;
    puVar3 = (undefined8 *)0x3d41108;
    if (lVar4 == 0) goto code_r0x0147fe50;
    if (*(long *)(lVar4 + 0x18) != 0) {
      /*Atlas.UI.Screens.LeaguePodiumScreen.ContinueSelected$$Invoke*/ func_0x0155bfe4(*(long *)(lVar4 + 0x18),0);
    }
  }
  puVar14 = (ulong *)(lVar12 + 0x78);
  uVar16 = *puVar14;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar3 = (undefined8 *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar16,0);
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = (undefined8 *)0x3d41108;
    if (*(long *)(lVar12 + 0x70) == 0) goto code_r0x0147fe50;
    puVar10 = (undefined8 *)
              Atlas_FrontEnd_FrontEndScene__TryGetSubsceneBehaviour_FrontEndSubsceneBehaviourBase_
                        (*(long *)(lVar12 + 0x70),puVar14,uRam0000000003d56dc0);
    if ((int)puVar10 == 0) {
      return puVar10;
    }
    puVar10 = (undefined8 *)0x3d41100;
    puVar3 = (undefined8 *)0x3d41100;
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar12,uRam0000000003d41100);
    if (lVar4 == 0) goto code_r0x0147fe50;
    if (*(long *)(lVar4 + 0x10) != 0) {
      lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar12,uRam0000000003d41100);
      if (lVar4 == 0) goto code_r0x0147fe50;
      lVar17 = 0;
      uVar16 = 0;
      do {
        if (*(long *)(lVar4 + 0x10) == 0) goto code_r0x0147fe50;
        if ((long)*(int *)(*(long *)(lVar4 + 0x10) + 0x18) <= (long)uVar16) break;
        lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar12,uRam0000000003d41100);
        if (lVar4 == 0) goto code_r0x0147fe50;
        unaff_x22 = *(long *)(lVar4 + 0x10);
        if (unaff_x22 == 0) goto code_r0x0147fe50;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar16) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar4 = *(long *)(unaff_x22 + 0x10) + lVar17;
        unaff_x22 = *(long *)(lVar4 + 0x28);
        uStack_138 = *(undefined8 *)(lVar4 + 0x38);
        uStack_140 = *(undefined8 *)(lVar4 + 0x30);
        uStack_128 = *(undefined8 *)(lVar4 + 0x48);
        uStack_130 = *(undefined8 *)(lVar4 + 0x40);
        uStack_118 = *(undefined8 *)(lVar4 + 0x58);
        uStack_120 = *(undefined8 *)(lVar4 + 0x50);
        uStack_110 = *(undefined8 *)(lVar4 + 0x60);
        unaff_x23 = *(long *)(lVar4 + 0x68);
        if (*(long *)(lVar12 + 0x70) == 0) goto code_r0x0147fe50;
        lStack_180 = unaff_x22;
        uStack_178 = uStack_140;
        uStack_170 = uStack_138;
        uStack_168 = uStack_130;
        uStack_160 = uStack_128;
        uStack_158 = uStack_120;
        uStack_150 = uStack_118;
        uStack_148 = uStack_110;
        Atlas_FrontEnd_FrontEndScene__SetVisibleAndRequestLoadout
                  (*(long *)(lVar12 + 0x70),uVar16,&lStack_180,0);
        lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d410f8);
        if (lVar4 == 0) goto code_r0x0147fe50;
        if (*(long *)(lVar4 + 0x70) == 0) goto code_r0x0147fe50;
        if ((long)uVar16 < (long)*(int *)(*(long *)(lVar4 + 0x70) + 0x18)) {
          iVar2 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(unaff_x23,0);
          if (iVar2 != 0) {
            lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar12,uRam0000000003d41108);
            if (lVar4 == 0) goto code_r0x0147fe50;
            if (*(long *)(lVar4 + 0x20) == 0) goto code_r0x0147fe50;
            unaff_x23 = *(long *)(*(long *)(lVar4 + 0x20) + 0x10);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar5 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(unaff_x22,0);
            if (unaff_x23 == 0) goto code_r0x0147fe50;
            lVar4 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(unaff_x23,uVar5,uRam0000000003d57270);
            if (lVar4 == 0) goto code_r0x0147fe50;
            unaff_x23 = /*Atlas.Definitions.CharacterDefinition$$IsSkin*/ func_0x0154112c(lVar4,0);
            lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar12,uRam0000000003d41108);
            unaff_x22 = lVar4;
            lVar7 = lVar6;
            if ((int)unaff_x23 != 0) {
              if (lVar6 == 0) goto code_r0x0147fe50;
              if (*(long *)(lVar6 + 0x20) == 0) goto code_r0x0147fe50;
              lVar6 = *(long *)(*(long *)(lVar6 + 0x20) + 0x10);
              if (lVar6 == 0) goto code_r0x0147fe50;
              unaff_x22 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar6,*(undefined8 *)(lVar4 + 0x70),uRam0000000003d57270);
              lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar12,uRam0000000003d41108);
              lVar7 = unaff_x22;
              if (lVar6 == 0) goto code_r0x0147fe50;
            }
            if (lVar7 == 0) goto code_r0x0147fe50;
            if (*(long *)(lVar6 + 0x88) == 0) goto code_r0x0147fe50;
            unaff_x23 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(lVar6 + 0x88),*(undefined8 *)(unaff_x22 + 0x30),0)
            ;
          }
          lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d410f8);
          if (lVar4 == 0) goto code_r0x0147fe50;
          lVar4 = *(long *)(lVar4 + 0x70);
          if (lVar4 == 0) goto code_r0x0147fe50;
          if (*(uint *)(lVar4 + 0x18) <= uVar16) goto code_r0x0147ff94;
          /*Atlas.UI.GameCenterTextFormatter$$SetTextAsGameCenterName*/ func_0x01598280(*(undefined8 *)(lVar4 + uVar16 * 8 + 0x20),unaff_x23,0);
        }
        uVar16 = uVar16 + 1;
        lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar12,uRam0000000003d41100);
        lVar17 = lVar17 + 0x50;
        if (lVar4 == 0) goto code_r0x0147fe50;
      } while( true );
    }
    *(undefined1 *)(lVar12 + 0xa0) = 1;
code_r0x0147fd2c:
    puVar3 = puVar10;
    if (*(long *)(lVar12 + 0x70) == 0) goto code_r0x0147fe50;
    puVar3 = (undefined8 *)
             Atlas_FrontEnd_FrontEndScene__AreAllRequestPartsLoadedAndInstantiated
                       (*(long *)(lVar12 + 0x70),0);
    if ((int)puVar3 != 0) {
      puVar10 = (undefined8 *)0x3d41100;
      puVar3 = (undefined8 *)0x3d41100;
      puVar8 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar12,uRam0000000003d41100);
      if (puVar8 == (undefined8 *)0x0) goto code_r0x0147fe50;
      if ((*(char *)(puVar8 + 4) != '\0') && (*(int *)(lVar12 + 0x84) < 3)) {
        *(int *)(lVar12 + 0x84) = *(int *)(lVar12 + 0x84) + 1;
        return puVar8;
      }
      lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar12,uRam0000000003d41100);
      if (lVar4 == 0) goto code_r0x0147fe50;
      uVar16 = 0;
      do {
        if (*(long *)(lVar4 + 0x10) == 0) goto code_r0x0147fe50;
        uVar9 = *puVar14;
        uVar15 = (uint)uVar16;
        if (*(int *)(*(long *)(lVar4 + 0x10) + 0x18) <= (int)uVar15) goto code_r0x0147fe54;
        if (uVar9 == 0) goto code_r0x0147fe50;
        unaff_x22 = Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__GetKartLocator(uVar9,uVar16,0);
        if (*(long *)(lVar12 + 0x70) == 0) goto code_r0x0147fe50;
        lVar4 = Atlas_FrontEnd_FrontEndScene__GetKartTransform(*(long *)(lVar12 + 0x70),uVar16,0);
        if (unaff_x22 == 0) goto code_r0x0147fe50;
        /*UnityEngine.Transform$$get_position*/ func_0x03274f20(unaff_x22,0);
        unaff_x23 = lVar4;
        if (lVar4 == 0) goto code_r0x0147fe50;
        /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(lVar4,0);
        /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(unaff_x22,0);
        /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(lVar4,0);
        /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(unaff_x22,0);
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar4,0);
        if (*(long *)(lVar12 + 0x70) == 0) goto code_r0x0147fe50;
        lVar4 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(*(long *)(lVar12 + 0x70),uVar16,0);
        if (lVar4 == 0) goto code_r0x0147fe50;
        Atlas_Gameplay_Kart_KartFEAnimator__PlayCeremonyScreen(lVar4,2 < uVar15,0);
        uVar16 = (ulong)(uVar15 + 1);
        lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar12,uRam0000000003d41100);
        if (lVar4 == 0) goto code_r0x0147fe50;
      } while( true );
    }
  }
  else if (*(char *)(lVar12 + 0xa0) != '\0') goto code_r0x0147fd2c;
  while( true ) {
    if ((0.0 < *(float *)(lVar12 + 0xa4)) &&
       (fVar20 = *(float *)(lVar12 + 0xa4) - extraout_s0, *(float *)(lVar12 + 0xa4) = fVar20,
       fVar20 <= 0.0)) {
      puVar3 = (undefined8 *)/*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/Gameplay_SFX/FireJets2D')*/ uRam0000000003d78f50,0);
    }
    if (*(char *)(lVar12 + 0x80) == '\0') {
      return puVar3;
    }
    if (*(char *)(lVar12 + 0x81) != '\0') {
      return puVar3;
    }
    puVar3 = puVar10;
    if ((*puVar14 != 0) && (lVar4 = *(long *)(*puVar14 + 0x48), lVar4 != 0)) break;
code_r0x0147fe50:
    do {
      do {
        do {
          uVar9 = func_0x00f78af4();
          puVar10 = puVar3;
code_r0x0147fe54:
          puVar3 = puVar10;
        } while ((uVar9 == 0) || (*(long *)(uVar9 + 0x48) == 0));
        /*UnityEngine.Playables.PlayableDirector$$Play*/ func_0x03282920(*(long *)(uVar9 + 0x48),0);
        *(undefined4 *)(lVar12 + 0xa4) = 0x4079999a;
        lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar12,*puVar10);
      } while (lVar4 == 0);
      if (*(char *)(lVar4 + 0x20) == '\0') {
        Atlas_UI_Screens_AtlasScreen_LeaguePodiumScreenBehaviour__LeaguePodiumScreen_TransitionData___ReadyToHideLoadingScreenAfterInit
                  (lVar12,uRam0000000003d2c770);
        goto code_r0x0147fedc;
      }
      lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar12,uRam0000000003d41108);
    } while ((lVar4 == 0) || (*(long *)(lVar4 + 0x78) == 0));
    /*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(lVar4 + 0x78),1,0,0,0);
code_r0x0147fedc:
    puVar3 = (undefined8 *)/*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/ResultHooray')*/ uRam0000000003d79090,0);
    *(undefined1 *)(lVar12 + 0x80) = 1;
    *(undefined1 *)(lVar12 + 0xa0) = 0;
    *(undefined4 *)(lVar12 + 0x84) = 0;
  }
  puVar10 = (undefined8 *)/*UnityEngine.Playables.PlayableDirector$$get_state*/ func_0x032821bc(lVar4,0);
  if ((int)puVar10 == 1) {
    return puVar10;
  }
  puVar19 = &UNK_0147ff68;
  lVar4 = lVar12;
code_r0x0147ffa0:
  pppppppuVar1 = (undefined8 *******)&lStack_1b0;
  lStack_1b0 = unaff_x22;
  uStack_1a8 = uVar16;
  puStack_1a0 = puVar14;
  lStack_198 = lVar12;
  ppppppuStack_190 = &pppppuStack_a0;
  puStack_188 = puVar19;
  if ((bRam0000000003eb4901 & 1) == 0) {
    func_0x00f78a20(0x3d41108);
    bRam0000000003eb4901 = 1;
  }
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d41108);
  if (lVar12 == 0) {
    lVar12 = func_0x00f78af4();
    pppppppuVar1 = &pppppppuStack_1f0;
    pppppppuStack_1f0 = (undefined8 *******)0x3d41108;
    uStack_1d8 = 0x3d41108;
    uStack_1d0 = 0x3eb4000;
    puStack_1b8 = &Atlas_UI_Screens_LeaguePodiumScreen__OnAfterExit;
    pppppppuVar18 = &pppppppuStack_1c0;
    uVar16 = 0x3eb4000;
    pcStack_1e8 = (code *)unaff_x23;
    lStack_1e0 = unaff_x22;
    lStack_1c8 = lVar4;
    pppppppuStack_1c0 = &ppppppuStack_190;
    if ((bRam0000000003eb4900 & 1) == 0) {
      func_0x00f78a20(0x3d20bc0);
      func_0x00f78a20(0x3d3d438);
      func_0x00f78a20(0x3d410f8);
      func_0x00f78a20(0x3d41100);
      func_0x00f78a20(0x3d41108);
      func_0x00f78a20(0x3d79090);
      func_0x00f78a20(0x3d78f50);
      bRam0000000003eb4900 = 1;
    }
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar12,uRam0000000003d41108);
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0xb8) != 0)) {
      /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar4 + 0xb8),6,0,0);
      if ((*(long *)(lVar12 + 0x70) != 0) &&
         (lVar4 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(*(long *)(lVar12 + 0x70),0,0),
         lVar4 != 0)) {
        uVar16 = 0x3d79000;
        lVar17 = 0x3d41100;
        Atlas_Gameplay_Kart_KartFEAnimator__ExitFEScreen(lVar4,0);
        /*Atlas.Audio.UIAudio$$Stop*/ func_0x01516abc(/*STR('event:/UI/Front_End/ResultHooray')*/ uRam0000000003d79090,0);
        /*Atlas.Audio.UIAudio$$Stop*/ func_0x01516abc(/*STR('event:/Gameplay_SFX/FireJets2D')*/ uRam0000000003d78f50,0);
        lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar12,uRam0000000003d41100);
        unaff_x22 = 0x3d41100;
        if (lVar4 != 0) {
          if (*(long *)(lVar4 + 0x10) == 0) {
code_r0x014801ec:
            uVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar12,uRam0000000003d410f8);
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            puVar10 = (undefined8 *)/*DG.Tweening.DOTween$$Kill*/ func_0x016962e4(uVar16,0,0);
            if (*(long *)(lVar12 + 0x98) == 0) {
              return puVar10;
            }
            lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar12,uRam0000000003d41108);
            unaff_x22 = 0x3d20000;
            if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x80), lVar4 != 0)) {
              lVar12 = *(long *)(lVar12 + 0x98);
              if ((bRam0000000003eb5670 & 1) == 0) {
                func_0x00f78a20(0x3d23990,lVar12,0);
                bRam0000000003eb5670 = 1;
              }
              uVar5 = *(undefined8 *)(lVar4 + 0x18);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              puVar10 = (undefined8 *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
              if ((int)puVar10 != 0) {
                lVar4 = *(long *)(lVar4 + 0x18);
                if (lVar4 == 0) {
                  auVar22 = func_0x00f78af4();
                  pcStack_1e8 = Core_Application_CoroutineRunner__Runner_d__13___ctor;
                  pppppppuStack_1f0 = &pppppppuStack_1c0;
                  puVar10 = (undefined8 *)/*System.Object$$.ctor*/ func_0x0294d018(auVar22._0_8_,0);
                  *(int *)(auVar22._0_8_ + 0x10) = auVar22._8_4_;
                  return puVar10;
                }
                if (lVar12 == 0) {
                  func_0x00f78a24(0x3d23938,0,0);
                  uVar11 = func_0x00f78aec();
                  uVar5 = func_0x00f78a24(0x3d7b500);
                  /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar11,uVar5,0);
                }
                else {
                  if (pcRam0000000003ec01d0 == (code *)0x0) {
                    pcRam0000000003ec01d0 =
                         (code *)func_0x00f789d4(
                                                "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                                );
                  }
                  uVar16 = (*pcRam0000000003ec01d0)(lVar4);
                  if ((uVar16 & 1) != 0) {
                    if (pcRam0000000003ec01e8 == (code *)0x0) {
                      pcRam0000000003ec01e8 =
                           (code *)func_0x00f789d4(
                                                  "UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)"
                                                  );
                    }
                    /* WARNING: Could not recover jumptable at 0x03248188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    puVar10 = (undefined8 *)(*pcRam0000000003ec01e8)(lVar4,lVar12);
                    return puVar10;
                  }
                  func_0x00f78a24(0x3d1fce8);
                  uVar11 = func_0x00f78aec();
                  uVar5 = func_0x00f78a24(0x3d6af80);
                  /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar11,uVar5,0);
                }
                uVar5 = func_0x00f78a24(0x3d5a8b8);
                auVar21 = func_0x00f78ac0(uVar11,uVar5);
                pcStack_1e8 = (code *)&UnityEngine_MonoBehaviour__StopCoroutineManaged;
                pppppppuStack_1f0 = &pppppppuStack_1c0;
                if (pcRam0000000003ec01e8 == (code *)0x0) {
                  pcRam0000000003ec01e8 =
                       (code *)func_0x00f789d4(
                                              "UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)"
                                              );
                }
                    /* WARNING: Could not recover jumptable at 0x03248254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                puVar10 = (undefined8 *)(*pcRam0000000003ec01e8)(auVar21._0_8_,auVar21._8_8_);
                return puVar10;
              }
              return puVar10;
            }
          }
          else {
            lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar12,uRam0000000003d41100);
            if (lVar4 != 0) {
              uVar16 = 1;
              do {
                unaff_x22 = lVar17;
                if (*(long *)(lVar4 + 0x10) == 0) break;
                if (*(int *)(*(long *)(lVar4 + 0x10) + 0x18) <= (int)uVar16) goto code_r0x014801ec;
                if (*(long *)(lVar12 + 0x70) == 0) break;
                Atlas_FrontEnd_FrontEndScene__SetKartHidden(*(long *)(lVar12 + 0x70),uVar16,0);
                uVar16 = (ulong)((int)uVar16 + 1);
                lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar12,uRam0000000003d41100);
              } while (lVar4 != 0);
            }
          }
        }
      }
    }
    puVar19 = &Atlas_UI_Screens_LeaguePodiumScreen__AnimateUIInRoutine;
    lVar4 = func_0x00f78af4();
  }
  else {
    uVar16 = *(ulong *)(lVar12 + 0x80);
    puVar19 = &UNK_0147fff8;
    lVar12 = lVar4;
    pppppppuVar18 = &ppppppuStack_190;
  }
  *(long *)((long)pppppppuVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)pppppppuVar1 + -0x28) = 0x3d41108;
  *(ulong *)((long)pppppppuVar1 + -0x20) = uVar16;
  *(long *)((long)pppppppuVar1 + -0x18) = lVar12;
  *(undefined8 ********)((long)pppppppuVar1 + -0x10) = pppppppuVar18;
  *(undefined **)((long)pppppppuVar1 + -8) = puVar19;
  if ((bRam0000000003eb4903 & 1) == 0) {
    func_0x00f78a20(0x3d27e60);
    bRam0000000003eb4903 = 1;
  }
  puVar10 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeaguePodiumScreen.<AnimateUIInRoutine>d__22_TypeInfo*/ uRam0000000003d27e60);
  /*Atlas.UI.Screens.LeaguePodiumScreen.<AnimateUIInRoutine>d__22$$.ctor*/ func_0x0155bcf4(puVar10,0,0);
  if (puVar10 != (undefined8 *)0x0) {
    puVar10[4] = lVar4;
    return puVar10;
  }
  lVar12 = func_0x00f78af4();
  *(undefined8 *)((long)pppppppuVar1 + -0x50) = 0;
  *(long *)((long)pppppppuVar1 + -0x48) = lVar4;
  *(undefined1 **)((long)pppppppuVar1 + -0x40) = (undefined1 *)((long)pppppppuVar1 + -0x10);
  *(undefined **)((long)pppppppuVar1 + -0x38) =
       &Atlas_UI_Screens_LeaguePodiumScreen__ContinuePressed;
  if ((bRam0000000003eb4904 & 1) == 0) {
    func_0x00f78a20(0x3d41108);
    bRam0000000003eb4904 = 1;
  }
  if (*(long *)(lVar12 + 0x98) != 0) {
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar12,uRam0000000003d41108);
    if ((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) goto code_r0x014803a8;
    Core_Application_CoroutineRunner__StopCoroutine
              (*(long *)(lVar4 + 0x80),*(undefined8 *)(lVar12 + 0x98),0);
  }
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar12,uRam0000000003d41108);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x78) != 0)) {
    /*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(*(long *)(lVar4 + 0x78),1,0,0,0,0);
    *(undefined1 *)(lVar12 + 0xa8) = 1;
    return (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
code_r0x014803a8:
  lVar4 = func_0x00f78af4();
  *(long *)((long)pppppppuVar1 + -0x80) = unaff_x22;
  *(undefined8 *)((long)pppppppuVar1 + -0x78) = 0x3d27e60;
  *(undefined8 *)((long)pppppppuVar1 + -0x70) = 0x3d41108;
  *(long *)((long)pppppppuVar1 + -0x68) = lVar12;
  *(undefined1 **)((long)pppppppuVar1 + -0x60) = (undefined1 *)((long)pppppppuVar1 + -0x40);
  *(undefined **)((long)pppppppuVar1 + -0x58) = &Atlas_UI_Screens_LeaguePodiumScreen___ctor;
  if ((bRam0000000003eb4905 & 1) == 0) {
    func_0x00f78a20(0x3d2c768);
    bRam0000000003eb4905 = 1;
  }
  *(undefined8 *)((long)pppppppuVar1 + -0x60) = *(undefined8 *)((long)pppppppuVar1 + -0x60);
  *(undefined8 *)((long)pppppppuVar1 + -0x58) = *(undefined8 *)((long)pppppppuVar1 + -0x58);
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar10 = (undefined8 *)
              (*(code *)**(undefined8 **)
                          (*(long *)(*(long *)(lRam0000000003d2c768 + 0x18) + 0xc0) + 0x38))();
    return puVar10;
  }
  auVar21 = func_0x00f78af4();
  puVar3 = auVar21._8_8_;
  puVar10 = auVar21._0_8_;
  uVar11 = puVar3[1];
  uVar5 = *puVar3;
  puVar10[2] = puVar3[2];
  puVar10[1] = uVar11;
  *puVar10 = uVar5;
  return puVar10;
code_r0x0147ff94:
  uVar5 = func_0x00f78b24();
  puVar19 = &Atlas_UI_Screens_LeaguePodiumScreen__OnCameraFlyThruComplete;
  lVar4 = func_0x00f78ac0(uVar5,0);
  goto code_r0x0147ffa0;
}



// ============================================================
// RVA: 0x147f86c | Atlas.UI.Screens.LeaguePodiumScreen.HideAllUI
// ============================================================

/* WARNING: Possible PIC construction at 0x0147ff64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147fff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bc20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bbf4) */
/* WARNING: Removing unreachable block (ram,0x0150bbfc) */
/* WARNING: Removing unreachable block (ram,0x0150bc14) */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x0147fff8) */
/* WARNING: Removing unreachable block (ram,0x0147fffc) */
/* WARNING: Removing unreachable block (ram,0x01480014) */
/* WARNING: Removing unreachable block (ram,0x0148001c) */
/* WARNING: Removing unreachable block (ram,0x0148002c) */
/* WARNING: Removing unreachable block (ram,0x01480044) */
/* WARNING: Removing unreachable block (ram,0x01480054) */
/* WARNING: Removing unreachable block (ram,0x0148005c) */
/* WARNING: Removing unreachable block (ram,0x0150b9fc) */
/* WARNING: Removing unreachable block (ram,0x0150ba14) */
/* WARNING: Removing unreachable block (ram,0x0150ba34) */
/* WARNING: Removing unreachable block (ram,0x0150ba20) */
/* WARNING: Removing unreachable block (ram,0x0150ba38) */
/* WARNING: Removing unreachable block (ram,0x0150ba50) */
/* WARNING: Removing unreachable block (ram,0x0150ba58) */
/* WARNING: Removing unreachable block (ram,0x0150ba78) */
/* WARNING: Removing unreachable block (ram,0x0150ba80) */
/* WARNING: Removing unreachable block (ram,0x0150ba70) */
/* WARNING: Removing unreachable block (ram,0x0150ba90) */
/* WARNING: Removing unreachable block (ram,0x0150ba98) */
/* WARNING: Removing unreachable block (ram,0x0150bab4) */
/* WARNING: Removing unreachable block (ram,0x0150bb24) */
/* WARNING: Removing unreachable block (ram,0x0150bb30) */
/* WARNING: Removing unreachable block (ram,0x0150bb4c) */
/* WARNING: Removing unreachable block (ram,0x0150bb44) */
/* WARNING: Removing unreachable block (ram,0x0150bb50) */
/* WARNING: Removing unreachable block (ram,0x0150bb74) */
/* WARNING: Removing unreachable block (ram,0x0150bb64) */
/* WARNING: Removing unreachable block (ram,0x0150bb78) */
/* WARNING: Removing unreachable block (ram,0x0150bb9c) */
/* WARNING: Removing unreachable block (ram,0x0150bb7c) */
/* WARNING: Removing unreachable block (ram,0x0150bba0) */
/* WARNING: Removing unreachable block (ram,0x0150bbc8) */
/* WARNING: Removing unreachable block (ram,0x0150bbe4) */
/* WARNING: Removing unreachable block (ram,0x0150bbbc) */
/* WARNING: Removing unreachable block (ram,0x0150bb88) */
/* WARNING: Removing unreachable block (ram,0x0150babc) */
/* WARNING: Removing unreachable block (ram,0x0150baa8) */
/* WARNING: Removing unreachable block (ram,0x0150bad0) */
/* WARNING: Removing unreachable block (ram,0x0150bad4) */
/* WARNING: Removing unreachable block (ram,0x0150bab0) */
/* WARNING: Removing unreachable block (ram,0x0150bae4) */
/* WARNING: Removing unreachable block (ram,0x0150bb14) */
/* WARNING: Removing unreachable block (ram,0x0150baf4) */
/* WARNING: Removing unreachable block (ram,0x0147ff68) */
/* WARNING: Removing unreachable block (ram,0x0150bc24) */
/* WARNING: Removing unreachable block (ram,0x0150bc44) */
/* WARNING: Removing unreachable block (ram,0x0150bc2c) */
/* WARNING: Removing unreachable block (ram,0x0150bc48) */
/* WARNING: Removing unreachable block (ram,0x0150bcb4) */
/* WARNING: Removing unreachable block (ram,0x0150bc5c) */
/* WARNING: Removing unreachable block (ram,0x0150bcc0) */
/* WARNING: Removing unreachable block (ram,0x0150bc68) */
/* WARNING: Removing unreachable block (ram,0x0150bcc4) */
/* WARNING: Removing unreachable block (ram,0x0150bce8) */
/* WARNING: Removing unreachable block (ram,0x0150bce0) */
/* WARNING: Removing unreachable block (ram,0x0150bcec) */
/* WARNING: Removing unreachable block (ram,0x0150bc78) */
/* WARNING: Removing unreachable block (ram,0x0150bc80) */
/* WARNING: Removing unreachable block (ram,0x0150bc94) */
/* WARNING: Removing unreachable block (ram,0x0150bca0) */
/* WARNING: Removing unreachable block (ram,0x0150c5a8) */
/* WARNING: Removing unreachable block (ram,0x0150c5dc) */
/* WARNING: Removing unreachable block (ram,0x0150c5fc) */
/* WARNING: Removing unreachable block (ram,0x0150c604) */
/* WARNING: Removing unreachable block (ram,0x0150c610) */
/* WARNING: Removing unreachable block (ram,0x0150c644) */
/* WARNING: Removing unreachable block (ram,0x0150c6c0) */
/* WARNING: Removing unreachable block (ram,0x0150c6d4) */
/* WARNING: Removing unreachable block (ram,0x0150c6d8) */
/* WARNING: Removing unreachable block (ram,0x0150c6c4) */
/* WARNING: Removing unreachable block (ram,0x0150c64c) */
/* WARNING: Removing unreachable block (ram,0x0150c650) */
/* WARNING: Removing unreachable block (ram,0x0150c6cc) */
/* WARNING: Removing unreachable block (ram,0x0150c658) */
/* WARNING: Removing unreachable block (ram,0x0150c65c) */
/* WARNING: Removing unreachable block (ram,0x0150c66c) */
/* WARNING: Removing unreachable block (ram,0x0150c67c) */
/* WARNING: Removing unreachable block (ram,0x0150c724) */
/* WARNING: Removing unreachable block (ram,0x0150c72c) */
/* WARNING: Removing unreachable block (ram,0x0150c734) */
/* WARNING: Removing unreachable block (ram,0x0150c740) */
/* WARNING: Removing unreachable block (ram,0x0150c768) */
/* WARNING: Removing unreachable block (ram,0x0150c77c) */
/* WARNING: Removing unreachable block (ram,0x0150c784) */
/* WARNING: Removing unreachable block (ram,0x0150c788) */
/* WARNING: Removing unreachable block (ram,0x0150c79c) */
/* WARNING: Removing unreachable block (ram,0x0150c7d4) */
/* WARNING: Removing unreachable block (ram,0x0150c7d8) */
/* WARNING: Removing unreachable block (ram,0x0150c838) */
/* WARNING: Removing unreachable block (ram,0x0150c87c) */
/* WARNING: Removing unreachable block (ram,0x018eea6c) */
/* WARNING: Removing unreachable block (ram,0x018eea70) */
/* WARNING: Removing unreachable block (ram,0x018eea78) */
/* WARNING: Removing unreachable block (ram,0x018eea7c) */
/* WARNING: Removing unreachable block (ram,0x0150c7a0) */
/* WARNING: Removing unreachable block (ram,0x0150c7b4) */
/* WARNING: Type propagation algorithm not settling */

undefined8 * Atlas_UI_Screens_LeaguePodiumScreen__HideAllUI(undefined8 param_1)

{
  undefined8 *******pppppppuVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  ulong *puVar13;
  uint uVar14;
  ulong uVar15;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *******pppppppuVar18;
  undefined *puVar19;
  float extraout_s0;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined8 *******pppppppuStack_190;
  code *pcStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 *******pppppppuStack_160;
  undefined *puStack_158;
  long lStack_150;
  ulong uStack_148;
  ulong *puStack_140;
  long lStack_138;
  undefined8 ******ppppppuStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined8 uStack_118;
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
  undefined8 *****pppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4902 & 1) == 0) {
    func_0x00f78a20(0x3d410f8);
    bRam0000000003eb4902 = 1;
  }
  puVar3 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d410f8);
  if ((puVar3 != (undefined8 *)0x0) && (lVar11 = puVar3[0xd], lVar11 != 0)) {
    uVar14 = *(uint *)(lVar11 + 0x18);
    if (0 < (int)uVar14) {
      uVar12 = 0;
      do {
        if (uVar14 <= uVar12) {
          uVar5 = func_0x00f78b24();
          func_0x00f78ac0(uVar5,0);
          goto LAB_0147f91c;
        }
        lVar4 = *(long *)(lVar11 + (long)(int)uVar12 * 8 + 0x20);
        if (lVar4 == 0) goto LAB_0147f91c;
        puVar3 = (undefined8 *)/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,0,0);
        uVar12 = uVar12 + 1;
        uVar14 = *(uint *)(lVar11 + 0x18);
      } while ((int)uVar12 < (int)uVar14);
    }
    return puVar3;
  }
LAB_0147f91c:
  lVar11 = func_0x00f78af4();
  puStack_38 = &Atlas_UI_Screens_LeaguePodiumScreen__OnUpdate;
  puVar13 = (ulong *)0x3eb4000;
  pppppuStack_40 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb48ff & 1) == 0) {
    func_0x00f78a20(0x3d2c770);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d56dc0);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3d438);
    func_0x00f78a20(0x3d3d440);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d410f8);
    func_0x00f78a20(0x3d41100);
    func_0x00f78a20(0x3d41108);
    func_0x00f78a20(0x3d79008);
    func_0x00f78a20(0x3d79090);
    func_0x00f78a20(0x3d78f50);
    bRam0000000003eb48ff = 1;
  }
  if (*(char *)(lVar11 + 0xa8) != '\0') {
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar11,uRam0000000003d41108);
    uVar15 = 0x3d410f8;
    if (lVar4 == 0) goto code_r0x0147fe50;
    if (*(long *)(lVar4 + 0x78) == 0) goto code_r0x0147fe50;
    puVar3 = (undefined8 *)/*Atlas.UI.TransitionManager$$get_IsTransitionFullyVisible*/ func_0x01511a60(*(long *)(lVar4 + 0x78),0);
    if ((int)puVar3 == 0) {
      return puVar3;
    }
    *(undefined1 *)(lVar11 + 0xa8) = 0;
    /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/GeneralButton')*/ uRam0000000003d79008,0);
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar11,uRam0000000003d41100);
    uVar15 = 0x3d410f8;
    if (lVar4 == 0) goto code_r0x0147fe50;
    if (*(long *)(lVar4 + 0x18) != 0) {
      /*Atlas.UI.Screens.LeaguePodiumScreen.ContinueSelected$$Invoke*/ func_0x0155bfe4(*(long *)(lVar4 + 0x18),0);
    }
  }
  puVar13 = (ulong *)(lVar11 + 0x78);
  uVar15 = *puVar13;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar3 = (undefined8 *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar15,0);
  if (((ulong)puVar3 & 1) == 0) {
    if (*(long *)(lVar11 + 0x70) == 0) goto code_r0x0147fe50;
    puVar3 = (undefined8 *)
             Atlas_FrontEnd_FrontEndScene__TryGetSubsceneBehaviour_FrontEndSubsceneBehaviourBase_
                       (*(long *)(lVar11 + 0x70),puVar13,uRam0000000003d56dc0);
    if ((int)puVar3 == 0) {
      return puVar3;
    }
    puVar8 = (undefined8 *)0x3d41100;
    unaff_x25 = (undefined8 *)0x3d41100;
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar11,uRam0000000003d41100);
    if (lVar4 == 0) goto code_r0x0147fe50;
    if (*(long *)(lVar4 + 0x10) != 0) {
      lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar11,uRam0000000003d41100);
      if (lVar4 == 0) goto code_r0x0147fe50;
      lVar17 = 0;
      uVar15 = 0;
      do {
        if (*(long *)(lVar4 + 0x10) == 0) goto code_r0x0147fe50;
        if ((long)*(int *)(*(long *)(lVar4 + 0x10) + 0x18) <= (long)uVar15) break;
        lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar11,uRam0000000003d41100);
        if (lVar4 == 0) goto code_r0x0147fe50;
        unaff_x22 = *(long *)(lVar4 + 0x10);
        if (unaff_x22 == 0) goto code_r0x0147fe50;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar15) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar4 = *(long *)(unaff_x22 + 0x10) + lVar17;
        unaff_x22 = *(long *)(lVar4 + 0x28);
        uStack_d8 = *(undefined8 *)(lVar4 + 0x38);
        uStack_e0 = *(undefined8 *)(lVar4 + 0x30);
        uStack_c8 = *(undefined8 *)(lVar4 + 0x48);
        uStack_d0 = *(undefined8 *)(lVar4 + 0x40);
        uStack_b8 = *(undefined8 *)(lVar4 + 0x58);
        uStack_c0 = *(undefined8 *)(lVar4 + 0x50);
        uStack_b0 = *(undefined8 *)(lVar4 + 0x60);
        unaff_x23 = *(long *)(lVar4 + 0x68);
        if (*(long *)(lVar11 + 0x70) == 0) goto code_r0x0147fe50;
        lStack_120 = unaff_x22;
        uStack_118 = uStack_e0;
        uStack_110 = uStack_d8;
        uStack_108 = uStack_d0;
        uStack_100 = uStack_c8;
        uStack_f8 = uStack_c0;
        uStack_f0 = uStack_b8;
        uStack_e8 = uStack_b0;
        Atlas_FrontEnd_FrontEndScene__SetVisibleAndRequestLoadout
                  (*(long *)(lVar11 + 0x70),uVar15,&lStack_120,0);
        lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar11,uRam0000000003d410f8);
        if (lVar4 == 0) goto code_r0x0147fe50;
        if (*(long *)(lVar4 + 0x70) == 0) goto code_r0x0147fe50;
        if ((long)uVar15 < (long)*(int *)(*(long *)(lVar4 + 0x70) + 0x18)) {
          iVar2 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(unaff_x23,0);
          if (iVar2 != 0) {
            lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar11,uRam0000000003d41108);
            if (lVar4 == 0) goto code_r0x0147fe50;
            if (*(long *)(lVar4 + 0x20) == 0) goto code_r0x0147fe50;
            unaff_x23 = *(long *)(*(long *)(lVar4 + 0x20) + 0x10);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar5 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(unaff_x22,0);
            if (unaff_x23 == 0) goto code_r0x0147fe50;
            lVar4 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(unaff_x23,uVar5,uRam0000000003d57270);
            if (lVar4 == 0) goto code_r0x0147fe50;
            unaff_x23 = /*Atlas.Definitions.CharacterDefinition$$IsSkin*/ func_0x0154112c(lVar4,0);
            lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar11,uRam0000000003d41108);
            unaff_x22 = lVar4;
            lVar7 = lVar6;
            if ((int)unaff_x23 != 0) {
              if (lVar6 == 0) goto code_r0x0147fe50;
              if (*(long *)(lVar6 + 0x20) == 0) goto code_r0x0147fe50;
              lVar6 = *(long *)(*(long *)(lVar6 + 0x20) + 0x10);
              if (lVar6 == 0) goto code_r0x0147fe50;
              unaff_x22 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar6,*(undefined8 *)(lVar4 + 0x70),uRam0000000003d57270);
              lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar11,uRam0000000003d41108);
              lVar7 = unaff_x22;
              if (lVar6 == 0) goto code_r0x0147fe50;
            }
            if (lVar7 == 0) goto code_r0x0147fe50;
            if (*(long *)(lVar6 + 0x88) == 0) goto code_r0x0147fe50;
            unaff_x23 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(lVar6 + 0x88),*(undefined8 *)(unaff_x22 + 0x30),0)
            ;
          }
          lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar11,uRam0000000003d410f8);
          if (lVar4 == 0) goto code_r0x0147fe50;
          lVar4 = *(long *)(lVar4 + 0x70);
          if (lVar4 == 0) goto code_r0x0147fe50;
          if (*(uint *)(lVar4 + 0x18) <= uVar15) goto code_r0x0147ff94;
          /*Atlas.UI.GameCenterTextFormatter$$SetTextAsGameCenterName*/ func_0x01598280(*(undefined8 *)(lVar4 + uVar15 * 8 + 0x20),unaff_x23,0);
        }
        uVar15 = uVar15 + 1;
        lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar11,uRam0000000003d41100);
        lVar17 = lVar17 + 0x50;
        if (lVar4 == 0) goto code_r0x0147fe50;
      } while( true );
    }
    *(undefined1 *)(lVar11 + 0xa0) = 1;
code_r0x0147fd2c:
    unaff_x25 = puVar8;
    if (*(long *)(lVar11 + 0x70) == 0) goto code_r0x0147fe50;
    puVar3 = (undefined8 *)
             Atlas_FrontEnd_FrontEndScene__AreAllRequestPartsLoadedAndInstantiated
                       (*(long *)(lVar11 + 0x70),0);
    if ((int)puVar3 != 0) {
      puVar3 = (undefined8 *)0x3d41100;
      puVar16 = (undefined8 *)0x3d41100;
      puVar8 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar11,uRam0000000003d41100);
      unaff_x25 = puVar3;
      if (puVar8 == (undefined8 *)0x0) goto code_r0x0147fe50;
      if ((*(char *)(puVar8 + 4) != '\0') && (*(int *)(lVar11 + 0x84) < 3)) {
        *(int *)(lVar11 + 0x84) = *(int *)(lVar11 + 0x84) + 1;
        return puVar8;
      }
      lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar11,uRam0000000003d41100);
      if (lVar4 == 0) goto code_r0x0147fe50;
      uVar15 = 0;
      do {
        unaff_x25 = puVar16;
        if (*(long *)(lVar4 + 0x10) == 0) goto code_r0x0147fe50;
        uVar9 = *puVar13;
        uVar14 = (uint)uVar15;
        if (*(int *)(*(long *)(lVar4 + 0x10) + 0x18) <= (int)uVar14) goto code_r0x0147fe54;
        if (uVar9 == 0) goto code_r0x0147fe50;
        unaff_x22 = Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__GetKartLocator(uVar9,uVar15,0);
        if (*(long *)(lVar11 + 0x70) == 0) goto code_r0x0147fe50;
        lVar4 = Atlas_FrontEnd_FrontEndScene__GetKartTransform(*(long *)(lVar11 + 0x70),uVar15,0);
        if (unaff_x22 == 0) goto code_r0x0147fe50;
        /*UnityEngine.Transform$$get_position*/ func_0x03274f20(unaff_x22,0);
        unaff_x23 = lVar4;
        if (lVar4 == 0) goto code_r0x0147fe50;
        /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(lVar4,0);
        /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(unaff_x22,0);
        /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(lVar4,0);
        /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(unaff_x22,0);
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar4,0);
        if (*(long *)(lVar11 + 0x70) == 0) goto code_r0x0147fe50;
        lVar4 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(*(long *)(lVar11 + 0x70),uVar15,0);
        if (lVar4 == 0) goto code_r0x0147fe50;
        Atlas_Gameplay_Kart_KartFEAnimator__PlayCeremonyScreen(lVar4,2 < uVar14,0);
        uVar15 = (ulong)(uVar14 + 1);
        lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar11,uRam0000000003d41100);
        if (lVar4 == 0) goto code_r0x0147fe50;
      } while( true );
    }
  }
  else {
    puVar8 = unaff_x25;
    if (*(char *)(lVar11 + 0xa0) != '\0') goto code_r0x0147fd2c;
  }
  while( true ) {
    if ((0.0 < *(float *)(lVar11 + 0xa4)) &&
       (fVar20 = *(float *)(lVar11 + 0xa4) - extraout_s0, *(float *)(lVar11 + 0xa4) = fVar20,
       fVar20 <= 0.0)) {
      puVar3 = (undefined8 *)/*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/Gameplay_SFX/FireJets2D')*/ uRam0000000003d78f50,0);
    }
    if (*(char *)(lVar11 + 0x80) == '\0') {
      return puVar3;
    }
    if (*(char *)(lVar11 + 0x81) != '\0') {
      return puVar3;
    }
    if ((*puVar13 != 0) && (lVar4 = *(long *)(*puVar13 + 0x48), lVar4 != 0)) break;
code_r0x0147fe50:
    do {
      do {
        do {
          uVar9 = func_0x00f78af4();
          puVar3 = unaff_x25;
code_r0x0147fe54:
          unaff_x25 = puVar3;
        } while ((uVar9 == 0) || (*(long *)(uVar9 + 0x48) == 0));
        /*UnityEngine.Playables.PlayableDirector$$Play*/ func_0x03282920(*(long *)(uVar9 + 0x48),0);
        *(undefined4 *)(lVar11 + 0xa4) = 0x4079999a;
        lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar11,*puVar3);
      } while (lVar4 == 0);
      if (*(char *)(lVar4 + 0x20) == '\0') {
        Atlas_UI_Screens_AtlasScreen_LeaguePodiumScreenBehaviour__LeaguePodiumScreen_TransitionData___ReadyToHideLoadingScreenAfterInit
                  (lVar11,uRam0000000003d2c770);
        goto code_r0x0147fedc;
      }
      lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar11,uRam0000000003d41108);
    } while ((lVar4 == 0) || (*(long *)(lVar4 + 0x78) == 0));
    /*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(lVar4 + 0x78),1,0,0,0);
code_r0x0147fedc:
    puVar3 = (undefined8 *)/*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/ResultHooray')*/ uRam0000000003d79090,0);
    *(undefined1 *)(lVar11 + 0x80) = 1;
    *(undefined1 *)(lVar11 + 0xa0) = 0;
    *(undefined4 *)(lVar11 + 0x84) = 0;
  }
  puVar3 = (undefined8 *)/*UnityEngine.Playables.PlayableDirector$$get_state*/ func_0x032821bc(lVar4,0);
  if ((int)puVar3 == 1) {
    return puVar3;
  }
  puVar19 = &UNK_0147ff68;
  lVar4 = lVar11;
code_r0x0147ffa0:
  pppppppuVar1 = (undefined8 *******)&lStack_150;
  lStack_150 = unaff_x22;
  uStack_148 = uVar15;
  puStack_140 = puVar13;
  lStack_138 = lVar11;
  ppppppuStack_130 = &pppppuStack_40;
  puStack_128 = puVar19;
  if ((bRam0000000003eb4901 & 1) == 0) {
    func_0x00f78a20(0x3d41108);
    bRam0000000003eb4901 = 1;
  }
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d41108);
  if (lVar11 == 0) {
    lVar11 = func_0x00f78af4();
    pppppppuVar1 = &pppppppuStack_190;
    pppppppuStack_190 = (undefined8 *******)0x3d41108;
    uStack_178 = 0x3d41108;
    uStack_170 = 0x3eb4000;
    puStack_158 = &Atlas_UI_Screens_LeaguePodiumScreen__OnAfterExit;
    pppppppuVar18 = &pppppppuStack_160;
    uVar15 = 0x3eb4000;
    pcStack_188 = (code *)unaff_x23;
    lStack_180 = unaff_x22;
    lStack_168 = lVar4;
    pppppppuStack_160 = &ppppppuStack_130;
    if ((bRam0000000003eb4900 & 1) == 0) {
      func_0x00f78a20(0x3d20bc0);
      func_0x00f78a20(0x3d3d438);
      func_0x00f78a20(0x3d410f8);
      func_0x00f78a20(0x3d41100);
      func_0x00f78a20(0x3d41108);
      func_0x00f78a20(0x3d79090);
      func_0x00f78a20(0x3d78f50);
      bRam0000000003eb4900 = 1;
    }
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar11,uRam0000000003d41108);
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0xb8) != 0)) {
      /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar4 + 0xb8),6,0,0);
      if ((*(long *)(lVar11 + 0x70) != 0) &&
         (lVar4 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(*(long *)(lVar11 + 0x70),0,0),
         lVar4 != 0)) {
        uVar15 = 0x3d79000;
        lVar17 = 0x3d41100;
        Atlas_Gameplay_Kart_KartFEAnimator__ExitFEScreen(lVar4,0);
        /*Atlas.Audio.UIAudio$$Stop*/ func_0x01516abc(/*STR('event:/UI/Front_End/ResultHooray')*/ uRam0000000003d79090,0);
        /*Atlas.Audio.UIAudio$$Stop*/ func_0x01516abc(/*STR('event:/Gameplay_SFX/FireJets2D')*/ uRam0000000003d78f50,0);
        lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar11,uRam0000000003d41100);
        unaff_x22 = 0x3d41100;
        if (lVar4 != 0) {
          if (*(long *)(lVar4 + 0x10) == 0) {
code_r0x014801ec:
            uVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar11,uRam0000000003d410f8);
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            puVar3 = (undefined8 *)/*DG.Tweening.DOTween$$Kill*/ func_0x016962e4(uVar15,0,0);
            if (*(long *)(lVar11 + 0x98) == 0) {
              return puVar3;
            }
            lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar11,uRam0000000003d41108);
            unaff_x22 = 0x3d20000;
            if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x80), lVar4 != 0)) {
              lVar11 = *(long *)(lVar11 + 0x98);
              if ((bRam0000000003eb5670 & 1) == 0) {
                func_0x00f78a20(0x3d23990,lVar11,0);
                bRam0000000003eb5670 = 1;
              }
              uVar5 = *(undefined8 *)(lVar4 + 0x18);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              puVar3 = (undefined8 *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
              if ((int)puVar3 != 0) {
                lVar4 = *(long *)(lVar4 + 0x18);
                if (lVar4 == 0) {
                  auVar22 = func_0x00f78af4();
                  pcStack_188 = Core_Application_CoroutineRunner__Runner_d__13___ctor;
                  pppppppuStack_190 = &pppppppuStack_160;
                  puVar3 = (undefined8 *)/*System.Object$$.ctor*/ func_0x0294d018(auVar22._0_8_,0);
                  *(int *)(auVar22._0_8_ + 0x10) = auVar22._8_4_;
                  return puVar3;
                }
                if (lVar11 == 0) {
                  func_0x00f78a24(0x3d23938,0,0);
                  uVar10 = func_0x00f78aec();
                  uVar5 = func_0x00f78a24(0x3d7b500);
                  /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar10,uVar5,0);
                }
                else {
                  if (pcRam0000000003ec01d0 == (code *)0x0) {
                    pcRam0000000003ec01d0 =
                         (code *)func_0x00f789d4(
                                                "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                                );
                  }
                  uVar15 = (*pcRam0000000003ec01d0)(lVar4);
                  if ((uVar15 & 1) != 0) {
                    if (pcRam0000000003ec01e8 == (code *)0x0) {
                      pcRam0000000003ec01e8 =
                           (code *)func_0x00f789d4(
                                                  "UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)"
                                                  );
                    }
                    /* WARNING: Could not recover jumptable at 0x03248188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    puVar3 = (undefined8 *)(*pcRam0000000003ec01e8)(lVar4,lVar11);
                    return puVar3;
                  }
                  func_0x00f78a24(0x3d1fce8);
                  uVar10 = func_0x00f78aec();
                  uVar5 = func_0x00f78a24(0x3d6af80);
                  /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar10,uVar5,0);
                }
                uVar5 = func_0x00f78a24(0x3d5a8b8);
                auVar21 = func_0x00f78ac0(uVar10,uVar5);
                pcStack_188 = (code *)&UnityEngine_MonoBehaviour__StopCoroutineManaged;
                pppppppuStack_190 = &pppppppuStack_160;
                if (pcRam0000000003ec01e8 == (code *)0x0) {
                  pcRam0000000003ec01e8 =
                       (code *)func_0x00f789d4(
                                              "UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)"
                                              );
                }
                    /* WARNING: Could not recover jumptable at 0x03248254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                puVar3 = (undefined8 *)(*pcRam0000000003ec01e8)(auVar21._0_8_,auVar21._8_8_);
                return puVar3;
              }
              return puVar3;
            }
          }
          else {
            lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar11,uRam0000000003d41100);
            if (lVar4 != 0) {
              uVar15 = 1;
              do {
                unaff_x22 = lVar17;
                if (*(long *)(lVar4 + 0x10) == 0) break;
                if (*(int *)(*(long *)(lVar4 + 0x10) + 0x18) <= (int)uVar15) goto code_r0x014801ec;
                if (*(long *)(lVar11 + 0x70) == 0) break;
                Atlas_FrontEnd_FrontEndScene__SetKartHidden(*(long *)(lVar11 + 0x70),uVar15,0);
                uVar15 = (ulong)((int)uVar15 + 1);
                lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar11,uRam0000000003d41100);
              } while (lVar4 != 0);
            }
          }
        }
      }
    }
    puVar19 = &Atlas_UI_Screens_LeaguePodiumScreen__AnimateUIInRoutine;
    lVar4 = func_0x00f78af4();
  }
  else {
    uVar15 = *(ulong *)(lVar11 + 0x80);
    puVar19 = &UNK_0147fff8;
    lVar11 = lVar4;
    pppppppuVar18 = &ppppppuStack_130;
  }
  *(long *)((long)pppppppuVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)pppppppuVar1 + -0x28) = 0x3d41108;
  *(ulong *)((long)pppppppuVar1 + -0x20) = uVar15;
  *(long *)((long)pppppppuVar1 + -0x18) = lVar11;
  *(undefined8 ********)((long)pppppppuVar1 + -0x10) = pppppppuVar18;
  *(undefined **)((long)pppppppuVar1 + -8) = puVar19;
  if ((bRam0000000003eb4903 & 1) == 0) {
    func_0x00f78a20(0x3d27e60);
    bRam0000000003eb4903 = 1;
  }
  puVar3 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeaguePodiumScreen.<AnimateUIInRoutine>d__22_TypeInfo*/ uRam0000000003d27e60);
  /*Atlas.UI.Screens.LeaguePodiumScreen.<AnimateUIInRoutine>d__22$$.ctor*/ func_0x0155bcf4(puVar3,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[4] = lVar4;
    return puVar3;
  }
  lVar11 = func_0x00f78af4();
  *(undefined8 *)((long)pppppppuVar1 + -0x50) = 0;
  *(long *)((long)pppppppuVar1 + -0x48) = lVar4;
  *(undefined1 **)((long)pppppppuVar1 + -0x40) = (undefined1 *)((long)pppppppuVar1 + -0x10);
  *(undefined **)((long)pppppppuVar1 + -0x38) =
       &Atlas_UI_Screens_LeaguePodiumScreen__ContinuePressed;
  if ((bRam0000000003eb4904 & 1) == 0) {
    func_0x00f78a20(0x3d41108);
    bRam0000000003eb4904 = 1;
  }
  if (*(long *)(lVar11 + 0x98) != 0) {
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar11,uRam0000000003d41108);
    if ((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) goto code_r0x014803a8;
    Core_Application_CoroutineRunner__StopCoroutine
              (*(long *)(lVar4 + 0x80),*(undefined8 *)(lVar11 + 0x98),0);
  }
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar11,uRam0000000003d41108);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x78) != 0)) {
    /*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(*(long *)(lVar4 + 0x78),1,0,0,0,0);
    *(undefined1 *)(lVar11 + 0xa8) = 1;
    return (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
code_r0x014803a8:
  lVar4 = func_0x00f78af4();
  *(long *)((long)pppppppuVar1 + -0x80) = unaff_x22;
  *(undefined8 *)((long)pppppppuVar1 + -0x78) = 0x3d27e60;
  *(undefined8 *)((long)pppppppuVar1 + -0x70) = 0x3d41108;
  *(long *)((long)pppppppuVar1 + -0x68) = lVar11;
  *(undefined1 **)((long)pppppppuVar1 + -0x60) = (undefined1 *)((long)pppppppuVar1 + -0x40);
  *(undefined **)((long)pppppppuVar1 + -0x58) = &Atlas_UI_Screens_LeaguePodiumScreen___ctor;
  if ((bRam0000000003eb4905 & 1) == 0) {
    func_0x00f78a20(0x3d2c768);
    bRam0000000003eb4905 = 1;
  }
  *(undefined8 *)((long)pppppppuVar1 + -0x60) = *(undefined8 *)((long)pppppppuVar1 + -0x60);
  *(undefined8 *)((long)pppppppuVar1 + -0x58) = *(undefined8 *)((long)pppppppuVar1 + -0x58);
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar3 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c768 + 0x18) + 0xc0) + 0x38))();
    return puVar3;
  }
  auVar21 = func_0x00f78af4();
  puVar8 = auVar21._8_8_;
  puVar3 = auVar21._0_8_;
  uVar10 = puVar8[1];
  uVar5 = *puVar8;
  puVar3[2] = puVar8[2];
  puVar3[1] = uVar10;
  *puVar3 = uVar5;
  return puVar3;
code_r0x0147ff94:
  uVar5 = func_0x00f78b24();
  puVar19 = &Atlas_UI_Screens_LeaguePodiumScreen__OnCameraFlyThruComplete;
  lVar4 = func_0x00f78ac0(uVar5,0);
  goto code_r0x0147ffa0;
}



// ============================================================
// RVA: 0x147f920 | Atlas.UI.Screens.LeaguePodiumScreen.OnUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x0147ff64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147fff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bc20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bbf4) */
/* WARNING: Removing unreachable block (ram,0x0150bbfc) */
/* WARNING: Removing unreachable block (ram,0x0150bc14) */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x0147fff8) */
/* WARNING: Removing unreachable block (ram,0x0147fffc) */
/* WARNING: Removing unreachable block (ram,0x01480014) */
/* WARNING: Removing unreachable block (ram,0x0148001c) */
/* WARNING: Removing unreachable block (ram,0x0148002c) */
/* WARNING: Removing unreachable block (ram,0x01480044) */
/* WARNING: Removing unreachable block (ram,0x01480054) */
/* WARNING: Removing unreachable block (ram,0x0148005c) */
/* WARNING: Removing unreachable block (ram,0x0150b9fc) */
/* WARNING: Removing unreachable block (ram,0x0150ba14) */
/* WARNING: Removing unreachable block (ram,0x0150ba34) */
/* WARNING: Removing unreachable block (ram,0x0150ba20) */
/* WARNING: Removing unreachable block (ram,0x0150ba38) */
/* WARNING: Removing unreachable block (ram,0x0150ba50) */
/* WARNING: Removing unreachable block (ram,0x0150ba58) */
/* WARNING: Removing unreachable block (ram,0x0150ba78) */
/* WARNING: Removing unreachable block (ram,0x0150ba80) */
/* WARNING: Removing unreachable block (ram,0x0150ba70) */
/* WARNING: Removing unreachable block (ram,0x0150ba90) */
/* WARNING: Removing unreachable block (ram,0x0150ba98) */
/* WARNING: Removing unreachable block (ram,0x0150bab4) */
/* WARNING: Removing unreachable block (ram,0x0150bb24) */
/* WARNING: Removing unreachable block (ram,0x0150bb30) */
/* WARNING: Removing unreachable block (ram,0x0150bb4c) */
/* WARNING: Removing unreachable block (ram,0x0150bb44) */
/* WARNING: Removing unreachable block (ram,0x0150bb50) */
/* WARNING: Removing unreachable block (ram,0x0150bb74) */
/* WARNING: Removing unreachable block (ram,0x0150bb64) */
/* WARNING: Removing unreachable block (ram,0x0150bb78) */
/* WARNING: Removing unreachable block (ram,0x0150bb9c) */
/* WARNING: Removing unreachable block (ram,0x0150bb7c) */
/* WARNING: Removing unreachable block (ram,0x0150bba0) */
/* WARNING: Removing unreachable block (ram,0x0150bbc8) */
/* WARNING: Removing unreachable block (ram,0x0150bbe4) */
/* WARNING: Removing unreachable block (ram,0x0150bbbc) */
/* WARNING: Removing unreachable block (ram,0x0150bb88) */
/* WARNING: Removing unreachable block (ram,0x0150babc) */
/* WARNING: Removing unreachable block (ram,0x0150baa8) */
/* WARNING: Removing unreachable block (ram,0x0150bad0) */
/* WARNING: Removing unreachable block (ram,0x0150bad4) */
/* WARNING: Removing unreachable block (ram,0x0150bab0) */
/* WARNING: Removing unreachable block (ram,0x0150bae4) */
/* WARNING: Removing unreachable block (ram,0x0150bb14) */
/* WARNING: Removing unreachable block (ram,0x0150baf4) */
/* WARNING: Removing unreachable block (ram,0x0147ff68) */
/* WARNING: Removing unreachable block (ram,0x0150bc24) */
/* WARNING: Removing unreachable block (ram,0x0150bc44) */
/* WARNING: Removing unreachable block (ram,0x0150bc2c) */
/* WARNING: Removing unreachable block (ram,0x0150bc48) */
/* WARNING: Removing unreachable block (ram,0x0150bcb4) */
/* WARNING: Removing unreachable block (ram,0x0150bc5c) */
/* WARNING: Removing unreachable block (ram,0x0150bcc0) */
/* WARNING: Removing unreachable block (ram,0x0150bc68) */
/* WARNING: Removing unreachable block (ram,0x0150bcc4) */
/* WARNING: Removing unreachable block (ram,0x0150bce8) */
/* WARNING: Removing unreachable block (ram,0x0150bce0) */
/* WARNING: Removing unreachable block (ram,0x0150bcec) */
/* WARNING: Removing unreachable block (ram,0x0150bc78) */
/* WARNING: Removing unreachable block (ram,0x0150bc80) */
/* WARNING: Removing unreachable block (ram,0x0150bc94) */
/* WARNING: Removing unreachable block (ram,0x0150bca0) */
/* WARNING: Removing unreachable block (ram,0x0150c5a8) */
/* WARNING: Removing unreachable block (ram,0x0150c5dc) */
/* WARNING: Removing unreachable block (ram,0x0150c5fc) */
/* WARNING: Removing unreachable block (ram,0x0150c604) */
/* WARNING: Removing unreachable block (ram,0x0150c610) */
/* WARNING: Removing unreachable block (ram,0x0150c644) */
/* WARNING: Removing unreachable block (ram,0x0150c6c0) */
/* WARNING: Removing unreachable block (ram,0x0150c6d4) */
/* WARNING: Removing unreachable block (ram,0x0150c6d8) */
/* WARNING: Removing unreachable block (ram,0x0150c6c4) */
/* WARNING: Removing unreachable block (ram,0x0150c64c) */
/* WARNING: Removing unreachable block (ram,0x0150c650) */
/* WARNING: Removing unreachable block (ram,0x0150c6cc) */
/* WARNING: Removing unreachable block (ram,0x0150c658) */
/* WARNING: Removing unreachable block (ram,0x0150c65c) */
/* WARNING: Removing unreachable block (ram,0x0150c66c) */
/* WARNING: Removing unreachable block (ram,0x0150c67c) */
/* WARNING: Removing unreachable block (ram,0x0150c724) */
/* WARNING: Removing unreachable block (ram,0x0150c72c) */
/* WARNING: Removing unreachable block (ram,0x0150c734) */
/* WARNING: Removing unreachable block (ram,0x0150c740) */
/* WARNING: Removing unreachable block (ram,0x0150c768) */
/* WARNING: Removing unreachable block (ram,0x0150c77c) */
/* WARNING: Removing unreachable block (ram,0x0150c784) */
/* WARNING: Removing unreachable block (ram,0x0150c788) */
/* WARNING: Removing unreachable block (ram,0x0150c79c) */
/* WARNING: Removing unreachable block (ram,0x0150c7d4) */
/* WARNING: Removing unreachable block (ram,0x0150c7d8) */
/* WARNING: Removing unreachable block (ram,0x0150c838) */
/* WARNING: Removing unreachable block (ram,0x0150c87c) */
/* WARNING: Removing unreachable block (ram,0x018eea6c) */
/* WARNING: Removing unreachable block (ram,0x018eea70) */
/* WARNING: Removing unreachable block (ram,0x018eea78) */
/* WARNING: Removing unreachable block (ram,0x018eea7c) */
/* WARNING: Removing unreachable block (ram,0x0150c7a0) */
/* WARNING: Removing unreachable block (ram,0x0150c7b4) */
/* WARNING: Type propagation algorithm not settling */

undefined8 * Atlas_UI_Screens_LeaguePodiumScreen__OnUpdate(float param_1,long param_2)

{
  undefined8 *******pppppppuVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong *puVar11;
  uint uVar12;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *******pppppppuVar15;
  undefined *puVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  undefined8 *******pppppppuStack_160;
  code *pcStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 *******pppppppuStack_130;
  undefined *puStack_128;
  long lStack_120;
  ulong uStack_118;
  ulong *puStack_110;
  long lStack_108;
  undefined8 ******ppppppuStack_100;
  undefined *puStack_f8;
  long lStack_f0;
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
  
  puVar11 = (ulong *)0x3eb4000;
  if ((bRam0000000003eb48ff & 1) == 0) {
    func_0x00f78a20(0x3d2c770);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d56dc0);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3d438);
    func_0x00f78a20(0x3d3d440);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d410f8);
    func_0x00f78a20(0x3d41100);
    func_0x00f78a20(0x3d41108);
    func_0x00f78a20(0x3d79008);
    func_0x00f78a20(0x3d79090);
    func_0x00f78a20(0x3d78f50);
    bRam0000000003eb48ff = 1;
  }
  if (*(char *)(param_2 + 0xa8) != '\0') {
    lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_2,uRam0000000003d41108);
    if (lVar3 == 0) goto LAB_0147fe50;
    if (*(long *)(lVar3 + 0x78) == 0) goto LAB_0147fe50;
    puVar4 = (undefined8 *)/*Atlas.UI.TransitionManager$$get_IsTransitionFullyVisible*/ func_0x01511a60(*(long *)(lVar3 + 0x78),0);
    if ((int)puVar4 == 0) {
      return puVar4;
    }
    *(undefined1 *)(param_2 + 0xa8) = 0;
    /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/GeneralButton')*/ uRam0000000003d79008,0);
    lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_2,uRam0000000003d41100);
    if (lVar3 == 0) goto LAB_0147fe50;
    if (*(long *)(lVar3 + 0x18) != 0) {
      /*Atlas.UI.Screens.LeaguePodiumScreen.ContinueSelected$$Invoke*/ func_0x0155bfe4(*(long *)(lVar3 + 0x18),0);
    }
  }
  puVar11 = (ulong *)(param_2 + 0x78);
  unaff_x21 = *puVar11;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar4 = (undefined8 *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(unaff_x21,0);
  if (((ulong)puVar4 & 1) == 0) {
    if (*(long *)(param_2 + 0x70) == 0) goto LAB_0147fe50;
    puVar4 = (undefined8 *)
             Atlas_FrontEnd_FrontEndScene__TryGetSubsceneBehaviour_FrontEndSubsceneBehaviourBase_
                       (*(long *)(param_2 + 0x70),puVar11,uRam0000000003d56dc0);
    if ((int)puVar4 == 0) {
      return puVar4;
    }
    puVar8 = (undefined8 *)0x3d41100;
    unaff_x25 = (undefined8 *)0x3d41100;
    lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_2,uRam0000000003d41100);
    if (lVar3 == 0) goto LAB_0147fe50;
    if (*(long *)(lVar3 + 0x10) != 0) {
      lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_2,uRam0000000003d41100);
      if (lVar3 == 0) goto LAB_0147fe50;
      lVar14 = 0;
      unaff_x21 = 0;
      do {
        if (*(long *)(lVar3 + 0x10) == 0) goto LAB_0147fe50;
        if ((long)*(int *)(*(long *)(lVar3 + 0x10) + 0x18) <= (long)unaff_x21) break;
        lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_2,uRam0000000003d41100);
        if (lVar3 == 0) goto LAB_0147fe50;
        unaff_x22 = *(long *)(lVar3 + 0x10);
        if (unaff_x22 == 0) goto LAB_0147fe50;
        if (*(uint *)(unaff_x22 + 0x18) <= unaff_x21) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar3 = *(long *)(unaff_x22 + 0x10) + lVar14;
        unaff_x22 = *(long *)(lVar3 + 0x28);
        uStack_a8 = *(undefined8 *)(lVar3 + 0x38);
        uStack_b0 = *(undefined8 *)(lVar3 + 0x30);
        uStack_98 = *(undefined8 *)(lVar3 + 0x48);
        uStack_a0 = *(undefined8 *)(lVar3 + 0x40);
        uStack_88 = *(undefined8 *)(lVar3 + 0x58);
        uStack_90 = *(undefined8 *)(lVar3 + 0x50);
        uStack_80 = *(undefined8 *)(lVar3 + 0x60);
        unaff_x23 = *(long *)(lVar3 + 0x68);
        if (*(long *)(param_2 + 0x70) == 0) goto LAB_0147fe50;
        lStack_f0 = unaff_x22;
        uStack_e8 = uStack_b0;
        uStack_e0 = uStack_a8;
        uStack_d8 = uStack_a0;
        uStack_d0 = uStack_98;
        uStack_c8 = uStack_90;
        uStack_c0 = uStack_88;
        uStack_b8 = uStack_80;
        Atlas_FrontEnd_FrontEndScene__SetVisibleAndRequestLoadout
                  (*(long *)(param_2 + 0x70),unaff_x21,&lStack_f0,0);
        lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_2,uRam0000000003d410f8);
        if (lVar3 == 0) goto LAB_0147fe50;
        if (*(long *)(lVar3 + 0x70) == 0) goto LAB_0147fe50;
        if ((long)unaff_x21 < (long)*(int *)(*(long *)(lVar3 + 0x70) + 0x18)) {
          iVar2 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(unaff_x23,0);
          if (iVar2 != 0) {
            lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_2,uRam0000000003d41108);
            if (lVar3 == 0) goto LAB_0147fe50;
            if (*(long *)(lVar3 + 0x20) == 0) goto LAB_0147fe50;
            unaff_x23 = *(long *)(*(long *)(lVar3 + 0x20) + 0x10);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar5 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(unaff_x22,0);
            if (unaff_x23 == 0) goto LAB_0147fe50;
            lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(unaff_x23,uVar5,uRam0000000003d57270);
            if (lVar3 == 0) goto LAB_0147fe50;
            unaff_x23 = /*Atlas.Definitions.CharacterDefinition$$IsSkin*/ func_0x0154112c(lVar3,0);
            lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_2,uRam0000000003d41108);
            unaff_x22 = lVar3;
            lVar7 = lVar6;
            if ((int)unaff_x23 != 0) {
              if (lVar6 == 0) goto LAB_0147fe50;
              if (*(long *)(lVar6 + 0x20) == 0) goto LAB_0147fe50;
              lVar6 = *(long *)(*(long *)(lVar6 + 0x20) + 0x10);
              if (lVar6 == 0) goto LAB_0147fe50;
              unaff_x22 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar6,*(undefined8 *)(lVar3 + 0x70),uRam0000000003d57270);
              lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_2,uRam0000000003d41108);
              lVar7 = unaff_x22;
              if (lVar6 == 0) goto LAB_0147fe50;
            }
            if (lVar7 == 0) goto LAB_0147fe50;
            if (*(long *)(lVar6 + 0x88) == 0) goto LAB_0147fe50;
            unaff_x23 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(lVar6 + 0x88),*(undefined8 *)(unaff_x22 + 0x30),0)
            ;
          }
          lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_2,uRam0000000003d410f8);
          if (lVar3 == 0) goto LAB_0147fe50;
          lVar3 = *(long *)(lVar3 + 0x70);
          if (lVar3 == 0) goto LAB_0147fe50;
          if (*(uint *)(lVar3 + 0x18) <= unaff_x21) goto code_r0x0147ff94;
          /*Atlas.UI.GameCenterTextFormatter$$SetTextAsGameCenterName*/ func_0x01598280(*(undefined8 *)(lVar3 + unaff_x21 * 8 + 0x20),unaff_x23,0);
        }
        unaff_x21 = unaff_x21 + 1;
        lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_2,uRam0000000003d41100);
        lVar14 = lVar14 + 0x50;
        if (lVar3 == 0) goto LAB_0147fe50;
      } while( true );
    }
    *(undefined1 *)(param_2 + 0xa0) = 1;
LAB_0147fd2c:
    unaff_x25 = puVar8;
    if (*(long *)(param_2 + 0x70) == 0) goto LAB_0147fe50;
    puVar4 = (undefined8 *)
             Atlas_FrontEnd_FrontEndScene__AreAllRequestPartsLoadedAndInstantiated
                       (*(long *)(param_2 + 0x70),0);
    if ((int)puVar4 != 0) {
      puVar4 = (undefined8 *)0x3d41100;
      puVar13 = (undefined8 *)0x3d41100;
      puVar8 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_2,uRam0000000003d41100);
      unaff_x25 = puVar4;
      if (puVar8 == (undefined8 *)0x0) goto LAB_0147fe50;
      if ((*(char *)(puVar8 + 4) != '\0') && (*(int *)(param_2 + 0x84) < 3)) {
        *(int *)(param_2 + 0x84) = *(int *)(param_2 + 0x84) + 1;
        return puVar8;
      }
      lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_2,uRam0000000003d41100);
      if (lVar3 == 0) goto LAB_0147fe50;
      unaff_x21 = 0;
      do {
        unaff_x25 = puVar13;
        if (*(long *)(lVar3 + 0x10) == 0) goto LAB_0147fe50;
        uVar9 = *puVar11;
        uVar12 = (uint)unaff_x21;
        if (*(int *)(*(long *)(lVar3 + 0x10) + 0x18) <= (int)uVar12) goto code_r0x0147fe54;
        if (uVar9 == 0) goto LAB_0147fe50;
        unaff_x22 = Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__GetKartLocator(uVar9,unaff_x21,0);
        if (*(long *)(param_2 + 0x70) == 0) goto LAB_0147fe50;
        lVar3 = Atlas_FrontEnd_FrontEndScene__GetKartTransform
                          (*(long *)(param_2 + 0x70),unaff_x21,0);
        if (unaff_x22 == 0) goto LAB_0147fe50;
        /*UnityEngine.Transform$$get_position*/ func_0x03274f20(unaff_x22,0);
        unaff_x23 = lVar3;
        if (lVar3 == 0) goto LAB_0147fe50;
        /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(lVar3,0);
        /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(unaff_x22,0);
        /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(lVar3,0);
        /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(unaff_x22,0);
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar3,0);
        if (*(long *)(param_2 + 0x70) == 0) goto LAB_0147fe50;
        lVar3 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator
                          (*(long *)(param_2 + 0x70),unaff_x21,0);
        if (lVar3 == 0) goto LAB_0147fe50;
        Atlas_Gameplay_Kart_KartFEAnimator__PlayCeremonyScreen(lVar3,2 < uVar12,0);
        unaff_x21 = (ulong)(uVar12 + 1);
        lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_2,uRam0000000003d41100);
        if (lVar3 == 0) goto LAB_0147fe50;
      } while( true );
    }
  }
  else {
    puVar8 = unaff_x25;
    if (*(char *)(param_2 + 0xa0) != '\0') goto LAB_0147fd2c;
  }
  while( true ) {
    if ((0.0 < *(float *)(param_2 + 0xa4)) &&
       (fVar17 = *(float *)(param_2 + 0xa4) - param_1, *(float *)(param_2 + 0xa4) = fVar17,
       fVar17 <= 0.0)) {
      puVar4 = (undefined8 *)/*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/Gameplay_SFX/FireJets2D')*/ uRam0000000003d78f50,0);
    }
    if (*(char *)(param_2 + 0x80) == '\0') {
      return puVar4;
    }
    if (*(char *)(param_2 + 0x81) != '\0') {
      return puVar4;
    }
    if ((*puVar11 != 0) && (lVar3 = *(long *)(*puVar11 + 0x48), lVar3 != 0)) break;
LAB_0147fe50:
    do {
      do {
        do {
          uVar9 = func_0x00f78af4();
          puVar4 = unaff_x25;
code_r0x0147fe54:
          unaff_x25 = puVar4;
        } while ((uVar9 == 0) || (*(long *)(uVar9 + 0x48) == 0));
        /*UnityEngine.Playables.PlayableDirector$$Play*/ func_0x03282920(*(long *)(uVar9 + 0x48),0);
        *(undefined4 *)(param_2 + 0xa4) = 0x4079999a;
        lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_2,*puVar4);
      } while (lVar3 == 0);
      if (*(char *)(lVar3 + 0x20) == '\0') {
        Atlas_UI_Screens_AtlasScreen_LeaguePodiumScreenBehaviour__LeaguePodiumScreen_TransitionData___ReadyToHideLoadingScreenAfterInit
                  (param_2,uRam0000000003d2c770);
        goto code_r0x0147fedc;
      }
      lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_2,uRam0000000003d41108);
    } while ((lVar3 == 0) || (*(long *)(lVar3 + 0x78) == 0));
    /*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(lVar3 + 0x78),1,0,0,0);
code_r0x0147fedc:
    puVar4 = (undefined8 *)/*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/ResultHooray')*/ uRam0000000003d79090,0);
    *(undefined1 *)(param_2 + 0x80) = 1;
    *(undefined1 *)(param_2 + 0xa0) = 0;
    *(undefined4 *)(param_2 + 0x84) = 0;
  }
  puVar4 = (undefined8 *)/*UnityEngine.Playables.PlayableDirector$$get_state*/ func_0x032821bc(lVar3,0);
  if ((int)puVar4 == 1) {
    return puVar4;
  }
  puVar16 = &UNK_0147ff68;
  lVar3 = param_2;
code_r0x0147ffa0:
  pppppppuVar1 = (undefined8 *******)&lStack_120;
  lStack_120 = unaff_x22;
  uStack_118 = unaff_x21;
  puStack_110 = puVar11;
  lStack_108 = param_2;
  ppppppuStack_100 = (undefined8 ******)&stack0xfffffffffffffff0;
  puStack_f8 = puVar16;
  if ((bRam0000000003eb4901 & 1) == 0) {
    func_0x00f78a20(0x3d41108);
    bRam0000000003eb4901 = 1;
  }
  lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar3,uRam0000000003d41108);
  if (lVar14 == 0) {
    lVar14 = func_0x00f78af4();
    pppppppuVar1 = &pppppppuStack_160;
    pppppppuStack_160 = (undefined8 *******)0x3d41108;
    uStack_148 = 0x3d41108;
    uStack_140 = 0x3eb4000;
    puStack_128 = &Atlas_UI_Screens_LeaguePodiumScreen__OnAfterExit;
    pppppppuVar15 = &pppppppuStack_130;
    uVar9 = 0x3eb4000;
    pcStack_158 = (code *)unaff_x23;
    lStack_150 = unaff_x22;
    lStack_138 = lVar3;
    pppppppuStack_130 = &ppppppuStack_100;
    if ((bRam0000000003eb4900 & 1) == 0) {
      func_0x00f78a20(0x3d20bc0);
      func_0x00f78a20(0x3d3d438);
      func_0x00f78a20(0x3d410f8);
      func_0x00f78a20(0x3d41100);
      func_0x00f78a20(0x3d41108);
      func_0x00f78a20(0x3d79090);
      func_0x00f78a20(0x3d78f50);
      bRam0000000003eb4900 = 1;
    }
    lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar14,uRam0000000003d41108);
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0xb8) != 0)) {
      /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar3 + 0xb8),6,0,0);
      if ((*(long *)(lVar14 + 0x70) != 0) &&
         (lVar3 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(*(long *)(lVar14 + 0x70),0,0),
         lVar3 != 0)) {
        uVar9 = 0x3d79000;
        lVar6 = 0x3d41100;
        Atlas_Gameplay_Kart_KartFEAnimator__ExitFEScreen(lVar3,0);
        /*Atlas.Audio.UIAudio$$Stop*/ func_0x01516abc(/*STR('event:/UI/Front_End/ResultHooray')*/ uRam0000000003d79090,0);
        /*Atlas.Audio.UIAudio$$Stop*/ func_0x01516abc(/*STR('event:/Gameplay_SFX/FireJets2D')*/ uRam0000000003d78f50,0);
        lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar14,uRam0000000003d41100);
        unaff_x22 = 0x3d41100;
        if (lVar3 != 0) {
          if (*(long *)(lVar3 + 0x10) == 0) {
code_r0x014801ec:
            uVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar14,uRam0000000003d410f8);
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            puVar4 = (undefined8 *)/*DG.Tweening.DOTween$$Kill*/ func_0x016962e4(uVar9,0,0);
            if (*(long *)(lVar14 + 0x98) == 0) {
              return puVar4;
            }
            lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar14,uRam0000000003d41108);
            unaff_x22 = 0x3d20000;
            if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x80), lVar3 != 0)) {
              lVar14 = *(long *)(lVar14 + 0x98);
              if ((bRam0000000003eb5670 & 1) == 0) {
                func_0x00f78a20(0x3d23990,lVar14,0);
                bRam0000000003eb5670 = 1;
              }
              uVar5 = *(undefined8 *)(lVar3 + 0x18);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              puVar4 = (undefined8 *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
              if ((int)puVar4 != 0) {
                lVar3 = *(long *)(lVar3 + 0x18);
                if (lVar3 == 0) {
                  auVar19 = func_0x00f78af4();
                  pcStack_158 = Core_Application_CoroutineRunner__Runner_d__13___ctor;
                  pppppppuStack_160 = &pppppppuStack_130;
                  puVar4 = (undefined8 *)/*System.Object$$.ctor*/ func_0x0294d018(auVar19._0_8_,0);
                  *(int *)(auVar19._0_8_ + 0x10) = auVar19._8_4_;
                  return puVar4;
                }
                if (lVar14 == 0) {
                  func_0x00f78a24(0x3d23938,0,0);
                  uVar10 = func_0x00f78aec();
                  uVar5 = func_0x00f78a24(0x3d7b500);
                  /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar10,uVar5,0);
                }
                else {
                  if (pcRam0000000003ec01d0 == (code *)0x0) {
                    pcRam0000000003ec01d0 =
                         (code *)func_0x00f789d4(
                                                "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                                );
                  }
                  uVar9 = (*pcRam0000000003ec01d0)(lVar3);
                  if ((uVar9 & 1) != 0) {
                    if (pcRam0000000003ec01e8 == (code *)0x0) {
                      pcRam0000000003ec01e8 =
                           (code *)func_0x00f789d4(
                                                  "UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)"
                                                  );
                    }
                    /* WARNING: Could not recover jumptable at 0x03248188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    puVar4 = (undefined8 *)(*pcRam0000000003ec01e8)(lVar3,lVar14);
                    return puVar4;
                  }
                  func_0x00f78a24(0x3d1fce8);
                  uVar10 = func_0x00f78aec();
                  uVar5 = func_0x00f78a24(0x3d6af80);
                  /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar10,uVar5,0);
                }
                uVar5 = func_0x00f78a24(0x3d5a8b8);
                auVar18 = func_0x00f78ac0(uVar10,uVar5);
                pcStack_158 = (code *)&UnityEngine_MonoBehaviour__StopCoroutineManaged;
                pppppppuStack_160 = &pppppppuStack_130;
                if (pcRam0000000003ec01e8 == (code *)0x0) {
                  pcRam0000000003ec01e8 =
                       (code *)func_0x00f789d4(
                                              "UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)"
                                              );
                }
                    /* WARNING: Could not recover jumptable at 0x03248254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                puVar4 = (undefined8 *)(*pcRam0000000003ec01e8)(auVar18._0_8_,auVar18._8_8_);
                return puVar4;
              }
              return puVar4;
            }
          }
          else {
            lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar14,uRam0000000003d41100);
            if (lVar3 != 0) {
              uVar9 = 1;
              do {
                unaff_x22 = lVar6;
                if (*(long *)(lVar3 + 0x10) == 0) break;
                if (*(int *)(*(long *)(lVar3 + 0x10) + 0x18) <= (int)uVar9) goto code_r0x014801ec;
                if (*(long *)(lVar14 + 0x70) == 0) break;
                Atlas_FrontEnd_FrontEndScene__SetKartHidden(*(long *)(lVar14 + 0x70),uVar9,0);
                uVar9 = (ulong)((int)uVar9 + 1);
                lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar14,uRam0000000003d41100);
              } while (lVar3 != 0);
            }
          }
        }
      }
    }
    puVar16 = &Atlas_UI_Screens_LeaguePodiumScreen__AnimateUIInRoutine;
    lVar3 = func_0x00f78af4();
  }
  else {
    uVar9 = *(ulong *)(lVar14 + 0x80);
    puVar16 = &UNK_0147fff8;
    lVar14 = lVar3;
    pppppppuVar15 = &ppppppuStack_100;
  }
  *(long *)((long)pppppppuVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)pppppppuVar1 + -0x28) = 0x3d41108;
  *(ulong *)((long)pppppppuVar1 + -0x20) = uVar9;
  *(long *)((long)pppppppuVar1 + -0x18) = lVar14;
  *(undefined8 ********)((long)pppppppuVar1 + -0x10) = pppppppuVar15;
  *(undefined **)((long)pppppppuVar1 + -8) = puVar16;
  if ((bRam0000000003eb4903 & 1) == 0) {
    func_0x00f78a20(0x3d27e60);
    bRam0000000003eb4903 = 1;
  }
  puVar4 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeaguePodiumScreen.<AnimateUIInRoutine>d__22_TypeInfo*/ uRam0000000003d27e60);
  /*Atlas.UI.Screens.LeaguePodiumScreen.<AnimateUIInRoutine>d__22$$.ctor*/ func_0x0155bcf4(puVar4,0,0);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[4] = lVar3;
    return puVar4;
  }
  lVar14 = func_0x00f78af4();
  *(undefined8 *)((long)pppppppuVar1 + -0x50) = 0;
  *(long *)((long)pppppppuVar1 + -0x48) = lVar3;
  *(undefined1 **)((long)pppppppuVar1 + -0x40) = (undefined1 *)((long)pppppppuVar1 + -0x10);
  *(undefined **)((long)pppppppuVar1 + -0x38) =
       &Atlas_UI_Screens_LeaguePodiumScreen__ContinuePressed;
  if ((bRam0000000003eb4904 & 1) == 0) {
    func_0x00f78a20(0x3d41108);
    bRam0000000003eb4904 = 1;
  }
  if (*(long *)(lVar14 + 0x98) != 0) {
    lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar14,uRam0000000003d41108);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) goto code_r0x014803a8;
    Core_Application_CoroutineRunner__StopCoroutine
              (*(long *)(lVar3 + 0x80),*(undefined8 *)(lVar14 + 0x98),0);
  }
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar14,uRam0000000003d41108);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x78) != 0)) {
    /*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(*(long *)(lVar3 + 0x78),1,0,0,0,0);
    *(undefined1 *)(lVar14 + 0xa8) = 1;
    return (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
code_r0x014803a8:
  lVar3 = func_0x00f78af4();
  *(long *)((long)pppppppuVar1 + -0x80) = unaff_x22;
  *(undefined8 *)((long)pppppppuVar1 + -0x78) = 0x3d27e60;
  *(undefined8 *)((long)pppppppuVar1 + -0x70) = 0x3d41108;
  *(long *)((long)pppppppuVar1 + -0x68) = lVar14;
  *(undefined1 **)((long)pppppppuVar1 + -0x60) = (undefined1 *)((long)pppppppuVar1 + -0x40);
  *(undefined **)((long)pppppppuVar1 + -0x58) = &Atlas_UI_Screens_LeaguePodiumScreen___ctor;
  if ((bRam0000000003eb4905 & 1) == 0) {
    func_0x00f78a20(0x3d2c768);
    bRam0000000003eb4905 = 1;
  }
  *(undefined8 *)((long)pppppppuVar1 + -0x60) = *(undefined8 *)((long)pppppppuVar1 + -0x60);
  *(undefined8 *)((long)pppppppuVar1 + -0x58) = *(undefined8 *)((long)pppppppuVar1 + -0x58);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c768 + 0x18) + 0xc0) + 0x38))();
    return puVar4;
  }
  auVar18 = func_0x00f78af4();
  puVar8 = auVar18._8_8_;
  puVar4 = auVar18._0_8_;
  uVar10 = puVar8[1];
  uVar5 = *puVar8;
  puVar4[2] = puVar8[2];
  puVar4[1] = uVar10;
  *puVar4 = uVar5;
  return puVar4;
code_r0x0147ff94:
  uVar5 = func_0x00f78b24();
  puVar16 = &Atlas_UI_Screens_LeaguePodiumScreen__OnCameraFlyThruComplete;
  lVar3 = func_0x00f78ac0(uVar5,0);
  goto code_r0x0147ffa0;
}



// ============================================================
// RVA: 0x147ffa0 | Atlas.UI.Screens.LeaguePodiumScreen.OnCameraFlyThruComplete
// ============================================================

/* WARNING: Possible PIC construction at 0x0147fff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bc20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bbf4) */
/* WARNING: Removing unreachable block (ram,0x0150bbfc) */
/* WARNING: Removing unreachable block (ram,0x0150bc14) */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x0147fff8) */
/* WARNING: Removing unreachable block (ram,0x0147fffc) */
/* WARNING: Removing unreachable block (ram,0x01480014) */
/* WARNING: Removing unreachable block (ram,0x0148001c) */
/* WARNING: Removing unreachable block (ram,0x0148002c) */
/* WARNING: Removing unreachable block (ram,0x01480044) */
/* WARNING: Removing unreachable block (ram,0x01480054) */
/* WARNING: Removing unreachable block (ram,0x0148005c) */
/* WARNING: Removing unreachable block (ram,0x0150b9fc) */
/* WARNING: Removing unreachable block (ram,0x0150ba14) */
/* WARNING: Removing unreachable block (ram,0x0150ba34) */
/* WARNING: Removing unreachable block (ram,0x0150ba20) */
/* WARNING: Removing unreachable block (ram,0x0150ba38) */
/* WARNING: Removing unreachable block (ram,0x0150ba50) */
/* WARNING: Removing unreachable block (ram,0x0150ba58) */
/* WARNING: Removing unreachable block (ram,0x0150ba78) */
/* WARNING: Removing unreachable block (ram,0x0150ba80) */
/* WARNING: Removing unreachable block (ram,0x0150ba70) */
/* WARNING: Removing unreachable block (ram,0x0150ba90) */
/* WARNING: Removing unreachable block (ram,0x0150ba98) */
/* WARNING: Removing unreachable block (ram,0x0150bab4) */
/* WARNING: Removing unreachable block (ram,0x0150bb24) */
/* WARNING: Removing unreachable block (ram,0x0150bb30) */
/* WARNING: Removing unreachable block (ram,0x0150bb4c) */
/* WARNING: Removing unreachable block (ram,0x0150bb44) */
/* WARNING: Removing unreachable block (ram,0x0150bb50) */
/* WARNING: Removing unreachable block (ram,0x0150bb74) */
/* WARNING: Removing unreachable block (ram,0x0150bb64) */
/* WARNING: Removing unreachable block (ram,0x0150bb78) */
/* WARNING: Removing unreachable block (ram,0x0150bb9c) */
/* WARNING: Removing unreachable block (ram,0x0150bb7c) */
/* WARNING: Removing unreachable block (ram,0x0150bba0) */
/* WARNING: Removing unreachable block (ram,0x0150bbc8) */
/* WARNING: Removing unreachable block (ram,0x0150bbe4) */
/* WARNING: Removing unreachable block (ram,0x0150bbbc) */
/* WARNING: Removing unreachable block (ram,0x0150bb88) */
/* WARNING: Removing unreachable block (ram,0x0150babc) */
/* WARNING: Removing unreachable block (ram,0x0150baa8) */
/* WARNING: Removing unreachable block (ram,0x0150bad0) */
/* WARNING: Removing unreachable block (ram,0x0150bad4) */
/* WARNING: Removing unreachable block (ram,0x0150bab0) */
/* WARNING: Removing unreachable block (ram,0x0150bae4) */
/* WARNING: Removing unreachable block (ram,0x0150bb14) */
/* WARNING: Removing unreachable block (ram,0x0150baf4) */
/* WARNING: Removing unreachable block (ram,0x0150bc24) */
/* WARNING: Removing unreachable block (ram,0x0150bc44) */
/* WARNING: Removing unreachable block (ram,0x0150bc2c) */
/* WARNING: Removing unreachable block (ram,0x0150bc48) */
/* WARNING: Removing unreachable block (ram,0x0150bcb4) */
/* WARNING: Removing unreachable block (ram,0x0150bc5c) */
/* WARNING: Removing unreachable block (ram,0x0150bcc0) */
/* WARNING: Removing unreachable block (ram,0x0150bc68) */
/* WARNING: Removing unreachable block (ram,0x0150bcc4) */
/* WARNING: Removing unreachable block (ram,0x0150bce8) */
/* WARNING: Removing unreachable block (ram,0x0150bce0) */
/* WARNING: Removing unreachable block (ram,0x0150bcec) */
/* WARNING: Removing unreachable block (ram,0x0150bc78) */
/* WARNING: Removing unreachable block (ram,0x0150bc80) */
/* WARNING: Removing unreachable block (ram,0x0150bc94) */
/* WARNING: Removing unreachable block (ram,0x0150bca0) */
/* WARNING: Removing unreachable block (ram,0x0150c5a8) */
/* WARNING: Removing unreachable block (ram,0x0150c5dc) */
/* WARNING: Removing unreachable block (ram,0x0150c5fc) */
/* WARNING: Removing unreachable block (ram,0x0150c604) */
/* WARNING: Removing unreachable block (ram,0x0150c610) */
/* WARNING: Removing unreachable block (ram,0x0150c644) */
/* WARNING: Removing unreachable block (ram,0x0150c6c0) */
/* WARNING: Removing unreachable block (ram,0x0150c6d4) */
/* WARNING: Removing unreachable block (ram,0x0150c6d8) */
/* WARNING: Removing unreachable block (ram,0x0150c6c4) */
/* WARNING: Removing unreachable block (ram,0x0150c64c) */
/* WARNING: Removing unreachable block (ram,0x0150c650) */
/* WARNING: Removing unreachable block (ram,0x0150c6cc) */
/* WARNING: Removing unreachable block (ram,0x0150c658) */
/* WARNING: Removing unreachable block (ram,0x0150c65c) */
/* WARNING: Removing unreachable block (ram,0x0150c66c) */
/* WARNING: Removing unreachable block (ram,0x0150c67c) */
/* WARNING: Removing unreachable block (ram,0x0150c724) */
/* WARNING: Removing unreachable block (ram,0x0150c72c) */
/* WARNING: Removing unreachable block (ram,0x0150c734) */
/* WARNING: Removing unreachable block (ram,0x0150c740) */
/* WARNING: Removing unreachable block (ram,0x0150c768) */
/* WARNING: Removing unreachable block (ram,0x0150c77c) */
/* WARNING: Removing unreachable block (ram,0x0150c784) */
/* WARNING: Removing unreachable block (ram,0x0150c788) */
/* WARNING: Removing unreachable block (ram,0x0150c79c) */
/* WARNING: Removing unreachable block (ram,0x0150c7d4) */
/* WARNING: Removing unreachable block (ram,0x0150c7d8) */
/* WARNING: Removing unreachable block (ram,0x0150c838) */
/* WARNING: Removing unreachable block (ram,0x0150c87c) */
/* WARNING: Removing unreachable block (ram,0x018eea6c) */
/* WARNING: Removing unreachable block (ram,0x018eea70) */
/* WARNING: Removing unreachable block (ram,0x018eea78) */
/* WARNING: Removing unreachable block (ram,0x018eea7c) */
/* WARNING: Removing unreachable block (ram,0x0150c7a0) */
/* WARNING: Removing unreachable block (ram,0x0150c7b4) */

undefined8 * Atlas_UI_Screens_LeaguePodiumScreen__OnCameraFlyThruComplete(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 unaff_x22;
  undefined8 uVar8;
  undefined8 ****ppppuVar9;
  undefined *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined8 ***pppuStack_40;
  undefined *puStack_38;
  
  puVar1 = &stack0xffffffffffffffd0;
  if ((bRam0000000003eb4901 & 1) == 0) {
    func_0x00f78a20(0x3d41108);
    bRam0000000003eb4901 = 1;
  }
  lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41108);
  if (lVar2 == 0) {
    lVar2 = func_0x00f78af4();
    puVar1 = &stack0xffffffffffffff90;
    puStack_38 = &Atlas_UI_Screens_LeaguePodiumScreen__OnAfterExit;
    ppppuVar9 = &pppuStack_40;
    uVar7 = 0x3eb4000;
    pppuStack_40 = (undefined8 ***)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb4900 & 1) == 0) {
      func_0x00f78a20(0x3d20bc0);
      func_0x00f78a20(0x3d3d438);
      func_0x00f78a20(0x3d410f8);
      func_0x00f78a20(0x3d41100);
      func_0x00f78a20(0x3d41108);
      func_0x00f78a20(0x3d79090);
      func_0x00f78a20(0x3d78f50);
      bRam0000000003eb4900 = 1;
    }
    lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar2,uRam0000000003d41108);
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0xb8) != 0)) {
      /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar3 + 0xb8),6,0,0);
      if ((*(long *)(lVar2 + 0x70) != 0) &&
         (lVar3 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(*(long *)(lVar2 + 0x70),0,0),
         lVar3 != 0)) {
        uVar7 = 0x3d79000;
        uVar8 = 0x3d41100;
        Atlas_Gameplay_Kart_KartFEAnimator__ExitFEScreen(lVar3,0);
        /*Atlas.Audio.UIAudio$$Stop*/ func_0x01516abc(/*STR('event:/UI/Front_End/ResultHooray')*/ uRam0000000003d79090,0);
        /*Atlas.Audio.UIAudio$$Stop*/ func_0x01516abc(/*STR('event:/Gameplay_SFX/FireJets2D')*/ uRam0000000003d78f50,0);
        lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar2,uRam0000000003d41100);
        unaff_x22 = 0x3d41100;
        if (lVar3 != 0) {
          if (*(long *)(lVar3 + 0x10) == 0) {
code_r0x014801ec:
            uVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar2,uRam0000000003d410f8);
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            puVar4 = (undefined8 *)/*DG.Tweening.DOTween$$Kill*/ func_0x016962e4(uVar7,0,0);
            if (*(long *)(lVar2 + 0x98) == 0) {
              return puVar4;
            }
            lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar2,uRam0000000003d41108);
            unaff_x22 = 0x3d20000;
            if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x80), lVar3 != 0)) {
              lVar2 = *(long *)(lVar2 + 0x98);
              if ((bRam0000000003eb5670 & 1) == 0) {
                func_0x00f78a20(0x3d23990,lVar2,0);
                bRam0000000003eb5670 = 1;
              }
              uVar8 = *(undefined8 *)(lVar3 + 0x18);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              puVar4 = (undefined8 *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
              if ((int)puVar4 == 0) {
                return puVar4;
              }
              lVar3 = *(long *)(lVar3 + 0x18);
              if (lVar3 == 0) {
                auVar12 = func_0x00f78af4();
                puVar4 = (undefined8 *)/*System.Object$$.ctor*/ func_0x0294d018(auVar12._0_8_,0);
                *(int *)(auVar12._0_8_ + 0x10) = auVar12._8_4_;
                return puVar4;
              }
              if (lVar2 == 0) {
                func_0x00f78a24(0x3d23938,0,0);
                uVar5 = func_0x00f78aec();
                uVar8 = func_0x00f78a24(0x3d7b500);
                /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar5,uVar8,0);
              }
              else {
                if (pcRam0000000003ec01d0 == (code *)0x0) {
                  pcRam0000000003ec01d0 =
                       (code *)func_0x00f789d4(
                                              "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                              );
                }
                uVar7 = (*pcRam0000000003ec01d0)(lVar3);
                if ((uVar7 & 1) != 0) {
                  if (pcRam0000000003ec01e8 == (code *)0x0) {
                    pcRam0000000003ec01e8 =
                         (code *)func_0x00f789d4(
                                                "UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)"
                                                );
                  }
                    /* WARNING: Could not recover jumptable at 0x03248188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  puVar4 = (undefined8 *)(*pcRam0000000003ec01e8)(lVar3,lVar2);
                  return puVar4;
                }
                func_0x00f78a24(0x3d1fce8);
                uVar5 = func_0x00f78aec();
                uVar8 = func_0x00f78a24(0x3d6af80);
                /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar5,uVar8,0);
              }
              uVar8 = func_0x00f78a24(0x3d5a8b8);
              auVar11 = func_0x00f78ac0(uVar5,uVar8);
              if (pcRam0000000003ec01e8 == (code *)0x0) {
                pcRam0000000003ec01e8 =
                     (code *)func_0x00f789d4(
                                            "UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)"
                                            );
              }
                    /* WARNING: Could not recover jumptable at 0x03248254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              puVar4 = (undefined8 *)(*pcRam0000000003ec01e8)(auVar11._0_8_,auVar11._8_8_);
              return puVar4;
            }
          }
          else {
            lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar2,uRam0000000003d41100);
            if (lVar3 != 0) {
              uVar7 = 1;
              do {
                unaff_x22 = uVar8;
                if (*(long *)(lVar3 + 0x10) == 0) break;
                if (*(int *)(*(long *)(lVar3 + 0x10) + 0x18) <= (int)uVar7) goto code_r0x014801ec;
                if (*(long *)(lVar2 + 0x70) == 0) break;
                Atlas_FrontEnd_FrontEndScene__SetKartHidden(*(long *)(lVar2 + 0x70),uVar7,0);
                uVar7 = (ulong)((int)uVar7 + 1);
                lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar2,uRam0000000003d41100);
              } while (lVar3 != 0);
            }
          }
        }
      }
    }
    puVar10 = &Atlas_UI_Screens_LeaguePodiumScreen__AnimateUIInRoutine;
    param_1 = func_0x00f78af4();
  }
  else {
    uVar7 = *(ulong *)(lVar2 + 0x80);
    puVar10 = (undefined *)0x147fff8;
    lVar2 = param_1;
    ppppuVar9 = (undefined8 ****)&stack0xfffffffffffffff0;
  }
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = 0x3d41108;
  *(ulong *)(puVar1 + -0x20) = uVar7;
  *(long *)(puVar1 + -0x18) = lVar2;
  *(undefined8 *****)(puVar1 + -0x10) = ppppuVar9;
  *(undefined **)(puVar1 + -8) = puVar10;
  if ((bRam0000000003eb4903 & 1) == 0) {
    func_0x00f78a20(0x3d27e60);
    bRam0000000003eb4903 = 1;
  }
  puVar4 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeaguePodiumScreen.<AnimateUIInRoutine>d__22_TypeInfo*/ uRam0000000003d27e60);
  /*Atlas.UI.Screens.LeaguePodiumScreen.<AnimateUIInRoutine>d__22$$.ctor*/ func_0x0155bcf4(puVar4,0,0);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[4] = param_1;
    return puVar4;
  }
  lVar2 = func_0x00f78af4();
  *(undefined8 *)(puVar1 + -0x50) = 0;
  *(long *)(puVar1 + -0x48) = param_1;
  *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x10;
  *(undefined **)(puVar1 + -0x38) = &Atlas_UI_Screens_LeaguePodiumScreen__ContinuePressed;
  if ((bRam0000000003eb4904 & 1) == 0) {
    func_0x00f78a20(0x3d41108);
    bRam0000000003eb4904 = 1;
  }
  if (*(long *)(lVar2 + 0x98) != 0) {
    lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar2,uRam0000000003d41108);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) goto code_r0x014803a8;
    Core_Application_CoroutineRunner__StopCoroutine
              (*(long *)(lVar3 + 0x80),*(undefined8 *)(lVar2 + 0x98),0);
  }
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar2,uRam0000000003d41108);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x78) != 0)) {
    /*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(*(long *)(lVar3 + 0x78),1,0,0,0,0);
    *(undefined1 *)(lVar2 + 0xa8) = 1;
    return (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
code_r0x014803a8:
  lVar3 = func_0x00f78af4();
  *(undefined8 *)(puVar1 + -0x80) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x78) = 0x3d27e60;
  *(undefined8 *)(puVar1 + -0x70) = 0x3d41108;
  *(long *)(puVar1 + -0x68) = lVar2;
  *(undefined1 **)(puVar1 + -0x60) = puVar1 + -0x40;
  *(undefined **)(puVar1 + -0x58) = &Atlas_UI_Screens_LeaguePodiumScreen___ctor;
  if ((bRam0000000003eb4905 & 1) == 0) {
    func_0x00f78a20(0x3d2c768);
    bRam0000000003eb4905 = 1;
  }
  *(undefined8 *)(puVar1 + -0x60) = *(undefined8 *)(puVar1 + -0x60);
  *(undefined8 *)(puVar1 + -0x58) = *(undefined8 *)(puVar1 + -0x58);
  if (lVar3 == 0) {
    auVar11 = func_0x00f78af4();
    puVar6 = auVar11._8_8_;
    puVar4 = auVar11._0_8_;
    uVar5 = puVar6[1];
    uVar8 = *puVar6;
    puVar4[2] = puVar6[2];
    puVar4[1] = uVar5;
    *puVar4 = uVar8;
    return puVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar4 = (undefined8 *)
           (*(code *)**(undefined8 **)
                       (*(long *)(*(long *)(lRam0000000003d2c768 + 0x18) + 0xc0) + 0x38))();
  return puVar4;
}



// ============================================================
// RVA: 0x1480080 | Atlas.UI.Screens.LeaguePodiumScreen.OnAfterExit
// ============================================================

undefined8 * Atlas_UI_Screens_LeaguePodiumScreen__OnAfterExit(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  
  if ((bRam0000000003eb4900 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d3d438);
    func_0x00f78a20(0x3d410f8);
    func_0x00f78a20(0x3d41100);
    func_0x00f78a20(0x3d41108);
    func_0x00f78a20(0x3d79090);
    func_0x00f78a20(0x3d78f50);
    bRam0000000003eb4900 = 1;
  }
  lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41108);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0xb8) != 0)) {
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar1 + 0xb8),6,0,0);
    if ((*(long *)(param_1 + 0x70) != 0) &&
       (lVar1 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(*(long *)(param_1 + 0x70),0,0),
       lVar1 != 0)) {
      Atlas_Gameplay_Kart_KartFEAnimator__ExitFEScreen(lVar1,0);
      /*Atlas.Audio.UIAudio$$Stop*/ func_0x01516abc(/*STR('event:/UI/Front_End/ResultHooray')*/ uRam0000000003d79090,0);
      /*Atlas.Audio.UIAudio$$Stop*/ func_0x01516abc(/*STR('event:/Gameplay_SFX/FireJets2D')*/ uRam0000000003d78f50,0);
      lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41100);
      if (lVar1 != 0) {
        if (*(long *)(lVar1 + 0x10) == 0) {
LAB_014801ec:
          uVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d410f8);
          if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          puVar3 = (undefined8 *)/*DG.Tweening.DOTween$$Kill*/ func_0x016962e4(uVar2,0,0);
          if (*(long *)(param_1 + 0x98) == 0) {
            return puVar3;
          }
          lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41108);
          if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x80), lVar1 != 0)) {
            lVar4 = *(long *)(param_1 + 0x98);
            if ((bRam0000000003eb5670 & 1) == 0) {
              func_0x00f78a20(0x3d23990,lVar4,0);
              bRam0000000003eb5670 = 1;
            }
            uVar2 = *(undefined8 *)(lVar1 + 0x18);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            puVar3 = (undefined8 *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar2,0,0);
            if ((int)puVar3 == 0) {
              return puVar3;
            }
            lVar1 = *(long *)(lVar1 + 0x18);
            if (lVar1 == 0) {
              auVar10 = func_0x00f78af4();
              puVar3 = (undefined8 *)/*System.Object$$.ctor*/ func_0x0294d018(auVar10._0_8_,0);
              *(int *)(auVar10._0_8_ + 0x10) = auVar10._8_4_;
              return puVar3;
            }
            if (lVar4 == 0) {
              func_0x00f78a24(0x3d23938,0,0);
              uVar6 = func_0x00f78aec();
              uVar2 = func_0x00f78a24(0x3d7b500);
              /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar6,uVar2,0);
            }
            else {
              if (pcRam0000000003ec01d0 == (code *)0x0) {
                pcRam0000000003ec01d0 =
                     (code *)func_0x00f789d4(
                                            "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                            );
              }
              uVar5 = (*pcRam0000000003ec01d0)(lVar1);
              if ((uVar5 & 1) != 0) {
                if (pcRam0000000003ec01e8 == (code *)0x0) {
                  pcRam0000000003ec01e8 =
                       (code *)func_0x00f789d4(
                                              "UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)"
                                              );
                }
                    /* WARNING: Could not recover jumptable at 0x03248188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                puVar3 = (undefined8 *)(*pcRam0000000003ec01e8)(lVar1,lVar4);
                return puVar3;
              }
              func_0x00f78a24(0x3d1fce8);
              uVar6 = func_0x00f78aec();
              uVar2 = func_0x00f78a24(0x3d6af80);
              /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar6,uVar2,0);
            }
            uVar2 = func_0x00f78a24(0x3d5a8b8);
            auVar9 = func_0x00f78ac0(uVar6,uVar2);
            if (pcRam0000000003ec01e8 == (code *)0x0) {
              pcRam0000000003ec01e8 =
                   (code *)func_0x00f789d4(
                                          "UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)"
                                          );
            }
                    /* WARNING: Could not recover jumptable at 0x03248254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar3 = (undefined8 *)(*pcRam0000000003ec01e8)(auVar9._0_8_,auVar9._8_8_);
            return puVar3;
          }
        }
        else {
          lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41100);
          if (lVar1 != 0) {
            iVar8 = 1;
            do {
              if (*(long *)(lVar1 + 0x10) == 0) break;
              if (*(int *)(*(long *)(lVar1 + 0x10) + 0x18) <= iVar8) goto LAB_014801ec;
              if (*(long *)(param_1 + 0x70) == 0) break;
              Atlas_FrontEnd_FrontEndScene__SetKartHidden(*(long *)(param_1 + 0x70),iVar8,0);
              iVar8 = iVar8 + 1;
              lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41100);
            } while (lVar1 != 0);
          }
        }
      }
    }
  }
  uVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4903 & 1) == 0) {
    func_0x00f78a20(0x3d27e60);
    bRam0000000003eb4903 = 1;
  }
  puVar3 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeaguePodiumScreen.<AnimateUIInRoutine>d__22_TypeInfo*/ uRam0000000003d27e60);
  /*Atlas.UI.Screens.LeaguePodiumScreen.<AnimateUIInRoutine>d__22$$.ctor*/ func_0x0155bcf4(puVar3,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[4] = uVar2;
    return puVar3;
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb4904 & 1) == 0) {
    func_0x00f78a20(0x3d41108);
    bRam0000000003eb4904 = 1;
  }
  if (*(long *)(lVar1 + 0x98) != 0) {
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar1,uRam0000000003d41108);
    if ((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) goto code_r0x014803a8;
    Core_Application_CoroutineRunner__StopCoroutine
              (*(long *)(lVar4 + 0x80),*(undefined8 *)(lVar1 + 0x98),0);
  }
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar1,uRam0000000003d41108);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x78) != 0)) {
    /*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(*(long *)(lVar4 + 0x78),1,0,0,0,0,in_x6,in_x7,puVar3,uVar2);
    *(undefined1 *)(lVar1 + 0xa8) = 1;
    return (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
code_r0x014803a8:
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb4905 & 1) == 0) {
    func_0x00f78a20(0x3d2c768);
    bRam0000000003eb4905 = 1;
  }
  if (lVar1 == 0) {
    auVar9 = func_0x00f78af4();
    puVar7 = auVar9._8_8_;
    puVar3 = auVar9._0_8_;
    uVar6 = puVar7[1];
    uVar2 = *puVar7;
    puVar3[2] = puVar7[2];
    puVar3[1] = uVar6;
    *puVar3 = uVar2;
    return puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar3 = (undefined8 *)
           (*(code *)**(undefined8 **)
                       (*(long *)(*(long *)(lRam0000000003d2c768 + 0x18) + 0xc0) + 0x38))();
  return puVar3;
}



// ============================================================
// RVA: 0x1480288 | Atlas.UI.Screens.LeaguePodiumScreen.AnimateUIInRoutine
// ============================================================

undefined8 * Atlas_UI_Screens_LeaguePodiumScreen__AnimateUIInRoutine(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb4903 & 1) == 0) {
    func_0x00f78a20(0x3d27e60);
    bRam0000000003eb4903 = 1;
  }
  puVar1 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.LeaguePodiumScreen.<AnimateUIInRoutine>d__22_TypeInfo*/ uRam0000000003d27e60);
  /*Atlas.UI.Screens.LeaguePodiumScreen.<AnimateUIInRoutine>d__22$$.ctor*/ func_0x0155bcf4(puVar1,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = param_1;
    return puVar1;
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4904 & 1) == 0) {
    func_0x00f78a20(0x3d41108);
    bRam0000000003eb4904 = 1;
  }
  if (*(long *)(lVar2 + 0x98) != 0) {
    lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar2,uRam0000000003d41108);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) goto code_r0x014803a8;
    Core_Application_CoroutineRunner__StopCoroutine
              (*(long *)(lVar3 + 0x80),*(undefined8 *)(lVar2 + 0x98),0);
  }
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar2,uRam0000000003d41108);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x78) != 0)) {
    /*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(*(long *)(lVar3 + 0x78),1,0,0,0,0,in_x6,in_x7,puVar1,param_1);
    *(undefined1 *)(lVar2 + 0xa8) = 1;
    return (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
code_r0x014803a8:
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4905 & 1) == 0) {
    func_0x00f78a20(0x3d2c768);
    bRam0000000003eb4905 = 1;
  }
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c768 + 0x18) + 0xc0) + 0x38))();
    return puVar1;
  }
  auVar7 = func_0x00f78af4();
  puVar4 = auVar7._8_8_;
  puVar1 = auVar7._0_8_;
  uVar6 = puVar4[1];
  uVar5 = *puVar4;
  puVar1[2] = puVar4[2];
  puVar1[1] = uVar6;
  *puVar1 = uVar5;
  return puVar1;
}



// ============================================================
// RVA: 0x14802fc | Atlas.UI.Screens.LeaguePodiumScreen.ContinuePressed
// ============================================================

undefined8 * Atlas_UI_Screens_LeaguePodiumScreen__ContinuePressed(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb4904 & 1) == 0) {
    func_0x00f78a20(0x3d41108);
    bRam0000000003eb4904 = 1;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41108);
    if ((lVar1 == 0) || (*(long *)(lVar1 + 0x80) == 0)) goto LAB_014803a8;
    Core_Application_CoroutineRunner__StopCoroutine
              (*(long *)(lVar1 + 0x80),*(undefined8 *)(param_1 + 0x98),0);
  }
  lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41108);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x78) != 0)) {
    /*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(*(long *)(lVar1 + 0x78),1,0,0,0,0);
    *(undefined1 *)(param_1 + 0xa8) = 1;
    return (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
LAB_014803a8:
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb4905 & 1) == 0) {
    func_0x00f78a20(0x3d2c768);
    bRam0000000003eb4905 = 1;
  }
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar2 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c768 + 0x18) + 0xc0) + 0x38))();
    return puVar2;
  }
  auVar6 = func_0x00f78af4();
  puVar3 = auVar6._8_8_;
  puVar2 = auVar6._0_8_;
  uVar5 = puVar3[1];
  uVar4 = *puVar3;
  puVar2[2] = puVar3[2];
  puVar2[1] = uVar5;
  *puVar2 = uVar4;
  return puVar2;
}



// ============================================================
// RVA: 0x14803ac | Atlas.UI.Screens.LeaguePodiumScreen..ctor
// ============================================================

void Atlas_UI_Screens_LeaguePodiumScreen___ctor(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb4905 & 1) == 0) {
    func_0x00f78a20(0x3d2c768);
    bRam0000000003eb4905 = 1;
  }
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c768 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar5 = func_0x00f78af4();
  puVar2 = auVar5._8_8_;
  puVar1 = auVar5._0_8_;
  uVar4 = puVar2[1];
  uVar3 = *puVar2;
  puVar1[2] = puVar2[2];
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  return;
}



