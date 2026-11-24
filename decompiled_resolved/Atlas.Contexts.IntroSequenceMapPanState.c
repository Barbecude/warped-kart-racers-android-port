// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.IntroSequenceMapPanState

// ============================================================
// RVA: 0x15b9044 | Atlas.Contexts.IntroSequenceMapPanState.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x014c0828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b92b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014c082c) */
/* WARNING: Removing unreachable block (ram,0x014c0858) */
/* WARNING: Removing unreachable block (ram,0x014c0888) */
/* WARNING: Removing unreachable block (ram,0x014c089c) */
/* WARNING: Removing unreachable block (ram,0x014c08a4) */
/* WARNING: Removing unreachable block (ram,0x014c08a8) */
/* WARNING: Removing unreachable block (ram,0x014c08b4) */
/* WARNING: Removing unreachable block (ram,0x014c08c0) */
/* WARNING: Removing unreachable block (ram,0x014c08c8) */
/* WARNING: Removing unreachable block (ram,0x014c08d0) */
/* WARNING: Removing unreachable block (ram,0x014c0914) */
/* WARNING: Removing unreachable block (ram,0x014c091c) */
/* WARNING: Removing unreachable block (ram,0x014c0920) */
/* WARNING: Removing unreachable block (ram,0x014c0954) */
/* WARNING: Removing unreachable block (ram,0x014c0990) */
/* WARNING: Removing unreachable block (ram,0x014c0998) */
/* WARNING: Removing unreachable block (ram,0x014c099c) */
/* WARNING: Removing unreachable block (ram,0x014c09d0) */
/* WARNING: Removing unreachable block (ram,0x014c09d8) */
/* WARNING: Removing unreachable block (ram,0x014c09e0) */
/* WARNING: Removing unreachable block (ram,0x014c09e8) */
/* WARNING: Removing unreachable block (ram,0x014c0a18) */
/* WARNING: Removing unreachable block (ram,0x014c09f0) */
/* WARNING: Removing unreachable block (ram,0x014c08b8) */
/* WARNING: Removing unreachable block (ram,0x014c08ac) */
/* WARNING: Removing unreachable block (ram,0x014c0a00) */
/* WARNING: Removing unreachable block (ram,0x014c0830) */
/* WARNING: Removing unreachable block (ram,0x015b92b8) */

void Atlas_Contexts_IntroSequenceMapPanState__Init(undefined1 *param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  code *pcVar5;
  undefined1 **ppuVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  int extraout_w1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined1 *puVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  undefined1 *puVar22;
  undefined8 uVar23;
  undefined8 unaff_x23;
  long lVar24;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 **ppuVar25;
  undefined1 *puVar26;
  undefined *puVar27;
  float fVar28;
  float extraout_s0;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  long lStack_98;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  auVar32._8_8_ = param_2;
  auVar32._0_8_ = param_3;
  puVar26 = &stack0xfffffffffffffff0;
  uVar23 = 0x3eb5000;
  if ((bRam0000000003eb52a6 & 1) == 0) {
    func_0x00f78a20(0x3d55148);
    func_0x00f78a20(0x3d3d380);
    func_0x00f78a20(0x3d3ae30);
    func_0x00f78a20(0x3d1e1b0);
    bRam0000000003eb52a6 = 1;
  }
  *(long **)(param_1 + 0x90) = param_2;
  if (param_2 != (long *)0x0) {
    lVar16 = param_2[0x28];
    *(long *)(param_1 + 0x78) = lVar16;
    if (lVar16 != 0) {
      uVar17 = *(undefined8 *)(lVar16 + 0x10);
      *(long *)(param_1 + 0xa0) = param_2[0x26];
      *(undefined8 *)(param_1 + 0xa8) = uVar17;
      if (param_3 != (long *)0x0) {
        uVar17 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_3,uRam0000000003d55148);
        *(undefined8 *)(param_1 + 0x80) = uVar17;
        if ((*(long *)(param_1 + 0xa0) != 0) &&
           (lVar16 = *(long *)(*(long *)(param_1 + 0xa0) + 0x10), lVar16 != 0)) {
          uVar1 = *(undefined4 *)(lVar16 + 0x18);
          uVar23 = func_0x00f78aec(/*System.Collections.Generic.List<IntroSequenceMapPanState.KartTimePairing>_TypeInfo*/ uRam0000000003d1e1b0);
          /*System.Collections.Generic.List<IntroSequenceMapPanState.KartTimePairing>$$.ctor*/ func_0x0253ab70(uVar23,uVar1,uRam0000000003d3d380);
          *(undefined8 *)(param_1 + 0x88) = uVar23;
          return;
        }
      }
    }
  }
  lVar16 = func_0x00f78af4();
  ppuVar25 = &puStack_40;
  ppuVar6 = &puStack_40;
  puStack_38 = &Atlas_Contexts_IntroSequenceMapPanState__OnEnter;
  *(undefined1 *)(lVar16 + 0x98) = 0;
  puStack_40 = puVar26;
  if ((*(long *)(lVar16 + 0xa8) != 0) && (lVar13 = *(long *)(lVar16 + 0x78), lVar13 != 0)) {
    uVar17 = *(undefined8 *)(*(long *)(lVar16 + 0xa8) + 0x38);
    if (*(long *)(lVar13 + 0x10) == 0) {
      lVar16 = func_0x00f78af4(lVar13,uVar17,0);
      if (*(long *)(lVar16 + 0x10) != 0) {
        auVar31._8_8_ = 0;
        auVar31._0_8_ = *(ulong *)(*(long *)(lVar16 + 0x10) + 0x28);
        puVar27 = &Atlas_Maps_MapSequenceController__StopActiveTimeline;
        goto code_r0x014c037c;
      }
      func_0x00f78af4();
      return;
    }
    auVar32._8_8_ = uVar17;
    auVar32._0_8_ = *(undefined8 *)(*(long *)(lVar13 + 0x10) + 0x28);
    puVar15 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    puVar8 = &stack0xffffffffffffffd0;
    puVar22 = param_1;
    puVar27 = puStack_38;
code_r0x014c0808:
    auVar31._8_8_ = puVar15;
    auVar31._0_8_ = auVar32._0_8_;
    ppuVar6 = (undefined1 **)(puVar8 + -0x30);
    *(undefined8 *)(puVar8 + -0x30) = uVar23;
    *(long **)(puVar8 + -0x28) = param_2;
    *(long **)(puVar8 + -0x20) = param_3;
    *(undefined1 **)(puVar8 + -0x18) = puVar22;
    *(undefined1 **)(puVar8 + -0x10) = puVar26;
    *(undefined **)(puVar8 + -8) = puVar27;
    ppuVar25 = (undefined1 **)(puVar8 + -0x10);
    puVar27 = &UNK_014c082c;
    param_1 = puVar15;
code_r0x014c037c:
    param_2 = auVar32._8_8_;
    auVar4._8_8_ = auVar32._0_8_;
    auVar4._0_8_ = param_1;
    lVar16 = auVar31._0_8_;
    puVar7 = (undefined1 *)((long)ppuVar6 + -0x20);
    *(long *)((long)ppuVar6 + -0x20) = auVar32._0_8_;
    *(undefined1 **)((long)ppuVar6 + -0x18) = param_1;
    *(undefined1 ***)((long)ppuVar6 + -0x10) = ppuVar25;
    *(undefined **)((long)ppuVar6 + -8) = puVar27;
    puVar26 = (undefined1 *)((long)ppuVar6 + -0x10);
    if (lVar16 == 0) {
code_r0x014c03e4:
      puVar27 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirectorActivations;
      lVar16 = func_0x00f78af4();
    }
    else {
      /*UnityEngine.Playables.PlayableDirector$$Stop*/ func_0x03282c40(lVar16,0);
      /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(lVar16,0);
      /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar16,0);
      if (auVar31._8_4_ != 0) {
        lVar13 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar16,0);
        auVar4 = auVar31;
        if (lVar13 == 0) goto code_r0x014c03e4;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar13,0,0);
      }
      puVar26 = *(undefined1 **)((long)ppuVar6 + -0x10);
      puVar27 = *(undefined **)((long)ppuVar6 + -8);
      auVar4._8_8_ = *(undefined8 *)((long)ppuVar6 + -0x20);
      auVar4._0_8_ = *(undefined8 *)((long)ppuVar6 + -0x18);
      puVar7 = (undefined1 *)ppuVar6;
    }
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar7 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar7 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar7 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar7 + -0x30) = uVar23;
    *(long **)(puVar7 + -0x28) = param_2;
    *(long *)(puVar7 + -0x20) = auVar4._8_8_;
    *(long *)(puVar7 + -0x18) = auVar4._0_8_;
    *(undefined1 **)(puVar7 + -0x10) = puVar26;
    *(undefined **)(puVar7 + -8) = puVar27;
    if ((bRam0000000003eb4b15 & 1) == 0) {
      func_0x00f78a20(0x3d1faa8);
      func_0x00f78a20(0x3d21b60);
      func_0x00f78a20(0x3d220f0);
      func_0x00f78a20(0x3d1d180);
      func_0x00f78a20(0x3d1d390);
      func_0x00f78a20(0x3d22180);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d25280);
      bRam0000000003eb4b15 = 1;
    }
    if (lVar16 != 0) {
      uVar23 = 0x3d23990;
      plVar11 = (long *)/*UnityEngine.Playables.PlayableDirector$$get_playableAsset*/ func_0x0328235c(lVar16,0);
      if (plVar11 == (long *)0x0) {
code_r0x014c04b4:
        plVar11 = (long *)0x0;
      }
      else {
        if (*(byte *)(*plVar11 + 300) < *(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300))
        goto code_r0x014c04b4;
        if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300) * 8 +
                     -8) != /*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280) {
          plVar11 = (long *)0x0;
        }
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar15 = (undefined1 *)0x0;
      iVar9 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar11,0);
      if (iVar9 == 0) {
        return;
      }
      if ((plVar11 != (long *)0x0) &&
         (plVar11 = (long *)/*UnityEngine.Timeline.TimelineAsset$$GetOutputTracks*/ func_0x031fab88(plVar11,0), plVar11 != (long *)0x0)) {
        lVar13 = *plVar11;
        uVar20 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == /*System.Collections.Generic.IEnumerable<TrackAsset>_TypeInfo*/ lRam0000000003d1d180) {
              puVar12 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
              goto code_r0x014c0568;
            }
            piVar21 = piVar21 + 4;
            uVar20 = uVar20 - 1;
          } while (uVar20 != 0);
        }
        puVar15 = (undefined1 *)0x0;
        puVar12 = (undefined8 *)func_0x00fac1f0(plVar11);
