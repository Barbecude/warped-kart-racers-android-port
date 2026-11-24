// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Audio.SpeechManager

// ============================================================
// RVA: 0x14fdbe4 | Atlas.Audio.SpeechManager.get_CanSpeak
// ============================================================

/* WARNING: Possible PIC construction at 0x014fe0ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014fe0f0) */
/* WARNING: Removing unreachable block (ram,0x014fe0f8) */
/* WARNING: Removing unreachable block (ram,0x014fe10c) */
/* WARNING: Removing unreachable block (ram,0x014fe114) */
/* WARNING: Removing unreachable block (ram,0x014fe11c) */
/* WARNING: Removing unreachable block (ram,0x014fe1c0) */
/* WARNING: Removing unreachable block (ram,0x014fe1d0) */
/* WARNING: Removing unreachable block (ram,0x014fe1d8) */
/* WARNING: Removing unreachable block (ram,0x014fe1f4) */
/* WARNING: Removing unreachable block (ram,0x014fe200) */
/* WARNING: Removing unreachable block (ram,0x014fe130) */
/* WARNING: Removing unreachable block (ram,0x014fe15c) */
/* WARNING: Removing unreachable block (ram,0x014fe190) */
/* WARNING: Removing unreachable block (ram,0x014fe19c) */
/* WARNING: Removing unreachable block (ram,0x014fe16c) */
/* WARNING: Removing unreachable block (ram,0x014fe1b0) */
/* WARNING: Removing unreachable block (ram,0x014fe174) */
/* WARNING: Removing unreachable block (ram,0x014fe1b8) */
/* WARNING: Removing unreachable block (ram,0x014fe1bc) */
/* WARNING: Removing unreachable block (ram,0x014fe184) */

ulong Atlas_Audio_SpeechManager__get_CanSpeak(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 ***pppuVar12;
  undefined *puVar13;
  undefined1 auVar14 [16];
  long alStack_120 [8];
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (*(char *)(param_1 + 0x34) == '\0') {
    uVar2 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == 0) {
      auVar14 = func_0x00f78af4();
      lVar4 = auVar14._0_8_;
      puStack_18 = &Atlas_Audio_SpeechManager__Init;
      uVar11 = 0x3eb4000;
      lVar10 = 0x3d1c548;
      uVar9 = 0x3d30010;
      lVar5 = param_3;
      puStack_20 = &stack0xfffffffffffffff0;
      if ((bRam0000000003eb4cd6 & 1) == 0) {
        puStack_20 = &stack0xfffffffffffffff0;
        func_0x00f78a20(0x3d1ff30);
        func_0x00f78a20(0x3d2fae8);
        func_0x00f78a20(0x3d30018);
        func_0x00f78a20(0x3d30010);
        func_0x00f78a20(0x3d1c548);
        func_0x00f78a20(0x3d75ec0);
        func_0x00f78a20(0x3d75eb8);
        func_0x00f78a20(0x3d75eb0);
        func_0x00f78a20(0x3d75ea8);
        func_0x00f78a20(0x3d71908);
        func_0x00f78a20(0x3d70de0);
        func_0x00f78a20(0x3d75ea0);
        func_0x00f78a20(0x3d71238);
        func_0x00f78a20(0x3d6aaf0);
        func_0x00f78a20(0x3d71918);
        func_0x00f78a20(0x3d764c8);
        func_0x00f78a20(0x3d75e98);
        bRam0000000003eb4cd6 = 1;
      }
      *(undefined1 *)(lVar4 + 0x34) = 0;
      *(long *)(lVar4 + 0x10) = auVar14._8_8_;
      *(long *)(lVar4 + 0x20) = param_3;
      uVar2 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>_TypeInfo*/ uRam0000000003d1c548);
      /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$.ctor*/ func_0x01ef3164(uVar2,uRam0000000003d30010);
      *(ulong *)(lVar4 + 0x28) = uVar2;
      lVar7 = 0;
      if ((param_3 != 0) && (lVar7 = *(long *)(param_3 + 0x20), lVar7 != 0)) {
        if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
          uVar2 = 0;
          uVar9 = 0x3d30018;
          uVar6 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
          lVar10 = lVar7 + 0x28;
          do {
            uStack_80 = 0x3d30018;
            if (uVar6 <= uVar2) goto code_r0x014fdfc4;
            if (*(long *)(lVar4 + 0x28) == 0) goto code_r0x014fdfc0;
            lVar5 = *(long *)(lVar10 + -8);
            /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$Add*/ func_0x01ef3698();
            uVar2 = uVar2 + 1;
            uVar6 = (ulong)*(uint *)(lVar7 + 0x18);
            lVar10 = lVar10 + 0x10;
          } while ((long)uVar2 < (long)(int)*(uint *)(lVar7 + 0x18));
        }
        uVar9 = 0x3d1ff30;
        lVar10 = 0x3d75000;
        uVar3 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
        /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638678(uVar3,0);
        *(undefined8 *)(lVar4 + 0x18) = uVar3;
        lVar8 = *(long *)(lVar4 + 0x48);
        uVar2 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
        lVar5 = 1;
        /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar2,/*STR('VO/CharacterInteractions/Collision/VO_Collision_Size')*/ uRam0000000003d75e98,1,0,0);
        lVar7 = 0;
        if (lVar8 != 0) {
          lVar10 = 0x3d2fae8;
          uVar11 = 0x3d75000;
          /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$Add*/ func_0x01ed77c0(lVar8,/*STR('Collision')*/ uRam0000000003d6aaf0,uVar2,uRam0000000003d2fae8);
          lVar8 = *(long *)(lVar4 + 0x48);
          uVar2 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
          lVar5 = 1;
          /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar2,/*STR('VO/CharacterInteractions/OverTake/VO_Overtaking')*/ uRam0000000003d75ea0,1,0,0);
          lVar7 = 0;
          if (lVar8 != 0) {
            uVar11 = 0x3d75000;
            /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$Add*/ func_0x01ed77c0(lVar8,/*STR('Overtake')*/ uRam0000000003d70de0,uVar2,uRam0000000003d2fae8);
            lVar8 = *(long *)(lVar4 + 0x48);
            uVar2 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
            lVar5 = 1;
            /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar2,/*STR('VO/CharacterInteractions/PickUp/VO_PickUp')*/ uRam0000000003d75ea8,1,0,0);
            lVar7 = 0;
            if (lVar8 != 0) {
              uVar11 = 0x3d75000;
              /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$Add*/ func_0x01ed77c0(lVar8,/*STR('Pickup')*/ uRam0000000003d71238,uVar2,uRam0000000003d2fae8);
              lVar8 = *(long *)(lVar4 + 0x48);
              uVar2 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
              lVar5 = 1;
              /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar2,/*STR('VO/CharacterInteractions/Race Events/VO_RaceEvent')*/ uRam0000000003d75eb8,1,0,0);
              lVar7 = 0;
              if (lVar8 != 0) {
                uVar11 = 0x3d75000;
                /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$Add*/ func_0x01ed77c0(lVar8,/*STR('RaceEvent')*/ uRam0000000003d71908,uVar2,uRam0000000003d2fae8);
                lVar8 = *(long *)(lVar4 + 0x48);
                uVar2 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
                lVar5 = 1;
                /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar2,/*STR('VO/CharacterInteractions/Race Events/AllCharacters_TurdHit')*/ uRam0000000003d75eb0,1,0,0);
                lVar7 = 0;
                if (lVar8 != 0) {
                  uVar11 = 0x3d75000;
                  /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$Add*/ func_0x01ed77c0(lVar8,/*STR('RaceEventTurdHit')*/ uRam0000000003d71918,uVar2,uRam0000000003d2fae8);
                  lVar8 = *(long *)(lVar4 + 0x48);
                  uVar2 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
                  lVar5 = 1;
                  /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar2,/*STR('VO/CharacterInteractions/WinLose/WinLose')*/ uRam0000000003d75ec0,1,0,0);
                  lVar7 = 0;
                  if (lVar8 != 0) {
                    uVar2 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$Add*/ func_0x01ed77c0(lVar8,/*STR('WinLose')*/ uRam0000000003d764c8,uVar2,uRam0000000003d2fae8);
                    *(undefined1 *)(lVar4 + 0x3c) = 0;
                    *(undefined4 *)(lVar4 + 0x38) = 0xbf800000;
                    return uVar2;
                  }
                }
              }
            }
          }
        }
      }
code_r0x014fdfc0:
      func_0x00f78af4();
      uStack_80 = uVar9;
code_r0x014fdfc4:
      uVar9 = func_0x00f78b24();
      auVar14 = func_0x00f78ac0(uVar9,0);
      lVar8 = auVar14._0_8_;
      puStack_58 = &Atlas_Audio_SpeechManager__Init;
      uStack_90 = uVar11;
      lStack_88 = lVar10;
      uStack_78 = uVar2;
      lStack_70 = lVar7;
      lStack_68 = lVar4;
      ppuStack_60 = &puStack_20;
      if ((bRam0000000003eb4cd7 & 1) == 0) {
        func_0x00f78a20(0x3d1ff30);
        bRam0000000003eb4cd7 = 1;
      }
      *(undefined1 *)(lVar8 + 0x34) = 1;
      *(long *)(lVar8 + 0x10) = auVar14._8_8_;
      uVar9 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
      uVar2 = /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638678(uVar9,0);
      *(undefined8 *)(lVar8 + 0x18) = uVar9;
      if (lVar5 != 0) {
        *(undefined8 *)(lVar8 + 0x48) = *(undefined8 *)(lVar5 + 0x48);
        *(undefined1 *)(lVar8 + 0x3c) = 0;
        *(undefined4 *)(lVar8 + 0x38) = 0xbf800000;
        return uVar2;
      }
      lVar10 = func_0x00f78af4();
      uStack_c0 = 0x3d1ff30;
      puStack_98 = &Atlas_Audio_SpeechManager__DeInit;
      pppuVar12 = &ppuStack_a0;
      uVar11 = 0x3eb4000;
      uStack_b8 = uVar9;
      lStack_b0 = lVar5;
      lStack_a8 = lVar8;
      ppuStack_a0 = &ppuStack_60;
      if ((bRam0000000003eb4cd8 & 1) == 0) {
        func_0x00f78a20(0x3d2fb00);
        func_0x00f78a20(0x3d2fb08);
        func_0x00f78a20(0x3d34e08);
        func_0x00f78a20(0x3d34e10);
        func_0x00f78a20(0x3d34e18);
        func_0x00f78a20(0x3d39098);
        bRam0000000003eb4cd8 = 1;
      }
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      puVar13 = &UNK_014fe0f0;
      puVar1 = auStack_e0;
      lVar5 = lVar10;
      while( true ) {
        *(undefined8 *)(puVar1 + -0x20) = uVar11;
        *(long *)(puVar1 + -0x18) = lVar10;
        *(undefined8 ****)(puVar1 + -0x10) = pppuVar12;
        *(undefined **)(puVar1 + -8) = puVar13;
        if ((bRam0000000003eb4cdd & 1) == 0) {
          func_0x00f78a20(0x3d3da20);
          bRam0000000003eb4cdd = 1;
        }
        if (*(long *)(lVar5 + 0x40) != 0) break;
        lVar4 = func_0x00f78af4();
        *(undefined8 *)(puVar1 + -0x40) = 0x3eb4000;
        *(long *)(puVar1 + -0x38) = lVar5;
        *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
        *(undefined **)(puVar1 + -0x28) = &Atlas_Audio_SpeechManager__Reset;
        if (*(long *)(lVar4 + 0x18) != 0) {
          /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(lVar4 + 0x18),0,0);
        }
        pppuVar12 = *(undefined8 ****)(puVar1 + -0x30);
        puVar13 = *(undefined **)(puVar1 + -0x28);
        uVar11 = *(undefined8 *)(puVar1 + -0x40);
        lVar10 = *(long *)(puVar1 + -0x38);
        puVar1 = puVar1 + -0x20;
        lVar5 = lVar4;
      }
      uVar2 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar5 + 0x40),uRam0000000003d3da20);
      if (*(char *)(lVar5 + 0x3c) == '\0') {
        *(undefined1 *)(lVar5 + 0x3c) = 1;
        *(undefined4 *)(lVar5 + 0x38) = 0x3e800000;
      }
      return uVar2;
    }
    uVar2 = (ulong)(*(char *)(*(long *)(param_1 + 0x10) + 0xcb) != '\0');
  }
  return uVar2;
}



