// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Arcade.ArcadeEventCollector

// ============================================================
// RVA: 0x144e1b4 | Atlas.Arcade.ArcadeEventCollector..ctor
// ============================================================

undefined1  [16] Atlas_Arcade_ArcadeEventCollector___ctor(ulong param_1)

{
  undefined8 extraout_x1;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4759 & 1) == 0) {
    func_0x00f78a20(0x3d2a628);
    bRam0000000003eb4759 = 1;
  }
  if (param_1 != 0) {
    if ((bRam0000000003eb474f & 1) == 0) {
      func_0x00f78a20(0x3d24dd0,0);
      bRam0000000003eb474f = 1;
    }
    *(undefined8 *)(param_1 + 0x78) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    *(undefined4 *)(param_1 + 0x88) = 3;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_1;
    return auVar2;
  }
  func_0x00f78af4(0,uRam0000000003d2a628);
  auVar1._8_8_ = extraout_x1;
  auVar1._0_8_ = 0x8000;
  return auVar1;
}



// ============================================================
// RVA: 0x144e32c | Atlas.Arcade.ArcadeEventCollector.add_OnCollectibleCollected
// ============================================================

long Atlas_Arcade_ArcadeEventCollector__add_OnCollectibleCollected(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb4750 & 1) == 0) {
    func_0x00f78a20(0x3d1b3f0);
    bRam0000000003eb4750 = 1;
  }
  lVar5 = *(long *)(param_1 + 0xa0);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<CollectibleBehaviour>_TypeInfo*/ lRam0000000003d1b3f0))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0xa0),plVar2,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb4751 & 1) == 0) {
    func_0x00f78a20(0x3d1b3f0);
    bRam0000000003eb4751 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0xa0);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*System.Action<CollectibleBehaviour>_TypeInfo*/ lRam0000000003d1b3f0))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  lVar5 = func_0x00f78e5c(plVar4);
  return *(long *)(lVar5 + 0x98);
}



// ============================================================
// RVA: 0x144e3cc | Atlas.Arcade.ArcadeEventCollector.remove_OnCollectibleCollected
// ============================================================

long Atlas_Arcade_ArcadeEventCollector__remove_OnCollectibleCollected
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000003eb4751 & 1) == 0) {
    func_0x00f78a20(0x3d1b3f0);
    bRam0000000003eb4751 = 1;
  }
  lVar4 = *(long *)(param_1 + 0xa0);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<CollectibleBehaviour>_TypeInfo*/ lRam0000000003d1b3f0))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0xa0),plVar2,lVar4);
    bVar1 = lVar4 == lVar3;
    lVar4 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  return *(long *)(lVar4 + 0x98);
}



// ============================================================
// RVA: 0x144e46c | Atlas.Arcade.ArcadeEventCollector.get_CollectibleBehaviours
// ============================================================

undefined8 Atlas_Arcade_ArcadeEventCollector__get_CollectibleBehaviours(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



// ============================================================
// RVA: 0x144e474 | Atlas.Arcade.ArcadeEventCollector.get_GameType
// ============================================================

undefined8 Atlas_Arcade_ArcadeEventCollector__get_GameType(void)

{
  return 7;
}



// ============================================================
// RVA: 0x144e47c | Atlas.Arcade.ArcadeEventCollector.GetAdditionalScenesToLoad
// ============================================================

long Atlas_Arcade_ArcadeEventCollector__GetAdditionalScenesToLoad(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if ((bRam0000000003eb4752 & 1) == 0) {
    func_0x00f78a20(0x3d2a630);
    func_0x00f78a20(0x3d3bcd8);
    func_0x00f78a20(0x3d3bcd0);
    func_0x00f78a20(0x3d1dd98);
    bRam0000000003eb4752 = 1;
  }
  lVar1 = func_0x00f78aec(/*System.Collections.Generic.List<SceneInfo>_TypeInfo*/ uRam0000000003d1dd98);
  /*System.Collections.Generic.List<SceneInfo>$$.ctor*/ func_0x02457afc(lVar1,uRam0000000003d3bcd0);
  lVar2 = Atlas_Arcade_ArcadeEvent_ArcadeCollectorEventDefinition___get_EventDefinition
                    (param_1,uRam0000000003d2a630);
  if ((lVar2 != 0) && (lVar1 != 0)) {
    /*System.Collections.Generic.List<SceneInfo>$$Add*/ func_0x024587b4(lVar1,*(undefined8 *)(lVar2 + 0x58),uRam0000000003d3bcd8);
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb4753 & 1) == 0) {
    func_0x00f78a20(0x3d1ff30);
    func_0x00f78a20(0x3d20050);
    func_0x00f78a20(0x3d3a0f8);
    func_0x00f78a20(0x3d1d878);
    func_0x00f78a20(0x3d78f60);
    bRam0000000003eb4753 = 1;
  }
  uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<CollectibleBehaviour>_TypeInfo*/ uRam0000000003d1d878);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar3,uRam0000000003d3a0f8);
  *(undefined8 *)(lVar1 + 0x98) = uVar3;
  plVar4 = *(long **)(lVar1 + 0x10);
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(/*Atlas.Contexts.BattleGameContext_TypeInfo*/ lRam0000000003d20050 + 300) <= *(byte *)(*plVar4 + 300)) &&
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.BattleGameContext_TypeInfo*/ lRam0000000003d20050 + 300) * 8 + -8)
        == /*Atlas.Contexts.BattleGameContext_TypeInfo*/ lRam0000000003d20050)) {
      *(undefined1 *)(plVar4 + 0x4c) = 0;
    }
  }
  uVar3 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
  lVar2 = /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar3,/*STR('event:/Gameplay_SFX/Smash_Collectibles')*/ uRam0000000003d78f60,0,0,0);
  *(undefined8 *)(lVar1 + 0xa8) = uVar3;
  return lVar2;
}