code_r0x014c0568:
        param_3 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
        if (param_3 != (long *)0x0) {
          unaff_x23 = 0x3d22180;
          unaff_x24 = 0x3d1d390;
          unaff_x25 = 0x3d1faa8;
          unaff_x26 = 0x3d21b60;
code_r0x014c059c:
          lVar13 = *param_3;
          uVar20 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar12 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
                goto code_r0x014c05e8;
              }
              piVar21 = piVar21 + 4;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
          puVar15 = (undefined1 *)0x0;
          puVar12 = (undefined8 *)func_0x00fac1f0(param_3);
code_r0x014c05e8:
          uVar20 = (*(code *)*puVar12)(param_3,puVar12[1]);
          if ((uVar20 & 1) != 0) {
            lVar13 = *param_3;
            uVar20 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar20 != 0) {
              piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == /*System.Collections.Generic.IEnumerator<TrackAsset>_TypeInfo*/ lRam0000000003d1d390) {
                  puVar12 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
                  goto code_r0x014c0644;
                }
                piVar21 = piVar21 + 4;
                uVar20 = uVar20 - 1;
              } while (uVar20 != 0);
            }
            puVar15 = (undefined1 *)0x0;
            puVar12 = (undefined8 *)func_0x00fac1f0(param_3);
code_r0x014c0644:
            plVar11 = (long *)(*(code *)*puVar12)(param_3,puVar12[1]);
            if (plVar11 != (long *)0x0) {
              if ((*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) <= *(byte *)(*plVar11 + 300)) &&
                 (*(long *)(*(long *)(*plVar11 + 200) +
                            (ulong)*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) * 8 + -8) ==
                  /*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8)) {
                param_2 = (long *)/*UnityEngine.Playables.PlayableDirector$$GetGenericBinding*/ func_0x03282f5c(lVar16,plVar11,0);
                if (param_2 == (long *)0x0) {
                  param_2 = (long *)0x0;
                }
                else if (*param_2 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60) {
                  param_2 = (long *)0x0;
                }
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                puVar15 = (undefined1 *)0x0;
                uVar20 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_2,0);
                if ((uVar20 & 1) != 0) {
                  if (param_2 == (long *)0x0) goto code_r0x014c0778;
                  puVar15 = (undefined1 *)0x0;
                  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(param_2,0);
                }
              }
            }
            goto code_r0x014c059c;
          }
          puVar22 = (undefined1 *)0x0;
          do {
            if (param_3 != (long *)0x0) {
              lVar16 = *param_3;
              uVar20 = (ulong)*(ushort *)(lVar16 + 0x12a);
              if (uVar20 != 0) {
                piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar12 = (undefined8 *)(lVar16 + (long)*piVar21 * 0x10 + 0x138);
                    goto code_r0x014c074c;
                  }
                  piVar21 = piVar21 + 4;
                  uVar20 = uVar20 - 1;
                } while (uVar20 != 0);
              }
              puVar15 = (undefined1 *)0x0;
              puVar12 = (undefined8 *)func_0x00fac1f0(param_3);
code_r0x014c074c:
              (*(code *)*puVar12)(param_3,puVar12[1]);
            }
            if (puVar22 == (undefined1 *)0x0) {
              return;
            }
            func_0x00f78ac0(puVar22,0);
            if (extraout_w1 != 1) goto code_r0x014c07cc;
            puVar12 = (undefined8 *)___cxa_begin_catch();
            puVar22 = (undefined1 *)*puVar12;
            ___cxa_end_catch();
          } while( true );
        }
        func_0x00f78af4();
        goto code_r0x014c0784;
      }
    }
    func_0x00f78af4();
code_r0x014c0778:
    func_0x00f78af4();