// ============================================================
// RVA: 0x14fdc1c | Atlas.Audio.SpeechManager.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x014fe0ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014fe0f0) */
/* WARNING: Removing unreachable block (ram,0x014fe0f8) */
/* WARNING: Removing unreachable block (ram,0x014fe10c) */
/* WARNING: Removing unreachable block (ram,0x014fe114) */
/* WARNING: Removing unreachable block (ram,0x014fe11c) */
/* WARNING: Removing unreachable block (ram,0x014fe1c0) */
/* WARNING: Removing unreachable block (ram,0x014fe1d0) */
/* WARNING: Removing unreachable block (ram,0x014fe1d8) */
/* WARNING: Removing unreachable block (ram,0x014fe1f4) */
/* WARNING: Removing unreachable block (ram,0x014fe200) */
/* WARNING: Removing unreachable block (ram,0x014fe130) */
/* WARNING: Removing unreachable block (ram,0x014fe15c) */
/* WARNING: Removing unreachable block (ram,0x014fe190) */
/* WARNING: Removing unreachable block (ram,0x014fe19c) */
/* WARNING: Removing unreachable block (ram,0x014fe16c) */
/* WARNING: Removing unreachable block (ram,0x014fe1b0) */
/* WARNING: Removing unreachable block (ram,0x014fe174) */
/* WARNING: Removing unreachable block (ram,0x014fe1b8) */
/* WARNING: Removing unreachable block (ram,0x014fe1bc) */
/* WARNING: Removing unreachable block (ram,0x014fe184) */

void Atlas_Audio_SpeechManager__Init(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 ***pppuVar11;
  undefined *puVar12;
  undefined1 auVar13 [16];
  long alStack_110 [8];
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  uVar10 = 0x3eb4000;
  lVar9 = 0x3d1c548;
  uVar8 = 0x3d30010;
  lVar4 = param_3;
  if ((bRam0000000003eb4cd6 & 1) == 0) {
    func_0x00f78a20(0x3d1ff30);
    func_0x00f78a20(0x3d2fae8);
    func_0x00f78a20(0x3d30018);
    func_0x00f78a20(0x3d30010);
    func_0x00f78a20(0x3d1c548);
    func_0x00f78a20(0x3d75ec0);
    func_0x00f78a20(0x3d75eb8);
    func_0x00f78a20(0x3d75eb0);
    func_0x00f78a20(0x3d75ea8);
    func_0x00f78a20(0x3d71908);
    func_0x00f78a20(0x3d70de0);
    func_0x00f78a20(0x3d75ea0);
    func_0x00f78a20(0x3d71238);
    func_0x00f78a20(0x3d6aaf0);
    func_0x00f78a20(0x3d71918);
    func_0x00f78a20(0x3d764c8);
    func_0x00f78a20(0x3d75e98);
    bRam0000000003eb4cd6 = 1;
  }
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(long *)(param_1 + 0x20) = param_3;
  uVar2 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>_TypeInfo*/ uRam0000000003d1c548);
  /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$.ctor*/ func_0x01ef3164(uVar2,uRam0000000003d30010);
  *(ulong *)(param_1 + 0x28) = uVar2;
  lVar6 = 0;
  if ((param_3 != 0) && (lVar6 = *(long *)(param_3 + 0x20), lVar6 != 0)) {
    if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
      uVar2 = 0;
      uVar8 = 0x3d30018;
      uVar5 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      lVar9 = lVar6 + 0x28;
      do {
        uStack_70 = 0x3d30018;
        if (uVar5 <= uVar2) goto LAB_014fdfc4;
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_014fdfc0;
        lVar4 = *(long *)(lVar9 + -8);
        /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$Add*/ func_0x01ef3698();
        uVar2 = uVar2 + 1;
        uVar5 = (ulong)*(uint *)(lVar6 + 0x18);
        lVar9 = lVar9 + 0x10;
      } while ((long)uVar2 < (long)(int)*(uint *)(lVar6 + 0x18));
    }
    uVar8 = 0x3d1ff30;
    lVar9 = 0x3d75000;
    uVar3 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
    /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638678(uVar3,0);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    lVar7 = *(long *)(param_1 + 0x48);
    uVar2 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
    lVar4 = 1;
    /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar2,/*STR('VO/CharacterInteractions/Collision/VO_Collision_Size')*/ uRam0000000003d75e98,1,0,0);
    lVar6 = 0;
    if (lVar7 != 0) {
      lVar9 = 0x3d2fae8;
      uVar10 = 0x3d75000;
      /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$Add*/ func_0x01ed77c0(lVar7,/*STR('Collision')*/ uRam0000000003d6aaf0,uVar2,uRam0000000003d2fae8);
      lVar7 = *(long *)(param_1 + 0x48);
      uVar2 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
      lVar4 = 1;
      /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar2,/*STR('VO/CharacterInteractions/OverTake/VO_Overtaking')*/ uRam0000000003d75ea0,1,0,0);
      lVar6 = 0;
      if (lVar7 != 0) {
        uVar10 = 0x3d75000;
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$Add*/ func_0x01ed77c0(lVar7,/*STR('Overtake')*/ uRam0000000003d70de0,uVar2,uRam0000000003d2fae8);
        lVar7 = *(long *)(param_1 + 0x48);
        uVar2 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
        lVar4 = 1;
        /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar2,/*STR('VO/CharacterInteractions/PickUp/VO_PickUp')*/ uRam0000000003d75ea8,1,0,0);
        lVar6 = 0;
        if (lVar7 != 0) {
          uVar10 = 0x3d75000;
          /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$Add*/ func_0x01ed77c0(lVar7,/*STR('Pickup')*/ uRam0000000003d71238,uVar2,uRam0000000003d2fae8);
          lVar7 = *(long *)(param_1 + 0x48);
          uVar2 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
          lVar4 = 1;
          /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar2,/*STR('VO/CharacterInteractions/Race Events/VO_RaceEvent')*/ uRam0000000003d75eb8,1,0,0);
          lVar6 = 0;
          if (lVar7 != 0) {
            uVar10 = 0x3d75000;
            /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$Add*/ func_0x01ed77c0(lVar7,/*STR('RaceEvent')*/ uRam0000000003d71908,uVar2,uRam0000000003d2fae8);
            lVar7 = *(long *)(param_1 + 0x48);
            uVar2 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
            lVar4 = 1;
            /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar2,/*STR('VO/CharacterInteractions/Race Events/AllCharacters_TurdHit')*/ uRam0000000003d75eb0,1,0,0);
            lVar6 = 0;
            if (lVar7 != 0) {
              uVar10 = 0x3d75000;
              /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$Add*/ func_0x01ed77c0(lVar7,/*STR('RaceEventTurdHit')*/ uRam0000000003d71918,uVar2,uRam0000000003d2fae8);
              lVar7 = *(long *)(param_1 + 0x48);
              uVar2 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
              lVar4 = 1;
              /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar2,/*STR('VO/CharacterInteractions/WinLose/WinLose')*/ uRam0000000003d75ec0,1,0,0);
              lVar6 = 0;
              if (lVar7 != 0) {
                /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$Add*/ func_0x01ed77c0(lVar7,/*STR('WinLose')*/ uRam0000000003d764c8,uVar2,uRam0000000003d2fae8);
                *(undefined1 *)(param_1 + 0x3c) = 0;
                *(undefined4 *)(param_1 + 0x38) = 0xbf800000;
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_014fdfc0:
  func_0x00f78af4();
  uStack_70 = uVar8;
LAB_014fdfc4:
  uVar8 = func_0x00f78b24();
  auVar13 = func_0x00f78ac0(uVar8,0);
  lVar7 = auVar13._0_8_;
  puStack_48 = &Atlas_Audio_SpeechManager__Init;
  uStack_80 = uVar10;
  lStack_78 = lVar9;
  uStack_68 = uVar2;
  lStack_60 = lVar6;
  lStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4cd7 & 1) == 0) {
    func_0x00f78a20(0x3d1ff30);
    bRam0000000003eb4cd7 = 1;
  }
  *(undefined1 *)(lVar7 + 0x34) = 1;
  *(long *)(lVar7 + 0x10) = auVar13._8_8_;
  uVar8 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
  /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638678(uVar8,0);
  *(undefined8 *)(lVar7 + 0x18) = uVar8;
  if (lVar4 != 0) {
    *(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)(lVar4 + 0x48);
    *(undefined1 *)(lVar7 + 0x3c) = 0;
    *(undefined4 *)(lVar7 + 0x38) = 0xbf800000;
    return;
  }
  lVar9 = func_0x00f78af4();
  uStack_b0 = 0x3d1ff30;
  puStack_88 = &Atlas_Audio_SpeechManager__DeInit;
  pppuVar11 = &ppuStack_90;
  uVar10 = 0x3eb4000;
  uStack_a8 = uVar8;
  lStack_a0 = lVar4;
  lStack_98 = lVar7;
  ppuStack_90 = &puStack_50;
  if ((bRam0000000003eb4cd8 & 1) == 0) {
    func_0x00f78a20(0x3d2fb00);
    func_0x00f78a20(0x3d2fb08);
    func_0x00f78a20(0x3d34e08);
    func_0x00f78a20(0x3d34e10);
    func_0x00f78a20(0x3d34e18);
    func_0x00f78a20(0x3d39098);
    bRam0000000003eb4cd8 = 1;
  }
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  puVar12 = &UNK_014fe0f0;
  puVar1 = auStack_d0;
  lVar4 = lVar9;
  while( true ) {
    *(undefined8 *)(puVar1 + -0x20) = uVar10;
    *(long *)(puVar1 + -0x18) = lVar9;
    *(undefined1 ****)(puVar1 + -0x10) = pppuVar11;
    *(undefined **)(puVar1 + -8) = puVar12;
    if ((bRam0000000003eb4cdd & 1) == 0) {
      func_0x00f78a20(0x3d3da20);
      bRam0000000003eb4cdd = 1;
    }
    if (*(long *)(lVar4 + 0x40) != 0) break;
    lVar6 = func_0x00f78af4();
    *(undefined8 *)(puVar1 + -0x40) = 0x3eb4000;
    *(long *)(puVar1 + -0x38) = lVar4;
    *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x28) = &Atlas_Audio_SpeechManager__Reset;
    if (*(long *)(lVar6 + 0x18) != 0) {
      /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(lVar6 + 0x18),0,0);
    }
    pppuVar11 = *(undefined1 ****)(puVar1 + -0x30);
    puVar12 = *(undefined **)(puVar1 + -0x28);
    uVar10 = *(undefined8 *)(puVar1 + -0x40);
    lVar9 = *(long *)(puVar1 + -0x38);
    puVar1 = puVar1 + -0x20;
    lVar4 = lVar6;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar4 + 0x40),uRam0000000003d3da20);
  if (*(char *)(lVar4 + 0x3c) == '\0') {
    *(undefined1 *)(lVar4 + 0x3c) = 1;
    *(undefined4 *)(lVar4 + 0x38) = 0x3e800000;
  }
  return;
}



