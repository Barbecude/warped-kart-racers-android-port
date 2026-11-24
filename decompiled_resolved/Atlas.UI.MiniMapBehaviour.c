// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.MiniMapBehaviour

// ============================================================
// RVA: 0x1494d58 | Atlas.UI.MiniMapBehaviour.set_AllowCrown
// ============================================================

void Atlas_UI_MiniMapBehaviour__set_AllowCrown(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x8d) = param_2;
  return;
}



// ============================================================
// RVA: 0x1494d60 | Atlas.UI.MiniMapBehaviour.set_HideRespawningPlayers
// ============================================================

void Atlas_UI_MiniMapBehaviour__set_HideRespawningPlayers(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x8e) = param_2;
  return;
}



// ============================================================
// RVA: 0x1494d68 | Atlas.UI.MiniMapBehaviour.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x014951d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01495284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014952c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014952e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014953d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01495770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149523c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01495774) */
/* WARNING: Removing unreachable block (ram,0x014953d4) */
/* WARNING: Removing unreachable block (ram,0x014952e8) */
/* WARNING: Removing unreachable block (ram,0x0149531c) */
/* WARNING: Removing unreachable block (ram,0x01495360) */
/* WARNING: Removing unreachable block (ram,0x01495378) */
/* WARNING: Removing unreachable block (ram,0x01495418) */
/* WARNING: Removing unreachable block (ram,0x0149538c) */
/* WARNING: Removing unreachable block (ram,0x01495394) */
/* WARNING: Removing unreachable block (ram,0x014953b4) */
/* WARNING: Removing unreachable block (ram,0x01495438) */
/* WARNING: Removing unreachable block (ram,0x014953c8) */
/* WARNING: Removing unreachable block (ram,0x014952c8) */
/* WARNING: Removing unreachable block (ram,0x014952d0) */
/* WARNING: Removing unreachable block (ram,0x014952dc) */
/* WARNING: Removing unreachable block (ram,0x01495288) */
/* WARNING: Removing unreachable block (ram,0x01495290) */
/* WARNING: Removing unreachable block (ram,0x014952a0) */
/* WARNING: Removing unreachable block (ram,0x014952b0) */
/* WARNING: Removing unreachable block (ram,0x014952bc) */
/* WARNING: Removing unreachable block (ram,0x014951dc) */
/* WARNING: Removing unreachable block (ram,0x01495240) */
/* WARNING: Removing unreachable block (ram,0x01495248) */
/* WARNING: Removing unreachable block (ram,0x01495254) */
/* WARNING: Removing unreachable block (ram,0x01495698) */
/* WARNING: Removing unreachable block (ram,0x014957e4) */
/* WARNING: Removing unreachable block (ram,0x014956a0) */
/* WARNING: Removing unreachable block (ram,0x014956b8) */
/* WARNING: Removing unreachable block (ram,0x014956c0) */
/* WARNING: Removing unreachable block (ram,0x014956c4) */
/* WARNING: Type propagation algorithm not settling */

void Atlas_UI_MiniMapBehaviour__Init
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined4 param_4,long param_5,long *param_6,long param_7,undefined8 ******param_8)