code_r0x014c0784:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x14c0788);
    (*pcVar5)();
  }
  auVar32 = func_0x00f78af4();
  plVar11 = auVar32._8_8_;
  lVar16 = auVar32._0_8_;
  if ((bRam0000000003eb52a7 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb52a7 = 1;
  }
  if ((*(long *)(lVar16 + 0xa8) != 0) &&
     (lVar13 = *(long *)(*(long *)(lVar16 + 0xa8) + 0x28), lVar13 != 0)) {
    dVar29 = (double)/*UnityEngine.Playables.PlayableDirector$$get_time*/ func_0x03282af0(lVar13,0);
    if ((*(long *)(lVar16 + 0xa8) != 0) &&
       (plVar14 = *(long **)(*(long *)(lVar16 + 0xa8) + 0x38), plVar14 != (long *)0x0)) {
      dVar30 = (double)(**(code **)(*plVar14 + 0x1a8))(plVar14,*(undefined8 *)(*plVar14 + 0x1b0));
      if (*(long *)(lVar16 + 0xa8) != 0) {
        if (dVar29 < dVar30 - (double)*(float *)(*(long *)(lVar16 + 0xa8) + 0x4c)) {
code_r0x015b92e0:
          if (*(long *)(lVar16 + 0xa8) != 0) {
            iVar9 = /*Atlas.PlayableDirectorHelpers$$HasPlayableDirectorFinished*/ func_0x014b58e8(*(undefined8 *)(*(long *)(lVar16 + 0xa8) + 0x28),0);
            if (iVar9 == 0) {
              return;
            }
            lVar16 = *(long *)(lVar16 + 0x60);
            if (lVar16 == 0) {
              return;
            }
            uVar23 = 0;
            lStack_98 = lVar16;
            lVar13 = *(long *)(lVar16 + 0x68);
            if (lVar13 == 0) {
              plVar11 = &lStack_98;
              lVar24 = 1;
            }
            else {
              lVar24 = *(long *)(lVar13 + 0x18);
              if (lVar24 == 0) {
                return;
              }
              plVar11 = (long *)(lVar13 + 0x20);
            }
            lVar13 = 0;
            do {
              lVar18 = plVar11[lVar13];
              pcVar5 = *(code **)(lVar18 + 0x10);
              plVar14 = *(long **)(lVar18 + 0x20);
              lVar18 = *(long *)(lVar18 + 0x28);
              if (*(short *)(lVar18 + 0x48) == -1) {
                func_0x00f78ad8(lVar18,uVar23);
              }
              iVar9 = func_0x00f78a4c(lVar18);
              if (iVar9 == 0) {
                if ((((plVar14 == (long *)0x0) || (*(short *)(lVar18 + 0x48) == -1)) ||
                    ((*(byte *)(*plVar14 + 0x115) & 1) != 0)) || (*(long *)(lVar16 + 0x18) == 0))
                goto code_r0x02924d98;
                iVar9 = func_0x00f78a44(lVar18);
                iVar10 = func_0x00f78ec0(lVar18);
                if (iVar9 == 0) {
                  uVar2 = *(ushort *)(lVar18 + 0x48);
                  if (iVar10 == 0) {
                    lVar18 = *plVar14 + (ulong)uVar2 * 0x10;
                    (**(code **)(lVar18 + 0x138))(plVar14,*(undefined8 *)(lVar18 + 0x140));
                    uVar23 = extraout_x1_01;
                    goto code_r0x02924da4;
                  }
                  lVar18 = func_0x00f78a48(lVar18);
                  lVar19 = *plVar14;
                  uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
                  if (uVar20 != 0) {
                    piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar21 + -2) == lVar18) {
                        puVar12 = (undefined8 *)
                                  (lVar19 + (long)(int)(*piVar21 + (uint)uVar2) * 0x10 + 0x138);
                        goto code_r0x02924e68;
                      }
                      piVar21 = piVar21 + 4;
                      uVar20 = uVar20 - 1;
                    } while (uVar20 != 0);
                  }
                  puVar12 = (undefined8 *)func_0x00fac1f0(plVar14,lVar18,(ulong)uVar2);
code_r0x02924e68:
                  pcVar5 = (code *)*puVar12;
                  puVar12 = (undefined8 *)puVar12[1];
                }
                else {
                  if (iVar10 == 0) {
                    uVar23 = *(undefined8 *)
                              (*plVar14 + (ulong)*(ushort *)(lVar18 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar19 = *plVar14;
                    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
                    if (uVar20 != 0) {
                      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar21 + -2) == *(long *)(lVar18 + 0x18)) {
                          lVar19 = lVar19 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar18 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x02924e40;
                        }
                        piVar21 = piVar21 + 4;
                        uVar20 = uVar20 - 1;
                      } while (uVar20 != 0);
                    }
                    lVar19 = func_0x00fac1f0(plVar14);
code_r0x02924e40:
                    uVar23 = *(undefined8 *)(lVar19 + 8);
                  }
                  puVar12 = (undefined8 *)func_0x00f78acc(uVar23,lVar18);
                  pcVar5 = (code *)*puVar12;
                }
                (*pcVar5)(plVar14,puVar12);
                uVar23 = extraout_x1_02;
              }
              else if (*(char *)(lVar18 + 0x4a) == '\0') {
                (*pcVar5)(lVar18);
                uVar23 = extraout_x1;
              }
              else {
code_r0x02924d98:
                (*pcVar5)(plVar14,lVar18);
                uVar23 = extraout_x1_00;
              }
code_r0x02924da4:
              lVar13 = lVar13 + 1;
              if (lVar13 == lVar24) {
                return;
              }
            } while( true );
          }
        }
        else if (*(char *)(lVar16 + 0x98) == '\0') {
          if (plVar11 != (long *)0x0) {
            lVar13 = *plVar11;
            uVar20 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar20 != 0) {
              piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
                  puVar12 = (undefined8 *)(lVar13 + (long)(*piVar21 + 4) * 0x10 + 0x138);
                  goto code_r0x015b92cc;
                }
                piVar21 = piVar21 + 4;
                uVar20 = uVar20 - 1;
              } while (uVar20 != 0);
            }
            puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,4);
code_r0x015b92cc:
            (*(code *)*puVar12)(plVar11,puVar12[1]);
            /*Atlas.Contexts.IntroSequenceMapPanState$$StartPortalling*/ func_0x015b9518(lVar16);
            goto code_r0x015b92e0;
          }
        }
        else if (plVar11 != (long *)0x0) {
          lVar13 = *plVar11;
          uVar20 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
                puVar12 = (undefined8 *)(lVar13 + (long)(*piVar21 + 4) * 0x10 + 0x138);
                goto code_r0x015b92a4;
              }
              piVar21 = piVar21 + 4;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
          puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,4);
code_r0x015b92a4:
          fVar28 = (float)(*(code *)*puVar12)(plVar11,puVar12[1]);
          lVar13 = lVar16;
          goto code_r0x015b932c;
        }
      }
    }
  }
  lVar13 = func_0x00f78af4();
  fVar28 = extraout_s0;
code_r0x015b932c:
  lStack_98 = lVar16;
  if ((bRam0000000003eb52a9 & 1) == 0) {
    func_0x00f78a20(0x3d570b8);
    func_0x00f78a20(0x3d3d390);
    func_0x00f78a20(0x3d3d398);
    func_0x00f78a20(0x3d3d3a0);
    func_0x00f78a20(0x3d71368);
    bRam0000000003eb52a9 = 1;
  }
  lVar16 = *(long *)(lVar13 + 0x88);
  if (lVar16 != 0) {
    uVar3 = *(int *)(lVar16 + 0x18) - 1;
    if ((int)uVar3 < 0) {
      return;
    }
    do {
      if (*(uint *)(lVar16 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (*(float *)(*(long *)(lVar16 + 0x10) + (ulong)uVar3 * 0x10 + 0x28) <= fVar28) {
        lVar16 = *(long *)(lVar13 + 0x88);
        if (lVar16 == 0) break;
        if (*(uint *)(lVar16 + 0x18) <= uVar3) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (ulong)uVar3 * 0x10 + 0x20);
        if ((lVar16 == 0) || (*(long *)(lVar16 + 0x28) == 0)) break;
        Atlas_Gameplay_Kart_KartVisualComposite__SetVisualRootActive(*(long *)(lVar16 + 0x28),1,0);
        if ((*(long *)(lVar13 + 0x90) == 0) ||
           (lVar24 = Atlas_Contexts_GameContextBase__SpawnTimedObject_PortalVFXBehaviour_
                               (0x3fc00000,*(long *)(lVar13 + 0x90),/*STR('PortalVFXBehaviour')*/ uRam0000000003d71368,
                                uRam0000000003d570b8), lVar24 == 0)) break;
        lVar18 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar24,0);
        if (((*(long *)(lVar16 + 0x18) == 0) ||
            (lVar19 = *(long *)(*(long *)(lVar16 + 0x18) + 0x80), lVar19 == 0)) ||
           (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar19,0), lVar18 == 0)) break;
        /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(lVar18,0);
        if ((*(long *)(lVar16 + 0x18) == 0) ||
           (lVar19 = *(long *)(*(long *)(lVar16 + 0x18) + 0x80), lVar19 == 0)) break;
        /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar19,0);
        /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar18,0);
        /*Atlas.Gameplay.PortalVFXBehaviour$$StartExitingPortal*/ func_0x014c3a84(lVar24,*(undefined8 *)(lVar16 + 0x28),0,0);
        if (*(long *)(lVar16 + 0x70) == 0) break;
        /*Atlas.Audio.KartAudio$$OpenPortal*/ func_0x015b96a8(*(long *)(lVar16 + 0x70),0);
        if (*(long *)(lVar13 + 0x88) == 0) break;
        /*System.Collections.Generic.List<IntroSequenceMapPanState.KartTimePairing>$$RemoveAt*/ func_0x0253cfb0(*(long *)(lVar13 + 0x88),(ulong)uVar3,uRam0000000003d3d390);
      }
      uVar3 = uVar3 - 1;
      if ((int)uVar3 < 0) {
        return;
      }
      lVar16 = *(long *)(lVar13 + 0x88);
    } while (lVar16 != 0);
  }
  func_0x00f78af4();
  return;