// ============================================================
// RVA: 0x14fdfd0 | Atlas.Audio.SpeechManager.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x014fe0ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014fe0f0) */
/* WARNING: Removing unreachable block (ram,0x014fe0f8) */
/* WARNING: Removing unreachable block (ram,0x014fe10c) */
/* WARNING: Removing unreachable block (ram,0x014fe114) */
/* WARNING: Removing unreachable block (ram,0x014fe11c) */
/* WARNING: Removing unreachable block (ram,0x014fe1c0) */
/* WARNING: Removing unreachable block (ram,0x014fe1d0) */
/* WARNING: Removing unreachable block (ram,0x014fe1d8) */
/* WARNING: Removing unreachable block (ram,0x014fe1f4) */
/* WARNING: Removing unreachable block (ram,0x014fe200) */
/* WARNING: Removing unreachable block (ram,0x014fe130) */
/* WARNING: Removing unreachable block (ram,0x014fe15c) */
/* WARNING: Removing unreachable block (ram,0x014fe190) */
/* WARNING: Removing unreachable block (ram,0x014fe19c) */
/* WARNING: Removing unreachable block (ram,0x014fe16c) */
/* WARNING: Removing unreachable block (ram,0x014fe1b0) */
/* WARNING: Removing unreachable block (ram,0x014fe174) */
/* WARNING: Removing unreachable block (ram,0x014fe1b8) */
/* WARNING: Removing unreachable block (ram,0x014fe1bc) */
/* WARNING: Removing unreachable block (ram,0x014fe184) */

void Atlas_Audio_SpeechManager__Init(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 **ppuVar7;
  undefined *puVar8;
  long alStack_d0 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb4cd7 & 1) == 0) {
    func_0x00f78a20(0x3d1ff30);
    bRam0000000003eb4cd7 = 1;
  }
  *(undefined1 *)(param_1 + 0x34) = 1;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  uVar2 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
  /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638678(uVar2,0);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  if (param_3 != 0) {
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    *(undefined1 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0xbf800000;
    return;
  }
  lVar3 = func_0x00f78af4();
  uStack_70 = 0x3d1ff30;
  puStack_48 = &Atlas_Audio_SpeechManager__DeInit;
  ppuVar7 = &puStack_50;
  uVar6 = 0x3eb4000;
  uStack_68 = uVar2;
  lStack_60 = param_3;
  lStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4cd8 & 1) == 0) {
    func_0x00f78a20(0x3d2fb00);
    func_0x00f78a20(0x3d2fb08);
    func_0x00f78a20(0x3d34e08);
    func_0x00f78a20(0x3d34e10);
    func_0x00f78a20(0x3d34e18);
    func_0x00f78a20(0x3d39098);
    bRam0000000003eb4cd8 = 1;
  }
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  puVar8 = &UNK_014fe0f0;
  puVar1 = auStack_90;
  lVar4 = lVar3;
  while( true ) {
    *(undefined8 *)(puVar1 + -0x20) = uVar6;
    *(long *)(puVar1 + -0x18) = lVar3;
    *(undefined1 ***)(puVar1 + -0x10) = ppuVar7;
    *(undefined **)(puVar1 + -8) = puVar8;
    if ((bRam0000000003eb4cdd & 1) == 0) {
      func_0x00f78a20(0x3d3da20);
      bRam0000000003eb4cdd = 1;
    }
    if (*(long *)(lVar4 + 0x40) != 0) break;
    lVar5 = func_0x00f78af4();
    *(undefined8 *)(puVar1 + -0x40) = 0x3eb4000;
    *(long *)(puVar1 + -0x38) = lVar4;
    *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x28) = &Atlas_Audio_SpeechManager__Reset;
    if (*(long *)(lVar5 + 0x18) != 0) {
      /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(lVar5 + 0x18),0,0);
    }
    ppuVar7 = *(undefined1 ***)(puVar1 + -0x30);
    puVar8 = *(undefined **)(puVar1 + -0x28);
    uVar6 = *(undefined8 *)(puVar1 + -0x40);
    lVar3 = *(long *)(puVar1 + -0x38);
    puVar1 = puVar1 + -0x20;
    lVar4 = lVar5;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar4 + 0x40),uRam0000000003d3da20);
  if (*(char *)(lVar4 + 0x3c) == '\0') {
    *(undefined1 *)(lVar4 + 0x3c) = 1;
    *(undefined4 *)(lVar4 + 0x38) = 0x3e800000;
  }
  return;
}



// ============================================================
// RVA: 0x14fe06c | Atlas.Audio.SpeechManager.DeInit
// ============================================================

/* WARNING: Possible PIC construction at 0x014fe0ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014fe0f0) */
/* WARNING: Removing unreachable block (ram,0x014fe0f8) */
/* WARNING: Removing unreachable block (ram,0x014fe10c) */
/* WARNING: Removing unreachable block (ram,0x014fe114) */
/* WARNING: Removing unreachable block (ram,0x014fe11c) */
/* WARNING: Removing unreachable block (ram,0x014fe1c0) */
/* WARNING: Removing unreachable block (ram,0x014fe1d0) */
/* WARNING: Removing unreachable block (ram,0x014fe1d8) */
/* WARNING: Removing unreachable block (ram,0x014fe1f4) */
/* WARNING: Removing unreachable block (ram,0x014fe200) */
/* WARNING: Removing unreachable block (ram,0x014fe130) */
/* WARNING: Removing unreachable block (ram,0x014fe15c) */
/* WARNING: Removing unreachable block (ram,0x014fe190) */
/* WARNING: Removing unreachable block (ram,0x014fe19c) */
/* WARNING: Removing unreachable block (ram,0x014fe16c) */
/* WARNING: Removing unreachable block (ram,0x014fe1b0) */
/* WARNING: Removing unreachable block (ram,0x014fe174) */
/* WARNING: Removing unreachable block (ram,0x014fe1b8) */
/* WARNING: Removing unreachable block (ram,0x014fe1bc) */
/* WARNING: Removing unreachable block (ram,0x014fe184) */

void Atlas_Audio_SpeechManager__DeInit(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long alStack_90 [8];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar5 = &stack0xfffffffffffffff0;
  uVar4 = 0x3eb4000;
  if ((bRam0000000003eb4cd8 & 1) == 0) {
    func_0x00f78a20(0x3d2fb00);
    func_0x00f78a20(0x3d2fb08);
    func_0x00f78a20(0x3d34e08);
    func_0x00f78a20(0x3d34e10);
    func_0x00f78a20(0x3d34e18);
    func_0x00f78a20(0x3d39098);
    bRam0000000003eb4cd8 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uVar6 = 0x14fe0f0;
  puVar1 = auStack_50;
  lVar2 = param_1;
  while( true ) {
    *(undefined8 *)(puVar1 + -0x20) = uVar4;
    *(long *)(puVar1 + -0x18) = param_1;
    *(undefined1 **)(puVar1 + -0x10) = puVar5;
    *(undefined8 *)(puVar1 + -8) = uVar6;
    if ((bRam0000000003eb4cdd & 1) == 0) {
      func_0x00f78a20(0x3d3da20);
      bRam0000000003eb4cdd = 1;
    }
    if (*(long *)(lVar2 + 0x40) != 0) break;
    lVar3 = func_0x00f78af4();
    *(undefined8 *)(puVar1 + -0x40) = 0x3eb4000;
    *(long *)(puVar1 + -0x38) = lVar2;
    *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x28) = &Atlas_Audio_SpeechManager__Reset;
    if (*(long *)(lVar3 + 0x18) != 0) {
      /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(lVar3 + 0x18),0,0);
    }
    puVar5 = *(undefined1 **)(puVar1 + -0x30);
    uVar6 = *(undefined8 *)(puVar1 + -0x28);
    uVar4 = *(undefined8 *)(puVar1 + -0x40);
    param_1 = *(long *)(puVar1 + -0x38);
    puVar1 = puVar1 + -0x20;
    lVar2 = lVar3;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar2 + 0x40),uRam0000000003d3da20);
  if (*(char *)(lVar2 + 0x3c) == '\0') {
    *(undefined1 *)(lVar2 + 0x3c) = 1;
    *(undefined4 *)(lVar2 + 0x38) = 0x3e800000;
  }
  return;
}



// ============================================================
// RVA: 0x14fe204 | Atlas.Audio.SpeechManager.ClearQueue
// ============================================================