{
  char cVar1;
  code *pcVar2;
  long **pplVar3;
  int iVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *****pppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ***pppuVar11;
  long lVar12;
  ulong uVar13;
  undefined8 **ppuVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 *******pppppppuVar18;
  undefined *puVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined1 auVar23 [16];
  undefined1 auStack_180 [8];
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long *******ppppppplStack_d0;
  undefined *puStack_c8;
  long lStack_a8;
  long *plStack_a0;
  undefined8 *******pppppppuStack_90;
  undefined *puStack_88;
  long *plStack_80;
  undefined8 *****pppppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  pplVar3 = &plStack_80;
  if ((bRam0000000003eb49c0 & 1) == 0) {
    func_0x00f78a20(0x3d29fd0);
    func_0x00f78a20(0x3d1b3f0);
    func_0x00f78a20(0x3d1fc70);
    func_0x00f78a20(0x3d20050);
    func_0x00f78a20(0x3d578a0);
    func_0x00f78a20(0x3d1cf20);
    func_0x00f78a20(0x3d1d448);
    func_0x00f78a20(0x3d3b318);
    func_0x00f78a20(0x3d3b310);
    func_0x00f78a20(0x3d1dbe0);
    func_0x00f78a20(0x3d5a758);
    func_0x00f78a20(0x3d5a760);
    func_0x00f78a20(0x3d5a768);
    func_0x00f78a20(0x3d5b0d0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d27728);
    func_0x00f78a20(0x3d296d8);
    bRam0000000003eb49c0 = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  pppppuStack_78 = (undefined8 *****)0x0;
  puVar16 = (undefined8 *)(param_5 + 0x74);
  *puVar16 = 0;
  *(long **)(param_5 + 0xa0) = param_6;
  *(undefined8 *)(param_5 + 0x7c) = 0;
  if ((param_6 != (long *)0x0) && (param_6[0x3a] != 0)) {
    uVar17 = *(undefined8 *)(param_6[0x3a] + 0x90);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar17,0,0);
    lVar8 = param_6[0x3a];
    if (iVar4 == 0) {
      if (lVar8 != 0) {
        uVar17 = *(undefined8 *)(lVar8 + 0x88);
        uVar22 = param_3;
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar22 = param_3;
        }
        iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar17,0,0);
        if (iVar4 == 0) {
          /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
          /*UnityEngine.Rect$$set_center*/ func_0x03253500(puVar16,0);
          param_3 = 0x43fa0000;
LAB_01494fd4:
          /*UnityEngine.Rect$$set_size*/ func_0x0325358c(puVar16,0);
          if ((*(long *)(param_5 + 0x18) != 0) &&
             (lVar8 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(param_5 + 0x18),0), lVar8 != 0)) {
            uVar20 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(lVar8,0);
            uStack_70 = CONCAT44(param_3,uVar20);
            uStack_68 = CONCAT44(param_4,uVar22);
            uVar20 = /*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_70,0);
            *(undefined4 *)(param_5 + 0x84) = uVar20;
            *(undefined4 *)(param_5 + 0x88) = param_3;
            plVar6 = (long *)0x0;
            if ((*(byte *)(/*Atlas.Contexts.BattleGameContext_TypeInfo*/ lRam0000000003d20050 + 300) <= *(byte *)(*param_6 + 300)) &&
               (plVar6 = param_6,
               *(long *)(*(long *)(*param_6 + 200) +
                         (ulong)*(byte *)(/*Atlas.Contexts.BattleGameContext_TypeInfo*/ lRam0000000003d20050 + 300) * 8 + -8) !=
               /*Atlas.Contexts.BattleGameContext_TypeInfo*/ lRam0000000003d20050)) {
              plVar6 = (long *)0x0;
            }
            *(bool *)(param_5 + 0x70) = plVar6 != (long *)0x0;
            *(long *)(param_5 + 0xa8) = param_6[8];
            *(undefined8 *******)(param_5 + 0xb0) = param_8;
            if (((param_7 != 0) && (*(long *)(param_7 + 0x80) != 0)) &&
               (plStack_80 = param_6, *(long *)(param_5 + 0x18) != 0)) {
              param_8 = (undefined8 ******)0x3d3b000;
              /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(param_5 + 0x18),
                              *(undefined8 *)(*(long *)(param_7 + 0x80) + 0x18),0);
              param_7 = func_0x00f78aec(/*System.Collections.Generic.List<MiniMapPlayerBehaviour>_TypeInfo*/ uRam0000000003d1dbe0);
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(param_7,uRam0000000003d3b310);
              *(long *)(param_5 + 0x98) = param_7;
              if (*(long *)(param_5 + 0xa8) != 0) {
                param_7 = 0;
                param_8 = *(undefined8 *******)(*(long *)(param_5 + 0xa8) + 0x28);
                if (param_8 != (undefined8 ******)0x0) {
                  pppppuVar9 = *param_8;
                  uVar13 = (ulong)*(ushort *)((long)pppppuVar9 + 0x12a);
                  if (uVar13 != 0) {
                    ppppuVar10 = pppppuVar9[0x16] + 1;
                    do {
                      if (ppppuVar10[-1] == /*System.Collections.Generic.ICollection<GameContextPlayer>_TypeInfo*/ pppuRam0000000003d1cf20) {
                        pppppuVar9 = pppppuVar9 + (long)*(int *)ppppuVar10 * 2 + 0x27;
                        goto code_r0x01495134;
                      }
                      ppppuVar10 = ppppuVar10 + 2;
                      uVar13 = uVar13 - 1;
                    } while (uVar13 != 0);
                  }
                  pppppuVar9 = (undefined8 *****)func_0x00fac1f0(param_8,/*System.Collections.Generic.ICollection<GameContextPlayer>_TypeInfo*/ pppuRam0000000003d1cf20,0);
code_r0x01495134:
                  iVar4 = (*(code *)*pppppuVar9)(param_8,pppppuVar9[1]);
                  lStack_a8 = param_7;
                  if (iVar4 < 1) goto code_r0x01495264;
                  if ((*(long *)(param_5 + 0xa8) != 0) &&
                     (param_8 = *(undefined8 *******)(*(long *)(param_5 + 0xa8) + 0x28),
                     param_8 != (undefined8 ******)0x0)) {
                    pppppuVar9 = *param_8;
                    uVar13 = (ulong)*(ushort *)((long)pppppuVar9 + 0x12a);
                    if (uVar13 != 0) {
                      ppppuVar10 = pppppuVar9[0x16] + 1;
                      do {
                        if (ppppuVar10[-1] == /*System.Collections.Generic.IList<GameContextPlayer>_TypeInfo*/ pppuRam0000000003d1d448) {
                          pppppuVar9 = pppppuVar9 + (long)*(int *)ppppuVar10 * 2 + 0x27;
                          goto code_r0x014951a4;
                        }
                        ppppuVar10 = ppppuVar10 + 2;
                        uVar13 = uVar13 - 1;
                      } while (uVar13 != 0);
                    }
                    pppppuVar9 = (undefined8 *****)
                                 func_0x00fac1f0(param_8,/*System.Collections.Generic.IList<GameContextPlayer>_TypeInfo*/ pppuRam0000000003d1d448,0);
code_r0x014951a4:
                    pppppuStack_78 =
                         (undefined8 *****)(*(code *)*pppppuVar9)(param_8,0,pppppuVar9[1]);
                    if (pppppuStack_78 != (undefined8 *****)0x0) {
                      iVar4 = Atlas_Gameplay_Player_GameContextPlayer__get_IsLocalPlayer
                                        (pppppuStack_78,0);
                      if (iVar4 == 0) {
                        if (*(long *)(param_5 + 0x48) != 0) {
                          param_8 = *(undefined8 *******)(param_5 + 0x40);
                          uVar17 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_5 + 0x48),0);
                          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          lVar8 = /*UnityEngine.Object$$Instantiate<Toggle>*/ func_0x018a6780(param_8,uVar17,uRam0000000003d5b0d0);
                          if ((lVar8 != 0) &&
                             (ppppppuVar5 = (undefined8 ******)
                                            /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar8,uRam0000000003d578a0),
                             ppppppuVar5 != (undefined8 ******)0x0)) {
                            uVar20 = 0x3f800000;
                            puStack_88 = &UNK_01495240;
                            param_8 = ppppppuVar5;
                            goto code_r0x01495440;
                          }
                        }
                      }
                      else {
                        ppppppuVar5 = *(undefined8 *******)(param_5 + 0x20);
                        if (ppppppuVar5 != (undefined8 ******)0x0) {
                          uVar20 = *(undefined4 *)(param_5 + 0x38);
                          puStack_88 = &UNK_014951dc;
code_r0x01495440:
                          lStack_a8 = 0;
                          plStack_a0 = (long *)0x3d3b318;
                          pppppppuStack_90 = (undefined8 *******)&stack0xfffffffffffffff0;
                          if ((bRam0000000003eb49c7 & 1) == 0) {
                            func_0x00f78a20(0x3d5a770);
                            func_0x00f78a20(0x3d23a58);
                            bRam0000000003eb49c7 = 1;
                          }
                          ppppppuVar5[6] = pppppuStack_78;
                          if ((pppppuStack_78 != (undefined8 *****)0x0) &&
                             (ppppppuVar5[4] != (undefined8 *****)0x0)) {
                            /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(ppppppuVar5[4],pppppuStack_78[0x15],0);
                            if (ppppppuVar5[3] != (undefined8 *****)0x0) {
                              uVar22 = 0;
                              /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(uVar20,ppppppuVar5[3],0);
                              param_3 = uVar20;
                              if (((ppppppuVar5[6] != (undefined8 *****)0x0) &&
                                  (ppppuVar10 = ppppppuVar5[6][2],
                                  ppppuVar10 != (undefined8 ****)0x0)) &&
                                 (pppuVar11 = ppppuVar10[2], pppuVar11 != (undefined8 ***)0x0)) {
                                ppuVar14 = pppuVar11[0xc];
                                uVar17 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ uRam0000000003d23a58);
                                Atlas_Gameplay_Kart_OnKartSpinOutDelegate___ctor
                                          (uVar17,ppppppuVar5,uRam0000000003d5a770,0);
                                param_3 = uVar20;
                                if (ppuVar14 != (undefined8 **)0x0) {
                                  Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__add_OnSpinOutTriggered
                                            (ppuVar14,uVar17,0);
                                  *(undefined4 *)(ppppppuVar5 + 7) = 0;
                                  param_3 = uVar20;
                                  if (ppppppuVar5[4] != (undefined8 *****)0x0) {
                                    lVar8 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(ppppppuVar5[4],0);
                                    /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
                                    param_3 = uVar20;
                                    if (lVar8 != 0) {
                                      /*UnityEngine.Transform$$set_eulerAngles*/ func_0x0327548c(lVar8,0);
                                      lVar8 = param_5;
                                      if (ppppppuVar5[3] == (undefined8 *****)0x0) {
Atlas_UI_MiniMapPlayerBehaviour__Spin:
                                        lVar7 = func_0x00f78af4();
                                        if (0 < *(int *)(lVar7 + 0x28)) {
                                          if (((*(long *)(lVar7 + 0x30) == 0) ||
                                              (lVar12 = *(long *)(*(long *)(lVar7 + 0x30) + 0x10),
                                              lVar12 == 0)) ||
                                             ((lVar12 = *(long *)(lVar12 + 0x10), lVar12 == 0 ||
                                              (lVar12 = *(long *)(lVar12 + 0x60), lVar12 == 0)))) {
                                            auVar23 = func_0x00f78af4();
                                            plVar6 = auVar23._8_8_;
                                            if ((bRam0000000003eb49c3 & 1) == 0) {
                                              ppppppplStack_d0 = (long *******)ppppppuVar5;
                                              puStack_c8 = (undefined *)lVar8;
                                              func_0x00f78a20(0x3d23c68);
                                              bRam0000000003eb49c3 = 1;
                                            }
                                            if ((*(char *)(auVar23._0_8_ + 0x70) == '\0') &&
                                               (plVar6 != (long *)0x0)) {
                                              if ((*(byte *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectile_TypeInfo*/ lRam0000000003d23c68 + 300) <=
                                                   *(byte *)(*plVar6 + 300)) &&
                                                 (*(long *)(*(long *)(*plVar6 + 200) +
                                                            (ulong)*(byte *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectile_TypeInfo*/ lRam0000000003d23c68 +
                                                                            300) * 8 + -8) ==
                                                  /*Atlas.Gameplay.Usables.PlacementHomingProjectile_TypeInfo*/ lRam0000000003d23c68)) {
                                                *(long **)(auVar23._0_8_ + 0xb8) = plVar6;
                                              }
                                            }
                                            return;
                                          }
                                          fVar21 = *(float *)(lVar12 + 100);
                                          *(float *)(lVar7 + 0x3c) = fVar21;
                                          if (0.0 < fVar21) {
                                            *(float *)(lVar7 + 0x38) = fVar21;
                                          }
                                        }
                                        return;
                                      }
                                      lVar8 = 1;
                                      lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(ppppppuVar5[3],0);
                                      if (lVar7 == 0) goto Atlas_UI_MiniMapPlayerBehaviour__Spin;
                                      iVar4 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar7,0);
                                      if (iVar4 == 1) {
                                        return;
                                      }
                                      if ((ppppppuVar5[3] == (undefined8 *****)0x0) ||
                                         (plVar6 = (long *)/*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(ppppppuVar5[3],0),
                                         plVar6 == (long *)0x0))
                                      goto Atlas_UI_MiniMapPlayerBehaviour__Spin;
                                      uVar17 = 1;
                                      plVar15 = plStack_a0;
                                      pppppppuVar18 = pppppppuStack_90;
                                      puVar19 = puStack_88;
                                      goto code_r0x0322ef1c;
                                    }
                                  }
                                }
                              }
                            }
                          }
                          auVar23 = func_0x00f78af4();
                          param_5 = auVar23._0_8_;
                          pplVar3 = (long **)auStack_180;
                          puStack_c8 = &Atlas_UI_MiniMapBehaviour__SetupCollectibleIcons;
                          pppppppuVar18 = &ppppppplStack_d0;
                          ppppppplStack_d0 = (long *******)&pppppppuStack_90;
                          if ((bRam0000000003eb49c6 & 1) == 0) {
                            func_0x00f78a20(0x3d322a8);
                            func_0x00f78a20(0x3d322b0);
                            func_0x00f78a20(0x3d322b8);
                            func_0x00f78a20(0x3d578e0);
                            func_0x00f78a20(0x3d3a100);
                            func_0x00f78a20(0x3d5b098);
                            func_0x00f78a20(0x3d23990);
                            bRam0000000003eb49c6 = 1;
                          }
                          uStack_150 = 0;
                          uStack_148 = 0;
                          lStack_140 = 0;
                          if (auVar23._8_8_ == 0) {
                            return;
                          }
                          param_8 = (undefined8 ******)0x3d322a8;
                          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_178,auVar23._8_8_,uRam0000000003d3a100);
                          uStack_148 = uStack_170;
                          uStack_150 = uStack_178;
                          lStack_140 = lStack_168;
                          uVar13 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_150,uRam0000000003d322b0);
                          lVar8 = lStack_140;
                          if ((uVar13 & 1) == 0) {
                            /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_150,uRam0000000003d322a8);
                            return;
                          }
                          if (*(long *)(param_5 + 0x68) == 0) {
                            func_0x00f78af4();
code_r0x014957e8:
                    /* WARNING: Does not return */
                            pcVar2 = (code *)SoftwareBreakpoint(1,0x14957ec);
                            (*pcVar2)();
                          }
                          plVar6 = (long *)/*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_5 + 0x68),0);
                          if (lVar8 == 0) {
                            func_0x00f78af4();
                            goto code_r0x014957e8;
                          }
                          lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar8,0);
                          if (lVar8 == 0) {
                            func_0x00f78af4();
                            goto code_r0x014957e8;
                          }
                          uStack_160 = /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(lVar8,0);
                          uStack_15c = param_3;
                          uStack_158 = uVar22;
                          uVar22 = /*Atlas.UI.MiniMapBehaviour$$MapPosition*/ func_0x01495b14(param_5,&uStack_160);
                          if (plVar6 == (long *)0x0) {
                            func_0x00f78af4();
                            goto code_r0x014957e8;
                          }
                          lStack_a8 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar6,uRam0000000003d578e0);
                          if (*(long *)(param_5 + 0x68) == 0) {
                            func_0x00f78af4();
                            goto code_r0x014957e8;
                          }
                          lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_5 + 0x68),0);
                          if (lVar8 == 0) {
                            func_0x00f78af4();
                            goto code_r0x014957e8;
                          }
                          uVar17 = /*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar8,0);
                          if (lStack_a8 == 0) {
                            func_0x00f78af4(uVar17,uVar17);
                            goto code_r0x014957e8;
                          }
                          /*UnityEngine.Transform$$SetParent*/ func_0x03275e8c(lStack_a8,uVar17,0);
                          /*UnityEngine.RectTransform$$set_anchoredPosition*/ func_0x03254d08(uVar22,param_3,lStack_a8,0);
                          uVar17 = 1;
                          puVar19 = &UNK_01495774;
                          plVar15 = plVar6;
                          goto code_r0x0322ef1c;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else if ((param_6[0x3a] != 0) && (lVar8 = *(long *)(param_6[0x3a] + 0x88), lVar8 != 0)) {
          uVar17 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar8,0);
          /*UnityEngine.Rect$$set_center*/ func_0x03253500(uVar17,uVar22,puVar16,0);
          if ((param_6[0x3a] != 0) && (lVar8 = *(long *)(param_6[0x3a] + 0x88), lVar8 != 0)) {
            /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(lVar8,0);
            uVar20 = uVar22;
            goto LAB_01494fac;
          }
        }
      }
    }
    else if ((lVar8 != 0) && (*(long *)(lVar8 + 0x90) != 0)) {
      uVar17 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar8 + 0x90),0);
      /*UnityEngine.Rect$$set_center*/ func_0x03253500(uVar17,param_3,puVar16,0);
      if ((param_6[0x3a] != 0) && (lVar8 = *(long *)(param_6[0x3a] + 0x90), lVar8 != 0)) {
        uVar20 = /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(lVar8,0);
        if (param_6[0x3a] != 0) {
          cVar1 = *(char *)(param_6[0x3a] + 0x98);
          *(char *)(param_5 + 0x8c) = cVar1;
          uVar22 = param_3;
          if (cVar1 == '\0') {
LAB_01494fac:
            param_3 = uVar20;
            uVar22 = param_3;
          }
          goto LAB_01494fd4;
        }
      }
    }
  }
  do {
    func_0x00f78af4();
    lStack_a8 = param_7;
code_r0x01495264:
    param_7 = lStack_a8;
  } while ((*(long *)(param_5 + 0x50) == 0) ||
          (plVar6 = (long *)/*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_5 + 0x50),0), plVar6 == (long *)0x0));
  uVar17 = 0;
  pplVar3 = &plStack_80;
  plVar15 = plStack_80;
  pppppppuVar18 = (undefined8 *******)&stack0xfffffffffffffff0;
  puVar19 = &UNK_01495288;
code_r0x0322ef1c:
  *(undefined8 *******)((long)pplVar3 + -0x30) = param_8;
  *(long *)((long)pplVar3 + -0x28) = lStack_a8;
  *(long **)((long)pplVar3 + -0x20) = plVar15;
  *(long *)((long)pplVar3 + -0x18) = param_5;
  *(undefined8 ********)((long)pplVar3 + -0x10) = pppppppuVar18;
  *(undefined **)((long)pplVar3 + -8) = puVar19;
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ebf4c0)(plVar6,uVar17);
  return;
}



// ============================================================
// RVA: 0x1495578 | Atlas.UI.MiniMapBehaviour.SetupCollectibleIcons
// ============================================================

void Atlas_UI_MiniMapBehaviour__SetupCollectibleIcons
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               long param_5)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  if ((bRam0000000003eb49c6 & 1) == 0) {
    func_0x00f78a20(0x3d322a8);
    func_0x00f78a20(0x3d322b0);
    func_0x00f78a20(0x3d322b8);
    func_0x00f78a20(0x3d578e0);
    func_0x00f78a20(0x3d3a100);
    func_0x00f78a20(0x3d5b098);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb49c6 = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  lStack_80 = 0;
  if (param_5 != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_b8,param_5,uRam0000000003d3a100);
    iVar7 = 0;
    uStack_88 = uStack_b0;
    uStack_90 = uStack_b8;
    lStack_80 = lStack_a8;
    while (uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_90,uRam0000000003d322b0), lVar5 = lStack_80,
          (uVar2 & 1) != 0) {
      if (*(long *)(param_4 + 0x68) == 0) {
        func_0x00f78af4();
code_r0x014957e8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x14957ec);
        (*pcVar1)();
      }
      lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_4 + 0x68),0);
      if (0 < iVar7) {
        if (*(long *)(param_4 + 0x68) == 0) {
          func_0x00f78af4();
          goto code_r0x014957e8;
        }
        uVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_4 + 0x68),0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar3 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(uVar4,uRam0000000003d5b098);
      }
      if (lVar5 == 0) {
        func_0x00f78af4();
        goto code_r0x014957e8;
      }
      lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
      if (lVar5 == 0) {
        func_0x00f78af4();
        goto code_r0x014957e8;
      }
      uStack_a0 = /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(lVar5,0);
      uStack_9c = param_2;
      uStack_98 = param_3;
      uVar8 = /*Atlas.UI.MiniMapBehaviour$$MapPosition*/ func_0x01495b14(param_4,&uStack_a0);
      if (lVar3 == 0) {
        func_0x00f78af4();
        goto code_r0x014957e8;
      }
      lVar5 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar3,uRam0000000003d578e0);
      if (*(long *)(param_4 + 0x68) == 0) {
        func_0x00f78af4();
        goto code_r0x014957e8;
      }
      lVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_4 + 0x68),0);
      if (lVar6 == 0) {
        func_0x00f78af4();
        goto code_r0x014957e8;
      }
      uVar4 = /*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar6,0);
      if (lVar5 == 0) {
        func_0x00f78af4(uVar4,uVar4);
        goto code_r0x014957e8;
      }
      /*UnityEngine.Transform$$SetParent*/ func_0x03275e8c(lVar5,uVar4,0);
      /*UnityEngine.RectTransform$$set_anchoredPosition*/ func_0x03254d08(uVar8,lVar5,0);
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar3,1,0);
      iVar7 = iVar7 + 1;
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_90,uRam0000000003d322a8);
  }
  return;
}