// ============================================================
// RVA: 0x144e54c | Atlas.Arcade.ArcadeEventCollector.OnInit
// ============================================================

void Atlas_Arcade_ArcadeEventCollector__OnInit(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  if ((bRam0000000003eb4753 & 1) == 0) {
    func_0x00f78a20(0x3d1ff30);
    func_0x00f78a20(0x3d20050);
    func_0x00f78a20(0x3d3a0f8);
    func_0x00f78a20(0x3d1d878);
    func_0x00f78a20(0x3d78f60);
    bRam0000000003eb4753 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<CollectibleBehaviour>_TypeInfo*/ uRam0000000003d1d878);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar1,uRam0000000003d3a0f8);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  plVar2 = *(long **)(param_1 + 0x10);
  if (plVar2 != (long *)0x0) {
    if ((*(byte *)(/*Atlas.Contexts.BattleGameContext_TypeInfo*/ lRam0000000003d20050 + 300) <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.BattleGameContext_TypeInfo*/ lRam0000000003d20050 + 300) * 8 + -8)
        == /*Atlas.Contexts.BattleGameContext_TypeInfo*/ lRam0000000003d20050)) {
      *(undefined1 *)(plVar2 + 0x4c) = 0;
    }
  }
  uVar1 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
  /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar1,/*STR('event:/Gameplay_SFX/Smash_Collectibles')*/ uRam0000000003d78f60,0,0,0);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  return;
}



// ============================================================
// RVA: 0x144e664 | Atlas.Arcade.ArcadeEventCollector.OnInitPools
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x144e700 | Atlas.Arcade.ArcadeEventCollector.OnDeInit
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x144e774 | Atlas.Arcade.ArcadeEventCollector.OnUpdate
// ============================================================

void Atlas_Arcade_ArcadeEventCollector__OnUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x144e778 | Atlas.Arcade.ArcadeEventCollector.OnFindAndInitBehaviours
// ============================================================