code_r0x014c07cc:
  auVar32 = __Unwind_Resume();
  param_1 = auVar32._0_8_;
  puVar8 = puVar7 + -0x70;
  ppuVar6 = (undefined1 **)(puVar7 + -0x70);
  *(long **)(puVar7 + -0x70) = param_3;
  *(undefined1 **)(puVar7 + -0x68) = puVar22;
  *(undefined1 **)(puVar7 + -0x60) = puVar7 + -0x10;
  *(undefined **)(puVar7 + -0x58) = &Atlas_PlayableDirectorHelpers__ChangeTimelineAndPlay;
  puVar26 = puVar7 + -0x60;
  if (param_1 == (undefined1 *)0x0) goto code_r0x014c0804;
  /*UnityEngine.Playables.PlayableDirector$$set_playableAsset*/ func_0x03282440(param_1,auVar32._8_8_,0);
  auVar32._8_8_ = param_2;
  auVar32._0_8_ = *(undefined8 *)(puVar7 + -0x70);
  *(undefined8 *)(puVar7 + -0x70) = *(undefined8 *)(puVar7 + -0x70);
  *(undefined8 *)(puVar7 + -0x68) = *(undefined8 *)(puVar7 + -0x68);
  *(undefined8 *)(puVar7 + -0x60) = *(undefined8 *)(puVar7 + -0x60);
  *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)(puVar7 + -0x58);
  ppuVar25 = (undefined1 **)(puVar7 + -0x60);
  if ((int)puVar15 == 0) {
    if (param_1 != (undefined1 *)0x0) goto code_r0x014c034c;
  }
  else if ((param_1 != (undefined1 *)0x0) && (lVar16 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0), lVar16 != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar16,1,0);
code_r0x014c034c:
    /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(param_1,0);
    /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(param_1,0);
    *(undefined8 *)(puVar7 + -0x70) = *(undefined8 *)(puVar7 + -0x70);
    *(undefined8 *)(puVar7 + -0x68) = *(undefined8 *)(puVar7 + -0x68);
    *(undefined8 *)(puVar7 + -0x60) = *(undefined8 *)(puVar7 + -0x60);
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)(puVar7 + -0x58);
    if (pcRam0000000003ec1b90 == (code *)0x0) {
      pcRam0000000003ec1b90 =
           (code *)func_0x00f789d4("UnityEngine.Playables.PlayableDirector::Play()");
    }
                    /* WARNING: Could not recover jumptable at 0x0328295c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ec1b90)(param_1);
    return;
  }
  puVar27 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirector;
  auVar31 = func_0x00f78af4();
  goto code_r0x014c037c;
code_r0x014c0804:
  puVar27 = &Atlas_PlayableDirectorHelpers__ResetThenChangeTimelineAndPlay;
  auVar32 = func_0x00f78af4();
  goto code_r0x014c0808;
}



// ============================================================
// RVA: 0x15b9134 | Atlas.Contexts.IntroSequenceMapPanState.OnEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x014c0828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b92b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014c082c) */
/* WARNING: Removing unreachable block (ram,0x014c0858) */
/* WARNING: Removing unreachable block (ram,0x014c0888) */
/* WARNING: Removing unreachable block (ram,0x014c089c) */
/* WARNING: Removing unreachable block (ram,0x014c08a4) */
/* WARNING: Removing unreachable block (ram,0x014c08a8) */
/* WARNING: Removing unreachable block (ram,0x014c08b4) */
/* WARNING: Removing unreachable block (ram,0x014c08c0) */
/* WARNING: Removing unreachable block (ram,0x014c08c8) */
/* WARNING: Removing unreachable block (ram,0x014c08d0) */
/* WARNING: Removing unreachable block (ram,0x014c0914) */
/* WARNING: Removing unreachable block (ram,0x014c091c) */
/* WARNING: Removing unreachable block (ram,0x014c0920) */
/* WARNING: Removing unreachable block (ram,0x014c0954) */
/* WARNING: Removing unreachable block (ram,0x014c0990) */
/* WARNING: Removing unreachable block (ram,0x014c0998) */
/* WARNING: Removing unreachable block (ram,0x014c099c) */
/* WARNING: Removing unreachable block (ram,0x014c09d0) */
/* WARNING: Removing unreachable block (ram,0x014c09d8) */
/* WARNING: Removing unreachable block (ram,0x014c09e0) */
/* WARNING: Removing unreachable block (ram,0x014c09e8) */
/* WARNING: Removing unreachable block (ram,0x014c0a18) */
/* WARNING: Removing unreachable block (ram,0x014c09f0) */
/* WARNING: Removing unreachable block (ram,0x014c08b8) */
/* WARNING: Removing unreachable block (ram,0x014c08ac) */
/* WARNING: Removing unreachable block (ram,0x014c0a00) */
/* WARNING: Removing unreachable block (ram,0x014c0830) */
/* WARNING: Removing unreachable block (ram,0x015b92b8) */

void Atlas_Contexts_IntroSequenceMapPanState__OnEnter(long param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  int extraout_w1;
  undefined8 uVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  undefined1 *puVar20;
  undefined1 *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long lVar21;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *puVar22;
  undefined *unaff_x30;
  float fVar23;
  float extraout_s0;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  long lStack_68;
  
  auVar27._8_8_ = unaff_x21;
  auVar27._0_8_ = unaff_x20;
  puVar20 = &stack0xfffffffffffffff0;
  puVar5 = &stack0xfffffffffffffff0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  if ((*(long *)(param_1 + 0xa8) != 0) && (lVar12 = *(long *)(param_1 + 0x78), lVar12 != 0)) {
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x38);
    if (*(long *)(lVar12 + 0x10) == 0) {
      lVar12 = func_0x00f78af4(lVar12,uVar14,0);
      if (*(long *)(lVar12 + 0x10) != 0) {
        auVar26._8_8_ = 0;
        auVar26._0_8_ = *(ulong *)(*(long *)(lVar12 + 0x10) + 0x28);
        puVar22 = &Atlas_Maps_MapSequenceController__StopActiveTimeline;
        goto code_r0x014c037c;
      }
      func_0x00f78af4();
      return;
    }
    auVar27._8_8_ = uVar14;
    auVar27._0_8_ = *(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x28);
    puVar15 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    puVar20 = unaff_x19;
code_r0x014c0808:
    auVar26._8_8_ = puVar15;
    auVar26._0_8_ = auVar27._0_8_;
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = puVar20;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    puVar20 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar22 = &UNK_014c082c;
    unaff_x19 = puVar15;
code_r0x014c037c:
    unaff_x21 = auVar27._8_8_;
    auVar3._8_8_ = auVar27._0_8_;
    auVar3._0_8_ = unaff_x19;
    lVar12 = auVar26._0_8_;
    puVar6 = puVar5 + -0x20;
    *(long *)(puVar5 + -0x20) = auVar27._0_8_;
    *(undefined1 **)(puVar5 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar5 + -0x10) = puVar20;
    *(undefined **)(puVar5 + -8) = puVar22;
    puVar20 = puVar5 + -0x10;
    if (lVar12 == 0) {
code_r0x014c03e4:
      puVar22 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirectorActivations;
      lVar12 = func_0x00f78af4();
    }
    else {
      /*UnityEngine.Playables.PlayableDirector$$Stop*/ func_0x03282c40(lVar12,0);
      /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(lVar12,0);
      /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar12,0);
      if (auVar26._8_4_ != 0) {
        lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar12,0);
        auVar3 = auVar26;
        if (lVar9 == 0) goto code_r0x014c03e4;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar9,0,0);
      }
      puVar20 = *(undefined1 **)(puVar5 + -0x10);
      puVar22 = *(undefined **)(puVar5 + -8);
      auVar3._8_8_ = *(undefined8 *)(puVar5 + -0x20);
      auVar3._0_8_ = *(undefined8 *)(puVar5 + -0x18);
      puVar6 = puVar5;
    }
    *(undefined8 *)(puVar6 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar6 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar6 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar6 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar6 + -0x30) = unaff_x22;
    *(long **)(puVar6 + -0x28) = unaff_x21;
    *(long *)(puVar6 + -0x20) = auVar3._8_8_;
    *(long *)(puVar6 + -0x18) = auVar3._0_8_;
    *(undefined1 **)(puVar6 + -0x10) = puVar20;
    *(undefined **)(puVar6 + -8) = puVar22;
    if ((bRam0000000003eb4b15 & 1) == 0) {
      func_0x00f78a20(0x3d1faa8);
      func_0x00f78a20(0x3d21b60);
      func_0x00f78a20(0x3d220f0);
      func_0x00f78a20(0x3d1d180);
      func_0x00f78a20(0x3d1d390);
      func_0x00f78a20(0x3d22180);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d25280);
      bRam0000000003eb4b15 = 1;
    }
    if (lVar12 != 0) {
      unaff_x22 = 0x3d23990;
      plVar10 = (long *)/*UnityEngine.Playables.PlayableDirector$$get_playableAsset*/ func_0x0328235c(lVar12,0);
      if (plVar10 == (long *)0x0) {
code_r0x014c04b4:
        plVar10 = (long *)0x0;
      }
      else {
        if (*(byte *)(*plVar10 + 300) < *(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300))
        goto code_r0x014c04b4;
        if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300) * 8 +
                     -8) != /*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280) {
          plVar10 = (long *)0x0;
        }
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar15 = (undefined1 *)0x0;
      iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar10,0);
      if (iVar7 == 0) {
        return;
      }
      if ((plVar10 != (long *)0x0) &&
         (plVar10 = (long *)/*UnityEngine.Timeline.TimelineAsset$$GetOutputTracks*/ func_0x031fab88(plVar10,0), plVar10 != (long *)0x0)) {
        lVar9 = *plVar10;
        uVar18 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == /*System.Collections.Generic.IEnumerable<TrackAsset>_TypeInfo*/ lRam0000000003d1d180) {
              puVar11 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
              goto code_r0x014c0568;
            }
            piVar19 = piVar19 + 4;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
        puVar15 = (undefined1 *)0x0;
        puVar11 = (undefined8 *)func_0x00fac1f0(plVar10);