// ============================================================
// RVA: 0x149586c | Atlas.UI.MiniMapBehaviour.DeInit
// ============================================================

/* WARNING: Possible PIC construction at 0x01495910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01495978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01495914) */
/* WARNING: Removing unreachable block (ram,0x0149591c) */
/* WARNING: Removing unreachable block (ram,0x0149597c) */
/* WARNING: Removing unreachable block (ram,0x01495960) */
/* WARNING: Removing unreachable block (ram,0x01495980) */
/* WARNING: Removing unreachable block (ram,0x01495970) */
/* WARNING: Removing unreachable block (ram,0x01495a10) */
/* WARNING: Removing unreachable block (ram,0x01495978) */

undefined1  [16] Atlas_UI_MiniMapBehaviour__DeInit(undefined1 param_1 [16],long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  int extraout_w1;
  long lVar4;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined4 extraout_s0_03;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 uVar11;
  undefined8 extraout_var_04;
  undefined8 extraout_var_05;
  undefined8 extraout_var_06;
  undefined8 extraout_var_07;
  undefined8 extraout_var_08;
  undefined1 auVar10 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar3 = param_1._8_8_;
  uVar11 = param_1._4_4_;
  uVar5 = param_1._0_4_;
  if ((bRam0000000003eb49c1 & 1) == 0) {
    func_0x00f78a20(0x3d32a70);
    func_0x00f78a20(0x3d32a78);
    func_0x00f78a20(0x3d32a80);
    func_0x00f78a20(0x3d3b320);
    func_0x00f78a20(0x3d5a760);
    func_0x00f78a20(0x3d5a768);
    func_0x00f78a20(0x3d27728);
    func_0x00f78a20(0x3d296d8);
    bRam0000000003eb49c1 = 1;
    uVar5 = extraout_s0;
    uVar11 = extraout_var;
    uVar3 = extraout_var_04;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  lVar1 = *(long *)(param_2 + 0x20);
  if (lVar1 == 0) {
    while (func_0x00f78af4(), extraout_w1 == 1) {
      plVar2 = (long *)___cxa_begin_catch();
      lVar1 = *plVar2;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,uRam0000000003d32a70);
      if (lVar1 != 0) {
        func_0x00f78ac0(lVar1,0);
        break;
      }
      lVar1 = *(long *)(param_2 + 0xa8);
      unaff_x21 = (undefined8 *)func_0x00f78aec(*unaff_x21);
      Atlas_Gameplay_Player_GameContextPlayerEvents_UsableHitPlayerDelegate___ctor
                (unaff_x21,param_2,*unaff_x24,0);
      if (lVar1 != 0) {
        Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitPlayer(lVar1,unaff_x21,0);
        lVar1 = *(long *)(param_2 + 0xb0);
        unaff_x21 = (undefined8 *)func_0x00f78aec(*unaff_x23);
        Atlas_Gameplay_Usables_UsableManagerEvents_UsableSpawned___ctor
                  (unaff_x21,param_2,*unaff_x22,0);
        if (lVar1 != 0) {
          Atlas_Gameplay_Usables_UsableManager__remove_OnUsableSpawned(lVar1,unaff_x21,0);
          auVar15._4_4_ = extraout_var_00;
          auVar15._0_4_ = extraout_s0_00;
          auVar15._8_8_ = extraout_var_05;
          return auVar15;
        }
      }
    }
    lVar1 = __Unwind_Resume();
    uVar5 = extraout_s0_01;
    uVar11 = extraout_var_01;
    uVar3 = extraout_var_06;
  }
  if ((bRam0000000003eb49c8 & 1) == 0) {
    func_0x00f78a20(0x3d5a770);
    func_0x00f78a20(0x3d23a58);
    bRam0000000003eb49c8 = 1;
    uVar5 = extraout_s0_02;
    uVar11 = extraout_var_02;
    uVar3 = extraout_var_07;
  }
  if (*(long *)(lVar1 + 0x30) != 0) {
    lVar4 = *(long *)(*(long *)(lVar1 + 0x30) + 0x10);
    if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x10), lVar4 != 0)) {
      lVar4 = *(long *)(lVar4 + 0x60);
      uVar3 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ uRam0000000003d23a58);
      Atlas_Gameplay_Kart_OnKartSpinOutDelegate___ctor(uVar3,lVar1,uRam0000000003d5a770,0);
      if (lVar4 != 0) {
        Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__remove_OnSpinOutTriggered
                  (lVar4,uVar3,0);
        uVar5 = extraout_s0_03;
        uVar11 = extraout_var_03;
        uVar3 = extraout_var_08;
        goto code_r0x01495afc;
      }
    }
    auVar15 = func_0x00f78af4();
    lVar4 = auVar15._0_8_;
    fVar13 = *auVar15._8_8_;
    lVar1 = lVar4 + 0x74;
    fVar6 = (float)/*UnityEngine.Rect$$get_xMin*/ func_0x03253524(lVar1,0);
    fVar7 = (float)/*UnityEngine.Rect$$get_width*/ func_0x03253564(lVar1,0);
    fVar12 = *(float *)(lVar4 + 0x84);
    fVar14 = auVar15._8_8_[2];
    fVar8 = (float)/*UnityEngine.Rect$$get_yMin*/ func_0x0325352c(lVar1,0);
    fVar9 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(lVar1,0);
    fVar6 = ((fVar13 - fVar6) / fVar7) * fVar12;
    if (*(char *)(lVar4 + 0x8c) != '\0') {
      fVar6 = -(((fVar14 - fVar8) / fVar9) * *(float *)(lVar4 + 0x88));
    }
    return ZEXT416((uint)fVar6);
  }