void Atlas_Audio_SpeechManager__ClearQueue(long param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if ((bRam0000000003eb4cdd & 1) == 0) {
      func_0x00f78a20(0x3d3da20);
      bRam0000000003eb4cdd = 1;
    }
    if (*(long *)(param_1 + 0x40) != 0) break;
    lVar1 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0x3eb4000;
    *(long *)((long)register0x00000008 + -0x38) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x30) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x28) = &Atlas_Audio_SpeechManager__Reset;
    if (*(long *)(lVar1 + 0x18) != 0) {
      /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(lVar1 + 0x18),0,0);
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x28);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x38);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
    param_1 = lVar1;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_1 + 0x40),uRam0000000003d3da20);
  if (*(char *)(param_1 + 0x3c) == '\0') {
    *(undefined1 *)(param_1 + 0x3c) = 1;
    *(undefined4 *)(param_1 + 0x38) = 0x3e800000;
  }
  return;
}



// ============================================================
// RVA: 0x14fe274 | Atlas.Audio.SpeechManager.Reset
// ============================================================

void Atlas_Audio_SpeechManager__Reset(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    lVar1 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if (*(long *)(lVar1 + 0x18) != 0) {
      /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(lVar1 + 0x18),0,0);
    }
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x20 = 0x3eb4000;
    if ((bRam0000000003eb4cdd & 1) == 0) {
      func_0x00f78a20(0x3d3da20);
      bRam0000000003eb4cdd = 1;
    }
    if (*(long *)(lVar1 + 0x40) != 0) break;
    unaff_x30 = Atlas_Audio_SpeechManager__Reset;
    param_1 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
    unaff_x19 = lVar1;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar1 + 0x40),uRam0000000003d3da20);
  if (*(char *)(lVar1 + 0x3c) == '\0') {
    *(undefined1 *)(lVar1 + 0x3c) = 1;
    *(undefined4 *)(lVar1 + 0x38) = 0x3e800000;
  }
  return;
}



// ============================================================
// RVA: 0x14fe2a8 | Atlas.Audio.SpeechManager.TryPlay
// ============================================================

/* WARNING: Possible PIC construction at 0x014fe4b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014fe4b4) */
/* WARNING: Removing unreachable block (ram,0x014fe4b8) */
/* WARNING: Removing unreachable block (ram,0x014fe4c0) */
/* WARNING: Removing unreachable block (ram,0x014fe4cc) */
/* WARNING: Removing unreachable block (ram,0x014fe568) */
/* WARNING: Removing unreachable block (ram,0x014fe570) */
/* WARNING: Removing unreachable block (ram,0x014fe578) */
/* WARNING: Removing unreachable block (ram,0x014fe544) */
/* WARNING: Removing unreachable block (ram,0x014fe50c) */
/* WARNING: Removing unreachable block (ram,0x014fe534) */
/* WARNING: Removing unreachable block (ram,0x014fe4e4) */
/* WARNING: Removing unreachable block (ram,0x014fe4ec) */
/* WARNING: Removing unreachable block (ram,0x014fe560) */
/* WARNING: Recovered jumptable eliminated as dead code */

ulong Atlas_Audio_SpeechManager__TryPlay
                (undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                undefined8 param_5,int *param_6,long param_7,int param_8,undefined8 param_9)

{
  float fVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong extraout_x1;
  int *piVar11;
  int *piVar12;
  undefined8 uVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  int iStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  int *piStack_90;
  long lStack_88;
  int *piStack_80;
  int *piStack_78;
  
  auVar15._8_8_ = param_4;
  auVar15._0_8_ = param_3;
  uVar9 = param_5;
  if ((bRam0000000003eb4cd9 & 1) == 0) {
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb4cd9 = 1;
  }
  iVar4 = (int)uVar9;
  if (param_7 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(piVar5,uRam0000000003d3bf00);
    lVar6 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    /*System.Object$$.ctor*/ func_0x0294d018(lVar6,0);
    *(long *)(lVar6 + 0x10) = param_7;
    *(float *)(lVar6 + 0x18) = (float)param_8;
    if (piVar5 == (int *)0x0) {
      auVar15 = func_0x00f78af4();
      lVar6 = auVar15._0_8_;
      piStack_78 = (int *)&Atlas_Audio_SpeechParam___ctor;
      uStack_a0 = param_4;
      uStack_98 = param_5;
      piStack_90 = param_6;
      lStack_88 = param_9;
      piStack_80 = (int *)&stack0xfffffffffffffff0;
      uVar7 = /*System.Object$$.ctor*/ func_0x0294d018(lVar6,0);
      *(long *)(lVar6 + 0x10) = auVar15._8_8_;
      *(float *)(lVar6 + 0x18) = (float)iVar4;
      return uVar7;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(piVar5,lVar6,uRam0000000003d3bf08);
  }
  uVar9 = param_5;
  piVar11 = param_6;
  piVar12 = piVar5;
  if ((bRam0000000003eb4cda & 1) == 0) {
    func_0x00f78a20(param_1,param_2,0x3d3da38);
    bRam0000000003eb4cda = 1;
  }
  if (*(char *)(param_3 + 0x34) == '\0') {
code_r0x014fe49c:
    piVar12 = (int *)&stack0xffffffffffffffac;
    uVar9 = param_5;
    piVar11 = piVar5;
  }
  else {
    if (*(long *)(param_3 + 0x10) != 0) {
      if (*(char *)(*(long *)(param_3 + 0x10) + 0xcb) == '\0') {
        return 0;
      }
      goto code_r0x014fe49c;
    }
    auVar15 = func_0x00f78af4();
  }
  lVar10 = auVar15._8_8_;
  lVar6 = auVar15._0_8_;
  uStack_a0 = 0x3eb4000;
  uStack_98 = param_4;
  piStack_90 = (int *)param_5;
  lStack_88 = param_3;
  piStack_80 = param_6;
  piStack_78 = piVar5;
  if ((bRam0000000003eb4cde & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d30020);
    func_0x00f78a20(0x3d30028);
    func_0x00f78a20(0x3d32f50);
    func_0x00f78a20(0x3d32f58);
    func_0x00f78a20(0x3d32f60);
    func_0x00f78a20(0x3d3bf10);
    func_0x00f78a20(0x3d269f8);
    bRam0000000003eb4cde = 1;
  }
  uStack_e0 = 0;
  uStack_d8 = 0;
  lStack_d0 = 0;
  iStack_e4 = 0;
  if (*(long *)(lVar6 + 0x10) == 0) goto code_r0x014fe8f8;
  if (*(char *)(*(long *)(lVar6 + 0x10) + 0x90) != '\0') {
    return 0;
  }
  if (lVar10 == 0) goto code_r0x014fe8f8;
  uVar7 = Atlas_Audio_KartAudio__IsFarAI(lVar10,0);
  if ((uVar7 & 1) != 0) {
    return 0;
  }
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar4 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar9,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x350),0);
  if (iVar4 != 0) {
    if (piVar11 == (int *)0x0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_100,piVar11,uRam0000000003d3bf10);
    uStack_d8 = uStack_f8;
    uStack_e0 = uStack_100;
    lStack_d0 = lStack_f0;
    while (uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_e0,uRam0000000003d32f58), lVar2 = lStack_d0,
          (uVar7 & 1) != 0) {
      if (lStack_d0 == 0) {
        func_0x00f78af4();
        goto code_r0x014fe900;
      }
      uVar13 = *(undefined8 *)(lStack_d0 + 0x10);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar13,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x310)
                              ,0);
      if ((uVar7 & 1) != 0) {
        fVar14 = *(float *)(lVar2 + 0x18);
        fVar1 = -fVar14;
        if (fVar14 != INFINITY) {
          fVar1 = fVar14;
        }
        iStack_e4 = (int)fVar1;
        plVar8 = (long *)func_0x00f78ae0(/*Atlas.Audio.AtlasAudioManager.RaceEvent_TypeInfo*/ uRam0000000003d269f8,&iStack_e4);
        if (plVar8 == (long *)0x0) goto code_r0x014fe8fc;
        uVar13 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        piVar5 = (int *)func_0x00f78ae4(plVar8);
        iStack_e4 = *piVar5;
        uVar9 = /*System.String$$Concat*/ func_0x029bdb88(uVar9,uVar13,0);
      }
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_e0,uRam0000000003d32f50);
  }
  if (*(long *)(lVar6 + 0x28) == 0) goto code_r0x014fe8f8;
  iVar4 = /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$ContainsKey*/ func_0x01ef3924(*(long *)(lVar6 + 0x28),uVar9,uRam0000000003d30020);
  if (iVar4 == 0) {
code_r0x014fe888:
    uVar7 = 1;
  }
  else {
    if (*(long *)(lVar6 + 0x28) == 0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$get_Item*/ func_0x01ef35d0(*(long *)(lVar6 + 0x28),uVar9,uRam0000000003d30028);
    if ((extraout_x1 & 0xff00000000) == 0) {
      if (*piVar12 - 1U < 2) {
        iVar4 = 4;
        goto code_r0x014fe860;
      }
    }
    else {
      iVar4 = 1;
code_r0x014fe860:
      *piVar12 = iVar4;
    }
    iVar4 = (int)extraout_x1;
    if (iVar4 == 3) {
      if ((*(long *)(lVar10 + 0xa0) == 0) ||
         (lVar6 = *(long *)(*(long *)(lVar10 + 0xa0) + 0x90), lVar6 == 0)) {
code_r0x014fe8f8:
        func_0x00f78af4();
code_r0x014fe8fc:
        func_0x00f78af4();
code_r0x014fe900:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x14fe904);
        (*pcVar3)();
      }
      iVar4 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar6,0);
      if (1 < iVar4) {
        iVar4 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,4,0);
        return (ulong)(iVar4 < 3);
      }
      uVar7 = 2;
    }
    else {
      uVar7 = extraout_x1;
      if (iVar4 != 2) {
        if (iVar4 == 0) {
          uVar7 = Atlas_Audio_KartAudio__ShouldISpeak(lVar10,0);
          return uVar7;
        }
        goto code_r0x014fe888;
      }
    }
    iVar4 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar7,0);
    uVar7 = (ulong)(iVar4 == 0);
  }
  return uVar7;
}



// ============================================================
// RVA: 0x14fe428 | Atlas.Audio.SpeechManager.TryPlay
// ============================================================

/* WARNING: Possible PIC construction at 0x014fe4b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014fe4b4) */
/* WARNING: Removing unreachable block (ram,0x014fe4b8) */
/* WARNING: Removing unreachable block (ram,0x014fe4c0) */
/* WARNING: Removing unreachable block (ram,0x014fe4cc) */
/* WARNING: Removing unreachable block (ram,0x014fe568) */
/* WARNING: Removing unreachable block (ram,0x014fe570) */
/* WARNING: Removing unreachable block (ram,0x014fe578) */
/* WARNING: Removing unreachable block (ram,0x014fe544) */
/* WARNING: Removing unreachable block (ram,0x014fe50c) */
/* WARNING: Removing unreachable block (ram,0x014fe534) */
/* WARNING: Removing unreachable block (ram,0x014fe4e4) */
/* WARNING: Removing unreachable block (ram,0x014fe4ec) */
/* WARNING: Removing unreachable block (ram,0x014fe560) */
/* WARNING: Recovered jumptable eliminated as dead code */