void Atlas_Arcade_ArcadeEventCollector__OnFindAndInitBehaviours
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 auStack_48 [2];
  
  if ((bRam0000000003eb4756 & 1) == 0) {
    func_0x00f78a20(0x3d436c8);
    func_0x00f78a20(0x3d536d0);
    func_0x00f78a20(0x3d57820);
    func_0x00f78a20(0x3d26d08);
    func_0x00f78a20(0x3d3a6a0);
    func_0x00f78a20(0x3d3a690);
    func_0x00f78a20(0x3d3a108);
    func_0x00f78a20(0x3d3a6d0);
    func_0x00f78a20(0x3d3a110);
    func_0x00f78a20(0x3d1d990);
    bRam0000000003eb4756 = 1;
  }
  auStack_48[0] = 0;
  if (param_3 != 0) {
    iVar1 = /*Core.Scenes.AddressablesSceneLoader$$TryGetLastRequestedScene*/ func_0x016631e0(param_3,auStack_48,0);
    if (iVar1 == 0) {
      return;
    }
    lVar2 = func_0x00f78aec(/*System.Collections.Generic.List<GameObject>_TypeInfo*/ uRam0000000003d1d990);
    /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(lVar2,0x32,uRam0000000003d3a690);
    /*UnityEngine.SceneManagement.Scene$$GetRootGameObjects*/ func_0x0325d1d8(auStack_48,lVar2,0);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) == 0) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar3 = *(long *)(*(long *)(lVar2 + 0x10) + 0x20);
      if ((lVar3 != 0) && (lVar3 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar3,uRam0000000003d57820), lVar3 != 0)) {
        /*UnityEngine.Component$$GetComponentsInChildren<PickupSpotBehaviour>*/ func_0x018394b8(lVar3,*(undefined8 *)(param_1 + 0x98),uRam0000000003d536d0);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(lVar2,uRam0000000003d3a6a0);
        lVar2 = *(long *)(param_1 + 0x98);
        if (lVar2 != 0) {
          lVar3 = 0;
          do {
            uVar5 = (uint)lVar3;
            if ((int)*(uint *)(lVar2 + 0x18) <= (int)uVar5) {
              return;
            }
            if (*(uint *)(lVar2 + 0x18) <= uVar5) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar2 = *(long *)(*(long *)(lVar2 + 0x10) + lVar3 * 8 + 0x20);
            if (lVar2 == 0) break;
            *(uint *)(lVar2 + 0x20) = uVar5;
            uVar4 = func_0x00f78aec(/*Atlas.Gameplay.CollectibleBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d26d08);
            Atlas_Gameplay_CollectibleBehaviour_HitVolumeDelegate___ctor
                      (uVar4,param_1,uRam0000000003d436c8,0);
            Atlas_Gameplay_CollectibleBehaviour__add_OnEnter(lVar2,uVar4,0);
            lVar2 = *(long *)(param_1 + 0x98);
            lVar3 = lVar3 + 1;
          } while (lVar2 != 0);
        }
      }
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x144e974 | Atlas.Arcade.ArcadeEventCollector.RecordStats
// ============================================================

/* WARNING: Possible PIC construction at 0x01504cc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01504cc4) */
/* WARNING: Removing unreachable block (ram,0x01504ce8) */
/* WARNING: Removing unreachable block (ram,0x01504cc8) */

long * Atlas_Arcade_ArcadeEventCollector__RecordStats(long param_1)

{
  ushort uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  int *piVar17;
  undefined8 unaff_x19;
  long *unaff_x21;
  ulong unaff_x22;
  code *pcVar18;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  code **ppcVar19;
  undefined1 *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  uint uStack_184;
  ulong uStack_180;
  long *plStack_178;
  undefined1 auStack_170 [16];
  code ****ppppcStack_160;
  code *pcStack_158;
  code ***pppcStack_120;
  code *pcStack_118;
  code **ppcStack_e0;
  code *pcStack_d8;
  long alStack_b0 [2];
  code *apcStack_a0 [2];
  ulong uStack_90;
  long *plStack_88;
  long lStack_60;
  code *pcStack_58;
  
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (lVar13 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar13 == 0)) {
    pcVar7 = (code *)func_0x00f78af4();
    if ((bRam0000000003eb4757 & 1) == 0) {
      func_0x00f78a20(0x3d2a630);
      bRam0000000003eb4757 = 1;
    }
    lVar13 = Atlas_Arcade_ArcadeEvent_ArcadeCollectorEventDefinition___get_EventDefinition
                       (pcVar7,uRam0000000003d2a630);
    if (lVar13 != 0) {
      return (long *)(ulong)*(uint *)(lVar13 + 0x54);
    }
    auVar22 = func_0x00f78af4();
    lVar13 = auVar22._8_8_;
    plVar5 = auVar22._0_8_;
    plVar6 = plVar5;
    pcStack_58 = pcVar7;
    if ((bRam0000000003eb4758 & 1) == 0) {
      func_0x00f78a20(0x3d29fd8);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d5b948);
      func_0x00f78a20(0x3d5b9f0);
      plVar6 = (long *)func_0x00f78a20(0x3d70fc0);
      bRam0000000003eb4758 = 1;
    }
    if (*(char *)((long)plVar5 + 0x8c) == '\0') {
      return plVar6;
    }
    if (lVar13 != 0) {
      Atlas_Gameplay_CollectibleBehaviour__PlayDestroyAnimation(lVar13,0);
      lVar14 = plVar5[0x15];
      uVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar13,0);
      if (lVar14 != 0) {
        /*Core.Audio.AudioEvent$$Play*/ func_0x01638d28(lVar14,uVar11,0);
        if ((plVar5[5] != 0) && (lVar14 = *(long *)(plVar5[5] + 0x10), lVar14 != 0)) {
          lVar14 = /*Core.Containers.PoolManager$$AcquireObject<VFXBehaviour>*/ func_0x018bc32c(lVar14,/*STR('P_VFX_CollectibleBreak')*/ uRam0000000003d70fc0,uRam0000000003d5b948);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar14,0,0);
          if (iVar3 == 0) {
code_r0x0144eb80:
            if (plVar5[0x14] != 0) {
              /*System.Action<InputActionRebindingExtensions.RebindingOperation>$$Invoke*/ func_0x01e47f3c(plVar5[0x14],lVar13,uRam0000000003d29fd8);
            }
            iVar3 = (int)plVar5[0xe] + 1;
            plVar6 = plVar5;
            if (*(char *)((long)plVar5 + 0x8d) == '\0') {
              *(int *)(plVar5 + 0xe) = iVar3;
              plVar6 = (long *)(**(code **)(*plVar5 + 0x238))
                                         (plVar5,*(undefined8 *)(*plVar5 + 0x240));
              if ((int)plVar6 < iVar3) {
                plVar6 = (long *)(**(code **)(*plVar5 + 0x238))
                                           (plVar5,*(undefined8 *)(*plVar5 + 0x240));
                *(int *)(plVar5 + 0xe) = (int)plVar6;
              }
            }
            return plVar6;
          }
          if (((plVar5[5] != 0) && (lVar8 = *(long *)(plVar5[5] + 0x10), lVar8 != 0)) &&
             (/*Core.Containers.PoolManager$$ReturnObjectAtTime<VFXBehaviour>*/ func_0x018bcbd4(0x40000000,lVar8,/*STR('P_VFX_CollectibleBreak')*/ uRam0000000003d70fc0,lVar14,uRam0000000003d5b9f0),
             lVar14 != 0)) {
            lVar14 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar14,0);
            lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar13,0);
            if ((lVar8 != 0) && (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar8,0), lVar14 != 0)) {
              /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(lVar14,0);
              goto code_r0x0144eb80;
            }
          }
        }
      }
    }
    lVar13 = func_0x00f78af4();
    return *(long **)(lVar13 + 0x30);
  }
  uVar12 = (ulong)*(uint *)(param_1 + 0x70);
  if (*(long *)(lVar13 + 0x20) == 0) {
LAB_01505234:
    func_0x00f78af4();
  }
  else {
    unaff_x19 = 0x7c;
    unaff_x21 = (long *)Atlas_Stats_StatsData__GetStat();
    unaff_x22 = uVar12;
    if (*(long *)(lVar13 + 0x20) == 0) goto LAB_01505234;
    Atlas_Stats_StatsData__SetStat(*(long *)(lVar13 + 0x20),0x7c,uVar12);
    if (*(long *)(lVar13 + 0x20) == 0) goto LAB_01505234;
    plVar6 = (long *)Atlas_Stats_StatsData__GetStat(*(long *)(lVar13 + 0x20),0x7c);
    if ((int)plVar6 == (int)unaff_x21) {
      return plVar6;
    }
    lVar14 = *(long *)(lVar13 + 0x28);
    if (lVar14 == 0) goto LAB_01505234;
    if (0x7c < *(uint *)(lVar14 + 0x18)) {
      pcVar7 = *(code **)(lVar14 + 0x400);
      if (pcVar7 == (code *)0x0) {
        return (long *)0x0;
      }
      uVar11 = 0;
      pcStack_58 = pcVar7;
      lVar13 = *(long *)(pcVar7 + 0x68);
      if (lVar13 == 0) {
        ppcVar19 = &pcStack_58;
        lVar14 = 1;
      }
      else {
        lVar14 = *(long *)(lVar13 + 0x18);
        if (lVar14 == 0) {
          return (long *)pcVar7;
        }
        ppcVar19 = (code **)(lVar13 + 0x20);
      }
      lVar13 = 0;
      do {
        pcVar15 = ppcVar19[lVar13];
        pcVar18 = *(code **)(pcVar15 + 0x10);
        plVar6 = *(long **)(pcVar15 + 0x20);
        lVar8 = *(long *)(pcVar15 + 0x28);
        if (*(short *)(lVar8 + 0x48) == -1) {
          func_0x00f78ad8(lVar8,uVar11);
        }
        iVar3 = func_0x00f78a4c(lVar8);
        if (iVar3 == 0) {
          if (((plVar6 == (long *)0x0) || (*(short *)(lVar8 + 0x48) == -1)) ||
             (((*(byte *)(*plVar6 + 0x115) & 1) != 0 || (*(long *)(pcVar7 + 0x18) == 0))))
          goto code_r0x02924d98;
          iVar3 = func_0x00f78a44(lVar8);
          iVar4 = func_0x00f78ec0(lVar8);
          if (iVar3 == 0) {
            uVar1 = *(ushort *)(lVar8 + 0x48);
            if (iVar4 == 0) {
              lVar8 = *plVar6 + (ulong)uVar1 * 0x10;
              auVar22 = (**(code **)(lVar8 + 0x138))(plVar6,*(undefined8 *)(lVar8 + 0x140));
              goto code_r0x02924da4;
            }
            lVar8 = func_0x00f78a48(lVar8);
            lVar16 = *plVar6;
            uVar12 = (ulong)*(ushort *)(lVar16 + 0x12a);
            if (uVar12 != 0) {
              piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == lVar8) {
                  puVar9 = (undefined8 *)
                           (lVar16 + (long)(int)(*piVar17 + (uint)uVar1) * 0x10 + 0x138);
                  goto code_r0x02924e68;
                }
                piVar17 = piVar17 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar9 = (undefined8 *)func_0x00fac1f0(plVar6,lVar8,(ulong)uVar1);
code_r0x02924e68:
            pcVar15 = (code *)*puVar9;
            puVar9 = (undefined8 *)puVar9[1];
          }
          else {
            if (iVar4 == 0) {
              uVar11 = *(undefined8 *)(*plVar6 + (ulong)*(ushort *)(lVar8 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar16 = *plVar6;
              uVar12 = (ulong)*(ushort *)(lVar16 + 0x12a);
              if (uVar12 != 0) {
                piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)(lVar8 + 0x18)) {
                    lVar16 = lVar16 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar8 + 0x48)) * 0x10
                             + 0x138;
                    goto code_r0x02924e40;
                  }
                  piVar17 = piVar17 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar16 = func_0x00fac1f0(plVar6);
code_r0x02924e40:
              uVar11 = *(undefined8 *)(lVar16 + 8);
            }
            puVar9 = (undefined8 *)func_0x00f78acc(uVar11,lVar8);
            pcVar15 = (code *)*puVar9;
          }
          auVar22 = (*pcVar15)(plVar6,puVar9);
        }
        else if (*(char *)(lVar8 + 0x4a) == '\0') {
          auVar22 = (*pcVar18)(lVar8);
        }
        else {
code_r0x02924d98:
          auVar22 = (*pcVar18)(plVar6,lVar8);
        }
code_r0x02924da4:
        uVar11 = auVar22._8_8_;
        lVar13 = lVar13 + 1;
        if (lVar13 == lVar14) {
          return auVar22._0_8_;
        }
      } while( true );
    }
  }
  uVar11 = func_0x00f78b24();
  auVar23 = func_0x00f78ac0(uVar11,0);
  uVar10 = auVar23._8_4_;
  pcVar7 = Atlas_Stats_StatsManager__GetStat;
  lVar14 = *(long *)(auVar23._0_8_ + 0x20);
  if (lVar14 == 0) {
    auVar23 = func_0x00f78af4();
    uVar10 = auVar23._8_4_;
    puVar20 = &stack0xffffffffffffffb0;
    lVar14 = *(long *)(auVar23._0_8_ + 0x18);
    if (lVar14 == 0) {
      auVar23 = func_0x00f78af4();
      uVar10 = auVar23._8_4_;
      pcStack_58 = Atlas_Stats_StatsManager__GetCommittedStat;
      lVar14 = *(long *)(auVar23._0_8_ + 0x10);
      if (lVar14 == 0) {
        auVar22 = func_0x00f78af4();
        lVar13 = auVar22._0_8_;
        uStack_90 = unaff_x22;
        plStack_88 = unaff_x21;
        if (*(long *)(lVar13 + 0x10) != 0) {
          unaff_x21 = (long *)Atlas_Stats_StatsData__GetStat();
          unaff_x19 = auVar22._8_8_;
          if (*(long *)(lVar13 + 0x18) != 0) {
            iVar3 = Atlas_Stats_StatsData__GetStat(*(long *)(lVar13 + 0x18),auVar22._8_8_);
            return (long *)(ulong)(uint)(iVar3 + (int)unaff_x21);
          }
        }
        auVar22._8_8_ = unaff_x19;
        auVar22._0_8_ = lVar13;
        auVar21 = func_0x00f78af4();
        lVar13 = auVar21._8_8_;
        apcStack_a0[1] = Atlas_Stats_StatsManager__GetSummedCommittedStats;
        apcStack_a0[0] = (code *)&stack0xffffffffffffff90;
        if (lVar13 != 0) {
          if ((int)*(ulong *)(lVar13 + 0x18) < 1) {
            unaff_x21 = (long *)0x0;
          }
          else {
            unaff_x21 = (long *)0x0;
            unaff_x22 = 0;
            uVar12 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
            do {
              auVar22 = auVar21;
              if (uVar12 <= unaff_x22) goto LAB_01505374;
              lVar14 = *(long *)(auVar21._0_8_ + 0x10);
              if (lVar14 == 0) goto LAB_01505370;
              iVar3 = Atlas_Stats_StatsData__GetStat
                                (lVar14,*(undefined4 *)(lVar13 + 0x20 + unaff_x22 * 4));
              unaff_x21 = (long *)(ulong)(uint)(iVar3 + (int)unaff_x21);
              unaff_x22 = unaff_x22 + 1;
              uVar12 = (ulong)*(uint *)(lVar13 + 0x18);
            } while ((long)unaff_x22 < (long)(int)*(uint *)(lVar13 + 0x18));
          }
          return unaff_x21;
        }
LAB_01505370:
        func_0x00f78af4();
LAB_01505374:
        uVar11 = func_0x00f78b24();
        auVar21 = func_0x00f78ac0(uVar11,0);
        lVar13 = auVar21._8_8_;
        pcStack_d8 = Atlas_Stats_StatsManager__GetSummedTransactionStats;
        ppcStack_e0 = apcStack_a0;
        if (lVar13 != 0) {
          if ((int)*(ulong *)(lVar13 + 0x18) < 1) {
            unaff_x21 = (long *)0x0;
          }
          else {
            unaff_x21 = (long *)0x0;
            unaff_x22 = 0;
            uVar12 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
            do {
              auVar22 = auVar21;
              if (uVar12 <= unaff_x22) goto LAB_0150540c;
              lVar14 = *(long *)(auVar21._0_8_ + 0x18);
              if (lVar14 == 0) goto LAB_01505408;
              iVar3 = Atlas_Stats_StatsData__GetStat
                                (lVar14,*(undefined4 *)(lVar13 + 0x20 + unaff_x22 * 4));
              unaff_x21 = (long *)(ulong)(uint)(iVar3 + (int)unaff_x21);
              unaff_x22 = unaff_x22 + 1;
              uVar12 = (ulong)*(uint *)(lVar13 + 0x18);
            } while ((long)unaff_x22 < (long)(int)*(uint *)(lVar13 + 0x18));
          }
          return unaff_x21;
        }
LAB_01505408:
        func_0x00f78af4();
LAB_0150540c:
        uVar11 = func_0x00f78b24();
        auVar21 = func_0x00f78ac0(uVar11,0);
        lVar13 = auVar21._8_8_;
        pcStack_118 = Atlas_Stats_StatsManager__GetSummedGlobalStats;
        pppcStack_120 = &ppcStack_e0;
        if (lVar13 != 0) {
          if ((int)*(ulong *)(lVar13 + 0x18) < 1) {
            unaff_x21 = (long *)0x0;
          }
          else {
            unaff_x21 = (long *)0x0;
            unaff_x22 = 0;
            uVar12 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
            do {
              if (uVar12 <= unaff_x22) {
                uVar11 = func_0x00f78b24();
                func_0x00f78ac0(uVar11,0);
                auVar22 = auVar21;
                goto LAB_015054a8;
              }
              iVar3 = Atlas_Stats_StatsManager__GetGlobalStat
                                (auVar21._0_8_,*(undefined4 *)(lVar13 + 0x20 + unaff_x22 * 4));
              unaff_x21 = (long *)(ulong)(uint)(iVar3 + (int)unaff_x21);
              unaff_x22 = unaff_x22 + 1;
              uVar12 = (ulong)*(uint *)(lVar13 + 0x18);
            } while ((long)unaff_x22 < (long)(int)*(uint *)(lVar13 + 0x18));
          }
          return unaff_x21;
        }
LAB_015054a8:
        uVar11 = func_0x00f78af4();
        pcStack_158 = Atlas_Stats_StatsManager__GetStatFromString;
        uStack_180 = unaff_x22;
        plStack_178 = unaff_x21;
        ppppcStack_160 = &pppcStack_120;
        auStack_170 = auVar22;
        if ((bRam0000000003eb4d0b & 1) == 0) {
          func_0x00f78a20(0x3d24d58);
          bRam0000000003eb4d0b = 1;
        }
        uStack_184 = 0;
        if (((*(ushort *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Stats.StatsManager_TypeInfo*/ lRam0000000003d24d58 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        Atlas_Stats_StatsManager__TryGetStatFromString(uVar11,&uStack_184);
        return (long *)(ulong)uStack_184;
      }
      puVar2 = &stack0xffffffffffffffb0;
      pcVar7 = Atlas_Stats_StatsManager__GetCommittedStat;
    }
    else {
      puVar2 = &stack0xffffffffffffffc0;
      pcVar7 = Atlas_Stats_StatsManager__GetTransactionStat;
      puVar20 = &stack0xffffffffffffffc0;
    }
  }
  else {
    puVar2 = &stack0xffffffffffffffd0;
    puVar20 = &stack0xfffffffffffffff0;
  }
  *(undefined1 **)(puVar2 + -0x10) = puVar20;
  *(code **)(puVar2 + -8) = pcVar7;
  lVar14 = *(long *)(lVar14 + 0x10);
  if (lVar14 == 0) {
    func_0x00f78af4();
  }
  else if (uVar10 < *(uint *)(lVar14 + 0x18)) {
    return (long *)(ulong)*(uint *)(lVar14 + (long)(int)uVar10 * 4 + 0x20);
  }
  uVar11 = func_0x00f78b24();
  auVar22 = func_0x00f78ac0(uVar11,0);
  lVar14 = auVar22._8_8_;
  plVar5 = auVar22._0_8_;
  *(undefined8 *)(puVar2 + -0x50) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x48) = unaff_x23;
  *(ulong *)(puVar2 + -0x40) = unaff_x22;
  *(long **)(puVar2 + -0x38) = unaff_x21;
  *(long *)(puVar2 + -0x30) = lVar13;
  *(undefined8 *)(puVar2 + -0x28) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x20) = puVar2 + -0x10;
  *(code **)(puVar2 + -0x18) = Atlas_Stats_StatsData__UpdateToLargestValues;
  plVar6 = plVar5;
  if ((bRam0000000003eb4d06 & 1) == 0) {
    plVar6 = (long *)func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4d06 = 1;
  }
  lVar13 = plVar5[2];
  if (((lVar13 != 0) && (lVar14 != 0)) && (*(long *)(lVar14 + 0x10) != 0)) {
    iVar3 = *(int *)(lVar13 + 0x18);
    unaff_x22 = *(ulong *)(*(long *)(lVar14 + 0x10) + 0x18);
    if (iVar3 < (int)unaff_x22) {
      lVar13 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,unaff_x22);
      plVar6 = (long *)/*System.Array$$Copy*/ func_0x0292c49c(plVar5[2],lVar13,iVar3,0);
      plVar5[2] = lVar13;
    }
    if (0 < (int)unaff_x22) {
      if (lVar13 == 0) goto LAB_01504c70;
      uVar12 = 0;
      uVar10 = *(uint *)(lVar13 + 0x18);
      do {
        if (uVar10 == uVar12) {
LAB_01504c64:
          uVar11 = func_0x00f78b24();
          func_0x00f78ac0(uVar11,0);
          goto LAB_01504c70;
        }
        lVar8 = *(long *)(lVar14 + 0x10);
        if (lVar8 == 0) goto LAB_01504c70;
        if ((*(uint *)(lVar8 + 0x18) <= uVar12) || (uVar10 <= uVar12)) goto LAB_01504c64;
        iVar3 = *(int *)(lVar13 + 0x20 + uVar12 * 4);
        iVar4 = *(int *)(lVar8 + uVar12 * 4 + 0x20);
        if (iVar3 <= iVar4) {
          iVar3 = iVar4;
        }
        *(int *)(lVar13 + 0x20 + uVar12 * 4) = iVar3;
        uVar12 = uVar12 + 1;
      } while ((unaff_x22 & 0xffffffff) != uVar12);
    }
    return plVar6;
  }
LAB_01504c70:
  func_0x00f78af4();
  *(ulong *)(puVar2 + -0x80) = unaff_x22;
  *(long *)(puVar2 + -0x78) = lVar13;
  *(undefined1 (*) [16])(puVar2 + -0x70) = auVar22;
  *(undefined1 **)(puVar2 + -0x60) = puVar2 + -0x20;
  *(code **)(puVar2 + -0x58) = Atlas_Stats_StatsData__Clone;
  if ((bRam0000000003eb4d07 & 1) == 0) {
    func_0x00f78a20(0x3d24d50);
    bRam0000000003eb4d07 = 1;
  }
  plVar6 = (long *)func_0x00f78aec(/*Atlas.Stats.StatsData_TypeInfo*/ uRam0000000003d24d50);
  return plVar6;
}