code_r0x01495afc:
  *(undefined8 *)(lVar1 + 0x30) = 0;
  auVar10._4_4_ = uVar11;
  auVar10._0_4_ = uVar5;
  auVar10._8_8_ = uVar3;
  return auVar10;
}



// ============================================================
// RVA: 0x1495b14 | Atlas.UI.MiniMapBehaviour.MapPosition
// ============================================================

float Atlas_UI_MiniMapBehaviour__MapPosition(long param_1,float *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = *param_2;
  lVar1 = param_1 + 0x74;
  fVar2 = (float)/*UnityEngine.Rect$$get_xMin*/ func_0x03253524(lVar1,0);
  fVar3 = (float)/*UnityEngine.Rect$$get_width*/ func_0x03253564(lVar1,0);
  fVar6 = *(float *)(param_1 + 0x84);
  fVar8 = param_2[2];
  fVar4 = (float)/*UnityEngine.Rect$$get_yMin*/ func_0x0325352c(lVar1,0);
  fVar5 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(lVar1,0);
  fVar2 = ((fVar7 - fVar2) / fVar3) * fVar6;
  if (*(char *)(param_1 + 0x8c) != '\0') {
    fVar2 = -(((fVar8 - fVar4) / fVar5) * *(float *)(param_1 + 0x88));
  }
  return fVar2;
}



// ============================================================
// RVA: 0x1495bc4 | Atlas.UI.MiniMapBehaviour.MapRotation
// ============================================================

undefined4 Atlas_UI_MiniMapBehaviour__MapRotation(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  /*UnityEngine.Quaternion$$get_eulerAngles*/ func_0x0325210c(&uStack_30,0);
  return 0;
}



// ============================================================
// RVA: 0x1495c20 | Atlas.UI.MiniMapBehaviour.OnPlayerHitByUsable
// ============================================================

/* WARNING: Possible PIC construction at 0x01495cec: Changing call to branch */

void Atlas_UI_MiniMapBehaviour__OnPlayerHitByUsable(long param_1,long param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  int extraout_w1;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb49c2 & 1) == 0) {
    func_0x00f78a20(0x3d32a70);
    func_0x00f78a20(0x3d32a78);
    func_0x00f78a20(0x3d32a80);
    func_0x00f78a20(0x3d3b320);
    bRam0000000003eb49c2 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (param_2 == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x30) == param_2) goto code_r0x01495d7c;
    if (*(long *)(param_1 + 0x98) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_48,*(long *)(param_1 + 0x98),uRam0000000003d3b320);
      do {
        uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_48,uRam0000000003d32a78);
        if ((uVar4 & 1) == 0) {
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d32a70);
          return;
        }
        if (lStack_38 == 0) {
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1495d34);
          (*pcVar2)();
        }
      } while (*(long *)(lStack_38 + 0x30) != param_2);
      unaff_x30 = (undefined *)0x1495cf0;
      register0x00000008 = (BADSPACEBASE *)auStack_50;
      lVar3 = lStack_38;
      unaff_x19 = param_2;
      unaff_x20 = 0x3d32a78;
      unaff_x21 = 0x3eb4000;
      unaff_x29 = puVar1;
      goto code_r0x01495d7c;
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar5 = (long *)___cxa_begin_catch();
    param_2 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d32a70);
    if (param_2 == 0) {
      return;
    }
    func_0x00f78ac0(param_2,0);
  }
  unaff_x30 = &Atlas_UI_MiniMapPlayerBehaviour__Spin;
  lVar3 = __Unwind_Resume();
  register0x00000008 = (BADSPACEBASE *)auStack_50;
  unaff_x19 = param_2;
  unaff_x20 = param_1;
  unaff_x21 = 0x3eb4000;
  unaff_x29 = puVar1;
code_r0x01495d7c:
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (0 < *(int *)(lVar3 + 0x28)) {
    if ((((*(long *)(lVar3 + 0x30) == 0) ||
         (lVar6 = *(long *)(*(long *)(lVar3 + 0x30) + 0x10), lVar6 == 0)) ||
        (lVar6 = *(long *)(lVar6 + 0x10), lVar6 == 0)) ||
       (lVar6 = *(long *)(lVar6 + 0x60), lVar6 == 0)) {
      auVar8 = func_0x00f78af4();
      plVar5 = auVar8._8_8_;
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x21;
      *(long *)((long)register0x00000008 + -0x30) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x28) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x20) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined **)((long)register0x00000008 + -0x18) =
           &Atlas_UI_MiniMapBehaviour__OnUsableSpawned;
      if ((bRam0000000003eb49c3 & 1) == 0) {
        func_0x00f78a20(0x3d23c68);
        bRam0000000003eb49c3 = 1;
      }
      if ((*(char *)(auVar8._0_8_ + 0x70) == '\0') && (plVar5 != (long *)0x0)) {
        if ((*(byte *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectile_TypeInfo*/ lRam0000000003d23c68 + 300) <= *(byte *)(*plVar5 + 300)) &&
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectile_TypeInfo*/ lRam0000000003d23c68 + 300) * 8 +
                     -8) == /*Atlas.Gameplay.Usables.PlacementHomingProjectile_TypeInfo*/ lRam0000000003d23c68)) {
          *(long **)(auVar8._0_8_ + 0xb8) = plVar5;
        }
      }
      return;
    }
    fVar7 = *(float *)(lVar6 + 100);
    *(float *)(lVar3 + 0x3c) = fVar7;
    if (0.0 < fVar7) {
      *(float *)(lVar3 + 0x38) = fVar7;
    }
  }
  return;
}