code_r0x014c0568:
        unaff_x20 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
        if (unaff_x20 != (long *)0x0) {
          unaff_x23 = 0x3d22180;
          unaff_x24 = 0x3d1d390;
          unaff_x25 = 0x3d1faa8;
          unaff_x26 = 0x3d21b60;
code_r0x014c059c:
          lVar9 = *unaff_x20;
          uVar18 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar11 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
                goto code_r0x014c05e8;
              }
              piVar19 = piVar19 + 4;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          puVar15 = (undefined1 *)0x0;
          puVar11 = (undefined8 *)func_0x00fac1f0(unaff_x20);
code_r0x014c05e8:
          uVar18 = (*(code *)*puVar11)(unaff_x20,puVar11[1]);
          if ((uVar18 & 1) != 0) {
            lVar9 = *unaff_x20;
            uVar18 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar18 != 0) {
              piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == /*System.Collections.Generic.IEnumerator<TrackAsset>_TypeInfo*/ lRam0000000003d1d390) {
                  puVar11 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
                  goto code_r0x014c0644;
                }
                piVar19 = piVar19 + 4;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            puVar15 = (undefined1 *)0x0;
            puVar11 = (undefined8 *)func_0x00fac1f0(unaff_x20);
code_r0x014c0644:
            plVar10 = (long *)(*(code *)*puVar11)(unaff_x20,puVar11[1]);
            if (plVar10 != (long *)0x0) {
              if ((*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) <= *(byte *)(*plVar10 + 300)) &&
                 (*(long *)(*(long *)(*plVar10 + 200) +
                            (ulong)*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) * 8 + -8) ==
                  /*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8)) {
                unaff_x21 = (long *)/*UnityEngine.Playables.PlayableDirector$$GetGenericBinding*/ func_0x03282f5c(lVar12,plVar10,0);
                if (unaff_x21 == (long *)0x0) {
                  unaff_x21 = (long *)0x0;
                }
                else if (*unaff_x21 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60) {
                  unaff_x21 = (long *)0x0;
                }
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                puVar15 = (undefined1 *)0x0;
                uVar18 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0);
                if ((uVar18 & 1) != 0) {
                  if (unaff_x21 == (long *)0x0) goto code_r0x014c0778;
                  puVar15 = (undefined1 *)0x0;
                  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(unaff_x21,0);
                }
              }
            }
            goto code_r0x014c059c;
          }
          puVar20 = (undefined1 *)0x0;
          do {
            if (unaff_x20 != (long *)0x0) {
              lVar12 = *unaff_x20;
              uVar18 = (ulong)*(ushort *)(lVar12 + 0x12a);
              if (uVar18 != 0) {
                piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar11 = (undefined8 *)(lVar12 + (long)*piVar19 * 0x10 + 0x138);
                    goto code_r0x014c074c;
                  }
                  piVar19 = piVar19 + 4;
                  uVar18 = uVar18 - 1;
                } while (uVar18 != 0);
              }
              puVar15 = (undefined1 *)0x0;
              puVar11 = (undefined8 *)func_0x00fac1f0(unaff_x20);
code_r0x014c074c:
              (*(code *)*puVar11)(unaff_x20,puVar11[1]);
            }
            if (puVar20 == (undefined1 *)0x0) {
              return;
            }
            func_0x00f78ac0(puVar20,0);
            if (extraout_w1 != 1) goto code_r0x014c07cc;
            puVar11 = (undefined8 *)___cxa_begin_catch();
            puVar20 = (undefined1 *)*puVar11;
            ___cxa_end_catch();
          } while( true );
        }
        func_0x00f78af4();
        goto code_r0x014c0784;
      }
    }
    func_0x00f78af4();
code_r0x014c0778:
    func_0x00f78af4();
