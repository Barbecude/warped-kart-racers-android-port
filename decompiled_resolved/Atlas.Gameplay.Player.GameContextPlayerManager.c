// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Player.GameContextPlayerManager

// ============================================================
// RVA: 0x1598910 | Atlas.Gameplay.Player.GameContextPlayerManager.Update
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Gameplay_Player_GameContextPlayerManager__Update
                (undefined1 param_1 [16],undefined8 param_2,undefined4 param_3,ulong param_4)

{
  float fVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  int extraout_w1;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined4 uVar15;
  float extraout_s0;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined1 ***pppuStack_c0;
  code *pcStack_b8;
  long *plStack_b0;
  long lStack_a8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  long lStack_90;
  long lStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  if (*(char *)(param_4 + 0x50) == '\0') {
    lVar14 = *(long *)(param_4 + 0x30);
    if (lVar14 != 0) {
      lVar13 = 0;
      uVar12 = 0;
      do {
        uVar16 = (undefined4)param_2;
        if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)uVar12) goto LAB_015989d0;
        if (*(uint *)(lVar14 + 0x18) <= uVar12) {
LAB_01598a0c:
          uVar4 = func_0x00f78b24();
          auVar17 = func_0x00f78ac0(uVar4,0);
          plVar3 = auVar17._8_8_;
          lVar9 = auVar17._0_8_;
          pcStack_68 = Atlas_Contexts_GameContextBase__UpdateFrameTiming;
          lStack_90 = lVar14;
          lStack_88 = lVar13;
          uStack_80 = uVar12;
          uStack_78 = param_4;
          puStack_70 = &stack0xfffffffffffffff0;
          if ((bRam0000000003eb51ba & 1) == 0) {
            func_0x00f78a20(0x3d57088);
            func_0x00f78a20(0x3d22618);
            bRam0000000003eb51ba = 1;
          }
          uVar12 = Atlas_Contexts_GameContextBase__IsActiveState_GameContextBaseInProgressState_
                             (lVar9,uRam0000000003d57088);
          if ((int)uVar12 == 0) {
            return uVar12;
          }
          if (plVar3 != (long *)0x0) {
            lVar14 = *plVar3;
            uVar12 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar12 == 0) goto LAB_01598ab0;
            piVar11 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            goto LAB_01598a98;
          }
          auVar18 = func_0x00f78af4();
          uVar4 = auVar18._8_8_;
          lVar14 = auVar18._0_8_;
          pcStack_98 = Atlas_Contexts_GameContextBase__OnPreLateUpdate;
          lStack_a8 = lVar9;
          ppuStack_a0 = &puStack_70;
          if (*(long *)(lVar14 + 0x138) != 0) {
            plStack_b0 = plVar3;
            Atlas_Gameplay_Kart_KartFollowCamera__LateUpdate(*(long *)(lVar14 + 0x138),uVar4,0);
            auVar17._8_8_ = plStack_b0;
            auVar17._0_8_ = uVar4;
            uVar12 = *(ulong *)(lVar14 + 0x130);
            if (uVar12 != 0) {
              pppuStack_c0 = (undefined1 ***)0x3d57088;
              pcStack_b8 = (code *)0x3eb5000;
              uVar6 = uVar12;
              if ((bRam0000000003eb534d & 1) == 0) {
                func_0x00f78a20(0x3d57f90,uVar4,0);
                func_0x00f78a20(0x3d3ae30);
                func_0x00f78a20(0x3d3ae38);
                uVar6 = func_0x00f78a20(0x3d23990);
                bRam0000000003eb534d = 1;
              }
              if (*(int *)(uVar12 + 0xa0) < 1) {
                return uVar6;
              }
              if (*(long *)(uVar12 + 0x40) == 0) goto LAB_015cf5d8;
              lVar14 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(uVar12 + 0x40),0);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar6 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar14,0,0);
              if ((uVar6 & 1) != 0) {
                return uVar6;
              }
              if ((lVar14 == 0) || (lVar14 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar14,0), lVar14 == 0))
              goto LAB_015cf5d8;
              /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(lVar14,0);
              uStack_f0 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
              uStack_d8 = *(undefined8 *)(uVar12 + 0x80);
              uStack_e0 = *(undefined8 *)(uVar12 + 0x78);
              lStack_d0 = *(undefined8 *)(uVar12 + 0x98);
              uStack_c8 = *(undefined8 *)(uVar12 + 0xa0);
              uStack_e4 = 0;
              uStack_ec = uVar16;
              uStack_e8 = param_3;
              uVar6 = /*Unity.Jobs.IJobExtensions$$Run<DistanceJob>*/ func_0x0185e5e4(&uStack_f0,uRam0000000003d57f90);
              lVar14 = *(long *)(uVar12 + 0x10);
              if (lVar14 == 0) goto LAB_015cf5d8;
              lVar13 = 0;
              goto code_r0x015cf594;
            }
          }
          plStack_b0 = auVar17._8_8_;
          auVar18 = func_0x00f78af4();
          plVar3 = auVar18._8_8_;
          lVar13 = auVar18._0_8_;
          uStack_e0 = 0x3d57088;
          uStack_d8 = 0x3eb5000;
          pcStack_b8 = Atlas_Contexts_GameContextBase__OnLateUpdate;
          lStack_d0 = lVar14;
          uStack_c8 = auVar17._0_8_;
          pppuStack_c0 = &ppuStack_a0;
          if ((bRam0000000003eb51a0 & 1) == 0) {
            func_0x00f78a20(0x3d21b08);
            func_0x00f78a20(0x3d22618);
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb51a0 = 1;
          }
          if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar4 = *(undefined8 *)(*(long *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xb8) + 0x18);
          /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar4,0);
          if (*(long *)(lVar13 + 400) == 0) {
            func_0x00f78af4();
          }
          else {
            /*NetworkCarUpdater$$LateUpdate*/ func_0x0149fc44(*(long *)(lVar13 + 400),plVar3,0);
            if (*(long *)(lVar13 + 0x1a0) == 0) {
              func_0x00f78af4();
            }
            else {
              /*Atlas.Networking.NetworkMigrationUpdater$$LateUpdate*/ func_0x014ad028(*(long *)(lVar13 + 0x1a0),0);
              uVar8 = *(undefined8 *)(lVar13 + 0x1d8);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar12 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
              if ((uVar12 & 1) != 0) {
                if (*(long *)(lVar13 + 0x1d8) == 0) {
                  func_0x00f78af4();
                  goto code_r0x01598d2c;
                }
                if (*(long *)(lVar13 + 0x1f8) == 0) {
                  func_0x00f78af4();
                  goto code_r0x01598d2c;
                }
                _memmove(*(long *)(lVar13 + 0x1f8) + 0x5c,*(long *)(lVar13 + 0x1d8) + 0xf8,0x44);
              }
              if (*(long *)(lVar13 + 0x1f8) == 0) {
                func_0x00f78af4();
              }
              else {
                /*Atlas.Lighting.LightWorld$$Update*/ func_0x014850cc(*(long *)(lVar13 + 0x1f8),0);
                lVar14 = *(long *)(lVar13 + 0x230);
                if (lVar14 == 0) goto LAB_01598ce8;
                if (plVar3 != (long *)0x0) {
                  lVar13 = *plVar3;
                  uVar12 = (ulong)*(ushort *)(lVar13 + 0x12a);
                  if (uVar12 == 0) goto LAB_01598cb4;
                  piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  goto LAB_01598c9c;
                }
                func_0x00f78af4();
              }
            }
          }
code_r0x01598d2c:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1598d30);
          (*pcVar2)();
        }
        plVar3 = *(long **)(param_4 + 0x18);
        if (plVar3 == (long *)0x0) break;
        uVar15 = (**(code **)(*plVar3 + 0x2b8))
                           (plVar3,*(undefined8 *)(lVar14 + lVar13 + 0x20),&uStack_58,
                            *(undefined8 *)(*plVar3 + 0x2c0));
        uVar16 = (undefined4)param_2;
        if (*(uint *)(lVar14 + 0x18) <= uVar12) goto LAB_01598a0c;
        *(undefined4 *)(lVar14 + lVar13 + 0x28) = uVar15;
        lVar9 = *(long *)(param_4 + 0x30);
        if (lVar9 == 0) break;
        if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_01598a0c;
        lVar9 = lVar9 + lVar13;
        lVar13 = lVar13 + 0x28;
        uVar12 = uVar12 + 1;
        *(undefined8 *)(lVar9 + 0x40) = uStack_48;
        *(undefined8 *)(lVar9 + 0x38) = uStack_50;
        *(undefined8 *)(lVar9 + 0x30) = uStack_58;
        lVar14 = *(long *)(param_4 + 0x30);
      } while (lVar14 != 0);
    }
    func_0x00f78af4();
LAB_015989d0:
    /*Atlas.Gameplay.Player.GameContextPlayerManager$$SortPlayers*/ func_0x015a634c(param_4);
    if (*(long *)(param_4 + 0x58) != 0) {
      Atlas_Audio_AtlasAudioManager__UpdateRanking
                (*(long *)(param_4 + 0x58),*(undefined8 *)(param_4 + 0x28),0);
    }
    param_4 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$UpdatePlayerTypeArrays*/ func_0x015a6494(param_4);
  }
  return param_4;
  while( true ) {
    *(undefined4 *)(lVar14 + 0xf4) = *(undefined4 *)(*(long *)(uVar12 + 0x98) + lVar13 * 4);
    lVar14 = *(long *)(uVar12 + 0x10);
    lVar13 = lVar13 + 1;
    if (lVar14 == 0) break;
code_r0x015cf594:
    if ((int)*(uint *)(lVar14 + 0x18) <= (int)(uint)lVar13) {
      return uVar6;
    }
    if (*(uint *)(lVar14 + 0x18) <= (uint)lVar13) {
      uVar6 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0x10) + lVar13 * 8 + 0x20);
    if (lVar14 == 0) break;
  }
LAB_015cf5d8:
  uVar4 = func_0x00f78af4();
  if ((bRam0000000003eb5341 & 1) == 0) {
    func_0x00f78a20(0x3d27d08);
    bRam0000000003eb5341 = 1;
  }
  uVar12 = func_0x00f78aec(/*Atlas.Gameplay.Kart.KartManager.<WaitOnLoad>d__39_TypeInfo*/ uRam0000000003d27d08);
  uVar8 = 0;
  Atlas_Gameplay_Kart_KartManager__WaitOnLoad_d__39___ctor(uVar12,0);
  if (uVar12 != 0) {
    *(undefined8 *)(uVar12 + 0x20) = uVar4;
    return uVar12;
  }
  auVar17 = func_0x00f78af4();
  plVar3 = auVar17._8_8_;
  lVar14 = auVar17._0_8_;
  puVar5 = (undefined8 *)0x3eb5000;
  if ((bRam0000000003eb5342 & 1) == 0) {
    func_0x00f78a20(0x3d43370);
    func_0x00f78a20(0x3d1feb0);
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    func_0x00f78a20(0x3d3ae30);
    bRam0000000003eb5342 = 1;
  }
  uStack_180 = 0;
  uStack_178 = 0;
  lStack_170 = 0;
  if (*(long *)(lVar14 + 0x18) == 0) goto LAB_015cf85c;
  Atlas_Gameplay_Kart_KartCompositeFactory__CreateRequestedKartComposites
            (*(long *)(lVar14 + 0x18),*(undefined8 *)(lVar14 + 0x10),plVar3,uVar8,
             *(undefined8 *)(lVar14 + 0x20));
  if (*(long *)(lVar14 + 0x10) == 0) goto LAB_015cf85c;
  plVar3 = (long *)0x3d1feb0;
  puVar5 = (undefined8 *)0x3d328c8;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_198,*(long *)(lVar14 + 0x10),uRam0000000003d3ae20);
  uStack_178 = uStack_190;
  uStack_180 = uStack_198;
  lStack_170 = lStack_188;
  while (uVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_180,uRam0000000003d328d0), lVar13 = lStack_170,
        (uVar12 & 1) != 0) {
    if (*(long *)(lVar14 + 0x28) == 0) {
      func_0x00f78af4();
code_r0x015cf858:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x15cf85c);
      (*pcVar2)();
    }
    /*Core.Actors.ActorManager$$TryAddToGroup<object>*/ func_0x0171edb0(*(long *)(lVar14 + 0x28),lStack_170,uRam0000000003d43370);
    if (lVar13 == 0) {
      func_0x00f78af4();
      goto code_r0x015cf858;
    }
    if (*(long *)(lVar13 + 0x18) == 0) {
      func_0x00f78af4();
      goto code_r0x015cf858;
    }
    lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar13 + 0x18),0);
    if (lVar9 == 0) {
      func_0x00f78af4();
      goto code_r0x015cf858;
    }
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar9,1,0);
    if (*(long *)(lVar13 + 0x20) == 0) {
      func_0x00f78af4();
      goto code_r0x015cf858;
    }
    if (*(int *)(*(long *)(lVar13 + 0x20) + 0x10) == 2) {
      *(long *)(lVar14 + 0x48) = lVar13;
    }
    if (*(long *)(lVar14 + 0x38) == 0) {
      func_0x00f78af4();
      goto code_r0x015cf858;
    }
    /*Atlas.Lighting.LightWorld$$RegisterMember*/ func_0x01486578(*(long *)(lVar14 + 0x38),lVar13,0);
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_180,uRam0000000003d328c8);
  do {
    Atlas_Gameplay_Kart_KartManager__InitKartSideOnTimeRelationships(lVar14);
    if (((*(ushort *)(*plVar3 + 0x132) >> 10 & 1) != 0) && (*(int *)(*plVar3 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    Atlas_Gameplay_Kart_KartManager__ApplyVFXSettings(lVar14);
    uVar12 = Atlas_Gameplay_Kart_KartManager__ApplyOutlineSettings(lVar14);
    if (*(long *)(lVar14 + 0x10) != 0) {
      *(undefined4 *)(lVar14 + 0x11c) = *(undefined4 *)(*(long *)(lVar14 + 0x10) + 0x18);
      return uVar12;
    }
LAB_015cf85c:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x015cf8b4;
    plVar7 = (long *)___cxa_begin_catch();
    lVar13 = *plVar7;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_180,*puVar5);
  } while (lVar13 == 0);
  func_0x00f78ac0(lVar13,0);
code_r0x015cf8b4:
  lVar14 = __Unwind_Resume();
  if ((bRam0000000003eb534b & 1) == 0) {
    func_0x00f78a20(0x3d3ae30);
    func_0x00f78a20(0x3d1ecd8);
    func_0x00f78a20(0x3d1f828);
    bRam0000000003eb534b = 1;
  }
  if (*(long *)(lVar14 + 0x10) != 0) {
    uVar12 = func_0x00f78a34(/*Atlas.Gameplay.Kart.KartManager.SideOnKartData[][]_TypeInfo*/ uRam0000000003d1ecd8,*(undefined4 *)(*(long *)(lVar14 + 0x10) + 0x18));
    *(ulong *)(lVar14 + 0x70) = uVar12;
    if (*(long *)(lVar14 + 0x10) != 0) {
      if (0 < *(int *)(*(long *)(lVar14 + 0x10) + 0x18)) {
        uVar6 = 0;
        do {
          plVar3 = *(long **)(lVar14 + 0x70);
          lVar13 = func_0x00f78a34(/*Atlas.Gameplay.Kart.KartManager.SideOnKartData[]_TypeInfo*/ uRam0000000003d1f828);
          if (plVar3 == (long *)0x0) goto LAB_015cfa18;
          uVar12 = 0;
          if ((lVar13 != 0) &&
             (uVar12 = func_0x00f78adc(lVar13,*(undefined8 *)(*plVar3 + 0x40)), uVar12 == 0))
          goto LAB_015cfa28;
          if (*(uint *)(plVar3 + 3) <= uVar6) goto LAB_015cfa1c;
          plVar3[uVar6 + 4] = lVar13;
          lVar13 = *(long *)(lVar14 + 0x10);
          if (lVar13 == 0) goto LAB_015cfa18;
          lVar9 = 0;
          uVar10 = 0;
          while ((long)uVar10 < (long)*(int *)(lVar13 + 0x18)) {
            lVar13 = *(long *)(lVar14 + 0x70);
            if (lVar13 == 0) goto LAB_015cfa18;
            if (*(uint *)(lVar13 + 0x18) <= uVar6) goto LAB_015cfa1c;
            lVar13 = *(long *)(lVar13 + uVar6 * 8 + 0x20);
            if (lVar13 == 0) goto LAB_015cfa18;
            if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_015cfa1c;
            lVar13 = lVar13 + lVar9;
            lVar9 = lVar9 + 0xc;
            uVar10 = uVar10 + 1;
            *(undefined8 *)(lVar13 + 0x20) = 0x200000000;
            *(undefined4 *)(lVar13 + 0x28) = 0;
            lVar13 = *(long *)(lVar14 + 0x10);
            if (lVar13 == 0) goto LAB_015cfa18;
          }
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)*(int *)(lVar13 + 0x18));
      }
      return uVar12;
    }
  }
LAB_015cfa18:
  func_0x00f78af4();
LAB_015cfa1c:
  uVar4 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar4,0);
LAB_015cfa28:
    uVar4 = func_0x00f78b14();
  } while( true );
  while( true ) {
    piVar11 = piVar11 + 4;
    uVar12 = uVar12 - 1;
    if (uVar12 == 0) break;
LAB_01598a98:
    if (*(long *)(piVar11 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
      puVar5 = (undefined8 *)(lVar14 + (long)(*piVar11 + 1) * 0x10 + 0x138);
      goto LAB_01598ad0;
    }
  }
LAB_01598ab0:
  puVar5 = (undefined8 *)func_0x00fac1f0(plVar3,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,1);
LAB_01598ad0:
  uVar12 = (*(code *)*puVar5)(plVar3,puVar5[1]);
  fVar1 = extraout_s0;
  if (_UNK_033f8144 < extraout_s0) {
    fVar1 = _UNK_033f8144;
  }
  *(double *)(lVar9 + 0x220) = *(double *)(lVar9 + 0x220) + (double)fVar1;
  *(int *)(lVar9 + 0x228) = *(int *)(lVar9 + 0x228) + 1;
  return uVar12;
  while( true ) {
    piVar11 = piVar11 + 4;
    uVar12 = uVar12 - 1;
    if (uVar12 == 0) break;
LAB_01598c9c:
    if (*(long *)(piVar11 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
      puVar5 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_01598cd0;
    }
  }
LAB_01598cb4:
  puVar5 = (undefined8 *)func_0x00fac1f0(plVar3,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
LAB_01598cd0:
  (*(code *)*puVar5)(plVar3,puVar5[1]);
  /*Atlas.Arcade.ArcadeEvent$$LateUpdate*/ func_0x0144d2a4(lVar14,0);
LAB_01598ce8:
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar12 = (*pcRam0000000003ec05a0)(uVar4);
  return uVar12;
}



// ============================================================
// RVA: 0x1599b24 | Atlas.Gameplay.Player.GameContextPlayerManager.GetLocalGameContextPlayer
// ============================================================

/* WARNING: Possible PIC construction at 0x0159a23c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01b570bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159a240) */
/* WARNING: Removing unreachable block (ram,0x01b570c0) */
/* WARNING: Removing unreachable block (ram,0x01b57150) */
/* WARNING: Removing unreachable block (ram,0x01b570c4) */
/* WARNING: Removing unreachable block (ram,0x01b570d0) */
/* WARNING: Removing unreachable block (ram,0x01b570d8) */
/* WARNING: Removing unreachable block (ram,0x01b57168) */
/* WARNING: Removing unreachable block (ram,0x01b570ec) */
/* WARNING: Removing unreachable block (ram,0x01b57100) */
/* WARNING: Removing unreachable block (ram,0x01b57110) */
/* WARNING: Removing unreachable block (ram,0x01b57120) */
/* WARNING: Removing unreachable block (ram,0x01b57130) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Gameplay_Player_GameContextPlayerManager__GetLocalGameContextPlayer
                (long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  char cVar2;
  ushort uVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *extraout_x1;
  ulong uVar16;
  undefined8 *puVar17;
  uint extraout_w8;
  uint uVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  long extraout_x9;
  int iVar23;
  ulong unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long lVar24;
  undefined8 unaff_x22;
  long lVar25;
  long unaff_x23;
  long lVar26;
  code *pcVar27;
  long unaff_x24;
  undefined8 unaff_x26;
  undefined8 *******pppppppuVar28;
  undefined4 uVar29;
  uint extraout_s0;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 unaff_d8;
  undefined8 uVar35;
  undefined8 unaff_d9;
  undefined1 auVar36 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  ulong uStack_98;
  undefined8 ******ppppppuStack_90;
  code *pcStack_88;
  undefined8 auStack_80 [2];
  undefined8 *****pppppuStack_20;
  code *pcStack_18;
  
  lVar19 = *(long *)(param_1 + 0x28);
  if (lVar19 != 0) {
    iVar6 = *(int *)(lVar19 + 0x18);
    if (0 < iVar6) {
      iVar23 = 0;
      do {
        if (iVar6 == iVar23) goto LAB_01599b8c;
        uVar7 = *(ulong *)(lVar19 + (long)iVar23 * 8 + 0x20);
        if ((uVar7 == 0) || (*(long *)(uVar7 + 0x10) == 0)) goto LAB_01599b88;
        if (*(int *)(*(long *)(uVar7 + 0x10) + 0x50) == 0) {
          return uVar7;
        }
        iVar23 = iVar23 + 1;
      } while (iVar6 != iVar23);
    }
    return 0;
  }
LAB_01599b88:
  func_0x00f78af4();
LAB_01599b8c:
  uVar8 = func_0x00f78b24();
  auVar36 = func_0x00f78ac0(uVar8,0);
  lVar9 = auVar36._8_8_;
  lVar19 = auVar36._0_8_;
  pcStack_18 = Atlas_Contexts_GameContextBase__DispatchLeagueEventAnalytics;
  pppppuStack_20 = (undefined8 *****)&stack0xfffffffffffffff0;
  if (*(long *)(lVar19 + 0x240) != 0) {
    pppppuStack_20 = (undefined8 *****)&stack0xfffffffffffffff0;
    uVar8 = Atlas_League_LeagueManager__GetReplayCountAndUpdate(*(long *)(lVar19 + 0x240),param_3,0)
    ;
    unaff_x19 = param_5;
    unaff_x20 = param_3;
    unaff_x21 = param_4;
    unaff_x23 = lVar9;
    if ((*(long *)(lVar19 + 0x1b0) != 0) && (unaff_x22 = uVar8, *(long *)(lVar19 + 0x240) != 0)) {
      unaff_x24 = *(long *)(*(long *)(lVar19 + 0x1b0) + 0x48);
      lVar9 = Atlas_League_LeagueManager__GetCurrentLeagueDefinition(*(long *)(lVar19 + 0x240),0);
      if ((lVar9 != 0) && (*(long *)(lVar19 + 0x240) != 0)) {
        unaff_x26 = *(undefined8 *)(lVar9 + 0x58);
        uVar10 = Atlas_League_LeagueManager__GetCurrentSeed(*(long *)(lVar19 + 0x240),0);
        if ((*(long *)(lVar19 + 0x240) != 0) &&
           (iVar6 = Atlas_League_LeagueManager__GetTodayIndex(*(long *)(lVar19 + 0x240),0),
           unaff_x24 != 0)) {
          iVar23 = (int)param_4 - (int)param_5;
          if (auVar36._8_4_ == 0) {
            iVar23 = 0;
          }
          auStack_80[0] = 0;
          uVar7 = /*Atlas.Analytics.AtlasAnalyticsEvents$$LeagueEvent*/ func_0x01456ed4(unaff_x24,unaff_x26,uVar10,iVar6 + 1,(int)param_3 + 1,param_5,
                                  uVar8,iVar23);
          return uVar7;
        }
      }
    }
  }
  uVar7 = func_0x00f78af4();
  puVar4 = &uStack_b0;
  pcStack_88 = Atlas_Contexts_GameContextBase__EndOfTournamentRound;
  pppppppuVar28 = &ppppppuStack_90;
  lVar9 = 0x3eb5000;
  uStack_b0 = unaff_x22;
  uStack_a8 = unaff_x21;
  lStack_a0 = unaff_x20;
  uStack_98 = unaff_x19;
  ppppppuStack_90 = &pppppuStack_20;
  if ((bRam0000000003eb51a9 & 1) == 0) {
    func_0x00f78a20(0x3d21a08);
    func_0x00f78a20(0x3d19d50);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb51a9 = 1;
  }
  if ((*(long *)(uVar7 + 0xc0) == 0) ||
     (lVar11 = *(long *)(*(long *)(uVar7 + 0xc0) + 0x20), lVar11 == 0)) {
LAB_01599d9c:
    pcVar27 = Atlas_Contexts_GameContextBase__SwitchToFrontEndContext;
    auVar36 = func_0x00f78af4();
  }
  else {
    iVar6 = /*Core.Networking.NetworkSession$$IsLastRoundOfTournament*/ func_0x0165e580(lVar11,0);
    if (iVar6 == 0) {
      lVar9 = func_0x00f78aec(/*Atlas.FrontEnd.FrontEndContextInfo_TypeInfo*/ uRam0000000003d21a08);
      Atlas_FrontEnd_FrontEndContextInfo___ctor(lVar9,0);
      unaff_x21 = /*Atlas.Contexts.RoundResultsState_var*/ uRam0000000003d19d50;
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x21,0);
      if (lVar9 != 0) {
        *(undefined8 *)(lVar9 + 0x18) = uVar8;
        lVar11 = *(long *)(uVar7 + 0x70);
        if (lVar11 != 0) goto code_r0x0163d6f8;
      }
      goto LAB_01599d9c;
    }
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar7;
    puVar4 = auStack_80;
    uVar7 = uStack_98;
    lVar9 = lStack_a0;
    unaff_x21 = uStack_a8;
    unaff_x22 = uStack_b0;
    pppppppuVar28 = (undefined8 *******)ppppppuStack_90;
    pcVar27 = pcStack_88;
  }
  lVar24 = auVar36._8_8_;
  lVar25 = auVar36._0_8_;
  *(undefined8 *)((long)puVar4 + -0x50) = unaff_x26;
  *(long *)((long)puVar4 + -0x48) = lVar19;
  *(long *)((long)puVar4 + -0x40) = unaff_x24;
  *(long *)((long)puVar4 + -0x38) = unaff_x23;
  *(undefined8 *)((long)puVar4 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar4 + -0x28) = unaff_x21;
  *(long *)((long)puVar4 + -0x20) = lVar9;
  *(ulong *)((long)puVar4 + -0x18) = uVar7;
  *(undefined8 ********)((long)puVar4 + -0x10) = pppppppuVar28;
  *(code **)((long)puVar4 + -8) = pcVar27;
  lVar19 = 0x3eb5000;
  if ((bRam0000000003eb51a7 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d21a08);
    func_0x00f78a20(0x3d194d8);
    func_0x00f78a20(0x3d194e8);
    func_0x00f78a20(0x3d194f0);
    func_0x00f78a20(0x3d21b08);
    func_0x00f78a20(0x3d57500);
    func_0x00f78a20(0x3d27688);
    func_0x00f78a20(0x3d27638);
    func_0x00f78a20(0x3d19d50);
    func_0x00f78a20(0x3d28a08);
    func_0x00f78a20(0x3d24a70);
    func_0x00f78a20(0x3d27650);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d6d050);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb51a7 = 1;
  }
  *(undefined8 *)((long)puVar4 + -0x68) = 0;
  *(undefined8 *)((long)puVar4 + -0x70) = 0;
  *(undefined8 *)((long)puVar4 + -0x58) = 0;
  *(undefined8 *)((long)puVar4 + -0x60) = 0;
  lVar9 = func_0x00f78aec(/*Atlas.FrontEnd.FrontEndContextInfo_TypeInfo*/ uRam0000000003d21a08);
  Atlas_FrontEnd_FrontEndContextInfo___ctor(lVar9,0);
  if (((lVar9 != 0) && (lVar11 = *(long *)(lVar25 + 0x1c0), lVar11 != 0)) &&
     (lVar22 = *(long *)(lVar9 + 0x10), lVar22 != 0)) {
    *(undefined8 *)(lVar22 + 0x18) = *(undefined8 *)(lVar11 + 0x10);
    *(undefined8 *)(lVar22 + 0x20) = *(undefined8 *)(lVar11 + 0x38);
    *(undefined4 *)(lVar22 + 0x10) = *(undefined4 *)(lVar11 + 0x18);
    uVar10 = *(undefined8 *)(lVar11 + 0x80);
    uVar8 = *(undefined8 *)(lVar11 + 0x78);
    uVar32 = *(undefined8 *)(lVar11 + 0x90);
    uVar31 = *(undefined8 *)(lVar11 + 0x88);
    uVar34 = *(undefined8 *)(lVar11 + 0x98);
    uVar33 = *(undefined8 *)(lVar11 + 0xb0);
    uVar35 = *(undefined8 *)(lVar11 + 0xa8);
    *(undefined8 *)(lVar22 + 0x58) = *(undefined8 *)(lVar11 + 0xa0);
    *(undefined8 *)(lVar22 + 0x50) = uVar34;
    *(undefined8 *)(lVar22 + 0x68) = uVar33;
    *(undefined8 *)(lVar22 + 0x60) = uVar35;
    *(undefined8 *)(lVar22 + 0x38) = uVar10;
    *(undefined8 *)(lVar22 + 0x30) = uVar8;
    *(undefined8 *)(lVar22 + 0x48) = uVar32;
    *(undefined8 *)(lVar22 + 0x40) = uVar31;
    if ((*(long *)(lVar25 + 0x1c0) != 0) && (lVar19 = *(long *)(lVar9 + 0x10), lVar19 != 0)) {
      *(undefined8 *)(lVar19 + 0x28) = *(undefined8 *)(*(long *)(lVar25 + 0x1c0) + 200);
      if (*(long *)(lVar25 + 0x118) != 0) {
        uVar5 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(*(long *)(lVar25 + 0x118),0);
        *(undefined1 *)(lVar19 + 0x78) = uVar5;
        if ((*(long *)(lVar25 + 0xb8) != 0) && (*(long *)(lVar25 + 0x1c0) != 0)) {
          lVar22 = 0x3d21270;
          lVar11 = 0x3d21270;
          lVar19 = *(long *)(*(long *)(lVar25 + 0xb8) + 0x10);
          unaff_x23 = *(long *)(*(long *)(lVar25 + 0x1c0) + 0x40);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(unaff_x23,0);
          unaff_x24 = lVar22;
          if ((*(long *)(lVar9 + 0x10) != 0) && (lVar19 != 0)) {
            /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar19,uVar8,*(long *)(lVar9 + 0x10) + 0x70,uRam0000000003d57500);
            lVar20 = *(long *)(lVar25 + 0x1c0);
            unaff_x24 = lVar11;
            if ((lVar20 != 0) && (lVar19 = *(long *)(lVar9 + 0x10), lVar19 != 0)) {
              *(undefined8 *)(lVar19 + 0x28) = *(undefined8 *)(lVar20 + 200);
              iVar6 = auVar36._8_4_;
              switch(*(undefined4 *)(lVar20 + 0x18)) {
              case 1:
                lVar24 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextPostQuickPlayState.QuickPlayTransitionData_TypeInfo*/ uRam0000000003d27638);
                Atlas_Contexts_FrontEndContextPostQuickPlayState_QuickPlayTransitionData___ctor
                          (lVar24,0);
                if (lVar24 != 0) {
                  *(undefined8 *)(lVar24 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
                  if ((*(long *)(lVar25 + 0x198) != 0) && (*(long *)(lVar25 + 0xc0) != 0)) {
                    uVar8 = Atlas_UI_Screens_ResultsScreen_Result__FromNetworkResults
                                      (*(undefined8 *)(*(long *)(lVar25 + 0x198) + 0x98),
                                       *(undefined8 *)(*(long *)(lVar25 + 0xc0) + 0x28),0);
                    *(undefined8 *)(lVar24 + 0x18) = uVar8;
                    *(long *)(lVar9 + 0x20) = lVar24;
                    lVar24 = /*Atlas.Contexts.FrontEndContextPostQuickPlayState_var*/ lRam0000000003d194d8;
                    if ((*(byte *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x133) >> 2 & 1) != 0)
                    goto code_r0x0159a204;
                    goto code_r0x0159a210;
                  }
                }
                break;
              case 2:
                lVar11 = *(long *)(lVar25 + 0xc0);
                if ((lVar11 != 0) && (lVar20 = *(long *)(lVar11 + 0x20), lVar20 != 0)) {
                  uVar10 = *(undefined8 *)(lVar20 + 0xd8);
                  uVar8 = *(undefined8 *)(lVar20 + 0xd0);
                  uVar32 = *(undefined8 *)(lVar20 + 0xe8);
                  uVar31 = *(undefined8 *)(lVar20 + 0xe0);
                  *(undefined8 *)((long)puVar4 + -0x68) = uVar10;
                  *(undefined8 *)((long)puVar4 + -0x70) = uVar8;
                  *(undefined8 *)((long)puVar4 + -0x58) = uVar32;
                  *(undefined8 *)((long)puVar4 + -0x60) = uVar31;
                  *(undefined8 *)((long)puVar4 + -0x88) = uVar10;
                  *(undefined8 *)((long)puVar4 + -0x90) = uVar8;
                  *(undefined8 *)((long)puVar4 + -0x78) = uVar32;
                  *(undefined8 *)((long)puVar4 + -0x80) = uVar31;
                  uVar8 = Atlas_UI_Screens_ResultsScreen_Result__FromTournament
                                    ((undefined1 *)((long)puVar4 + -0x90),
                                     *(undefined8 *)(lVar11 + 0x28),0);
                  lVar20 = func_0x00f78aec(/*Atlas.Contexts.RoundResultsState.RoundResultsTransitionData_TypeInfo*/ uRam0000000003d28a08);
                  *(undefined8 *)((long)puVar4 + -0xa8) = *(undefined8 *)((long)puVar4 + -0x68);
                  *(undefined8 *)((long)puVar4 + -0xb0) = *(undefined8 *)((long)puVar4 + -0x70);
                  *(undefined8 *)((long)puVar4 + -0x98) = *(undefined8 *)((long)puVar4 + -0x58);
                  *(undefined8 *)((long)puVar4 + -0xa0) = *(undefined8 *)((long)puVar4 + -0x60);
                  Atlas_Contexts_RoundResultsState_RoundResultsTransitionData___ctor
                            (lVar20,lVar19,uVar8,(undefined1 *)((long)puVar4 + -0xb0),0);
                  plVar12 = (long *)0x3d19d50;
                  *(long *)(lVar9 + 0x20) = lVar20;
code_r0x0159a1ec:
                  lVar24 = *plVar12;
                  unaff_x23 = lVar20;
                  if ((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) {
code_r0x0159a204:
                    if (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0) {
                      func_0x00f78ad0();
                    }
                  }
code_r0x0159a210:
                  uVar8 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar24,0);
                  *(undefined8 *)(lVar9 + 0x18) = uVar8;
                  goto LAB_0159a220;
                }
                break;
              case 3:
                lVar19 = *(long *)(lVar20 + 0x40);
                if ((0 < iVar6) && (*(char *)(lVar25 + 0x24a) == '\0')) {
                  if ((*(long *)(lVar25 + 0xb8) == 0) ||
                     (lVar11 = /*Atlas.Definitions.AtlasDefinitions$$GetNextEventDefinition*/ func_0x01468b08(*(long *)(lVar25 + 0xb8),lVar19,1,0), lVar11 == 0))
                  break;
                  lVar19 = *(long *)(lVar11 + 0x18);
                }
                lVar20 = func_0x00f78aec(/*Atlas.FrontEnd.SinglePlayerEventResults_TypeInfo*/ uRam0000000003d24a70);
                Atlas_FrontEnd_SinglePlayerEventResults___ctor(lVar20,0);
                unaff_x23 = lVar20;
                if (lVar20 != 0) {
                  *(int *)(lVar20 + 0x14) = iVar6;
                  *(undefined1 *)(lVar20 + 0x10) = *(undefined1 *)(lVar25 + 0x24a);
                  if (*(long *)(lVar25 + 0x1c0) != 0) {
                    *(undefined8 *)(lVar20 + 0x18) =
                         *(undefined8 *)(*(long *)(lVar25 + 0x1c0) + 0x40);
                    lVar11 = *(long *)(lVar25 + 0xf0);
                    if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    lVar24 = 0;
                    if (lVar11 != 0) {
                      iVar6 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                                        (lVar11,**(undefined8 **)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xb8),0);
                      if (iVar6 == 0) {
                        lVar24 = *(long *)(lVar9 + 0x10);
                        lVar22 = func_0x00f78aec(/*Atlas.Contexts.FrontendContextPostSingleplayerState.PostSingleplayerTransitionData_TypeInfo*/ uRam0000000003d27688);
                        lVar11 = lVar19;
                        lVar26 = lVar20;
                        goto code_r0x0159a0f4;
                      }
                      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      uVar10 = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
                      lVar22 = *(long *)(lVar9 + 0x10);
                      uVar8 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextSingleplayerState.SingleplayerTransitionData_TypeInfo*/ uRam0000000003d27650);
                      Atlas_Contexts_FrontEndContextSingleplayerState_SingleplayerTransitionData___ctor
                                (uVar8,lVar19,lVar20,uVar10,0,lVar22,0);
                      plVar12 = (long *)0x3d194e8;
code_r0x0159a070:
                      *(undefined8 *)(lVar9 + 0x20) = uVar8;
                      goto code_r0x0159a1ec;
                    }
                  }
                }
                break;
              case 4:
              case 5:
              case 9:
                lVar20 = func_0x00f78aec(/*Atlas.FrontEnd.SinglePlayerEventResults_TypeInfo*/ uRam0000000003d24a70);
                Atlas_FrontEnd_SinglePlayerEventResults___ctor(lVar20,0);
                lVar19 = lVar20;
                if (lVar20 != 0) {
                  *(int *)(lVar20 + 0x14) = iVar6;
                  *(undefined1 *)(lVar20 + 0x10) = *(undefined1 *)(lVar25 + 0x24a);
                  if (*(long *)(lVar25 + 0x1c0) != 0) {
                    *(undefined8 *)(lVar20 + 0x18) =
                         *(undefined8 *)(*(long *)(lVar25 + 0x1c0) + 0x40);
                    lVar24 = *(long *)(lVar9 + 0x10);
                    if ((lVar24 != 0) && (*(long *)(lVar24 + 0x70) != 0)) {
                      lVar19 = *(long *)(*(long *)(lVar24 + 0x70) + 0x18);
                      lVar22 = func_0x00f78aec(/*Atlas.Contexts.FrontendContextPostSingleplayerState.PostSingleplayerTransitionData_TypeInfo*/ uRam0000000003d27688);
                      lVar11 = lVar20;
                      lVar26 = lVar19;
code_r0x0159a0f4:
                      Atlas_Contexts_FrontendContextPostSingleplayerState_PostSingleplayerTransitionData___ctor
                                (lVar22,lVar24,lVar19,lVar20,/*STR('')*/ uRam0000000003d65d08,0);
                      plVar12 = (long *)0x3d194f0;
                      *(long *)(lVar9 + 0x20) = lVar22;
                      lVar19 = lVar11;
                      lVar20 = lVar26;
                      goto code_r0x0159a1ec;
                    }
                  }
                }
                break;
              case 6:
              case 7:
              case 8:
                lVar19 = func_0x00f78aec(/*Atlas.FrontEnd.SinglePlayerEventResults_TypeInfo*/ uRam0000000003d24a70);
                Atlas_FrontEnd_SinglePlayerEventResults___ctor(lVar19,0);
                if (lVar19 != 0) {
                  *(int *)(lVar19 + 0x14) = iVar6;
                  *(undefined1 *)(lVar19 + 0x10) = *(undefined1 *)(lVar25 + 0x24a);
                  if (*(long *)(lVar25 + 0x1c0) != 0) {
                    *(undefined8 *)(lVar19 + 0x18) =
                         *(undefined8 *)(*(long *)(lVar25 + 0x1c0) + 0x40);
                    lVar24 = *(long *)(lVar9 + 0x10);
                    if ((((lVar24 != 0) && (*(long *)(lVar24 + 0x70) != 0)) &&
                        (*(long *)(lVar25 + 0x230) != 0)) &&
                       (lVar11 = *(long *)(*(long *)(lVar25 + 0x230) + 0x48), lVar11 != 0)) {
                      lVar20 = *(long *)(*(long *)(lVar24 + 0x70) + 0x18);
                      lVar22 = *(long *)(lVar11 + 0x18);
                      uVar8 = func_0x00f78aec(/*Atlas.Contexts.FrontendContextPostSingleplayerState.PostSingleplayerTransitionData_TypeInfo*/ uRam0000000003d27688);
                      Atlas_Contexts_FrontendContextPostSingleplayerState_PostSingleplayerTransitionData___ctor
                                (uVar8,lVar24,lVar20,lVar19,lVar22,0);
                      plVar12 = (long *)0x3d194f0;
                      goto code_r0x0159a070;
                    }
                  }
                }
                break;
              default:
LAB_0159a220:
                lVar11 = *(long *)(lVar25 + 0x70);
                unaff_x24 = lVar22;
                if (lVar11 != 0) {
code_r0x0163d6f8:
                  uVar8 = /*STR('FrontEndContext')*/ uRam0000000003d6d050;
                  cVar2 = *(char *)(lVar11 + 0x50);
                  if (cVar2 == '\0') {
                    *(undefined1 *)(lVar11 + 0x50) = 1;
                    *(undefined8 *)(lVar11 + 0x40) = uVar8;
                    *(long *)(lVar11 + 0x48) = lVar9;
                  }
                  return (ulong)(cVar2 == '\0');
                }
              }
            }
          }
        }
      }
    }
  }
  plVar12 = (long *)func_0x00f78af4();
  *(long *)((long)puVar4 + -0xe0) = lVar19;
  *(long *)((long)puVar4 + -0xd8) = lVar24;
  *(long *)((long)puVar4 + -0xd0) = lVar9;
  *(long *)((long)puVar4 + -200) = lVar25;
  *(undefined1 **)((long)puVar4 + -0xc0) = (undefined1 *)((long)puVar4 + -0x10);
  *(code **)((long)puVar4 + -0xb8) = Atlas_Contexts_GameContextBase__InitPickupLimitsDefinition;
  lVar9 = 0x3eb5000;
  if ((bRam0000000003eb51a5 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572e8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24068);
    func_0x00f78a20(0x3d71248);
    func_0x00f78a20(0x3d71240);
    bRam0000000003eb51a5 = 1;
  }
  if (plVar12[0x38] != 0) {
    uVar7 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(plVar12[0x38] + 0x60,0);
    if ((uVar7 & 1) == 0) {
      lVar9 = plVar12[0x42];
    }
    else {
      if (((plVar12[0x17] == 0) || (plVar12[0x38] == 0)) ||
         (lVar11 = *(long *)(plVar12[0x17] + 0x10), lVar11 == 0)) goto LAB_0159a554;
      lVar9 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar11,*(undefined8 *)(plVar12[0x38] + 0x60),uRam0000000003d572e8);
      plVar12[0x42] = lVar9;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar9,0,0);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    plVar21 = (long *)0x3d71240;
    if ((*(byte *)(/*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068 + 300) <= *(byte *)(*plVar12 + 300)) &&
       (plVar21 = (long *)0x3d71248,
       *(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068 + 300) * 8 + -8)
       != /*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068)) {
      plVar21 = (long *)0x3d71240;
    }
    if (plVar12[0x17] != 0) {
      lVar24 = *plVar21;
      lVar11 = *(long *)(plVar12[0x17] + 0x10);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar24,0);
      lVar9 = 0;
      if (lVar11 != 0) {
        uVar7 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar11,uVar8,uRam0000000003d572e8);
        plVar12[0x42] = uVar7;
        return uVar7;
      }
    }
  }
LAB_0159a554:
  fVar30 = (float)func_0x00f78af4();
  *(undefined8 *)((long)puVar4 + -0x110) = unaff_d9;
  *(undefined8 *)((long)puVar4 + -0x108) = unaff_d8;
  *(long *)((long)puVar4 + -0x100) = lVar9;
  *(long **)((long)puVar4 + -0xf8) = plVar12;
  *(undefined1 **)((long)puVar4 + -0xf0) = (undefined1 *)((long)puVar4 + -0xc0);
  *(code **)((long)puVar4 + -0xe8) = Atlas_Contexts_GameContextBase__UpdateLoadingProgress;
  if ((bRam0000000003eb51a6 & 1) == 0) {
    func_0x00f78a20(0x3d23050);
    bRam0000000003eb51a6 = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)((long)puVar4 + -0x120) = *(undefined8 *)((long)puVar4 + -0x110);
  *(undefined8 *)((long)puVar4 + -0x118) = *(undefined8 *)((long)puVar4 + -0x108);
  *(long *)((long)puVar4 + -0x110) = lVar19;
  *(long *)((long)puVar4 + -0x108) = lVar24;
  *(undefined8 *)((long)puVar4 + -0x100) = *(undefined8 *)((long)puVar4 + -0x100);
  *(undefined8 *)((long)puVar4 + -0xf8) = *(undefined8 *)((long)puVar4 + -0xf8);
  *(undefined8 *)((long)puVar4 + -0xf0) = *(undefined8 *)((long)puVar4 + -0xf0);
  *(undefined8 *)((long)puVar4 + -0xe8) = *(undefined8 *)((long)puVar4 + -0xe8);
  if ((bRam0000000003eb494d & 1) == 0) {
    func_0x00f78a20(0x3d23050,0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb494d = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = *(undefined8 *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x38);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar8,0,0);
  if ((uVar7 & 1) != 0) {
    return uVar7;
  }
  uVar29 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((fVar30 * _UNK_033f83e8 + _UNK_033f83ec) * _UNK_033f83f0 + _UNK_033f83f4,
                           0);
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar19 = *(long *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x38);
  if (lVar19 == 0) {
    func_0x00f78af4();
    *(undefined8 *)((long)puVar4 + -0x140) = uVar8;
    *(undefined8 *)((long)puVar4 + -0x138) = 1;
    *(undefined1 **)((long)puVar4 + -0x130) = (undefined1 *)((long)puVar4 + -0xf0);
    *(undefined **)((long)puVar4 + -0x128) = &Atlas_UI_LoadingBehaviour__HasFinishedLoading;
    if ((bRam0000000003eb494b & 1) == 0) {
      func_0x00f78a20(0x3d2bf00);
      func_0x00f78a20(0x3d23050);
      bRam0000000003eb494b = 1;
    }
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar19 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
    if (*(char *)(lVar19 + 0x10) == '\0') {
      return 0;
    }
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar19 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
    }
    lVar9 = lRam0000000003d2bf00;
    *(undefined8 *)((long)puVar4 + -0x150) = 0x3d23990;
    *(undefined8 *)((long)puVar4 + -0x148) = 0x3d23050;
    *(undefined8 *)((long)puVar4 + -0x140) = *(undefined8 *)((long)puVar4 + -0x140);
    *(undefined8 *)((long)puVar4 + -0x138) = *(undefined8 *)((long)puVar4 + -0x138);
    *(undefined8 *)((long)puVar4 + -0x130) = *(undefined8 *)((long)puVar4 + -0x130);
    *(undefined8 *)((long)puVar4 + -0x128) = *(undefined8 *)((long)puVar4 + -0x128);
    lVar11 = *(long *)(lRam0000000003d2bf00 + 0x18);
    if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar11);
    }
    lVar24 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x58);
    *(long *)((long)puVar4 + -0x1a0) = unaff_x24;
    *(long *)((long)puVar4 + -0x198) = unaff_x23;
    *(undefined8 *)((long)puVar4 + -400) = 0x3d23990;
    *(long *)((long)puVar4 + -0x188) = lVar11;
    *(long **)((long)puVar4 + -0x180) = (long *)(lVar19 + 0x18);
    *(long *)((long)puVar4 + -0x178) = lVar9;
    *(undefined1 **)((long)puVar4 + -0x170) = (undefined1 *)((long)puVar4 + -0x130);
    *(undefined **)((long)puVar4 + -0x168) = &UNK_01b570c0;
    lVar9 = *(long *)(lVar19 + 0x18);
    if (lVar9 == 0) {
      uVar7 = 0;
    }
    else {
      lVar25 = *(long *)(lVar24 + 0x18);
      uVar3 = *(ushort *)(lVar25 + 0x132);
      lVar11 = lVar25;
      if ((uVar3 & 1) == 0) {
        func_0x00fac028(lVar25);
        lVar11 = *(long *)(lVar24 + 0x18);
        uVar3 = *(ushort *)(lVar11 + 0x132);
      }
      pcVar27 = *(code **)**(undefined8 **)(lVar25 + 0xc0);
      if ((uVar3 & 1) == 0) {
        func_0x00fac028(lVar11);
      }
      iVar6 = (*pcVar27)(lVar9,**(undefined8 **)(lVar11 + 0xc0));
      uVar7 = (ulong)(iVar6 == *(int *)(lVar19 + 0x20));
    }
    return uVar7;
  }
  uVar8 = *(undefined8 *)((long)puVar4 + -0x100);
  uVar31 = *(undefined8 *)((long)puVar4 + -0xf8);
  uVar10 = *(undefined8 *)((long)puVar4 + -0x110);
  uVar32 = *(undefined8 *)((long)puVar4 + -0x108);
  uVar35 = *(undefined8 *)((long)puVar4 + -0x120);
  uVar34 = *(undefined8 *)((long)puVar4 + -0x118);
  *(undefined8 *)((long)puVar4 + -0xf0) = *(undefined8 *)((long)puVar4 + -0xf0);
  *(undefined8 *)((long)puVar4 + -0xe8) = *(undefined8 *)((long)puVar4 + -0xe8);
  uVar7 = *(ulong *)(lVar19 + 0x20);
  if (uVar7 == 0) {
    auVar36 = func_0x00f78af4();
    *(undefined1 **)((long)puVar4 + -0x100) = (undefined1 *)((long)puVar4 + -0xf0);
    *(undefined **)((long)puVar4 + -0xf8) = &Atlas_UI_LoadingBehaviour__set_BuildInfo;
    plVar12 = *(long **)(auVar36._0_8_ + 0x28);
    if (plVar12 == (long *)0x0) {
      lVar19 = func_0x00f78af4();
      return *(ulong *)(lVar19 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x01486f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(*plVar12 + 0x558))(plVar12,auVar36._8_8_,*(undefined8 *)(*plVar12 + 0x560))
    ;
    return uVar7;
  }
  *(undefined8 *)((long)puVar4 + -0xf0) = *(undefined8 *)((long)puVar4 + -0xf0);
  *(undefined8 *)((long)puVar4 + -0xe8) = *(undefined8 *)((long)puVar4 + -0xe8);
  *(undefined1 *)(uVar7 + 0x90) = 1;
  *(undefined4 *)(uVar7 + 0x94) = uVar29;
  *(undefined8 *)(uVar7 + 0x98) = 0;
  if (*(char *)(uVar7 + 0x3c) == '\0') {
    return uVar7;
  }
  uVar7 = *(ulong *)(uVar7 + 0xb8);
  if (uVar7 != 0) {
    *(undefined8 *)((long)puVar4 + -0x100) = uVar8;
    *(undefined8 *)((long)puVar4 + -0xf8) = uVar31;
    *(undefined8 *)((long)puVar4 + -0xf0) = *(undefined8 *)((long)puVar4 + -0xf0);
    *(undefined8 *)((long)puVar4 + -0xe8) = *(undefined8 *)((long)puVar4 + -0xe8);
    /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar7,0,0);
    return uVar7;
  }
  lVar19 = func_0x00f78af4(0,0,0);
  *(undefined8 *)((long)puVar4 + -0x130) = uVar35;
  *(undefined8 *)((long)puVar4 + -0x128) = uVar34;
  *(undefined8 *)((long)puVar4 + -0x120) = uVar10;
  *(undefined8 *)((long)puVar4 + -0x118) = uVar32;
  *(undefined8 *)((long)puVar4 + -0x110) = uVar8;
  *(undefined8 *)((long)puVar4 + -0x108) = uVar31;
  *(undefined1 **)((long)puVar4 + -0x100) = (undefined1 *)((long)puVar4 + -0xf0);
  *(undefined **)((long)puVar4 + -0xf8) = &Atlas_UI_SlantFillBar__AddThresholdEvent;
  if ((bRam0000000003eb4cce & 1) == 0) {
    func_0x00f78a20(0x3d3d9e8);
    func_0x00f78a20(0x3d3d9e0);
    func_0x00f78a20(0x3d1e310);
    bRam0000000003eb4cce = 1;
  }
  uVar7 = *(ulong *)(lVar19 + 0xc0);
  if (uVar7 == 0) {
    uVar7 = func_0x00f78aec(/*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>_TypeInfo*/ uRam0000000003d1e310);
    /*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>$$.ctor*/ func_0x0259c210(uVar7,uRam0000000003d3d9e0);
    *(ulong *)(lVar19 + 0xc0) = uVar7;
    if (uVar7 == 0) {
      lVar9 = func_0x00f78af4();
      *(long *)((long)puVar4 + -0x150) = lVar19;
      *(undefined8 **)((long)puVar4 + -0x148) = extraout_x1;
      *(undefined1 **)((long)puVar4 + -0x140) = (undefined1 *)((long)puVar4 + -0x100);
      *(undefined **)((long)puVar4 + -0x138) = &Atlas_UI_SlantFillBar__ClearThresholdEvents;
      if ((bRam0000000003eb4ccf & 1) == 0) {
        func_0x00f78a20(0x3d3d9f0);
        bRam0000000003eb4ccf = 1;
      }
      uVar7 = *(ulong *)(lVar9 + 0xc0);
      if (uVar7 == 0) {
        return 0;
      }
      *(undefined8 *)((long)puVar4 + -0x150) = *(undefined8 *)((long)puVar4 + -0x150);
      *(undefined8 *)((long)puVar4 + -0x148) = *(undefined8 *)((long)puVar4 + -0x148);
      *(undefined8 *)((long)puVar4 + -0x140) = *(undefined8 *)((long)puVar4 + -0x140);
      *(undefined8 *)((long)puVar4 + -0x138) = *(undefined8 *)((long)puVar4 + -0x138);
      uVar15 = uVar7;
      if (0 < *(int *)(uVar7 + 0x18)) {
        uVar15 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar7 + 0x10),0,*(int *)(uVar7 + 0x18),0);
        *(undefined4 *)(uVar7 + 0x18) = 0;
      }
      *(int *)(uVar7 + 0x1c) = *(int *)(uVar7 + 0x1c) + 1;
      return uVar15;
    }
  }
  uVar16 = (ulong)extraout_s0;
  puVar14 = *(undefined8 **)((long)puVar4 + -0x110);
  uVar15 = *(ulong *)((long)puVar4 + -0x108);
  uVar8 = *(undefined8 *)((long)puVar4 + -0x120);
  uVar1 = *(ulong *)((long)puVar4 + -0x118);
  *(undefined8 *)((long)puVar4 + -0x120) = uVar8;
  *(ulong *)((long)puVar4 + -0x118) = uVar1;
  *(undefined8 **)((long)puVar4 + -0x110) = puVar14;
  *(ulong *)((long)puVar4 + -0x108) = uVar15;
  *(undefined8 *)((long)puVar4 + -0x100) = *(undefined8 *)((long)puVar4 + -0x100);
  *(undefined8 *)((long)puVar4 + -0xf8) = *(undefined8 *)((long)puVar4 + -0xf8);
  lVar19 = *(long *)(uVar7 + 0x10);
  puVar17 = extraout_x1;
  if (lVar19 == 0) {
code_r0x0259cf3c:
    uVar16 = uVar1;
    uVar7 = uVar15;
    uVar13 = func_0x00f78af4();
    lVar19 = extraout_x9;
    uVar18 = extraout_w8;
code_r0x0259cf40:
    *(uint *)(uVar7 + 0x18) = uVar18 + 1;
  }
  else {
    uVar18 = *(uint *)(uVar7 + 0x18);
    uVar13 = uVar7;
    puVar14 = extraout_x1;
    if (uVar18 != *(uint *)(lVar19 + 0x18)) goto code_r0x0259cf40;
    puVar17 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3d9e8 + 0x18) + 0xc0) + 0x60);
    uVar13 = (*(code *)*puVar17)(uVar7,uVar18 + 1);
    lVar19 = *(long *)(uVar7 + 0x10);
    uVar18 = *(uint *)(uVar7 + 0x18);
    *(uint *)(uVar7 + 0x18) = uVar18 + 1;
    uVar15 = uVar7;
    uVar1 = uVar16;
    if (lVar19 == 0) goto code_r0x0259cf3c;
  }
  if (uVar18 < *(uint *)(lVar19 + 0x18)) {
    lVar19 = lVar19 + (long)(int)uVar18 * 0x10;
    *(ulong *)(lVar19 + 0x20) = uVar16;
    *(undefined8 **)(lVar19 + 0x28) = puVar14;
    *(int *)(uVar7 + 0x1c) = *(int *)(uVar7 + 0x1c) + 1;
    return uVar13;
  }
  uVar10 = func_0x00f78b24();
  auVar36 = func_0x00f78ac0(uVar10,0);
  plVar12 = auVar36._8_8_;
  lVar19 = auVar36._0_8_;
  *(long *)((long)puVar4 + -0x160) = unaff_x24;
  *(long *)((long)puVar4 + -0x158) = unaff_x23;
  *(undefined8 *)((long)puVar4 + -0x150) = uVar8;
  *(ulong *)((long)puVar4 + -0x148) = uVar16;
  *(undefined8 **)((long)puVar4 + -0x140) = puVar14;
  *(ulong *)((long)puVar4 + -0x138) = uVar7;
  *(undefined1 **)((long)puVar4 + -0x130) = (undefined1 *)((long)puVar4 + -0x100);
  *(undefined **)((long)puVar4 + -0x128) =
       &System_Collections_Generic_List_SlantFillBar_ThresholdEvent___System_Collections_IList_Add;
  (*(code *)**(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 0x48))(plVar12,0x14);
  if (lVar19 != 0) {
    pcVar27 = (code *)**(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 0x28);
    lVar9 = *(long *)(*(long *)(puVar17[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar9);
    }
    if (plVar12 != (long *)0x0) {
      if (*(long *)(*plVar12 + 0x40) == *(long *)(lVar9 + 0x40)) {
        puVar14 = (undefined8 *)func_0x00f78ae4(plVar12);
        (*pcVar27)(lVar19,*puVar14,puVar14[1],*(undefined8 *)(*(long *)(puVar17[3] + 0xc0) + 0x28));
        iVar6 = (*(code *)**(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 0x68))(lVar19);
        return (ulong)(iVar6 - 1);
      }
      func_0x00f78e5c(plVar12,lVar9);
      goto code_r0x0259d128;
    }
  }
  func_0x00f78af4();
code_r0x0259d128:
                    /* WARNING: Does not return */
  pcVar27 = (code *)SoftwareBreakpoint(1,0x259d12c);
  (*pcVar27)();
}



// ============================================================
// RVA: 0x159aaf0 | Atlas.Gameplay.Player.GameContextPlayerManager.GetLocalHumanPlayer
// ============================================================

long Atlas_Gameplay_Player_GameContextPlayerManager__GetLocalHumanPlayer(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000003eb520a & 1) == 0) {
    func_0x00f78a20(0x3d324e8);
    func_0x00f78a20(0x3d324f0);
    func_0x00f78a20(0x3d324f8);
    func_0x00f78a20(0x3d3a670);
    bRam0000000003eb520a = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  lVar4 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_48,*(long *)(param_1 + 0x38),uRam0000000003d3a670);
    do {
      uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_48,uRam0000000003d324f0);
      if ((uVar2 & 1) == 0) {
        lVar4 = 0;
        iVar3 = 0x45;
        goto LAB_0159abb8;
      }
      if (lStack_38 == 0) {
        func_0x00f78af4();
code_r0x0159abfc:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x159ac00);
        (*pcVar1)();
      }
      if (*(long *)(lStack_38 + 0x10) == 0) {
        func_0x00f78af4();
        goto code_r0x0159abfc;
      }
    } while (*(int *)(*(long *)(lStack_38 + 0x10) + 0x50) != 0);
    iVar3 = 0x47;
    lVar4 = lStack_38;
LAB_0159abb8:
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d324e8);
    if (iVar3 != 0x47) {
      lVar4 = 0;
    }
  }
  return lVar4;
}



// ============================================================
// RVA: 0x159c8e8 | Atlas.Gameplay.Player.GameContextPlayerManager..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_Player_GameContextPlayerManager___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb520d & 1) == 0) {
    func_0x00f78a20(0x3d35b00);
    func_0x00f78a20(0x3d1cd80);
    func_0x00f78a20(0x3d5b928);
    bRam0000000003eb520d = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Func<PlayerRankingPair, PlayerRankingPair, bool>_TypeInfo*/ uRam0000000003d1cd80);
  /*System.Func<PlayerRankingPair, PlayerRankingPair, bool>$$.ctor*/ func_0x02185b00(uVar1,0,uRam0000000003d5b928,uRam0000000003d35b00);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



// ============================================================
// RVA: 0x159c98c | Atlas.Gameplay.Player.GameContextPlayerManager.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */

void Atlas_Gameplay_Player_GameContextPlayerManager__Init
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined4 param_4,long param_5,undefined8 param_6,undefined8 param_7,
               undefined8 param_8,long param_9,long param_10)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined *puVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  ulong uStack_3f8;
  long *plStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  long lStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  long lStack_398;
  long *plStack_390;
  undefined8 uStack_388;
  undefined8 ***pppuStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 ***pppuStack_350;
  undefined *puStack_348;
  undefined8 uStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 ***pppuStack_320;
  undefined *puStack_318;
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 ***pppuStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 ***pppuStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined8 ***pppuStack_290;
  undefined *puStack_288;
  long lStack_280;
  undefined8 uStack_278;
  long lStack_270;
  long lStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 ***pppuStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 ***pppuStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 ***pppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined1 ***pppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined1 **ppuStack_180;
  undefined *puStack_178;
  long lStack_170;
  long lStack_168;
  long *plStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  
  uStack_138 = param_8;
  if ((bRam0000000003eb5203 & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d2a1c8);
    func_0x00f78a20(0x3d1b4e0);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d43360);
    func_0x00f78a20(0x3d55088);
    func_0x00f78a20(0x3d55090);
    func_0x00f78a20(0x3d57230);
    func_0x00f78a20(0x3d57238);
    func_0x00f78a20(0x3d57240);
    func_0x00f78a20(0x3d1f010);
    func_0x00f78a20(0x3d21b38);
    func_0x00f78a20(0x3d57360);
    func_0x00f78a20(0x3d3b528);
    func_0x00f78a20(0x3d3a658);
    func_0x00f78a20(0x3d3ae30);
    func_0x00f78a20(0x3d3ae38);
    func_0x00f78a20(0x3d1d988);
    func_0x00f78a20(0x3d1f280);
    func_0x00f78a20(0x3d3f438);
    func_0x00f78a20(0x3d1e5a8);
    func_0x00f78a20(0x3d62ee0);
    func_0x00f78a20(0x3d27748);
    bRam0000000003eb5203 = 1;
  }
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  lVar4 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerManager.<>c__DisplayClass64_0_TypeInfo*/ uRam0000000003d27748);
  /*Atlas.Gameplay.Player.GameContextPlayerManager.<>c__DisplayClass64_0$$.ctor*/ func_0x01554988(lVar4,0);
  if (lVar4 == 0) {
LAB_0159cf9c:
    do {
      do {
        func_0x00f78af4();
LAB_0159cfa0:
        /*Atlas.Gameplay.Player.GameContextPlayerManager$$SortPlayers*/ func_0x015a634c(param_5);
        lVar4 = *(long *)(param_5 + 0x28);
      } while (lVar4 == 0);
      uVar21 = func_0x00f78aec(/*System.Collections.Generic.List<GameContextPlayer>_TypeInfo*/ uRam0000000003d1d988);
      /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar21,*(undefined4 *)(lVar4 + 0x18),uRam0000000003d3a658);
      *(undefined8 *)(param_5 + 0x40) = uVar21;
      lVar4 = *(long *)(param_5 + 0x28);
    } while (lVar4 == 0);
    uVar21 = func_0x00f78aec(/*System.Collections.Generic.List<GameContextPlayer>_TypeInfo*/ uRam0000000003d1d988);
    /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar21,*(undefined4 *)(lVar4 + 0x18),uRam0000000003d3a658);
    *(undefined8 *)(param_5 + 0x38) = uVar21;
    /*Atlas.Gameplay.Player.GameContextPlayerManager$$UpdatePlayerTypeArrays*/ func_0x015a6494(param_5);
    return;
  }
  *(undefined8 *)(lVar4 + 0x10) = param_6;
  *(undefined8 *)(param_5 + 0x10) = param_7;
  *(long *)(param_5 + 0x18) = param_9;
  *(long *)(param_5 + 0x20) = param_10;
  if (((param_10 == 0) || (*(long *)(param_10 + 0x20) == 0)) ||
     (plVar15 = *(long **)(*(long *)(param_10 + 0x20) + 0x10), plVar15 == (long *)0x0))
  goto LAB_0159cf9c;
  uVar21 = 0x3d1b4e8;
  lVar22 = 0x3d57000;
  lVar17 = plVar15[3];
  lVar5 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
  /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(lVar5,param_5,uRam0000000003d57238,uRam0000000003d2a1d8);
  plVar6 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar17,lVar5,0);
  if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
    plVar15[3] = (long)plVar6;
    if ((*(long *)(param_5 + 0x20) == 0) ||
       ((lVar5 = *(long *)(*(long *)(param_5 + 0x20) + 0x20), lVar5 == 0 ||
        (plVar15 = *(long **)(lVar5 + 0x10), plVar15 == (long *)0x0)))) goto LAB_0159cf9c;
    uVar21 = 0x3d1b3b0;
    lVar22 = 0x3d57000;
    lVar17 = plVar15[0xe];
    lVar5 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar5,param_5,uRam0000000003d57240,uRam0000000003d29f28);
    plVar6 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar17,lVar5,0);
    if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
      plVar15[0xe] = (long)plVar6;
      if (((*(long *)(param_5 + 0x20) == 0) ||
          (lVar5 = *(long *)(*(long *)(param_5 + 0x20) + 0x20), lVar5 == 0)) ||
         (plVar15 = *(long **)(lVar5 + 0x10), plVar15 == (long *)0x0)) goto LAB_0159cf9c;
      uVar21 = 0x3d1b4e0;
      lVar22 = 0x3d57000;
      lVar17 = plVar15[5];
      lVar5 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar5,param_5,uRam0000000003d57230,uRam0000000003d2a1c8);
      plVar6 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar17,lVar5,0);
      if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) {
        plVar15[5] = (long)plVar6;
        if (*(long *)(lVar4 + 0x10) != 0) {
          uVar21 = func_0x00f78a34(/*Atlas.Gameplay.Player.GameContextPlayer[]_TypeInfo*/ uRam0000000003d1f010,
                                   *(undefined4 *)(*(long *)(lVar4 + 0x10) + 0x18));
          *(undefined8 *)(param_5 + 0x28) = uVar21;
          if (*(long *)(lVar4 + 0x10) != 0) {
            uVar21 = func_0x00f78a34(/*Atlas.Gameplay.Player.PlayerRankingPair[]_TypeInfo*/ uRam0000000003d1f280,
                                     *(undefined4 *)(*(long *)(lVar4 + 0x10) + 0x18));
            *(undefined8 *)(param_5 + 0x30) = uVar21;
            if ((param_9 != 0) && (*(long *)(param_9 + 0x58) != 0)) {
              uVar21 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*(long *)(param_9 + 0x58),uRam0000000003d55088);
              *(undefined8 *)(param_5 + 0x58) = uVar21;
              if ((*(long *)(param_9 + 0x58) != 0) &&
                 ((lVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*(long *)(param_9 + 0x58),uRam0000000003d55090),
                  lVar5 != 0 && (*(long *)(lVar5 + 0x10) != 0)))) {
                param_9 = /*Core.Definitions.GameDefinitions$$GetFirstDefinition<object>*/ func_0x0185c7fc(*(long *)(lVar5 + 0x10),uRam0000000003d57360);
                if ((*(long *)(param_5 + 0x20) != 0) &&
                   (lVar5 = *(long *)(*(long *)(param_5 + 0x20) + 0x20), lVar5 != 0)) {
                  lVar17 = *(long *)(lVar5 + 400);
                  *(undefined4 *)(lVar4 + 0x18) = 0;
                  lVar5 = *(long *)(lVar4 + 0x10);
                  if (lVar5 != 0) {
                    uVar19 = 0;
                    uVar21 = 0x28;
                    while( true ) {
                      if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar19) goto LAB_0159cfa0;
                      if (*(uint *)(lVar5 + 0x18) <= uVar19) {
                        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      }
                      lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + (long)(int)uVar19 * 8 + 0x20);
                      if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x28), lVar5 == 0)) break;
                      uStack_c8 = *(undefined8 *)(lVar5 + 200);
                      uStack_d0 = *(undefined8 *)(lVar5 + 0xc0);
                      uStack_b8 = *(undefined8 *)(lVar5 + 0xd8);
                      uStack_c0 = *(undefined8 *)(lVar5 + 0xd0);
                      uStack_a8 = *(undefined8 *)(lVar5 + 0xe8);
                      uStack_b0 = *(undefined8 *)(lVar5 + 0xe0);
                      uStack_98 = *(undefined8 *)(lVar5 + 0xf8);
                      uVar8 = *(undefined8 *)(lVar5 + 0xf0);
                      lVar5 = *(long *)(lVar4 + 0x20);
                      uStack_a0 = uVar8;
                      if (lVar5 == 0) {
                        lVar5 = func_0x00f78aec(/*System.Predicate<NetworkPlayer>_TypeInfo*/ uRam0000000003d1e5a8);
                        /*System.Predicate<NetworkPlayer>$$.ctor*/ func_0x02708ba0(lVar5,lVar4,uRam0000000003d62ee0,uRam0000000003d3f438);
                        *(long *)(lVar4 + 0x20) = lVar5;
                      }
                      uVar25 = (undefined4)uVar8;
                      if ((lVar17 == 0) ||
                         (iVar3 = /*System.Collections.Generic.List<NetworkPlayer>$$FindIndex*/ func_0x0241436c(lVar17,lVar5,uRam0000000003d3b528), param_9 == 0))
                      break;
                      iVar1 = 0;
                      if (iVar3 != -1) {
                        iVar1 = iVar3;
                      }
                      uVar24 = /*Atlas.Definitions.MetagameDefinition$$PlayerColor*/ func_0x01494880(param_9,iVar1,0);
                      lVar5 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayer_TypeInfo*/ uRam0000000003d21b38);
                      Atlas_Gameplay_Player_GameContextPlayer___ctor();
                      lVar22 = *(long *)(lVar4 + 0x10);
                      if (lVar22 == 0) break;
                      uVar19 = *(uint *)(lVar4 + 0x18);
                      if (*(uint *)(lVar22 + 0x18) <= uVar19) {
                        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      }
                      if (lVar5 == 0) break;
                      uStack_128 = uStack_c8;
                      uStack_130 = uStack_d0;
                      uStack_118 = uStack_b8;
                      uStack_120 = uStack_c0;
                      uStack_108 = uStack_a8;
                      uStack_110 = uStack_b0;
                      uStack_f8 = uStack_98;
                      uStack_100 = uStack_a0;
                      Atlas_Gameplay_Player_GameContextPlayer__Init
                                (uVar24,uVar25,param_3,param_4,lVar5,
                                 *(undefined8 *)
                                  (*(long *)(lVar22 + 0x10) + (long)(int)uVar19 * 8 + 0x20),
                                 &uStack_130,uStack_138,param_5,*(undefined8 *)(param_5 + 0x20));
                      plVar15 = *(long **)(param_5 + 0x28);
                      if (plVar15 == (long *)0x0) break;
                      uVar19 = *(uint *)(lVar4 + 0x18);
                      lVar22 = (long)(int)uVar19;
                      lVar7 = func_0x00f78adc(lVar5,*(undefined8 *)(*plVar15 + 0x40));
                      if (lVar7 == 0) {
                        uVar8 = func_0x00f78b14();
code_r0x0159d03c:
                        func_0x00f78ac0(uVar8,0);
                        goto LAB_0159d044;
                      }
                      if (*(uint *)(plVar15 + 3) <= uVar19) {
LAB_0159d030:
                        uVar8 = func_0x00f78b24();
                        goto code_r0x0159d03c;
                      }
                      plVar15[lVar22 + 4] = lVar5;
                      plVar15 = *(long **)(param_5 + 0x30);
                      if (plVar15 == (long *)0x0) break;
                      uVar19 = *(uint *)(lVar4 + 0x18);
                      lVar22 = (long)(int)uVar19;
                      if (*(uint *)(plVar15 + 3) <= uVar19) goto LAB_0159d030;
                      plVar15[lVar22 * 5 + 4] = lVar5;
                      plVar6 = *(long **)(param_5 + 0x18);
                      if (plVar6 == (long *)0x0) break;
                      uVar25 = (**(code **)(*plVar6 + 0x2b8))
                                         (plVar6,lVar5,&uStack_e8,*(undefined8 *)(*plVar6 + 0x2c0));
                      if (*(uint *)(plVar15 + 3) <= uVar19) goto LAB_0159d030;
                      *(undefined4 *)(plVar15 + lVar22 * 5 + 5) = uVar25;
                      lVar7 = *(long *)(param_5 + 0x30);
                      if (lVar7 == 0) break;
                      if (*(uint *)(lVar7 + 0x18) <= *(uint *)(lVar4 + 0x18)) goto LAB_0159d030;
                      lVar7 = lVar7 + (long)(int)*(uint *)(lVar4 + 0x18) * 0x28;
                      *(undefined8 *)(lVar7 + 0x40) = uStack_d8;
                      *(undefined8 *)(lVar7 + 0x38) = uStack_e0;
                      *(undefined8 *)(lVar7 + 0x30) = uStack_e8;
                      if (*(long *)(param_5 + 0x10) == 0) break;
                      /*Core.Actors.ActorManager$$TryAddToGroup<object>*/ func_0x0171edb0(*(long *)(param_5 + 0x10),lVar5,uRam0000000003d43360);
                      uVar19 = *(int *)(lVar4 + 0x18) + 1;
                      *(uint *)(lVar4 + 0x18) = uVar19;
                      lVar5 = *(long *)(lVar4 + 0x10);
                      if (lVar5 == 0) break;
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_0159cf9c;
      }
    }
  }
LAB_0159d044:
  auVar26 = func_0x00f78e5c();
  uVar8 = auVar26._8_8_;
  puStack_148 = &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHitPlayer;
  lStack_170 = param_9;
  lStack_168 = lVar4;
  plStack_160 = plVar15;
  lStack_158 = param_5;
  puStack_150 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb51f9 & 1) == 0) {
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb51f9 = 1;
  }
  plVar15 = (long *)(auVar26._0_8_ + 0x98);
  lVar4 = *plVar15;
  while ((plVar6 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar4,uVar8,0), plVar6 == (long *)0x0 ||
         (*plVar6 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728))) {
    lVar7 = func_0x00ff0f44(plVar15,plVar6,lVar4);
    bVar2 = lVar4 == lVar7;
    lVar4 = lVar7;
    if (bVar2) {
      return;
    }
  }
  auVar26 = func_0x00f78e5c(plVar6);
  uVar20 = auVar26._8_8_;
  uStack_1a0 = 0x3d27728;
  puStack_178 = &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHitShield;
  lStack_198 = lVar4;
  plStack_190 = plVar15;
  uStack_188 = uVar8;
  ppuStack_180 = &puStack_150;
  if ((bRam0000000003eb51fb & 1) == 0) {
    func_0x00f78a20(0x3d27730);
    bRam0000000003eb51fb = 1;
  }
  plVar15 = (long *)(auVar26._0_8_ + 0xa0);
  lVar4 = *plVar15;
  while ((plVar6 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar4,uVar20,0), plVar6 == (long *)0x0 ||
         (*plVar6 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
    lVar7 = func_0x00ff0f44(plVar15,plVar6,lVar4);
    bVar2 = lVar4 == lVar7;
    lVar4 = lVar7;
    if (bVar2) {
      return;
    }
  }
  auVar26 = func_0x00f78e5c(plVar6);
  uVar8 = auVar26._8_8_;
  uStack_1d0 = 0x3d27730;
  puStack_1a8 = &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableUsed;
  lStack_1c8 = lVar4;
  plStack_1c0 = plVar15;
  uStack_1b8 = uVar20;
  pppuStack_1b0 = &ppuStack_180;
  if ((bRam0000000003eb51f3 & 1) == 0) {
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb51f3 = 1;
  }
  plVar15 = (long *)(auVar26._0_8_ + 0x80);
  lVar4 = *plVar15;
  while ((plVar6 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar4,uVar8,0), plVar6 == (long *)0x0 ||
         (*plVar6 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
    lVar7 = func_0x00ff0f44(plVar15,plVar6,lVar4);
    bVar2 = lVar4 == lVar7;
    lVar4 = lVar7;
    if (bVar2) {
      return;
    }
  }
  auVar26 = func_0x00f78e5c(plVar6);
  uVar20 = auVar26._8_8_;
  uStack_200 = 0x3d27718;
  puStack_1d8 = &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHoppedOver;
  lStack_1f8 = lVar4;
  plStack_1f0 = plVar15;
  uStack_1e8 = uVar8;
  pppuStack_1e0 = &pppuStack_1b0;
  if ((bRam0000000003eb51fd & 1) == 0) {
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51fd = 1;
  }
  plVar15 = (long *)(auVar26._0_8_ + 0xa8);
  lVar4 = *plVar15;
  while ((plVar6 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar4,uVar20,0), plVar6 == (long *)0x0 ||
         (*plVar6 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
    lVar7 = func_0x00ff0f44(plVar15,plVar6,lVar4);
    bVar2 = lVar4 == lVar7;
    lVar4 = lVar7;
    if (bVar2) {
      return;
    }
  }
  auVar26 = func_0x00f78e5c(plVar6);
  uVar8 = auVar26._8_8_;
  uStack_230 = 0x3d27738;
  puStack_208 = &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnBeforeRespawn;
  lStack_228 = lVar4;
  plStack_220 = plVar15;
  uStack_218 = uVar20;
  pppuStack_210 = &pppuStack_1e0;
  if ((bRam0000000003eb51f5 & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51f5 = 1;
  }
  plVar15 = (long *)(auVar26._0_8_ + 0x88);
  lVar4 = *plVar15;
  while ((plVar6 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar4,uVar8,0), plVar6 == (long *)0x0 ||
         (*plVar6 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar7 = func_0x00ff0f44(plVar15,plVar6,lVar4);
    bVar2 = lVar4 == lVar7;
    lVar4 = lVar7;
    if (bVar2) {
      return;
    }
  }
  auVar26 = func_0x00f78e5c(plVar6);
  lVar7 = auVar26._0_8_;
  uStack_260 = 0x3d27700;
  pcStack_238 = Atlas_Contexts_GameContextBase__DeInitAtlasPlayers;
  uVar18 = 0x3d27718;
  uVar20 = 0x3d570f0;
  lStack_280 = lVar22;
  uStack_278 = uVar21;
  lStack_270 = lVar5;
  lStack_268 = lVar17;
  lStack_258 = lVar4;
  plStack_250 = plVar15;
  uStack_248 = uVar8;
  pppuStack_240 = &pppuStack_210;
  if ((bRam0000000003eb51b7 & 1) == 0) {
    func_0x00f78a20(0x3d524e0);
    func_0x00f78a20(0x3d524e8);
    func_0x00f78a20(0x3d524f0);
    func_0x00f78a20(0x3d524f8);
    func_0x00f78a20(0x3d570d0);
    func_0x00f78a20(0x3d570f0);
    func_0x00f78a20(0x3d27700);
    func_0x00f78a20(0x3d27718);
    func_0x00f78a20(0x3d27728);
    func_0x00f78a20(0x3d27730);
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51b7 = 1;
  }
  lVar4 = *(long *)(lVar7 + 0x40);
  uVar9 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
  auVar27._8_8_ = uVar9;
  auVar27._0_8_ = lVar4;
  uVar8 = 0;
  Atlas_Gameplay_Player_GameContextPlayerEvents_UsableActionDelegate___ctor
            (uVar9,lVar7,uRam0000000003d570f0,0);
  if (lVar4 == 0) {
    puVar23 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableUsed;
    auVar27 = func_0x00f78af4();
  }
  else {
    uVar20 = 0x3d27000;
    uVar21 = 0x3d52000;
    puVar23 = (undefined *)0x159d470;
  }
  uVar11 = auVar27._8_8_;
  uStack_2b0 = uVar9;
  lStack_2a8 = lVar4;
  pppuStack_290 = &pppuStack_240;
  puStack_288 = puVar23;
  if ((bRam0000000003eb51f4 & 1) == 0) {
    uStack_2a0 = auVar26._8_8_;
    lStack_298 = lVar7;
    func_0x00f78a20(0x3d27718);
    auVar26._8_8_ = uStack_2a0;
    auVar26._0_8_ = lStack_298;
    bRam0000000003eb51f4 = 1;
  }
  plVar15 = (long *)(auVar27._0_8_ + 0x80);
  lVar4 = *plVar15;
  while( true ) {
    uStack_2a0 = auVar26._8_8_;
    lStack_298 = auVar26._0_8_;
    plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,uVar11,0);
    if ((plVar6 != (long *)0x0) && (*plVar6 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718)) break;
    lVar5 = func_0x00ff0f44(plVar15,plVar6,lVar4);
    auVar26._8_8_ = uStack_2a0;
    auVar26._0_8_ = lStack_298;
    bVar2 = lVar4 == lVar5;
    lVar4 = lVar5;
    if (bVar2) {
      return;
    }
  }
  auVar26 = func_0x00f78e5c(plVar6);
  uVar9 = auVar26._8_8_;
  uStack_2e0 = 0x3d27718;
  puStack_2b8 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnBeforeRespawn;
  lStack_2d8 = lVar4;
  plStack_2d0 = plVar15;
  uStack_2c8 = uVar11;
  pppuStack_2c0 = &pppuStack_290;
  if ((bRam0000000003eb51f6 & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51f6 = 1;
  }
  plVar15 = (long *)(auVar26._0_8_ + 0x88);
  lVar4 = *plVar15;
  while ((plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,uVar9,0), plVar6 == (long *)0x0 ||
         (*plVar6 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar5 = func_0x00ff0f44(plVar15,plVar6,lVar4);
    bVar2 = lVar4 == lVar5;
    lVar4 = lVar5;
    if (bVar2) {
      return;
    }
  }
  auVar26 = func_0x00f78e5c(plVar6);
  uVar11 = auVar26._8_8_;
  uStack_310 = 0x3d27700;
  puStack_2e8 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHoppedOver;
  lStack_308 = lVar4;
  plStack_300 = plVar15;
  uStack_2f8 = uVar9;
  pppuStack_2f0 = &pppuStack_2c0;
  if ((bRam0000000003eb51fe & 1) == 0) {
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51fe = 1;
  }
  plVar15 = (long *)(auVar26._0_8_ + 0xa8);
  lVar4 = *plVar15;
  while ((plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,uVar11,0), plVar6 == (long *)0x0 ||
         (*plVar6 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
    lVar5 = func_0x00ff0f44(plVar15,plVar6,lVar4);
    bVar2 = lVar4 == lVar5;
    lVar4 = lVar5;
    if (bVar2) {
      return;
    }
  }
  auVar26 = func_0x00f78e5c(plVar6);
  uVar9 = auVar26._8_8_;
  uStack_340 = 0x3d27738;
  puStack_318 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitShield;
  lStack_338 = lVar4;
  plStack_330 = plVar15;
  uStack_328 = uVar11;
  pppuStack_320 = &pppuStack_2f0;
  if ((bRam0000000003eb51fc & 1) == 0) {
    func_0x00f78a20(0x3d27730);
    bRam0000000003eb51fc = 1;
  }
  plVar15 = (long *)(auVar26._0_8_ + 0xa0);
  lVar4 = *plVar15;
  while ((plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,uVar9,0), plVar6 == (long *)0x0 ||
         (*plVar6 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
    lVar5 = func_0x00ff0f44(plVar15,plVar6,lVar4);
    bVar2 = lVar4 == lVar5;
    lVar4 = lVar5;
    if (bVar2) {
      return;
    }
  }
  auVar26 = func_0x00f78e5c(plVar6);
  uVar11 = auVar26._8_8_;
  uStack_370 = 0x3d27730;
  puStack_348 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitPlayer;
  lStack_368 = lVar4;
  plStack_360 = plVar15;
  uStack_358 = uVar9;
  pppuStack_350 = &pppuStack_320;
  if ((bRam0000000003eb51fa & 1) == 0) {
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb51fa = 1;
  }
  plVar15 = (long *)0x3d27728;
  plVar6 = (long *)(auVar26._0_8_ + 0x98);
  lVar4 = *plVar6;
  while( true ) {
    puVar13 = (undefined8 *)0x0;
    plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,uVar11);
    if ((plVar10 != (long *)0x0) && (*plVar10 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728)) break;
    lVar5 = func_0x00ff0f44(plVar6,plVar10,lVar4);
    bVar2 = lVar4 == lVar5;
    lVar4 = lVar5;
    if (bVar2) {
      return;
    }
  }
  lVar5 = func_0x00f78e5c(plVar10);
  uStack_3a8 = 0x3d27718;
  uStack_3a0 = 0x3d27728;
  puStack_378 = &Atlas_Gameplay_Player_GameContextPlayerManager__DeInit;
  lVar17 = 0x3eb5000;
  lStack_3c0 = lVar22;
  uStack_3b8 = uVar21;
  uStack_3b0 = uVar20;
  lStack_398 = lVar4;
  plStack_390 = plVar6;
  uStack_388 = uVar11;
  pppuStack_380 = &pppuStack_350;
  if ((bRam0000000003eb5204 & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d2a1c8);
    func_0x00f78a20(0x3d1b4e0);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d43378);
    func_0x00f78a20(0x3d57230);
    func_0x00f78a20(0x3d57238);
    func_0x00f78a20(0x3d57240);
    bRam0000000003eb5204 = 1;
  }
  lVar4 = *(long *)(lVar5 + 0x28);
  if (lVar4 == 0) {
code_r0x0159db7c:
    func_0x00f78af4();
    uVar21 = uVar20;
code_r0x0159db80:
    uVar20 = func_0x00f78b24();
    func_0x00f78ac0(uVar20,0);
  }
  else {
    plVar15 = (long *)(lVar5 + 0x10);
    uVar19 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar19) {
      uVar18 = 0;
      uVar20 = 0x3d43378;
      do {
        uVar16 = (uint)uVar18;
        uVar21 = uVar20;
        if (uVar19 <= uVar16) goto code_r0x0159db80;
        if (*plVar15 == 0) goto code_r0x0159db7c;
        lVar17 = *(long *)(lVar4 + (long)(int)uVar16 * 8 + 0x20);
        puVar13 = puRam0000000003d43378;
        /*Core.Actors.ActorManager$$TryRemoveFromGroup<object>*/ func_0x0171ee50(*plVar15,lVar17);
        if (lVar17 == 0) goto code_r0x0159db7c;
        Atlas_Gameplay_Player_GameContextPlayer__DeInit(lVar17);
        uVar18 = (ulong)(uVar16 + 1);
        uVar19 = *(uint *)(lVar4 + 0x18);
      } while ((int)(uVar16 + 1) < (int)uVar19);
    }
    if (((*(long *)(lVar5 + 0x20) == 0) ||
        (lVar22 = *(long *)(*(long *)(lVar5 + 0x20) + 0x20), lVar22 == 0)) ||
       (uVar18 = *(ulong *)(lVar22 + 0x10), uVar18 == 0)) goto code_r0x0159db7c;
    uVar21 = 0x3d1b4e8;
    uVar20 = 0x3d1b4e8;
    lVar17 = *(long *)(uVar18 + 0x18);
    lVar4 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
    uVar8 = uRam0000000003d2a1d8;
    /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(lVar4,lVar5,uRam0000000003d57238,uRam0000000003d2a1d8);
    puVar13 = (undefined8 *)0x0;
    plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar17,lVar4);
    if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
      *(long **)(uVar18 + 0x18) = plVar6;
      if ((*(long *)(lVar5 + 0x20) == 0) ||
         ((lVar22 = *(long *)(*(long *)(lVar5 + 0x20) + 0x20), lVar22 == 0 ||
          (uVar18 = *(ulong *)(lVar22 + 0x10), uVar18 == 0)))) goto code_r0x0159db7c;
      uVar21 = 0x3d1b3b0;
      uVar20 = 0x3d1b3b0;
      lVar17 = *(long *)(uVar18 + 0x70);
      lVar4 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
      uVar8 = uRam0000000003d29f28;
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar4,lVar5,uRam0000000003d57240,uRam0000000003d29f28);
      puVar13 = (undefined8 *)0x0;
      plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar17,lVar4);
      if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
        *(long **)(uVar18 + 0x70) = plVar6;
        if (((*(long *)(lVar5 + 0x20) == 0) ||
            (lVar22 = *(long *)(*(long *)(lVar5 + 0x20) + 0x20), lVar22 == 0)) ||
           (uVar18 = *(ulong *)(lVar22 + 0x10), uVar18 == 0)) goto code_r0x0159db7c;
        uVar21 = 0x3d1b4e0;
        lVar17 = *(long *)(uVar18 + 0x28);
        lVar4 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
        uVar8 = uRam0000000003d2a1c8;
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar4,lVar5,uRam0000000003d57230,uRam0000000003d2a1c8);
        puVar13 = (undefined8 *)0x0;
        plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar17,lVar4);
        if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) {
          *(long **)(uVar18 + 0x28) = plVar6;
          *(undefined1 *)(lVar5 + 0x50) = 0;
          *(undefined8 *)(lVar5 + 0x18) = 0;
          *plVar15 = 0;
          *(undefined8 *)(lVar5 + 0x28) = 0;
          *(undefined8 *)(lVar5 + 0x20) = 0;
          return;
        }
      }
    }
  }
  auVar26 = func_0x00f78e5c();
  puVar12 = auVar26._8_8_;
  plVar6 = auVar26._0_8_;
  pcStack_3c8 = Atlas_Contexts_GameContextBase__HandleUsableHitPlayer;
  puVar14 = puVar13;
  uStack_400 = uVar21;
  uStack_3f8 = uVar18;
  plStack_3f0 = plVar15;
  lStack_3e8 = lVar4;
  lStack_3e0 = lVar17;
  lStack_3d8 = lVar5;
  pppuStack_3d0 = &pppuStack_380;
  if ((bRam0000000003eb51b8 & 1) == 0) {
    func_0x00f78a20(0x3d69658);
    bRam0000000003eb51b8 = 1;
  }
  if (((plVar6[3] != 0) &&
      (puVar14 = puVar13, /*Atlas.Stats.AtlasStats$$OnUsableHitPlayer*/ func_0x0146ecbc(plVar6[3],puVar12,puVar13,uVar8,0),
      puVar13 != (undefined8 *)0x0)) && (lVar4 = puVar13[2], lVar4 != 0)) {
    uStack_418 = *(undefined8 *)(lVar4 + 0x50);
    uStack_420 = *(undefined8 *)(lVar4 + 0x48);
    uStack_408 = *(undefined8 *)(lVar4 + 0x60);
    uStack_410 = *(undefined8 *)(lVar4 + 0x58);
    iVar3 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&uStack_420,0);
    if ((iVar3 == 0) || (puVar13 == puVar12)) {
      return;
    }
    iVar3 = (**(code **)(*plVar6 + 0x2a8))(plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
    if ((plVar6[0x18] != 0) && (lVar4 = *(long *)(plVar6[0x18] + 0x20), lVar4 != 0)) {
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_438,lVar4,0);
      *(int *)(puVar13 + 0xf) = *(int *)(puVar13 + 0xf) + iVar3;
      puVar13[0x11] = uStack_430;
      puVar13[0x10] = uStack_438;
      puVar13[0x12] = uStack_428;
      if (puVar13[2] != 0) {
        if (*(int *)(puVar13[2] + 0x50) == 0) {
          uVar21 = (**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210));
          puVar14 = (undefined8 *)0x0;
          iVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar21,/*STR('BattleGameContext')*/ uRam0000000003d69658);
          if (iVar3 != 0) {
            if (plVar6[3] == 0) goto LAB_0159dcf8;
            /*Atlas.Stats.AtlasStats$$RecordBattlePoints*/ func_0x0146e660(plVar6[3],*(undefined4 *)(puVar13 + 0xf),0);
          }
        }
        if (plVar6[0x46] == 0) {
          return;
        }
        /*Atlas.Arcade.ArcadeEvent$$UsableHitPlayer*/ func_0x0144def8(plVar6[0x46],puVar12,puVar13,uVar8,0);
        return;
      }
    }
  }
LAB_0159dcf8:
  auVar28 = func_0x00f78af4();
  lVar4 = auVar28._0_8_;
  uVar20 = puVar14[1];
  uVar8 = *puVar14;
  uVar21 = puVar14[2];
  *(int *)(lVar4 + 0x78) = *(int *)(lVar4 + 0x78) + auVar28._8_4_;
  *(undefined8 *)(lVar4 + 0x88) = uVar20;
  *(undefined8 *)(lVar4 + 0x80) = uVar8;
  *(undefined8 *)(lVar4 + 0x90) = uVar21;
  return;
}



// ============================================================
// RVA: 0x159d048 | Atlas.Gameplay.Player.GameContextPlayerManager.add_OnUsableHitPlayer
// ============================================================

/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */

void Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHitPlayer
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  ulong uStack_2b8;
  long *plStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 ***pppuStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 ***pppuStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 ***pppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 ***pppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 ***pppuStack_150;
  undefined *puStack_148;
  undefined8 ***pppuStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 ***pppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb51f9 & 1) == 0) {
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb51f9 = 1;
  }
  plVar15 = (long *)(param_1 + 0x98);
  lVar7 = *plVar15;
  while ((plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,param_2,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728))) {
    lVar4 = func_0x00ff0f44(plVar15,plVar3,lVar7);
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar3);
  uVar19 = auVar21._8_8_;
  uStack_60 = 0x3d27728;
  puStack_38 = &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHitShield;
  lStack_58 = lVar7;
  plStack_50 = plVar15;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb51fb & 1) == 0) {
    func_0x00f78a20(0x3d27730);
    bRam0000000003eb51fb = 1;
  }
  plVar15 = (long *)(auVar21._0_8_ + 0xa0);
  lVar7 = *plVar15;
  while ((plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,uVar19,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
    lVar4 = func_0x00ff0f44(plVar15,plVar3,lVar7);
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar3);
  uVar12 = auVar21._8_8_;
  uStack_90 = 0x3d27730;
  puStack_68 = &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableUsed;
  lStack_88 = lVar7;
  plStack_80 = plVar15;
  uStack_78 = uVar19;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb51f3 & 1) == 0) {
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb51f3 = 1;
  }
  plVar15 = (long *)(auVar21._0_8_ + 0x80);
  lVar7 = *plVar15;
  while ((plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,uVar12,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
    lVar4 = func_0x00ff0f44(plVar15,plVar3,lVar7);
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar3);
  uVar19 = auVar21._8_8_;
  uStack_c0 = 0x3d27718;
  puStack_98 = &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHoppedOver;
  lStack_b8 = lVar7;
  plStack_b0 = plVar15;
  uStack_a8 = uVar12;
  pppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eb51fd & 1) == 0) {
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51fd = 1;
  }
  plVar15 = (long *)(auVar21._0_8_ + 0xa8);
  lVar7 = *plVar15;
  while ((plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,uVar19,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
    lVar4 = func_0x00ff0f44(plVar15,plVar3,lVar7);
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar3);
  uStack_f0 = 0x3d27738;
  puStack_c8 = &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnBeforeRespawn;
  lStack_e8 = lVar7;
  plStack_e0 = plVar15;
  uStack_d8 = uVar19;
  pppuStack_d0 = &pppuStack_a0;
  if ((bRam0000000003eb51f5 & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51f5 = 1;
  }
  plVar15 = (long *)(auVar21._0_8_ + 0x88);
  lVar7 = *plVar15;
  while ((plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,auVar21._8_8_,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar4 = func_0x00ff0f44(plVar15,plVar3,lVar7);
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar3);
  lVar7 = auVar21._0_8_;
  pcStack_f8 = Atlas_Contexts_GameContextBase__DeInitAtlasPlayers;
  uVar18 = 0x3d27718;
  uVar19 = 0x3d570f0;
  pppuStack_100 = &pppuStack_d0;
  if ((bRam0000000003eb51b7 & 1) == 0) {
    func_0x00f78a20(0x3d524e0);
    func_0x00f78a20(0x3d524e8);
    func_0x00f78a20(0x3d524f0);
    func_0x00f78a20(0x3d524f8);
    func_0x00f78a20(0x3d570d0);
    func_0x00f78a20(0x3d570f0);
    func_0x00f78a20(0x3d27700);
    func_0x00f78a20(0x3d27718);
    func_0x00f78a20(0x3d27728);
    func_0x00f78a20(0x3d27730);
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51b7 = 1;
  }
  lVar4 = *(long *)(lVar7 + 0x40);
  uVar5 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
  auVar22._8_8_ = uVar5;
  auVar22._0_8_ = lVar4;
  uVar12 = 0;
  Atlas_Gameplay_Player_GameContextPlayerEvents_UsableActionDelegate___ctor
            (uVar5,lVar7,uRam0000000003d570f0,0);
  if (lVar4 == 0) {
    puVar20 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableUsed;
    auVar22 = func_0x00f78af4();
  }
  else {
    uVar19 = 0x3d27000;
    puVar20 = (undefined *)0x159d470;
  }
  uVar8 = auVar22._8_8_;
  uStack_170 = uVar5;
  lStack_168 = lVar4;
  pppuStack_150 = &pppuStack_100;
  puStack_148 = puVar20;
  if ((bRam0000000003eb51f4 & 1) == 0) {
    uStack_160 = auVar21._8_8_;
    lStack_158 = lVar7;
    func_0x00f78a20(0x3d27718);
    auVar21._8_8_ = uStack_160;
    auVar21._0_8_ = lStack_158;
    bRam0000000003eb51f4 = 1;
  }
  plVar15 = (long *)(auVar22._0_8_ + 0x80);
  lVar7 = *plVar15;
  while( true ) {
    uStack_160 = auVar21._8_8_;
    lStack_158 = auVar21._0_8_;
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,uVar8,0);
    if ((plVar3 != (long *)0x0) && (*plVar3 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718)) break;
    lVar4 = func_0x00ff0f44(plVar15,plVar3,lVar7);
    auVar21._8_8_ = uStack_160;
    auVar21._0_8_ = lStack_158;
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar3);
  uVar5 = auVar21._8_8_;
  uStack_1a0 = 0x3d27718;
  puStack_178 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnBeforeRespawn;
  lStack_198 = lVar7;
  plStack_190 = plVar15;
  uStack_188 = uVar8;
  pppuStack_180 = &pppuStack_150;
  if ((bRam0000000003eb51f6 & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51f6 = 1;
  }
  plVar15 = (long *)(auVar21._0_8_ + 0x88);
  lVar7 = *plVar15;
  while ((plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,uVar5,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar4 = func_0x00ff0f44(plVar15,plVar3,lVar7);
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar3);
  uVar8 = auVar21._8_8_;
  uStack_1d0 = 0x3d27700;
  puStack_1a8 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHoppedOver;
  lStack_1c8 = lVar7;
  plStack_1c0 = plVar15;
  uStack_1b8 = uVar5;
  pppuStack_1b0 = &pppuStack_180;
  if ((bRam0000000003eb51fe & 1) == 0) {
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51fe = 1;
  }
  plVar15 = (long *)(auVar21._0_8_ + 0xa8);
  lVar7 = *plVar15;
  while ((plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,uVar8,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
    lVar4 = func_0x00ff0f44(plVar15,plVar3,lVar7);
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar3);
  uVar5 = auVar21._8_8_;
  uStack_200 = 0x3d27738;
  puStack_1d8 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitShield;
  lStack_1f8 = lVar7;
  plStack_1f0 = plVar15;
  uStack_1e8 = uVar8;
  pppuStack_1e0 = &pppuStack_1b0;
  if ((bRam0000000003eb51fc & 1) == 0) {
    func_0x00f78a20(0x3d27730);
    bRam0000000003eb51fc = 1;
  }
  plVar15 = (long *)(auVar21._0_8_ + 0xa0);
  lVar7 = *plVar15;
  while ((plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,uVar5,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
    lVar4 = func_0x00ff0f44(plVar15,plVar3,lVar7);
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar3);
  uStack_230 = 0x3d27730;
  puStack_208 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitPlayer;
  lStack_228 = lVar7;
  plStack_220 = plVar15;
  uStack_218 = uVar5;
  pppuStack_210 = &pppuStack_1e0;
  if ((bRam0000000003eb51fa & 1) == 0) {
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb51fa = 1;
  }
  plVar15 = (long *)0x3d27728;
  plVar3 = (long *)(auVar21._0_8_ + 0x98);
  lVar7 = *plVar3;
  while( true ) {
    puVar10 = (undefined8 *)0x0;
    plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,auVar21._8_8_);
    if ((plVar6 != (long *)0x0) && (*plVar6 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728)) break;
    lVar4 = func_0x00ff0f44(plVar3,plVar6,lVar7);
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  lVar7 = func_0x00f78e5c(plVar6);
  puStack_238 = &Atlas_Gameplay_Player_GameContextPlayerManager__DeInit;
  lVar4 = 0x3eb5000;
  pppuStack_240 = &pppuStack_210;
  if ((bRam0000000003eb5204 & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d2a1c8);
    func_0x00f78a20(0x3d1b4e0);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d43378);
    func_0x00f78a20(0x3d57230);
    func_0x00f78a20(0x3d57238);
    func_0x00f78a20(0x3d57240);
    bRam0000000003eb5204 = 1;
  }
  lVar16 = *(long *)(lVar7 + 0x28);
  if (lVar16 == 0) {
code_r0x0159db7c:
    func_0x00f78af4();
    uVar5 = uVar19;
code_r0x0159db80:
    uVar19 = func_0x00f78b24();
    func_0x00f78ac0(uVar19,0);
  }
  else {
    plVar15 = (long *)(lVar7 + 0x10);
    uVar13 = *(uint *)(lVar16 + 0x18);
    if (0 < (int)uVar13) {
      uVar18 = 0;
      uVar19 = 0x3d43378;
      do {
        uVar17 = (uint)uVar18;
        uVar5 = uVar19;
        if (uVar13 <= uVar17) goto code_r0x0159db80;
        if (*plVar15 == 0) goto code_r0x0159db7c;
        lVar4 = *(long *)(lVar16 + (long)(int)uVar17 * 8 + 0x20);
        puVar10 = puRam0000000003d43378;
        /*Core.Actors.ActorManager$$TryRemoveFromGroup<object>*/ func_0x0171ee50(*plVar15,lVar4);
        if (lVar4 == 0) goto code_r0x0159db7c;
        Atlas_Gameplay_Player_GameContextPlayer__DeInit(lVar4);
        uVar18 = (ulong)(uVar17 + 1);
        uVar13 = *(uint *)(lVar16 + 0x18);
      } while ((int)(uVar17 + 1) < (int)uVar13);
    }
    if (((*(long *)(lVar7 + 0x20) == 0) ||
        (lVar14 = *(long *)(*(long *)(lVar7 + 0x20) + 0x20), lVar14 == 0)) ||
       (uVar18 = *(ulong *)(lVar14 + 0x10), uVar18 == 0)) goto code_r0x0159db7c;
    uVar5 = 0x3d1b4e8;
    uVar19 = 0x3d1b4e8;
    lVar4 = *(long *)(uVar18 + 0x18);
    lVar16 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
    uVar12 = uRam0000000003d2a1d8;
    /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(lVar16,lVar7,uRam0000000003d57238,uRam0000000003d2a1d8);
    puVar10 = (undefined8 *)0x0;
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,lVar16);
    if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
      *(long **)(uVar18 + 0x18) = plVar3;
      if ((*(long *)(lVar7 + 0x20) == 0) ||
         ((lVar14 = *(long *)(*(long *)(lVar7 + 0x20) + 0x20), lVar14 == 0 ||
          (uVar18 = *(ulong *)(lVar14 + 0x10), uVar18 == 0)))) goto code_r0x0159db7c;
      uVar5 = 0x3d1b3b0;
      uVar19 = 0x3d1b3b0;
      lVar4 = *(long *)(uVar18 + 0x70);
      lVar16 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
      uVar12 = uRam0000000003d29f28;
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar16,lVar7,uRam0000000003d57240,uRam0000000003d29f28);
      puVar10 = (undefined8 *)0x0;
      plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,lVar16);
      if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
        *(long **)(uVar18 + 0x70) = plVar3;
        if (((*(long *)(lVar7 + 0x20) == 0) ||
            (lVar14 = *(long *)(*(long *)(lVar7 + 0x20) + 0x20), lVar14 == 0)) ||
           (uVar18 = *(ulong *)(lVar14 + 0x10), uVar18 == 0)) goto code_r0x0159db7c;
        uVar5 = 0x3d1b4e0;
        lVar4 = *(long *)(uVar18 + 0x28);
        lVar16 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
        uVar12 = uRam0000000003d2a1c8;
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar16,lVar7,uRam0000000003d57230,uRam0000000003d2a1c8);
        puVar10 = (undefined8 *)0x0;
        plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,lVar16);
        if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) {
          *(long **)(uVar18 + 0x28) = plVar3;
          *(undefined1 *)(lVar7 + 0x50) = 0;
          *(undefined8 *)(lVar7 + 0x18) = 0;
          *plVar15 = 0;
          *(undefined8 *)(lVar7 + 0x28) = 0;
          *(undefined8 *)(lVar7 + 0x20) = 0;
          return;
        }
      }
    }
  }
  auVar21 = func_0x00f78e5c();
  puVar9 = auVar21._8_8_;
  plVar3 = auVar21._0_8_;
  pcStack_288 = Atlas_Contexts_GameContextBase__HandleUsableHitPlayer;
  puVar11 = puVar10;
  uStack_2c0 = uVar5;
  uStack_2b8 = uVar18;
  plStack_2b0 = plVar15;
  lStack_2a8 = lVar16;
  lStack_2a0 = lVar4;
  lStack_298 = lVar7;
  pppuStack_290 = &pppuStack_240;
  if ((bRam0000000003eb51b8 & 1) == 0) {
    func_0x00f78a20(0x3d69658);
    bRam0000000003eb51b8 = 1;
  }
  if (((plVar3[3] != 0) &&
      (puVar11 = puVar10, /*Atlas.Stats.AtlasStats$$OnUsableHitPlayer*/ func_0x0146ecbc(plVar3[3],puVar9,puVar10,uVar12,0),
      puVar10 != (undefined8 *)0x0)) && (lVar7 = puVar10[2], lVar7 != 0)) {
    uStack_2d8 = *(undefined8 *)(lVar7 + 0x50);
    uStack_2e0 = *(undefined8 *)(lVar7 + 0x48);
    uStack_2c8 = *(undefined8 *)(lVar7 + 0x60);
    uStack_2d0 = *(undefined8 *)(lVar7 + 0x58);
    iVar2 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&uStack_2e0,0);
    if ((iVar2 == 0) || (puVar10 == puVar9)) {
      return;
    }
    iVar2 = (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
    if ((plVar3[0x18] != 0) && (lVar7 = *(long *)(plVar3[0x18] + 0x20), lVar7 != 0)) {
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_2f8,lVar7,0);
      *(int *)(puVar10 + 0xf) = *(int *)(puVar10 + 0xf) + iVar2;
      puVar10[0x11] = uStack_2f0;
      puVar10[0x10] = uStack_2f8;
      puVar10[0x12] = uStack_2e8;
      if (puVar10[2] != 0) {
        if (*(int *)(puVar10[2] + 0x50) == 0) {
          uVar19 = (**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
          puVar11 = (undefined8 *)0x0;
          iVar2 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar19,/*STR('BattleGameContext')*/ uRam0000000003d69658);
          if (iVar2 != 0) {
            if (plVar3[3] == 0) goto LAB_0159dcf8;
            /*Atlas.Stats.AtlasStats$$RecordBattlePoints*/ func_0x0146e660(plVar3[3],*(undefined4 *)(puVar10 + 0xf),0);
          }
        }
        if (plVar3[0x46] == 0) {
          return;
        }
        /*Atlas.Arcade.ArcadeEvent$$UsableHitPlayer*/ func_0x0144def8(plVar3[0x46],puVar9,puVar10,uVar12,0);
        return;
      }
    }
  }
LAB_0159dcf8:
  auVar23 = func_0x00f78af4();
  lVar7 = auVar23._0_8_;
  uVar5 = puVar11[1];
  uVar12 = *puVar11;
  uVar19 = puVar11[2];
  *(int *)(lVar7 + 0x78) = *(int *)(lVar7 + 0x78) + auVar23._8_4_;
  *(undefined8 *)(lVar7 + 0x88) = uVar5;
  *(undefined8 *)(lVar7 + 0x80) = uVar12;
  *(undefined8 *)(lVar7 + 0x90) = uVar19;
  return;
}



// ============================================================
// RVA: 0x159d0e8 | Atlas.Gameplay.Player.GameContextPlayerManager.add_OnUsableHitShield
// ============================================================

/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */

void Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHitShield
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  ulong uStack_288;
  long *plStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  undefined8 ***pppuStack_260;
  code *pcStack_258;
  undefined8 ***pppuStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 ***pppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 ***pppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 ***pppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 ***pppuStack_120;
  undefined *puStack_118;
  undefined8 ***pppuStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb51fb & 1) == 0) {
    func_0x00f78a20(0x3d27730);
    bRam0000000003eb51fb = 1;
  }
  plVar15 = (long *)(param_1 + 0xa0);
  lVar7 = *plVar15;
  while ((plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,param_2,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
    lVar4 = func_0x00ff0f44(plVar15,plVar3,lVar7);
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar3);
  uVar19 = auVar21._8_8_;
  uStack_60 = 0x3d27730;
  puStack_38 = &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableUsed;
  lStack_58 = lVar7;
  plStack_50 = plVar15;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb51f3 & 1) == 0) {
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb51f3 = 1;
  }
  plVar15 = (long *)(auVar21._0_8_ + 0x80);
  lVar7 = *plVar15;
  while ((plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,uVar19,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
    lVar4 = func_0x00ff0f44(plVar15,plVar3,lVar7);
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar3);
  uVar12 = auVar21._8_8_;
  uStack_90 = 0x3d27718;
  puStack_68 = &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHoppedOver;
  lStack_88 = lVar7;
  plStack_80 = plVar15;
  uStack_78 = uVar19;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb51fd & 1) == 0) {
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51fd = 1;
  }
  plVar15 = (long *)(auVar21._0_8_ + 0xa8);
  lVar7 = *plVar15;
  while ((plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,uVar12,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
    lVar4 = func_0x00ff0f44(plVar15,plVar3,lVar7);
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar3);
  uStack_c0 = 0x3d27738;
  puStack_98 = &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnBeforeRespawn;
  lStack_b8 = lVar7;
  plStack_b0 = plVar15;
  uStack_a8 = uVar12;
  pppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eb51f5 & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51f5 = 1;
  }
  plVar15 = (long *)(auVar21._0_8_ + 0x88);
  lVar7 = *plVar15;
  while ((plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,auVar21._8_8_,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar4 = func_0x00ff0f44(plVar15,plVar3,lVar7);
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar3);
  lVar7 = auVar21._0_8_;
  pcStack_c8 = Atlas_Contexts_GameContextBase__DeInitAtlasPlayers;
  uVar18 = 0x3d27718;
  uVar19 = 0x3d570f0;
  pppuStack_d0 = &pppuStack_a0;
  if ((bRam0000000003eb51b7 & 1) == 0) {
    func_0x00f78a20(0x3d524e0);
    func_0x00f78a20(0x3d524e8);
    func_0x00f78a20(0x3d524f0);
    func_0x00f78a20(0x3d524f8);
    func_0x00f78a20(0x3d570d0);
    func_0x00f78a20(0x3d570f0);
    func_0x00f78a20(0x3d27700);
    func_0x00f78a20(0x3d27718);
    func_0x00f78a20(0x3d27728);
    func_0x00f78a20(0x3d27730);
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51b7 = 1;
  }
  lVar4 = *(long *)(lVar7 + 0x40);
  uVar5 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
  auVar22._8_8_ = uVar5;
  auVar22._0_8_ = lVar4;
  uVar12 = 0;
  Atlas_Gameplay_Player_GameContextPlayerEvents_UsableActionDelegate___ctor
            (uVar5,lVar7,uRam0000000003d570f0,0);
  if (lVar4 == 0) {
    puVar20 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableUsed;
    auVar22 = func_0x00f78af4();
  }
  else {
    uVar19 = 0x3d27000;
    puVar20 = (undefined *)0x159d470;
  }
  uVar8 = auVar22._8_8_;
  uStack_140 = uVar5;
  lStack_138 = lVar4;
  pppuStack_120 = &pppuStack_d0;
  puStack_118 = puVar20;
  if ((bRam0000000003eb51f4 & 1) == 0) {
    uStack_130 = auVar21._8_8_;
    lStack_128 = lVar7;
    func_0x00f78a20(0x3d27718);
    auVar21._8_8_ = uStack_130;
    auVar21._0_8_ = lStack_128;
    bRam0000000003eb51f4 = 1;
  }
  plVar15 = (long *)(auVar22._0_8_ + 0x80);
  lVar7 = *plVar15;
  while( true ) {
    uStack_130 = auVar21._8_8_;
    lStack_128 = auVar21._0_8_;
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,uVar8,0);
    if ((plVar3 != (long *)0x0) && (*plVar3 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718)) break;
    lVar4 = func_0x00ff0f44(plVar15,plVar3,lVar7);
    auVar21._8_8_ = uStack_130;
    auVar21._0_8_ = lStack_128;
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar3);
  uVar5 = auVar21._8_8_;
  uStack_170 = 0x3d27718;
  puStack_148 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnBeforeRespawn;
  lStack_168 = lVar7;
  plStack_160 = plVar15;
  uStack_158 = uVar8;
  pppuStack_150 = &pppuStack_120;
  if ((bRam0000000003eb51f6 & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51f6 = 1;
  }
  plVar15 = (long *)(auVar21._0_8_ + 0x88);
  lVar7 = *plVar15;
  while ((plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,uVar5,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar4 = func_0x00ff0f44(plVar15,plVar3,lVar7);
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar3);
  uVar8 = auVar21._8_8_;
  uStack_1a0 = 0x3d27700;
  puStack_178 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHoppedOver;
  lStack_198 = lVar7;
  plStack_190 = plVar15;
  uStack_188 = uVar5;
  pppuStack_180 = &pppuStack_150;
  if ((bRam0000000003eb51fe & 1) == 0) {
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51fe = 1;
  }
  plVar15 = (long *)(auVar21._0_8_ + 0xa8);
  lVar7 = *plVar15;
  while ((plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,uVar8,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
    lVar4 = func_0x00ff0f44(plVar15,plVar3,lVar7);
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar3);
  uVar5 = auVar21._8_8_;
  uStack_1d0 = 0x3d27738;
  puStack_1a8 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitShield;
  lStack_1c8 = lVar7;
  plStack_1c0 = plVar15;
  uStack_1b8 = uVar8;
  pppuStack_1b0 = &pppuStack_180;
  if ((bRam0000000003eb51fc & 1) == 0) {
    func_0x00f78a20(0x3d27730);
    bRam0000000003eb51fc = 1;
  }
  plVar15 = (long *)(auVar21._0_8_ + 0xa0);
  lVar7 = *plVar15;
  while ((plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,uVar5,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
    lVar4 = func_0x00ff0f44(plVar15,plVar3,lVar7);
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar3);
  uStack_200 = 0x3d27730;
  puStack_1d8 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitPlayer;
  lStack_1f8 = lVar7;
  plStack_1f0 = plVar15;
  uStack_1e8 = uVar5;
  pppuStack_1e0 = &pppuStack_1b0;
  if ((bRam0000000003eb51fa & 1) == 0) {
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb51fa = 1;
  }
  plVar15 = (long *)0x3d27728;
  plVar3 = (long *)(auVar21._0_8_ + 0x98);
  lVar7 = *plVar3;
  while( true ) {
    puVar10 = (undefined8 *)0x0;
    plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,auVar21._8_8_);
    if ((plVar6 != (long *)0x0) && (*plVar6 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728)) break;
    lVar4 = func_0x00ff0f44(plVar3,plVar6,lVar7);
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  lVar7 = func_0x00f78e5c(plVar6);
  puStack_208 = &Atlas_Gameplay_Player_GameContextPlayerManager__DeInit;
  lVar4 = 0x3eb5000;
  pppuStack_210 = &pppuStack_1e0;
  if ((bRam0000000003eb5204 & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d2a1c8);
    func_0x00f78a20(0x3d1b4e0);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d43378);
    func_0x00f78a20(0x3d57230);
    func_0x00f78a20(0x3d57238);
    func_0x00f78a20(0x3d57240);
    bRam0000000003eb5204 = 1;
  }
  lVar16 = *(long *)(lVar7 + 0x28);
  if (lVar16 == 0) {
code_r0x0159db7c:
    func_0x00f78af4();
    uVar5 = uVar19;
code_r0x0159db80:
    uVar19 = func_0x00f78b24();
    func_0x00f78ac0(uVar19,0);
  }
  else {
    plVar15 = (long *)(lVar7 + 0x10);
    uVar13 = *(uint *)(lVar16 + 0x18);
    if (0 < (int)uVar13) {
      uVar18 = 0;
      uVar19 = 0x3d43378;
      do {
        uVar17 = (uint)uVar18;
        uVar5 = uVar19;
        if (uVar13 <= uVar17) goto code_r0x0159db80;
        if (*plVar15 == 0) goto code_r0x0159db7c;
        lVar4 = *(long *)(lVar16 + (long)(int)uVar17 * 8 + 0x20);
        puVar10 = puRam0000000003d43378;
        /*Core.Actors.ActorManager$$TryRemoveFromGroup<object>*/ func_0x0171ee50(*plVar15,lVar4);
        if (lVar4 == 0) goto code_r0x0159db7c;
        Atlas_Gameplay_Player_GameContextPlayer__DeInit(lVar4);
        uVar18 = (ulong)(uVar17 + 1);
        uVar13 = *(uint *)(lVar16 + 0x18);
      } while ((int)(uVar17 + 1) < (int)uVar13);
    }
    if (((*(long *)(lVar7 + 0x20) == 0) ||
        (lVar14 = *(long *)(*(long *)(lVar7 + 0x20) + 0x20), lVar14 == 0)) ||
       (uVar18 = *(ulong *)(lVar14 + 0x10), uVar18 == 0)) goto code_r0x0159db7c;
    uVar5 = 0x3d1b4e8;
    uVar19 = 0x3d1b4e8;
    lVar4 = *(long *)(uVar18 + 0x18);
    lVar16 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
    uVar12 = uRam0000000003d2a1d8;
    /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(lVar16,lVar7,uRam0000000003d57238,uRam0000000003d2a1d8);
    puVar10 = (undefined8 *)0x0;
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,lVar16);
    if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
      *(long **)(uVar18 + 0x18) = plVar3;
      if ((*(long *)(lVar7 + 0x20) == 0) ||
         ((lVar14 = *(long *)(*(long *)(lVar7 + 0x20) + 0x20), lVar14 == 0 ||
          (uVar18 = *(ulong *)(lVar14 + 0x10), uVar18 == 0)))) goto code_r0x0159db7c;
      uVar5 = 0x3d1b3b0;
      uVar19 = 0x3d1b3b0;
      lVar4 = *(long *)(uVar18 + 0x70);
      lVar16 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
      uVar12 = uRam0000000003d29f28;
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar16,lVar7,uRam0000000003d57240,uRam0000000003d29f28);
      puVar10 = (undefined8 *)0x0;
      plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,lVar16);
      if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
        *(long **)(uVar18 + 0x70) = plVar3;
        if (((*(long *)(lVar7 + 0x20) == 0) ||
            (lVar14 = *(long *)(*(long *)(lVar7 + 0x20) + 0x20), lVar14 == 0)) ||
           (uVar18 = *(ulong *)(lVar14 + 0x10), uVar18 == 0)) goto code_r0x0159db7c;
        uVar5 = 0x3d1b4e0;
        lVar4 = *(long *)(uVar18 + 0x28);
        lVar16 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
        uVar12 = uRam0000000003d2a1c8;
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar16,lVar7,uRam0000000003d57230,uRam0000000003d2a1c8);
        puVar10 = (undefined8 *)0x0;
        plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,lVar16);
        if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) {
          *(long **)(uVar18 + 0x28) = plVar3;
          *(undefined1 *)(lVar7 + 0x50) = 0;
          *(undefined8 *)(lVar7 + 0x18) = 0;
          *plVar15 = 0;
          *(undefined8 *)(lVar7 + 0x28) = 0;
          *(undefined8 *)(lVar7 + 0x20) = 0;
          return;
        }
      }
    }
  }
  auVar21 = func_0x00f78e5c();
  puVar9 = auVar21._8_8_;
  plVar3 = auVar21._0_8_;
  pcStack_258 = Atlas_Contexts_GameContextBase__HandleUsableHitPlayer;
  puVar11 = puVar10;
  uStack_290 = uVar5;
  uStack_288 = uVar18;
  plStack_280 = plVar15;
  lStack_278 = lVar16;
  lStack_270 = lVar4;
  lStack_268 = lVar7;
  pppuStack_260 = &pppuStack_210;
  if ((bRam0000000003eb51b8 & 1) == 0) {
    func_0x00f78a20(0x3d69658);
    bRam0000000003eb51b8 = 1;
  }
  if (((plVar3[3] != 0) &&
      (puVar11 = puVar10, /*Atlas.Stats.AtlasStats$$OnUsableHitPlayer*/ func_0x0146ecbc(plVar3[3],puVar9,puVar10,uVar12,0),
      puVar10 != (undefined8 *)0x0)) && (lVar7 = puVar10[2], lVar7 != 0)) {
    uStack_2a8 = *(undefined8 *)(lVar7 + 0x50);
    uStack_2b0 = *(undefined8 *)(lVar7 + 0x48);
    uStack_298 = *(undefined8 *)(lVar7 + 0x60);
    uStack_2a0 = *(undefined8 *)(lVar7 + 0x58);
    iVar2 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&uStack_2b0,0);
    if ((iVar2 == 0) || (puVar10 == puVar9)) {
      return;
    }
    iVar2 = (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
    if ((plVar3[0x18] != 0) && (lVar7 = *(long *)(plVar3[0x18] + 0x20), lVar7 != 0)) {
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_2c8,lVar7,0);
      *(int *)(puVar10 + 0xf) = *(int *)(puVar10 + 0xf) + iVar2;
      puVar10[0x11] = uStack_2c0;
      puVar10[0x10] = uStack_2c8;
      puVar10[0x12] = uStack_2b8;
      if (puVar10[2] != 0) {
        if (*(int *)(puVar10[2] + 0x50) == 0) {
          uVar19 = (**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
          puVar11 = (undefined8 *)0x0;
          iVar2 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar19,/*STR('BattleGameContext')*/ uRam0000000003d69658);
          if (iVar2 != 0) {
            if (plVar3[3] == 0) goto LAB_0159dcf8;
            /*Atlas.Stats.AtlasStats$$RecordBattlePoints*/ func_0x0146e660(plVar3[3],*(undefined4 *)(puVar10 + 0xf),0);
          }
        }
        if (plVar3[0x46] == 0) {
          return;
        }
        /*Atlas.Arcade.ArcadeEvent$$UsableHitPlayer*/ func_0x0144def8(plVar3[0x46],puVar9,puVar10,uVar12,0);
        return;
      }
    }
  }
LAB_0159dcf8:
  auVar23 = func_0x00f78af4();
  lVar7 = auVar23._0_8_;
  uVar5 = puVar11[1];
  uVar12 = *puVar11;
  uVar19 = puVar11[2];
  *(int *)(lVar7 + 0x78) = *(int *)(lVar7 + 0x78) + auVar23._8_4_;
  *(undefined8 *)(lVar7 + 0x88) = uVar5;
  *(undefined8 *)(lVar7 + 0x80) = uVar12;
  *(undefined8 *)(lVar7 + 0x90) = uVar19;
  return;
}



// ============================================================
// RVA: 0x159d188 | Atlas.Gameplay.Player.GameContextPlayerManager.add_OnUsableUsed
// ============================================================

/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */

void Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableUsed
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  ulong uStack_258;
  long *plStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 ***pppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 ***pppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 ***pppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 ***pppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined1 ***pppuStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb51f3 & 1) == 0) {
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb51f3 = 1;
  }
  plVar15 = (long *)(param_1 + 0x80);
  lVar7 = *plVar15;
  while ((plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,param_2,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
    lVar4 = func_0x00ff0f44(plVar15,plVar3,lVar7);
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar3);
  uVar19 = auVar21._8_8_;
  uStack_60 = 0x3d27718;
  puStack_38 = &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHoppedOver;
  lStack_58 = lVar7;
  plStack_50 = plVar15;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb51fd & 1) == 0) {
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51fd = 1;
  }
  plVar15 = (long *)(auVar21._0_8_ + 0xa8);
  lVar7 = *plVar15;
  while ((plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,uVar19,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
    lVar4 = func_0x00ff0f44(plVar15,plVar3,lVar7);
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar3);
  uStack_90 = 0x3d27738;
  puStack_68 = &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnBeforeRespawn;
  lStack_88 = lVar7;
  plStack_80 = plVar15;
  uStack_78 = uVar19;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb51f5 & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51f5 = 1;
  }
  plVar15 = (long *)(auVar21._0_8_ + 0x88);
  lVar7 = *plVar15;
  while ((plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,auVar21._8_8_,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar4 = func_0x00ff0f44(plVar15,plVar3,lVar7);
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar3);
  lVar7 = auVar21._0_8_;
  pcStack_98 = Atlas_Contexts_GameContextBase__DeInitAtlasPlayers;
  uVar18 = 0x3d27718;
  uVar19 = 0x3d570f0;
  pppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eb51b7 & 1) == 0) {
    func_0x00f78a20(0x3d524e0);
    func_0x00f78a20(0x3d524e8);
    func_0x00f78a20(0x3d524f0);
    func_0x00f78a20(0x3d524f8);
    func_0x00f78a20(0x3d570d0);
    func_0x00f78a20(0x3d570f0);
    func_0x00f78a20(0x3d27700);
    func_0x00f78a20(0x3d27718);
    func_0x00f78a20(0x3d27728);
    func_0x00f78a20(0x3d27730);
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51b7 = 1;
  }
  lVar4 = *(long *)(lVar7 + 0x40);
  uVar5 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
  auVar22._8_8_ = uVar5;
  auVar22._0_8_ = lVar4;
  uVar12 = 0;
  Atlas_Gameplay_Player_GameContextPlayerEvents_UsableActionDelegate___ctor
            (uVar5,lVar7,uRam0000000003d570f0,0);
  if (lVar4 == 0) {
    puVar20 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableUsed;
    auVar22 = func_0x00f78af4();
  }
  else {
    uVar19 = 0x3d27000;
    puVar20 = (undefined *)0x159d470;
  }
  uVar8 = auVar22._8_8_;
  uStack_110 = uVar5;
  lStack_108 = lVar4;
  pppuStack_f0 = &pppuStack_a0;
  puStack_e8 = puVar20;
  if ((bRam0000000003eb51f4 & 1) == 0) {
    uStack_100 = auVar21._8_8_;
    lStack_f8 = lVar7;
    func_0x00f78a20(0x3d27718);
    auVar21._8_8_ = uStack_100;
    auVar21._0_8_ = lStack_f8;
    bRam0000000003eb51f4 = 1;
  }
  plVar15 = (long *)(auVar22._0_8_ + 0x80);
  lVar7 = *plVar15;
  while( true ) {
    uStack_100 = auVar21._8_8_;
    lStack_f8 = auVar21._0_8_;
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,uVar8,0);
    if ((plVar3 != (long *)0x0) && (*plVar3 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718)) break;
    lVar4 = func_0x00ff0f44(plVar15,plVar3,lVar7);
    auVar21._8_8_ = uStack_100;
    auVar21._0_8_ = lStack_f8;
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar3);
  uVar5 = auVar21._8_8_;
  uStack_140 = 0x3d27718;
  puStack_118 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnBeforeRespawn;
  lStack_138 = lVar7;
  plStack_130 = plVar15;
  uStack_128 = uVar8;
  pppuStack_120 = &pppuStack_f0;
  if ((bRam0000000003eb51f6 & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51f6 = 1;
  }
  plVar15 = (long *)(auVar21._0_8_ + 0x88);
  lVar7 = *plVar15;
  while ((plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,uVar5,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar4 = func_0x00ff0f44(plVar15,plVar3,lVar7);
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar3);
  uVar8 = auVar21._8_8_;
  uStack_170 = 0x3d27700;
  puStack_148 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHoppedOver;
  lStack_168 = lVar7;
  plStack_160 = plVar15;
  uStack_158 = uVar5;
  pppuStack_150 = &pppuStack_120;
  if ((bRam0000000003eb51fe & 1) == 0) {
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51fe = 1;
  }
  plVar15 = (long *)(auVar21._0_8_ + 0xa8);
  lVar7 = *plVar15;
  while ((plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,uVar8,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
    lVar4 = func_0x00ff0f44(plVar15,plVar3,lVar7);
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar3);
  uVar5 = auVar21._8_8_;
  uStack_1a0 = 0x3d27738;
  puStack_178 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitShield;
  lStack_198 = lVar7;
  plStack_190 = plVar15;
  uStack_188 = uVar8;
  pppuStack_180 = &pppuStack_150;
  if ((bRam0000000003eb51fc & 1) == 0) {
    func_0x00f78a20(0x3d27730);
    bRam0000000003eb51fc = 1;
  }
  plVar15 = (long *)(auVar21._0_8_ + 0xa0);
  lVar7 = *plVar15;
  while ((plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,uVar5,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
    lVar4 = func_0x00ff0f44(plVar15,plVar3,lVar7);
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar3);
  uStack_1d0 = 0x3d27730;
  puStack_1a8 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitPlayer;
  lStack_1c8 = lVar7;
  plStack_1c0 = plVar15;
  uStack_1b8 = uVar5;
  pppuStack_1b0 = &pppuStack_180;
  if ((bRam0000000003eb51fa & 1) == 0) {
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb51fa = 1;
  }
  plVar15 = (long *)0x3d27728;
  plVar3 = (long *)(auVar21._0_8_ + 0x98);
  lVar7 = *plVar3;
  while( true ) {
    puVar10 = (undefined8 *)0x0;
    plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,auVar21._8_8_);
    if ((plVar6 != (long *)0x0) && (*plVar6 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728)) break;
    lVar4 = func_0x00ff0f44(plVar3,plVar6,lVar7);
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  lVar7 = func_0x00f78e5c(plVar6);
  puStack_1d8 = &Atlas_Gameplay_Player_GameContextPlayerManager__DeInit;
  lVar4 = 0x3eb5000;
  pppuStack_1e0 = &pppuStack_1b0;
  if ((bRam0000000003eb5204 & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d2a1c8);
    func_0x00f78a20(0x3d1b4e0);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d43378);
    func_0x00f78a20(0x3d57230);
    func_0x00f78a20(0x3d57238);
    func_0x00f78a20(0x3d57240);
    bRam0000000003eb5204 = 1;
  }
  lVar16 = *(long *)(lVar7 + 0x28);
  if (lVar16 == 0) {
code_r0x0159db7c:
    func_0x00f78af4();
    uVar5 = uVar19;
code_r0x0159db80:
    uVar19 = func_0x00f78b24();
    func_0x00f78ac0(uVar19,0);
  }
  else {
    plVar15 = (long *)(lVar7 + 0x10);
    uVar13 = *(uint *)(lVar16 + 0x18);
    if (0 < (int)uVar13) {
      uVar18 = 0;
      uVar19 = 0x3d43378;
      do {
        uVar17 = (uint)uVar18;
        uVar5 = uVar19;
        if (uVar13 <= uVar17) goto code_r0x0159db80;
        if (*plVar15 == 0) goto code_r0x0159db7c;
        lVar4 = *(long *)(lVar16 + (long)(int)uVar17 * 8 + 0x20);
        puVar10 = puRam0000000003d43378;
        /*Core.Actors.ActorManager$$TryRemoveFromGroup<object>*/ func_0x0171ee50(*plVar15,lVar4);
        if (lVar4 == 0) goto code_r0x0159db7c;
        Atlas_Gameplay_Player_GameContextPlayer__DeInit(lVar4);
        uVar18 = (ulong)(uVar17 + 1);
        uVar13 = *(uint *)(lVar16 + 0x18);
      } while ((int)(uVar17 + 1) < (int)uVar13);
    }
    if (((*(long *)(lVar7 + 0x20) == 0) ||
        (lVar14 = *(long *)(*(long *)(lVar7 + 0x20) + 0x20), lVar14 == 0)) ||
       (uVar18 = *(ulong *)(lVar14 + 0x10), uVar18 == 0)) goto code_r0x0159db7c;
    uVar5 = 0x3d1b4e8;
    uVar19 = 0x3d1b4e8;
    lVar4 = *(long *)(uVar18 + 0x18);
    lVar16 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
    uVar12 = uRam0000000003d2a1d8;
    /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(lVar16,lVar7,uRam0000000003d57238,uRam0000000003d2a1d8);
    puVar10 = (undefined8 *)0x0;
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,lVar16);
    if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
      *(long **)(uVar18 + 0x18) = plVar3;
      if ((*(long *)(lVar7 + 0x20) == 0) ||
         ((lVar14 = *(long *)(*(long *)(lVar7 + 0x20) + 0x20), lVar14 == 0 ||
          (uVar18 = *(ulong *)(lVar14 + 0x10), uVar18 == 0)))) goto code_r0x0159db7c;
      uVar5 = 0x3d1b3b0;
      uVar19 = 0x3d1b3b0;
      lVar4 = *(long *)(uVar18 + 0x70);
      lVar16 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
      uVar12 = uRam0000000003d29f28;
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar16,lVar7,uRam0000000003d57240,uRam0000000003d29f28);
      puVar10 = (undefined8 *)0x0;
      plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,lVar16);
      if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
        *(long **)(uVar18 + 0x70) = plVar3;
        if (((*(long *)(lVar7 + 0x20) == 0) ||
            (lVar14 = *(long *)(*(long *)(lVar7 + 0x20) + 0x20), lVar14 == 0)) ||
           (uVar18 = *(ulong *)(lVar14 + 0x10), uVar18 == 0)) goto code_r0x0159db7c;
        uVar5 = 0x3d1b4e0;
        lVar4 = *(long *)(uVar18 + 0x28);
        lVar16 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
        uVar12 = uRam0000000003d2a1c8;
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar16,lVar7,uRam0000000003d57230,uRam0000000003d2a1c8);
        puVar10 = (undefined8 *)0x0;
        plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,lVar16);
        if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) {
          *(long **)(uVar18 + 0x28) = plVar3;
          *(undefined1 *)(lVar7 + 0x50) = 0;
          *(undefined8 *)(lVar7 + 0x18) = 0;
          *plVar15 = 0;
          *(undefined8 *)(lVar7 + 0x28) = 0;
          *(undefined8 *)(lVar7 + 0x20) = 0;
          return;
        }
      }
    }
  }
  auVar21 = func_0x00f78e5c();
  puVar9 = auVar21._8_8_;
  plVar3 = auVar21._0_8_;
  pcStack_228 = Atlas_Contexts_GameContextBase__HandleUsableHitPlayer;
  puVar11 = puVar10;
  uStack_260 = uVar5;
  uStack_258 = uVar18;
  plStack_250 = plVar15;
  lStack_248 = lVar16;
  lStack_240 = lVar4;
  lStack_238 = lVar7;
  pppuStack_230 = &pppuStack_1e0;
  if ((bRam0000000003eb51b8 & 1) == 0) {
    func_0x00f78a20(0x3d69658);
    bRam0000000003eb51b8 = 1;
  }
  if (((plVar3[3] != 0) &&
      (puVar11 = puVar10, /*Atlas.Stats.AtlasStats$$OnUsableHitPlayer*/ func_0x0146ecbc(plVar3[3],puVar9,puVar10,uVar12,0),
      puVar10 != (undefined8 *)0x0)) && (lVar7 = puVar10[2], lVar7 != 0)) {
    uStack_278 = *(undefined8 *)(lVar7 + 0x50);
    uStack_280 = *(undefined8 *)(lVar7 + 0x48);
    uStack_268 = *(undefined8 *)(lVar7 + 0x60);
    uStack_270 = *(undefined8 *)(lVar7 + 0x58);
    iVar2 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&uStack_280,0);
    if ((iVar2 == 0) || (puVar10 == puVar9)) {
      return;
    }
    iVar2 = (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
    if ((plVar3[0x18] != 0) && (lVar7 = *(long *)(plVar3[0x18] + 0x20), lVar7 != 0)) {
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_298,lVar7,0);
      *(int *)(puVar10 + 0xf) = *(int *)(puVar10 + 0xf) + iVar2;
      puVar10[0x11] = uStack_290;
      puVar10[0x10] = uStack_298;
      puVar10[0x12] = uStack_288;
      if (puVar10[2] != 0) {
        if (*(int *)(puVar10[2] + 0x50) == 0) {
          uVar19 = (**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
          puVar11 = (undefined8 *)0x0;
          iVar2 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar19,/*STR('BattleGameContext')*/ uRam0000000003d69658);
          if (iVar2 != 0) {
            if (plVar3[3] == 0) goto LAB_0159dcf8;
            /*Atlas.Stats.AtlasStats$$RecordBattlePoints*/ func_0x0146e660(plVar3[3],*(undefined4 *)(puVar10 + 0xf),0);
          }
        }
        if (plVar3[0x46] == 0) {
          return;
        }
        /*Atlas.Arcade.ArcadeEvent$$UsableHitPlayer*/ func_0x0144def8(plVar3[0x46],puVar9,puVar10,uVar12,0);
        return;
      }
    }
  }
LAB_0159dcf8:
  auVar23 = func_0x00f78af4();
  lVar7 = auVar23._0_8_;
  uVar5 = puVar11[1];
  uVar12 = *puVar11;
  uVar19 = puVar11[2];
  *(int *)(lVar7 + 0x78) = *(int *)(lVar7 + 0x78) + auVar23._8_4_;
  *(undefined8 *)(lVar7 + 0x88) = uVar5;
  *(undefined8 *)(lVar7 + 0x80) = uVar12;
  *(undefined8 *)(lVar7 + 0x90) = uVar19;
  return;
}



// ============================================================
// RVA: 0x159d228 | Atlas.Gameplay.Player.GameContextPlayerManager.add_OnUsableHoppedOver
// ============================================================

/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */

void Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHoppedOver
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  long *plStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 ***pppuStack_200;
  code *pcStack_1f8;
  undefined8 ***pppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 ***pppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 ***pppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 ***pppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 ***pppuStack_c0;
  undefined *puStack_b8;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb51fd & 1) == 0) {
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51fd = 1;
  }
  plVar15 = (long *)(param_1 + 0xa8);
  lVar7 = *plVar15;
  while ((plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,param_2,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
    lVar4 = func_0x00ff0f44(plVar15,plVar3,lVar7);
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar3);
  uStack_60 = 0x3d27738;
  puStack_38 = &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnBeforeRespawn;
  lStack_58 = lVar7;
  plStack_50 = plVar15;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb51f5 & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51f5 = 1;
  }
  plVar15 = (long *)(auVar21._0_8_ + 0x88);
  lVar7 = *plVar15;
  while ((plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,auVar21._8_8_,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar4 = func_0x00ff0f44(plVar15,plVar3,lVar7);
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar3);
  lVar7 = auVar21._0_8_;
  pcStack_68 = Atlas_Contexts_GameContextBase__DeInitAtlasPlayers;
  uVar18 = 0x3d27718;
  uVar19 = 0x3d570f0;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb51b7 & 1) == 0) {
    func_0x00f78a20(0x3d524e0);
    func_0x00f78a20(0x3d524e8);
    func_0x00f78a20(0x3d524f0);
    func_0x00f78a20(0x3d524f8);
    func_0x00f78a20(0x3d570d0);
    func_0x00f78a20(0x3d570f0);
    func_0x00f78a20(0x3d27700);
    func_0x00f78a20(0x3d27718);
    func_0x00f78a20(0x3d27728);
    func_0x00f78a20(0x3d27730);
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51b7 = 1;
  }
  lVar4 = *(long *)(lVar7 + 0x40);
  uVar5 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
  auVar22._8_8_ = uVar5;
  auVar22._0_8_ = lVar4;
  uVar12 = 0;
  Atlas_Gameplay_Player_GameContextPlayerEvents_UsableActionDelegate___ctor
            (uVar5,lVar7,uRam0000000003d570f0,0);
  if (lVar4 == 0) {
    puVar20 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableUsed;
    auVar22 = func_0x00f78af4();
  }
  else {
    uVar19 = 0x3d27000;
    puVar20 = (undefined *)0x159d470;
  }
  uVar8 = auVar22._8_8_;
  uStack_e0 = uVar5;
  lStack_d8 = lVar4;
  pppuStack_c0 = &ppuStack_70;
  puStack_b8 = puVar20;
  if ((bRam0000000003eb51f4 & 1) == 0) {
    uStack_d0 = auVar21._8_8_;
    lStack_c8 = lVar7;
    func_0x00f78a20(0x3d27718);
    auVar21._8_8_ = uStack_d0;
    auVar21._0_8_ = lStack_c8;
    bRam0000000003eb51f4 = 1;
  }
  plVar15 = (long *)(auVar22._0_8_ + 0x80);
  lVar7 = *plVar15;
  while( true ) {
    uStack_d0 = auVar21._8_8_;
    lStack_c8 = auVar21._0_8_;
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,uVar8,0);
    if ((plVar3 != (long *)0x0) && (*plVar3 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718)) break;
    lVar4 = func_0x00ff0f44(plVar15,plVar3,lVar7);
    auVar21._8_8_ = uStack_d0;
    auVar21._0_8_ = lStack_c8;
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar3);
  uVar5 = auVar21._8_8_;
  uStack_110 = 0x3d27718;
  puStack_e8 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnBeforeRespawn;
  lStack_108 = lVar7;
  plStack_100 = plVar15;
  uStack_f8 = uVar8;
  pppuStack_f0 = &pppuStack_c0;
  if ((bRam0000000003eb51f6 & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51f6 = 1;
  }
  plVar15 = (long *)(auVar21._0_8_ + 0x88);
  lVar7 = *plVar15;
  while ((plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,uVar5,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar4 = func_0x00ff0f44(plVar15,plVar3,lVar7);
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar3);
  uVar8 = auVar21._8_8_;
  uStack_140 = 0x3d27700;
  puStack_118 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHoppedOver;
  lStack_138 = lVar7;
  plStack_130 = plVar15;
  uStack_128 = uVar5;
  pppuStack_120 = &pppuStack_f0;
  if ((bRam0000000003eb51fe & 1) == 0) {
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51fe = 1;
  }
  plVar15 = (long *)(auVar21._0_8_ + 0xa8);
  lVar7 = *plVar15;
  while ((plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,uVar8,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
    lVar4 = func_0x00ff0f44(plVar15,plVar3,lVar7);
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar3);
  uVar5 = auVar21._8_8_;
  uStack_170 = 0x3d27738;
  puStack_148 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitShield;
  lStack_168 = lVar7;
  plStack_160 = plVar15;
  uStack_158 = uVar8;
  pppuStack_150 = &pppuStack_120;
  if ((bRam0000000003eb51fc & 1) == 0) {
    func_0x00f78a20(0x3d27730);
    bRam0000000003eb51fc = 1;
  }
  plVar15 = (long *)(auVar21._0_8_ + 0xa0);
  lVar7 = *plVar15;
  while ((plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,uVar5,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
    lVar4 = func_0x00ff0f44(plVar15,plVar3,lVar7);
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar3);
  uStack_1a0 = 0x3d27730;
  puStack_178 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitPlayer;
  lStack_198 = lVar7;
  plStack_190 = plVar15;
  uStack_188 = uVar5;
  pppuStack_180 = &pppuStack_150;
  if ((bRam0000000003eb51fa & 1) == 0) {
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb51fa = 1;
  }
  plVar15 = (long *)0x3d27728;
  plVar3 = (long *)(auVar21._0_8_ + 0x98);
  lVar7 = *plVar3;
  while( true ) {
    puVar10 = (undefined8 *)0x0;
    plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,auVar21._8_8_);
    if ((plVar6 != (long *)0x0) && (*plVar6 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728)) break;
    lVar4 = func_0x00ff0f44(plVar3,plVar6,lVar7);
    bVar1 = lVar7 == lVar4;
    lVar7 = lVar4;
    if (bVar1) {
      return;
    }
  }
  lVar7 = func_0x00f78e5c(plVar6);
  puStack_1a8 = &Atlas_Gameplay_Player_GameContextPlayerManager__DeInit;
  lVar4 = 0x3eb5000;
  pppuStack_1b0 = &pppuStack_180;
  if ((bRam0000000003eb5204 & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d2a1c8);
    func_0x00f78a20(0x3d1b4e0);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d43378);
    func_0x00f78a20(0x3d57230);
    func_0x00f78a20(0x3d57238);
    func_0x00f78a20(0x3d57240);
    bRam0000000003eb5204 = 1;
  }
  lVar16 = *(long *)(lVar7 + 0x28);
  if (lVar16 == 0) {
code_r0x0159db7c:
    func_0x00f78af4();
    uVar5 = uVar19;
code_r0x0159db80:
    uVar19 = func_0x00f78b24();
    func_0x00f78ac0(uVar19,0);
  }
  else {
    plVar15 = (long *)(lVar7 + 0x10);
    uVar13 = *(uint *)(lVar16 + 0x18);
    if (0 < (int)uVar13) {
      uVar18 = 0;
      uVar19 = 0x3d43378;
      do {
        uVar17 = (uint)uVar18;
        uVar5 = uVar19;
        if (uVar13 <= uVar17) goto code_r0x0159db80;
        if (*plVar15 == 0) goto code_r0x0159db7c;
        lVar4 = *(long *)(lVar16 + (long)(int)uVar17 * 8 + 0x20);
        puVar10 = puRam0000000003d43378;
        /*Core.Actors.ActorManager$$TryRemoveFromGroup<object>*/ func_0x0171ee50(*plVar15,lVar4);
        if (lVar4 == 0) goto code_r0x0159db7c;
        Atlas_Gameplay_Player_GameContextPlayer__DeInit(lVar4);
        uVar18 = (ulong)(uVar17 + 1);
        uVar13 = *(uint *)(lVar16 + 0x18);
      } while ((int)(uVar17 + 1) < (int)uVar13);
    }
    if (((*(long *)(lVar7 + 0x20) == 0) ||
        (lVar14 = *(long *)(*(long *)(lVar7 + 0x20) + 0x20), lVar14 == 0)) ||
       (uVar18 = *(ulong *)(lVar14 + 0x10), uVar18 == 0)) goto code_r0x0159db7c;
    uVar5 = 0x3d1b4e8;
    uVar19 = 0x3d1b4e8;
    lVar4 = *(long *)(uVar18 + 0x18);
    lVar16 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
    uVar12 = uRam0000000003d2a1d8;
    /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(lVar16,lVar7,uRam0000000003d57238,uRam0000000003d2a1d8);
    puVar10 = (undefined8 *)0x0;
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,lVar16);
    if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
      *(long **)(uVar18 + 0x18) = plVar3;
      if ((*(long *)(lVar7 + 0x20) == 0) ||
         ((lVar14 = *(long *)(*(long *)(lVar7 + 0x20) + 0x20), lVar14 == 0 ||
          (uVar18 = *(ulong *)(lVar14 + 0x10), uVar18 == 0)))) goto code_r0x0159db7c;
      uVar5 = 0x3d1b3b0;
      uVar19 = 0x3d1b3b0;
      lVar4 = *(long *)(uVar18 + 0x70);
      lVar16 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
      uVar12 = uRam0000000003d29f28;
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar16,lVar7,uRam0000000003d57240,uRam0000000003d29f28);
      puVar10 = (undefined8 *)0x0;
      plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,lVar16);
      if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
        *(long **)(uVar18 + 0x70) = plVar3;
        if (((*(long *)(lVar7 + 0x20) == 0) ||
            (lVar14 = *(long *)(*(long *)(lVar7 + 0x20) + 0x20), lVar14 == 0)) ||
           (uVar18 = *(ulong *)(lVar14 + 0x10), uVar18 == 0)) goto code_r0x0159db7c;
        uVar5 = 0x3d1b4e0;
        lVar4 = *(long *)(uVar18 + 0x28);
        lVar16 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
        uVar12 = uRam0000000003d2a1c8;
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar16,lVar7,uRam0000000003d57230,uRam0000000003d2a1c8);
        puVar10 = (undefined8 *)0x0;
        plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,lVar16);
        if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) {
          *(long **)(uVar18 + 0x28) = plVar3;
          *(undefined1 *)(lVar7 + 0x50) = 0;
          *(undefined8 *)(lVar7 + 0x18) = 0;
          *plVar15 = 0;
          *(undefined8 *)(lVar7 + 0x28) = 0;
          *(undefined8 *)(lVar7 + 0x20) = 0;
          return;
        }
      }
    }
  }
  auVar21 = func_0x00f78e5c();
  puVar9 = auVar21._8_8_;
  plVar3 = auVar21._0_8_;
  pcStack_1f8 = Atlas_Contexts_GameContextBase__HandleUsableHitPlayer;
  puVar11 = puVar10;
  uStack_230 = uVar5;
  uStack_228 = uVar18;
  plStack_220 = plVar15;
  lStack_218 = lVar16;
  lStack_210 = lVar4;
  lStack_208 = lVar7;
  pppuStack_200 = &pppuStack_1b0;
  if ((bRam0000000003eb51b8 & 1) == 0) {
    func_0x00f78a20(0x3d69658);
    bRam0000000003eb51b8 = 1;
  }
  if (((plVar3[3] != 0) &&
      (puVar11 = puVar10, /*Atlas.Stats.AtlasStats$$OnUsableHitPlayer*/ func_0x0146ecbc(plVar3[3],puVar9,puVar10,uVar12,0),
      puVar10 != (undefined8 *)0x0)) && (lVar7 = puVar10[2], lVar7 != 0)) {
    uStack_248 = *(undefined8 *)(lVar7 + 0x50);
    uStack_250 = *(undefined8 *)(lVar7 + 0x48);
    uStack_238 = *(undefined8 *)(lVar7 + 0x60);
    uStack_240 = *(undefined8 *)(lVar7 + 0x58);
    iVar2 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&uStack_250,0);
    if ((iVar2 == 0) || (puVar10 == puVar9)) {
      return;
    }
    iVar2 = (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
    if ((plVar3[0x18] != 0) && (lVar7 = *(long *)(plVar3[0x18] + 0x20), lVar7 != 0)) {
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_268,lVar7,0);
      *(int *)(puVar10 + 0xf) = *(int *)(puVar10 + 0xf) + iVar2;
      puVar10[0x11] = uStack_260;
      puVar10[0x10] = uStack_268;
      puVar10[0x12] = uStack_258;
      if (puVar10[2] != 0) {
        if (*(int *)(puVar10[2] + 0x50) == 0) {
          uVar19 = (**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
          puVar11 = (undefined8 *)0x0;
          iVar2 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar19,/*STR('BattleGameContext')*/ uRam0000000003d69658);
          if (iVar2 != 0) {
            if (plVar3[3] == 0) goto LAB_0159dcf8;
            /*Atlas.Stats.AtlasStats$$RecordBattlePoints*/ func_0x0146e660(plVar3[3],*(undefined4 *)(puVar10 + 0xf),0);
          }
        }
        if (plVar3[0x46] == 0) {
          return;
        }
        /*Atlas.Arcade.ArcadeEvent$$UsableHitPlayer*/ func_0x0144def8(plVar3[0x46],puVar9,puVar10,uVar12,0);
        return;
      }
    }
  }
LAB_0159dcf8:
  auVar23 = func_0x00f78af4();
  lVar7 = auVar23._0_8_;
  uVar5 = puVar11[1];
  uVar12 = *puVar11;
  uVar19 = puVar11[2];
  *(int *)(lVar7 + 0x78) = *(int *)(lVar7 + 0x78) + auVar23._8_4_;
  *(undefined8 *)(lVar7 + 0x88) = uVar5;
  *(undefined8 *)(lVar7 + 0x80) = uVar12;
  *(undefined8 *)(lVar7 + 0x90) = uVar19;
  return;
}



// ============================================================
// RVA: 0x159d2c8 | Atlas.Gameplay.Player.GameContextPlayerManager.add_OnBeforeRespawn
// ============================================================

/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */

void Atlas_Gameplay_Player_GameContextPlayerManager__add_OnBeforeRespawn
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  long *plStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 ***pppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 ***pppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 ***pppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined1 ***pppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  if ((bRam0000000003eb51f5 & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51f5 = 1;
  }
  lVar8 = *(long *)(param_1 + 0x88);
  while ((plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar8,param_2,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar4 = func_0x00ff0f44((long *)(param_1 + 0x88),plVar3,lVar8);
    bVar1 = lVar8 == lVar4;
    lVar8 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar3);
  lVar8 = auVar21._0_8_;
  pcStack_38 = Atlas_Contexts_GameContextBase__DeInitAtlasPlayers;
  uVar18 = 0x3d27718;
  uVar19 = 0x3d570f0;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb51b7 & 1) == 0) {
    func_0x00f78a20(0x3d524e0);
    func_0x00f78a20(0x3d524e8);
    func_0x00f78a20(0x3d524f0);
    func_0x00f78a20(0x3d524f8);
    func_0x00f78a20(0x3d570d0);
    func_0x00f78a20(0x3d570f0);
    func_0x00f78a20(0x3d27700);
    func_0x00f78a20(0x3d27718);
    func_0x00f78a20(0x3d27728);
    func_0x00f78a20(0x3d27730);
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51b7 = 1;
  }
  lVar4 = *(long *)(lVar8 + 0x40);
  uVar5 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
  auVar22._8_8_ = uVar5;
  auVar22._0_8_ = lVar4;
  uVar13 = 0;
  Atlas_Gameplay_Player_GameContextPlayerEvents_UsableActionDelegate___ctor
            (uVar5,lVar8,uRam0000000003d570f0,0);
  if (lVar4 == 0) {
    puVar20 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableUsed;
    auVar22 = func_0x00f78af4();
  }
  else {
    uVar19 = 0x3d27000;
    puVar20 = (undefined *)0x159d470;
  }
  uVar9 = auVar22._8_8_;
  uStack_b0 = uVar5;
  lStack_a8 = lVar4;
  ppuStack_90 = &puStack_40;
  puStack_88 = puVar20;
  if ((bRam0000000003eb51f4 & 1) == 0) {
    uStack_a0 = auVar21._8_8_;
    lStack_98 = lVar8;
    func_0x00f78a20(0x3d27718);
    auVar21._8_8_ = uStack_a0;
    auVar21._0_8_ = lStack_98;
    bRam0000000003eb51f4 = 1;
  }
  plVar3 = (long *)(auVar22._0_8_ + 0x80);
  lVar8 = *plVar3;
  while( true ) {
    uStack_a0 = auVar21._8_8_;
    lStack_98 = auVar21._0_8_;
    plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar8,uVar9,0);
    if ((plVar6 != (long *)0x0) && (*plVar6 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718)) break;
    lVar4 = func_0x00ff0f44(plVar3,plVar6,lVar8);
    auVar21._8_8_ = uStack_a0;
    auVar21._0_8_ = lStack_98;
    bVar1 = lVar8 == lVar4;
    lVar8 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar6);
  uVar5 = auVar21._8_8_;
  uStack_e0 = 0x3d27718;
  puStack_b8 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnBeforeRespawn;
  lStack_d8 = lVar8;
  plStack_d0 = plVar3;
  uStack_c8 = uVar9;
  pppuStack_c0 = &ppuStack_90;
  if ((bRam0000000003eb51f6 & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51f6 = 1;
  }
  plVar3 = (long *)(auVar21._0_8_ + 0x88);
  lVar8 = *plVar3;
  while ((plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar8,uVar5,0), plVar6 == (long *)0x0 ||
         (*plVar6 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar4 = func_0x00ff0f44(plVar3,plVar6,lVar8);
    bVar1 = lVar8 == lVar4;
    lVar8 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar6);
  uVar9 = auVar21._8_8_;
  uStack_110 = 0x3d27700;
  puStack_e8 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHoppedOver;
  lStack_108 = lVar8;
  plStack_100 = plVar3;
  uStack_f8 = uVar5;
  pppuStack_f0 = &pppuStack_c0;
  if ((bRam0000000003eb51fe & 1) == 0) {
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51fe = 1;
  }
  plVar3 = (long *)(auVar21._0_8_ + 0xa8);
  lVar8 = *plVar3;
  while ((plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar8,uVar9,0), plVar6 == (long *)0x0 ||
         (*plVar6 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
    lVar4 = func_0x00ff0f44(plVar3,plVar6,lVar8);
    bVar1 = lVar8 == lVar4;
    lVar8 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar6);
  uVar5 = auVar21._8_8_;
  uStack_140 = 0x3d27738;
  puStack_118 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitShield;
  lStack_138 = lVar8;
  plStack_130 = plVar3;
  uStack_128 = uVar9;
  pppuStack_120 = &pppuStack_f0;
  if ((bRam0000000003eb51fc & 1) == 0) {
    func_0x00f78a20(0x3d27730);
    bRam0000000003eb51fc = 1;
  }
  plVar3 = (long *)(auVar21._0_8_ + 0xa0);
  lVar8 = *plVar3;
  while ((plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar8,uVar5,0), plVar6 == (long *)0x0 ||
         (*plVar6 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
    lVar4 = func_0x00ff0f44(plVar3,plVar6,lVar8);
    bVar1 = lVar8 == lVar4;
    lVar8 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar6);
  uStack_170 = 0x3d27730;
  puStack_148 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitPlayer;
  lStack_168 = lVar8;
  plStack_160 = plVar3;
  uStack_158 = uVar5;
  pppuStack_150 = &pppuStack_120;
  if ((bRam0000000003eb51fa & 1) == 0) {
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb51fa = 1;
  }
  plVar3 = (long *)0x3d27728;
  plVar6 = (long *)(auVar21._0_8_ + 0x98);
  lVar8 = *plVar6;
  while( true ) {
    puVar11 = (undefined8 *)0x0;
    plVar7 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar8,auVar21._8_8_);
    if ((plVar7 != (long *)0x0) && (*plVar7 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728)) break;
    lVar4 = func_0x00ff0f44(plVar6,plVar7,lVar8);
    bVar1 = lVar8 == lVar4;
    lVar8 = lVar4;
    if (bVar1) {
      return;
    }
  }
  lVar8 = func_0x00f78e5c(plVar7);
  puStack_178 = &Atlas_Gameplay_Player_GameContextPlayerManager__DeInit;
  lVar4 = 0x3eb5000;
  pppuStack_180 = &pppuStack_150;
  if ((bRam0000000003eb5204 & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d2a1c8);
    func_0x00f78a20(0x3d1b4e0);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d43378);
    func_0x00f78a20(0x3d57230);
    func_0x00f78a20(0x3d57238);
    func_0x00f78a20(0x3d57240);
    bRam0000000003eb5204 = 1;
  }
  lVar16 = *(long *)(lVar8 + 0x28);
  if (lVar16 == 0) {
code_r0x0159db7c:
    func_0x00f78af4();
    uVar5 = uVar19;
code_r0x0159db80:
    uVar19 = func_0x00f78b24();
    func_0x00f78ac0(uVar19,0);
  }
  else {
    plVar3 = (long *)(lVar8 + 0x10);
    uVar14 = *(uint *)(lVar16 + 0x18);
    if (0 < (int)uVar14) {
      uVar18 = 0;
      uVar19 = 0x3d43378;
      do {
        uVar17 = (uint)uVar18;
        uVar5 = uVar19;
        if (uVar14 <= uVar17) goto code_r0x0159db80;
        if (*plVar3 == 0) goto code_r0x0159db7c;
        lVar4 = *(long *)(lVar16 + (long)(int)uVar17 * 8 + 0x20);
        puVar11 = puRam0000000003d43378;
        /*Core.Actors.ActorManager$$TryRemoveFromGroup<object>*/ func_0x0171ee50(*plVar3,lVar4);
        if (lVar4 == 0) goto code_r0x0159db7c;
        Atlas_Gameplay_Player_GameContextPlayer__DeInit(lVar4);
        uVar18 = (ulong)(uVar17 + 1);
        uVar14 = *(uint *)(lVar16 + 0x18);
      } while ((int)(uVar17 + 1) < (int)uVar14);
    }
    if (((*(long *)(lVar8 + 0x20) == 0) ||
        (lVar15 = *(long *)(*(long *)(lVar8 + 0x20) + 0x20), lVar15 == 0)) ||
       (uVar18 = *(ulong *)(lVar15 + 0x10), uVar18 == 0)) goto code_r0x0159db7c;
    uVar5 = 0x3d1b4e8;
    uVar19 = 0x3d1b4e8;
    lVar4 = *(long *)(uVar18 + 0x18);
    lVar16 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
    uVar13 = uRam0000000003d2a1d8;
    /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(lVar16,lVar8,uRam0000000003d57238,uRam0000000003d2a1d8);
    puVar11 = (undefined8 *)0x0;
    plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,lVar16);
    if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
      *(long **)(uVar18 + 0x18) = plVar6;
      if ((*(long *)(lVar8 + 0x20) == 0) ||
         ((lVar15 = *(long *)(*(long *)(lVar8 + 0x20) + 0x20), lVar15 == 0 ||
          (uVar18 = *(ulong *)(lVar15 + 0x10), uVar18 == 0)))) goto code_r0x0159db7c;
      uVar5 = 0x3d1b3b0;
      uVar19 = 0x3d1b3b0;
      lVar4 = *(long *)(uVar18 + 0x70);
      lVar16 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
      uVar13 = uRam0000000003d29f28;
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar16,lVar8,uRam0000000003d57240,uRam0000000003d29f28);
      puVar11 = (undefined8 *)0x0;
      plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,lVar16);
      if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
        *(long **)(uVar18 + 0x70) = plVar6;
        if (((*(long *)(lVar8 + 0x20) == 0) ||
            (lVar15 = *(long *)(*(long *)(lVar8 + 0x20) + 0x20), lVar15 == 0)) ||
           (uVar18 = *(ulong *)(lVar15 + 0x10), uVar18 == 0)) goto code_r0x0159db7c;
        uVar5 = 0x3d1b4e0;
        lVar4 = *(long *)(uVar18 + 0x28);
        lVar16 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
        uVar13 = uRam0000000003d2a1c8;
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar16,lVar8,uRam0000000003d57230,uRam0000000003d2a1c8);
        puVar11 = (undefined8 *)0x0;
        plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,lVar16);
        if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) {
          *(long **)(uVar18 + 0x28) = plVar6;
          *(undefined1 *)(lVar8 + 0x50) = 0;
          *(undefined8 *)(lVar8 + 0x18) = 0;
          *plVar3 = 0;
          *(undefined8 *)(lVar8 + 0x28) = 0;
          *(undefined8 *)(lVar8 + 0x20) = 0;
          return;
        }
      }
    }
  }
  auVar21 = func_0x00f78e5c();
  puVar10 = auVar21._8_8_;
  plVar6 = auVar21._0_8_;
  pcStack_1c8 = Atlas_Contexts_GameContextBase__HandleUsableHitPlayer;
  puVar12 = puVar11;
  uStack_200 = uVar5;
  uStack_1f8 = uVar18;
  plStack_1f0 = plVar3;
  lStack_1e8 = lVar16;
  lStack_1e0 = lVar4;
  lStack_1d8 = lVar8;
  pppuStack_1d0 = &pppuStack_180;
  if ((bRam0000000003eb51b8 & 1) == 0) {
    func_0x00f78a20(0x3d69658);
    bRam0000000003eb51b8 = 1;
  }
  if (((plVar6[3] != 0) &&
      (puVar12 = puVar11, /*Atlas.Stats.AtlasStats$$OnUsableHitPlayer*/ func_0x0146ecbc(plVar6[3],puVar10,puVar11,uVar13,0),
      puVar11 != (undefined8 *)0x0)) && (lVar8 = puVar11[2], lVar8 != 0)) {
    uStack_218 = *(undefined8 *)(lVar8 + 0x50);
    uStack_220 = *(undefined8 *)(lVar8 + 0x48);
    uStack_208 = *(undefined8 *)(lVar8 + 0x60);
    uStack_210 = *(undefined8 *)(lVar8 + 0x58);
    iVar2 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&uStack_220,0);
    if ((iVar2 == 0) || (puVar11 == puVar10)) {
      return;
    }
    iVar2 = (**(code **)(*plVar6 + 0x2a8))(plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
    if ((plVar6[0x18] != 0) && (lVar8 = *(long *)(plVar6[0x18] + 0x20), lVar8 != 0)) {
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_238,lVar8,0);
      *(int *)(puVar11 + 0xf) = *(int *)(puVar11 + 0xf) + iVar2;
      puVar11[0x11] = uStack_230;
      puVar11[0x10] = uStack_238;
      puVar11[0x12] = uStack_228;
      if (puVar11[2] != 0) {
        if (*(int *)(puVar11[2] + 0x50) == 0) {
          uVar19 = (**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210));
          puVar12 = (undefined8 *)0x0;
          iVar2 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar19,/*STR('BattleGameContext')*/ uRam0000000003d69658);
          if (iVar2 != 0) {
            if (plVar6[3] == 0) goto LAB_0159dcf8;
            /*Atlas.Stats.AtlasStats$$RecordBattlePoints*/ func_0x0146e660(plVar6[3],*(undefined4 *)(puVar11 + 0xf),0);
          }
        }
        if (plVar6[0x46] == 0) {
          return;
        }
        /*Atlas.Arcade.ArcadeEvent$$UsableHitPlayer*/ func_0x0144def8(plVar6[0x46],puVar10,puVar11,uVar13,0);
        return;
      }
    }
  }
LAB_0159dcf8:
  auVar23 = func_0x00f78af4();
  lVar8 = auVar23._0_8_;
  uVar5 = puVar12[1];
  uVar13 = *puVar12;
  uVar19 = puVar12[2];
  *(int *)(lVar8 + 0x78) = *(int *)(lVar8 + 0x78) + auVar23._8_4_;
  *(undefined8 *)(lVar8 + 0x88) = uVar5;
  *(undefined8 *)(lVar8 + 0x80) = uVar13;
  *(undefined8 *)(lVar8 + 0x90) = uVar19;
  return;
}



// ============================================================
// RVA: 0x159d5c4 | Atlas.Gameplay.Player.GameContextPlayerManager.remove_OnUsableUsed
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableUsed
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  long *plStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 ***pppuStack_150;
  code *pcStack_148;
  undefined8 ***pppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 ***pppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb51f4 & 1) == 0) {
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb51f4 = 1;
  }
  plVar13 = (long *)(param_1 + 0x80);
  lVar6 = *plVar13;
  while ((plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar6,param_2,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
    lVar4 = func_0x00ff0f44(plVar13,plVar3,lVar6);
    bVar1 = lVar6 == lVar4;
    lVar6 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar18 = func_0x00f78e5c(plVar3);
  uVar16 = auVar18._8_8_;
  uStack_60 = 0x3d27718;
  puStack_38 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnBeforeRespawn;
  lStack_58 = lVar6;
  plStack_50 = plVar13;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb51f6 & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51f6 = 1;
  }
  plVar13 = (long *)(auVar18._0_8_ + 0x88);
  lVar6 = *plVar13;
  while ((plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar6,uVar16,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar4 = func_0x00ff0f44(plVar13,plVar3,lVar6);
    bVar1 = lVar6 == lVar4;
    lVar6 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar18 = func_0x00f78e5c(plVar3);
  uVar7 = auVar18._8_8_;
  uStack_90 = 0x3d27700;
  puStack_68 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHoppedOver;
  lStack_88 = lVar6;
  plStack_80 = plVar13;
  uStack_78 = uVar16;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb51fe & 1) == 0) {
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51fe = 1;
  }
  plVar13 = (long *)(auVar18._0_8_ + 0xa8);
  lVar6 = *plVar13;
  while ((plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar6,uVar7,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
    lVar4 = func_0x00ff0f44(plVar13,plVar3,lVar6);
    bVar1 = lVar6 == lVar4;
    lVar6 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar18 = func_0x00f78e5c(plVar3);
  uVar16 = auVar18._8_8_;
  uStack_c0 = 0x3d27738;
  puStack_98 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitShield;
  lStack_b8 = lVar6;
  plStack_b0 = plVar13;
  uStack_a8 = uVar7;
  pppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eb51fc & 1) == 0) {
    func_0x00f78a20(0x3d27730);
    bRam0000000003eb51fc = 1;
  }
  plVar13 = (long *)(auVar18._0_8_ + 0xa0);
  lVar6 = *plVar13;
  while ((plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar6,uVar16,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
    lVar4 = func_0x00ff0f44(plVar13,plVar3,lVar6);
    bVar1 = lVar6 == lVar4;
    lVar6 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar18 = func_0x00f78e5c(plVar3);
  uStack_f0 = 0x3d27730;
  puStack_c8 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitPlayer;
  lStack_e8 = lVar6;
  plStack_e0 = plVar13;
  uStack_d8 = uVar16;
  pppuStack_d0 = &pppuStack_a0;
  if ((bRam0000000003eb51fa & 1) == 0) {
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb51fa = 1;
  }
  plVar13 = (long *)0x3d27728;
  plVar3 = (long *)(auVar18._0_8_ + 0x98);
  lVar6 = *plVar3;
  while( true ) {
    puVar9 = (undefined8 *)0x0;
    plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar6,auVar18._8_8_);
    if ((plVar5 != (long *)0x0) && (*plVar5 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728)) break;
    lVar4 = func_0x00ff0f44(plVar3,plVar5,lVar6);
    bVar1 = lVar6 == lVar4;
    lVar6 = lVar4;
    if (bVar1) {
      return;
    }
  }
  lVar6 = func_0x00f78e5c(plVar5);
  puStack_f8 = &Atlas_Gameplay_Player_GameContextPlayerManager__DeInit;
  lVar4 = 0x3eb5000;
  pppuStack_100 = &pppuStack_d0;
  if ((bRam0000000003eb5204 & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d2a1c8);
    func_0x00f78a20(0x3d1b4e0);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d43378);
    func_0x00f78a20(0x3d57230);
    func_0x00f78a20(0x3d57238);
    func_0x00f78a20(0x3d57240);
    bRam0000000003eb5204 = 1;
  }
  lVar14 = *(long *)(lVar6 + 0x28);
  if (lVar14 == 0) {
code_r0x0159db7c:
    func_0x00f78af4();
    uVar16 = unaff_x24;
code_r0x0159db80:
    uVar7 = func_0x00f78b24();
    func_0x00f78ac0(uVar7,0);
  }
  else {
    plVar13 = (long *)(lVar6 + 0x10);
    uVar11 = *(uint *)(lVar14 + 0x18);
    if (0 < (int)uVar11) {
      unaff_x23 = 0;
      unaff_x24 = 0x3d43378;
      do {
        uVar15 = (uint)unaff_x23;
        uVar16 = unaff_x24;
        if (uVar11 <= uVar15) goto code_r0x0159db80;
        if (*plVar13 == 0) goto code_r0x0159db7c;
        lVar4 = *(long *)(lVar14 + (long)(int)uVar15 * 8 + 0x20);
        puVar9 = puRam0000000003d43378;
        /*Core.Actors.ActorManager$$TryRemoveFromGroup<object>*/ func_0x0171ee50(*plVar13,lVar4);
        if (lVar4 == 0) goto code_r0x0159db7c;
        Atlas_Gameplay_Player_GameContextPlayer__DeInit(lVar4);
        unaff_x23 = (ulong)(uVar15 + 1);
        uVar11 = *(uint *)(lVar14 + 0x18);
      } while ((int)(uVar15 + 1) < (int)uVar11);
    }
    if (((*(long *)(lVar6 + 0x20) == 0) ||
        (lVar12 = *(long *)(*(long *)(lVar6 + 0x20) + 0x20), lVar12 == 0)) ||
       (unaff_x23 = *(ulong *)(lVar12 + 0x10), unaff_x23 == 0)) goto code_r0x0159db7c;
    uVar16 = 0x3d1b4e8;
    unaff_x24 = 0x3d1b4e8;
    lVar4 = *(long *)(unaff_x23 + 0x18);
    lVar14 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
    param_4 = uRam0000000003d2a1d8;
    /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(lVar14,lVar6,uRam0000000003d57238,uRam0000000003d2a1d8);
    puVar9 = (undefined8 *)0x0;
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,lVar14);
    if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
      *(long **)(unaff_x23 + 0x18) = plVar3;
      if ((*(long *)(lVar6 + 0x20) == 0) ||
         ((lVar12 = *(long *)(*(long *)(lVar6 + 0x20) + 0x20), lVar12 == 0 ||
          (unaff_x23 = *(ulong *)(lVar12 + 0x10), unaff_x23 == 0)))) goto code_r0x0159db7c;
      uVar16 = 0x3d1b3b0;
      unaff_x24 = 0x3d1b3b0;
      lVar4 = *(long *)(unaff_x23 + 0x70);
      lVar14 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
      param_4 = uRam0000000003d29f28;
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar14,lVar6,uRam0000000003d57240,uRam0000000003d29f28);
      puVar9 = (undefined8 *)0x0;
      plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,lVar14);
      if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
        *(long **)(unaff_x23 + 0x70) = plVar3;
        if (((*(long *)(lVar6 + 0x20) == 0) ||
            (lVar12 = *(long *)(*(long *)(lVar6 + 0x20) + 0x20), lVar12 == 0)) ||
           (unaff_x23 = *(ulong *)(lVar12 + 0x10), unaff_x23 == 0)) goto code_r0x0159db7c;
        uVar16 = 0x3d1b4e0;
        lVar4 = *(long *)(unaff_x23 + 0x28);
        lVar14 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
        param_4 = uRam0000000003d2a1c8;
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar14,lVar6,uRam0000000003d57230,uRam0000000003d2a1c8);
        puVar9 = (undefined8 *)0x0;
        plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,lVar14);
        if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) {
          *(long **)(unaff_x23 + 0x28) = plVar3;
          *(undefined1 *)(lVar6 + 0x50) = 0;
          *(undefined8 *)(lVar6 + 0x18) = 0;
          *plVar13 = 0;
          *(undefined8 *)(lVar6 + 0x28) = 0;
          *(undefined8 *)(lVar6 + 0x20) = 0;
          return;
        }
      }
    }
  }
  auVar18 = func_0x00f78e5c();
  puVar8 = auVar18._8_8_;
  plVar3 = auVar18._0_8_;
  pcStack_148 = Atlas_Contexts_GameContextBase__HandleUsableHitPlayer;
  puVar10 = puVar9;
  uStack_180 = uVar16;
  uStack_178 = unaff_x23;
  plStack_170 = plVar13;
  lStack_168 = lVar14;
  lStack_160 = lVar4;
  lStack_158 = lVar6;
  pppuStack_150 = &pppuStack_100;
  if ((bRam0000000003eb51b8 & 1) == 0) {
    func_0x00f78a20(0x3d69658);
    bRam0000000003eb51b8 = 1;
  }
  if (((plVar3[3] != 0) &&
      (puVar10 = puVar9, /*Atlas.Stats.AtlasStats$$OnUsableHitPlayer*/ func_0x0146ecbc(plVar3[3],puVar8,puVar9,param_4,0),
      puVar9 != (undefined8 *)0x0)) && (lVar6 = puVar9[2], lVar6 != 0)) {
    uStack_198 = *(undefined8 *)(lVar6 + 0x50);
    uStack_1a0 = *(undefined8 *)(lVar6 + 0x48);
    uStack_188 = *(undefined8 *)(lVar6 + 0x60);
    uStack_190 = *(undefined8 *)(lVar6 + 0x58);
    iVar2 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&uStack_1a0,0);
    if ((iVar2 == 0) || (puVar9 == puVar8)) {
      return;
    }
    iVar2 = (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
    if ((plVar3[0x18] != 0) && (lVar6 = *(long *)(plVar3[0x18] + 0x20), lVar6 != 0)) {
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_1b8,lVar6,0);
      *(int *)(puVar9 + 0xf) = *(int *)(puVar9 + 0xf) + iVar2;
      puVar9[0x11] = uStack_1b0;
      puVar9[0x10] = uStack_1b8;
      puVar9[0x12] = uStack_1a8;
      if (puVar9[2] != 0) {
        if (*(int *)(puVar9[2] + 0x50) == 0) {
          uVar16 = (**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
          puVar10 = (undefined8 *)0x0;
          iVar2 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar16,/*STR('BattleGameContext')*/ uRam0000000003d69658);
          if (iVar2 != 0) {
            if (plVar3[3] == 0) goto LAB_0159dcf8;
            /*Atlas.Stats.AtlasStats$$RecordBattlePoints*/ func_0x0146e660(plVar3[3],*(undefined4 *)(puVar9 + 0xf),0);
          }
        }
        if (plVar3[0x46] == 0) {
          return;
        }
        /*Atlas.Arcade.ArcadeEvent$$UsableHitPlayer*/ func_0x0144def8(plVar3[0x46],puVar8,puVar9,param_4,0);
        return;
      }
    }
  }
LAB_0159dcf8:
  auVar19 = func_0x00f78af4();
  lVar6 = auVar19._0_8_;
  uVar17 = puVar10[1];
  uVar7 = *puVar10;
  uVar16 = puVar10[2];
  *(int *)(lVar6 + 0x78) = *(int *)(lVar6 + 0x78) + auVar19._8_4_;
  *(undefined8 *)(lVar6 + 0x88) = uVar17;
  *(undefined8 *)(lVar6 + 0x80) = uVar7;
  *(undefined8 *)(lVar6 + 0x90) = uVar16;
  return;
}



// ============================================================
// RVA: 0x159d664 | Atlas.Gameplay.Player.GameContextPlayerManager.remove_OnBeforeRespawn
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnBeforeRespawn
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  long *plStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 ***pppuStack_120;
  code *pcStack_118;
  undefined8 ***pppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb51f6 & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51f6 = 1;
  }
  plVar13 = (long *)(param_1 + 0x88);
  lVar6 = *plVar13;
  while ((plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar6,param_2,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar4 = func_0x00ff0f44(plVar13,plVar3,lVar6);
    bVar1 = lVar6 == lVar4;
    lVar6 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar18 = func_0x00f78e5c(plVar3);
  uVar16 = auVar18._8_8_;
  uStack_60 = 0x3d27700;
  puStack_38 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHoppedOver;
  lStack_58 = lVar6;
  plStack_50 = plVar13;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb51fe & 1) == 0) {
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51fe = 1;
  }
  plVar13 = (long *)(auVar18._0_8_ + 0xa8);
  lVar6 = *plVar13;
  while ((plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar6,uVar16,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
    lVar4 = func_0x00ff0f44(plVar13,plVar3,lVar6);
    bVar1 = lVar6 == lVar4;
    lVar6 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar18 = func_0x00f78e5c(plVar3);
  uVar7 = auVar18._8_8_;
  uStack_90 = 0x3d27738;
  puStack_68 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitShield;
  lStack_88 = lVar6;
  plStack_80 = plVar13;
  uStack_78 = uVar16;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb51fc & 1) == 0) {
    func_0x00f78a20(0x3d27730);
    bRam0000000003eb51fc = 1;
  }
  plVar13 = (long *)(auVar18._0_8_ + 0xa0);
  lVar6 = *plVar13;
  while ((plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar6,uVar7,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
    lVar4 = func_0x00ff0f44(plVar13,plVar3,lVar6);
    bVar1 = lVar6 == lVar4;
    lVar6 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar18 = func_0x00f78e5c(plVar3);
  uStack_c0 = 0x3d27730;
  puStack_98 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitPlayer;
  lStack_b8 = lVar6;
  plStack_b0 = plVar13;
  uStack_a8 = uVar7;
  pppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eb51fa & 1) == 0) {
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb51fa = 1;
  }
  plVar13 = (long *)0x3d27728;
  plVar3 = (long *)(auVar18._0_8_ + 0x98);
  lVar6 = *plVar3;
  while( true ) {
    puVar9 = (undefined8 *)0x0;
    plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar6,auVar18._8_8_);
    if ((plVar5 != (long *)0x0) && (*plVar5 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728)) break;
    lVar4 = func_0x00ff0f44(plVar3,plVar5,lVar6);
    bVar1 = lVar6 == lVar4;
    lVar6 = lVar4;
    if (bVar1) {
      return;
    }
  }
  lVar6 = func_0x00f78e5c(plVar5);
  puStack_c8 = &Atlas_Gameplay_Player_GameContextPlayerManager__DeInit;
  lVar4 = 0x3eb5000;
  pppuStack_d0 = &pppuStack_a0;
  if ((bRam0000000003eb5204 & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d2a1c8);
    func_0x00f78a20(0x3d1b4e0);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d43378);
    func_0x00f78a20(0x3d57230);
    func_0x00f78a20(0x3d57238);
    func_0x00f78a20(0x3d57240);
    bRam0000000003eb5204 = 1;
  }
  lVar14 = *(long *)(lVar6 + 0x28);
  if (lVar14 == 0) {
code_r0x0159db7c:
    func_0x00f78af4();
    uVar16 = unaff_x24;
code_r0x0159db80:
    uVar7 = func_0x00f78b24();
    func_0x00f78ac0(uVar7,0);
  }
  else {
    plVar13 = (long *)(lVar6 + 0x10);
    uVar11 = *(uint *)(lVar14 + 0x18);
    if (0 < (int)uVar11) {
      unaff_x23 = 0;
      unaff_x24 = 0x3d43378;
      do {
        uVar15 = (uint)unaff_x23;
        uVar16 = unaff_x24;
        if (uVar11 <= uVar15) goto code_r0x0159db80;
        if (*plVar13 == 0) goto code_r0x0159db7c;
        lVar4 = *(long *)(lVar14 + (long)(int)uVar15 * 8 + 0x20);
        puVar9 = puRam0000000003d43378;
        /*Core.Actors.ActorManager$$TryRemoveFromGroup<object>*/ func_0x0171ee50(*plVar13,lVar4);
        if (lVar4 == 0) goto code_r0x0159db7c;
        Atlas_Gameplay_Player_GameContextPlayer__DeInit(lVar4);
        unaff_x23 = (ulong)(uVar15 + 1);
        uVar11 = *(uint *)(lVar14 + 0x18);
      } while ((int)(uVar15 + 1) < (int)uVar11);
    }
    if (((*(long *)(lVar6 + 0x20) == 0) ||
        (lVar12 = *(long *)(*(long *)(lVar6 + 0x20) + 0x20), lVar12 == 0)) ||
       (unaff_x23 = *(ulong *)(lVar12 + 0x10), unaff_x23 == 0)) goto code_r0x0159db7c;
    uVar16 = 0x3d1b4e8;
    unaff_x24 = 0x3d1b4e8;
    lVar4 = *(long *)(unaff_x23 + 0x18);
    lVar14 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
    param_4 = uRam0000000003d2a1d8;
    /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(lVar14,lVar6,uRam0000000003d57238,uRam0000000003d2a1d8);
    puVar9 = (undefined8 *)0x0;
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,lVar14);
    if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
      *(long **)(unaff_x23 + 0x18) = plVar3;
      if ((*(long *)(lVar6 + 0x20) == 0) ||
         ((lVar12 = *(long *)(*(long *)(lVar6 + 0x20) + 0x20), lVar12 == 0 ||
          (unaff_x23 = *(ulong *)(lVar12 + 0x10), unaff_x23 == 0)))) goto code_r0x0159db7c;
      uVar16 = 0x3d1b3b0;
      unaff_x24 = 0x3d1b3b0;
      lVar4 = *(long *)(unaff_x23 + 0x70);
      lVar14 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
      param_4 = uRam0000000003d29f28;
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar14,lVar6,uRam0000000003d57240,uRam0000000003d29f28);
      puVar9 = (undefined8 *)0x0;
      plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,lVar14);
      if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
        *(long **)(unaff_x23 + 0x70) = plVar3;
        if (((*(long *)(lVar6 + 0x20) == 0) ||
            (lVar12 = *(long *)(*(long *)(lVar6 + 0x20) + 0x20), lVar12 == 0)) ||
           (unaff_x23 = *(ulong *)(lVar12 + 0x10), unaff_x23 == 0)) goto code_r0x0159db7c;
        uVar16 = 0x3d1b4e0;
        lVar4 = *(long *)(unaff_x23 + 0x28);
        lVar14 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
        param_4 = uRam0000000003d2a1c8;
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar14,lVar6,uRam0000000003d57230,uRam0000000003d2a1c8);
        puVar9 = (undefined8 *)0x0;
        plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,lVar14);
        if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) {
          *(long **)(unaff_x23 + 0x28) = plVar3;
          *(undefined1 *)(lVar6 + 0x50) = 0;
          *(undefined8 *)(lVar6 + 0x18) = 0;
          *plVar13 = 0;
          *(undefined8 *)(lVar6 + 0x28) = 0;
          *(undefined8 *)(lVar6 + 0x20) = 0;
          return;
        }
      }
    }
  }
  auVar18 = func_0x00f78e5c();
  puVar8 = auVar18._8_8_;
  plVar3 = auVar18._0_8_;
  pcStack_118 = Atlas_Contexts_GameContextBase__HandleUsableHitPlayer;
  puVar10 = puVar9;
  uStack_150 = uVar16;
  uStack_148 = unaff_x23;
  plStack_140 = plVar13;
  lStack_138 = lVar14;
  lStack_130 = lVar4;
  lStack_128 = lVar6;
  pppuStack_120 = &pppuStack_d0;
  if ((bRam0000000003eb51b8 & 1) == 0) {
    func_0x00f78a20(0x3d69658);
    bRam0000000003eb51b8 = 1;
  }
  if (((plVar3[3] != 0) &&
      (puVar10 = puVar9, /*Atlas.Stats.AtlasStats$$OnUsableHitPlayer*/ func_0x0146ecbc(plVar3[3],puVar8,puVar9,param_4,0),
      puVar9 != (undefined8 *)0x0)) && (lVar6 = puVar9[2], lVar6 != 0)) {
    uStack_168 = *(undefined8 *)(lVar6 + 0x50);
    uStack_170 = *(undefined8 *)(lVar6 + 0x48);
    uStack_158 = *(undefined8 *)(lVar6 + 0x60);
    uStack_160 = *(undefined8 *)(lVar6 + 0x58);
    iVar2 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&uStack_170,0);
    if ((iVar2 == 0) || (puVar9 == puVar8)) {
      return;
    }
    iVar2 = (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
    if ((plVar3[0x18] != 0) && (lVar6 = *(long *)(plVar3[0x18] + 0x20), lVar6 != 0)) {
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_188,lVar6,0);
      *(int *)(puVar9 + 0xf) = *(int *)(puVar9 + 0xf) + iVar2;
      puVar9[0x11] = uStack_180;
      puVar9[0x10] = uStack_188;
      puVar9[0x12] = uStack_178;
      if (puVar9[2] != 0) {
        if (*(int *)(puVar9[2] + 0x50) == 0) {
          uVar16 = (**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
          puVar10 = (undefined8 *)0x0;
          iVar2 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar16,/*STR('BattleGameContext')*/ uRam0000000003d69658);
          if (iVar2 != 0) {
            if (plVar3[3] == 0) goto LAB_0159dcf8;
            /*Atlas.Stats.AtlasStats$$RecordBattlePoints*/ func_0x0146e660(plVar3[3],*(undefined4 *)(puVar9 + 0xf),0);
          }
        }
        if (plVar3[0x46] == 0) {
          return;
        }
        /*Atlas.Arcade.ArcadeEvent$$UsableHitPlayer*/ func_0x0144def8(plVar3[0x46],puVar8,puVar9,param_4,0);
        return;
      }
    }
  }
LAB_0159dcf8:
  auVar19 = func_0x00f78af4();
  lVar6 = auVar19._0_8_;
  uVar17 = puVar10[1];
  uVar7 = *puVar10;
  uVar16 = puVar10[2];
  *(int *)(lVar6 + 0x78) = *(int *)(lVar6 + 0x78) + auVar19._8_4_;
  *(undefined8 *)(lVar6 + 0x88) = uVar17;
  *(undefined8 *)(lVar6 + 0x80) = uVar7;
  *(undefined8 *)(lVar6 + 0x90) = uVar16;
  return;
}



// ============================================================
// RVA: 0x159d704 | Atlas.Gameplay.Player.GameContextPlayerManager.remove_OnUsableHoppedOver
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHoppedOver
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  long *plStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 ***pppuStack_f0;
  code *pcStack_e8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb51fe & 1) == 0) {
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51fe = 1;
  }
  plVar13 = (long *)(param_1 + 0xa8);
  lVar6 = *plVar13;
  while ((plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar6,param_2,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
    lVar4 = func_0x00ff0f44(plVar13,plVar3,lVar6);
    bVar1 = lVar6 == lVar4;
    lVar6 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar18 = func_0x00f78e5c(plVar3);
  uVar16 = auVar18._8_8_;
  uStack_60 = 0x3d27738;
  puStack_38 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitShield;
  lStack_58 = lVar6;
  plStack_50 = plVar13;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb51fc & 1) == 0) {
    func_0x00f78a20(0x3d27730);
    bRam0000000003eb51fc = 1;
  }
  plVar13 = (long *)(auVar18._0_8_ + 0xa0);
  lVar6 = *plVar13;
  while ((plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar6,uVar16,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
    lVar4 = func_0x00ff0f44(plVar13,plVar3,lVar6);
    bVar1 = lVar6 == lVar4;
    lVar6 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar18 = func_0x00f78e5c(plVar3);
  uStack_90 = 0x3d27730;
  puStack_68 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitPlayer;
  lStack_88 = lVar6;
  plStack_80 = plVar13;
  uStack_78 = uVar16;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb51fa & 1) == 0) {
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb51fa = 1;
  }
  plVar13 = (long *)0x3d27728;
  plVar3 = (long *)(auVar18._0_8_ + 0x98);
  lVar6 = *plVar3;
  while( true ) {
    puVar9 = (undefined8 *)0x0;
    plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar6,auVar18._8_8_);
    if ((plVar5 != (long *)0x0) && (*plVar5 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728)) break;
    lVar4 = func_0x00ff0f44(plVar3,plVar5,lVar6);
    bVar1 = lVar6 == lVar4;
    lVar6 = lVar4;
    if (bVar1) {
      return;
    }
  }
  lVar6 = func_0x00f78e5c(plVar5);
  puStack_98 = &Atlas_Gameplay_Player_GameContextPlayerManager__DeInit;
  lVar4 = 0x3eb5000;
  pppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eb5204 & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d2a1c8);
    func_0x00f78a20(0x3d1b4e0);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d43378);
    func_0x00f78a20(0x3d57230);
    func_0x00f78a20(0x3d57238);
    func_0x00f78a20(0x3d57240);
    bRam0000000003eb5204 = 1;
  }
  lVar14 = *(long *)(lVar6 + 0x28);
  if (lVar14 == 0) {
code_r0x0159db7c:
    func_0x00f78af4();
    uVar16 = unaff_x24;
code_r0x0159db80:
    uVar7 = func_0x00f78b24();
    func_0x00f78ac0(uVar7,0);
  }
  else {
    plVar13 = (long *)(lVar6 + 0x10);
    uVar11 = *(uint *)(lVar14 + 0x18);
    if (0 < (int)uVar11) {
      unaff_x23 = 0;
      unaff_x24 = 0x3d43378;
      do {
        uVar15 = (uint)unaff_x23;
        uVar16 = unaff_x24;
        if (uVar11 <= uVar15) goto code_r0x0159db80;
        if (*plVar13 == 0) goto code_r0x0159db7c;
        lVar4 = *(long *)(lVar14 + (long)(int)uVar15 * 8 + 0x20);
        puVar9 = puRam0000000003d43378;
        /*Core.Actors.ActorManager$$TryRemoveFromGroup<object>*/ func_0x0171ee50(*plVar13,lVar4);
        if (lVar4 == 0) goto code_r0x0159db7c;
        Atlas_Gameplay_Player_GameContextPlayer__DeInit(lVar4);
        unaff_x23 = (ulong)(uVar15 + 1);
        uVar11 = *(uint *)(lVar14 + 0x18);
      } while ((int)(uVar15 + 1) < (int)uVar11);
    }
    if (((*(long *)(lVar6 + 0x20) == 0) ||
        (lVar12 = *(long *)(*(long *)(lVar6 + 0x20) + 0x20), lVar12 == 0)) ||
       (unaff_x23 = *(ulong *)(lVar12 + 0x10), unaff_x23 == 0)) goto code_r0x0159db7c;
    uVar16 = 0x3d1b4e8;
    unaff_x24 = 0x3d1b4e8;
    lVar4 = *(long *)(unaff_x23 + 0x18);
    lVar14 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
    param_4 = uRam0000000003d2a1d8;
    /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(lVar14,lVar6,uRam0000000003d57238,uRam0000000003d2a1d8);
    puVar9 = (undefined8 *)0x0;
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,lVar14);
    if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
      *(long **)(unaff_x23 + 0x18) = plVar3;
      if ((*(long *)(lVar6 + 0x20) == 0) ||
         ((lVar12 = *(long *)(*(long *)(lVar6 + 0x20) + 0x20), lVar12 == 0 ||
          (unaff_x23 = *(ulong *)(lVar12 + 0x10), unaff_x23 == 0)))) goto code_r0x0159db7c;
      uVar16 = 0x3d1b3b0;
      unaff_x24 = 0x3d1b3b0;
      lVar4 = *(long *)(unaff_x23 + 0x70);
      lVar14 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
      param_4 = uRam0000000003d29f28;
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar14,lVar6,uRam0000000003d57240,uRam0000000003d29f28);
      puVar9 = (undefined8 *)0x0;
      plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,lVar14);
      if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
        *(long **)(unaff_x23 + 0x70) = plVar3;
        if (((*(long *)(lVar6 + 0x20) == 0) ||
            (lVar12 = *(long *)(*(long *)(lVar6 + 0x20) + 0x20), lVar12 == 0)) ||
           (unaff_x23 = *(ulong *)(lVar12 + 0x10), unaff_x23 == 0)) goto code_r0x0159db7c;
        uVar16 = 0x3d1b4e0;
        lVar4 = *(long *)(unaff_x23 + 0x28);
        lVar14 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
        param_4 = uRam0000000003d2a1c8;
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar14,lVar6,uRam0000000003d57230,uRam0000000003d2a1c8);
        puVar9 = (undefined8 *)0x0;
        plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,lVar14);
        if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) {
          *(long **)(unaff_x23 + 0x28) = plVar3;
          *(undefined1 *)(lVar6 + 0x50) = 0;
          *(undefined8 *)(lVar6 + 0x18) = 0;
          *plVar13 = 0;
          *(undefined8 *)(lVar6 + 0x28) = 0;
          *(undefined8 *)(lVar6 + 0x20) = 0;
          return;
        }
      }
    }
  }
  auVar18 = func_0x00f78e5c();
  puVar8 = auVar18._8_8_;
  plVar3 = auVar18._0_8_;
  pcStack_e8 = Atlas_Contexts_GameContextBase__HandleUsableHitPlayer;
  puVar10 = puVar9;
  uStack_120 = uVar16;
  uStack_118 = unaff_x23;
  plStack_110 = plVar13;
  lStack_108 = lVar14;
  lStack_100 = lVar4;
  lStack_f8 = lVar6;
  pppuStack_f0 = &pppuStack_a0;
  if ((bRam0000000003eb51b8 & 1) == 0) {
    func_0x00f78a20(0x3d69658);
    bRam0000000003eb51b8 = 1;
  }
  if (((plVar3[3] != 0) &&
      (puVar10 = puVar9, /*Atlas.Stats.AtlasStats$$OnUsableHitPlayer*/ func_0x0146ecbc(plVar3[3],puVar8,puVar9,param_4,0),
      puVar9 != (undefined8 *)0x0)) && (lVar6 = puVar9[2], lVar6 != 0)) {
    uStack_138 = *(undefined8 *)(lVar6 + 0x50);
    uStack_140 = *(undefined8 *)(lVar6 + 0x48);
    uStack_128 = *(undefined8 *)(lVar6 + 0x60);
    uStack_130 = *(undefined8 *)(lVar6 + 0x58);
    iVar2 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&uStack_140,0);
    if ((iVar2 == 0) || (puVar9 == puVar8)) {
      return;
    }
    iVar2 = (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
    if ((plVar3[0x18] != 0) && (lVar6 = *(long *)(plVar3[0x18] + 0x20), lVar6 != 0)) {
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_158,lVar6,0);
      *(int *)(puVar9 + 0xf) = *(int *)(puVar9 + 0xf) + iVar2;
      puVar9[0x11] = uStack_150;
      puVar9[0x10] = uStack_158;
      puVar9[0x12] = uStack_148;
      if (puVar9[2] != 0) {
        if (*(int *)(puVar9[2] + 0x50) == 0) {
          uVar16 = (**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
          puVar10 = (undefined8 *)0x0;
          iVar2 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar16,/*STR('BattleGameContext')*/ uRam0000000003d69658);
          if (iVar2 != 0) {
            if (plVar3[3] == 0) goto LAB_0159dcf8;
            /*Atlas.Stats.AtlasStats$$RecordBattlePoints*/ func_0x0146e660(plVar3[3],*(undefined4 *)(puVar9 + 0xf),0);
          }
        }
        if (plVar3[0x46] == 0) {
          return;
        }
        /*Atlas.Arcade.ArcadeEvent$$UsableHitPlayer*/ func_0x0144def8(plVar3[0x46],puVar8,puVar9,param_4,0);
        return;
      }
    }
  }
LAB_0159dcf8:
  auVar19 = func_0x00f78af4();
  lVar6 = auVar19._0_8_;
  uVar17 = puVar10[1];
  uVar7 = *puVar10;
  uVar16 = puVar10[2];
  *(int *)(lVar6 + 0x78) = *(int *)(lVar6 + 0x78) + auVar19._8_4_;
  *(undefined8 *)(lVar6 + 0x88) = uVar17;
  *(undefined8 *)(lVar6 + 0x80) = uVar7;
  *(undefined8 *)(lVar6 + 0x90) = uVar16;
  return;
}



// ============================================================
// RVA: 0x159d7a4 | Atlas.Gameplay.Player.GameContextPlayerManager.remove_OnUsableHitShield
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitShield
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  long *plStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 ***pppuStack_c0;
  code *pcStack_b8;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb51fc & 1) == 0) {
    func_0x00f78a20(0x3d27730);
    bRam0000000003eb51fc = 1;
  }
  plVar13 = (long *)(param_1 + 0xa0);
  lVar6 = *plVar13;
  while ((plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar6,param_2,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
    lVar4 = func_0x00ff0f44(plVar13,plVar3,lVar6);
    bVar1 = lVar6 == lVar4;
    lVar6 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar18 = func_0x00f78e5c(plVar3);
  uStack_60 = 0x3d27730;
  puStack_38 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitPlayer;
  lStack_58 = lVar6;
  plStack_50 = plVar13;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb51fa & 1) == 0) {
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb51fa = 1;
  }
  plVar13 = (long *)0x3d27728;
  plVar3 = (long *)(auVar18._0_8_ + 0x98);
  lVar6 = *plVar3;
  while( true ) {
    puVar9 = (undefined8 *)0x0;
    plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar6,auVar18._8_8_);
    if ((plVar5 != (long *)0x0) && (*plVar5 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728)) break;
    lVar4 = func_0x00ff0f44(plVar3,plVar5,lVar6);
    bVar1 = lVar6 == lVar4;
    lVar6 = lVar4;
    if (bVar1) {
      return;
    }
  }
  lVar6 = func_0x00f78e5c(plVar5);
  puStack_68 = &Atlas_Gameplay_Player_GameContextPlayerManager__DeInit;
  lVar4 = 0x3eb5000;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb5204 & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d2a1c8);
    func_0x00f78a20(0x3d1b4e0);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d43378);
    func_0x00f78a20(0x3d57230);
    func_0x00f78a20(0x3d57238);
    func_0x00f78a20(0x3d57240);
    bRam0000000003eb5204 = 1;
  }
  lVar14 = *(long *)(lVar6 + 0x28);
  if (lVar14 == 0) {
code_r0x0159db7c:
    func_0x00f78af4();
    uVar16 = unaff_x24;
code_r0x0159db80:
    uVar7 = func_0x00f78b24();
    func_0x00f78ac0(uVar7,0);
  }
  else {
    plVar13 = (long *)(lVar6 + 0x10);
    uVar11 = *(uint *)(lVar14 + 0x18);
    if (0 < (int)uVar11) {
      unaff_x23 = 0;
      unaff_x24 = 0x3d43378;
      do {
        uVar15 = (uint)unaff_x23;
        uVar16 = unaff_x24;
        if (uVar11 <= uVar15) goto code_r0x0159db80;
        if (*plVar13 == 0) goto code_r0x0159db7c;
        lVar4 = *(long *)(lVar14 + (long)(int)uVar15 * 8 + 0x20);
        puVar9 = puRam0000000003d43378;
        /*Core.Actors.ActorManager$$TryRemoveFromGroup<object>*/ func_0x0171ee50(*plVar13,lVar4);
        if (lVar4 == 0) goto code_r0x0159db7c;
        Atlas_Gameplay_Player_GameContextPlayer__DeInit(lVar4);
        unaff_x23 = (ulong)(uVar15 + 1);
        uVar11 = *(uint *)(lVar14 + 0x18);
      } while ((int)(uVar15 + 1) < (int)uVar11);
    }
    if (((*(long *)(lVar6 + 0x20) == 0) ||
        (lVar12 = *(long *)(*(long *)(lVar6 + 0x20) + 0x20), lVar12 == 0)) ||
       (unaff_x23 = *(ulong *)(lVar12 + 0x10), unaff_x23 == 0)) goto code_r0x0159db7c;
    uVar16 = 0x3d1b4e8;
    unaff_x24 = 0x3d1b4e8;
    lVar4 = *(long *)(unaff_x23 + 0x18);
    lVar14 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
    param_4 = uRam0000000003d2a1d8;
    /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(lVar14,lVar6,uRam0000000003d57238,uRam0000000003d2a1d8);
    puVar9 = (undefined8 *)0x0;
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,lVar14);
    if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
      *(long **)(unaff_x23 + 0x18) = plVar3;
      if ((*(long *)(lVar6 + 0x20) == 0) ||
         ((lVar12 = *(long *)(*(long *)(lVar6 + 0x20) + 0x20), lVar12 == 0 ||
          (unaff_x23 = *(ulong *)(lVar12 + 0x10), unaff_x23 == 0)))) goto code_r0x0159db7c;
      uVar16 = 0x3d1b3b0;
      unaff_x24 = 0x3d1b3b0;
      lVar4 = *(long *)(unaff_x23 + 0x70);
      lVar14 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
      param_4 = uRam0000000003d29f28;
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar14,lVar6,uRam0000000003d57240,uRam0000000003d29f28);
      puVar9 = (undefined8 *)0x0;
      plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,lVar14);
      if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
        *(long **)(unaff_x23 + 0x70) = plVar3;
        if (((*(long *)(lVar6 + 0x20) == 0) ||
            (lVar12 = *(long *)(*(long *)(lVar6 + 0x20) + 0x20), lVar12 == 0)) ||
           (unaff_x23 = *(ulong *)(lVar12 + 0x10), unaff_x23 == 0)) goto code_r0x0159db7c;
        uVar16 = 0x3d1b4e0;
        lVar4 = *(long *)(unaff_x23 + 0x28);
        lVar14 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
        param_4 = uRam0000000003d2a1c8;
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar14,lVar6,uRam0000000003d57230,uRam0000000003d2a1c8);
        puVar9 = (undefined8 *)0x0;
        plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,lVar14);
        if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) {
          *(long **)(unaff_x23 + 0x28) = plVar3;
          *(undefined1 *)(lVar6 + 0x50) = 0;
          *(undefined8 *)(lVar6 + 0x18) = 0;
          *plVar13 = 0;
          *(undefined8 *)(lVar6 + 0x28) = 0;
          *(undefined8 *)(lVar6 + 0x20) = 0;
          return;
        }
      }
    }
  }
  auVar18 = func_0x00f78e5c();
  puVar8 = auVar18._8_8_;
  plVar3 = auVar18._0_8_;
  pcStack_b8 = Atlas_Contexts_GameContextBase__HandleUsableHitPlayer;
  puVar10 = puVar9;
  uStack_f0 = uVar16;
  uStack_e8 = unaff_x23;
  plStack_e0 = plVar13;
  lStack_d8 = lVar14;
  lStack_d0 = lVar4;
  lStack_c8 = lVar6;
  pppuStack_c0 = &ppuStack_70;
  if ((bRam0000000003eb51b8 & 1) == 0) {
    func_0x00f78a20(0x3d69658);
    bRam0000000003eb51b8 = 1;
  }
  if (((plVar3[3] != 0) &&
      (puVar10 = puVar9, /*Atlas.Stats.AtlasStats$$OnUsableHitPlayer*/ func_0x0146ecbc(plVar3[3],puVar8,puVar9,param_4,0),
      puVar9 != (undefined8 *)0x0)) && (lVar6 = puVar9[2], lVar6 != 0)) {
    uStack_108 = *(undefined8 *)(lVar6 + 0x50);
    uStack_110 = *(undefined8 *)(lVar6 + 0x48);
    uStack_f8 = *(undefined8 *)(lVar6 + 0x60);
    uStack_100 = *(undefined8 *)(lVar6 + 0x58);
    iVar2 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&uStack_110,0);
    if ((iVar2 == 0) || (puVar9 == puVar8)) {
      return;
    }
    iVar2 = (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
    if ((plVar3[0x18] != 0) && (lVar6 = *(long *)(plVar3[0x18] + 0x20), lVar6 != 0)) {
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_128,lVar6,0);
      *(int *)(puVar9 + 0xf) = *(int *)(puVar9 + 0xf) + iVar2;
      puVar9[0x11] = uStack_120;
      puVar9[0x10] = uStack_128;
      puVar9[0x12] = uStack_118;
      if (puVar9[2] != 0) {
        if (*(int *)(puVar9[2] + 0x50) == 0) {
          uVar16 = (**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
          puVar10 = (undefined8 *)0x0;
          iVar2 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar16,/*STR('BattleGameContext')*/ uRam0000000003d69658);
          if (iVar2 != 0) {
            if (plVar3[3] == 0) goto LAB_0159dcf8;
            /*Atlas.Stats.AtlasStats$$RecordBattlePoints*/ func_0x0146e660(plVar3[3],*(undefined4 *)(puVar9 + 0xf),0);
          }
        }
        if (plVar3[0x46] == 0) {
          return;
        }
        /*Atlas.Arcade.ArcadeEvent$$UsableHitPlayer*/ func_0x0144def8(plVar3[0x46],puVar8,puVar9,param_4,0);
        return;
      }
    }
  }
LAB_0159dcf8:
  auVar19 = func_0x00f78af4();
  lVar6 = auVar19._0_8_;
  uVar17 = puVar10[1];
  uVar7 = *puVar10;
  uVar16 = puVar10[2];
  *(int *)(lVar6 + 0x78) = *(int *)(lVar6 + 0x78) + auVar19._8_4_;
  *(undefined8 *)(lVar6 + 0x88) = uVar17;
  *(undefined8 *)(lVar6 + 0x80) = uVar7;
  *(undefined8 *)(lVar6 + 0x90) = uVar16;
  return;
}



// ============================================================
// RVA: 0x159d844 | Atlas.Gameplay.Player.GameContextPlayerManager.remove_OnUsableHitPlayer
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitPlayer
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb51fa & 1) == 0) {
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb51fa = 1;
  }
  plVar13 = (long *)0x3d27728;
  lVar5 = *(long *)(param_1 + 0x98);
  while( true ) {
    puVar8 = (undefined8 *)0x0;
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,param_2);
    if ((plVar3 != (long *)0x0) && (*plVar3 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728)) break;
    lVar4 = func_0x00ff0f44((long *)(param_1 + 0x98),plVar3,lVar5);
    bVar1 = lVar5 == lVar4;
    lVar5 = lVar4;
    if (bVar1) {
      return;
    }
  }
  lVar5 = func_0x00f78e5c(plVar3);
  puStack_38 = &Atlas_Gameplay_Player_GameContextPlayerManager__DeInit;
  lVar4 = 0x3eb5000;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5204 & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d2a1c8);
    func_0x00f78a20(0x3d1b4e0);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d43378);
    func_0x00f78a20(0x3d57230);
    func_0x00f78a20(0x3d57238);
    func_0x00f78a20(0x3d57240);
    bRam0000000003eb5204 = 1;
  }
  lVar12 = *(long *)(lVar5 + 0x28);
  if (lVar12 == 0) {
code_r0x0159db7c:
    func_0x00f78af4();
    uVar15 = unaff_x24;
code_r0x0159db80:
    uVar6 = func_0x00f78b24();
    func_0x00f78ac0(uVar6,0);
  }
  else {
    plVar13 = (long *)(lVar5 + 0x10);
    uVar10 = *(uint *)(lVar12 + 0x18);
    if (0 < (int)uVar10) {
      unaff_x23 = 0;
      unaff_x24 = 0x3d43378;
      do {
        uVar14 = (uint)unaff_x23;
        uVar15 = unaff_x24;
        if (uVar10 <= uVar14) goto code_r0x0159db80;
        if (*plVar13 == 0) goto code_r0x0159db7c;
        lVar4 = *(long *)(lVar12 + (long)(int)uVar14 * 8 + 0x20);
        puVar8 = puRam0000000003d43378;
        /*Core.Actors.ActorManager$$TryRemoveFromGroup<object>*/ func_0x0171ee50(*plVar13,lVar4);
        if (lVar4 == 0) goto code_r0x0159db7c;
        Atlas_Gameplay_Player_GameContextPlayer__DeInit(lVar4);
        unaff_x23 = (ulong)(uVar14 + 1);
        uVar10 = *(uint *)(lVar12 + 0x18);
      } while ((int)(uVar14 + 1) < (int)uVar10);
    }
    if (((*(long *)(lVar5 + 0x20) == 0) ||
        (lVar11 = *(long *)(*(long *)(lVar5 + 0x20) + 0x20), lVar11 == 0)) ||
       (unaff_x23 = *(ulong *)(lVar11 + 0x10), unaff_x23 == 0)) goto code_r0x0159db7c;
    uVar15 = 0x3d1b4e8;
    unaff_x24 = 0x3d1b4e8;
    lVar4 = *(long *)(unaff_x23 + 0x18);
    lVar12 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
    param_4 = uRam0000000003d2a1d8;
    /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(lVar12,lVar5,uRam0000000003d57238,uRam0000000003d2a1d8);
    puVar8 = (undefined8 *)0x0;
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,lVar12);
    if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
      *(long **)(unaff_x23 + 0x18) = plVar3;
      if ((*(long *)(lVar5 + 0x20) == 0) ||
         ((lVar11 = *(long *)(*(long *)(lVar5 + 0x20) + 0x20), lVar11 == 0 ||
          (unaff_x23 = *(ulong *)(lVar11 + 0x10), unaff_x23 == 0)))) goto code_r0x0159db7c;
      uVar15 = 0x3d1b3b0;
      unaff_x24 = 0x3d1b3b0;
      lVar4 = *(long *)(unaff_x23 + 0x70);
      lVar12 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
      param_4 = uRam0000000003d29f28;
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar12,lVar5,uRam0000000003d57240,uRam0000000003d29f28);
      puVar8 = (undefined8 *)0x0;
      plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,lVar12);
      if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
        *(long **)(unaff_x23 + 0x70) = plVar3;
        if (((*(long *)(lVar5 + 0x20) == 0) ||
            (lVar11 = *(long *)(*(long *)(lVar5 + 0x20) + 0x20), lVar11 == 0)) ||
           (unaff_x23 = *(ulong *)(lVar11 + 0x10), unaff_x23 == 0)) goto code_r0x0159db7c;
        uVar15 = 0x3d1b4e0;
        lVar4 = *(long *)(unaff_x23 + 0x28);
        lVar12 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
        param_4 = uRam0000000003d2a1c8;
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar12,lVar5,uRam0000000003d57230,uRam0000000003d2a1c8);
        puVar8 = (undefined8 *)0x0;
        plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,lVar12);
        if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) {
          *(long **)(unaff_x23 + 0x28) = plVar3;
          *(undefined1 *)(lVar5 + 0x50) = 0;
          *(undefined8 *)(lVar5 + 0x18) = 0;
          *plVar13 = 0;
          *(undefined8 *)(lVar5 + 0x28) = 0;
          *(undefined8 *)(lVar5 + 0x20) = 0;
          return;
        }
      }
    }
  }
  auVar17 = func_0x00f78e5c();
  puVar7 = auVar17._8_8_;
  plVar3 = auVar17._0_8_;
  pcStack_88 = Atlas_Contexts_GameContextBase__HandleUsableHitPlayer;
  puVar9 = puVar8;
  uStack_c0 = uVar15;
  uStack_b8 = unaff_x23;
  plStack_b0 = plVar13;
  lStack_a8 = lVar12;
  lStack_a0 = lVar4;
  lStack_98 = lVar5;
  ppuStack_90 = &puStack_40;
  if ((bRam0000000003eb51b8 & 1) == 0) {
    func_0x00f78a20(0x3d69658);
    bRam0000000003eb51b8 = 1;
  }
  if (((plVar3[3] != 0) &&
      (puVar9 = puVar8, /*Atlas.Stats.AtlasStats$$OnUsableHitPlayer*/ func_0x0146ecbc(plVar3[3],puVar7,puVar8,param_4,0),
      puVar8 != (undefined8 *)0x0)) && (lVar5 = puVar8[2], lVar5 != 0)) {
    uStack_d8 = *(undefined8 *)(lVar5 + 0x50);
    uStack_e0 = *(undefined8 *)(lVar5 + 0x48);
    uStack_c8 = *(undefined8 *)(lVar5 + 0x60);
    uStack_d0 = *(undefined8 *)(lVar5 + 0x58);
    iVar2 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&uStack_e0,0);
    if ((iVar2 == 0) || (puVar8 == puVar7)) {
      return;
    }
    iVar2 = (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
    if ((plVar3[0x18] != 0) && (lVar5 = *(long *)(plVar3[0x18] + 0x20), lVar5 != 0)) {
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_f8,lVar5,0);
      *(int *)(puVar8 + 0xf) = *(int *)(puVar8 + 0xf) + iVar2;
      puVar8[0x11] = uStack_f0;
      puVar8[0x10] = uStack_f8;
      puVar8[0x12] = uStack_e8;
      if (puVar8[2] != 0) {
        if (*(int *)(puVar8[2] + 0x50) == 0) {
          uVar15 = (**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
          puVar9 = (undefined8 *)0x0;
          iVar2 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar15,/*STR('BattleGameContext')*/ uRam0000000003d69658);
          if (iVar2 != 0) {
            if (plVar3[3] == 0) goto LAB_0159dcf8;
            /*Atlas.Stats.AtlasStats$$RecordBattlePoints*/ func_0x0146e660(plVar3[3],*(undefined4 *)(puVar8 + 0xf),0);
          }
        }
        if (plVar3[0x46] == 0) {
          return;
        }
        /*Atlas.Arcade.ArcadeEvent$$UsableHitPlayer*/ func_0x0144def8(plVar3[0x46],puVar7,puVar8,param_4,0);
        return;
      }
    }
  }
LAB_0159dcf8:
  auVar18 = func_0x00f78af4();
  lVar5 = auVar18._0_8_;
  uVar16 = puVar9[1];
  uVar6 = *puVar9;
  uVar15 = puVar9[2];
  *(int *)(lVar5 + 0x78) = *(int *)(lVar5 + 0x78) + auVar18._8_4_;
  *(undefined8 *)(lVar5 + 0x88) = uVar16;
  *(undefined8 *)(lVar5 + 0x80) = uVar6;
  *(undefined8 *)(lVar5 + 0x90) = uVar15;
  return;
}



// ============================================================
// RVA: 0x159d8e4 | Atlas.Gameplay.Player.GameContextPlayerManager.DeInit
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__DeInit
               (long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *unaff_x22;
  uint uVar10;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  lVar8 = 0x3eb5000;
  if ((bRam0000000003eb5204 & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d2a1c8);
    func_0x00f78a20(0x3d1b4e0);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d43378);
    func_0x00f78a20(0x3d57230);
    func_0x00f78a20(0x3d57238);
    func_0x00f78a20(0x3d57240);
    bRam0000000003eb5204 = 1;
  }
  lVar9 = *(long *)(param_1 + 0x28);
  if (lVar9 == 0) {
LAB_0159db7c:
    func_0x00f78af4();
    uVar11 = unaff_x24;
LAB_0159db80:
    uVar3 = func_0x00f78b24();
    func_0x00f78ac0(uVar3,0);
  }
  else {
    unaff_x22 = (long *)(param_1 + 0x10);
    uVar6 = *(uint *)(lVar9 + 0x18);
    if (0 < (int)uVar6) {
      unaff_x23 = 0;
      unaff_x24 = 0x3d43378;
      do {
        uVar10 = (uint)unaff_x23;
        uVar11 = unaff_x24;
        if (uVar6 <= uVar10) goto LAB_0159db80;
        if (*unaff_x22 == 0) goto LAB_0159db7c;
        lVar8 = *(long *)(lVar9 + (long)(int)uVar10 * 8 + 0x20);
        param_3 = puRam0000000003d43378;
        /*Core.Actors.ActorManager$$TryRemoveFromGroup<object>*/ func_0x0171ee50(*unaff_x22,lVar8);
        if (lVar8 == 0) goto LAB_0159db7c;
        Atlas_Gameplay_Player_GameContextPlayer__DeInit(lVar8);
        unaff_x23 = (ulong)(uVar10 + 1);
        uVar6 = *(uint *)(lVar9 + 0x18);
      } while ((int)(uVar10 + 1) < (int)uVar6);
    }
    if (((*(long *)(param_1 + 0x20) == 0) ||
        (lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar7 == 0)) ||
       (unaff_x23 = *(ulong *)(lVar7 + 0x10), unaff_x23 == 0)) goto LAB_0159db7c;
    uVar11 = 0x3d1b4e8;
    unaff_x24 = 0x3d1b4e8;
    lVar8 = *(long *)(unaff_x23 + 0x18);
    lVar9 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
    param_4 = uRam0000000003d2a1d8;
    /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(lVar9,param_1,uRam0000000003d57238,uRam0000000003d2a1d8);
    param_3 = (undefined8 *)0x0;
    plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar8,lVar9);
    if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
      *(long **)(unaff_x23 + 0x18) = plVar2;
      if ((*(long *)(param_1 + 0x20) == 0) ||
         ((lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar7 == 0 ||
          (unaff_x23 = *(ulong *)(lVar7 + 0x10), unaff_x23 == 0)))) goto LAB_0159db7c;
      uVar11 = 0x3d1b3b0;
      unaff_x24 = 0x3d1b3b0;
      lVar8 = *(long *)(unaff_x23 + 0x70);
      lVar9 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
      param_4 = uRam0000000003d29f28;
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar9,param_1,uRam0000000003d57240,uRam0000000003d29f28);
      param_3 = (undefined8 *)0x0;
      plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar8,lVar9);
      if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
        *(long **)(unaff_x23 + 0x70) = plVar2;
        if (((*(long *)(param_1 + 0x20) == 0) ||
            (lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar7 == 0)) ||
           (unaff_x23 = *(ulong *)(lVar7 + 0x10), unaff_x23 == 0)) goto LAB_0159db7c;
        uVar11 = 0x3d1b4e0;
        lVar8 = *(long *)(unaff_x23 + 0x28);
        lVar9 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
        param_4 = uRam0000000003d2a1c8;
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar9,param_1,uRam0000000003d57230,uRam0000000003d2a1c8);
        param_3 = (undefined8 *)0x0;
        plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar8,lVar9);
        if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) {
          *(long **)(unaff_x23 + 0x28) = plVar2;
          *(undefined1 *)(param_1 + 0x50) = 0;
          *(undefined8 *)(param_1 + 0x18) = 0;
          *unaff_x22 = 0;
          *(undefined8 *)(param_1 + 0x28) = 0;
          *(undefined8 *)(param_1 + 0x20) = 0;
          return;
        }
      }
    }
  }
  auVar13 = func_0x00f78e5c();
  puVar4 = auVar13._8_8_;
  plVar2 = auVar13._0_8_;
  pcStack_58 = Atlas_Contexts_GameContextBase__HandleUsableHitPlayer;
  puVar5 = param_3;
  uStack_90 = uVar11;
  uStack_88 = unaff_x23;
  plStack_80 = unaff_x22;
  lStack_78 = lVar9;
  lStack_70 = lVar8;
  lStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb51b8 & 1) == 0) {
    func_0x00f78a20(0x3d69658);
    bRam0000000003eb51b8 = 1;
  }
  if (((plVar2[3] != 0) &&
      (puVar5 = param_3, /*Atlas.Stats.AtlasStats$$OnUsableHitPlayer*/ func_0x0146ecbc(plVar2[3],puVar4,param_3,param_4,0),
      param_3 != (undefined8 *)0x0)) && (lVar8 = param_3[2], lVar8 != 0)) {
    uStack_a8 = *(undefined8 *)(lVar8 + 0x50);
    uStack_b0 = *(undefined8 *)(lVar8 + 0x48);
    uStack_98 = *(undefined8 *)(lVar8 + 0x60);
    uStack_a0 = *(undefined8 *)(lVar8 + 0x58);
    iVar1 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&uStack_b0,0);
    if ((iVar1 == 0) || (param_3 == puVar4)) {
      return;
    }
    iVar1 = (**(code **)(*plVar2 + 0x2a8))(plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
    if ((plVar2[0x18] != 0) && (lVar8 = *(long *)(plVar2[0x18] + 0x20), lVar8 != 0)) {
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_c8,lVar8,0);
      *(int *)(param_3 + 0xf) = *(int *)(param_3 + 0xf) + iVar1;
      param_3[0x11] = uStack_c0;
      param_3[0x10] = uStack_c8;
      param_3[0x12] = uStack_b8;
      if (param_3[2] != 0) {
        if (*(int *)(param_3[2] + 0x50) == 0) {
          uVar11 = (**(code **)(*plVar2 + 0x208))(plVar2,*(undefined8 *)(*plVar2 + 0x210));
          puVar5 = (undefined8 *)0x0;
          iVar1 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar11,/*STR('BattleGameContext')*/ uRam0000000003d69658);
          if (iVar1 != 0) {
            if (plVar2[3] == 0) goto LAB_0159dcf8;
            /*Atlas.Stats.AtlasStats$$RecordBattlePoints*/ func_0x0146e660(plVar2[3],*(undefined4 *)(param_3 + 0xf),0);
          }
        }
        if (plVar2[0x46] == 0) {
          return;
        }
        /*Atlas.Arcade.ArcadeEvent$$UsableHitPlayer*/ func_0x0144def8(plVar2[0x46],puVar4,param_3,param_4,0);
        return;
      }
    }
  }
LAB_0159dcf8:
  auVar14 = func_0x00f78af4();
  lVar8 = auVar14._0_8_;
  uVar12 = puVar5[1];
  uVar3 = *puVar5;
  uVar11 = puVar5[2];
  *(int *)(lVar8 + 0x78) = *(int *)(lVar8 + 0x78) + auVar14._8_4_;
  *(undefined8 *)(lVar8 + 0x88) = uVar12;
  *(undefined8 *)(lVar8 + 0x80) = uVar3;
  *(undefined8 *)(lVar8 + 0x90) = uVar11;
  return;
}



// ============================================================
// RVA: 0x15a3554 | Atlas.Gameplay.Player.GameContextPlayerManager.GetNthPlacedPlayer
// ============================================================

ulong Atlas_Gameplay_Player_GameContextPlayerManager__GetNthPlacedPlayer(long param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = param_2 - 1;
  if ((int)uVar1 < 0) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
    func_0x00f78af4();
  }
  else {
    if ((int)*(uint *)(lVar3 + 0x18) <= (int)uVar1) {
      return 0;
    }
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      return *(ulong *)(lVar3 + (ulong)uVar1 * 8 + 0x20);
    }
  }
  uVar2 = func_0x00f78b24();
  lVar3 = func_0x00f78ac0(uVar2,0);
  return (ulong)(*(int *)(lVar3 + 0x68) + 1);
}



// ============================================================
// RVA: 0x15a4854 | Atlas.Gameplay.Player.GameContextPlayerManager.GetNthPlacedAI
// ============================================================

undefined8 Atlas_Gameplay_Player_GameContextPlayerManager__GetNthPlacedAI(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  if ((bRam0000000003eb5208 & 1) == 0) {
    func_0x00f78a20(0x3d3a678);
    func_0x00f78a20(0x3d3a680);
    bRam0000000003eb5208 = 1;
  }
  uVar2 = param_2 - 1;
  if ((-1 < (int)uVar2) && (lVar3 = *(long *)(param_1 + 0x40), lVar3 != 0)) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      if (uVar1 <= uVar2) {
        uVar2 = uVar1 - 1;
      }
      return *(undefined8 *)(*(long *)(lVar3 + 0x10) + (ulong)uVar2 * 8 + 0x20);
    }
  }
  return 0;
}



// ============================================================
// RVA: 0x15a5980 | Atlas.Gameplay.Player.GameContextPlayerManager.add_OnUsablePickedUp
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsablePickedUp
               (long param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  code *pcVar17;
  long lVar18;
  undefined1 auVar19 [16];
  long lStack_c8;
  
  if ((bRam0000000003eb51eb & 1) == 0) {
    func_0x00f78a20(0x3d27740);
    bRam0000000003eb51eb = 1;
  }
  lVar11 = *(long *)(param_1 + 0x60);
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsablePickedUpDelegate_TypeInfo*/ lRam0000000003d27740))) {
    lVar9 = func_0x00ff0f44((long *)(param_1 + 0x60),plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar8);
  if ((bRam0000000003eb51ec & 1) == 0) {
    func_0x00f78a20(0x3d27740);
    bRam0000000003eb51ec = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x60);
  lVar11 = *plVar8;
  while( true ) {
    uVar12 = 0;
    plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar19._8_8_,0);
    if ((plVar10 != (long *)0x0) && (*plVar10 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsablePickedUpDelegate_TypeInfo*/ lRam0000000003d27740)) break;
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  plVar8 = auVar19._8_8_;
  lVar11 = *(long *)(auVar19._0_8_ + 0x60);
  if (lVar11 == 0) {
    return;
  }
  lStack_c8 = lVar11;
  lVar9 = *(long *)(lVar11 + 0x68);
  if (lVar9 == 0) {
    plVar10 = &lStack_c8;
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar9 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    plVar10 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar13 = plVar10[lVar9];
    pcVar17 = *(code **)(lVar13 + 0x10);
    plVar1 = *(long **)(lVar13 + 0x20);
    lVar13 = *(long *)(lVar13 + 0x28);
    if (*(short *)(lVar13 + 0x48) == -1) {
      func_0x00f78ad8(lVar13);
    }
    iVar4 = func_0x00f78a4c(lVar13);
    bVar3 = *(char *)(lVar13 + 0x4a) == '\x02';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x015546d8:
          (*pcVar17)(plVar8,uVar12,lVar13);
        }
        else {
          if (((*(short *)(lVar13 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar11 + 0x18) == 0)) goto code_r0x015545cc;
          iVar4 = func_0x00f78a44(lVar13);
          iVar5 = func_0x00f78ec0(lVar13);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar13 + 0x48);
            if (iVar5 == 0) {
              lVar13 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar13 + 0x138))(plVar1,plVar8,uVar12,*(undefined8 *)(lVar13 + 0x140));
              goto code_r0x015546e8;
            }
            lVar13 = func_0x00f78a48(lVar13);
            lVar14 = *plVar1;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar13) {
                  puVar7 = (undefined8 *)
                           (lVar14 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01554880;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar13,(ulong)uVar2);
code_r0x01554880:
            pcVar17 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar14 = *plVar1;
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)(lVar13 + 0x18)) {
                    lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar13 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01554858;
                  }
                  piVar16 = piVar16 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              lVar14 = func_0x00fac1f0(plVar1);
code_r0x01554858:
              uVar6 = *(undefined8 *)(lVar14 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar13);
            pcVar17 = (code *)*puVar7;
          }
          (*pcVar17)(plVar1,plVar8,uVar12,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar13 + 0x48) == -1) || (*(long *)(lVar11 + 0x18) == 0))
        goto code_r0x015546d8;
        iVar4 = func_0x00f78a44(lVar13);
        iVar5 = func_0x00f78ec0(lVar13);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar13 + 0x48);
          if (iVar5 == 0) {
            lVar13 = *plVar8 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar13 + 0x138))(plVar8,uVar12,*(undefined8 *)(lVar13 + 0x140));
            goto code_r0x015546e8;
          }
          lVar13 = func_0x00f78a48(lVar13);
          lVar14 = *plVar8;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar13) {
                puVar7 = (undefined8 *)(lVar14 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01554814;
              }
              piVar16 = piVar16 + 4;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar13,(ulong)uVar2);
code_r0x01554814:
          pcVar17 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar14 = *plVar8;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)(lVar13 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar13 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x015547ec;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            lVar14 = func_0x00fac1f0(plVar8);
code_r0x015547ec:
            uVar6 = *(undefined8 *)(lVar14 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar13);
          pcVar17 = (code *)*puVar7;
        }
        (*pcVar17)(plVar8,uVar12,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x015546d8;
code_r0x015545cc:
      (*pcVar17)(plVar1,plVar8,uVar12,lVar13);
    }
code_r0x015546e8:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15a5a20 | Atlas.Gameplay.Player.GameContextPlayerManager.remove_OnUsablePickedUp
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsablePickedUp
               (long param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  undefined1 auVar19 [16];
  long lStack_98;
  
  if ((bRam0000000003eb51ec & 1) == 0) {
    func_0x00f78a20(0x3d27740);
    bRam0000000003eb51ec = 1;
  }
  lVar10 = *(long *)(param_1 + 0x60);
  while( true ) {
    uVar11 = 0;
    plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar10,param_2,0);
    if ((plVar8 != (long *)0x0) && (*plVar8 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsablePickedUpDelegate_TypeInfo*/ lRam0000000003d27740)) break;
    lVar9 = func_0x00ff0f44((long *)(param_1 + 0x60),plVar8,lVar10);
    bVar3 = lVar10 == lVar9;
    lVar10 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar8);
  plVar8 = auVar19._8_8_;
  lVar10 = *(long *)(auVar19._0_8_ + 0x60);
  if (lVar10 == 0) {
    return;
  }
  lStack_98 = lVar10;
  lVar9 = *(long *)(lVar10 + 0x68);
  if (lVar9 == 0) {
    plVar18 = &lStack_98;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar9 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    plVar18 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar12 = plVar18[lVar9];
    pcVar16 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    bVar3 = *(char *)(lVar12 + 0x4a) == '\x02';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x015546d8:
          (*pcVar16)(plVar8,uVar11,lVar12);
        }
        else {
          if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar10 + 0x18) == 0)) goto code_r0x015545cc;
          iVar4 = func_0x00f78a44(lVar12);
          iVar5 = func_0x00f78ec0(lVar12);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar12 + 0x48);
            if (iVar5 == 0) {
              lVar12 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar12 + 0x138))(plVar1,plVar8,uVar11,*(undefined8 *)(lVar12 + 0x140));
              goto code_r0x015546e8;
            }
            lVar12 = func_0x00f78a48(lVar12);
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar12) {
                  puVar7 = (undefined8 *)
                           (lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01554880;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar2);
code_r0x01554880:
            pcVar16 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar13 = *plVar1;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                    lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01554858;
                  }
                  piVar15 = piVar15 + 4;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              lVar13 = func_0x00fac1f0(plVar1);
code_r0x01554858:
              uVar6 = *(undefined8 *)(lVar13 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
            pcVar16 = (code *)*puVar7;
          }
          (*pcVar16)(plVar1,plVar8,uVar11,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar12 + 0x48) == -1) || (*(long *)(lVar10 + 0x18) == 0))
        goto code_r0x015546d8;
        iVar4 = func_0x00f78a44(lVar12);
        iVar5 = func_0x00f78ec0(lVar12);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar12 + 0x48);
          if (iVar5 == 0) {
            lVar12 = *plVar8 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar8,uVar11,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x015546e8;
          }
          lVar12 = func_0x00f78a48(lVar12);
          lVar13 = *plVar8;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01554814;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar12,(ulong)uVar2);
code_r0x01554814:
          pcVar16 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar8;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x015547ec;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar8);
code_r0x015547ec:
            uVar6 = *(undefined8 *)(lVar13 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
          pcVar16 = (code *)*puVar7;
        }
        (*pcVar16)(plVar8,uVar11,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x015546d8;
code_r0x015545cc:
      (*pcVar16)(plVar1,plVar8,uVar11,lVar12);
    }
code_r0x015546e8:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15a5ac0 | Atlas.Gameplay.Player.GameContextPlayerManager.FireOnUsablePickedUp
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__FireOnUsablePickedUp
               (long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_68;
  
  lVar8 = *(long *)(param_1 + 0x60);
  if (lVar8 == 0) {
    return;
  }
  lStack_68 = lVar8;
  lVar9 = *(long *)(lVar8 + 0x68);
  if (lVar9 == 0) {
    plVar16 = &lStack_68;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar9 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = plVar16[lVar9];
    pcVar14 = *(code **)(lVar10 + 0x10);
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10);
    }
    iVar4 = func_0x00f78a4c(lVar10);
    bVar3 = *(char *)(lVar10 + 0x4a) == '\x02';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x015546d8:
          (*pcVar14)(param_2,param_3,lVar10);
        }
        else {
          if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x015545cc;
          iVar4 = func_0x00f78a44(lVar10);
          iVar5 = func_0x00f78ec0(lVar10);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar10 + 0x48);
            if (iVar5 == 0) {
              lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar10 + 0x138))(plVar1,param_2,param_3,*(undefined8 *)(lVar10 + 0x140));
              goto code_r0x015546e8;
            }
            lVar10 = func_0x00f78a48(lVar10);
            lVar11 = *plVar1;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar10) {
                  puVar7 = (undefined8 *)
                           (lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01554880;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x01554880:
            pcVar14 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar11 = *plVar1;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01554858;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x00fac1f0(plVar1);
code_r0x01554858:
              uVar6 = *(undefined8 *)(lVar11 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
            pcVar14 = (code *)*puVar7;
          }
          (*pcVar14)(plVar1,param_2,param_3,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(lVar8 + 0x18) == 0))
        goto code_r0x015546d8;
        iVar4 = func_0x00f78a44(lVar10);
        iVar5 = func_0x00f78ec0(lVar10);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar10 + 0x48);
          if (iVar5 == 0) {
            lVar10 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar10 + 0x138))(param_2,param_3,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x015546e8;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar11 = *param_2;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar7 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01554814;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(param_2,lVar10,(ulong)uVar2);
code_r0x01554814:
          pcVar14 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_2;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x015547ec;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(param_2);
code_r0x015547ec:
            uVar6 = *(undefined8 *)(lVar11 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
          pcVar14 = (code *)*puVar7;
        }
        (*pcVar14)(param_2,param_3,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x015546d8;
code_r0x015545cc:
      (*pcVar14)(plVar1,param_2,param_3,lVar10);
    }
code_r0x015546e8:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15a5ad4 | Atlas.Gameplay.Player.GameContextPlayerManager.add_OnUsablePickupCancelled
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsablePickupCancelled
               (long param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  undefined1 auVar18 [16];
  long lStack_b8;
  
  if ((bRam0000000003eb51ed & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51ed = 1;
  }
  lVar11 = *(long *)(param_1 + 0x68);
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar9 = func_0x00ff0f44((long *)(param_1 + 0x68),plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar18 = func_0x00f78e5c(plVar8);
  if ((bRam0000000003eb51ee & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51ee = 1;
  }
  plVar8 = (long *)(auVar18._0_8_ + 0x68);
  lVar11 = *plVar8;
  while ((plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar18._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar18 = func_0x00f78e5c(plVar10);
  plVar8 = auVar18._8_8_;
  lVar11 = *(long *)(auVar18._0_8_ + 0x68);
  if (lVar11 == 0) {
    return;
  }
  lStack_b8 = lVar11;
  lVar9 = *(long *)(lVar11 + 0x68);
  if (lVar9 == 0) {
    plVar10 = &lStack_b8;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar9 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    plVar10 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar12 = plVar10[lVar9];
    pcVar16 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    bVar3 = *(char *)(lVar12 + 0x4a) == '\x01';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01552480:
          (*pcVar16)(plVar8,lVar12);
        }
        else {
          if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar11 + 0x18) == 0)) goto code_r0x01552378;
          iVar4 = func_0x00f78a44(lVar12);
          iVar5 = func_0x00f78ec0(lVar12);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar12 + 0x48);
            if (iVar5 == 0) {
              lVar12 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar12 + 0x138))(plVar1,plVar8,*(undefined8 *)(lVar12 + 0x140));
              goto code_r0x0155248c;
            }
            lVar12 = func_0x00f78a48(lVar12);
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar12) {
                  puVar7 = (undefined8 *)
                           (lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01552618;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar2);
code_r0x01552618:
            pcVar16 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar13 = *plVar1;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                    lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x015525f0;
                  }
                  piVar15 = piVar15 + 4;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              lVar13 = func_0x00fac1f0(plVar1);
code_r0x015525f0:
              uVar6 = *(undefined8 *)(lVar13 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
            pcVar16 = (code *)*puVar7;
          }
          (*pcVar16)(plVar1,plVar8,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar12 + 0x48) == -1) || (*(long *)(lVar11 + 0x18) == 0))
        goto code_r0x01552480;
        iVar4 = func_0x00f78a44(lVar12);
        iVar5 = func_0x00f78ec0(lVar12);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar12 + 0x48);
          if (iVar5 == 0) {
            lVar12 = *plVar8 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar8,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x0155248c;
          }
          lVar12 = func_0x00f78a48(lVar12);
          lVar13 = *plVar8;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x015525b4;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar12,(ulong)uVar2);
code_r0x015525b4:
          pcVar16 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar8;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x0155258c;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar8);
code_r0x0155258c:
            uVar6 = *(undefined8 *)(lVar13 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
          pcVar16 = (code *)*puVar7;
        }
        (*pcVar16)(plVar8,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01552480;
code_r0x01552378:
      (*pcVar16)(plVar1,plVar8,lVar12);
    }
code_r0x0155248c:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15a5b74 | Atlas.Gameplay.Player.GameContextPlayerManager.remove_OnUsablePickupCancelled
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsablePickupCancelled
               (long param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  code *pcVar15;
  long lVar16;
  long *plVar17;
  undefined1 auVar18 [16];
  long lStack_88;
  
  if ((bRam0000000003eb51ee & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51ee = 1;
  }
  lVar10 = *(long *)(param_1 + 0x68);
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar10,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar9 = func_0x00ff0f44((long *)(param_1 + 0x68),plVar8,lVar10);
    bVar3 = lVar10 == lVar9;
    lVar10 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar18 = func_0x00f78e5c(plVar8);
  plVar8 = auVar18._8_8_;
  lVar10 = *(long *)(auVar18._0_8_ + 0x68);
  if (lVar10 == 0) {
    return;
  }
  lStack_88 = lVar10;
  lVar9 = *(long *)(lVar10 + 0x68);
  if (lVar9 == 0) {
    plVar17 = &lStack_88;
    lVar16 = 1;
  }
  else {
    lVar16 = *(long *)(lVar9 + 0x18);
    if (lVar16 == 0) {
      return;
    }
    plVar17 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar11 = plVar17[lVar9];
    pcVar15 = *(code **)(lVar11 + 0x10);
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar11 = *(long *)(lVar11 + 0x28);
    if (*(short *)(lVar11 + 0x48) == -1) {
      func_0x00f78ad8(lVar11);
    }
    iVar4 = func_0x00f78a4c(lVar11);
    bVar3 = *(char *)(lVar11 + 0x4a) == '\x01';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01552480:
          (*pcVar15)(plVar8,lVar11);
        }
        else {
          if (((*(short *)(lVar11 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar10 + 0x18) == 0)) goto code_r0x01552378;
          iVar4 = func_0x00f78a44(lVar11);
          iVar5 = func_0x00f78ec0(lVar11);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar11 + 0x48);
            if (iVar5 == 0) {
              lVar11 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar11 + 0x138))(plVar1,plVar8,*(undefined8 *)(lVar11 + 0x140));
              goto code_r0x0155248c;
            }
            lVar11 = func_0x00f78a48(lVar11);
            lVar12 = *plVar1;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar11) {
                  puVar7 = (undefined8 *)
                           (lVar12 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01552618;
                }
                piVar14 = piVar14 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar11,(ulong)uVar2);
code_r0x01552618:
            pcVar15 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar12 = *plVar1;
              uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)(lVar11 + 0x18)) {
                    lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar11 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x015525f0;
                  }
                  piVar14 = piVar14 + 4;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              lVar12 = func_0x00fac1f0(plVar1);
code_r0x015525f0:
              uVar6 = *(undefined8 *)(lVar12 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar11);
            pcVar15 = (code *)*puVar7;
          }
          (*pcVar15)(plVar1,plVar8,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar11 + 0x48) == -1) || (*(long *)(lVar10 + 0x18) == 0))
        goto code_r0x01552480;
        iVar4 = func_0x00f78a44(lVar11);
        iVar5 = func_0x00f78ec0(lVar11);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar11 + 0x48);
          if (iVar5 == 0) {
            lVar11 = *plVar8 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar11 + 0x138))(plVar8,*(undefined8 *)(lVar11 + 0x140));
            goto code_r0x0155248c;
          }
          lVar11 = func_0x00f78a48(lVar11);
          lVar12 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar7 = (undefined8 *)(lVar12 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x015525b4;
              }
              piVar14 = piVar14 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar11,(ulong)uVar2);
code_r0x015525b4:
          pcVar15 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar12 = *plVar8;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)(lVar11 + 0x18)) {
                  lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar11 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x0155258c;
                }
                piVar14 = piVar14 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            lVar12 = func_0x00fac1f0(plVar8);
code_r0x0155258c:
            uVar6 = *(undefined8 *)(lVar12 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar11);
          pcVar15 = (code *)*puVar7;
        }
        (*pcVar15)(plVar8,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01552480;
code_r0x01552378:
      (*pcVar15)(plVar1,plVar8,lVar11);
    }
code_r0x0155248c:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar16) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15a5c14 | Atlas.Gameplay.Player.GameContextPlayerManager.FireOnUsablePickedUpCancelled
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__FireOnUsablePickedUpCancelled
               (long param_1,long *param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_58;
  
  lVar8 = *(long *)(param_1 + 0x68);
  if (lVar8 == 0) {
    return;
  }
  lStack_58 = lVar8;
  lVar9 = *(long *)(lVar8 + 0x68);
  if (lVar9 == 0) {
    plVar16 = &lStack_58;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar9 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = plVar16[lVar9];
    pcVar14 = *(code **)(lVar10 + 0x10);
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10);
    }
    iVar4 = func_0x00f78a4c(lVar10);
    bVar3 = *(char *)(lVar10 + 0x4a) == '\x01';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01552480:
          (*pcVar14)(param_2,lVar10);
        }
        else {
          if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x01552378;
          iVar4 = func_0x00f78a44(lVar10);
          iVar5 = func_0x00f78ec0(lVar10);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar10 + 0x48);
            if (iVar5 == 0) {
              lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar10 + 0x138))(plVar1,param_2,*(undefined8 *)(lVar10 + 0x140));
              goto code_r0x0155248c;
            }
            lVar10 = func_0x00f78a48(lVar10);
            lVar11 = *plVar1;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar10) {
                  puVar7 = (undefined8 *)
                           (lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01552618;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x01552618:
            pcVar14 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar11 = *plVar1;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x015525f0;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x00fac1f0(plVar1);
code_r0x015525f0:
              uVar6 = *(undefined8 *)(lVar11 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
            pcVar14 = (code *)*puVar7;
          }
          (*pcVar14)(plVar1,param_2,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(lVar8 + 0x18) == 0))
        goto code_r0x01552480;
        iVar4 = func_0x00f78a44(lVar10);
        iVar5 = func_0x00f78ec0(lVar10);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar10 + 0x48);
          if (iVar5 == 0) {
            lVar10 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar10 + 0x138))(param_2,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x0155248c;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar11 = *param_2;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar7 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x015525b4;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(param_2,lVar10,(ulong)uVar2);
code_r0x015525b4:
          pcVar14 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_2;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x0155258c;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(param_2);
code_r0x0155258c:
            uVar6 = *(undefined8 *)(lVar11 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
          pcVar14 = (code *)*puVar7;
        }
        (*pcVar14)(param_2,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01552480;
code_r0x01552378:
      (*pcVar14)(plVar1,param_2,lVar10);
    }
code_r0x0155248c:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15a5c28 | Atlas.Gameplay.Player.GameContextPlayerManager.add_OnUsableAttached
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableAttached
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  code *pcVar17;
  long lVar18;
  undefined1 auVar19 [16];
  long lStack_c8;
  
  if ((bRam0000000003eb51ef & 1) == 0) {
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb51ef = 1;
  }
  lVar11 = *(long *)(param_1 + 0x70);
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
    lVar9 = func_0x00ff0f44((long *)(param_1 + 0x70),plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar8);
  if ((bRam0000000003eb51f0 & 1) == 0) {
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb51f0 = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x70);
  lVar11 = *plVar8;
  while( true ) {
    uVar12 = 0;
    plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar19._8_8_,0);
    if ((plVar10 != (long *)0x0) && (*plVar10 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718)) break;
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  plVar8 = auVar19._8_8_;
  lVar11 = *(long *)(auVar19._0_8_ + 0x70);
  if (lVar11 == 0) {
    return;
  }
  lStack_c8 = lVar11;
  lVar9 = *(long *)(lVar11 + 0x68);
  if (lVar9 == 0) {
    plVar10 = &lStack_c8;
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar9 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    plVar10 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar13 = plVar10[lVar9];
    pcVar17 = *(code **)(lVar13 + 0x10);
    plVar1 = *(long **)(lVar13 + 0x20);
    lVar13 = *(long *)(lVar13 + 0x28);
    if (*(short *)(lVar13 + 0x48) == -1) {
      func_0x00f78ad8(lVar13);
    }
    iVar4 = func_0x00f78a4c(lVar13);
    bVar3 = *(char *)(lVar13 + 0x4a) == '\x03';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01553104:
          (*pcVar17)(plVar8,uVar12,param_4,lVar13);
        }
        else {
          if (((*(short *)(lVar13 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar11 + 0x18) == 0)) goto code_r0x01552ff4;
          iVar4 = func_0x00f78a44(lVar13);
          iVar5 = func_0x00f78ec0(lVar13);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar13 + 0x48);
            if (iVar5 == 0) {
              lVar13 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar13 + 0x138))
                        (plVar1,plVar8,uVar12,param_4,*(undefined8 *)(lVar13 + 0x140));
              goto code_r0x01553118;
            }
            lVar13 = func_0x00f78a48(lVar13);
            lVar14 = *plVar1;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar13) {
                  puVar7 = (undefined8 *)
                           (lVar14 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x015532bc;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar13,(ulong)uVar2);
code_r0x015532bc:
            pcVar17 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar14 = *plVar1;
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)(lVar13 + 0x18)) {
                    lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar13 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01553294;
                  }
                  piVar16 = piVar16 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              lVar14 = func_0x00fac1f0(plVar1);
code_r0x01553294:
              uVar6 = *(undefined8 *)(lVar14 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar13);
            pcVar17 = (code *)*puVar7;
          }
          (*pcVar17)(plVar1,plVar8,uVar12,param_4,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar13 + 0x48) == -1) || (*(long *)(lVar11 + 0x18) == 0))
        goto code_r0x01553104;
        iVar4 = func_0x00f78a44(lVar13);
        iVar5 = func_0x00f78ec0(lVar13);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar13 + 0x48);
          if (iVar5 == 0) {
            lVar13 = *plVar8 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar13 + 0x138))(plVar8,uVar12,param_4,*(undefined8 *)(lVar13 + 0x140));
            goto code_r0x01553118;
          }
          lVar13 = func_0x00f78a48(lVar13);
          lVar14 = *plVar8;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar13) {
                puVar7 = (undefined8 *)(lVar14 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01553248;
              }
              piVar16 = piVar16 + 4;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar13,(ulong)uVar2);
code_r0x01553248:
          pcVar17 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar14 = *plVar8;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)(lVar13 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar13 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01553220;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            lVar14 = func_0x00fac1f0(plVar8);
code_r0x01553220:
            uVar6 = *(undefined8 *)(lVar14 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar13);
          pcVar17 = (code *)*puVar7;
        }
        (*pcVar17)(plVar8,uVar12,param_4,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01553104;
code_r0x01552ff4:
      (*pcVar17)(plVar1,plVar8,uVar12,param_4,lVar13);
    }
code_r0x01553118:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15a5cc8 | Atlas.Gameplay.Player.GameContextPlayerManager.remove_OnUsableAttached
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableAttached
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  undefined1 auVar19 [16];
  long lStack_98;
  
  if ((bRam0000000003eb51f0 & 1) == 0) {
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb51f0 = 1;
  }
  lVar10 = *(long *)(param_1 + 0x70);
  while( true ) {
    uVar11 = 0;
    plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar10,param_2,0);
    if ((plVar8 != (long *)0x0) && (*plVar8 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718)) break;
    lVar9 = func_0x00ff0f44((long *)(param_1 + 0x70),plVar8,lVar10);
    bVar3 = lVar10 == lVar9;
    lVar10 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar8);
  plVar8 = auVar19._8_8_;
  lVar10 = *(long *)(auVar19._0_8_ + 0x70);
  if (lVar10 == 0) {
    return;
  }
  lStack_98 = lVar10;
  lVar9 = *(long *)(lVar10 + 0x68);
  if (lVar9 == 0) {
    plVar18 = &lStack_98;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar9 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    plVar18 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar12 = plVar18[lVar9];
    pcVar16 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    bVar3 = *(char *)(lVar12 + 0x4a) == '\x03';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01553104:
          (*pcVar16)(plVar8,uVar11,param_4,lVar12);
        }
        else {
          if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar10 + 0x18) == 0)) goto code_r0x01552ff4;
          iVar4 = func_0x00f78a44(lVar12);
          iVar5 = func_0x00f78ec0(lVar12);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar12 + 0x48);
            if (iVar5 == 0) {
              lVar12 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar12 + 0x138))
                        (plVar1,plVar8,uVar11,param_4,*(undefined8 *)(lVar12 + 0x140));
              goto code_r0x01553118;
            }
            lVar12 = func_0x00f78a48(lVar12);
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar12) {
                  puVar7 = (undefined8 *)
                           (lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x015532bc;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar2);
code_r0x015532bc:
            pcVar16 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar13 = *plVar1;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                    lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01553294;
                  }
                  piVar15 = piVar15 + 4;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              lVar13 = func_0x00fac1f0(plVar1);
code_r0x01553294:
              uVar6 = *(undefined8 *)(lVar13 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
            pcVar16 = (code *)*puVar7;
          }
          (*pcVar16)(plVar1,plVar8,uVar11,param_4,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar12 + 0x48) == -1) || (*(long *)(lVar10 + 0x18) == 0))
        goto code_r0x01553104;
        iVar4 = func_0x00f78a44(lVar12);
        iVar5 = func_0x00f78ec0(lVar12);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar12 + 0x48);
          if (iVar5 == 0) {
            lVar12 = *plVar8 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar8,uVar11,param_4,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x01553118;
          }
          lVar12 = func_0x00f78a48(lVar12);
          lVar13 = *plVar8;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01553248;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar12,(ulong)uVar2);
code_r0x01553248:
          pcVar16 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar8;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01553220;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar8);
code_r0x01553220:
            uVar6 = *(undefined8 *)(lVar13 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
          pcVar16 = (code *)*puVar7;
        }
        (*pcVar16)(plVar8,uVar11,param_4,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01553104;
code_r0x01552ff4:
      (*pcVar16)(plVar1,plVar8,uVar11,param_4,lVar12);
    }
code_r0x01553118:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15a5d68 | Atlas.Gameplay.Player.GameContextPlayerManager.FireOnUsableAttached
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__FireOnUsableAttached
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_68;
  
  lVar8 = *(long *)(param_1 + 0x70);
  if (lVar8 == 0) {
    return;
  }
  lStack_68 = lVar8;
  lVar9 = *(long *)(lVar8 + 0x68);
  if (lVar9 == 0) {
    plVar16 = &lStack_68;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar9 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = plVar16[lVar9];
    pcVar14 = *(code **)(lVar10 + 0x10);
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10);
    }
    iVar4 = func_0x00f78a4c(lVar10);
    bVar3 = *(char *)(lVar10 + 0x4a) == '\x03';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01553104:
          (*pcVar14)(param_2,param_3,param_4,lVar10);
        }
        else {
          if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x01552ff4;
          iVar4 = func_0x00f78a44(lVar10);
          iVar5 = func_0x00f78ec0(lVar10);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar10 + 0x48);
            if (iVar5 == 0) {
              lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar10 + 0x138))
                        (plVar1,param_2,param_3,param_4,*(undefined8 *)(lVar10 + 0x140));
              goto code_r0x01553118;
            }
            lVar10 = func_0x00f78a48(lVar10);
            lVar11 = *plVar1;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar10) {
                  puVar7 = (undefined8 *)
                           (lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x015532bc;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x015532bc:
            pcVar14 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar11 = *plVar1;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01553294;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x00fac1f0(plVar1);
code_r0x01553294:
              uVar6 = *(undefined8 *)(lVar11 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
            pcVar14 = (code *)*puVar7;
          }
          (*pcVar14)(plVar1,param_2,param_3,param_4,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(lVar8 + 0x18) == 0))
        goto code_r0x01553104;
        iVar4 = func_0x00f78a44(lVar10);
        iVar5 = func_0x00f78ec0(lVar10);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar10 + 0x48);
          if (iVar5 == 0) {
            lVar10 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar10 + 0x138))(param_2,param_3,param_4,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x01553118;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar11 = *param_2;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar7 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01553248;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(param_2,lVar10,(ulong)uVar2);
code_r0x01553248:
          pcVar14 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_2;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01553220;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(param_2);
code_r0x01553220:
            uVar6 = *(undefined8 *)(lVar11 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
          pcVar14 = (code *)*puVar7;
        }
        (*pcVar14)(param_2,param_3,param_4,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01553104;
code_r0x01552ff4:
      (*pcVar14)(plVar1,param_2,param_3,param_4,lVar10);
    }
code_r0x01553118:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15a5d7c | Atlas.Gameplay.Player.GameContextPlayerManager.add_OnUsableDetached
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableDetached
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  code *pcVar17;
  long lVar18;
  undefined1 auVar19 [16];
  long lStack_c8;
  
  if ((bRam0000000003eb51f1 & 1) == 0) {
    func_0x00f78a20(0x3d27720);
    bRam0000000003eb51f1 = 1;
  }
  lVar11 = *(long *)(param_1 + 0x78);
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDetachDelegate_TypeInfo*/ lRam0000000003d27720))) {
    lVar9 = func_0x00ff0f44((long *)(param_1 + 0x78),plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar8);
  if ((bRam0000000003eb51f2 & 1) == 0) {
    func_0x00f78a20(0x3d27720);
    bRam0000000003eb51f2 = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x78);
  lVar11 = *plVar8;
  while( true ) {
    uVar12 = 0;
    plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar19._8_8_,0);
    if ((plVar10 != (long *)0x0) && (*plVar10 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDetachDelegate_TypeInfo*/ lRam0000000003d27720)) break;
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  plVar8 = auVar19._8_8_;
  lVar11 = *(long *)(auVar19._0_8_ + 0x78);
  if (lVar11 == 0) {
    return;
  }
  lStack_c8 = lVar11;
  lVar9 = *(long *)(lVar11 + 0x68);
  if (lVar9 == 0) {
    plVar10 = &lStack_c8;
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar9 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    plVar10 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar13 = plVar10[lVar9];
    pcVar17 = *(code **)(lVar13 + 0x10);
    plVar1 = *(long **)(lVar13 + 0x20);
    lVar13 = *(long *)(lVar13 + 0x28);
    if (*(short *)(lVar13 + 0x48) == -1) {
      func_0x00f78ad8(lVar13);
    }
    iVar4 = func_0x00f78a4c(lVar13);
    bVar3 = *(char *)(lVar13 + 0x4a) == '\x04';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01553590:
          (*pcVar17)(plVar8,uVar12,param_4,param_5,lVar13);
        }
        else {
          if (((*(short *)(lVar13 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar11 + 0x18) == 0)) goto code_r0x01553474;
          iVar4 = func_0x00f78a44(lVar13);
          iVar5 = func_0x00f78ec0(lVar13);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar13 + 0x48);
            if (iVar5 == 0) {
              lVar13 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar13 + 0x138))
                        (plVar1,plVar8,uVar12,param_4,param_5,*(undefined8 *)(lVar13 + 0x140));
              goto code_r0x015535a8;
            }
            lVar13 = func_0x00f78a48(lVar13);
            lVar14 = *plVar1;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar13) {
                  puVar7 = (undefined8 *)
                           (lVar14 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01553758;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar13,(ulong)uVar2);
code_r0x01553758:
            pcVar17 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar14 = *plVar1;
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)(lVar13 + 0x18)) {
                    lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar13 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01553730;
                  }
                  piVar16 = piVar16 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              lVar14 = func_0x00fac1f0(plVar1);
code_r0x01553730:
              uVar6 = *(undefined8 *)(lVar14 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar13);
            pcVar17 = (code *)*puVar7;
          }
          (*pcVar17)(plVar1,plVar8,uVar12,param_4,param_5,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar13 + 0x48) == -1) || (*(long *)(lVar11 + 0x18) == 0))
        goto code_r0x01553590;
        iVar4 = func_0x00f78a44(lVar13);
        iVar5 = func_0x00f78ec0(lVar13);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar13 + 0x48);
          if (iVar5 == 0) {
            lVar13 = *plVar8 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar13 + 0x138))
                      (plVar8,uVar12,param_4,param_5,*(undefined8 *)(lVar13 + 0x140));
            goto code_r0x015535a8;
          }
          lVar13 = func_0x00f78a48(lVar13);
          lVar14 = *plVar8;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar13) {
                puVar7 = (undefined8 *)(lVar14 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x015536dc;
              }
              piVar16 = piVar16 + 4;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar13,(ulong)uVar2);
code_r0x015536dc:
          pcVar17 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar14 = *plVar8;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)(lVar13 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar13 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x015536b4;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            lVar14 = func_0x00fac1f0(plVar8);
code_r0x015536b4:
            uVar6 = *(undefined8 *)(lVar14 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar13);
          pcVar17 = (code *)*puVar7;
        }
        (*pcVar17)(plVar8,uVar12,param_4,param_5,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01553590;
code_r0x01553474:
      (*pcVar17)(plVar1,plVar8,uVar12,param_4,param_5,lVar13);
    }
code_r0x015535a8:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15a5e1c | Atlas.Gameplay.Player.GameContextPlayerManager.remove_OnUsableDetached
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableDetached
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  undefined1 auVar19 [16];
  long lStack_98;
  
  if ((bRam0000000003eb51f2 & 1) == 0) {
    func_0x00f78a20(0x3d27720);
    bRam0000000003eb51f2 = 1;
  }
  lVar10 = *(long *)(param_1 + 0x78);
  while( true ) {
    uVar11 = 0;
    plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar10,param_2,0);
    if ((plVar8 != (long *)0x0) && (*plVar8 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDetachDelegate_TypeInfo*/ lRam0000000003d27720)) break;
    lVar9 = func_0x00ff0f44((long *)(param_1 + 0x78),plVar8,lVar10);
    bVar3 = lVar10 == lVar9;
    lVar10 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar8);
  plVar8 = auVar19._8_8_;
  lVar10 = *(long *)(auVar19._0_8_ + 0x78);
  if (lVar10 == 0) {
    return;
  }
  lStack_98 = lVar10;
  lVar9 = *(long *)(lVar10 + 0x68);
  if (lVar9 == 0) {
    plVar18 = &lStack_98;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar9 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    plVar18 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar12 = plVar18[lVar9];
    pcVar16 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    bVar3 = *(char *)(lVar12 + 0x4a) == '\x04';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01553590:
          (*pcVar16)(plVar8,uVar11,param_4,param_5,lVar12);
        }
        else {
          if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar10 + 0x18) == 0)) goto code_r0x01553474;
          iVar4 = func_0x00f78a44(lVar12);
          iVar5 = func_0x00f78ec0(lVar12);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar12 + 0x48);
            if (iVar5 == 0) {
              lVar12 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar12 + 0x138))
                        (plVar1,plVar8,uVar11,param_4,param_5,*(undefined8 *)(lVar12 + 0x140));
              goto code_r0x015535a8;
            }
            lVar12 = func_0x00f78a48(lVar12);
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar12) {
                  puVar7 = (undefined8 *)
                           (lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01553758;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar2);
code_r0x01553758:
            pcVar16 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar13 = *plVar1;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                    lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01553730;
                  }
                  piVar15 = piVar15 + 4;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              lVar13 = func_0x00fac1f0(plVar1);
code_r0x01553730:
              uVar6 = *(undefined8 *)(lVar13 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
            pcVar16 = (code *)*puVar7;
          }
          (*pcVar16)(plVar1,plVar8,uVar11,param_4,param_5,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar12 + 0x48) == -1) || (*(long *)(lVar10 + 0x18) == 0))
        goto code_r0x01553590;
        iVar4 = func_0x00f78a44(lVar12);
        iVar5 = func_0x00f78ec0(lVar12);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar12 + 0x48);
          if (iVar5 == 0) {
            lVar12 = *plVar8 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar12 + 0x138))
                      (plVar8,uVar11,param_4,param_5,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x015535a8;
          }
          lVar12 = func_0x00f78a48(lVar12);
          lVar13 = *plVar8;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x015536dc;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar12,(ulong)uVar2);
code_r0x015536dc:
          pcVar16 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar8;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x015536b4;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar8);
code_r0x015536b4:
            uVar6 = *(undefined8 *)(lVar13 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
          pcVar16 = (code *)*puVar7;
        }
        (*pcVar16)(plVar8,uVar11,param_4,param_5,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01553590;
code_r0x01553474:
      (*pcVar16)(plVar1,plVar8,uVar11,param_4,param_5,lVar12);
    }
code_r0x015535a8:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15a5ebc | Atlas.Gameplay.Player.GameContextPlayerManager.FireOnUsableDetached
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__FireOnUsableDetached
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_68;
  
  lVar8 = *(long *)(param_1 + 0x78);
  if (lVar8 == 0) {
    return;
  }
  lStack_68 = lVar8;
  lVar9 = *(long *)(lVar8 + 0x68);
  if (lVar9 == 0) {
    plVar16 = &lStack_68;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar9 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = plVar16[lVar9];
    pcVar14 = *(code **)(lVar10 + 0x10);
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10);
    }
    iVar4 = func_0x00f78a4c(lVar10);
    bVar3 = *(char *)(lVar10 + 0x4a) == '\x04';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01553590:
          (*pcVar14)(param_2,param_3,param_4,param_5,lVar10);
        }
        else {
          if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x01553474;
          iVar4 = func_0x00f78a44(lVar10);
          iVar5 = func_0x00f78ec0(lVar10);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar10 + 0x48);
            if (iVar5 == 0) {
              lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar10 + 0x138))
                        (plVar1,param_2,param_3,param_4,param_5,*(undefined8 *)(lVar10 + 0x140));
              goto code_r0x015535a8;
            }
            lVar10 = func_0x00f78a48(lVar10);
            lVar11 = *plVar1;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar10) {
                  puVar7 = (undefined8 *)
                           (lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01553758;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x01553758:
            pcVar14 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar11 = *plVar1;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01553730;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x00fac1f0(plVar1);
code_r0x01553730:
              uVar6 = *(undefined8 *)(lVar11 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
            pcVar14 = (code *)*puVar7;
          }
          (*pcVar14)(plVar1,param_2,param_3,param_4,param_5,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(lVar8 + 0x18) == 0))
        goto code_r0x01553590;
        iVar4 = func_0x00f78a44(lVar10);
        iVar5 = func_0x00f78ec0(lVar10);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar10 + 0x48);
          if (iVar5 == 0) {
            lVar10 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar10 + 0x138))
                      (param_2,param_3,param_4,param_5,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x015535a8;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar11 = *param_2;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar7 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x015536dc;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(param_2,lVar10,(ulong)uVar2);
code_r0x015536dc:
          pcVar14 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_2;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x015536b4;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(param_2);
code_r0x015536b4:
            uVar6 = *(undefined8 *)(lVar11 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
          pcVar14 = (code *)*puVar7;
        }
        (*pcVar14)(param_2,param_3,param_4,param_5,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01553590;
code_r0x01553474:
      (*pcVar14)(plVar1,param_2,param_3,param_4,param_5,lVar10);
    }
code_r0x015535a8:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15a5ed0 | Atlas.Gameplay.Player.GameContextPlayerManager.FireOnUsableUsed
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__FireOnUsableUsed
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_68;
  
  lVar8 = *(long *)(param_1 + 0x80);
  if (lVar8 == 0) {
    return;
  }
  lStack_68 = lVar8;
  lVar9 = *(long *)(lVar8 + 0x68);
  if (lVar9 == 0) {
    plVar16 = &lStack_68;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar9 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = plVar16[lVar9];
    pcVar14 = *(code **)(lVar10 + 0x10);
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10);
    }
    iVar4 = func_0x00f78a4c(lVar10);
    bVar3 = *(char *)(lVar10 + 0x4a) == '\x03';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01553104:
          (*pcVar14)(param_2,param_3,param_4,lVar10);
        }
        else {
          if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x01552ff4;
          iVar4 = func_0x00f78a44(lVar10);
          iVar5 = func_0x00f78ec0(lVar10);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar10 + 0x48);
            if (iVar5 == 0) {
              lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar10 + 0x138))
                        (plVar1,param_2,param_3,param_4,*(undefined8 *)(lVar10 + 0x140));
              goto code_r0x01553118;
            }
            lVar10 = func_0x00f78a48(lVar10);
            lVar11 = *plVar1;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar10) {
                  puVar7 = (undefined8 *)
                           (lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x015532bc;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x015532bc:
            pcVar14 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar11 = *plVar1;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01553294;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x00fac1f0(plVar1);
code_r0x01553294:
              uVar6 = *(undefined8 *)(lVar11 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
            pcVar14 = (code *)*puVar7;
          }
          (*pcVar14)(plVar1,param_2,param_3,param_4,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(lVar8 + 0x18) == 0))
        goto code_r0x01553104;
        iVar4 = func_0x00f78a44(lVar10);
        iVar5 = func_0x00f78ec0(lVar10);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar10 + 0x48);
          if (iVar5 == 0) {
            lVar10 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar10 + 0x138))(param_2,param_3,param_4,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x01553118;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar11 = *param_2;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar7 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01553248;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(param_2,lVar10,(ulong)uVar2);
code_r0x01553248:
          pcVar14 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_2;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01553220;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(param_2);
code_r0x01553220:
            uVar6 = *(undefined8 *)(lVar11 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
          pcVar14 = (code *)*puVar7;
        }
        (*pcVar14)(param_2,param_3,param_4,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01553104;
code_r0x01552ff4:
      (*pcVar14)(plVar1,param_2,param_3,param_4,lVar10);
    }
code_r0x01553118:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15a5ee4 | Atlas.Gameplay.Player.GameContextPlayerManager.FireOnBeforeRespawn
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__FireOnBeforeRespawn(long param_1,long *param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_58;
  
  lVar8 = *(long *)(param_1 + 0x88);
  if (lVar8 == 0) {
    return;
  }
  lStack_58 = lVar8;
  lVar9 = *(long *)(lVar8 + 0x68);
  if (lVar9 == 0) {
    plVar16 = &lStack_58;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar9 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = plVar16[lVar9];
    pcVar14 = *(code **)(lVar10 + 0x10);
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10);
    }
    iVar4 = func_0x00f78a4c(lVar10);
    bVar3 = *(char *)(lVar10 + 0x4a) == '\x01';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01552480:
          (*pcVar14)(param_2,lVar10);
        }
        else {
          if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x01552378;
          iVar4 = func_0x00f78a44(lVar10);
          iVar5 = func_0x00f78ec0(lVar10);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar10 + 0x48);
            if (iVar5 == 0) {
              lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar10 + 0x138))(plVar1,param_2,*(undefined8 *)(lVar10 + 0x140));
              goto code_r0x0155248c;
            }
            lVar10 = func_0x00f78a48(lVar10);
            lVar11 = *plVar1;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar10) {
                  puVar7 = (undefined8 *)
                           (lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01552618;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x01552618:
            pcVar14 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar11 = *plVar1;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x015525f0;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x00fac1f0(plVar1);
code_r0x015525f0:
              uVar6 = *(undefined8 *)(lVar11 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
            pcVar14 = (code *)*puVar7;
          }
          (*pcVar14)(plVar1,param_2,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(lVar8 + 0x18) == 0))
        goto code_r0x01552480;
        iVar4 = func_0x00f78a44(lVar10);
        iVar5 = func_0x00f78ec0(lVar10);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar10 + 0x48);
          if (iVar5 == 0) {
            lVar10 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar10 + 0x138))(param_2,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x0155248c;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar11 = *param_2;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar7 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x015525b4;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(param_2,lVar10,(ulong)uVar2);
code_r0x015525b4:
          pcVar14 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_2;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x0155258c;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(param_2);
code_r0x0155258c:
            uVar6 = *(undefined8 *)(lVar11 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
          pcVar14 = (code *)*puVar7;
        }
        (*pcVar14)(param_2,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01552480;
code_r0x01552378:
      (*pcVar14)(plVar1,param_2,lVar10);
    }
code_r0x0155248c:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15a5ef8 | Atlas.Gameplay.Player.GameContextPlayerManager.add_OnDriftButtonStateChanged
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__add_OnDriftButtonStateChanged
               (long param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  code *pcVar17;
  long lVar18;
  undefined1 auVar19 [16];
  long lStack_c8;
  
  if ((bRam0000000003eb51f7 & 1) == 0) {
    func_0x00f78a20(0x3d27708);
    bRam0000000003eb51f7 = 1;
  }
  lVar11 = *(long *)(param_1 + 0x90);
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDriftButtonStateDelegate_TypeInfo*/ lRam0000000003d27708))) {
    lVar9 = func_0x00ff0f44((long *)(param_1 + 0x90),plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar8);
  if ((bRam0000000003eb51f8 & 1) == 0) {
    func_0x00f78a20(0x3d27708);
    bRam0000000003eb51f8 = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x90);
  lVar11 = *plVar8;
  while( true ) {
    uVar12 = 0;
    plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar19._8_8_,0);
    if ((plVar10 != (long *)0x0) && (*plVar10 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDriftButtonStateDelegate_TypeInfo*/ lRam0000000003d27708)) break;
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  plVar8 = auVar19._8_8_;
  lVar11 = *(long *)(auVar19._0_8_ + 0x90);
  if (lVar11 == 0) {
    return;
  }
  lStack_c8 = lVar11;
  lVar9 = *(long *)(lVar11 + 0x68);
  if (lVar9 == 0) {
    plVar10 = &lStack_c8;
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar9 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    plVar10 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar13 = plVar10[lVar9];
    pcVar17 = *(code **)(lVar13 + 0x10);
    plVar1 = *(long **)(lVar13 + 0x20);
    lVar13 = *(long *)(lVar13 + 0x28);
    if (*(short *)(lVar13 + 0x48) == -1) {
      func_0x00f78ad8(lVar13);
    }
    iVar4 = func_0x00f78a4c(lVar13);
    bVar3 = *(char *)(lVar13 + 0x4a) == '\x02';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x0155284c:
          (*pcVar17)(plVar8,uVar12,lVar13);
        }
        else {
          if (((*(short *)(lVar13 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar11 + 0x18) == 0)) goto code_r0x01552740;
          iVar4 = func_0x00f78a44(lVar13);
          iVar5 = func_0x00f78ec0(lVar13);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar13 + 0x48);
            if (iVar5 == 0) {
              lVar13 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar13 + 0x138))(plVar1,plVar8,uVar12,*(undefined8 *)(lVar13 + 0x140));
              goto code_r0x0155285c;
            }
            lVar13 = func_0x00f78a48(lVar13);
            lVar14 = *plVar1;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar13) {
                  puVar7 = (undefined8 *)
                           (lVar14 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x015529f4;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar13,(ulong)uVar2);
code_r0x015529f4:
            pcVar17 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar14 = *plVar1;
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)(lVar13 + 0x18)) {
                    lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar13 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x015529cc;
                  }
                  piVar16 = piVar16 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              lVar14 = func_0x00fac1f0(plVar1);
code_r0x015529cc:
              uVar6 = *(undefined8 *)(lVar14 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar13);
            pcVar17 = (code *)*puVar7;
          }
          (*pcVar17)(plVar1,plVar8,uVar12,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar13 + 0x48) == -1) || (*(long *)(lVar11 + 0x18) == 0))
        goto code_r0x0155284c;
        iVar4 = func_0x00f78a44(lVar13);
        iVar5 = func_0x00f78ec0(lVar13);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar13 + 0x48);
          if (iVar5 == 0) {
            lVar13 = *plVar8 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar13 + 0x138))(plVar8,uVar12,*(undefined8 *)(lVar13 + 0x140));
            goto code_r0x0155285c;
          }
          lVar13 = func_0x00f78a48(lVar13);
          lVar14 = *plVar8;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar13) {
                puVar7 = (undefined8 *)(lVar14 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01552988;
              }
              piVar16 = piVar16 + 4;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar13,(ulong)uVar2);
code_r0x01552988:
          pcVar17 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar14 = *plVar8;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)(lVar13 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar13 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01552960;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            lVar14 = func_0x00fac1f0(plVar8);
code_r0x01552960:
            uVar6 = *(undefined8 *)(lVar14 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar13);
          pcVar17 = (code *)*puVar7;
        }
        (*pcVar17)(plVar8,uVar12,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x0155284c;
code_r0x01552740:
      (*pcVar17)(plVar1,plVar8,uVar12,lVar13);
    }
code_r0x0155285c:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15a5f98 | Atlas.Gameplay.Player.GameContextPlayerManager.remove_OnDriftButtonStateChanged
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnDriftButtonStateChanged
               (long param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  undefined1 auVar19 [16];
  long lStack_98;
  
  if ((bRam0000000003eb51f8 & 1) == 0) {
    func_0x00f78a20(0x3d27708);
    bRam0000000003eb51f8 = 1;
  }
  lVar10 = *(long *)(param_1 + 0x90);
  while( true ) {
    uVar11 = 0;
    plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar10,param_2,0);
    if ((plVar8 != (long *)0x0) && (*plVar8 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDriftButtonStateDelegate_TypeInfo*/ lRam0000000003d27708)) break;
    lVar9 = func_0x00ff0f44((long *)(param_1 + 0x90),plVar8,lVar10);
    bVar3 = lVar10 == lVar9;
    lVar10 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar8);
  plVar8 = auVar19._8_8_;
  lVar10 = *(long *)(auVar19._0_8_ + 0x90);
  if (lVar10 == 0) {
    return;
  }
  lStack_98 = lVar10;
  lVar9 = *(long *)(lVar10 + 0x68);
  if (lVar9 == 0) {
    plVar18 = &lStack_98;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar9 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    plVar18 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar12 = plVar18[lVar9];
    pcVar16 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    bVar3 = *(char *)(lVar12 + 0x4a) == '\x02';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x0155284c:
          (*pcVar16)(plVar8,uVar11,lVar12);
        }
        else {
          if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar10 + 0x18) == 0)) goto code_r0x01552740;
          iVar4 = func_0x00f78a44(lVar12);
          iVar5 = func_0x00f78ec0(lVar12);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar12 + 0x48);
            if (iVar5 == 0) {
              lVar12 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar12 + 0x138))(plVar1,plVar8,uVar11,*(undefined8 *)(lVar12 + 0x140));
              goto code_r0x0155285c;
            }
            lVar12 = func_0x00f78a48(lVar12);
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar12) {
                  puVar7 = (undefined8 *)
                           (lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x015529f4;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar2);
code_r0x015529f4:
            pcVar16 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar13 = *plVar1;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                    lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x015529cc;
                  }
                  piVar15 = piVar15 + 4;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              lVar13 = func_0x00fac1f0(plVar1);
code_r0x015529cc:
              uVar6 = *(undefined8 *)(lVar13 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
            pcVar16 = (code *)*puVar7;
          }
          (*pcVar16)(plVar1,plVar8,uVar11,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar12 + 0x48) == -1) || (*(long *)(lVar10 + 0x18) == 0))
        goto code_r0x0155284c;
        iVar4 = func_0x00f78a44(lVar12);
        iVar5 = func_0x00f78ec0(lVar12);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar12 + 0x48);
          if (iVar5 == 0) {
            lVar12 = *plVar8 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar8,uVar11,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x0155285c;
          }
          lVar12 = func_0x00f78a48(lVar12);
          lVar13 = *plVar8;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01552988;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar12,(ulong)uVar2);
code_r0x01552988:
          pcVar16 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar8;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01552960;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar8);
code_r0x01552960:
            uVar6 = *(undefined8 *)(lVar13 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
          pcVar16 = (code *)*puVar7;
        }
        (*pcVar16)(plVar8,uVar11,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x0155284c;
code_r0x01552740:
      (*pcVar16)(plVar1,plVar8,uVar11,lVar12);
    }
code_r0x0155285c:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15a6038 | Atlas.Gameplay.Player.GameContextPlayerManager.FireOnDriftButtonStateChanged
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__FireOnDriftButtonStateChanged
               (long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_68;
  
  lVar8 = *(long *)(param_1 + 0x90);
  if (lVar8 == 0) {
    return;
  }
  lStack_68 = lVar8;
  lVar9 = *(long *)(lVar8 + 0x68);
  if (lVar9 == 0) {
    plVar16 = &lStack_68;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar9 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = plVar16[lVar9];
    pcVar14 = *(code **)(lVar10 + 0x10);
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10);
    }
    iVar4 = func_0x00f78a4c(lVar10);
    bVar3 = *(char *)(lVar10 + 0x4a) == '\x02';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x0155284c:
          (*pcVar14)(param_2,param_3,lVar10);
        }
        else {
          if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x01552740;
          iVar4 = func_0x00f78a44(lVar10);
          iVar5 = func_0x00f78ec0(lVar10);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar10 + 0x48);
            if (iVar5 == 0) {
              lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar10 + 0x138))(plVar1,param_2,param_3,*(undefined8 *)(lVar10 + 0x140));
              goto code_r0x0155285c;
            }
            lVar10 = func_0x00f78a48(lVar10);
            lVar11 = *plVar1;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar10) {
                  puVar7 = (undefined8 *)
                           (lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x015529f4;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x015529f4:
            pcVar14 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar11 = *plVar1;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x015529cc;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x00fac1f0(plVar1);
code_r0x015529cc:
              uVar6 = *(undefined8 *)(lVar11 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
            pcVar14 = (code *)*puVar7;
          }
          (*pcVar14)(plVar1,param_2,param_3,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(lVar8 + 0x18) == 0))
        goto code_r0x0155284c;
        iVar4 = func_0x00f78a44(lVar10);
        iVar5 = func_0x00f78ec0(lVar10);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar10 + 0x48);
          if (iVar5 == 0) {
            lVar10 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar10 + 0x138))(param_2,param_3,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x0155285c;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar11 = *param_2;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar7 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01552988;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(param_2,lVar10,(ulong)uVar2);
code_r0x01552988:
          pcVar14 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_2;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01552960;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(param_2);
code_r0x01552960:
            uVar6 = *(undefined8 *)(lVar11 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
          pcVar14 = (code *)*puVar7;
        }
        (*pcVar14)(param_2,param_3,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x0155284c;
code_r0x01552740:
      (*pcVar14)(plVar1,param_2,param_3,lVar10);
    }
code_r0x0155285c:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15a604c | Atlas.Gameplay.Player.GameContextPlayerManager.add_PlaySplat
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__add_PlaySplat
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  code *pcVar17;
  long lVar18;
  undefined1 auVar19 [16];
  long lStack_128;
  
  if ((bRam0000000003eb51ff & 1) == 0) {
    func_0x00f78a20(0x3d27710);
    bRam0000000003eb51ff = 1;
  }
  lVar11 = *(long *)(param_1 + 0xb0);
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.SplatDelegate_TypeInfo*/ lRam0000000003d27710))) {
    lVar9 = func_0x00ff0f44((long *)(param_1 + 0xb0),plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar8);
  if ((bRam0000000003eb5200 & 1) == 0) {
    func_0x00f78a20(0x3d27710);
    bRam0000000003eb5200 = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0xb0);
  lVar11 = *plVar8;
  while ((plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.SplatDelegate_TypeInfo*/ lRam0000000003d27710))) {
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  if ((bRam0000000003eb5201 & 1) == 0) {
    func_0x00f78a20(0x3d27710);
    bRam0000000003eb5201 = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0xb8);
  lVar11 = *plVar8;
  while ((plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.SplatDelegate_TypeInfo*/ lRam0000000003d27710))) {
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  if ((bRam0000000003eb5202 & 1) == 0) {
    func_0x00f78a20(0x3d27710);
    bRam0000000003eb5202 = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0xb8);
  lVar11 = *plVar8;
  while( true ) {
    uVar12 = 0;
    plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar19._8_8_,0);
    if ((plVar10 != (long *)0x0) && (*plVar10 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.SplatDelegate_TypeInfo*/ lRam0000000003d27710)) break;
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  plVar8 = auVar19._8_8_;
  lVar11 = *(long *)(auVar19._0_8_ + 0x98);
  if (lVar11 == 0) {
    return;
  }
  lStack_128 = lVar11;
  lVar9 = *(long *)(lVar11 + 0x68);
  if (lVar9 == 0) {
    plVar10 = &lStack_128;
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar9 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    plVar10 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar13 = plVar10[lVar9];
    pcVar17 = *(code **)(lVar13 + 0x10);
    plVar1 = *(long **)(lVar13 + 0x20);
    lVar13 = *(long *)(lVar13 + 0x28);
    if (*(short *)(lVar13 + 0x48) == -1) {
      func_0x00f78ad8(lVar13);
    }
    iVar4 = func_0x00f78a4c(lVar13);
    bVar3 = *(char *)(lVar13 + 0x4a) == '\x03';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01553a4c:
          (*pcVar17)(plVar8,uVar12,param_4,lVar13);
        }
        else {
          if (((*(short *)(lVar13 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar11 + 0x18) == 0)) goto code_r0x0155393c;
          iVar4 = func_0x00f78a44(lVar13);
          iVar5 = func_0x00f78ec0(lVar13);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar13 + 0x48);
            if (iVar5 == 0) {
              lVar13 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar13 + 0x138))
                        (plVar1,plVar8,uVar12,param_4,*(undefined8 *)(lVar13 + 0x140));
              goto code_r0x01553a60;
            }
            lVar13 = func_0x00f78a48(lVar13);
            lVar14 = *plVar1;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar13) {
                  puVar7 = (undefined8 *)
                           (lVar14 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01553c04;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar13,(ulong)uVar2);
code_r0x01553c04:
            pcVar17 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar14 = *plVar1;
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)(lVar13 + 0x18)) {
                    lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar13 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01553bdc;
                  }
                  piVar16 = piVar16 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              lVar14 = func_0x00fac1f0(plVar1);
code_r0x01553bdc:
              uVar6 = *(undefined8 *)(lVar14 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar13);
            pcVar17 = (code *)*puVar7;
          }
          (*pcVar17)(plVar1,plVar8,uVar12,param_4,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar13 + 0x48) == -1) || (*(long *)(lVar11 + 0x18) == 0))
        goto code_r0x01553a4c;
        iVar4 = func_0x00f78a44(lVar13);
        iVar5 = func_0x00f78ec0(lVar13);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar13 + 0x48);
          if (iVar5 == 0) {
            lVar13 = *plVar8 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar13 + 0x138))(plVar8,uVar12,param_4,*(undefined8 *)(lVar13 + 0x140));
            goto code_r0x01553a60;
          }
          lVar13 = func_0x00f78a48(lVar13);
          lVar14 = *plVar8;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar13) {
                puVar7 = (undefined8 *)(lVar14 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01553b90;
              }
              piVar16 = piVar16 + 4;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar13,(ulong)uVar2);
code_r0x01553b90:
          pcVar17 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar14 = *plVar8;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)(lVar13 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar13 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01553b68;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            lVar14 = func_0x00fac1f0(plVar8);
code_r0x01553b68:
            uVar6 = *(undefined8 *)(lVar14 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar13);
          pcVar17 = (code *)*puVar7;
        }
        (*pcVar17)(plVar8,uVar12,param_4,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01553a4c;
code_r0x0155393c:
      (*pcVar17)(plVar1,plVar8,uVar12,param_4,lVar13);
    }
code_r0x01553a60:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15a60ec | Atlas.Gameplay.Player.GameContextPlayerManager.remove_PlaySplat
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__remove_PlaySplat
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  code *pcVar17;
  long lVar18;
  undefined1 auVar19 [16];
  long lStack_f8;
  
  if ((bRam0000000003eb5200 & 1) == 0) {
    func_0x00f78a20(0x3d27710);
    bRam0000000003eb5200 = 1;
  }
  lVar11 = *(long *)(param_1 + 0xb0);
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.SplatDelegate_TypeInfo*/ lRam0000000003d27710))) {
    lVar9 = func_0x00ff0f44((long *)(param_1 + 0xb0),plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar8);
  if ((bRam0000000003eb5201 & 1) == 0) {
    func_0x00f78a20(0x3d27710);
    bRam0000000003eb5201 = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0xb8);
  lVar11 = *plVar8;
  while ((plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.SplatDelegate_TypeInfo*/ lRam0000000003d27710))) {
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  if ((bRam0000000003eb5202 & 1) == 0) {
    func_0x00f78a20(0x3d27710);
    bRam0000000003eb5202 = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0xb8);
  lVar11 = *plVar8;
  while( true ) {
    uVar12 = 0;
    plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar19._8_8_,0);
    if ((plVar10 != (long *)0x0) && (*plVar10 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.SplatDelegate_TypeInfo*/ lRam0000000003d27710)) break;
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  plVar8 = auVar19._8_8_;
  lVar11 = *(long *)(auVar19._0_8_ + 0x98);
  if (lVar11 == 0) {
    return;
  }
  lStack_f8 = lVar11;
  lVar9 = *(long *)(lVar11 + 0x68);
  if (lVar9 == 0) {
    plVar10 = &lStack_f8;
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar9 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    plVar10 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar13 = plVar10[lVar9];
    pcVar17 = *(code **)(lVar13 + 0x10);
    plVar1 = *(long **)(lVar13 + 0x20);
    lVar13 = *(long *)(lVar13 + 0x28);
    if (*(short *)(lVar13 + 0x48) == -1) {
      func_0x00f78ad8(lVar13);
    }
    iVar4 = func_0x00f78a4c(lVar13);
    bVar3 = *(char *)(lVar13 + 0x4a) == '\x03';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01553a4c:
          (*pcVar17)(plVar8,uVar12,param_4,lVar13);
        }
        else {
          if (((*(short *)(lVar13 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar11 + 0x18) == 0)) goto code_r0x0155393c;
          iVar4 = func_0x00f78a44(lVar13);
          iVar5 = func_0x00f78ec0(lVar13);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar13 + 0x48);
            if (iVar5 == 0) {
              lVar13 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar13 + 0x138))
                        (plVar1,plVar8,uVar12,param_4,*(undefined8 *)(lVar13 + 0x140));
              goto code_r0x01553a60;
            }
            lVar13 = func_0x00f78a48(lVar13);
            lVar14 = *plVar1;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar13) {
                  puVar7 = (undefined8 *)
                           (lVar14 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01553c04;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar13,(ulong)uVar2);
code_r0x01553c04:
            pcVar17 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar14 = *plVar1;
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)(lVar13 + 0x18)) {
                    lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar13 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01553bdc;
                  }
                  piVar16 = piVar16 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              lVar14 = func_0x00fac1f0(plVar1);
code_r0x01553bdc:
              uVar6 = *(undefined8 *)(lVar14 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar13);
            pcVar17 = (code *)*puVar7;
          }
          (*pcVar17)(plVar1,plVar8,uVar12,param_4,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar13 + 0x48) == -1) || (*(long *)(lVar11 + 0x18) == 0))
        goto code_r0x01553a4c;
        iVar4 = func_0x00f78a44(lVar13);
        iVar5 = func_0x00f78ec0(lVar13);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar13 + 0x48);
          if (iVar5 == 0) {
            lVar13 = *plVar8 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar13 + 0x138))(plVar8,uVar12,param_4,*(undefined8 *)(lVar13 + 0x140));
            goto code_r0x01553a60;
          }
          lVar13 = func_0x00f78a48(lVar13);
          lVar14 = *plVar8;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar13) {
                puVar7 = (undefined8 *)(lVar14 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01553b90;
              }
              piVar16 = piVar16 + 4;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar13,(ulong)uVar2);
code_r0x01553b90:
          pcVar17 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar14 = *plVar8;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)(lVar13 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar13 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01553b68;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            lVar14 = func_0x00fac1f0(plVar8);
code_r0x01553b68:
            uVar6 = *(undefined8 *)(lVar14 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar13);
          pcVar17 = (code *)*puVar7;
        }
        (*pcVar17)(plVar8,uVar12,param_4,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01553a4c;
code_r0x0155393c:
      (*pcVar17)(plVar1,plVar8,uVar12,param_4,lVar13);
    }
code_r0x01553a60:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15a618c | Atlas.Gameplay.Player.GameContextPlayerManager.add_StopSplat
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__add_StopSplat
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  code *pcVar17;
  long lVar18;
  undefined1 auVar19 [16];
  long lStack_c8;
  
  if ((bRam0000000003eb5201 & 1) == 0) {
    func_0x00f78a20(0x3d27710);
    bRam0000000003eb5201 = 1;
  }
  lVar11 = *(long *)(param_1 + 0xb8);
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.SplatDelegate_TypeInfo*/ lRam0000000003d27710))) {
    lVar9 = func_0x00ff0f44((long *)(param_1 + 0xb8),plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar8);
  if ((bRam0000000003eb5202 & 1) == 0) {
    func_0x00f78a20(0x3d27710);
    bRam0000000003eb5202 = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0xb8);
  lVar11 = *plVar8;
  while( true ) {
    uVar12 = 0;
    plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar19._8_8_,0);
    if ((plVar10 != (long *)0x0) && (*plVar10 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.SplatDelegate_TypeInfo*/ lRam0000000003d27710)) break;
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  plVar8 = auVar19._8_8_;
  lVar11 = *(long *)(auVar19._0_8_ + 0x98);
  if (lVar11 == 0) {
    return;
  }
  lStack_c8 = lVar11;
  lVar9 = *(long *)(lVar11 + 0x68);
  if (lVar9 == 0) {
    plVar10 = &lStack_c8;
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar9 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    plVar10 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar13 = plVar10[lVar9];
    pcVar17 = *(code **)(lVar13 + 0x10);
    plVar1 = *(long **)(lVar13 + 0x20);
    lVar13 = *(long *)(lVar13 + 0x28);
    if (*(short *)(lVar13 + 0x48) == -1) {
      func_0x00f78ad8(lVar13);
    }
    iVar4 = func_0x00f78a4c(lVar13);
    bVar3 = *(char *)(lVar13 + 0x4a) == '\x03';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01553a4c:
          (*pcVar17)(plVar8,uVar12,param_4,lVar13);
        }
        else {
          if (((*(short *)(lVar13 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar11 + 0x18) == 0)) goto code_r0x0155393c;
          iVar4 = func_0x00f78a44(lVar13);
          iVar5 = func_0x00f78ec0(lVar13);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar13 + 0x48);
            if (iVar5 == 0) {
              lVar13 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar13 + 0x138))
                        (plVar1,plVar8,uVar12,param_4,*(undefined8 *)(lVar13 + 0x140));
              goto code_r0x01553a60;
            }
            lVar13 = func_0x00f78a48(lVar13);
            lVar14 = *plVar1;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar13) {
                  puVar7 = (undefined8 *)
                           (lVar14 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01553c04;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar13,(ulong)uVar2);
code_r0x01553c04:
            pcVar17 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar14 = *plVar1;
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)(lVar13 + 0x18)) {
                    lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar13 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01553bdc;
                  }
                  piVar16 = piVar16 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              lVar14 = func_0x00fac1f0(plVar1);
code_r0x01553bdc:
              uVar6 = *(undefined8 *)(lVar14 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar13);
            pcVar17 = (code *)*puVar7;
          }
          (*pcVar17)(plVar1,plVar8,uVar12,param_4,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar13 + 0x48) == -1) || (*(long *)(lVar11 + 0x18) == 0))
        goto code_r0x01553a4c;
        iVar4 = func_0x00f78a44(lVar13);
        iVar5 = func_0x00f78ec0(lVar13);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar13 + 0x48);
          if (iVar5 == 0) {
            lVar13 = *plVar8 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar13 + 0x138))(plVar8,uVar12,param_4,*(undefined8 *)(lVar13 + 0x140));
            goto code_r0x01553a60;
          }
          lVar13 = func_0x00f78a48(lVar13);
          lVar14 = *plVar8;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar13) {
                puVar7 = (undefined8 *)(lVar14 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01553b90;
              }
              piVar16 = piVar16 + 4;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar13,(ulong)uVar2);
code_r0x01553b90:
          pcVar17 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar14 = *plVar8;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)(lVar13 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar13 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01553b68;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            lVar14 = func_0x00fac1f0(plVar8);
code_r0x01553b68:
            uVar6 = *(undefined8 *)(lVar14 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar13);
          pcVar17 = (code *)*puVar7;
        }
        (*pcVar17)(plVar8,uVar12,param_4,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01553a4c;
code_r0x0155393c:
      (*pcVar17)(plVar1,plVar8,uVar12,param_4,lVar13);
    }
code_r0x01553a60:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15a622c | Atlas.Gameplay.Player.GameContextPlayerManager.remove_StopSplat
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__remove_StopSplat
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  undefined1 auVar19 [16];
  long lStack_98;
  
  if ((bRam0000000003eb5202 & 1) == 0) {
    func_0x00f78a20(0x3d27710);
    bRam0000000003eb5202 = 1;
  }
  lVar10 = *(long *)(param_1 + 0xb8);
  while( true ) {
    uVar11 = 0;
    plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar10,param_2,0);
    if ((plVar8 != (long *)0x0) && (*plVar8 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.SplatDelegate_TypeInfo*/ lRam0000000003d27710)) break;
    lVar9 = func_0x00ff0f44((long *)(param_1 + 0xb8),plVar8,lVar10);
    bVar3 = lVar10 == lVar9;
    lVar10 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar8);
  plVar8 = auVar19._8_8_;
  lVar10 = *(long *)(auVar19._0_8_ + 0x98);
  if (lVar10 == 0) {
    return;
  }
  lStack_98 = lVar10;
  lVar9 = *(long *)(lVar10 + 0x68);
  if (lVar9 == 0) {
    plVar18 = &lStack_98;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar9 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    plVar18 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar12 = plVar18[lVar9];
    pcVar16 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    bVar3 = *(char *)(lVar12 + 0x4a) == '\x03';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01553a4c:
          (*pcVar16)(plVar8,uVar11,param_4,lVar12);
        }
        else {
          if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar10 + 0x18) == 0)) goto code_r0x0155393c;
          iVar4 = func_0x00f78a44(lVar12);
          iVar5 = func_0x00f78ec0(lVar12);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar12 + 0x48);
            if (iVar5 == 0) {
              lVar12 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar12 + 0x138))
                        (plVar1,plVar8,uVar11,param_4,*(undefined8 *)(lVar12 + 0x140));
              goto code_r0x01553a60;
            }
            lVar12 = func_0x00f78a48(lVar12);
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar12) {
                  puVar7 = (undefined8 *)
                           (lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01553c04;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar2);
code_r0x01553c04:
            pcVar16 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar13 = *plVar1;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                    lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01553bdc;
                  }
                  piVar15 = piVar15 + 4;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              lVar13 = func_0x00fac1f0(plVar1);
code_r0x01553bdc:
              uVar6 = *(undefined8 *)(lVar13 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
            pcVar16 = (code *)*puVar7;
          }
          (*pcVar16)(plVar1,plVar8,uVar11,param_4,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar12 + 0x48) == -1) || (*(long *)(lVar10 + 0x18) == 0))
        goto code_r0x01553a4c;
        iVar4 = func_0x00f78a44(lVar12);
        iVar5 = func_0x00f78ec0(lVar12);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar12 + 0x48);
          if (iVar5 == 0) {
            lVar12 = *plVar8 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar8,uVar11,param_4,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x01553a60;
          }
          lVar12 = func_0x00f78a48(lVar12);
          lVar13 = *plVar8;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01553b90;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar12,(ulong)uVar2);
code_r0x01553b90:
          pcVar16 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar8;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01553b68;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar8);
code_r0x01553b68:
            uVar6 = *(undefined8 *)(lVar13 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
          pcVar16 = (code *)*puVar7;
        }
        (*pcVar16)(plVar8,uVar11,param_4,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01553a4c;
code_r0x0155393c:
      (*pcVar16)(plVar1,plVar8,uVar11,param_4,lVar12);
    }
code_r0x01553a60:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15a62cc | Atlas.Gameplay.Player.GameContextPlayerManager.FireOnUsableHitPlayer
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__FireOnUsableHitPlayer
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_68;
  
  lVar8 = *(long *)(param_1 + 0x98);
  if (lVar8 == 0) {
    return;
  }
  lStack_68 = lVar8;
  lVar9 = *(long *)(lVar8 + 0x68);
  if (lVar9 == 0) {
    plVar16 = &lStack_68;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar9 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = plVar16[lVar9];
    pcVar14 = *(code **)(lVar10 + 0x10);
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10);
    }
    iVar4 = func_0x00f78a4c(lVar10);
    bVar3 = *(char *)(lVar10 + 0x4a) == '\x03';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01553a4c:
          (*pcVar14)(param_2,param_3,param_4,lVar10);
        }
        else {
          if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x0155393c;
          iVar4 = func_0x00f78a44(lVar10);
          iVar5 = func_0x00f78ec0(lVar10);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar10 + 0x48);
            if (iVar5 == 0) {
              lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar10 + 0x138))
                        (plVar1,param_2,param_3,param_4,*(undefined8 *)(lVar10 + 0x140));
              goto code_r0x01553a60;
            }
            lVar10 = func_0x00f78a48(lVar10);
            lVar11 = *plVar1;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar10) {
                  puVar7 = (undefined8 *)
                           (lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01553c04;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x01553c04:
            pcVar14 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar11 = *plVar1;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01553bdc;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x00fac1f0(plVar1);
code_r0x01553bdc:
              uVar6 = *(undefined8 *)(lVar11 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
            pcVar14 = (code *)*puVar7;
          }
          (*pcVar14)(plVar1,param_2,param_3,param_4,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(lVar8 + 0x18) == 0))
        goto code_r0x01553a4c;
        iVar4 = func_0x00f78a44(lVar10);
        iVar5 = func_0x00f78ec0(lVar10);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar10 + 0x48);
          if (iVar5 == 0) {
            lVar10 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar10 + 0x138))(param_2,param_3,param_4,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x01553a60;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar11 = *param_2;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar7 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01553b90;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(param_2,lVar10,(ulong)uVar2);
code_r0x01553b90:
          pcVar14 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_2;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01553b68;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(param_2);
code_r0x01553b68:
            uVar6 = *(undefined8 *)(lVar11 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
          pcVar14 = (code *)*puVar7;
        }
        (*pcVar14)(param_2,param_3,param_4,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01553a4c;
code_r0x0155393c:
      (*pcVar14)(plVar1,param_2,param_3,param_4,lVar10);
    }
code_r0x01553a60:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15a62e0 | Atlas.Gameplay.Player.GameContextPlayerManager.FireOnUsableHitShield
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__FireOnUsableHitShield
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_68;
  
  lVar8 = *(long *)(param_1 + 0xa0);
  if (lVar8 == 0) {
    return;
  }
  lStack_68 = lVar8;
  lVar9 = *(long *)(lVar8 + 0x68);
  if (lVar9 == 0) {
    plVar16 = &lStack_68;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar9 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = plVar16[lVar9];
    pcVar14 = *(code **)(lVar10 + 0x10);
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10);
    }
    iVar4 = func_0x00f78a4c(lVar10);
    bVar3 = *(char *)(lVar10 + 0x4a) == '\x04';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01553e64:
          (*pcVar14)(param_2,param_3,param_4,param_5,lVar10);
        }
        else {
          if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x01553d48;
          iVar4 = func_0x00f78a44(lVar10);
          iVar5 = func_0x00f78ec0(lVar10);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar10 + 0x48);
            if (iVar5 == 0) {
              lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar10 + 0x138))
                        (plVar1,param_2,param_3,param_4,param_5,*(undefined8 *)(lVar10 + 0x140));
              goto code_r0x01553e7c;
            }
            lVar10 = func_0x00f78a48(lVar10);
            lVar11 = *plVar1;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar10) {
                  puVar7 = (undefined8 *)
                           (lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x0155402c;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x0155402c:
            pcVar14 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar11 = *plVar1;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01554004;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x00fac1f0(plVar1);
code_r0x01554004:
              uVar6 = *(undefined8 *)(lVar11 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
            pcVar14 = (code *)*puVar7;
          }
          (*pcVar14)(plVar1,param_2,param_3,param_4,param_5,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(lVar8 + 0x18) == 0))
        goto code_r0x01553e64;
        iVar4 = func_0x00f78a44(lVar10);
        iVar5 = func_0x00f78ec0(lVar10);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar10 + 0x48);
          if (iVar5 == 0) {
            lVar10 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar10 + 0x138))
                      (param_2,param_3,param_4,param_5,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x01553e7c;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar11 = *param_2;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar7 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01553fb0;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(param_2,lVar10,(ulong)uVar2);
code_r0x01553fb0:
          pcVar14 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_2;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01553f88;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(param_2);
code_r0x01553f88:
            uVar6 = *(undefined8 *)(lVar11 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
          pcVar14 = (code *)*puVar7;
        }
        (*pcVar14)(param_2,param_3,param_4,param_5,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01553e64;
code_r0x01553d48:
      (*pcVar14)(plVar1,param_2,param_3,param_4,param_5,lVar10);
    }
code_r0x01553e7c:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15a62f4 | Atlas.Gameplay.Player.GameContextPlayerManager.FireOnUsableHoppedOver
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__FireOnUsableHoppedOver
               (long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_68;
  
  lVar8 = *(long *)(param_1 + 0xa8);
  if (lVar8 == 0) {
    return;
  }
  lStack_68 = lVar8;
  lVar9 = *(long *)(lVar8 + 0x68);
  if (lVar9 == 0) {
    plVar16 = &lStack_68;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar9 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = plVar16[lVar9];
    pcVar14 = *(code **)(lVar10 + 0x10);
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10);
    }
    iVar4 = func_0x00f78a4c(lVar10);
    bVar3 = *(char *)(lVar10 + 0x4a) == '\x02';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01554280:
          (*pcVar14)(param_2,param_3,lVar10);
        }
        else {
          if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x01554174;
          iVar4 = func_0x00f78a44(lVar10);
          iVar5 = func_0x00f78ec0(lVar10);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar10 + 0x48);
            if (iVar5 == 0) {
              lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar10 + 0x138))(plVar1,param_2,param_3,*(undefined8 *)(lVar10 + 0x140));
              goto code_r0x01554290;
            }
            lVar10 = func_0x00f78a48(lVar10);
            lVar11 = *plVar1;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar10) {
                  puVar7 = (undefined8 *)
                           (lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01554428;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x01554428:
            pcVar14 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar11 = *plVar1;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01554400;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x00fac1f0(plVar1);
code_r0x01554400:
              uVar6 = *(undefined8 *)(lVar11 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
            pcVar14 = (code *)*puVar7;
          }
          (*pcVar14)(plVar1,param_2,param_3,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(lVar8 + 0x18) == 0))
        goto code_r0x01554280;
        iVar4 = func_0x00f78a44(lVar10);
        iVar5 = func_0x00f78ec0(lVar10);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar10 + 0x48);
          if (iVar5 == 0) {
            lVar10 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar10 + 0x138))(param_2,param_3,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x01554290;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar11 = *param_2;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar7 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x015543bc;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(param_2,lVar10,(ulong)uVar2);
code_r0x015543bc:
          pcVar14 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_2;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01554394;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(param_2);
code_r0x01554394:
            uVar6 = *(undefined8 *)(lVar11 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
          pcVar14 = (code *)*puVar7;
        }
        (*pcVar14)(param_2,param_3,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01554280;
code_r0x01554174:
      (*pcVar14)(plVar1,param_2,param_3,lVar10);
    }
code_r0x01554290:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15a6308 | Atlas.Gameplay.Player.GameContextPlayerManager.InvokePlaySplat
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__InvokePlaySplat
               (long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_68;
  
  lVar8 = *(long *)(param_1 + 0xb0);
  if (lVar8 == 0) {
    return;
  }
  lStack_68 = lVar8;
  lVar9 = *(long *)(lVar8 + 0x68);
  if (lVar9 == 0) {
    plVar16 = &lStack_68;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar9 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = plVar16[lVar9];
    pcVar14 = *(code **)(lVar10 + 0x10);
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10);
    }
    iVar4 = func_0x00f78a4c(lVar10);
    bVar3 = *(char *)(lVar10 + 0x4a) == '\x02';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01552ca4:
          (*pcVar14)(param_2,param_3,lVar10);
        }
        else {
          if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x01552b98;
          iVar4 = func_0x00f78a44(lVar10);
          iVar5 = func_0x00f78ec0(lVar10);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar10 + 0x48);
            if (iVar5 == 0) {
              lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar10 + 0x138))(plVar1,param_2,param_3,*(undefined8 *)(lVar10 + 0x140));
              goto code_r0x01552cb4;
            }
            lVar10 = func_0x00f78a48(lVar10);
            lVar11 = *plVar1;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar10) {
                  puVar7 = (undefined8 *)
                           (lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01552e4c;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x01552e4c:
            pcVar14 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar11 = *plVar1;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01552e24;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x00fac1f0(plVar1);
code_r0x01552e24:
              uVar6 = *(undefined8 *)(lVar11 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
            pcVar14 = (code *)*puVar7;
          }
          (*pcVar14)(plVar1,param_2,param_3,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(lVar8 + 0x18) == 0))
        goto code_r0x01552ca4;
        iVar4 = func_0x00f78a44(lVar10);
        iVar5 = func_0x00f78ec0(lVar10);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar10 + 0x48);
          if (iVar5 == 0) {
            lVar10 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar10 + 0x138))(param_2,param_3,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x01552cb4;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar11 = *param_2;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar7 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01552de0;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(param_2,lVar10,(ulong)uVar2);
code_r0x01552de0:
          pcVar14 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_2;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01552db8;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(param_2);
code_r0x01552db8:
            uVar6 = *(undefined8 *)(lVar11 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
          pcVar14 = (code *)*puVar7;
        }
        (*pcVar14)(param_2,param_3,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01552ca4;
code_r0x01552b98:
      (*pcVar14)(plVar1,param_2,param_3,lVar10);
    }
code_r0x01552cb4:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15a631c | Atlas.Gameplay.Player.GameContextPlayerManager.InvokeStopSplat
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__InvokeStopSplat(long param_1,long *param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_68;
  
  lVar8 = *(long *)(param_1 + 0xb8);
  if (lVar8 == 0) {
    return;
  }
  lStack_68 = lVar8;
  lVar9 = *(long *)(lVar8 + 0x68);
  if (lVar9 == 0) {
    plVar16 = &lStack_68;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar9 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = plVar16[lVar9];
    pcVar14 = *(code **)(lVar10 + 0x10);
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10);
    }
    iVar4 = func_0x00f78a4c(lVar10);
    bVar3 = *(char *)(lVar10 + 0x4a) == '\x02';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01552ca4:
          (*pcVar14)(param_2,0,lVar10);
        }
        else {
          if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x01552b98;
          iVar4 = func_0x00f78a44(lVar10);
          iVar5 = func_0x00f78ec0(lVar10);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar10 + 0x48);
            if (iVar5 == 0) {
              lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar10 + 0x138))(plVar1,param_2,0,*(undefined8 *)(lVar10 + 0x140));
              goto code_r0x01552cb4;
            }
            lVar10 = func_0x00f78a48(lVar10);
            lVar11 = *plVar1;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar10) {
                  puVar7 = (undefined8 *)
                           (lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01552e4c;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x01552e4c:
            pcVar14 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar11 = *plVar1;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01552e24;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x00fac1f0(plVar1);
code_r0x01552e24:
              uVar6 = *(undefined8 *)(lVar11 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
            pcVar14 = (code *)*puVar7;
          }
          (*pcVar14)(plVar1,param_2,0,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(lVar8 + 0x18) == 0))
        goto code_r0x01552ca4;
        iVar4 = func_0x00f78a44(lVar10);
        iVar5 = func_0x00f78ec0(lVar10);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar10 + 0x48);
          if (iVar5 == 0) {
            lVar10 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar10 + 0x138))(param_2,0,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x01552cb4;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar11 = *param_2;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar7 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01552de0;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(param_2,lVar10,(ulong)uVar2);
code_r0x01552de0:
          pcVar14 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_2;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01552db8;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(param_2);
code_r0x01552db8:
            uVar6 = *(undefined8 *)(lVar11 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
          pcVar14 = (code *)*puVar7;
        }
        (*pcVar14)(param_2,0,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01552ca4;
code_r0x01552b98:
      (*pcVar14)(plVar1,param_2,0,lVar10);
    }
code_r0x01552cb4:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15a6334 | Atlas.Gameplay.Player.GameContextPlayerManager.get_Players
// ============================================================

undefined8 Atlas_Gameplay_Player_GameContextPlayerManager__get_Players(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x15a633c | Atlas.Gameplay.Player.GameContextPlayerManager.get_PlayersReadOnly
// ============================================================

undefined8 Atlas_Gameplay_Player_GameContextPlayerManager__get_PlayersReadOnly(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x15a6344 | Atlas.Gameplay.Player.GameContextPlayerManager.get_AIPlayers
// ============================================================

undefined8 Atlas_Gameplay_Player_GameContextPlayerManager__get_AIPlayers(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x15a634c | Atlas.Gameplay.Player.GameContextPlayerManager.SortPlayers
// ============================================================

long Atlas_Gameplay_Player_GameContextPlayerManager__SortPlayers(long param_1)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  int extraout_w1;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb5206 & 1) == 0) {
    func_0x00f78a20(0x3d51a00);
    func_0x00f78a20(0x3d51a08);
    func_0x00f78a20(0x3d51a10);
    bRam0000000003eb5206 = 1;
  }
  auVar13 = /*Core.Containers.ArrayIteratorExtensions$$Begin<PlayerRankingPair>*/ func_0x01810464(*(undefined8 *)(param_1 + 0x30),uRam0000000003d51a00);
  lVar8 = auVar13._0_8_;
  auVar14 = /*Core.Containers.ArrayIteratorExtensions$$End<PlayerRankingPair>*/ func_0x01810b10(*(undefined8 *)(param_1 + 0x30),uRam0000000003d51a08);
  lVar3 = /*Core.Containers.ArrayIteratorExtensions$$Sort<PlayerRankingPair>*/ func_0x01815218(lVar8,auVar13._8_8_,auVar14._0_8_,auVar14._8_8_,
                          *(undefined8 *)(param_1 + 0x48),uRam0000000003d51a10);
  lVar6 = *(long *)(param_1 + 0x30);
  if (lVar6 != 0) {
    lVar9 = 0x20;
    lVar11 = 0;
    do {
      uVar10 = (uint)lVar11;
      if ((int)*(uint *)(lVar6 + 0x18) <= (int)uVar10) {
        return lVar3;
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar10) {
LAB_015a6480:
        uVar4 = func_0x00f78b24();
code_r0x015a648c:
        lVar3 = func_0x00f78ac0(uVar4,0);
        puStack_48 = &Atlas_Gameplay_Player_GameContextPlayerManager__UpdatePlayerTypeArrays;
        lStack_70 = lVar11;
        lStack_68 = lVar9;
        lStack_60 = lVar8;
        lStack_58 = param_1;
        puStack_50 = &stack0xfffffffffffffff0;
        if ((bRam0000000003eb520b & 1) == 0) {
          func_0x00f78a20(0x3d3a660);
          func_0x00f78a20(0x3d3a668);
          bRam0000000003eb520b = 1;
        }
        if (*(long *)(lVar3 + 0x38) == 0) goto code_r0x015a656c;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar3 + 0x38),uRam0000000003d3a668);
        if (*(long *)(lVar3 + 0x40) == 0) goto code_r0x015a656c;
        lVar8 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar3 + 0x40),uRam0000000003d3a668);
        lVar6 = *(long *)(lVar3 + 0x28);
        if (lVar6 == 0) goto code_r0x015a656c;
        lVar9 = 0;
        goto code_r0x015a6510;
      }
      lVar8 = *(long *)(lVar6 + lVar9);
      if (lVar8 == 0) break;
      *(int *)(lVar8 + 0x74) = (int)(lVar11 + 1);
      plVar12 = *(long **)(param_1 + 0x28);
      if (plVar12 == (long *)0x0) break;
      lVar3 = func_0x00f78adc(lVar8,*(undefined8 *)(*plVar12 + 0x40));
      if (lVar3 == 0) {
        uVar4 = func_0x00f78b14();
        goto code_r0x015a648c;
      }
      if (*(uint *)(plVar12 + 3) <= uVar10) goto LAB_015a6480;
      plVar12[lVar11 + 4] = lVar8;
      lVar6 = *(long *)(param_1 + 0x30);
      lVar9 = lVar9 + 0x28;
      lVar11 = lVar11 + 1;
    } while (lVar6 != 0);
  }
  lVar8 = func_0x00f78af4();
  return lVar8;
  while( true ) {
    if (*(uint *)(*(long *)(lVar8 + 0x10) + 0x50) < 2) {
      lVar6 = *(long *)(lVar3 + 0x38);
    }
    else {
      lVar6 = *(long *)(lVar3 + 0x40);
    }
    if (lVar6 == 0) break;
    lVar8 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar6,lVar8,uRam0000000003d3a660);
    lVar6 = *(long *)(lVar3 + 0x28);
    lVar9 = lVar9 + 1;
    if (lVar6 == 0) break;
code_r0x015a6510:
    if ((int)*(uint *)(lVar6 + 0x18) <= (int)(uint)lVar9) {
      return lVar8;
    }
    if (*(uint *)(lVar6 + 0x18) <= (uint)lVar9) {
      uVar4 = func_0x00f78b24();
      auVar13 = func_0x00f78ac0(uVar4,0);
      puStack_78 = &Atlas_Gameplay_Player_GameContextPlayerManager__GetPlayerFromKartComposite;
      lVar8 = *(long *)(auVar13._0_8_ + 0x28);
      ppuStack_80 = &puStack_50;
      if (lVar8 == 0) goto code_r0x015a65f8;
      iVar1 = *(int *)(lVar8 + 0x18);
      if (iVar1 < 1) {
        return 0;
      }
      iVar7 = 0;
      goto code_r0x015a65b4;
    }
    lVar8 = *(long *)(lVar6 + lVar9 * 8 + 0x20);
    if ((lVar8 == 0) || (*(long *)(lVar8 + 0x10) == 0)) break;
  }
code_r0x015a656c:
  lVar8 = func_0x00f78af4();
  return lVar8;
code_r0x015a65b4:
  if (iVar1 != iVar7) {
    lVar6 = *(long *)(lVar8 + (long)iVar7 * 8 + 0x20);
    if (lVar6 == 0) goto code_r0x015a65f8;
    if (*(long *)(lVar6 + 0x10) == auVar13._8_8_) {
      return lVar6;
    }
    iVar7 = iVar7 + 1;
    if (iVar1 == iVar7) {
      return 0;
    }
    goto code_r0x015a65b4;
  }
  uVar4 = func_0x00f78b24();
  func_0x00f78ac0(uVar4,0);
code_r0x015a65f8:
  auVar13 = func_0x00f78af4();
  uStack_a8 = 0x3d3a660;
  puStack_88 = &Atlas_Gameplay_Player_GameContextPlayerManager__OnRemotePlayerFinished;
  lStack_b0 = lVar11;
  lStack_a0 = lVar9;
  lStack_98 = lVar3;
  puStack_90 = (undefined1 *)&ppuStack_80;
  if ((bRam0000000003eb5205 & 1) == 0) {
    puStack_90 = (undefined1 *)&ppuStack_80;
    func_0x00f78a20(0x3d32b00);
    func_0x00f78a20(0x3d32b08);
    func_0x00f78a20(0x3d32b10);
    func_0x00f78a20(0x3d3b440);
    bRam0000000003eb5205 = 1;
  }
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (auVar13._8_8_ == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar12 = (long *)___cxa_begin_catch();
      lVar3 = *plVar12;
      ___cxa_end_catch();
      lVar8 = /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$Dispose*/ func_0x01f6cf98(&uStack_f0,uRam0000000003eb5000);
      if (lVar3 == 0) {
        return lVar8;
      }
      func_0x00f78ac0(lVar3,0);
    }
    lVar8 = __Unwind_Resume();
    *(undefined1 *)(lVar8 + 0x50) = 1;
    return lVar8;
  }
  /*System.Collections.Generic.List<NetworkEventStanding>$$GetEnumerator*/ func_0x02408f24(&uStack_f0,auVar13._8_8_,uRam0000000003d3b440);
  do {
    uVar5 = /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$MoveNext*/ func_0x01f6cf9c(&uStack_f0,uRam0000000003d32b08);
    if ((uVar5 & 1) == 0) goto code_r0x015a66d4;
    iVar1 = (int)uStack_e0;
    lVar8 = Atlas_Gameplay_Player_GameContextPlayerManager__GetLocalGameContextPlayer(auVar13._0_8_)
    ;
    if (lVar8 == 0) {
      func_0x00f78af4();
code_r0x015a6700:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x15a6704);
      (*pcVar2)();
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      func_0x00f78af4();
      goto code_r0x015a6700;
    }
  } while (iVar1 != *(int *)(*(long *)(lVar8 + 0x10) + 0x54));
  *(undefined1 *)(auVar13._0_8_ + 0x50) = 1;
code_r0x015a66d4:
  lVar8 = /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$Dispose*/ func_0x01f6cf98(&uStack_f0,uRam0000000003d32b00);
  return lVar8;
}



// ============================================================
// RVA: 0x15a6494 | Atlas.Gameplay.Player.GameContextPlayerManager.UpdatePlayerTypeArrays
// ============================================================

long Atlas_Gameplay_Player_GameContextPlayerManager__UpdatePlayerTypeArrays(long param_1)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  int extraout_w1;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if ((bRam0000000003eb520b & 1) == 0) {
    func_0x00f78a20(0x3d3a660);
    func_0x00f78a20(0x3d3a668);
    bRam0000000003eb520b = 1;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_1 + 0x38),uRam0000000003d3a668);
    if (*(long *)(param_1 + 0x40) != 0) {
      lVar3 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_1 + 0x40),uRam0000000003d3a668);
      lVar7 = *(long *)(param_1 + 0x28);
      if (lVar7 != 0) {
        lVar9 = 0;
        do {
          if ((int)*(uint *)(lVar7 + 0x18) <= (int)(uint)lVar9) {
            return lVar3;
          }
          if (*(uint *)(lVar7 + 0x18) <= (uint)lVar9) {
            uVar4 = func_0x00f78b24();
            auVar10 = func_0x00f78ac0(uVar4,0);
            lVar3 = *(long *)(auVar10._0_8_ + 0x28);
            if (lVar3 == 0) goto code_r0x015a65f8;
            iVar1 = *(int *)(lVar3 + 0x18);
            if (iVar1 < 1) {
              return 0;
            }
            iVar8 = 0;
            goto code_r0x015a65b4;
          }
          lVar3 = *(long *)(lVar7 + lVar9 * 8 + 0x20);
          if ((lVar3 == 0) || (*(long *)(lVar3 + 0x10) == 0)) break;
          if (*(uint *)(*(long *)(lVar3 + 0x10) + 0x50) < 2) {
            lVar7 = *(long *)(param_1 + 0x38);
          }
          else {
            lVar7 = *(long *)(param_1 + 0x40);
          }
          if (lVar7 == 0) break;
          lVar3 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar7,lVar3,uRam0000000003d3a660);
          lVar7 = *(long *)(param_1 + 0x28);
          lVar9 = lVar9 + 1;
        } while (lVar7 != 0);
      }
    }
  }
  lVar3 = func_0x00f78af4();
  return lVar3;
code_r0x015a65b4:
  if (iVar1 != iVar8) {
    lVar7 = *(long *)(lVar3 + (long)iVar8 * 8 + 0x20);
    if (lVar7 == 0) goto code_r0x015a65f8;
    if (*(long *)(lVar7 + 0x10) == auVar10._8_8_) {
      return lVar7;
    }
    iVar8 = iVar8 + 1;
    if (iVar1 == iVar8) {
      return 0;
    }
    goto code_r0x015a65b4;
  }
  uVar4 = func_0x00f78b24();
  func_0x00f78ac0(uVar4,0);
code_r0x015a65f8:
  auVar10 = func_0x00f78af4();
  if ((bRam0000000003eb5205 & 1) == 0) {
    func_0x00f78a20(0x3d32b00);
    func_0x00f78a20(0x3d32b08);
    func_0x00f78a20(0x3d32b10);
    func_0x00f78a20(0x3d3b440);
    bRam0000000003eb5205 = 1;
  }
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (auVar10._8_8_ == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar6 = (long *)___cxa_begin_catch();
      lVar7 = *plVar6;
      ___cxa_end_catch();
      lVar3 = /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$Dispose*/ func_0x01f6cf98(&uStack_b0,uRam0000000003eb5000);
      if (lVar7 == 0) {
        return lVar3;
      }
      func_0x00f78ac0(lVar7,0);
    }
    lVar3 = __Unwind_Resume();
    *(undefined1 *)(lVar3 + 0x50) = 1;
    return lVar3;
  }
  /*System.Collections.Generic.List<NetworkEventStanding>$$GetEnumerator*/ func_0x02408f24(&uStack_b0,auVar10._8_8_,uRam0000000003d3b440);
  do {
    uVar5 = /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$MoveNext*/ func_0x01f6cf9c(&uStack_b0,uRam0000000003d32b08);
    if ((uVar5 & 1) == 0) goto code_r0x015a66d4;
    iVar1 = (int)uStack_a0;
    lVar3 = Atlas_Gameplay_Player_GameContextPlayerManager__GetLocalGameContextPlayer(auVar10._0_8_)
    ;
    if (lVar3 == 0) {
      func_0x00f78af4();
code_r0x015a6700:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x15a6704);
      (*pcVar2)();
    }
    if (*(long *)(lVar3 + 0x10) == 0) {
      func_0x00f78af4();
      goto code_r0x015a6700;
    }
  } while (iVar1 != *(int *)(*(long *)(lVar3 + 0x10) + 0x54));
  *(undefined1 *)(auVar10._0_8_ + 0x50) = 1;
code_r0x015a66d4:
  lVar3 = /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$Dispose*/ func_0x01f6cf98(&uStack_b0,uRam0000000003d32b00);
  return lVar3;
}



// ============================================================
// RVA: 0x15a658c | Atlas.Gameplay.Player.GameContextPlayerManager.GetPlayerFromKartComposite
// ============================================================

long Atlas_Gameplay_Player_GameContextPlayerManager__GetPlayerFromKartComposite
               (long param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  int extraout_w1;
  long lVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar7 = *(long *)(param_1 + 0x28);
  if (lVar7 != 0) {
    iVar1 = *(int *)(lVar7 + 0x18);
    if (0 < iVar1) {
      iVar8 = 0;
      do {
        if (iVar1 == iVar8) {
          uVar4 = func_0x00f78b24();
          func_0x00f78ac0(uVar4,0);
          goto LAB_015a65f8;
        }
        lVar3 = *(long *)(lVar7 + (long)iVar8 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_015a65f8;
        if (*(long *)(lVar3 + 0x10) == param_2) {
          return lVar3;
        }
        iVar8 = iVar8 + 1;
      } while (iVar1 != iVar8);
    }
    return 0;
  }
LAB_015a65f8:
  auVar9 = func_0x00f78af4();
  if ((bRam0000000003eb5205 & 1) == 0) {
    func_0x00f78a20(0x3d32b00);
    func_0x00f78a20(0x3d32b08);
    func_0x00f78a20(0x3d32b10);
    func_0x00f78a20(0x3d3b440);
    bRam0000000003eb5205 = 1;
  }
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (auVar9._8_8_ == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar6 = (long *)___cxa_begin_catch();
      lVar3 = *plVar6;
      ___cxa_end_catch();
      lVar7 = /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$Dispose*/ func_0x01f6cf98(&uStack_80,uRam0000000003eb5000);
      if (lVar3 == 0) {
        return lVar7;
      }
      func_0x00f78ac0(lVar3,0);
    }
    lVar7 = __Unwind_Resume();
    *(undefined1 *)(lVar7 + 0x50) = 1;
    return lVar7;
  }
  /*System.Collections.Generic.List<NetworkEventStanding>$$GetEnumerator*/ func_0x02408f24(&uStack_80,auVar9._8_8_,uRam0000000003d3b440);
  do {
    uVar5 = /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$MoveNext*/ func_0x01f6cf9c(&uStack_80,uRam0000000003d32b08);
    if ((uVar5 & 1) == 0) goto code_r0x015a66d4;
    iVar1 = (int)uStack_70;
    lVar7 = Atlas_Gameplay_Player_GameContextPlayerManager__GetLocalGameContextPlayer(auVar9._0_8_);
    if (lVar7 == 0) {
      func_0x00f78af4();
code_r0x015a6700:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x15a6704);
      (*pcVar2)();
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      func_0x00f78af4();
      goto code_r0x015a6700;
    }
  } while (iVar1 != *(int *)(*(long *)(lVar7 + 0x10) + 0x54));
  *(undefined1 *)(auVar9._0_8_ + 0x50) = 1;
code_r0x015a66d4:
  lVar7 = /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$Dispose*/ func_0x01f6cf98(&uStack_80,uRam0000000003d32b00);
  return lVar7;
}



// ============================================================
// RVA: 0x15a65fc | Atlas.Gameplay.Player.GameContextPlayerManager.OnRemotePlayerFinished
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__OnRemotePlayerFinished
               (long param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  int extraout_w1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000003eb5205 & 1) == 0) {
    func_0x00f78a20(0x3d32b00);
    func_0x00f78a20(0x3d32b08);
    func_0x00f78a20(0x3d32b10);
    func_0x00f78a20(0x3d3b440);
    bRam0000000003eb5205 = 1;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (param_2 == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar5 = (long *)___cxa_begin_catch();
      lVar4 = *plVar5;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$Dispose*/ func_0x01f6cf98(&uStack_70,uRam0000000003eb5000);
      if (lVar4 == 0) {
        return;
      }
      func_0x00f78ac0(lVar4,0);
    }
    lVar4 = __Unwind_Resume();
    *(undefined1 *)(lVar4 + 0x50) = 1;
    return;
  }
  /*System.Collections.Generic.List<NetworkEventStanding>$$GetEnumerator*/ func_0x02408f24(&uStack_70,param_2,uRam0000000003d3b440);
  do {
    uVar3 = /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$MoveNext*/ func_0x01f6cf9c(&uStack_70,uRam0000000003d32b08);
    if ((uVar3 & 1) == 0) goto LAB_015a66d4;
    iVar1 = (int)uStack_60;
    lVar4 = Atlas_Gameplay_Player_GameContextPlayerManager__GetLocalGameContextPlayer(param_1);
    if (lVar4 == 0) {
      func_0x00f78af4();
code_r0x015a6700:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x15a6704);
      (*pcVar2)();
    }
    if (*(long *)(lVar4 + 0x10) == 0) {
      func_0x00f78af4();
      goto code_r0x015a6700;
    }
  } while (iVar1 != *(int *)(*(long *)(lVar4 + 0x10) + 0x54));
  *(undefined1 *)(param_1 + 0x50) = 1;
LAB_015a66d4:
  /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$Dispose*/ func_0x01f6cf98(&uStack_70,uRam0000000003d32b00);
  return;
}



// ============================================================
// RVA: 0x15a6748 | Atlas.Gameplay.Player.GameContextPlayerManager.OnEventResults
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__OnEventResults(long param_1)

{
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}



// ============================================================
// RVA: 0x15a6754 | Atlas.Gameplay.Player.GameContextPlayerManager.GetAIPlacement
// ============================================================

int Atlas_Gameplay_Player_GameContextPlayerManager__GetAIPlacement(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  
  if ((bRam0000000003eb5207 & 1) == 0) {
    func_0x00f78a20(0x3d3a678);
    func_0x00f78a20(0x3d3a680);
    bRam0000000003eb5207 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    if (lVar4 != 0) {
      iVar3 = 1;
      do {
        uVar2 = iVar3 - 1;
        if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar2) {
          return -1;
        }
        if (param_2 == 0) break;
        iVar1 = *(int *)(param_2 + 0x74);
        if (*(uint *)(lVar4 + 0x18) <= uVar2) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + (long)(int)uVar2 * 8 + 0x20);
        if (lVar4 == 0) break;
        if (iVar1 == *(int *)(lVar4 + 0x74)) {
          return iVar3;
        }
        lVar4 = *(long *)(param_1 + 0x40);
        iVar3 = iVar3 + 1;
      } while (lVar4 != 0);
    }
    func_0x00f78af4();
  }
  return -1;
}



// ============================================================
// RVA: 0x15a6820 | Atlas.Gameplay.Player.GameContextPlayerManager.GetLastHumanPlayer
// ============================================================

undefined8 Atlas_Gameplay_Player_GameContextPlayerManager__GetLastHumanPlayer(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000003eb5209 & 1) == 0) {
    func_0x00f78a20(0x3d3a678);
    func_0x00f78a20(0x3d3a680);
    bRam0000000003eb5209 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x38);
  if ((lVar2 == 0) || (*(int *)(lVar2 + 0x18) < 1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)
             (*(long *)(lVar2 + 0x10) + (ulong)(*(int *)(lVar2 + 0x18) - 1) * 8 + 0x20);
  }
  return uVar1;
}



// ============================================================
// RVA: 0x15a6890 | Atlas.Gameplay.Player.GameContextPlayerManager.GetHigherAndLowerPositionedPlayers
// ============================================================

ulong Atlas_Gameplay_Player_GameContextPlayerManager__GetHigherAndLowerPositionedPlayers
                (ulong param_1,long param_2,uint param_3,uint param_4,long param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  
  uVar6 = param_1;
  if ((bRam0000000003eb520c & 1) == 0) {
    func_0x00f78a20(0x3d3a660);
    uVar6 = func_0x00f78a20(0x3d3a668);
    bRam0000000003eb520c = 1;
  }
  if ((((int)(param_3 | param_4) < 0) || (param_2 == 0)) || (param_5 == 0)) {
    return uVar6;
  }
  uVar6 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(param_5,uRam0000000003d3a668);
  lVar8 = *(long *)(param_1 + 0x28);
  if (lVar8 != 0) {
    if (0 < *(int *)(lVar8 + 0x18)) {
      iVar9 = 0;
      do {
        if (*(long *)(lVar8 + (long)iVar9 * 8 + 0x20) == param_2) goto LAB_015a6940;
        iVar9 = iVar9 + 1;
      } while (*(int *)(lVar8 + 0x18) != iVar9);
    }
    iVar9 = -1;
LAB_015a6940:
    param_3 = iVar9 - param_3;
    iVar2 = 0;
    if ((int)param_3 < 0) {
      iVar2 = -param_3;
    }
    iVar9 = iVar9 + param_4;
    iVar3 = *(int *)(lVar8 + 0x18);
    iVar4 = iVar3 + -1;
    iVar1 = iVar9;
    iVar5 = 0;
    if (iVar3 <= iVar9) {
      iVar1 = iVar4;
      iVar5 = iVar4 - iVar9;
    }
    uVar10 = iVar5 + (param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU));
    if ((int)uVar10 < 1) {
      uVar10 = 0;
    }
    iVar9 = iVar1 + iVar2;
    if (iVar3 <= iVar1 + iVar2) {
      iVar9 = iVar4;
    }
    if (iVar9 < (int)uVar10) {
      return uVar6;
    }
    do {
      if (*(uint *)(lVar8 + 0x18) <= uVar10) goto code_r0x015a69e0;
      uVar6 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(param_5,*(undefined8 *)(lVar8 + (long)(int)uVar10 * 8 + 0x20),
                              uRam0000000003d3a660);
      uVar10 = uVar10 + 1;
      if (iVar9 < (int)uVar10) {
        return uVar6;
      }
      lVar8 = *(long *)(param_1 + 0x28);
    } while (lVar8 != 0);
  }
  func_0x00f78af4();
code_r0x015a69e0:
  uVar7 = func_0x00f78b24();
  auVar11 = func_0x00f78ac0(uVar7,0);
  lVar8 = *(long *)(auVar11._0_8_ + 0x28);
  if ((lVar8 != 0) && (0 < (int)*(uint *)(lVar8 + 0x18))) {
    uVar6 = 0;
    do {
      if (*(long *)(lVar8 + (long)(int)uVar6 * 8 + 0x20) == auVar11._8_8_) {
        return uVar6;
      }
      uVar10 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar10;
    } while (*(uint *)(lVar8 + 0x18) != uVar10);
  }
  return 0xffffffff;
}



// ============================================================
// RVA: 0x15a69ec | Atlas.Gameplay.Player.GameContextPlayerManager.GetPlacementIndex
// ============================================================

int Atlas_Gameplay_Player_GameContextPlayerManager__GetPlacementIndex(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x18))) {
    iVar1 = 0;
    do {
      if (*(long *)(lVar2 + (long)iVar1 * 8 + 0x20) == param_2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (*(int *)(lVar2 + 0x18) != iVar1);
  }
  return -1;
}



// ============================================================
// RVA: 0x15a6a28 | Atlas.Gameplay.Player.GameContextPlayerManager.OnGameModeStarted
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager__OnGameModeStarted
               (undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_60 = param_2[1];
  uStack_40 = *param_2;
  uStack_50 = param_2[3];
  uStack_58 = param_2[2];
  uStack_20 = param_2[4];
  uStack_38 = uStack_60;
  uStack_30 = uStack_58;
  uStack_28 = uStack_50;
  /*Atlas.Gameplay.Player.GameContextPlayerManager$$SetStartTime*/ func_0x015a6a68(param_1,&uStack_60);
  return;
}



// ============================================================
// RVA: 0x15a6a68 | Atlas.Gameplay.Player.GameContextPlayerManager.SetStartTime
// ============================================================

long Atlas_Gameplay_Player_GameContextPlayerManager__SetStartTime(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1;
  if (*(char *)((long)param_2 + 4) == '\0') {
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar1 == 0)) goto LAB_015a6b1c;
    lVar1 = /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_38,lVar1,0);
    param_2[1] = uStack_30;
    *param_2 = uStack_38;
    param_2[2] = uStack_28;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    uVar5 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar5) {
      uVar4 = 0;
      do {
        if (uVar5 <= uVar4) {
          uVar2 = func_0x00f78b24();
          func_0x00f78ac0(uVar2,0);
          goto LAB_015a6b1c;
        }
        lVar6 = *(long *)(lVar3 + (long)(int)uVar4 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_015a6b1c;
        uVar7 = param_2[1];
        uVar2 = *param_2;
        *(undefined8 *)(lVar6 + 0xe8) = param_2[2];
        *(undefined8 *)(lVar6 + 0xe0) = uVar7;
        *(undefined8 *)(lVar6 + 0xd8) = uVar2;
        uVar4 = uVar4 + 1;
        uVar5 = *(uint *)(lVar3 + 0x18);
      } while ((int)uVar4 < (int)uVar5);
    }
    return lVar1;
  }
LAB_015a6b1c:
  lVar1 = func_0x00f78af4();
  return *(long *)(lVar1 + 0x30);
}