// ============================================================
// RVA: 0x1495dd0 | Atlas.UI.MiniMapBehaviour.OnUsableSpawned
// ============================================================

void Atlas_UI_MiniMapBehaviour__OnUsableSpawned(long param_1,long *param_2)

{
  if ((bRam0000000003eb49c3 & 1) == 0) {
    func_0x00f78a20(0x3d23c68);
    bRam0000000003eb49c3 = 1;
  }
  if ((*(char *)(param_1 + 0x70) == '\0') && (param_2 != (long *)0x0)) {
    if ((*(byte *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectile_TypeInfo*/ lRam0000000003d23c68 + 300) <= *(byte *)(*param_2 + 300)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectile_TypeInfo*/ lRam0000000003d23c68 + 300) * 8 + -8)
        == /*Atlas.Gameplay.Usables.PlacementHomingProjectile_TypeInfo*/ lRam0000000003d23c68)) {
      *(long **)(param_1 + 0xb8) = param_2;
    }
  }
  return;
}



// ============================================================
// RVA: 0x1495e60 | Atlas.UI.MiniMapBehaviour.LateUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x01495ee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01496730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01496778: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01496104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149614c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149618c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01496260: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014963a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014963f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01496430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014964dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01496530: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014964e0) */
/* WARNING: Removing unreachable block (ram,0x014964e8) */
/* WARNING: Removing unreachable block (ram,0x014965b0) */
/* WARNING: Removing unreachable block (ram,0x014964fc) */
/* WARNING: Removing unreachable block (ram,0x014965a0) */
/* WARNING: Removing unreachable block (ram,0x01496504) */
/* WARNING: Removing unreachable block (ram,0x014965a8) */
/* WARNING: Removing unreachable block (ram,0x0149650c) */
/* WARNING: Removing unreachable block (ram,0x01496598) */
/* WARNING: Removing unreachable block (ram,0x01496518) */
/* WARNING: Removing unreachable block (ram,0x014965b8) */
/* WARNING: Removing unreachable block (ram,0x01496524) */
/* WARNING: Removing unreachable block (ram,0x014963f4) */
/* WARNING: Removing unreachable block (ram,0x014965d0) */
/* WARNING: Removing unreachable block (ram,0x014963fc) */
/* WARNING: Removing unreachable block (ram,0x014965d8) */
/* WARNING: Removing unreachable block (ram,0x01496408) */
/* WARNING: Removing unreachable block (ram,0x01496414) */
/* WARNING: Removing unreachable block (ram,0x014965f8) */
/* WARNING: Removing unreachable block (ram,0x0149641c) */
/* WARNING: Removing unreachable block (ram,0x014965f0) */
/* WARNING: Removing unreachable block (ram,0x01496428) */
/* WARNING: Removing unreachable block (ram,0x014963a8) */
/* WARNING: Removing unreachable block (ram,0x014963ac) */
/* WARNING: Removing unreachable block (ram,0x014965e0) */
/* WARNING: Removing unreachable block (ram,0x014963c0) */
/* WARNING: Removing unreachable block (ram,0x014965c8) */
/* WARNING: Removing unreachable block (ram,0x014963d8) */
/* WARNING: Removing unreachable block (ram,0x014965e8) */
/* WARNING: Removing unreachable block (ram,0x014963e8) */
/* WARNING: Removing unreachable block (ram,0x01496264) */
/* WARNING: Removing unreachable block (ram,0x0149626c) */
/* WARNING: Removing unreachable block (ram,0x01496274) */
/* WARNING: Removing unreachable block (ram,0x0149627c) */
/* WARNING: Removing unreachable block (ram,0x01496284) */
/* WARNING: Removing unreachable block (ram,0x014962c0) */
/* WARNING: Removing unreachable block (ram,0x014962d8) */
/* WARNING: Removing unreachable block (ram,0x014962dc) */
/* WARNING: Removing unreachable block (ram,0x01496150) */
/* WARNING: Removing unreachable block (ram,0x01496158) */
/* WARNING: Removing unreachable block (ram,0x01496164) */
/* WARNING: Removing unreachable block (ram,0x01496170) */
/* WARNING: Removing unreachable block (ram,0x01496178) */
/* WARNING: Removing unreachable block (ram,0x01496184) */
/* WARNING: Removing unreachable block (ram,0x01496108) */
/* WARNING: Removing unreachable block (ram,0x0149610c) */
/* WARNING: Removing unreachable block (ram,0x01496118) */
/* WARNING: Removing unreachable block (ram,0x01496124) */
/* WARNING: Removing unreachable block (ram,0x01496144) */
/* WARNING: Removing unreachable block (ram,0x0149677c) */
/* WARNING: Removing unreachable block (ram,0x01495ee4) */
/* WARNING: Removing unreachable block (ram,0x014966c8) */
/* WARNING: Removing unreachable block (ram,0x014966e0) */
/* WARNING: Removing unreachable block (ram,0x014966ec) */
/* WARNING: Removing unreachable block (ram,0x014966f8) */
/* WARNING: Removing unreachable block (ram,0x01496734) */
/* WARNING: Removing unreachable block (ram,0x0149673c) */
/* WARNING: Removing unreachable block (ram,0x0149674c) */
/* WARNING: Removing unreachable block (ram,0x01496754) */
/* WARNING: Removing unreachable block (ram,0x01496790) */
/* WARNING: Removing unreachable block (ram,0x01496798) */
/* WARNING: Removing unreachable block (ram,0x014967ac) */
/* WARNING: Removing unreachable block (ram,0x014967b8) */
/* WARNING: Removing unreachable block (ram,0x014967c4) */
/* WARNING: Removing unreachable block (ram,0x014967e4) */
/* WARNING: Removing unreachable block (ram,0x0149675c) */
/* WARNING: Removing unreachable block (ram,0x01496764) */
/* WARNING: Removing unreachable block (ram,0x01496770) */
/* WARNING: Removing unreachable block (ram,0x01496704) */
/* WARNING: Removing unreachable block (ram,0x0149670c) */
/* WARNING: Removing unreachable block (ram,0x01496780) */
/* WARNING: Removing unreachable block (ram,0x01496714) */
/* WARNING: Removing unreachable block (ram,0x0149671c) */
/* WARNING: Removing unreachable block (ram,0x014967fc) */
/* WARNING: Removing unreachable block (ram,0x01496728) */
/* WARNING: Removing unreachable block (ram,0x01496534) */

undefined1  [16] Atlas_UI_MiniMapBehaviour__LateUpdate(long param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  undefined8 unaff_x21;
  undefined8 uVar8;
  undefined8 unaff_x22;
  uint uVar9;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uStack_108;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  undefined1 **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  uVar8 = 0x3d23990;
  if ((bRam0000000003eb49c4 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb49c4 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar6,0,0);
  if ((uVar4 & 1) == 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_01495f20;
    if (*(long *)(*(long *)(param_1 + 0x20) + 0x30) == 0) goto LAB_01495ef8;
    puVar10 = (undefined *)0x1495ee4;
  }
  else {
LAB_01495ef8:
    lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
    if (lVar5 != 0) goto code_r0x0322ef1c;
LAB_01495f20:
    puVar10 = &Atlas_UI_MiniMapBehaviour__UpdatePlayers;
    param_1 = func_0x00f78af4();
  }
  puStack_40 = &stack0xfffffffffffffff0;
  puStack_38 = puVar10;
  if ((bRam0000000003eb49c5 & 1) == 0) {
    func_0x00f78a20(0x3d32a70);
    func_0x00f78a20(0x3d32a78);
    func_0x00f78a20(0x3d32a80);
    func_0x00f78a20(0x3d3b320);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb49c5 = 1;
  }
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x90);
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  if (iVar2 != 0) {
    lVar5 = *(long *)(param_1 + 0x90);
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x30) != 0)) {
      if (*(int *)(*(long *)(lVar5 + 0x30) + 0x74) == 1) goto code_r0x01495ffc;
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar5,uVar8,0);
      if (iVar2 == 0) {
        if ((*(long *)(param_1 + 0x90) != 0) &&
           (lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_1 + 0x90),0), lVar5 != 0)) {
          /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar5,*(undefined8 *)(param_1 + 0x48),0,0);
          if ((*(long *)(param_1 + 0x90) != 0) &&
             (lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_1 + 0x90),0), lVar5 != 0)) {
            /*UnityEngine.Transform$$SetAsFirstSibling*/ func_0x0327701c(lVar5,0);
            goto code_r0x014960b8;
          }
        }
      }
      else if ((*(long *)(param_1 + 0x28) != 0) &&
              (lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_1 + 0x28),0), lVar5 != 0)) {
        /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar5,*(undefined8 *)(param_1 + 0x48),0,0);
        if ((*(long *)(param_1 + 0x28) != 0) &&
           (lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_1 + 0x28),0), lVar5 != 0)) {
          /*UnityEngine.Transform$$SetAsLastSibling*/ func_0x0327705c(lVar5,0);
code_r0x014960b8:
          uVar9 = 1;
          goto code_r0x014960bc;
        }
      }
    }
    goto code_r0x01496574;
  }