code_r0x014c0784:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x14c0788);
    (*pcVar4)();
  }
  auVar27 = func_0x00f78af4();
  plVar10 = auVar27._8_8_;
  lVar12 = auVar27._0_8_;
  if ((bRam0000000003eb52a7 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb52a7 = 1;
  }
  if ((*(long *)(lVar12 + 0xa8) != 0) &&
     (lVar9 = *(long *)(*(long *)(lVar12 + 0xa8) + 0x28), lVar9 != 0)) {
    dVar24 = (double)/*UnityEngine.Playables.PlayableDirector$$get_time*/ func_0x03282af0(lVar9,0);
    if ((*(long *)(lVar12 + 0xa8) != 0) &&
       (plVar13 = *(long **)(*(long *)(lVar12 + 0xa8) + 0x38), plVar13 != (long *)0x0)) {
      dVar25 = (double)(**(code **)(*plVar13 + 0x1a8))(plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
      if (*(long *)(lVar12 + 0xa8) != 0) {
        if (dVar24 < dVar25 - (double)*(float *)(*(long *)(lVar12 + 0xa8) + 0x4c)) {
code_r0x015b92e0:
          if (*(long *)(lVar12 + 0xa8) != 0) {
            iVar7 = /*Atlas.PlayableDirectorHelpers$$HasPlayableDirectorFinished*/ func_0x014b58e8(*(undefined8 *)(*(long *)(lVar12 + 0xa8) + 0x28),0);
            if (iVar7 == 0) {
              return;
            }
            lVar12 = *(long *)(lVar12 + 0x60);
            if (lVar12 == 0) {
              return;
            }
            uVar14 = 0;
            lStack_68 = lVar12;
            lVar9 = *(long *)(lVar12 + 0x68);
            if (lVar9 == 0) {
              plVar10 = &lStack_68;
              lVar21 = 1;
            }
            else {
              lVar21 = *(long *)(lVar9 + 0x18);
              if (lVar21 == 0) {
                return;
              }
              plVar10 = (long *)(lVar9 + 0x20);
            }
            lVar9 = 0;
            do {
              lVar16 = plVar10[lVar9];
              pcVar4 = *(code **)(lVar16 + 0x10);
              plVar13 = *(long **)(lVar16 + 0x20);
              lVar16 = *(long *)(lVar16 + 0x28);
              if (*(short *)(lVar16 + 0x48) == -1) {
                func_0x00f78ad8(lVar16,uVar14);
              }
              iVar7 = func_0x00f78a4c(lVar16);
              if (iVar7 == 0) {
                if ((((plVar13 == (long *)0x0) || (*(short *)(lVar16 + 0x48) == -1)) ||
                    ((*(byte *)(*plVar13 + 0x115) & 1) != 0)) || (*(long *)(lVar12 + 0x18) == 0))
                goto code_r0x02924d98;
                iVar7 = func_0x00f78a44(lVar16);
                iVar8 = func_0x00f78ec0(lVar16);
                if (iVar7 == 0) {
                  uVar1 = *(ushort *)(lVar16 + 0x48);
                  if (iVar8 == 0) {
                    lVar16 = *plVar13 + (ulong)uVar1 * 0x10;
                    (**(code **)(lVar16 + 0x138))(plVar13,*(undefined8 *)(lVar16 + 0x140));
                    uVar14 = extraout_x1_01;
                    goto code_r0x02924da4;
                  }
                  lVar16 = func_0x00f78a48(lVar16);
                  lVar17 = *plVar13;
                  uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
                  if (uVar18 != 0) {
                    piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) == lVar16) {
                        puVar11 = (undefined8 *)
                                  (lVar17 + (long)(int)(*piVar19 + (uint)uVar1) * 0x10 + 0x138);
                        goto code_r0x02924e68;
                      }
                      piVar19 = piVar19 + 4;
                      uVar18 = uVar18 - 1;
                    } while (uVar18 != 0);
                  }
                  puVar11 = (undefined8 *)func_0x00fac1f0(plVar13,lVar16,(ulong)uVar1);
code_r0x02924e68:
                  pcVar4 = (code *)*puVar11;
                  puVar11 = (undefined8 *)puVar11[1];
                }
                else {
                  if (iVar8 == 0) {
                    uVar14 = *(undefined8 *)
                              (*plVar13 + (ulong)*(ushort *)(lVar16 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar17 = *plVar13;
                    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
                    if (uVar18 != 0) {
                      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar19 + -2) == *(long *)(lVar16 + 0x18)) {
                          lVar17 = lVar17 + (long)(int)(*piVar19 + (uint)*(ushort *)(lVar16 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x02924e40;
                        }
                        piVar19 = piVar19 + 4;
                        uVar18 = uVar18 - 1;
                      } while (uVar18 != 0);
                    }
                    lVar17 = func_0x00fac1f0(plVar13);
code_r0x02924e40:
                    uVar14 = *(undefined8 *)(lVar17 + 8);
                  }
                  puVar11 = (undefined8 *)func_0x00f78acc(uVar14,lVar16);
                  pcVar4 = (code *)*puVar11;
                }
                (*pcVar4)(plVar13,puVar11);
                uVar14 = extraout_x1_02;
              }
              else if (*(char *)(lVar16 + 0x4a) == '\0') {
                (*pcVar4)(lVar16);
                uVar14 = extraout_x1;
              }
              else {
code_r0x02924d98:
                (*pcVar4)(plVar13,lVar16);
                uVar14 = extraout_x1_00;
              }
code_r0x02924da4:
              lVar9 = lVar9 + 1;
              if (lVar9 == lVar21) {
                return;
              }
            } while( true );
          }
        }
        else if (*(char *)(lVar12 + 0x98) == '\0') {
          if (plVar10 != (long *)0x0) {
            lVar9 = *plVar10;
            uVar18 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar18 != 0) {
              piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
                  puVar11 = (undefined8 *)(lVar9 + (long)(*piVar19 + 4) * 0x10 + 0x138);
                  goto code_r0x015b92cc;
                }
                piVar19 = piVar19 + 4;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            puVar11 = (undefined8 *)func_0x00fac1f0(plVar10,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,4);
code_r0x015b92cc:
            (*(code *)*puVar11)(plVar10,puVar11[1]);
            /*Atlas.Contexts.IntroSequenceMapPanState$$StartPortalling*/ func_0x015b9518(lVar12);
            goto code_r0x015b92e0;
          }
        }
        else if (plVar10 != (long *)0x0) {
          lVar9 = *plVar10;
          uVar18 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
                puVar11 = (undefined8 *)(lVar9 + (long)(*piVar19 + 4) * 0x10 + 0x138);
                goto code_r0x015b92a4;
              }
              piVar19 = piVar19 + 4;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          puVar11 = (undefined8 *)func_0x00fac1f0(plVar10,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,4);
code_r0x015b92a4:
          fVar23 = (float)(*(code *)*puVar11)(plVar10,puVar11[1]);
          lVar9 = lVar12;
          goto code_r0x015b932c;
        }
      }
    }
  }
  lVar9 = func_0x00f78af4();
  fVar23 = extraout_s0;
code_r0x015b932c:
  lStack_68 = lVar12;
  if ((bRam0000000003eb52a9 & 1) == 0) {
    func_0x00f78a20(0x3d570b8);
    func_0x00f78a20(0x3d3d390);
    func_0x00f78a20(0x3d3d398);
    func_0x00f78a20(0x3d3d3a0);
    func_0x00f78a20(0x3d71368);
    bRam0000000003eb52a9 = 1;
  }
  lVar12 = *(long *)(lVar9 + 0x88);
  if (lVar12 != 0) {
    uVar2 = *(int *)(lVar12 + 0x18) - 1;
    if ((int)uVar2 < 0) {
      return;
    }
    do {
      if (*(uint *)(lVar12 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (*(float *)(*(long *)(lVar12 + 0x10) + (ulong)uVar2 * 0x10 + 0x28) <= fVar23) {
        lVar12 = *(long *)(lVar9 + 0x88);
        if (lVar12 == 0) break;
        if (*(uint *)(lVar12 + 0x18) <= uVar2) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0x10) + (ulong)uVar2 * 0x10 + 0x20);
        if ((lVar12 == 0) || (*(long *)(lVar12 + 0x28) == 0)) break;
        Atlas_Gameplay_Kart_KartVisualComposite__SetVisualRootActive(*(long *)(lVar12 + 0x28),1,0);
        if ((*(long *)(lVar9 + 0x90) == 0) ||
           (lVar21 = Atlas_Contexts_GameContextBase__SpawnTimedObject_PortalVFXBehaviour_
                               (0x3fc00000,*(long *)(lVar9 + 0x90),/*STR('PortalVFXBehaviour')*/ uRam0000000003d71368,
                                uRam0000000003d570b8), lVar21 == 0)) break;
        lVar16 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar21,0);
        if (((*(long *)(lVar12 + 0x18) == 0) ||
            (lVar17 = *(long *)(*(long *)(lVar12 + 0x18) + 0x80), lVar17 == 0)) ||
           (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar17,0), lVar16 == 0)) break;
        /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(lVar16,0);
        if ((*(long *)(lVar12 + 0x18) == 0) ||
           (lVar17 = *(long *)(*(long *)(lVar12 + 0x18) + 0x80), lVar17 == 0)) break;
        /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar17,0);
        /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar16,0);
        /*Atlas.Gameplay.PortalVFXBehaviour$$StartExitingPortal*/ func_0x014c3a84(lVar21,*(undefined8 *)(lVar12 + 0x28),0,0);
        if (*(long *)(lVar12 + 0x70) == 0) break;
        /*Atlas.Audio.KartAudio$$OpenPortal*/ func_0x015b96a8(*(long *)(lVar12 + 0x70),0);
        if (*(long *)(lVar9 + 0x88) == 0) break;
        /*System.Collections.Generic.List<IntroSequenceMapPanState.KartTimePairing>$$RemoveAt*/ func_0x0253cfb0(*(long *)(lVar9 + 0x88),(ulong)uVar2,uRam0000000003d3d390);
      }
      uVar2 = uVar2 - 1;
      if ((int)uVar2 < 0) {
        return;
      }
      lVar12 = *(long *)(lVar9 + 0x88);
    } while (lVar12 != 0);
  }
  func_0x00f78af4();
  return;
code_r0x014c07cc:
  auVar27 = __Unwind_Resume();
  unaff_x19 = auVar27._0_8_;
  register0x00000008 = (BADSPACEBASE *)(puVar6 + -0x70);
  puVar5 = puVar6 + -0x70;
  *(long **)(puVar6 + -0x70) = unaff_x20;
  *(undefined1 **)(puVar6 + -0x68) = puVar20;
  *(undefined1 **)(puVar6 + -0x60) = puVar6 + -0x10;
  *(undefined **)(puVar6 + -0x58) = &Atlas_PlayableDirectorHelpers__ChangeTimelineAndPlay;
  unaff_x29 = puVar6 + -0x60;
  if (unaff_x19 == (undefined1 *)0x0) goto code_r0x014c0804;
  /*UnityEngine.Playables.PlayableDirector$$set_playableAsset*/ func_0x03282440(unaff_x19,auVar27._8_8_,0);
  auVar27._8_8_ = unaff_x21;
  auVar27._0_8_ = *(undefined8 *)(puVar6 + -0x70);
  *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)(puVar6 + -0x70);
  *(undefined8 *)(puVar6 + -0x68) = *(undefined8 *)(puVar6 + -0x68);
  *(undefined8 *)(puVar6 + -0x60) = *(undefined8 *)(puVar6 + -0x60);
  *(undefined8 *)(puVar6 + -0x58) = *(undefined8 *)(puVar6 + -0x58);
  puVar20 = puVar6 + -0x60;
  if ((int)puVar15 == 0) {
    if (unaff_x19 != (undefined1 *)0x0) goto code_r0x014c034c;
  }
  else if ((unaff_x19 != (undefined1 *)0x0) && (lVar12 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x19,0), lVar12 != 0))
  {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar12,1,0);