ulong Atlas_Audio_SpeechManager__TryPlay
                (long param_1,undefined8 param_2,undefined8 param_3,int *param_4,int *param_5,
                int param_6)

{
  float fVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong extraout_x1;
  int *piVar11;
  undefined8 uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  int iStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  int iStack_54;
  
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = param_1;
  uVar8 = param_3;
  piVar11 = param_5;
  iStack_54 = param_6;
  if ((bRam0000000003eb4cda & 1) == 0) {
    func_0x00f78a20(0x3d3da38);
    bRam0000000003eb4cda = 1;
  }
  if (*(char *)(param_1 + 0x34) == '\0') {
LAB_014fe49c:
    piVar11 = &iStack_54;
    uVar8 = param_3;
    param_4 = param_5;
  }
  else {
    if (*(long *)(param_1 + 0x10) != 0) {
      if (*(char *)(*(long *)(param_1 + 0x10) + 0xcb) == '\0') {
        return 0;
      }
      goto LAB_014fe49c;
    }
    auVar14 = func_0x00f78af4();
  }
  lVar10 = auVar14._8_8_;
  lVar9 = auVar14._0_8_;
  if ((bRam0000000003eb4cde & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d30020);
    func_0x00f78a20(0x3d30028);
    func_0x00f78a20(0x3d32f50);
    func_0x00f78a20(0x3d32f58);
    func_0x00f78a20(0x3d32f60);
    func_0x00f78a20(0x3d3bf10);
    func_0x00f78a20(0x3d269f8);
    bRam0000000003eb4cde = 1;
  }
  uStack_e0 = 0;
  uStack_d8 = 0;
  lStack_d0 = 0;
  iStack_e4 = 0;
  if (*(long *)(lVar9 + 0x10) == 0) goto code_r0x014fe8f8;
  if (*(char *)(*(long *)(lVar9 + 0x10) + 0x90) != '\0') {
    return 0;
  }
  if (lVar10 == 0) goto code_r0x014fe8f8;
  uVar5 = Atlas_Audio_KartAudio__IsFarAI(lVar10,0);
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar4 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar8,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x350),0);
  if (iVar4 != 0) {
    if (param_4 == (int *)0x0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_100,param_4,uRam0000000003d3bf10);
    uStack_d8 = uStack_f8;
    uStack_e0 = uStack_100;
    lStack_d0 = lStack_f0;
    while (uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_e0,uRam0000000003d32f58), lVar2 = lStack_d0,
          (uVar5 & 1) != 0) {
      if (lStack_d0 == 0) {
        func_0x00f78af4();
        goto code_r0x014fe900;
      }
      uVar12 = *(undefined8 *)(lStack_d0 + 0x10);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar12,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x310)
                              ,0);
      if ((uVar5 & 1) != 0) {
        fVar13 = *(float *)(lVar2 + 0x18);
        fVar1 = -fVar13;
        if (fVar13 != INFINITY) {
          fVar1 = fVar13;
        }
        iStack_e4 = (int)fVar1;
        plVar6 = (long *)func_0x00f78ae0(/*Atlas.Audio.AtlasAudioManager.RaceEvent_TypeInfo*/ uRam0000000003d269f8,&iStack_e4);
        if (plVar6 == (long *)0x0) goto code_r0x014fe8fc;
        uVar12 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        piVar7 = (int *)func_0x00f78ae4(plVar6);
        iStack_e4 = *piVar7;
        uVar8 = /*System.String$$Concat*/ func_0x029bdb88(uVar8,uVar12,0);
      }
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_e0,uRam0000000003d32f50);
  }
  if (*(long *)(lVar9 + 0x28) == 0) goto code_r0x014fe8f8;
  iVar4 = /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$ContainsKey*/ func_0x01ef3924(*(long *)(lVar9 + 0x28),uVar8,uRam0000000003d30020);
  if (iVar4 == 0) {
code_r0x014fe888:
    uVar5 = 1;
  }
  else {
    if (*(long *)(lVar9 + 0x28) == 0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$get_Item*/ func_0x01ef35d0(*(long *)(lVar9 + 0x28),uVar8,uRam0000000003d30028);
    if ((extraout_x1 & 0xff00000000) == 0) {
      if (*piVar11 - 1U < 2) {
        iVar4 = 4;
        goto code_r0x014fe860;
      }
    }
    else {
      iVar4 = 1;
code_r0x014fe860:
      *piVar11 = iVar4;
    }
    iVar4 = (int)extraout_x1;
    if (iVar4 == 3) {
      if ((*(long *)(lVar10 + 0xa0) == 0) ||
         (lVar9 = *(long *)(*(long *)(lVar10 + 0xa0) + 0x90), lVar9 == 0)) {
code_r0x014fe8f8:
        func_0x00f78af4();
code_r0x014fe8fc:
        func_0x00f78af4();
code_r0x014fe900:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x14fe904);
        (*pcVar3)();
      }
      iVar4 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar9,0);
      if (1 < iVar4) {
        iVar4 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,4,0);
        return (ulong)(iVar4 < 3);
      }
      uVar5 = 2;
    }
    else {
      uVar5 = extraout_x1;
      if (iVar4 != 2) {
        if (iVar4 == 0) {
          uVar5 = Atlas_Audio_KartAudio__ShouldISpeak(lVar10,0);
          return uVar5;
        }
        goto code_r0x014fe888;
      }
    }
    iVar4 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar5,0);
    uVar5 = (ulong)(iVar4 == 0);
  }
  return uVar5;
}



// ============================================================
// RVA: 0x14fe5a8 | Atlas.Audio.SpeechManager.CheckSpeechRules
// ============================================================

ulong Atlas_Audio_SpeechManager__CheckSpeechRules
                (long param_1,long param_2,undefined8 param_3,long param_4,int *param_5)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  ulong extraout_x1;
  undefined8 uVar8;
  float fVar9;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  int iStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000003eb4cde & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d30020);
    func_0x00f78a20(0x3d30028);
    func_0x00f78a20(0x3d32f50);
    func_0x00f78a20(0x3d32f58);
    func_0x00f78a20(0x3d32f60);
    func_0x00f78a20(0x3d3bf10);
    func_0x00f78a20(0x3d269f8);
    bRam0000000003eb4cde = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  iStack_84 = 0;
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_014fe8f8;
  if (*(char *)(*(long *)(param_1 + 0x10) + 0x90) != '\0') {
    return 0;
  }
  if (param_2 == 0) goto LAB_014fe8f8;
  uVar4 = Atlas_Audio_KartAudio__IsFarAI(param_2,0);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(param_3,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x350),0)
  ;
  if (iVar3 != 0) {
    if (param_4 == 0) goto LAB_014fe8f8;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_a0,param_4,uRam0000000003d3bf10);
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    lStack_70 = lStack_90;
    while (uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_80,uRam0000000003d32f58), lVar7 = lStack_70,
          (uVar4 & 1) != 0) {
      if (lStack_70 == 0) {
        func_0x00f78af4();
        goto code_r0x014fe900;
      }
      uVar8 = *(undefined8 *)(lStack_70 + 0x10);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar8,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x310),
                              0);
      if ((uVar4 & 1) != 0) {
        fVar9 = *(float *)(lVar7 + 0x18);
        fVar1 = -fVar9;
        if (fVar9 != INFINITY) {
          fVar1 = fVar9;
        }
        iStack_84 = (int)fVar1;
        plVar5 = (long *)func_0x00f78ae0(/*Atlas.Audio.AtlasAudioManager.RaceEvent_TypeInfo*/ uRam0000000003d269f8,&iStack_84);
        if (plVar5 == (long *)0x0) goto code_r0x014fe8fc;
        uVar8 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        piVar6 = (int *)func_0x00f78ae4(plVar5);
        iStack_84 = *piVar6;
        param_3 = /*System.String$$Concat*/ func_0x029bdb88(param_3,uVar8,0);
      }
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d32f50);
  }
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_014fe8f8;
  iVar3 = /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$ContainsKey*/ func_0x01ef3924(*(long *)(param_1 + 0x28),param_3,uRam0000000003d30020);
  if (iVar3 == 0) {
code_r0x014fe888:
    uVar4 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_014fe8f8;
    /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$get_Item*/ func_0x01ef35d0(*(long *)(param_1 + 0x28),param_3,uRam0000000003d30028);
    if ((extraout_x1 & 0xff00000000) == 0) {
      if (*param_5 - 1U < 2) {
        iVar3 = 4;
        goto code_r0x014fe860;
      }
    }
    else {
      iVar3 = 1;
code_r0x014fe860:
      *param_5 = iVar3;
    }
    iVar3 = (int)extraout_x1;
    if (iVar3 == 3) {
      if ((*(long *)(param_2 + 0xa0) == 0) ||
         (lVar7 = *(long *)(*(long *)(param_2 + 0xa0) + 0x90), lVar7 == 0)) {
LAB_014fe8f8:
        func_0x00f78af4();
code_r0x014fe8fc:
        func_0x00f78af4();
code_r0x014fe900:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x14fe904);
        (*pcVar2)();
      }
      iVar3 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar7,0);
      if (1 < iVar3) {
        iVar3 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,4,0);
        return (ulong)(iVar3 < 3);
      }
      uVar4 = 2;
    }
    else {
      uVar4 = extraout_x1;
      if (iVar3 != 2) {
        if (iVar3 == 0) {
          uVar4 = Atlas_Audio_KartAudio__ShouldISpeak(param_2,0);
          return uVar4;
        }
        goto code_r0x014fe888;
      }
    }
    iVar3 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar4,0);
    uVar4 = (ulong)(iVar3 == 0);
  }
  return uVar4;
}



// ============================================================
// RVA: 0x14fe95c | Atlas.Audio.SpeechManager.Queue
// ============================================================

/* WARNING: Removing unreachable block (ram,0x02427ee8) */