code_r0x01495ffc:
  uVar9 = 0;
code_r0x014960bc:
  unaff_x20 = *(long *)(param_1 + 0x90);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(unaff_x20,0,0);
  ppuStack_f0 = &puStack_40;
  if ((uVar9 | uVar3) == 1) {
    if (*(long *)(param_1 + 0x20) == 0) goto code_r0x01496574;
    lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
    puStack_e8 = &UNK_01496108;
code_r0x01496800:
    if (lVar5 != 0) {
      if ((*(int *)(lVar5 + 0x74) == 1) && (*(char *)(param_1 + 0x8d) != '\0')) {
        if (*(char *)(param_1 + 0x70) == '\0') {
          uVar4 = 1;
        }
        else {
          uVar4 = (ulong)(0 < *(int *)(lVar5 + 0x78));
        }
      }
      else {
        uVar4 = 0;
      }
      auVar14._8_8_ = lVar5;
      auVar14._0_8_ = uVar4;
      return auVar14;
    }
    auVar14 = func_0x00f78af4();
    puStack_f8 = &Atlas_UI_MiniMapBehaviour__OnCollectibleCollected;
    lVar5 = *(long *)(auVar14._0_8_ + 0x68);
    uStack_108 = param_1;
    puStack_100 = (undefined1 *)&ppuStack_f0;
    if ((((lVar5 == 0) ||
         (puStack_100 = (undefined1 *)&ppuStack_f0, lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0), lVar5 == 0))
        || (lVar5 = /*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar5,0), auVar14._8_8_ == 0)) ||
       (((lVar5 == 0 ||
         (lVar5 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar5,*(undefined4 *)(auVar14._8_8_ + 0x20),0), lVar5 == 0)) ||
        (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar5,0), lVar5 == 0)))) {
      auVar15._0_8_ = func_0x00f78af4();
      *(undefined4 *)(auVar15._0_8_ + 0x38) = 0x3f8ccccd;
      *(undefined1 *)(auVar15._0_8_ + 0x8d) = 1;
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      auVar15._8_8_ = 0;
      return auVar15;
    }
    register0x00000008 = (BADSPACEBASE *)&ppuStack_f0;
    unaff_x19 = uStack_108;
    unaff_x21 = uVar8;
    unaff_x29 = puStack_100;
    unaff_x30 = puStack_f8;
code_r0x0322ef1c:
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar14 = (*pcRam0000000003ebf4c0)(lVar5,0);
    return auVar14;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x30) == 0)) {
code_r0x01496574:
    func_0x00f78af4();
  }
  else {
    if (*(long *)(*(long *)(lVar5 + 0x30) + 0x10) != 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x90);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar8,lVar5,0);
      if (iVar2 == 0) {
        if ((((*(long *)(param_1 + 0x20) != 0) &&
             (lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x30), lVar5 != 0)) &&
            (lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0)) &&
           (lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0)) {
          lVar7 = *(long *)(param_1 + 0x28);
          goto code_r0x01496224;
        }
      }
      else if (((*(long *)(param_1 + 0x20) != 0) &&
               (lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x30), lVar5 != 0)) &&
              ((lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0 &&
               (lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0)))) {
        lVar7 = *(long *)(param_1 + 0x50);
code_r0x01496224:
        lVar5 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar5,0);
        uVar12 = *(undefined4 *)(lVar5 + 0x140);
        uVar13 = *(undefined4 *)(lVar5 + 0x144);
        uVar11 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar5 + 0x13c),0);
        uStack_a0 = CONCAT44(uVar12,uVar11);
        uStack_98 = uVar13;
        uVar11 = Atlas_UI_MiniMapBehaviour__MapPosition(param_1,&uStack_a0);
        if (lVar7 != 0) {
          puStack_e8 = &UNK_01496264;
          unaff_x20 = lVar7;
code_r0x03254d08:
          uStack_108 = CONCAT44(uVar12,uVar11);
          puStack_100 = (undefined1 *)unaff_x20;
          puStack_f8 = (undefined *)param_1;
          if (pcRam0000000003ec07e0 == (code *)0x0) {
            pcRam0000000003ec07e0 =
                 (code *)func_0x00f789d4("UnityEngine.RectTransform::set_anchoredPosition_Injected(UnityEngine.Vector2&)"
                                         ,0);
          }
          auVar14 = (*pcRam0000000003ec07e0)(lVar7,&uStack_108);
          return auVar14;
        }
      }
      goto code_r0x01496574;
    }
    if (*(long *)(param_1 + 0x98) == 0) goto code_r0x01496574;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_d8,*(long *)(param_1 + 0x98),uRam0000000003d3b320);
    uStack_b8 = uStack_d0;
    uStack_c0 = uStack_d8;
    lStack_b0 = lStack_c8;
    do {
      do {
        uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_c0,uRam0000000003d32a78);
        unaff_x20 = lStack_b0;
        if ((uVar4 & 1) == 0) {
          auVar14 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c0,uRam0000000003d32a70);
          return auVar14;
        }
        if (lStack_b0 == 0) {
          func_0x00f78af4();
          goto code_r0x014965fc;
        }
        lVar5 = *(long *)(lStack_b0 + 0x30);
      } while (lVar5 == 0);
      if (lVar5 == 0) {
        func_0x00f78af4();
        goto code_r0x014965fc;
      }
    } while (*(long *)(lVar5 + 0x10) == 0);
    if (uVar9 != 0) {
code_r0x0149639c:
      puStack_e8 = &UNK_014963a8;
      goto code_r0x01496800;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x90);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar8,0,0);
    if (iVar2 != 0) {
      lVar5 = *(long *)(unaff_x20 + 0x30);
      goto code_r0x0149639c;
    }
    lVar7 = *(long *)(unaff_x20 + 0x18);
    uVar8 = *(undefined8 *)(param_1 + 0x90);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
    if ((uVar4 & 1) == 0) {
      lVar5 = *(long *)(unaff_x20 + 0x30);
    }
    else {
      if (*(long *)(param_1 + 0x90) == 0) {
        func_0x00f78af4();
        goto code_r0x014965fc;
      }
      lVar5 = *(long *)(unaff_x20 + 0x30);
      if (lVar5 == *(long *)(*(long *)(param_1 + 0x90) + 0x30)) {
        lVar7 = *(long *)(param_1 + 0x50);
      }
    }
    if (lVar5 == 0) {
      func_0x00f78af4();
      goto code_r0x014965fc;
    }
    if (*(long *)(lVar5 + 0x10) != 0) {
      lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + 0x10);
      if (lVar5 != 0) {
        lVar5 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar5,0);
        uVar12 = *(undefined4 *)(lVar5 + 0x140);
        uVar13 = *(undefined4 *)(lVar5 + 0x144);
        uVar11 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar5 + 0x13c),0);
        uStack_a0 = CONCAT44(uVar12,uVar11);
        uStack_98 = uVar13;
        uVar11 = Atlas_UI_MiniMapBehaviour__MapPosition(param_1,&uStack_a0);
        if (lVar7 == 0) {
          func_0x00f78af4();
          goto code_r0x014965fc;
        }
        puStack_e8 = &UNK_014964e0;
        goto code_r0x03254d08;
      }
      func_0x00f78af4();
      goto code_r0x014965fc;
    }
  }
  func_0x00f78af4();
code_r0x014965fc:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1496600);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1495f24 | Atlas.UI.MiniMapBehaviour.UpdatePlayers
// ============================================================

void Atlas_UI_MiniMapBehaviour__UpdatePlayers(long param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uStack_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  if ((bRam0000000003eb49c5 & 1) == 0) {
    func_0x00f78a20(0x3d32a70);
    func_0x00f78a20(0x3d32a78);
    func_0x00f78a20(0x3d32a80);
    func_0x00f78a20(0x3d3b320);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb49c5 = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  lStack_80 = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x90);
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  if (iVar2 == 0) {
LAB_01495ffc:
    uVar9 = 0;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x90);
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x30) == 0)) goto LAB_01496574;
    if (*(int *)(*(long *)(lVar7 + 0x30) + 0x74) == 1) goto LAB_01495ffc;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar7,uVar6,0);
    if (iVar2 == 0) {
      if ((*(long *)(param_1 + 0x90) == 0) ||
         (lVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_1 + 0x90),0), lVar7 == 0)) goto LAB_01496574;
      /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar7,*(undefined8 *)(param_1 + 0x48),0,0);
      if ((*(long *)(param_1 + 0x90) == 0) ||
         (lVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_1 + 0x90),0), lVar7 == 0)) goto LAB_01496574;
      /*UnityEngine.Transform$$SetAsFirstSibling*/ func_0x0327701c(lVar7,0);
    }
    else {
      if ((*(long *)(param_1 + 0x28) == 0) ||
         (lVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_1 + 0x28),0), lVar7 == 0)) goto LAB_01496574;
      /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar7,*(undefined8 *)(param_1 + 0x48),0,0);
      if ((*(long *)(param_1 + 0x28) == 0) ||
         (lVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_1 + 0x28),0), lVar7 == 0)) goto LAB_01496574;
      /*UnityEngine.Transform$$SetAsLastSibling*/ func_0x0327705c(lVar7,0);
    }
    uVar9 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x90);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar6,0,0);
  if ((uVar9 | uVar3) == 1) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_01496574;
    iVar2 = /*Atlas.UI.MiniMapBehaviour$$ShouldPlayerHaveCrown*/ func_0x01496800(param_1,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
    if (iVar2 != 0) {
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x20);
      if ((*(long *)(param_1 + 0x28) == 0) ||
         (lVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_1 + 0x28),0), lVar7 == 0)) goto LAB_01496574;
      /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar7,*(undefined8 *)(param_1 + 0x58),0,0);
      lVar7 = *(long *)(param_1 + 0x28);
      /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      if (lVar7 == 0) goto LAB_01496574;
      /*UnityEngine.RectTransform$$set_anchoredPosition*/ func_0x03254d08(lVar7,0);
      if ((*(long *)(param_1 + 0x50) == 0) ||
         (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x50),0), lVar7 == 0)) goto LAB_01496574;
      uVar4 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar7,0);
      if ((uVar4 & 1) == 0) {
        if ((*(long *)(param_1 + 0x50) == 0) ||
           (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x50),0), lVar7 == 0)) goto LAB_01496574;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar7,1,0);
      }
    }
  }
  lVar7 = *(long *)(param_1 + 0x20);
  if ((lVar7 == 0) || (*(long *)(lVar7 + 0x30) == 0)) goto LAB_01496574;
  if (*(long *)(*(long *)(lVar7 + 0x30) + 0x10) != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x90);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar6,lVar7,0);
    if (iVar2 == 0) {
      if ((((*(long *)(param_1 + 0x20) == 0) ||
           (lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x30), lVar7 == 0)) ||
          (lVar7 = *(long *)(lVar7 + 0x10), lVar7 == 0)) ||
         (lVar7 = *(long *)(lVar7 + 0x10), lVar7 == 0)) goto LAB_01496574;
      lVar8 = *(long *)(param_1 + 0x28);
    }
    else {
      if (((*(long *)(param_1 + 0x20) == 0) ||
          (lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x30), lVar7 == 0)) ||
         ((lVar7 = *(long *)(lVar7 + 0x10), lVar7 == 0 ||
          (lVar7 = *(long *)(lVar7 + 0x10), lVar7 == 0)))) goto LAB_01496574;
      lVar8 = *(long *)(param_1 + 0x50);
    }
    lVar7 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar7,0);
    uVar11 = *(undefined4 *)(lVar7 + 0x140);
    uVar13 = *(undefined4 *)(lVar7 + 0x144);
    uVar10 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar7 + 0x13c),0);
    uStack_70 = CONCAT44(uVar11,uVar10);
    uStack_68 = uVar13;
    Atlas_UI_MiniMapBehaviour__MapPosition(param_1,&uStack_70);
    if (lVar8 == 0) goto LAB_01496574;
    /*UnityEngine.RectTransform$$set_anchoredPosition*/ func_0x03254d08(lVar8,0);
    if (((*(long *)(param_1 + 0x20) == 0) ||
        (lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x30), lVar7 == 0)) ||
       ((lVar7 = *(long *)(lVar7 + 0x10), lVar7 == 0 ||
        (lVar7 = *(long *)(lVar7 + 0x10), lVar7 == 0)))) goto LAB_01496574;
    lVar8 = *(long *)(param_1 + 0x30);
    lVar7 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar7,0);
    fVar12 = *(float *)(lVar7 + 0x14c);
    uVar10 = *(undefined4 *)(lVar7 + 0x150);
    uVar11 = *(undefined4 *)(lVar7 + 0x154);
    uStack_a8 = /*Unity.Mathematics.quaternion$$op_Implicit*/ func_0x030c6310(*(undefined4 *)(lVar7 + 0x148),0);
    fStack_a4 = fVar12;
    uStack_a0 = uVar10;
    uStack_9c = uVar11;
    /*UnityEngine.Quaternion$$get_eulerAngles*/ func_0x0325210c(&uStack_a8,0);
    if (lVar8 == 0) goto LAB_01496574;
    fVar14 = -fVar12;
    if (*(char *)(param_1 + 0x8c) != '\0') {
      fVar14 = 90.0 - fVar12;
    }
    /*UnityEngine.Transform$$set_eulerAngles*/ func_0x0327548c(0,0,fVar14,lVar8,0);
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_a8,*(long *)(param_1 + 0x98),uRam0000000003d3b320);
    uStack_88 = CONCAT44(uStack_9c,uStack_a0);
    uStack_90 = CONCAT44(fStack_a4,uStack_a8);
    lStack_80 = lStack_98;
    do {
      do {
        do {
          uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_90,uRam0000000003d32a78);
          lVar7 = lStack_80;
          if ((uVar4 & 1) == 0) {
            /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_90,uRam0000000003d32a70);
            return;
          }
          if (lStack_80 == 0) {
            func_0x00f78af4();
            goto code_r0x014965fc;
          }
          lVar8 = *(long *)(lStack_80 + 0x30);
        } while (lVar8 == 0);
        if (lVar8 == 0) {
          func_0x00f78af4();
          goto code_r0x014965fc;
        }
      } while (*(long *)(lVar8 + 0x10) == 0);
      if (uVar9 == 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x90);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar6,0,0);
        if (iVar2 != 0) {
          lVar8 = *(long *)(lVar7 + 0x30);
          goto code_r0x0149639c;
        }
      }
      else {
code_r0x0149639c:
        uVar4 = /*Atlas.UI.MiniMapBehaviour$$ShouldPlayerHaveCrown*/ func_0x01496800(param_1,lVar8);
        if ((uVar4 & 1) != 0) {
          *(long *)(param_1 + 0x90) = lVar7;
          lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar7,0);
          if (lVar8 == 0) {
            func_0x00f78af4();
            goto code_r0x014965fc;
          }
          /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar8,*(undefined8 *)(param_1 + 0x58),0,0);
          if (*(long *)(param_1 + 0x90) == 0) {
            func_0x00f78af4();
            goto code_r0x014965fc;
          }
          lVar8 = *(long *)(*(long *)(param_1 + 0x90) + 0x18);
          /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
          if (lVar8 == 0) {
            func_0x00f78af4();
            goto code_r0x014965fc;
          }
          /*UnityEngine.RectTransform$$set_anchoredPosition*/ func_0x03254d08(lVar8,0);
          if (*(long *)(param_1 + 0x50) == 0) {
            func_0x00f78af4();
            goto code_r0x014965fc;
          }
          lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x50),0);
          if (lVar8 == 0) {
            func_0x00f78af4();
            goto code_r0x014965fc;
          }
          uVar4 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar8,0);
          if ((uVar4 & 1) == 0) {
            if (*(long *)(param_1 + 0x50) == 0) {
              func_0x00f78af4();
              goto code_r0x014965fc;
            }
            lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x50),0);
            if (lVar8 == 0) {
              func_0x00f78af4();
              goto code_r0x014965fc;
            }
            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar8,1,0);
          }
        }
      }
      lVar8 = *(long *)(lVar7 + 0x18);
      uVar6 = *(undefined8 *)(param_1 + 0x90);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
      if ((uVar4 & 1) == 0) {
        lVar5 = *(long *)(lVar7 + 0x30);
      }
      else {
        if (*(long *)(param_1 + 0x90) == 0) {
          func_0x00f78af4();
          goto code_r0x014965fc;
        }
        lVar5 = *(long *)(lVar7 + 0x30);
        if (lVar5 == *(long *)(*(long *)(param_1 + 0x90) + 0x30)) {
          lVar8 = *(long *)(param_1 + 0x50);
        }
      }
      if (lVar5 == 0) {
        func_0x00f78af4();
        goto code_r0x014965fc;
      }
      if (*(long *)(lVar5 + 0x10) == 0) goto code_r0x01496578;
      lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + 0x10);
      if (lVar5 == 0) {
        func_0x00f78af4();
        goto code_r0x014965fc;
      }
      lVar5 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar5,0);
      uVar11 = *(undefined4 *)(lVar5 + 0x140);
      uVar13 = *(undefined4 *)(lVar5 + 0x144);
      uVar10 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar5 + 0x13c),0);
      uStack_70 = CONCAT44(uVar11,uVar10);
      uStack_68 = uVar13;
      Atlas_UI_MiniMapBehaviour__MapPosition(param_1,&uStack_70);
      if (lVar8 == 0) {
        func_0x00f78af4();
        goto code_r0x014965fc;
      }
      /*UnityEngine.RectTransform$$set_anchoredPosition*/ func_0x03254d08(lVar8,0);
      if (*(char *)(param_1 + 0x8e) != '\0') {
        lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar8,0);
        if (*(long *)(lVar7 + 0x30) == 0) {
          func_0x00f78af4();
          goto code_r0x014965fc;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0x30) + 0x10);
        if (lVar7 == 0) {
          func_0x00f78af4();
          goto code_r0x014965fc;
        }
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 == 0) {
          func_0x00f78af4();
          goto code_r0x014965fc;
        }
        lVar7 = *(long *)(lVar7 + 0x60);
        if (lVar7 == 0) {
          func_0x00f78af4();
          goto code_r0x014965fc;
        }
        uVar3 = Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_IsRespawning(lVar7,0);
        if (lVar8 == 0) {
          func_0x00f78af4();
          goto code_r0x014965fc;
        }
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar8,uVar3 ^ 1,0);
      }
    } while( true );
  }