code_r0x014c034c:
    /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(unaff_x19,0);
    /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(unaff_x19,0);
    *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)(puVar6 + -0x70);
    *(undefined8 *)(puVar6 + -0x68) = *(undefined8 *)(puVar6 + -0x68);
    *(undefined8 *)(puVar6 + -0x60) = *(undefined8 *)(puVar6 + -0x60);
    *(undefined8 *)(puVar6 + -0x58) = *(undefined8 *)(puVar6 + -0x58);
    if (pcRam0000000003ec1b90 == (code *)0x0) {
      pcRam0000000003ec1b90 =
           (code *)func_0x00f789d4("UnityEngine.Playables.PlayableDirector::Play()");
    }
                    /* WARNING: Could not recover jumptable at 0x0328295c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ec1b90)(unaff_x19);
    return;
  }
  puVar22 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirector;
  auVar26 = func_0x00f78af4();
  goto code_r0x014c037c;
code_r0x014c0804:
  unaff_x30 = &Atlas_PlayableDirectorHelpers__ResetThenChangeTimelineAndPlay;
  auVar27 = func_0x00f78af4();
  goto code_r0x014c0808;
}



// ============================================================
// RVA: 0x15b9164 | Atlas.Contexts.IntroSequenceMapPanState.OnUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x015b92b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015b92b8) */

void Atlas_Contexts_IntroSequenceMapPanState__OnUpdate(long param_1,long *param_2)

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  code *pcVar15;
  long lVar16;
  float fVar17;
  float extraout_s0;
  double dVar18;
  double dVar19;
  long lStack_58;
  
  if ((bRam0000000003eb52a7 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb52a7 = 1;
  }
  if ((*(long *)(param_1 + 0xa8) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 0xa8) + 0x28), lVar6 != 0)) {
    dVar18 = (double)/*UnityEngine.Playables.PlayableDirector$$get_time*/ func_0x03282af0(lVar6,0);
    if ((*(long *)(param_1 + 0xa8) != 0) &&
       (plVar7 = *(long **)(*(long *)(param_1 + 0xa8) + 0x38), plVar7 != (long *)0x0)) {
      dVar19 = (double)(**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
      if (*(long *)(param_1 + 0xa8) != 0) {
        if (dVar18 < dVar19 - (double)*(float *)(*(long *)(param_1 + 0xa8) + 0x4c)) {
LAB_015b92e0:
          if (*(long *)(param_1 + 0xa8) != 0) {
            iVar4 = /*Atlas.PlayableDirectorHelpers$$HasPlayableDirectorFinished*/ func_0x014b58e8(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x28),0);
            if (iVar4 == 0) {
              return;
            }
            lVar6 = *(long *)(param_1 + 0x60);
            if (lVar6 == 0) {
              return;
            }
            uVar9 = 0;
            lStack_58 = lVar6;
            lVar10 = *(long *)(lVar6 + 0x68);
            if (lVar10 == 0) {
              plVar7 = &lStack_58;
              lVar16 = 1;
            }
            else {
              lVar16 = *(long *)(lVar10 + 0x18);
              if (lVar16 == 0) {
                return;
              }
              plVar7 = (long *)(lVar10 + 0x20);
            }
            lVar10 = 0;
            do {
              lVar11 = plVar7[lVar10];
              pcVar15 = *(code **)(lVar11 + 0x10);
              plVar1 = *(long **)(lVar11 + 0x20);
              lVar11 = *(long *)(lVar11 + 0x28);
              if (*(short *)(lVar11 + 0x48) == -1) {
                func_0x00f78ad8(lVar11,uVar9);
              }
              iVar4 = func_0x00f78a4c(lVar11);
              if (iVar4 == 0) {
                if ((((plVar1 == (long *)0x0) || (*(short *)(lVar11 + 0x48) == -1)) ||
                    ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar6 + 0x18) == 0))
                goto code_r0x02924d98;
                iVar4 = func_0x00f78a44(lVar11);
                iVar5 = func_0x00f78ec0(lVar11);
                if (iVar4 == 0) {
                  uVar2 = *(ushort *)(lVar11 + 0x48);
                  if (iVar5 == 0) {
                    lVar11 = *plVar1 + (ulong)uVar2 * 0x10;
                    (**(code **)(lVar11 + 0x138))(plVar1,*(undefined8 *)(lVar11 + 0x140));
                    uVar9 = extraout_x1_01;
                    goto code_r0x02924da4;
                  }
                  lVar11 = func_0x00f78a48(lVar11);
                  lVar12 = *plVar1;
                  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
                  if (uVar13 != 0) {
                    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == lVar11) {
                        puVar8 = (undefined8 *)
                                 (lVar12 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138);
                        goto code_r0x02924e68;
                      }
                      piVar14 = piVar14 + 4;
                      uVar13 = uVar13 - 1;
                    } while (uVar13 != 0);
                  }
                  puVar8 = (undefined8 *)func_0x00fac1f0(plVar1,lVar11,(ulong)uVar2);
code_r0x02924e68:
                  pcVar15 = (code *)*puVar8;
                  puVar8 = (undefined8 *)puVar8[1];
                }
                else {
                  if (iVar5 == 0) {
                    uVar9 = *(undefined8 *)
                             (*plVar1 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar12 = *plVar1;
                    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
                    if (uVar13 != 0) {
                      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) == *(long *)(lVar11 + 0x18)) {
                          lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar11 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x02924e40;
                        }
                        piVar14 = piVar14 + 4;
                        uVar13 = uVar13 - 1;
                      } while (uVar13 != 0);
                    }
                    lVar12 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
                    uVar9 = *(undefined8 *)(lVar12 + 8);
                  }
                  puVar8 = (undefined8 *)func_0x00f78acc(uVar9,lVar11);
                  pcVar15 = (code *)*puVar8;
                }
                (*pcVar15)(plVar1,puVar8);
                uVar9 = extraout_x1_02;
              }
              else if (*(char *)(lVar11 + 0x4a) == '\0') {
                (*pcVar15)(lVar11);
                uVar9 = extraout_x1;
              }
              else {
code_r0x02924d98:
                (*pcVar15)(plVar1,lVar11);
                uVar9 = extraout_x1_00;
              }
code_r0x02924da4:
              lVar10 = lVar10 + 1;
              if (lVar10 == lVar16) {
                return;
              }
            } while( true );
          }
        }
        else if (*(char *)(param_1 + 0x98) == '\0') {
          if (param_2 != (long *)0x0) {
            lVar6 = *param_2;
            uVar13 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
                  puVar8 = (undefined8 *)(lVar6 + (long)(*piVar14 + 4) * 0x10 + 0x138);
                  goto code_r0x015b92cc;
                }
                piVar14 = piVar14 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            puVar8 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,4);
code_r0x015b92cc:
            (*(code *)*puVar8)(param_2,puVar8[1]);
            /*Atlas.Contexts.IntroSequenceMapPanState$$StartPortalling*/ func_0x015b9518(param_1);
            goto LAB_015b92e0;
          }
        }
        else if (param_2 != (long *)0x0) {
          lVar6 = *param_2;
          uVar13 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
                puVar8 = (undefined8 *)(lVar6 + (long)(*piVar14 + 4) * 0x10 + 0x138);
                goto LAB_015b92a4;
              }
              piVar14 = piVar14 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,4);
LAB_015b92a4:
          fVar17 = (float)(*(code *)*puVar8)(param_2,puVar8[1]);
          lVar6 = param_1;
          goto code_r0x015b932c;
        }
      }
    }
  }
  lVar6 = func_0x00f78af4();
  fVar17 = extraout_s0;