ulong Atlas_Audio_SpeechManager__Queue
                (undefined4 param_1,undefined4 param_2,ulong param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 extraout_x1;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  uint extraout_w8;
  uint uVar10;
  long lVar11;
  long lVar12;
  long extraout_x9;
  ulong unaff_x19;
  undefined8 unaff_x20;
  long lVar13;
  code *pcVar14;
  undefined4 extraout_s0;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  
  uVar2 = param_3;
  uVar5 = param_5;
  uVar9 = param_6;
  uVar15 = param_2;
  if ((bRam0000000003eb4cdb & 1) == 0) {
    func_0x00f78a20(0x3d3da18);
    uVar2 = func_0x00f78a20(0x3d28f90);
    bRam0000000003eb4cdb = 1;
  }
  if (*(long *)(param_3 + 0x10) != 0) {
    if (*(char *)(*(long *)(param_3 + 0x10) + 0xca) == '\0') {
      return uVar2;
    }
    uVar2 = *(ulong *)(param_3 + 0x40);
    uVar3 = func_0x00f78aec(/*Atlas.Audio.SpeechManager.SpeechEvent_TypeInfo*/ uRam0000000003d28f90);
    uVar5 = param_5;
    uVar9 = param_6;
    uVar15 = param_2;
    /*Atlas.Audio.SpeechManager.SpeechEvent$$.ctor*/ func_0x0156ac8c(param_1,param_2,uVar3,param_4,param_5,param_6,0);
    param_3 = 0;
    if (uVar2 != 0) {
      lVar12 = *(long *)(uVar2 + 0x10);
      puVar7 = puRam0000000003d3da18;
      if (lVar12 == 0) {
code_r0x0242716c:
        uVar3 = unaff_x20;
        uVar2 = unaff_x19;
        uVar4 = func_0x00f78af4();
        lVar12 = extraout_x9;
        uVar10 = extraout_w8;
code_r0x02427170:
        *(uint *)(uVar2 + 0x18) = uVar10 + 1;
      }
      else {
        uVar10 = *(uint *)(uVar2 + 0x18);
        uVar4 = uVar2;
        if (uVar10 != *(uint *)(lVar12 + 0x18)) goto code_r0x02427170;
        puVar7 = *(undefined8 **)(*(long *)(puRam0000000003d3da18[3] + 0xc0) + 0x60);
        uVar4 = (*(code *)*puVar7)(uVar2,uVar10 + 1);
        lVar12 = *(long *)(uVar2 + 0x10);
        uVar10 = *(uint *)(uVar2 + 0x18);
        *(uint *)(uVar2 + 0x18) = uVar10 + 1;
        unaff_x19 = uVar2;
        unaff_x20 = uVar3;
        if (lVar12 == 0) goto code_r0x0242716c;
      }
      if (uVar10 < *(uint *)(lVar12 + 0x18)) {
        *(undefined8 *)(lVar12 + (long)(int)uVar10 * 8 + 0x20) = uVar3;
        *(int *)(uVar2 + 0x1c) = *(int *)(uVar2 + 0x1c) + 1;
        return uVar4;
      }
      uVar5 = func_0x00f78b24();
      auVar16 = func_0x00f78ac0(uVar5,0);
      lVar11 = auVar16._8_8_;
      lVar12 = auVar16._0_8_;
      (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x48))(lVar11,0x14);
      if (lVar12 == 0) {
        func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x2427350);
        (*pcVar14)();
      }
      pcVar14 = (code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x28);
      lVar13 = *(long *)(*(long *)(puVar7[3] + 0xc0) + 0x38);
      if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar13);
      }
      if (lVar11 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = func_0x00f78adc(lVar11,lVar13);
        if (lVar6 == 0) {
          func_0x00f78e5c(lVar11,lVar13);
          goto code_r0x0242734c;
        }
      }
      (*pcVar14)(lVar12,lVar6,*(undefined8 *)(*(long *)(puVar7[3] + 0xc0) + 0x28));
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x68))(lVar12);
      return (ulong)(iVar1 - 1);
    }
  }
  lVar12 = func_0x00f78af4();
  if ((bRam0000000003eb4cdc & 1) == 0) {
    func_0x00f78a20(0x3d3da28);
    func_0x00f78a20(0x3d28f90);
    bRam0000000003eb4cdc = 1;
  }
  uVar2 = *(ulong *)(lVar12 + 0x40);
  puVar7 = (undefined8 *)func_0x00f78aec(/*Atlas.Audio.SpeechManager.SpeechEvent_TypeInfo*/ uRam0000000003d28f90);
  /*Atlas.Audio.SpeechManager.SpeechEvent$$.ctor*/ func_0x0156ac8c(extraout_s0,uVar15,puVar7,extraout_x1,uVar5,uVar9,0);
  if (uVar2 == 0) {
    uVar2 = func_0x00f78af4();
    if (*(char *)(uVar2 + 0x3c) == '\0') {
      *(undefined1 *)(uVar2 + 0x3c) = 1;
      *(undefined4 *)(uVar2 + 0x38) = 0x3e800000;
      return uVar2;
    }
    return uVar2;
  }
  iVar1 = *(int *)(uVar2 + 0x18);
  puVar8 = puVar7;
  lVar12 = lRam0000000003d3da28;
  if (*(long *)(uVar2 + 0x10) == 0) {
code_r0x02427f8c:
    func_0x00f78af4();
  }
  else {
    uVar4 = uVar2;
    if (iVar1 == *(int *)(*(long *)(uVar2 + 0x10) + 0x18)) {
      puVar8 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3da28 + 0x18) + 0xc0) + 0x60);
      uVar4 = (*(code *)*puVar8)(uVar2,iVar1 + 1);
      iVar1 = *(int *)(uVar2 + 0x18);
    }
    if (0 < iVar1) {
      puVar8 = *(undefined8 **)(uVar2 + 0x10);
      lVar12 = 1;
      uVar4 = /*System.Array$$Copy*/ func_0x0292b4cc(puVar8,0,puVar8,1,iVar1,0,param_9,param_10,param_3,param_4,param_5,
                              param_6);
    }
    lVar11 = *(long *)(uVar2 + 0x10);
    if (lVar11 == 0) goto code_r0x02427f8c;
    if (*(int *)(lVar11 + 0x18) != 0) {
      *(undefined8 **)(lVar11 + 0x20) = puVar7;
      *(ulong *)(uVar2 + 0x18) =
           CONCAT44((int)((ulong)*(undefined8 *)(uVar2 + 0x18) >> 0x20) + 1,
                    (int)*(undefined8 *)(uVar2 + 0x18) + 1);
      return uVar4;
    }
  }
  uVar5 = func_0x00f78b24();
  auVar16 = func_0x00f78ac0(uVar5,0);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar12 + 0x18) + 0xc0) + 0x48))(puVar8,0x14);
  if (auVar16._0_8_ == 0) {
    func_0x00f78af4();
code_r0x0242812c:
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x2428130);
    (*pcVar14)();
  }
  lVar11 = *(long *)(*(long *)(lVar12 + 0x18) + 0xc0);
  pcVar14 = (code *)**(undefined8 **)(lVar11 + 0x100);
  lVar11 = *(long *)(lVar11 + 0x38);
  if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar11);
  }
  if (puVar8 == (undefined8 *)0x0) {
    lVar13 = 0;
  }
  else {
    lVar13 = func_0x00f78adc(puVar8,lVar11);
    if (lVar13 == 0) {
      func_0x00f78e5c(puVar8,lVar11);
      goto code_r0x0242812c;
    }
  }
  uVar2 = (*pcVar14)(auVar16._0_8_,auVar16._8_8_,lVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x18) + 0xc0) + 0x100));
  return uVar2;
}



// ============================================================
// RVA: 0x14fea48 | Atlas.Audio.SpeechManager.FrontOfQueue
// ============================================================

/* WARNING: Removing unreachable block (ram,0x02427ee8) */

void Atlas_Audio_SpeechManager__FrontOfQueue
               (undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  
  if ((bRam0000000003eb4cdc & 1) == 0) {
    func_0x00f78a20(0x3d3da28);
    func_0x00f78a20(0x3d28f90);
    bRam0000000003eb4cdc = 1;
  }
  lVar7 = *(long *)(param_3 + 0x40);
  puVar1 = (undefined8 *)func_0x00f78aec(/*Atlas.Audio.SpeechManager.SpeechEvent_TypeInfo*/ uRam0000000003d28f90);
  /*Atlas.Audio.SpeechManager.SpeechEvent$$.ctor*/ func_0x0156ac8c(param_1,param_2,puVar1,param_4,param_5,param_6,0);
  if (lVar7 == 0) {
    lVar7 = func_0x00f78af4();
    if (*(char *)(lVar7 + 0x3c) == '\0') {
      *(undefined1 *)(lVar7 + 0x3c) = 1;
      *(undefined4 *)(lVar7 + 0x38) = 0x3e800000;
      return;
    }
    return;
  }
  iVar5 = *(int *)(lVar7 + 0x18);
  puVar3 = puVar1;
  lVar4 = lRam0000000003d3da28;
  if (*(long *)(lVar7 + 0x10) == 0) {
code_r0x02427f8c:
    func_0x00f78af4();
  }
  else {
    if (iVar5 == *(int *)(*(long *)(lVar7 + 0x10) + 0x18)) {
      puVar3 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3da28 + 0x18) + 0xc0) + 0x60);
      (*(code *)*puVar3)(lVar7,iVar5 + 1);
      iVar5 = *(int *)(lVar7 + 0x18);
    }
    if (0 < iVar5) {
      puVar3 = *(undefined8 **)(lVar7 + 0x10);
      lVar4 = 1;
      /*System.Array$$Copy*/ func_0x0292b4cc(puVar3,0,puVar3,1,iVar5,0,param_9,param_10,unaff_x22,unaff_x21,unaff_x20,
                      unaff_x19);
    }
    lVar6 = *(long *)(lVar7 + 0x10);
    if (lVar6 == 0) goto code_r0x02427f8c;
    if (*(int *)(lVar6 + 0x18) != 0) {
      *(undefined8 **)(lVar6 + 0x20) = puVar1;
      *(ulong *)(lVar7 + 0x18) =
           CONCAT44((int)((ulong)*(undefined8 *)(lVar7 + 0x18) >> 0x20) + 1,
                    (int)*(undefined8 *)(lVar7 + 0x18) + 1);
      return;
    }
  }
  uVar2 = func_0x00f78b24();
  auVar9 = func_0x00f78ac0(uVar2,0);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar4 + 0x18) + 0xc0) + 0x48))(puVar3,0x14);
  if (auVar9._0_8_ == 0) {
    func_0x00f78af4();
code_r0x0242812c:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x2428130);
    (*pcVar8)();
  }
  lVar7 = *(long *)(*(long *)(lVar4 + 0x18) + 0xc0);
  pcVar8 = (code *)**(undefined8 **)(lVar7 + 0x100);
  lVar7 = *(long *)(lVar7 + 0x38);
  if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar7);
  }
  if (puVar3 == (undefined8 *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = func_0x00f78adc(puVar3,lVar7);
    if (lVar6 == 0) {
      func_0x00f78e5c(puVar3,lVar7);
      goto code_r0x0242812c;
    }
  }
  (*pcVar8)(auVar9._0_8_,auVar9._8_8_,lVar6,
            *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x18) + 0xc0) + 0x100));
  return;
}