// ============================================================
// RVA: 0x144e9a8 | Atlas.Arcade.ArcadeEventCollector.GetMaxScore
// ============================================================

long * Atlas_Arcade_ArcadeEventCollector__GetMaxScore(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000003eb4757 & 1) == 0) {
    func_0x00f78a20(0x3d2a630);
    bRam0000000003eb4757 = 1;
  }
  lVar2 = Atlas_Arcade_ArcadeEvent_ArcadeCollectorEventDefinition___get_EventDefinition
                    (param_1,uRam0000000003d2a630);
  if (lVar2 != 0) {
    return (long *)(ulong)*(uint *)(lVar2 + 0x54);
  }
  auVar8 = func_0x00f78af4();
  lVar2 = auVar8._8_8_;
  plVar3 = auVar8._0_8_;
  plVar4 = plVar3;
  if ((bRam0000000003eb4758 & 1) == 0) {
    func_0x00f78a20(0x3d29fd8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5b948);
    func_0x00f78a20(0x3d5b9f0);
    plVar4 = (long *)func_0x00f78a20(0x3d70fc0);
    bRam0000000003eb4758 = 1;
  }
  if (*(char *)((long)plVar3 + 0x8c) == '\0') {
    return plVar4;
  }
  if (lVar2 != 0) {
    Atlas_Gameplay_CollectibleBehaviour__PlayDestroyAnimation(lVar2,0);
    lVar7 = plVar3[0x15];
    uVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar2,0);
    if (lVar7 != 0) {
      /*Core.Audio.AudioEvent$$Play*/ func_0x01638d28(lVar7,uVar5,0);
      if ((plVar3[5] != 0) && (lVar7 = *(long *)(plVar3[5] + 0x10), lVar7 != 0)) {
        lVar7 = /*Core.Containers.PoolManager$$AcquireObject<VFXBehaviour>*/ func_0x018bc32c(lVar7,/*STR('P_VFX_CollectibleBreak')*/ uRam0000000003d70fc0,uRam0000000003d5b948);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,0,0);
        if (iVar1 == 0) {
code_r0x0144eb80:
          if (plVar3[0x14] != 0) {
            /*System.Action<InputActionRebindingExtensions.RebindingOperation>$$Invoke*/ func_0x01e47f3c(plVar3[0x14],lVar2,uRam0000000003d29fd8);
          }
          iVar1 = (int)plVar3[0xe] + 1;
          plVar4 = plVar3;
          if (*(char *)((long)plVar3 + 0x8d) == '\0') {
            *(int *)(plVar3 + 0xe) = iVar1;
            plVar4 = (long *)(**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240))
            ;
            if ((int)plVar4 < iVar1) {
              plVar4 = (long *)(**(code **)(*plVar3 + 0x238))
                                         (plVar3,*(undefined8 *)(*plVar3 + 0x240));
              *(int *)(plVar3 + 0xe) = (int)plVar4;
            }
          }
          return plVar4;
        }
        if (((plVar3[5] != 0) && (lVar6 = *(long *)(plVar3[5] + 0x10), lVar6 != 0)) &&
           (/*Core.Containers.PoolManager$$ReturnObjectAtTime<VFXBehaviour>*/ func_0x018bcbd4(0x40000000,lVar6,/*STR('P_VFX_CollectibleBreak')*/ uRam0000000003d70fc0,lVar7,uRam0000000003d5b9f0),
           lVar7 != 0)) {
          lVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar7,0);
          lVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar2,0);
          if ((lVar6 != 0) && (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar6,0), lVar7 != 0)) {
            /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(lVar7,0);
            goto code_r0x0144eb80;
          }
        }
      }
    }
  }
  lVar2 = func_0x00f78af4();
  return *(long **)(lVar2 + 0x30);
}