LAB_01496574:
  func_0x00f78af4();
code_r0x01496578:
  func_0x00f78af4();
code_r0x014965fc:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1496600);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14966c8 | Atlas.UI.MiniMapBehaviour.UpdateUsables
// ============================================================

/* WARNING: Possible PIC construction at 0x01496730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01496778: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0149677c) */

ulong Atlas_UI_MiniMapBehaviour__UpdateUsables
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,ulong param_4)

{
  undefined1 **ppuVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 **ppuVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  ppuVar1 = (undefined1 **)&uStack_30;
  if (*(long *)(param_4 + 0xb8) == 0) {
    return param_4;
  }
  if ((*(long *)(param_4 + 0x60) != 0) &&
     (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_4 + 0x60),0), lVar3 != 0)) {
    uVar4 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar3,0);
    ppuVar7 = (undefined1 **)&stack0xfffffffffffffff0;
    if ((uVar4 & 1) == 0) {
      if (*(long *)(param_4 + 0xb8) != 0) {
        if (*(char *)(*(long *)(param_4 + 0xb8) + 0x18) == '\0') {
          return uVar4;
        }
        if ((*(long *)(param_4 + 0x60) != 0) &&
           (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_4 + 0x60),0), lVar3 != 0)) {
          uVar6 = 1;
          puStack_48 = (undefined *)0x1496734;
          ppuVar1 = (undefined1 **)&uStack_30;
          goto code_r0x0322ef1c;
        }
      }
    }
    else {
      plVar5 = *(long **)(param_4 + 0xb8);
      if (plVar5 != (long *)0x0) {
        iVar2 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
        if (iVar2 == 0) {
LAB_0149675c:
          if ((*(long *)(param_4 + 0x60) != 0) &&
             (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_4 + 0x60),0), lVar3 != 0)) {
            uVar6 = 0;
            puStack_48 = (undefined *)0x149677c;
            goto code_r0x0322ef1c;
          }
        }
        else if (*(long *)(param_4 + 0xb8) != 0) {
          if (*(char *)(*(long *)(param_4 + 0xb8) + 300) != '\0') goto LAB_0149675c;
          if (*(long *)(param_4 + 0x60) != 0) {
            unaff_x20 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(param_4 + 0x60),0);
            if (((*(long *)(param_4 + 0xb8) != 0) &&
                (lVar3 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingBehaviour
                                   (*(long *)(param_4 + 0xb8),0), lVar3 != 0)) &&
               (lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar3,0), lVar3 != 0)) {
              uStack_30 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar3,0);
              uStack_2c = param_2;
              uStack_28 = param_3;
              uVar8 = Atlas_UI_MiniMapBehaviour__MapPosition(param_4,&uStack_30);
              if (unaff_x20 != 0) {
                uStack_28 = uVar8;
                uStack_24 = param_2;
                if (pcRam0000000003ec07e0 == (code *)0x0) {
                  pcRam0000000003ec07e0 =
                       (code *)func_0x00f789d4("UnityEngine.RectTransform::set_anchoredPosition_Injected(UnityEngine.Vector2&)"
                                               ,0);
                }
                uVar4 = (*pcRam0000000003ec07e0)(unaff_x20,&uStack_28);
                return uVar4;
              }
            }
          }
        }
      }
    }
  }
  auVar9 = func_0x00f78af4();
  lVar3 = auVar9._8_8_;
  ppuVar7 = &puStack_40;
  puStack_38 = &Atlas_UI_MiniMapBehaviour__ShouldPlayerHaveCrown;
  if (lVar3 != 0) {
    if ((*(int *)(lVar3 + 0x74) == 1) && (*(char *)(auVar9._0_8_ + 0x8d) != '\0')) {
      if (*(char *)(auVar9._0_8_ + 0x70) == '\0') {
        uVar4 = 1;
      }
      else {
        uVar4 = (ulong)(0 < *(int *)(lVar3 + 0x78));
      }
    }
    else {
      uVar4 = 0;
    }
    return uVar4;
  }
  puStack_40 = &stack0xfffffffffffffff0;
  auVar9 = func_0x00f78af4();
  puStack_48 = &Atlas_UI_MiniMapBehaviour__OnCollectibleCollected;
  lVar3 = *(long *)(auVar9._0_8_ + 0x68);
  if (((((lVar3 == 0) || (lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar3,0), lVar3 == 0)) ||
       (lVar3 = /*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar3,0), auVar9._8_8_ == 0)) ||
      ((lVar3 == 0 ||
       (lVar3 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar3,*(undefined4 *)(auVar9._8_8_ + 0x20),0), lVar3 == 0)))) ||
     (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar3,0), lVar3 == 0)) {
    uVar4 = func_0x00f78af4();
    *(undefined4 *)(uVar4 + 0x38) = 0x3f8ccccd;
    *(undefined1 *)(uVar4 + 0x8d) = 1;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return uVar4;
  }
  uVar6 = 0;
  ppuVar1 = &puStack_40;
code_r0x0322ef1c:
  *(undefined8 *)((long)ppuVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)ppuVar1 + -0x28) = unaff_x21;
  *(long *)((long)ppuVar1 + -0x20) = unaff_x20;
  *(ulong *)((long)ppuVar1 + -0x18) = param_4;
  *(undefined1 ***)((long)ppuVar1 + -0x10) = ppuVar7;
  *(undefined **)((long)ppuVar1 + -8) = puStack_48;
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*pcRam0000000003ebf4c0)(lVar3,uVar6);
  return uVar4;
}



// ============================================================
// RVA: 0x1496800 | Atlas.UI.MiniMapBehaviour.ShouldPlayerHaveCrown
// ============================================================

undefined1  [16] Atlas_UI_MiniMapBehaviour__ShouldPlayerHaveCrown(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 != 0) {
    if ((*(int *)(param_2 + 0x74) == 1) && (*(char *)(param_1 + 0x8d) != '\0')) {
      if (*(char *)(param_1 + 0x70) == '\0') {
        uVar1 = 1;
      }
      else {
        uVar1 = (ulong)(0 < *(int *)(param_2 + 0x78));
      }
    }
    else {
      uVar1 = 0;
    }
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = uVar1;
    return auVar3;
  }
  auVar4 = func_0x00f78af4();
  lVar2 = *(long *)(auVar4._0_8_ + 0x68);
  if (((((lVar2 != 0) && (lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar2,0), lVar2 != 0)) &&
       (lVar2 = /*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar2,0), auVar4._8_8_ != 0)) &&
      ((lVar2 != 0 &&
       (lVar2 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar2,*(undefined4 *)(auVar4._8_8_ + 0x20),0), lVar2 != 0)))) &&
     (lVar2 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar2,0), lVar2 != 0)) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar4 = (*pcRam0000000003ebf4c0)(lVar2,0);
    return auVar4;
  }
  auVar4._0_8_ = func_0x00f78af4();
  *(undefined4 *)(auVar4._0_8_ + 0x38) = 0x3f8ccccd;
  *(undefined1 *)(auVar4._0_8_ + 0x8d) = 1;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar4._8_8_ = 0;
  return auVar4;
}



// ============================================================
// RVA: 0x1496850 | Atlas.UI.MiniMapBehaviour.OnCollectibleCollected
// ============================================================

undefined1  [16] Atlas_UI_MiniMapBehaviour__OnCollectibleCollected(long param_1,long param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if (((((*(long *)(param_1 + 0x68) != 0) &&
        (lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_1 + 0x68),0), lVar1 != 0)) &&
       (lVar1 = /*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar1,0), param_2 != 0)) &&
      ((lVar1 != 0 && (lVar1 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar1,*(undefined4 *)(param_2 + 0x20),0), lVar1 != 0)
       ))) && (lVar1 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar1,0), lVar1 != 0)) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar2 = (*pcRam0000000003ebf4c0)(lVar1,0);
    return auVar2;
  }
  auVar2._0_8_ = func_0x00f78af4();
  *(undefined4 *)(auVar2._0_8_ + 0x38) = 0x3f8ccccd;
  *(undefined1 *)(auVar2._0_8_ + 0x8d) = 1;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  return auVar2;
}



// ============================================================
// RVA: 0x14968b8 | Atlas.UI.MiniMapBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_MiniMapBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x38) = 0x3f8ccccd;
  *(undefined1 *)(param_1 + 0x8d) = 1;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