// ============================================================
// RVA: 0x14feb10 | Atlas.Audio.SpeechManager.TriggerCurrentVOFadeOut
// ============================================================

void Atlas_Audio_SpeechManager__TriggerCurrentVOFadeOut(long param_1)

{
  if (*(char *)(param_1 + 0x3c) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x3c) = 1;
  *(undefined4 *)(param_1 + 0x38) = 0x3e800000;
  return;
}



// ============================================================
// RVA: 0x14feb30 | Atlas.Audio.SpeechManager.Stop
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01638ab0) */

long Atlas_Audio_SpeechManager__Stop(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
    return 0;
  }
  if ((bRam0000000003eb56ac & 1) == 0) {
    func_0x00f78a20(0x3d24568,1,0);
    bRam0000000003eb56ac = 1;
  }
  lVar1 = lVar3 + 0x28;
  iVar2 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar1,0);
  if (iVar2 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x28);
    if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*FMODUnity.RuntimeManager$$DetachInstanceFromGameObject*/ func_0x016e9cb4(uVar4,0);
    /*FMOD.Studio.EventInstance$$stop*/ func_0x016dfb38(lVar1,1,0);
    /*FMOD.Studio.EventInstance$$release*/ func_0x016dfb74(lVar1,0);
    /*FMOD.Studio.EventInstance$$clearHandle*/ func_0x016e00dc(lVar1,0);
  }
  return lVar3;
}



// ============================================================
// RVA: 0x14feb48 | Atlas.Audio.SpeechManager.PrintInfo
// ============================================================

void Atlas_Audio_SpeechManager__PrintInfo(long param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  int *piVar9;
  long lVar10;
  int extraout_w1;
  uint uVar11;
  float fVar12;
  float extraout_s0;
  float fVar13;
  undefined4 uVar14;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  int iStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000003eb4cdf & 1) == 0) {
    func_0x00f78a20(0x3d32f50);
    func_0x00f78a20(0x3d32f58);
    func_0x00f78a20(0x3d32f60);
    func_0x00f78a20(0x3d3bf10);
    func_0x00f78a20(0x3d269f8);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d65ed8);
    func_0x00f78a20(0x3d70e58);
    func_0x00f78a20(0x3d72c20);
    func_0x00f78a20(0x3d66f00);
    func_0x00f78a20(0x3d65f30);
    func_0x00f78a20(0x3d68898);
    func_0x00f78a20(0x3d72610);
    bRam0000000003eb4cdf = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  iStack_84 = 0;
  if ((param_3 == 0) || (*(char *)(param_1 + 0x34) == '\0')) {
    if (param_2 == 0) {
      func_0x00f78af4();
      if (extraout_w1 == 1) {
        plVar6 = (long *)___cxa_begin_catch();
        lVar4 = *plVar6;
        ___cxa_end_catch();
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d32f50);
        if (lVar4 == 0) {
          return;
        }
        func_0x00f78ac0(lVar4,0);
      }
      lVar4 = __Unwind_Resume();
      if ((bRam0000000003eb4ce0 & 1) == 0) {
        func_0x00f78a20(0x3d2faf8);
        func_0x00f78a20(0x3d2fb00);
        func_0x00f78a20(0x3d32f50);
        func_0x00f78a20(0x3d32f58);
        func_0x00f78a20(0x3d32f60);
        func_0x00f78a20(0x3d3bf10);
        func_0x00f78a20(0x3d3da30);
        func_0x00f78a20(0x3d3da38);
        func_0x00f78a20(0x3d3da40);
        func_0x00f78a20(0x3d68cc8);
        bRam0000000003eb4ce0 = 1;
      }
      uStack_f0 = 0;
      uStack_e8 = 0;
      lStack_e0 = 0;
      if (*(long *)(lVar4 + 0x18) != 0) {
        uVar5 = /*Core.Audio.AudioEvent$$IsPlaying*/ func_0x01639214(*(long *)(lVar4 + 0x18),0);
        if ((uVar5 & 1) == 0) {
          lVar10 = *(long *)(lVar4 + 0x40);
          if (lVar10 == 0) goto code_r0x014ff2d8;
          if (0 < *(int *)(lVar10 + 0x18)) {
            lVar7 = *(long *)(*(long *)(lVar10 + 0x10) + 0x20);
            if (lVar7 == 0) goto code_r0x014ff2d8;
            fVar13 = *(float *)(lVar7 + 0x28);
            if (0.0 < fVar13) {
              fVar13 = fVar13 - extraout_s0;
              *(float *)(lVar7 + 0x28) = fVar13;
            }
            if (fVar13 <= 0.0) {
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar10,0,uRam0000000003d3da30);
              if (*(long *)(lVar4 + 0x48) == 0) goto code_r0x014ff2d8;
              iVar3 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(*(long *)(lVar4 + 0x48),*(undefined8 *)(lVar7 + 0x10),
                                      uRam0000000003d2faf8);
              if (iVar3 != 0) {
                if (*(long *)(lVar4 + 0x48) == 0) goto code_r0x014ff2d8;
                lVar10 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar4 + 0x48),*(undefined8 *)(lVar7 + 0x10),
                                         uRam0000000003d2fb00);
                *(long *)(lVar4 + 0x18) = lVar10;
                if (lVar10 != 0) {
                  /*Core.Audio.AudioEvent$$Play*/ func_0x01638d80(*(undefined4 *)(lVar7 + 0x18),lVar10,*(undefined8 *)(lVar7 + 0x20)
                                  ,/*STR('AllCharacter')*/ uRam0000000003d68cc8,0);
                }
                *(undefined4 *)(lVar4 + 0x30) = 0;
                *(undefined1 *)(lVar4 + 0x3c) = 0;
                *(undefined4 *)(lVar4 + 0x38) = 0xbf800000;
                if (*(long *)(lVar7 + 0x30) != 0) {
                  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_108,*(long *)(lVar7 + 0x30),uRam0000000003d3bf10);
                  uStack_e8 = uStack_100;
                  uStack_f0 = uStack_108;
                  lStack_e0 = lStack_f8;
                  while (uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_f0,uRam0000000003d32f58), (uVar5 & 1) != 0)
                  {
                    if (lStack_e0 == 0) goto code_r0x014ff2dc;
                    if (*(long *)(lVar4 + 0x18) == 0) {
                      func_0x00f78af4();
                      goto code_r0x014ff2e8;
                    }
                    /*Core.Audio.AudioEvent$$SetParameter*/ func_0x01638fc8(*(undefined4 *)(lStack_e0 + 0x18),*(long *)(lVar4 + 0x18),
                                    *(undefined8 *)(lStack_e0 + 0x10),0,0);
                  }
                  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_f0,uRam0000000003d32f50);
                }
              }
            }
          }
        }
        if (*(long *)(lVar4 + 0x18) != 0) {
          iVar3 = /*Core.Audio.AudioEvent$$IsPlaying*/ func_0x01639214(*(long *)(lVar4 + 0x18),0);
          if (iVar3 != 0) {
            fVar13 = *(float *)(lVar4 + 0x30) + extraout_s0;
            *(float *)(lVar4 + 0x30) = fVar13;
            if (20.0 < fVar13) {
              if (*(long *)(lVar4 + 0x18) == 0) goto code_r0x014ff2d8;
              /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(lVar4 + 0x18),0,0);
            }
            if ((*(char *)(lVar4 + 0x3c) != '\0') && (0.0 <= *(float *)(lVar4 + 0x38))) {
              *(float *)(lVar4 + 0x38) = *(float *)(lVar4 + 0x38) - extraout_s0;
              /*UnityEngine.Mathf$$InverseLerp*/ func_0x0323d5e4(0,0x3e800000,0);
              uVar14 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(0);
              /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0,0x3f800000,uVar14,0);
              if (*(long *)(lVar4 + 0x18) == 0) goto code_r0x014ff2d8;
              /*Core.Audio.AudioEvent$$SetVolume*/ func_0x01638ef8(uVar14,*(long *)(lVar4 + 0x18),0);
              if (*(float *)(lVar4 + 0x38) <= 0.0) {
                if (*(long *)(lVar4 + 0x18) == 0) goto code_r0x014ff2d8;
                /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(lVar4 + 0x18),1,0);
                *(undefined1 *)(lVar4 + 0x3c) = 0;
                *(undefined4 *)(lVar4 + 0x38) = 0xbf800000;
              }
            }
          }
          return;
        }
      }
code_r0x014ff2d8:
      func_0x00f78af4();
code_r0x014ff2dc:
      func_0x00f78af4();