code_r0x015b932c:
  lStack_58 = param_1;
  if ((bRam0000000003eb52a9 & 1) == 0) {
    func_0x00f78a20(0x3d570b8);
    func_0x00f78a20(0x3d3d390);
    func_0x00f78a20(0x3d3d398);
    func_0x00f78a20(0x3d3d3a0);
    func_0x00f78a20(0x3d71368);
    bRam0000000003eb52a9 = 1;
  }
  lVar10 = *(long *)(lVar6 + 0x88);
  if (lVar10 != 0) {
    uVar3 = *(int *)(lVar10 + 0x18) - 1;
    if ((int)uVar3 < 0) {
      return;
    }
    do {
      if (*(uint *)(lVar10 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (*(float *)(*(long *)(lVar10 + 0x10) + (ulong)uVar3 * 0x10 + 0x28) <= fVar17) {
        lVar10 = *(long *)(lVar6 + 0x88);
        if (lVar10 == 0) break;
        if (*(uint *)(lVar10 + 0x18) <= uVar3) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + (ulong)uVar3 * 0x10 + 0x20);
        if ((lVar10 == 0) || (*(long *)(lVar10 + 0x28) == 0)) break;
        Atlas_Gameplay_Kart_KartVisualComposite__SetVisualRootActive(*(long *)(lVar10 + 0x28),1,0);
        if ((*(long *)(lVar6 + 0x90) == 0) ||
           (lVar16 = Atlas_Contexts_GameContextBase__SpawnTimedObject_PortalVFXBehaviour_
                               (0x3fc00000,*(long *)(lVar6 + 0x90),/*STR('PortalVFXBehaviour')*/ uRam0000000003d71368,
                                uRam0000000003d570b8), lVar16 == 0)) break;
        lVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar16,0);
        if (((*(long *)(lVar10 + 0x18) == 0) ||
            (lVar12 = *(long *)(*(long *)(lVar10 + 0x18) + 0x80), lVar12 == 0)) ||
           (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar12,0), lVar11 == 0)) break;
        /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(lVar11,0);
        if ((*(long *)(lVar10 + 0x18) == 0) ||
           (lVar12 = *(long *)(*(long *)(lVar10 + 0x18) + 0x80), lVar12 == 0)) break;
        /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar12,0);
        /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar11,0);
        /*Atlas.Gameplay.PortalVFXBehaviour$$StartExitingPortal*/ func_0x014c3a84(lVar16,*(undefined8 *)(lVar10 + 0x28),0,0);
        if (*(long *)(lVar10 + 0x70) == 0) break;
        /*Atlas.Audio.KartAudio$$OpenPortal*/ func_0x015b96a8(*(long *)(lVar10 + 0x70),0);
        if (*(long *)(lVar6 + 0x88) == 0) break;
        /*System.Collections.Generic.List<IntroSequenceMapPanState.KartTimePairing>$$RemoveAt*/ func_0x0253cfb0(*(long *)(lVar6 + 0x88),(ulong)uVar3,uRam0000000003d3d390);
      }
      uVar3 = uVar3 - 1;
      if ((int)uVar3 < 0) {
        return;
      }
      lVar10 = *(long *)(lVar6 + 0x88);
    } while (lVar10 != 0);
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x15b932c | Atlas.Contexts.IntroSequenceMapPanState.UpdateSpawnTimes
// ============================================================

void Atlas_Contexts_IntroSequenceMapPanState__UpdateSpawnTimes(float param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000003eb52a9 & 1) == 0) {
    func_0x00f78a20(0x3d570b8);
    func_0x00f78a20(0x3d3d390);
    func_0x00f78a20(0x3d3d398);
    func_0x00f78a20(0x3d3d3a0);
    func_0x00f78a20(0x3d71368);
    bRam0000000003eb52a9 = 1;
  }
  lVar5 = *(long *)(param_2 + 0x88);
  if (lVar5 != 0) {
    uVar1 = *(int *)(lVar5 + 0x18) - 1;
    if ((int)uVar1 < 0) {
      return;
    }
    do {
      if (*(uint *)(lVar5 + 0x18) <= uVar1) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (*(float *)(*(long *)(lVar5 + 0x10) + (ulong)uVar1 * 0x10 + 0x28) <= param_1) {
        lVar5 = *(long *)(param_2 + 0x88);
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= uVar1) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + (ulong)uVar1 * 0x10 + 0x20);
        if ((lVar5 == 0) || (*(long *)(lVar5 + 0x28) == 0)) break;
        Atlas_Gameplay_Kart_KartVisualComposite__SetVisualRootActive(*(long *)(lVar5 + 0x28),1,0);
        if ((*(long *)(param_2 + 0x90) == 0) ||
           (lVar2 = Atlas_Contexts_GameContextBase__SpawnTimedObject_PortalVFXBehaviour_
                              (0x3fc00000,*(long *)(param_2 + 0x90),/*STR('PortalVFXBehaviour')*/ uRam0000000003d71368,
                               uRam0000000003d570b8), lVar2 == 0)) break;
        lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar2,0);
        if (((*(long *)(lVar5 + 0x18) == 0) ||
            (lVar4 = *(long *)(*(long *)(lVar5 + 0x18) + 0x80), lVar4 == 0)) ||
           (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar4,0), lVar3 == 0)) break;
        /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(lVar3,0);
        if ((*(long *)(lVar5 + 0x18) == 0) ||
           (lVar4 = *(long *)(*(long *)(lVar5 + 0x18) + 0x80), lVar4 == 0)) break;
        /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar4,0);
        /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar3,0);
        /*Atlas.Gameplay.PortalVFXBehaviour$$StartExitingPortal*/ func_0x014c3a84(lVar2,*(undefined8 *)(lVar5 + 0x28),0,0);
        if (*(long *)(lVar5 + 0x70) == 0) break;
        /*Atlas.Audio.KartAudio$$OpenPortal*/ func_0x015b96a8(*(long *)(lVar5 + 0x70),0);
        if (*(long *)(param_2 + 0x88) == 0) break;
        /*System.Collections.Generic.List<IntroSequenceMapPanState.KartTimePairing>$$RemoveAt*/ func_0x0253cfb0(*(long *)(param_2 + 0x88),(ulong)uVar1,uRam0000000003d3d390);
      }
      uVar1 = uVar1 - 1;
      if ((int)uVar1 < 0) {
        return;
      }
      lVar5 = *(long *)(param_2 + 0x88);
    } while (lVar5 != 0);
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x15b9518 | Atlas.Contexts.IntroSequenceMapPanState.StartPortalling
// ============================================================

void Atlas_Contexts_IntroSequenceMapPanState__StartPortalling(float param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  int extraout_w1;
  long lVar6;
  undefined8 *unaff_x21;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb52a8 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3d388);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb52a8 = 1;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  *(undefined1 *)(param_2 + 0x98) = 1;
  lVar6 = *(long *)(param_2 + 0xa8);
  if (((lVar6 != 0) && (*(long *)(param_2 + 0xa0) != 0)) &&
     (lVar3 = *(long *)(*(long *)(param_2 + 0xa0) + 0x10), lVar3 != 0)) {
    fVar7 = *(float *)(lVar6 + 0x48);
    fVar9 = *(float *)(lVar6 + 0x4c);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_68,lVar3,uRam0000000003d3ae20);
    while( true ) {
      uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_68,uRam0000000003d328d0);
      uVar1 = uStack_58;
      if ((uVar4 & 1) == 0) {
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,uRam0000000003d328c8);
        return;
      }
      fVar8 = (float)/*UnityEngine.Random$$Range*/ func_0x03252854(0,fVar7 - fVar9,0);
      if (*(long *)(param_2 + 0x88) == 0) break;
      /*System.Collections.Generic.List<IntroSequenceMapPanState.KartTimePairing>$$Add*/ func_0x0253b76c(*(long *)(param_2 + 0x88),uVar1,fVar8 + param_1,uRam0000000003d3d388);
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x15b965c);
    (*pcVar2)();
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar5 = (long *)___cxa_begin_catch();
    lVar6 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,*unaff_x21);
    if (lVar6 == 0) {
      return;
    }
    func_0x00f78ac0(lVar6,0);
  }
  lVar6 = __Unwind_Resume();
  *(undefined8 *)(lVar6 + 0x78) = 0;
  *(undefined8 *)(lVar6 + 0x80) = 0;
  return;
}



// ============================================================
// RVA: 0x15b96a0 | Atlas.Contexts.IntroSequenceMapPanState.OnDeInit
// ============================================================

void Atlas_Contexts_IntroSequenceMapPanState__OnDeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}



// ============================================================
// RVA: 0x15b9820 | Atlas.Contexts.IntroSequenceMapPanState..ctor
// ============================================================

void Atlas_Contexts_IntroSequenceMapPanState___ctor(void)

{
  return;
}