// ============================================================
// RVA: 0x144ea0c | Atlas.Arcade.ArcadeEventCollector.OnCollectibleHit
// ============================================================

long * Atlas_Arcade_ArcadeEventCollector__OnCollectibleHit(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  plVar2 = param_1;
  if ((bRam0000000003eb4758 & 1) == 0) {
    func_0x00f78a20(0x3d29fd8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5b948);
    func_0x00f78a20(0x3d5b9f0);
    plVar2 = (long *)func_0x00f78a20(0x3d70fc0);
    bRam0000000003eb4758 = 1;
  }
  if (*(char *)((long)param_1 + 0x8c) == '\0') {
    return plVar2;
  }
  if (param_2 != 0) {
    Atlas_Gameplay_CollectibleBehaviour__PlayDestroyAnimation(param_2,0);
    lVar5 = param_1[0x15];
    uVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_2,0);
    if (lVar5 != 0) {
      /*Core.Audio.AudioEvent$$Play*/ func_0x01638d28(lVar5,uVar3,0);
      if ((param_1[5] != 0) && (lVar5 = *(long *)(param_1[5] + 0x10), lVar5 != 0)) {
        lVar5 = /*Core.Containers.PoolManager$$AcquireObject<VFXBehaviour>*/ func_0x018bc32c(lVar5,/*STR('P_VFX_CollectibleBreak')*/ uRam0000000003d70fc0,uRam0000000003d5b948);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,0,0);
        if (iVar1 == 0) {
LAB_0144eb80:
          if (param_1[0x14] != 0) {
            /*System.Action<InputActionRebindingExtensions.RebindingOperation>$$Invoke*/ func_0x01e47f3c(param_1[0x14],param_2,uRam0000000003d29fd8);
          }
          iVar1 = (int)param_1[0xe] + 1;
          plVar2 = param_1;
          if (*(char *)((long)param_1 + 0x8d) == '\0') {
            *(int *)(param_1 + 0xe) = iVar1;
            plVar2 = (long *)(**(code **)(*param_1 + 0x238))
                                       (param_1,*(undefined8 *)(*param_1 + 0x240));
            if ((int)plVar2 < iVar1) {
              plVar2 = (long *)(**(code **)(*param_1 + 0x238))
                                         (param_1,*(undefined8 *)(*param_1 + 0x240));
              *(int *)(param_1 + 0xe) = (int)plVar2;
            }
          }
          return plVar2;
        }
        if (((param_1[5] != 0) && (lVar4 = *(long *)(param_1[5] + 0x10), lVar4 != 0)) &&
           (/*Core.Containers.PoolManager$$ReturnObjectAtTime<VFXBehaviour>*/ func_0x018bcbd4(0x40000000,lVar4,/*STR('P_VFX_CollectibleBreak')*/ uRam0000000003d70fc0,lVar5,uRam0000000003d5b9f0),
           lVar5 != 0)) {
          lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
          lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_2,0);
          if ((lVar4 != 0) && (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar4,0), lVar5 != 0)) {
            /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(lVar5,0);
            goto LAB_0144eb80;
          }
        }
      }
    }
  }
  lVar5 = func_0x00f78af4();
  return *(long **)(lVar5 + 0x30);
}