code_r0x014ff2e8:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x14ff2ec);
      (*pcVar2)();
    }
    puVar1 = (undefined8 *)0x3d70e58;
    if (*(char *)(param_1 + 0x34) != '\0') {
      puVar1 = (undefined8 *)0x3d68898;
    }
    lVar4 = /*System.String$$Concat*/ func_0x029be818(*puVar1,/*STR('Speech: ')*/ uRam0000000003d72c20,*(undefined8 *)(param_2 + 0x10),
                            /*STR(' ')*/ uRam0000000003d65ed8,0);
    if (*(long *)(param_2 + 0x30) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_a0,*(long *)(param_2 + 0x30),uRam0000000003d3bf10);
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      lStack_70 = lStack_90;
      while (uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_80,uRam0000000003d32f58), lVar10 = lStack_70,
            (uVar5 & 1) != 0) {
        plVar6 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,5);
        if (plVar6 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x014fef64;
        }
        if ((lVar4 != 0) &&
           (lVar7 = func_0x00f78adc(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
          uVar8 = func_0x00f78b14();
code_r0x014fef14:
          func_0x00f78ac0(uVar8,0);
          goto code_r0x014fef64;
        }
        uVar5 = plVar6[3];
        if ((int)uVar5 == 0) {
          uVar8 = func_0x00f78b24();
          goto code_r0x014fef14;
        }
        plVar6[4] = lVar4;
        if (lVar10 == 0) {
          func_0x00f78af4();
          goto code_r0x014fef64;
        }
        lVar4 = *(long *)(lVar10 + 0x10);
        if (lVar4 != 0) {
          lVar7 = func_0x00f78adc(lVar4,*(undefined8 *)(*plVar6 + 0x40));
          if (lVar7 != 0) {
            uVar5 = plVar6[3];
            goto LAB_014fed50;
          }
          uVar8 = func_0x00f78b14();
code_r0x014fef34:
          func_0x00f78ac0(uVar8,0);
          goto code_r0x014fef64;
        }
LAB_014fed50:
        uVar11 = (uint)uVar5;
        if ((uVar5 & 0xfffffffe) == 0) {
          uVar8 = func_0x00f78b24();
          goto code_r0x014fef34;
        }
        plVar6[5] = lVar4;
        if (/*STR(' (')*/ lRam0000000003d65f30 != 0) {
          lVar4 = func_0x00f78adc(/*STR(' (')*/ lRam0000000003d65f30,*(undefined8 *)(*plVar6 + 0x40));
          if (lVar4 != 0) {
            uVar11 = (uint)plVar6[3];
            goto LAB_014fed78;
          }
          uVar8 = func_0x00f78b14();
code_r0x014fef24:
          func_0x00f78ac0(uVar8,0);
          goto code_r0x014fef64;
        }
LAB_014fed78:
        if (uVar11 < 3) {
          uVar8 = func_0x00f78b24();
          goto code_r0x014fef24;
        }
        plVar6[6] = /*STR(' (')*/ lRam0000000003d65f30;
        lVar4 = /*System.Single$$ToString*/ func_0x029ba8bc((float *)(lVar10 + 0x18),0);
        if ((lVar4 != 0) &&
           (lVar7 = func_0x00f78adc(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
          uVar8 = func_0x00f78b14();
code_r0x014fef44:
          func_0x00f78ac0(uVar8,0);
          goto code_r0x014fef64;
        }
        uVar11 = (uint)plVar6[3];
        if ((plVar6[3] & 0xfffffffcU) == 0) {
          uVar8 = func_0x00f78b24();
          goto code_r0x014fef44;
        }
        plVar6[7] = lVar4;
        if (/*STR(') ')*/ lRam0000000003d66f00 != 0) {
          lVar4 = func_0x00f78adc(/*STR(') ')*/ lRam0000000003d66f00,*(undefined8 *)(*plVar6 + 0x40));
          if (lVar4 != 0) {
            uVar11 = (uint)plVar6[3];
            goto LAB_014fede0;
          }
          uVar8 = func_0x00f78b14();
code_r0x014fef54:
          func_0x00f78ac0(uVar8,0);
          goto code_r0x014fef64;
        }
LAB_014fede0:
        if (uVar11 < 5) {
          uVar8 = func_0x00f78b24();
          goto code_r0x014fef54;
        }
        plVar6[8] = /*STR(') ')*/ lRam0000000003d66f00;
        lVar4 = /*System.String$$Concat*/ func_0x029cfadc(plVar6,0);
        if (*(long *)(lVar10 + 0x10) == 0) {
          func_0x00f78af4();
          goto code_r0x014fef64;
        }
        uVar5 = /*System.String$$Contains*/ func_0x029cd7a4(*(long *)(lVar10 + 0x10),/*STR('Selection')*/ uRam0000000003d72610,0);
        if ((uVar5 & 1) != 0) {
          fVar12 = *(float *)(lVar10 + 0x18);
          fVar13 = -fVar12;
          if (fVar12 != INFINITY) {
            fVar13 = fVar12;
          }
          iStack_84 = (int)fVar13;
          plVar6 = (long *)func_0x00f78ae0(/*Atlas.Audio.AtlasAudioManager.RaceEvent_TypeInfo*/ uRam0000000003d269f8,&iStack_84);
          if (plVar6 == (long *)0x0) {
            func_0x00f78af4();
code_r0x014fef64:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x14fef68);
            (*pcVar2)();
          }
          uVar8 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
          piVar9 = (int *)func_0x00f78ae4(plVar6);
          iStack_84 = *piVar9;
          lVar4 = /*System.String$$Concat*/ func_0x029be39c(lVar4,/*STR(' ')*/ uRam0000000003d65ed8,uVar8,0);
        }
      }
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d32f50);
    }
  }
  return;
}



// ============================================================
// RVA: 0x14feff4 | Atlas.Audio.SpeechManager.Update
// ============================================================

void Atlas_Audio_SpeechManager__Update(float param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if ((bRam0000000003eb4ce0 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8);
    func_0x00f78a20(0x3d2fb00);
    func_0x00f78a20(0x3d32f50);
    func_0x00f78a20(0x3d32f58);
    func_0x00f78a20(0x3d32f60);
    func_0x00f78a20(0x3d3bf10);
    func_0x00f78a20(0x3d3da30);
    func_0x00f78a20(0x3d3da38);
    func_0x00f78a20(0x3d3da40);
    func_0x00f78a20(0x3d68cc8);
    bRam0000000003eb4ce0 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  lStack_40 = 0;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar3 = /*Core.Audio.AudioEvent$$IsPlaying*/ func_0x01639214(*(long *)(param_2 + 0x18),0);
    if ((uVar3 & 1) == 0) {
      lVar4 = *(long *)(param_2 + 0x40);
      if (lVar4 == 0) goto LAB_014ff2d8;
      if (0 < *(int *)(lVar4 + 0x18)) {
        lVar5 = *(long *)(*(long *)(lVar4 + 0x10) + 0x20);
        if (lVar5 == 0) goto LAB_014ff2d8;
        fVar6 = *(float *)(lVar5 + 0x28);
        if (0.0 < fVar6) {
          fVar6 = fVar6 - param_1;
          *(float *)(lVar5 + 0x28) = fVar6;
        }
        if (fVar6 <= 0.0) {
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar4,0,uRam0000000003d3da30);
          if (*(long *)(param_2 + 0x48) == 0) goto LAB_014ff2d8;
          iVar2 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(*(long *)(param_2 + 0x48),*(undefined8 *)(lVar5 + 0x10),
                                  uRam0000000003d2faf8);
          if (iVar2 != 0) {
            if (*(long *)(param_2 + 0x48) == 0) goto LAB_014ff2d8;
            lVar4 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(param_2 + 0x48),*(undefined8 *)(lVar5 + 0x10),
                                    uRam0000000003d2fb00);
            *(long *)(param_2 + 0x18) = lVar4;
            if (lVar4 != 0) {
              /*Core.Audio.AudioEvent$$Play*/ func_0x01638d80(*(undefined4 *)(lVar5 + 0x18),lVar4,*(undefined8 *)(lVar5 + 0x20),
                              /*STR('AllCharacter')*/ uRam0000000003d68cc8,0);
            }
            *(undefined4 *)(param_2 + 0x30) = 0;
            *(undefined1 *)(param_2 + 0x3c) = 0;
            *(undefined4 *)(param_2 + 0x38) = 0xbf800000;
            if (*(long *)(lVar5 + 0x30) != 0) {
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_68,*(long *)(lVar5 + 0x30),uRam0000000003d3bf10);
              uStack_48 = uStack_60;
              uStack_50 = uStack_68;
              lStack_40 = lStack_58;
              while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_50,uRam0000000003d32f58), (uVar3 & 1) != 0) {
                if (lStack_40 == 0) goto LAB_014ff2dc;
                if (*(long *)(param_2 + 0x18) == 0) {
                  func_0x00f78af4();
                  goto code_r0x014ff2e8;
                }
                /*Core.Audio.AudioEvent$$SetParameter*/ func_0x01638fc8(*(undefined4 *)(lStack_40 + 0x18),*(long *)(param_2 + 0x18),
                                *(undefined8 *)(lStack_40 + 0x10),0,0);
              }
              /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_50,uRam0000000003d32f50);
            }
          }
        }
      }
    }
    if (*(long *)(param_2 + 0x18) != 0) {
      iVar2 = /*Core.Audio.AudioEvent$$IsPlaying*/ func_0x01639214(*(long *)(param_2 + 0x18),0);
      if (iVar2 != 0) {
        fVar6 = *(float *)(param_2 + 0x30) + param_1;
        *(float *)(param_2 + 0x30) = fVar6;
        if (20.0 < fVar6) {
          if (*(long *)(param_2 + 0x18) == 0) goto LAB_014ff2d8;
          /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(param_2 + 0x18),0,0);
        }
        if ((*(char *)(param_2 + 0x3c) != '\0') && (0.0 <= *(float *)(param_2 + 0x38))) {
          *(float *)(param_2 + 0x38) = *(float *)(param_2 + 0x38) - param_1;
          /*UnityEngine.Mathf$$InverseLerp*/ func_0x0323d5e4(0,0x3e800000,0);
          uVar7 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(0);
          /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0,0x3f800000,uVar7,0);
          if (*(long *)(param_2 + 0x18) == 0) goto LAB_014ff2d8;
          /*Core.Audio.AudioEvent$$SetVolume*/ func_0x01638ef8(uVar7,*(long *)(param_2 + 0x18),0);
          if (*(float *)(param_2 + 0x38) <= 0.0) {
            if (*(long *)(param_2 + 0x18) == 0) goto LAB_014ff2d8;
            /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(param_2 + 0x18),1,0);
            *(undefined1 *)(param_2 + 0x3c) = 0;
            *(undefined4 *)(param_2 + 0x38) = 0xbf800000;
          }
        }
      }
      return;
    }
  }
LAB_014ff2d8:
  func_0x00f78af4();
LAB_014ff2dc:
  func_0x00f78af4();
code_r0x014ff2e8:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14ff2ec);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14ff334 | Atlas.Audio.SpeechManager.IsPlaying
// ============================================================

bool Atlas_Audio_SpeechManager__IsPlaying(long param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iStack_24;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    iStack_24 = 0;
    lVar1 = *(long *)(param_1 + 0x18) + 0x28;
    iVar3 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar1,0);
    bVar2 = false;
    if (iVar3 != 0) {
      /*FMOD.Studio.EventInstance$$getPlaybackState*/ func_0x016dfb5c(lVar1,&iStack_24,0);
      bVar2 = iStack_24 != 2;
    }
    return bVar2;
  }
  return false;
}



// ============================================================
// RVA: 0x14ff348 | Atlas.Audio.SpeechManager..ctor
// ============================================================

undefined1  [16] Atlas_Audio_SpeechManager___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4ce1 & 1) == 0) {
    func_0x00f78a20(0x3d2fae0);
    func_0x00f78a20(0x3d1c458);
    func_0x00f78a20(0x3d3da10);
    func_0x00f78a20(0x3d1e318);
    bRam0000000003eb4ce1 = 1;
  }
  *(undefined4 *)(param_1 + 0x38) = 0xbf800000;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechManager.SpeechEvent>_TypeInfo*/ uRam0000000003d1e318);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar1,uRam0000000003d3da10);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, AudioEvent>_TypeInfo*/ uRam0000000003d1c458);
  /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar1,uRam0000000003d2fae0);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



