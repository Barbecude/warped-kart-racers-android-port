// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.PlayableDirectorHelpers

// ============================================================
// RVA: 0x14b58e8 | Atlas.PlayableDirectorHelpers.HasPlayableDirectorFinished
// ============================================================

/* WARNING: Possible PIC construction at 0x014c0828: Changing call to branch */
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

ulong Atlas_PlayableDirectorHelpers__HasPlayableDirectorFinished(long param_1)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  ulong uVar8;
  uint uVar7;
  long *plVar10;
  undefined8 *puVar11;
  int extraout_w1;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  undefined1 *unaff_x19;
  long lVar16;
  undefined1 *puVar17;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar18;
  undefined8 unaff_x23;
  long lVar19;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 **ppuVar20;
  undefined1 *puVar21;
  undefined *puVar22;
  code *pcVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 *puStack_40;
  code *pcStack_38;
  ulong uVar9;
  
  auVar27._8_8_ = unaff_x21;
  auVar27._0_8_ = unaff_x20;
  if (param_1 != 0) {
    iVar6 = /*UnityEngine.Playables.PlayableDirector$$get_state*/ func_0x032821bc(param_1,0);
    if (iVar6 == 1) {
      dVar24 = (double)/*UnityEngine.Playables.PlayableDirector$$get_time*/ func_0x03282af0(param_1,0);
      dVar25 = (double)/*UnityEngine.Playables.PlayableDirector$$get_duration*/ func_0x03282bc0(param_1,0);
      uVar8 = (ulong)(dVar25 <= dVar24);
    }
    else {
      uVar8 = 1;
    }
    return uVar8;
  }
  auVar26 = func_0x00f78af4();
  plVar10 = auVar26._8_8_;
  uVar9 = auVar26._0_8_;
  pcStack_38 = Atlas_Contexts_OutroSequenceShowPlacementsState__SwitchCameraFocus;
  uVar8 = uVar9;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4aba & 1) == 0) {
    func_0x00f78a20(0x3d3c320);
    func_0x00f78a20(0x3d3c328);
    uVar8 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb4aba = 1;
  }
  bVar1 = *(byte *)(uVar9 + 0xf8);
  lVar16 = uVar9 + 0xd0;
  if (bVar1 != 0) {
    lVar16 = uVar9 + 0xb8;
  }
  lVar19 = 0xf0;
  if (bVar1 != 0) {
    lVar19 = 0xe8;
  }
  lVar19 = *(long *)(uVar9 + lVar19);
  *(byte *)(uVar9 + 0xf8) = bVar1 ^ 1;
  if (lVar19 == 0) goto LAB_014b5b48;
  if (*(int *)(lVar19 + 0x18) < 1) {
    return uVar8;
  }
  lVar14 = *(long *)(uVar9 + 0xa0);
  lVar13 = *plVar10;
  if (lVar14 != lVar13) {
    if (lVar14 != 0) {
      uVar18 = *(undefined8 *)(lVar14 + 0xf8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar18,0);
      if ((int)uVar8 != 0) {
        if ((*(long *)(uVar9 + 0xa0) == 0) ||
           (lVar13 = *(long *)(*(long *)(uVar9 + 0xa0) + 0xf8), lVar13 == 0)) goto LAB_014b5b48;
        uVar8 = /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar13,0,0);
      }
      lVar13 = *plVar10;
    }
    if (lVar13 == 0) {
      return uVar8;
    }
    *(long *)(uVar9 + 0xa0) = lVar13;
    uVar18 = *(undefined8 *)(lVar13 + 0xf8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar18,0);
    if (iVar6 != 0) {
      if ((*(long *)(uVar9 + 0xa0) == 0) ||
         (lVar13 = *(long *)(*(long *)(uVar9 + 0xa0) + 0xf8), lVar13 == 0)) goto LAB_014b5b48;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar13,1,0);
    }
    if ((*plVar10 == 0) || (lVar13 = *(long *)(*plVar10 + 0x10), lVar13 == 0)) goto LAB_014b5b48;
    lVar14 = *(long *)(uVar9 + 0x98);
    lVar13 = Atlas_Gameplay_Kart_KartComposite__get_KartPhysicsRootObject(lVar13,0);
    if ((lVar13 == 0) || (uVar18 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar13,0), lVar14 == 0)) goto LAB_014b5b48;
    /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar14,uVar18,0,0);
  }
  uVar7 = Atlas_Maths_NiceRandomSelection__SelectNext(lVar16,0);
  lVar16 = *(long *)(uVar9 + 0x90);
  if (*(uint *)(lVar19 + 0x18) <= uVar7) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  if (lVar16 != 0) {
    uVar18 = *(undefined8 *)(*(long *)(lVar19 + 0x10) + (long)(int)uVar7 * 8 + 0x20);
    ppuVar20 = &puStack_40;
    if (*(long *)(lVar16 + 0x10) == 0) {
      lVar16 = func_0x00f78af4(lVar16,uVar18,0);
      if (*(long *)(lVar16 + 0x10) != 0) {
        auVar26._8_8_ = 0;
        auVar26._0_8_ = *(ulong *)(*(long *)(lVar16 + 0x10) + 0x28);
        ppuVar3 = &puStack_40;
        pcVar23 = Atlas_Maps_MapSequenceController__StopActiveTimeline;
        goto code_r0x014c037c;
      }
      uVar8 = func_0x00f78af4();
      return uVar8;
    }
    auVar27._8_8_ = uVar18;
    auVar27._0_8_ = *(undefined8 *)(*(long *)(lVar16 + 0x10) + 0x28);
    puVar12 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    puVar5 = &stack0xffffffffffffffd0;
    puVar17 = unaff_x19;
    puVar21 = puStack_40;
    pcVar23 = pcStack_38;
code_r0x014c0808:
    auVar26._8_8_ = puVar12;
    auVar26._0_8_ = auVar27._0_8_;
    ppuVar3 = (undefined1 **)(puVar5 + -0x30);
    *(undefined8 *)(puVar5 + -0x30) = unaff_x22;
    *(long **)(puVar5 + -0x28) = unaff_x21;
    *(long **)(puVar5 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar5 + -0x18) = puVar17;
    *(undefined1 **)(puVar5 + -0x10) = puVar21;
    *(code **)(puVar5 + -8) = pcVar23;
    ppuVar20 = (undefined1 **)(puVar5 + -0x10);
    pcVar23 = (code *)&UNK_014c082c;
    unaff_x19 = puVar12;
code_r0x014c037c:
    unaff_x21 = auVar27._8_8_;
    auVar2._8_8_ = auVar27._0_8_;
    auVar2._0_8_ = unaff_x19;
    lVar16 = auVar26._0_8_;
    puVar4 = (undefined1 *)((long)ppuVar3 + -0x20);
    *(long *)((long)ppuVar3 + -0x20) = auVar27._0_8_;
    *(undefined1 **)((long)ppuVar3 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar20;
    *(code **)((long)ppuVar3 + -8) = pcVar23;
    puVar21 = (undefined1 *)((long)ppuVar3 + -0x10);
    if (lVar16 == 0) {
code_r0x014c03e4:
      puVar22 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirectorActivations;
      lVar16 = func_0x00f78af4();
    }
    else {
      /*UnityEngine.Playables.PlayableDirector$$Stop*/ func_0x03282c40(lVar16,0);
      /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(lVar16,0);
      /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar16,0);
      if (auVar26._8_4_ != 0) {
        lVar19 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar16,0);
        auVar2 = auVar26;
        if (lVar19 == 0) goto code_r0x014c03e4;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar19,0,0);
      }
      puVar21 = *(undefined1 **)((long)ppuVar3 + -0x10);
      puVar22 = *(undefined **)((long)ppuVar3 + -8);
      auVar2._8_8_ = *(undefined8 *)((long)ppuVar3 + -0x20);
      auVar2._0_8_ = *(undefined8 *)((long)ppuVar3 + -0x18);
      puVar4 = (undefined1 *)ppuVar3;
    }
    *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
    *(long **)(puVar4 + -0x28) = unaff_x21;
    *(long *)(puVar4 + -0x20) = auVar2._8_8_;
    *(long *)(puVar4 + -0x18) = auVar2._0_8_;
    *(undefined1 **)(puVar4 + -0x10) = puVar21;
    *(undefined **)(puVar4 + -8) = puVar22;
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
      unaff_x22 = 0x3d23990;
      plVar10 = (long *)/*UnityEngine.Playables.PlayableDirector$$get_playableAsset*/ func_0x0328235c(lVar16,0);
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
      puVar12 = (undefined1 *)0x0;
      uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar10,0);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      if ((plVar10 != (long *)0x0) &&
         (plVar10 = (long *)/*UnityEngine.Timeline.TimelineAsset$$GetOutputTracks*/ func_0x031fab88(plVar10,0), plVar10 != (long *)0x0)) {
        lVar19 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar19 + 0x12a);
        if (uVar8 != 0) {
          piVar15 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == /*System.Collections.Generic.IEnumerable<TrackAsset>_TypeInfo*/ lRam0000000003d1d180) {
              puVar11 = (undefined8 *)(lVar19 + (long)*piVar15 * 0x10 + 0x138);
              goto code_r0x014c0568;
            }
            piVar15 = piVar15 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar12 = (undefined1 *)0x0;
        puVar11 = (undefined8 *)func_0x00fac1f0(plVar10);
code_r0x014c0568:
        unaff_x20 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
        if (unaff_x20 != (long *)0x0) {
          unaff_x23 = 0x3d22180;
          unaff_x24 = 0x3d1d390;
          unaff_x25 = 0x3d1faa8;
          unaff_x26 = 0x3d21b60;
code_r0x014c059c:
          lVar19 = *unaff_x20;
          uVar8 = (ulong)*(ushort *)(lVar19 + 0x12a);
          if (uVar8 != 0) {
            piVar15 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar11 = (undefined8 *)(lVar19 + (long)*piVar15 * 0x10 + 0x138);
                goto code_r0x014c05e8;
              }
              piVar15 = piVar15 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          puVar12 = (undefined1 *)0x0;
          puVar11 = (undefined8 *)func_0x00fac1f0(unaff_x20);
code_r0x014c05e8:
          uVar8 = (*(code *)*puVar11)(unaff_x20,puVar11[1]);
          if ((uVar8 & 1) != 0) {
            lVar19 = *unaff_x20;
            uVar8 = (ulong)*(ushort *)(lVar19 + 0x12a);
            if (uVar8 != 0) {
              piVar15 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == /*System.Collections.Generic.IEnumerator<TrackAsset>_TypeInfo*/ lRam0000000003d1d390) {
                  puVar11 = (undefined8 *)(lVar19 + (long)*piVar15 * 0x10 + 0x138);
                  goto code_r0x014c0644;
                }
                piVar15 = piVar15 + 4;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            puVar12 = (undefined1 *)0x0;
            puVar11 = (undefined8 *)func_0x00fac1f0(unaff_x20);
code_r0x014c0644:
            plVar10 = (long *)(*(code *)*puVar11)(unaff_x20,puVar11[1]);
            if (plVar10 != (long *)0x0) {
              if ((*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) <= *(byte *)(*plVar10 + 300)) &&
                 (*(long *)(*(long *)(*plVar10 + 200) +
                            (ulong)*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) * 8 + -8) ==
                  /*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8)) {
                unaff_x21 = (long *)/*UnityEngine.Playables.PlayableDirector$$GetGenericBinding*/ func_0x03282f5c(lVar16,plVar10,0);
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
                puVar12 = (undefined1 *)0x0;
                uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0);
                if ((uVar8 & 1) != 0) {
                  if (unaff_x21 == (long *)0x0) goto code_r0x014c0778;
                  puVar12 = (undefined1 *)0x0;
                  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(unaff_x21,0);
                }
              }
            }
            goto code_r0x014c059c;
          }
          puVar17 = (undefined1 *)0x0;
          do {
            if (unaff_x20 != (long *)0x0) {
              lVar16 = *unaff_x20;
              uVar8 = (ulong)*(ushort *)(lVar16 + 0x12a);
              if (uVar8 != 0) {
                piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar11 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
                    goto code_r0x014c074c;
                  }
                  piVar15 = piVar15 + 4;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
              }
              puVar12 = (undefined1 *)0x0;
              puVar11 = (undefined8 *)func_0x00fac1f0(unaff_x20);
code_r0x014c074c:
              uVar8 = (*(code *)*puVar11)(unaff_x20,puVar11[1]);
            }
            if (puVar17 == (undefined1 *)0x0) {
              return uVar8;
            }
            func_0x00f78ac0(puVar17,0);
            if (extraout_w1 != 1) goto code_r0x014c07cc;
            puVar11 = (undefined8 *)___cxa_begin_catch();
            puVar17 = (undefined1 *)*puVar11;
            uVar8 = ___cxa_end_catch();
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
    pcVar23 = (code *)SoftwareBreakpoint(1,0x14c0788);
    (*pcVar23)();
  }
LAB_014b5b48:
  uVar8 = func_0x00f78af4();
  return uVar8;
code_r0x014c07cc:
  auVar27 = __Unwind_Resume();
  unaff_x19 = auVar27._0_8_;
  puVar5 = puVar4 + -0x70;
  ppuVar3 = (undefined1 **)(puVar4 + -0x70);
  *(long **)(puVar4 + -0x70) = unaff_x20;
  *(undefined1 **)(puVar4 + -0x68) = puVar17;
  *(undefined1 **)(puVar4 + -0x60) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x58) = &Atlas_PlayableDirectorHelpers__ChangeTimelineAndPlay;
  puVar21 = puVar4 + -0x60;
  if (unaff_x19 == (undefined1 *)0x0) goto code_r0x014c0804;
  /*UnityEngine.Playables.PlayableDirector$$set_playableAsset*/ func_0x03282440(unaff_x19,auVar27._8_8_,0);
  auVar27._8_8_ = unaff_x21;
  auVar27._0_8_ = *(undefined8 *)(puVar4 + -0x70);
  *(undefined8 *)(puVar4 + -0x70) = *(undefined8 *)(puVar4 + -0x70);
  *(undefined8 *)(puVar4 + -0x68) = *(undefined8 *)(puVar4 + -0x68);
  *(undefined8 *)(puVar4 + -0x60) = *(undefined8 *)(puVar4 + -0x60);
  *(undefined8 *)(puVar4 + -0x58) = *(undefined8 *)(puVar4 + -0x58);
  ppuVar20 = (undefined1 **)(puVar4 + -0x60);
  if ((int)puVar12 == 0) {
    if (unaff_x19 != (undefined1 *)0x0) goto code_r0x014c034c;
  }
  else if ((unaff_x19 != (undefined1 *)0x0) && (lVar16 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x19,0), lVar16 != 0))
  {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar16,1,0);
code_r0x014c034c:
    /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(unaff_x19,0);
    /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(unaff_x19,0);
    *(undefined8 *)(puVar4 + -0x70) = *(undefined8 *)(puVar4 + -0x70);
    *(undefined8 *)(puVar4 + -0x68) = *(undefined8 *)(puVar4 + -0x68);
    *(undefined8 *)(puVar4 + -0x60) = *(undefined8 *)(puVar4 + -0x60);
    *(undefined8 *)(puVar4 + -0x58) = *(undefined8 *)(puVar4 + -0x58);
    if (pcRam0000000003ec1b90 == (code *)0x0) {
      pcRam0000000003ec1b90 =
           (code *)func_0x00f789d4("UnityEngine.Playables.PlayableDirector::Play()");
    }
                    /* WARNING: Could not recover jumptable at 0x0328295c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (*pcRam0000000003ec1b90)(unaff_x19);
    return uVar8;
  }
  pcVar23 = (code *)&Atlas_PlayableDirectorHelpers__ResetPlayableDirector;
  auVar26 = func_0x00f78af4();
  goto code_r0x014c037c;
code_r0x014c0804:
  pcVar23 = (code *)&Atlas_PlayableDirectorHelpers__ResetThenChangeTimelineAndPlay;
  auVar27 = func_0x00f78af4();
  goto code_r0x014c0808;
}



// ============================================================
// RVA: 0x14c0298 | Atlas.PlayableDirectorHelpers.IsPlayableDirectorHolding
// ============================================================

/* WARNING: Possible PIC construction at 0x014c0828: Changing call to branch */
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

ulong Atlas_PlayableDirectorHelpers__IsPlayableDirectorHolding(long param_1)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  int extraout_w1;
  long lVar13;
  int *piVar14;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar15;
  undefined *puVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  puVar5 = &stack0xffffffffffffffd0;
  puVar15 = &stack0xfffffffffffffff0;
  if (param_1 != 0) {
    iVar6 = /*UnityEngine.Playables.PlayableDirector$$get_extrapolationMode*/ func_0x032822dc(param_1,0);
    if ((iVar6 == 0) && (iVar6 = /*UnityEngine.Playables.PlayableDirector$$get_state*/ func_0x032821bc(param_1,0), iVar6 == 1)) {
      dVar17 = (double)/*UnityEngine.Playables.PlayableDirector$$get_time*/ func_0x03282af0(param_1,0);
      dVar18 = (double)/*UnityEngine.Playables.PlayableDirector$$get_duration*/ func_0x03282bc0(param_1,0);
      uVar7 = (ulong)(dVar18 <= dVar17);
    }
    else {
      uVar7 = 0;
    }
    return uVar7;
  }
  puVar16 = &Atlas_PlayableDirectorHelpers__PlayPlayableDirector;
  auVar19 = func_0x00f78af4();
code_r0x014c0310:
  auVar21._8_8_ = unaff_x21;
  auVar21._0_8_ = unaff_x20;
  lVar9 = auVar19._0_8_;
  puVar3 = puVar5 + -0x20;
  *(undefined8 *)(puVar5 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar5 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar5 + -0x10) = puVar15;
  *(undefined **)(puVar5 + -8) = puVar16;
  puVar15 = puVar5 + -0x10;
  if (auVar19._8_4_ == 0) {
    if (lVar9 == 0) goto code_r0x014c0378;
  }
  else {
    if ((lVar9 == 0) || (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar9,0), lVar8 == 0)) {
code_r0x014c0378:
      puVar16 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirector;
      auVar20 = func_0x00f78af4();
code_r0x014c037c:
      unaff_x21 = auVar21._8_8_;
      auVar1._8_8_ = auVar21._0_8_;
      auVar1._0_8_ = lVar9;
      lVar8 = auVar20._0_8_;
      puVar4 = puVar3 + -0x20;
      *(long *)(puVar3 + -0x20) = auVar21._0_8_;
      *(long *)(puVar3 + -0x18) = lVar9;
      *(undefined1 **)(puVar3 + -0x10) = puVar15;
      *(undefined **)(puVar3 + -8) = puVar16;
      puVar15 = puVar3 + -0x10;
      if (lVar8 == 0) {
code_r0x014c03e4:
        puVar16 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirectorActivations;
        lVar8 = func_0x00f78af4();
      }
      else {
        /*UnityEngine.Playables.PlayableDirector$$Stop*/ func_0x03282c40(lVar8,0);
        /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(lVar8,0);
        /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar8,0);
        if (auVar20._8_4_ != 0) {
          lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar8,0);
          auVar1 = auVar20;
          if (lVar9 == 0) goto code_r0x014c03e4;
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar9,0,0);
        }
        puVar15 = *(undefined1 **)(puVar3 + -0x10);
        puVar16 = *(undefined **)(puVar3 + -8);
        auVar1._8_8_ = *(undefined8 *)(puVar3 + -0x20);
        auVar1._0_8_ = *(undefined8 *)(puVar3 + -0x18);
        puVar4 = puVar3;
      }
      *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
      *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
      *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
      *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
      *(long **)(puVar4 + -0x28) = unaff_x21;
      *(long *)(puVar4 + -0x20) = auVar1._8_8_;
      *(long *)(puVar4 + -0x18) = auVar1._0_8_;
      *(undefined1 **)(puVar4 + -0x10) = puVar15;
      *(undefined **)(puVar4 + -8) = puVar16;
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
      if (lVar8 != 0) {
        unaff_x22 = 0x3d23990;
        plVar10 = (long *)/*UnityEngine.Playables.PlayableDirector$$get_playableAsset*/ func_0x0328235c(lVar8,0);
        if (plVar10 == (long *)0x0) {
code_r0x014c04b4:
          plVar10 = (long *)0x0;
        }
        else {
          if (*(byte *)(*plVar10 + 300) < *(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300))
          goto code_r0x014c04b4;
          if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300) * 8
                       + -8) != /*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280) {
            plVar10 = (long *)0x0;
          }
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar9 = 0;
        uVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar10,0);
        if ((int)uVar7 == 0) {
          return uVar7;
        }
        if ((plVar10 != (long *)0x0) &&
           (plVar10 = (long *)/*UnityEngine.Timeline.TimelineAsset$$GetOutputTracks*/ func_0x031fab88(plVar10,0), plVar10 != (long *)0x0)) {
          lVar13 = *plVar10;
          uVar7 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar7 != 0) {
            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == /*System.Collections.Generic.IEnumerable<TrackAsset>_TypeInfo*/ lRam0000000003d1d180) {
                puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                goto code_r0x014c0568;
              }
              piVar14 = piVar14 + 4;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          lVar9 = 0;
          puVar11 = (undefined8 *)func_0x00fac1f0(plVar10);
code_r0x014c0568:
          plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
          if (plVar10 != (long *)0x0) {
            unaff_x23 = 0x3d22180;
            unaff_x24 = 0x3d1d390;
            unaff_x25 = 0x3d1faa8;
            unaff_x26 = 0x3d21b60;
code_r0x014c059c:
            lVar13 = *plVar10;
            uVar7 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar7 != 0) {
              piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                  puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                  goto code_r0x014c05e8;
                }
                piVar14 = piVar14 + 4;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
            lVar9 = 0;
            puVar11 = (undefined8 *)func_0x00fac1f0(plVar10);
code_r0x014c05e8:
            uVar7 = (*(code *)*puVar11)(plVar10,puVar11[1]);
            if ((uVar7 & 1) != 0) {
              lVar13 = *plVar10;
              uVar7 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar7 != 0) {
                piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == /*System.Collections.Generic.IEnumerator<TrackAsset>_TypeInfo*/ lRam0000000003d1d390) {
                    puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                    goto code_r0x014c0644;
                  }
                  piVar14 = piVar14 + 4;
                  uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
              }
              lVar9 = 0;
              puVar11 = (undefined8 *)func_0x00fac1f0(plVar10);
code_r0x014c0644:
              plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
              if (plVar12 != (long *)0x0) {
                if ((*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) <= *(byte *)(*plVar12 + 300)) &&
                   (*(long *)(*(long *)(*plVar12 + 200) +
                              (ulong)*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) * 8 + -8) ==
                    /*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8)) {
                  unaff_x21 = (long *)/*UnityEngine.Playables.PlayableDirector$$GetGenericBinding*/ func_0x03282f5c(lVar8,plVar12,0);
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
                  lVar9 = 0;
                  uVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0);
                  if ((uVar7 & 1) != 0) {
                    if (unaff_x21 == (long *)0x0) goto code_r0x014c0778;
                    lVar9 = 0;
                    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(unaff_x21,0);
                  }
                }
              }
              goto code_r0x014c059c;
            }
            lVar8 = 0;
            do {
              if (plVar10 != (long *)0x0) {
                lVar13 = *plVar10;
                uVar7 = (ulong)*(ushort *)(lVar13 + 0x12a);
                if (uVar7 != 0) {
                  piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                      puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                      goto code_r0x014c074c;
                    }
                    piVar14 = piVar14 + 4;
                    uVar7 = uVar7 - 1;
                  } while (uVar7 != 0);
                }
                lVar9 = 0;
                puVar11 = (undefined8 *)func_0x00fac1f0(plVar10);
code_r0x014c074c:
                uVar7 = (*(code *)*puVar11)(plVar10,puVar11[1]);
              }
              if (lVar8 == 0) {
                return uVar7;
              }
              func_0x00f78ac0(lVar8,0);
              if (extraout_w1 != 1) goto code_r0x014c07cc;
              plVar12 = (long *)___cxa_begin_catch();
              lVar8 = *plVar12;
              uVar7 = ___cxa_end_catch();
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x14c0788);
      (*pcVar2)();
    }
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar8,1,0);
  }
  /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(lVar9,0);
  /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar9,0);
  *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
  *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
  *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
  *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
  if (pcRam0000000003ec1b90 == (code *)0x0) {
    pcRam0000000003ec1b90 =
         (code *)func_0x00f789d4("UnityEngine.Playables.PlayableDirector::Play()");
  }
                    /* WARNING: Could not recover jumptable at 0x0328295c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (*pcRam0000000003ec1b90)(lVar9);
  return uVar7;
code_r0x014c07cc:
  auVar21 = __Unwind_Resume();
  lVar13 = auVar21._0_8_;
  auVar19._8_8_ = lVar9;
  auVar19._0_8_ = lVar13;
  *(long **)(puVar4 + -0x70) = plVar10;
  *(long *)(puVar4 + -0x68) = lVar8;
  *(undefined1 **)(puVar4 + -0x60) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x58) = &Atlas_PlayableDirectorHelpers__ChangeTimelineAndPlay;
  if (lVar13 != 0) goto code_r0x014c07e0;
  auVar21 = func_0x00f78af4();
  auVar20._8_8_ = lVar9;
  auVar20._0_8_ = auVar21._0_8_;
  puVar3 = puVar4 + -0xa0;
  *(undefined8 *)(puVar4 + -0xa0) = 0x3d23990;
  *(long **)(puVar4 + -0x98) = unaff_x21;
  *(long **)(puVar4 + -0x90) = plVar10;
  *(long *)(puVar4 + -0x88) = lVar8;
  *(undefined1 **)(puVar4 + -0x80) = puVar4 + -0x60;
  *(undefined **)(puVar4 + -0x78) = &Atlas_PlayableDirectorHelpers__ResetThenChangeTimelineAndPlay;
  puVar15 = puVar4 + -0x80;
  puVar16 = &UNK_014c082c;
  goto code_r0x014c037c;
code_r0x014c07e0:
  /*UnityEngine.Playables.PlayableDirector$$set_playableAsset*/ func_0x03282440(lVar13,auVar21._8_8_,0);
  puVar15 = *(undefined1 **)(puVar4 + -0x60);
  puVar16 = *(undefined **)(puVar4 + -0x58);
  puVar5 = puVar4 + -0x50;
  unaff_x20 = *(undefined8 *)(puVar4 + -0x70);
  unaff_x19 = *(undefined8 *)(puVar4 + -0x68);
  goto code_r0x014c0310;
}



// ============================================================
// RVA: 0x14c0310 | Atlas.PlayableDirectorHelpers.PlayPlayableDirector
// ============================================================

/* WARNING: Possible PIC construction at 0x014c0828: Changing call to branch */
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

void Atlas_PlayableDirectorHelpers__PlayPlayableDirector(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  int extraout_w1;
  ulong uVar11;
  int *piVar12;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined1 *puVar13;
  undefined8 unaff_x30;
  undefined *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
code_r0x014c0310:
  auVar16._8_8_ = unaff_x21;
  auVar16._0_8_ = unaff_x20;
  puVar3 = (undefined1 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar13 = (undefined1 *)((long)register0x00000008 + -0x10);
  if ((int)param_2 == 0) {
    if (param_1 == 0) goto LAB_014c0378;
  }
  else {
    if ((param_1 == 0) || (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0), lVar6 == 0)) {
LAB_014c0378:
      puVar14 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirector;
      auVar15 = func_0x00f78af4();
      param_2 = param_1;
code_r0x014c037c:
      unaff_x21 = auVar16._8_8_;
      auVar1._8_8_ = auVar16._0_8_;
      auVar1._0_8_ = param_2;
      lVar6 = auVar15._0_8_;
      puVar4 = puVar3 + -0x20;
      *(long *)(puVar3 + -0x20) = auVar16._0_8_;
      *(long *)(puVar3 + -0x18) = param_2;
      *(undefined1 **)(puVar3 + -0x10) = puVar13;
      *(undefined **)(puVar3 + -8) = puVar14;
      puVar13 = puVar3 + -0x10;
      if (lVar6 == 0) {
code_r0x014c03e4:
        puVar14 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirectorActivations;
        lVar6 = func_0x00f78af4();
      }
      else {
        /*UnityEngine.Playables.PlayableDirector$$Stop*/ func_0x03282c40(lVar6,0);
        /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(lVar6,0);
        /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar6,0);
        if (auVar15._8_4_ != 0) {
          lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar6,0);
          auVar1 = auVar15;
          if (lVar7 == 0) goto code_r0x014c03e4;
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar7,0,0);
        }
        puVar13 = *(undefined1 **)(puVar3 + -0x10);
        puVar14 = *(undefined **)(puVar3 + -8);
        auVar1._8_8_ = *(undefined8 *)(puVar3 + -0x20);
        auVar1._0_8_ = *(undefined8 *)(puVar3 + -0x18);
        puVar4 = puVar3;
      }
      *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
      *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
      *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
      *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
      *(long **)(puVar4 + -0x28) = unaff_x21;
      *(long *)(puVar4 + -0x20) = auVar1._8_8_;
      *(long *)(puVar4 + -0x18) = auVar1._0_8_;
      *(undefined1 **)(puVar4 + -0x10) = puVar13;
      *(undefined **)(puVar4 + -8) = puVar14;
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
      if (lVar6 != 0) {
        unaff_x22 = 0x3d23990;
        plVar8 = (long *)/*UnityEngine.Playables.PlayableDirector$$get_playableAsset*/ func_0x0328235c(lVar6,0);
        if (plVar8 == (long *)0x0) {
code_r0x014c04b4:
          plVar8 = (long *)0x0;
        }
        else {
          if (*(byte *)(*plVar8 + 300) < *(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300))
          goto code_r0x014c04b4;
          if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300) * 8
                       + -8) != /*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280) {
            plVar8 = (long *)0x0;
          }
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        param_2 = 0;
        iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar8,0);
        if (iVar5 == 0) {
          return;
        }
        if ((plVar8 != (long *)0x0) &&
           (plVar8 = (long *)/*UnityEngine.Timeline.TimelineAsset$$GetOutputTracks*/ func_0x031fab88(plVar8,0), plVar8 != (long *)0x0)) {
          lVar7 = *plVar8;
          uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == /*System.Collections.Generic.IEnumerable<TrackAsset>_TypeInfo*/ lRam0000000003d1d180) {
                puVar9 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
                goto code_r0x014c0568;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          param_2 = 0;
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8);
code_r0x014c0568:
          plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
          if (plVar8 != (long *)0x0) {
            unaff_x23 = 0x3d22180;
            unaff_x24 = 0x3d1d390;
            unaff_x25 = 0x3d1faa8;
            unaff_x26 = 0x3d21b60;
code_r0x014c059c:
            lVar7 = *plVar8;
            uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                  puVar9 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
                  goto code_r0x014c05e8;
                }
                piVar12 = piVar12 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            param_2 = 0;
            puVar9 = (undefined8 *)func_0x00fac1f0(plVar8);
code_r0x014c05e8:
            uVar11 = (*(code *)*puVar9)(plVar8,puVar9[1]);
            if ((uVar11 & 1) != 0) {
              lVar7 = *plVar8;
              uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == /*System.Collections.Generic.IEnumerator<TrackAsset>_TypeInfo*/ lRam0000000003d1d390) {
                    puVar9 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
                    goto code_r0x014c0644;
                  }
                  piVar12 = piVar12 + 4;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              param_2 = 0;
              puVar9 = (undefined8 *)func_0x00fac1f0(plVar8);
code_r0x014c0644:
              plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
              if (plVar10 != (long *)0x0) {
                if ((*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) <= *(byte *)(*plVar10 + 300)) &&
                   (*(long *)(*(long *)(*plVar10 + 200) +
                              (ulong)*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) * 8 + -8) ==
                    /*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8)) {
                  unaff_x21 = (long *)/*UnityEngine.Playables.PlayableDirector$$GetGenericBinding*/ func_0x03282f5c(lVar6,plVar10,0);
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
                  param_2 = 0;
                  uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0);
                  if ((uVar11 & 1) != 0) {
                    if (unaff_x21 == (long *)0x0) goto code_r0x014c0778;
                    param_2 = 0;
                    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(unaff_x21,0);
                  }
                }
              }
              goto code_r0x014c059c;
            }
            lVar6 = 0;
            do {
              if (plVar8 != (long *)0x0) {
                lVar7 = *plVar8;
                uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
                if (uVar11 != 0) {
                  piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                      puVar9 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
                      goto code_r0x014c074c;
                    }
                    piVar12 = piVar12 + 4;
                    uVar11 = uVar11 - 1;
                  } while (uVar11 != 0);
                }
                param_2 = 0;
                puVar9 = (undefined8 *)func_0x00fac1f0(plVar8);
code_r0x014c074c:
                (*(code *)*puVar9)(plVar8,puVar9[1]);
              }
              if (lVar6 == 0) {
                return;
              }
              func_0x00f78ac0(lVar6,0);
              if (extraout_w1 != 1) goto code_r0x014c07cc;
              plVar10 = (long *)___cxa_begin_catch();
              lVar6 = *plVar10;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x14c0788);
      (*pcVar2)();
    }
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar6,1,0);
  }
  /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(param_1,0);
  /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(param_1,0);
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  if (pcRam0000000003ec1b90 == (code *)0x0) {
    pcRam0000000003ec1b90 =
         (code *)func_0x00f789d4("UnityEngine.Playables.PlayableDirector::Play()");
  }
                    /* WARNING: Could not recover jumptable at 0x0328295c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec1b90)(param_1);
  return;
code_r0x014c07cc:
  auVar16 = __Unwind_Resume();
  param_1 = auVar16._0_8_;
  *(long **)(puVar4 + -0x70) = plVar8;
  *(long *)(puVar4 + -0x68) = lVar6;
  *(undefined1 **)(puVar4 + -0x60) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x58) = &Atlas_PlayableDirectorHelpers__ChangeTimelineAndPlay;
  if (param_1 != 0) goto code_r0x014c07e0;
  auVar16 = func_0x00f78af4();
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = auVar16._0_8_;
  puVar3 = puVar4 + -0xa0;
  *(undefined8 *)(puVar4 + -0xa0) = 0x3d23990;
  *(long **)(puVar4 + -0x98) = unaff_x21;
  *(long **)(puVar4 + -0x90) = plVar8;
  *(long *)(puVar4 + -0x88) = lVar6;
  *(undefined1 **)(puVar4 + -0x80) = puVar4 + -0x60;
  *(undefined **)(puVar4 + -0x78) = &Atlas_PlayableDirectorHelpers__ResetThenChangeTimelineAndPlay;
  puVar13 = puVar4 + -0x80;
  puVar14 = &UNK_014c082c;
  goto code_r0x014c037c;
code_r0x014c07e0:
  /*UnityEngine.Playables.PlayableDirector$$set_playableAsset*/ func_0x03282440(param_1,auVar16._8_8_,0);
  unaff_x29 = *(undefined8 *)(puVar4 + -0x60);
  unaff_x30 = *(undefined8 *)(puVar4 + -0x58);
  register0x00000008 = (BADSPACEBASE *)(puVar4 + -0x50);
  unaff_x20 = *(undefined8 *)(puVar4 + -0x70);
  unaff_x19 = *(undefined8 *)(puVar4 + -0x68);
  goto code_r0x014c0310;
}



// ============================================================
// RVA: 0x14c037c | Atlas.PlayableDirectorHelpers.ResetPlayableDirector
// ============================================================

ulong Atlas_PlayableDirectorHelpers__ResetPlayableDirector(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong *puVar9;
  int extraout_w1;
  undefined8 uVar10;
  int *piVar11;
  undefined8 uVar12;
  long unaff_x19;
  long lVar13;
  undefined8 unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar14;
  undefined1 *unaff_x29;
  undefined1 *puVar15;
  undefined8 uVar16;
  code *unaff_x30;
  undefined *puVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  auVar19._8_8_ = param_2;
  auVar19._0_8_ = param_1;
code_r0x014c037c:
  auVar20._8_8_ = unaff_x20;
  auVar20._0_8_ = unaff_x19;
  lVar13 = auVar19._0_8_;
  puVar2 = (undefined1 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar15 = (undefined1 *)((long)register0x00000008 + -0x10);
  if (lVar13 == 0) {
LAB_014c03e4:
    puVar17 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirectorActivations;
    lVar13 = func_0x00f78af4();
  }
  else {
    /*UnityEngine.Playables.PlayableDirector$$Stop*/ func_0x03282c40(lVar13,0);
    /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(lVar13,0);
    /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar13,0);
    if (auVar19._8_4_ != 0) {
      lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar13,0);
      auVar20 = auVar19;
      if (lVar4 == 0) goto LAB_014c03e4;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,0,0);
    }
    puVar15 = *(undefined1 **)((long)register0x00000008 + -0x10);
    puVar17 = *(undefined **)((long)register0x00000008 + -8);
    auVar20._8_8_ = *(undefined8 *)((long)register0x00000008 + -0x20);
    auVar20._0_8_ = *(undefined8 *)((long)register0x00000008 + -0x18);
    puVar2 = (undefined1 *)register0x00000008;
  }
  *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(long **)(puVar2 + -0x28) = unaff_x21;
  *(long *)(puVar2 + -0x20) = auVar20._8_8_;
  *(long *)(puVar2 + -0x18) = auVar20._0_8_;
  *(undefined1 **)(puVar2 + -0x10) = puVar15;
  *(undefined **)(puVar2 + -8) = puVar17;
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
  if (lVar13 != 0) {
    unaff_x22 = 0x3d23990;
    plVar5 = (long *)/*UnityEngine.Playables.PlayableDirector$$get_playableAsset*/ func_0x0328235c(lVar13,0);
    if (plVar5 == (long *)0x0) {
code_r0x014c04b4:
      plVar5 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar5 + 300) < *(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300)) goto code_r0x014c04b4;
      if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300) * 8 + -8
                   ) != /*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280) {
        plVar5 = (long *)0x0;
      }
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar10 = 0;
    uVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar5,0);
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    if ((plVar5 != (long *)0x0) &&
       (plVar5 = (long *)/*UnityEngine.Timeline.TimelineAsset$$GetOutputTracks*/ func_0x031fab88(plVar5,0), plVar5 != (long *)0x0)) {
      lVar4 = *plVar5;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar6 != 0) {
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IEnumerable<TrackAsset>_TypeInfo*/ lRam0000000003d1d180) {
            puVar7 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
            goto code_r0x014c0568;
          }
          piVar11 = piVar11 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      uVar10 = 0;
      puVar7 = (undefined8 *)func_0x00fac1f0(plVar5);
code_r0x014c0568:
      plVar5 = (long *)(*(code *)*puVar7)(plVar5,puVar7[1]);
      if (plVar5 != (long *)0x0) {
        unaff_x23 = 0x3d22180;
        unaff_x24 = 0x3d1d390;
        unaff_x25 = 0x3d1faa8;
        unaff_x26 = 0x3d21b60;
code_r0x014c059c:
        lVar4 = *plVar5;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar7 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x014c05e8;
            }
            piVar11 = piVar11 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        uVar10 = 0;
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar5);
code_r0x014c05e8:
        uVar6 = (*(code *)*puVar7)(plVar5,puVar7[1]);
        if ((uVar6 & 1) != 0) {
          lVar4 = *plVar5;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar6 != 0) {
            piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IEnumerator<TrackAsset>_TypeInfo*/ lRam0000000003d1d390) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
                goto code_r0x014c0644;
              }
              piVar11 = piVar11 + 4;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          uVar10 = 0;
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar5);
code_r0x014c0644:
          plVar8 = (long *)(*(code *)*puVar7)(plVar5,puVar7[1]);
          if (plVar8 != (long *)0x0) {
            if ((*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) <= *(byte *)(*plVar8 + 300)) &&
               (*(long *)(*(long *)(*plVar8 + 200) +
                          (ulong)*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) * 8 + -8) ==
                /*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8)) {
              unaff_x21 = (long *)/*UnityEngine.Playables.PlayableDirector$$GetGenericBinding*/ func_0x03282f5c(lVar13,plVar8,0);
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
              uVar10 = 0;
              uVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0);
              if ((uVar6 & 1) != 0) {
                if (unaff_x21 == (long *)0x0) goto code_r0x014c0778;
                uVar10 = 0;
                /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(unaff_x21,0);
              }
            }
          }
          goto code_r0x014c059c;
        }
        lVar13 = 0;
        do {
          if (plVar5 != (long *)0x0) {
            lVar4 = *plVar5;
            uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
            if (uVar6 != 0) {
              piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                  puVar7 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
                  goto code_r0x014c074c;
                }
                piVar11 = piVar11 + 4;
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
            }
            uVar10 = 0;
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar5);
code_r0x014c074c:
            uVar6 = (*(code *)*puVar7)(plVar5,puVar7[1]);
          }
          if (lVar13 == 0) {
            return uVar6;
          }
          func_0x00f78ac0(lVar13,0);
          if (extraout_w1 != 1) goto code_r0x014c07cc;
          plVar8 = (long *)___cxa_begin_catch();
          lVar13 = *plVar8;
          uVar6 = ___cxa_end_catch();
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14c0788);
  (*pcVar1)();
code_r0x014c07cc:
  auVar19 = __Unwind_Resume();
  unaff_x19 = auVar19._0_8_;
  *(long **)(puVar2 + -0x70) = plVar5;
  *(long *)(puVar2 + -0x68) = lVar13;
  *(undefined1 **)(puVar2 + -0x60) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0x58) = &Atlas_PlayableDirectorHelpers__ChangeTimelineAndPlay;
  if (unaff_x19 != 0) {
    /*UnityEngine.Playables.PlayableDirector$$set_playableAsset*/ func_0x03282440(unaff_x19,auVar19._8_8_,0);
    uVar14 = *(undefined8 *)(puVar2 + -0x60);
    uVar16 = *(undefined8 *)(puVar2 + -0x58);
    puVar3 = puVar2 + -0x50;
    unaff_x20 = *(undefined8 *)(puVar2 + -0x70);
    uVar12 = *(undefined8 *)(puVar2 + -0x68);
Atlas_PlayableDirectorHelpers__PlayPlayableDirector:
    register0x00000008 = (BADSPACEBASE *)(puVar3 + -0x20);
    *(undefined8 *)(puVar3 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar3 + -0x18) = uVar12;
    *(undefined8 *)(puVar3 + -0x10) = uVar14;
    *(undefined8 *)(puVar3 + -8) = uVar16;
    unaff_x29 = puVar3 + -0x10;
    if ((int)uVar10 == 0) {
      if (unaff_x19 != 0) goto LAB_014c034c;
    }
    else if ((unaff_x19 != 0) && (lVar13 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x19,0), lVar13 != 0)) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar13,1,0);
LAB_014c034c:
      /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(unaff_x19,0);
      /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(unaff_x19,0);
      *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
      *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
      *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
      *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
      if (pcRam0000000003ec1b90 == (code *)0x0) {
        pcRam0000000003ec1b90 =
             (code *)func_0x00f789d4("UnityEngine.Playables.PlayableDirector::Play()");
      }
                    /* WARNING: Could not recover jumptable at 0x0328295c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*pcRam0000000003ec1b90)(unaff_x19);
      return uVar6;
    }
    unaff_x30 = Atlas_PlayableDirectorHelpers__ResetPlayableDirector;
    auVar19 = func_0x00f78af4();
    goto code_r0x014c037c;
  }
  auVar19 = func_0x00f78af4();
  unaff_x19 = auVar19._0_8_;
  *(undefined8 *)(puVar2 + -0xa0) = 0x3d23990;
  *(long **)(puVar2 + -0x98) = unaff_x21;
  *(long **)(puVar2 + -0x90) = plVar5;
  *(long *)(puVar2 + -0x88) = lVar13;
  *(undefined1 **)(puVar2 + -0x80) = puVar2 + -0x60;
  *(undefined **)(puVar2 + -0x78) = &Atlas_PlayableDirectorHelpers__ResetThenChangeTimelineAndPlay;
  Atlas_PlayableDirectorHelpers__ResetPlayableDirector(unaff_x19,uVar10);
  if (unaff_x19 != 0) {
    /*UnityEngine.Playables.PlayableDirector$$set_playableAsset*/ func_0x03282440(unaff_x19,auVar19._8_8_,0);
    uVar14 = *(undefined8 *)(puVar2 + -0x80);
    uVar16 = *(undefined8 *)(puVar2 + -0x78);
    unaff_x20 = *(undefined8 *)(puVar2 + -0x90);
    uVar12 = *(undefined8 *)(puVar2 + -0x88);
    puVar3 = puVar2 + -0x70;
    unaff_x22 = *(undefined8 *)(puVar2 + -0xa0);
    unaff_x21 = *(long **)(puVar2 + -0x98);
    goto Atlas_PlayableDirectorHelpers__PlayPlayableDirector;
  }
  auVar20 = func_0x00f78af4();
  plVar8 = auVar20._8_8_;
  plVar5 = auVar20._0_8_;
  *(undefined8 *)(puVar2 + -0xe0) = 0x3d1d390;
  *(undefined8 *)(puVar2 + -0xd8) = 0x3d22180;
  *(undefined8 *)(puVar2 + -0xd0) = 0x3d23990;
  *(long *)(puVar2 + -200) = auVar19._8_8_;
  *(undefined8 *)(puVar2 + -0xc0) = 0;
  *(undefined8 *)(puVar2 + -0xb8) = uVar10;
  *(undefined1 **)(puVar2 + -0xb0) = puVar2 + -0x80;
  *(code **)(puVar2 + -0xa8) = Atlas_Gameplay_Player_PlayerRankingPair__ReverseRankingComparison;
  if ((bRam0000000003eb4b16 & 1) == 0) {
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb4b16 = 1;
  }
  if (*(float *)(plVar5 + 1) <= *(float *)(plVar8 + 1)) {
    if (*(float *)(plVar5 + 1) < *(float *)(plVar8 + 1)) {
      return 0;
    }
    if ((*(char *)((long)plVar5 + 0x14) != '\0') && (*(char *)((long)plVar8 + 0x14) != '\0')) {
      lVar13 = *plVar5;
      lVar18 = plVar5[3];
      lVar4 = plVar5[2];
      *(long *)(puVar2 + -0x108) = plVar5[1];
      *(long *)(puVar2 + -0x110) = lVar13;
      *(long *)(puVar2 + -0xf8) = lVar18;
      *(long *)(puVar2 + -0x100) = lVar4;
      *(long *)(puVar2 + -0xf0) = plVar5[4];
      lVar13 = *plVar8;
      lVar18 = plVar8[3];
      lVar4 = plVar8[2];
      *(long *)(puVar2 + -0x138) = plVar8[1];
      *(long *)(puVar2 + -0x140) = lVar13;
      *(long *)(puVar2 + -0x128) = lVar18;
      *(long *)(puVar2 + -0x130) = lVar4;
      *(long *)(puVar2 + -0x120) = plVar8[4];
      if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined8 *)(puVar2 + -0x158) = *(undefined8 *)(puVar2 + -0xf8);
      *(undefined8 *)(puVar2 + -0x160) = *(undefined8 *)(puVar2 + -0x100);
      *(undefined8 *)(puVar2 + -0x150) = *(undefined8 *)(puVar2 + -0xf0);
      *(undefined8 *)(puVar2 + -0x178) = *(undefined8 *)(puVar2 + -0x128);
      *(undefined8 *)(puVar2 + -0x180) = *(undefined8 *)(puVar2 + -0x130);
      *(undefined8 *)(puVar2 + -0x170) = *(undefined8 *)(puVar2 + -0x120);
      uVar6 = /*Core.Networking.NetworkSessionTime$$op_LessThan*/ func_0x01660c74(puVar2 + -0x160,puVar2 + -0x180,0);
      if ((uVar6 & 1) != 0) goto code_r0x014c08ac;
      lVar13 = *plVar5;
      lVar18 = plVar5[3];
      lVar4 = plVar5[2];
      *(long *)(puVar2 + -0x108) = plVar5[1];
      *(long *)(puVar2 + -0x110) = lVar13;
      *(long *)(puVar2 + -0xf8) = lVar18;
      *(long *)(puVar2 + -0x100) = lVar4;
      *(long *)(puVar2 + -0xf0) = plVar5[4];
      lVar13 = *plVar8;
      lVar18 = plVar8[3];
      lVar4 = plVar8[2];
      *(long *)(puVar2 + -0x138) = plVar8[1];
      *(long *)(puVar2 + -0x140) = lVar13;
      *(long *)(puVar2 + -0x128) = lVar18;
      *(long *)(puVar2 + -0x130) = lVar4;
      *(long *)(puVar2 + -0x120) = plVar8[4];
      if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined8 *)(puVar2 + -0x198) = *(undefined8 *)(puVar2 + -0xf8);
      *(undefined8 *)(puVar2 + -0x1a0) = *(undefined8 *)(puVar2 + -0x100);
      *(undefined8 *)(puVar2 + -400) = *(undefined8 *)(puVar2 + -0xf0);
      *(undefined8 *)(puVar2 + -0x1b8) = *(undefined8 *)(puVar2 + -0x128);
      *(undefined8 *)(puVar2 + -0x1c0) = *(undefined8 *)(puVar2 + -0x130);
      *(undefined8 *)(puVar2 + -0x1b0) = *(undefined8 *)(puVar2 + -0x120);
      uVar6 = /*Core.Networking.NetworkSessionTime$$op_GreaterThan*/ func_0x01660b50(puVar2 + -0x1a0,puVar2 + -0x1c0,0);
      if ((uVar6 & 1) != 0) {
        return 0;
      }
    }
    if ((((*plVar5 == 0) || (lVar13 = *(long *)(*plVar5 + 0x10), lVar13 == 0)) || (*plVar8 == 0)) ||
       (lVar4 = *(long *)(*plVar8 + 0x10), lVar4 == 0)) {
      puVar9 = (ulong *)func_0x00f78af4();
      return *puVar9;
    }
    uVar6 = (ulong)(*(uint *)(lVar4 + 0x54) < *(uint *)(lVar13 + 0x54));
  }
  else {
code_r0x014c08ac:
    uVar6 = 1;
  }
  return uVar6;
}



// ============================================================
// RVA: 0x14c03e8 | Atlas.PlayableDirectorHelpers.ResetPlayableDirectorActivations
// ============================================================

ulong Atlas_PlayableDirectorHelpers__ResetPlayableDirectorActivations(long param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong *puVar7;
  int extraout_w1;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 unaff_x19;
  undefined8 uVar13;
  undefined8 unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar14;
  undefined1 *unaff_x29;
  undefined8 uVar15;
  code *unaff_x30;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  auVar18._8_8_ = unaff_x20;
  auVar18._0_8_ = unaff_x19;
code_r0x014c03e8:
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = auVar18._8_8_;
  *(long *)((long)register0x00000008 + -0x18) = auVar18._0_8_;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
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
  if (param_1 != 0) {
    unaff_x22 = 0x3d23990;
    plVar3 = (long *)/*UnityEngine.Playables.PlayableDirector$$get_playableAsset*/ func_0x0328235c(param_1,0);
    if (plVar3 == (long *)0x0) {
LAB_014c04b4:
      plVar3 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar3 + 300) < *(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300)) goto LAB_014c04b4;
      if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300) * 8 + -8
                   ) != /*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280) {
        plVar3 = (long *)0x0;
      }
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = 0;
    uVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar3,0);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if ((plVar3 != (long *)0x0) &&
       (plVar3 = (long *)/*UnityEngine.Timeline.TimelineAsset$$GetOutputTracks*/ func_0x031fab88(plVar3,0), plVar3 != (long *)0x0)) {
      lVar9 = *plVar3;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IEnumerable<TrackAsset>_TypeInfo*/ lRam0000000003d1d180) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto code_r0x014c0568;
          }
          piVar11 = piVar11 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      uVar8 = 0;
      puVar5 = (undefined8 *)func_0x00fac1f0(plVar3);
code_r0x014c0568:
      plVar3 = (long *)(*(code *)*puVar5)(plVar3,puVar5[1]);
      if (plVar3 != (long *)0x0) {
        unaff_x23 = 0x3d22180;
        unaff_x24 = 0x3d1d390;
        unaff_x25 = 0x3d1faa8;
        unaff_x26 = 0x3d21b60;
code_r0x014c059c:
        lVar9 = *plVar3;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar4 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x014c05e8;
            }
            piVar11 = piVar11 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        uVar8 = 0;
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar3);
code_r0x014c05e8:
        uVar4 = (*(code *)*puVar5)(plVar3,puVar5[1]);
        if ((uVar4 & 1) != 0) {
          lVar9 = *plVar3;
          uVar4 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar4 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IEnumerator<TrackAsset>_TypeInfo*/ lRam0000000003d1d390) {
                puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto code_r0x014c0644;
              }
              piVar11 = piVar11 + 4;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
          uVar8 = 0;
          puVar5 = (undefined8 *)func_0x00fac1f0(plVar3);
code_r0x014c0644:
          plVar6 = (long *)(*(code *)*puVar5)(plVar3,puVar5[1]);
          if (plVar6 != (long *)0x0) {
            if ((*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) <= *(byte *)(*plVar6 + 300)) &&
               (*(long *)(*(long *)(*plVar6 + 200) +
                          (ulong)*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) * 8 + -8) ==
                /*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8)) {
              unaff_x21 = (long *)/*UnityEngine.Playables.PlayableDirector$$GetGenericBinding*/ func_0x03282f5c(param_1,plVar6,0);
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
              uVar8 = 0;
              uVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0);
              if ((uVar4 & 1) != 0) {
                if (unaff_x21 == (long *)0x0) goto code_r0x014c0778;
                uVar8 = 0;
                /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(unaff_x21,0);
              }
            }
          }
          goto code_r0x014c059c;
        }
        lVar9 = 0;
        do {
          if (plVar3 != (long *)0x0) {
            lVar10 = *plVar3;
            uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar4 != 0) {
              piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                  puVar5 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                  goto code_r0x014c074c;
                }
                piVar11 = piVar11 + 4;
                uVar4 = uVar4 - 1;
              } while (uVar4 != 0);
            }
            uVar8 = 0;
            puVar5 = (undefined8 *)func_0x00fac1f0(plVar3);
code_r0x014c074c:
            uVar4 = (*(code *)*puVar5)(plVar3,puVar5[1]);
          }
          if (lVar9 == 0) {
            return uVar4;
          }
          func_0x00f78ac0(lVar9,0);
          if (extraout_w1 != 1) goto code_r0x014c07cc;
          plVar6 = (long *)___cxa_begin_catch();
          lVar9 = *plVar6;
          uVar4 = ___cxa_end_catch();
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14c0788);
  (*pcVar1)();
code_r0x014c07cc:
  auVar18 = __Unwind_Resume();
  lVar10 = auVar18._0_8_;
  *(long **)((long)register0x00000008 + -0x70) = plVar3;
  *(long *)((long)register0x00000008 + -0x68) = lVar9;
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x58) =
       &Atlas_PlayableDirectorHelpers__ChangeTimelineAndPlay;
  if (lVar10 == 0) {
    auVar18 = func_0x00f78af4();
    lVar10 = auVar18._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x3d23990;
    *(long **)((long)register0x00000008 + -0x98) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x90) = plVar3;
    *(long *)((long)register0x00000008 + -0x88) = lVar9;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined **)((long)register0x00000008 + -0x78) =
         &Atlas_PlayableDirectorHelpers__ResetThenChangeTimelineAndPlay;
    Atlas_PlayableDirectorHelpers__ResetPlayableDirector(lVar10,uVar8);
    if (lVar10 == 0) {
      auVar17 = func_0x00f78af4();
      plVar6 = auVar17._8_8_;
      plVar3 = auVar17._0_8_;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x3d1d390;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = 0x3d22180;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 0x3d23990;
      *(long *)((long)register0x00000008 + -200) = auVar18._8_8_;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar8;
      *(undefined1 **)((long)register0x00000008 + -0xb0) =
           (undefined1 *)((long)register0x00000008 + -0x80);
      *(code **)((long)register0x00000008 + -0xa8) =
           Atlas_Gameplay_Player_PlayerRankingPair__ReverseRankingComparison;
      if ((bRam0000000003eb4b16 & 1) == 0) {
        func_0x00f78a20(0x3d237b8);
        bRam0000000003eb4b16 = 1;
      }
      if (*(float *)(plVar3 + 1) <= *(float *)(plVar6 + 1)) {
        if (*(float *)(plVar3 + 1) < *(float *)(plVar6 + 1)) {
          return 0;
        }
        if ((*(char *)((long)plVar3 + 0x14) != '\0') && (*(char *)((long)plVar6 + 0x14) != '\0')) {
          lVar9 = *plVar3;
          lVar16 = plVar3[3];
          lVar10 = plVar3[2];
          *(long *)((long)register0x00000008 + -0x108) = plVar3[1];
          *(long *)((long)register0x00000008 + -0x110) = lVar9;
          *(long *)((long)register0x00000008 + -0xf8) = lVar16;
          *(long *)((long)register0x00000008 + -0x100) = lVar10;
          *(long *)((long)register0x00000008 + -0xf0) = plVar3[4];
          lVar9 = *plVar6;
          lVar16 = plVar6[3];
          lVar10 = plVar6[2];
          *(long *)((long)register0x00000008 + -0x138) = plVar6[1];
          *(long *)((long)register0x00000008 + -0x140) = lVar9;
          *(long *)((long)register0x00000008 + -0x128) = lVar16;
          *(long *)((long)register0x00000008 + -0x130) = lVar10;
          *(long *)((long)register0x00000008 + -0x120) = plVar6[4];
          if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          *(undefined8 *)((long)register0x00000008 + -0x158) =
               *(undefined8 *)((long)register0x00000008 + -0xf8);
          *(undefined8 *)((long)register0x00000008 + -0x160) =
               *(undefined8 *)((long)register0x00000008 + -0x100);
          *(undefined8 *)((long)register0x00000008 + -0x150) =
               *(undefined8 *)((long)register0x00000008 + -0xf0);
          *(undefined8 *)((long)register0x00000008 + -0x178) =
               *(undefined8 *)((long)register0x00000008 + -0x128);
          *(undefined8 *)((long)register0x00000008 + -0x180) =
               *(undefined8 *)((long)register0x00000008 + -0x130);
          *(undefined8 *)((long)register0x00000008 + -0x170) =
               *(undefined8 *)((long)register0x00000008 + -0x120);
          uVar4 = /*Core.Networking.NetworkSessionTime$$op_LessThan*/ func_0x01660c74((undefined1 *)((long)register0x00000008 + -0x160),
                                  (undefined1 *)((long)register0x00000008 + -0x180),0);
          if ((uVar4 & 1) != 0) goto code_r0x014c08ac;
          lVar9 = *plVar3;
          lVar16 = plVar3[3];
          lVar10 = plVar3[2];
          *(long *)((long)register0x00000008 + -0x108) = plVar3[1];
          *(long *)((long)register0x00000008 + -0x110) = lVar9;
          *(long *)((long)register0x00000008 + -0xf8) = lVar16;
          *(long *)((long)register0x00000008 + -0x100) = lVar10;
          *(long *)((long)register0x00000008 + -0xf0) = plVar3[4];
          lVar9 = *plVar6;
          lVar16 = plVar6[3];
          lVar10 = plVar6[2];
          *(long *)((long)register0x00000008 + -0x138) = plVar6[1];
          *(long *)((long)register0x00000008 + -0x140) = lVar9;
          *(long *)((long)register0x00000008 + -0x128) = lVar16;
          *(long *)((long)register0x00000008 + -0x130) = lVar10;
          *(long *)((long)register0x00000008 + -0x120) = plVar6[4];
          if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          *(undefined8 *)((long)register0x00000008 + -0x198) =
               *(undefined8 *)((long)register0x00000008 + -0xf8);
          *(undefined8 *)((long)register0x00000008 + -0x1a0) =
               *(undefined8 *)((long)register0x00000008 + -0x100);
          *(undefined8 *)((long)register0x00000008 + -400) =
               *(undefined8 *)((long)register0x00000008 + -0xf0);
          *(undefined8 *)((long)register0x00000008 + -0x1b8) =
               *(undefined8 *)((long)register0x00000008 + -0x128);
          *(undefined8 *)((long)register0x00000008 + -0x1c0) =
               *(undefined8 *)((long)register0x00000008 + -0x130);
          *(undefined8 *)((long)register0x00000008 + -0x1b0) =
               *(undefined8 *)((long)register0x00000008 + -0x120);
          uVar4 = /*Core.Networking.NetworkSessionTime$$op_GreaterThan*/ func_0x01660b50((undefined1 *)((long)register0x00000008 + -0x1a0),
                                  (undefined1 *)((long)register0x00000008 + -0x1c0),0);
          if ((uVar4 & 1) != 0) {
            return 0;
          }
        }
        if ((((*plVar3 == 0) || (lVar9 = *(long *)(*plVar3 + 0x10), lVar9 == 0)) || (*plVar6 == 0))
           || (lVar10 = *(long *)(*plVar6 + 0x10), lVar10 == 0)) {
          puVar7 = (ulong *)func_0x00f78af4();
          return *puVar7;
        }
        uVar4 = (ulong)(*(uint *)(lVar10 + 0x54) < *(uint *)(lVar9 + 0x54));
      }
      else {
code_r0x014c08ac:
        uVar4 = 1;
      }
      return uVar4;
    }
    /*UnityEngine.Playables.PlayableDirector$$set_playableAsset*/ func_0x03282440(lVar10,auVar18._8_8_,0);
    uVar14 = *(undefined8 *)((long)register0x00000008 + -0x80);
    uVar15 = *(undefined8 *)((long)register0x00000008 + -0x78);
    uVar13 = *(undefined8 *)((long)register0x00000008 + -0x90);
    uVar12 = *(undefined8 *)((long)register0x00000008 + -0x88);
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x70);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0xa0);
    unaff_x21 = *(long **)((long)register0x00000008 + -0x98);
  }
  else {
    /*UnityEngine.Playables.PlayableDirector$$set_playableAsset*/ func_0x03282440(lVar10,auVar18._8_8_,0);
    uVar14 = *(undefined8 *)((long)register0x00000008 + -0x60);
    uVar15 = *(undefined8 *)((long)register0x00000008 + -0x58);
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x50);
    uVar13 = *(undefined8 *)((long)register0x00000008 + -0x70);
    uVar12 = *(undefined8 *)((long)register0x00000008 + -0x68);
  }
  auVar18._8_8_ = uVar13;
  auVar18._0_8_ = lVar10;
  *(undefined8 *)(puVar2 + -0x20) = uVar13;
  *(undefined8 *)(puVar2 + -0x18) = uVar12;
  *(undefined8 *)(puVar2 + -0x10) = uVar14;
  *(undefined8 *)(puVar2 + -8) = uVar15;
  if ((int)uVar8 == 0) {
    if (lVar10 != 0) goto LAB_014c034c;
  }
  else if ((lVar10 != 0) && (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar10,0), lVar9 != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar9,1,0);
LAB_014c034c:
    /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(lVar10,0);
    /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar10,0);
    *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
    *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
    *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
    *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
    if (pcRam0000000003ec1b90 == (code *)0x0) {
      pcRam0000000003ec1b90 =
           (code *)func_0x00f789d4("UnityEngine.Playables.PlayableDirector::Play()");
    }
                    /* WARNING: Could not recover jumptable at 0x0328295c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*pcRam0000000003ec1b90)(lVar10);
    return uVar4;
  }
  auVar17 = func_0x00f78af4();
  param_1 = auVar17._0_8_;
  register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x40);
  *(undefined8 *)(puVar2 + -0x40) = uVar13;
  *(long *)(puVar2 + -0x38) = lVar10;
  *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
  *(code **)(puVar2 + -0x28) = Atlas_PlayableDirectorHelpers__ResetPlayableDirector;
  unaff_x29 = puVar2 + -0x30;
  if (param_1 != 0) {
    /*UnityEngine.Playables.PlayableDirector$$Stop*/ func_0x03282c40(param_1,0);
    /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(param_1,0);
    /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(param_1,0);
    if (auVar17._8_4_ != 0) {
      lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
      auVar18 = auVar17;
      if (lVar9 == 0) goto LAB_014c03e4;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar9,0,0);
    }
    unaff_x29 = *(undefined1 **)(puVar2 + -0x30);
    unaff_x30 = *(code **)(puVar2 + -0x28);
    register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x20);
    auVar18._8_8_ = *(undefined8 *)(puVar2 + -0x40);
    auVar18._0_8_ = *(undefined8 *)(puVar2 + -0x38);
    goto code_r0x014c03e8;
  }
LAB_014c03e4:
  unaff_x30 = Atlas_PlayableDirectorHelpers__ResetPlayableDirectorActivations;
  param_1 = func_0x00f78af4();
  goto code_r0x014c03e8;
}



// ============================================================
// RVA: 0x14c07d0 | Atlas.PlayableDirectorHelpers.ChangeTimelineAndPlay
// ============================================================

ulong Atlas_PlayableDirectorHelpers__ChangeTimelineAndPlay
                (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong uVar9;
  int extraout_w1;
  int *piVar11;
  undefined8 uVar12;
  long unaff_x19;
  undefined8 uVar13;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined1 *unaff_x29;
  undefined8 uVar16;
  code *unaff_x30;
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  long *plVar10;
  
  auVar18._8_8_ = param_2;
  auVar18._0_8_ = param_1;
code_r0x014c07d0:
  lVar5 = auVar18._0_8_;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  if (lVar5 == 0) {
    auVar18 = func_0x00f78af4();
    lVar5 = auVar18._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x40) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x30) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x28) =
         &Atlas_PlayableDirectorHelpers__ResetThenChangeTimelineAndPlay;
    Atlas_PlayableDirectorHelpers__ResetPlayableDirector(lVar5,param_3);
    if (lVar5 == 0) {
      auVar19 = func_0x00f78af4();
      plVar10 = auVar19._8_8_;
      plVar6 = auVar19._0_8_;
      *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x22;
      *(long *)((long)register0x00000008 + -0x78) = auVar18._8_8_;
      *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x68) = param_3;
      *(undefined1 **)((long)register0x00000008 + -0x60) =
           (undefined1 *)((long)register0x00000008 + -0x30);
      *(code **)((long)register0x00000008 + -0x58) =
           Atlas_Gameplay_Player_PlayerRankingPair__ReverseRankingComparison;
      if ((bRam0000000003eb4b16 & 1) == 0) {
        func_0x00f78a20(0x3d237b8);
        bRam0000000003eb4b16 = 1;
      }
      if (*(float *)(plVar6 + 1) <= *(float *)(plVar10 + 1)) {
        if (*(float *)(plVar6 + 1) < *(float *)(plVar10 + 1)) {
          return 0;
        }
        if ((*(char *)((long)plVar6 + 0x14) != '\0') && (*(char *)((long)plVar10 + 0x14) != '\0')) {
          lVar5 = *plVar6;
          lVar17 = plVar6[3];
          lVar4 = plVar6[2];
          *(long *)((long)register0x00000008 + -0xb8) = plVar6[1];
          *(long *)((long)register0x00000008 + -0xc0) = lVar5;
          *(long *)((long)register0x00000008 + -0xa8) = lVar17;
          *(long *)((long)register0x00000008 + -0xb0) = lVar4;
          *(long *)((long)register0x00000008 + -0xa0) = plVar6[4];
          lVar5 = *plVar10;
          lVar17 = plVar10[3];
          lVar4 = plVar10[2];
          *(long *)((long)register0x00000008 + -0xe8) = plVar10[1];
          *(long *)((long)register0x00000008 + -0xf0) = lVar5;
          *(long *)((long)register0x00000008 + -0xd8) = lVar17;
          *(long *)((long)register0x00000008 + -0xe0) = lVar4;
          *(long *)((long)register0x00000008 + -0xd0) = plVar10[4];
          if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          *(undefined8 *)((long)register0x00000008 + -0x108) =
               *(undefined8 *)((long)register0x00000008 + -0xa8);
          *(undefined8 *)((long)register0x00000008 + -0x110) =
               *(undefined8 *)((long)register0x00000008 + -0xb0);
          *(undefined8 *)((long)register0x00000008 + -0x100) =
               *(undefined8 *)((long)register0x00000008 + -0xa0);
          *(undefined8 *)((long)register0x00000008 + -0x128) =
               *(undefined8 *)((long)register0x00000008 + -0xd8);
          *(undefined8 *)((long)register0x00000008 + -0x130) =
               *(undefined8 *)((long)register0x00000008 + -0xe0);
          *(undefined8 *)((long)register0x00000008 + -0x120) =
               *(undefined8 *)((long)register0x00000008 + -0xd0);
          uVar9 = /*Core.Networking.NetworkSessionTime$$op_LessThan*/ func_0x01660c74((undefined1 *)((long)register0x00000008 + -0x110),
                                  (undefined1 *)((long)register0x00000008 + -0x130),0);
          if ((uVar9 & 1) != 0) goto code_r0x014c08ac;
          lVar5 = *plVar6;
          lVar17 = plVar6[3];
          lVar4 = plVar6[2];
          *(long *)((long)register0x00000008 + -0xb8) = plVar6[1];
          *(long *)((long)register0x00000008 + -0xc0) = lVar5;
          *(long *)((long)register0x00000008 + -0xa8) = lVar17;
          *(long *)((long)register0x00000008 + -0xb0) = lVar4;
          *(long *)((long)register0x00000008 + -0xa0) = plVar6[4];
          lVar5 = *plVar10;
          lVar17 = plVar10[3];
          lVar4 = plVar10[2];
          *(long *)((long)register0x00000008 + -0xe8) = plVar10[1];
          *(long *)((long)register0x00000008 + -0xf0) = lVar5;
          *(long *)((long)register0x00000008 + -0xd8) = lVar17;
          *(long *)((long)register0x00000008 + -0xe0) = lVar4;
          *(long *)((long)register0x00000008 + -0xd0) = plVar10[4];
          if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          *(undefined8 *)((long)register0x00000008 + -0x148) =
               *(undefined8 *)((long)register0x00000008 + -0xa8);
          *(undefined8 *)((long)register0x00000008 + -0x150) =
               *(undefined8 *)((long)register0x00000008 + -0xb0);
          *(undefined8 *)((long)register0x00000008 + -0x140) =
               *(undefined8 *)((long)register0x00000008 + -0xa0);
          *(undefined8 *)((long)register0x00000008 + -0x168) =
               *(undefined8 *)((long)register0x00000008 + -0xd8);
          *(undefined8 *)((long)register0x00000008 + -0x170) =
               *(undefined8 *)((long)register0x00000008 + -0xe0);
          *(undefined8 *)((long)register0x00000008 + -0x160) =
               *(undefined8 *)((long)register0x00000008 + -0xd0);
          uVar9 = /*Core.Networking.NetworkSessionTime$$op_GreaterThan*/ func_0x01660b50((undefined1 *)((long)register0x00000008 + -0x150),
                                  (undefined1 *)((long)register0x00000008 + -0x170),0);
          if ((uVar9 & 1) != 0) {
            return 0;
          }
        }
        if ((((*plVar6 == 0) || (lVar5 = *(long *)(*plVar6 + 0x10), lVar5 == 0)) || (*plVar10 == 0))
           || (lVar4 = *(long *)(*plVar10 + 0x10), lVar4 == 0)) {
          puVar8 = (ulong *)func_0x00f78af4();
          return *puVar8;
        }
        uVar9 = (ulong)(*(uint *)(lVar4 + 0x54) < *(uint *)(lVar5 + 0x54));
      }
      else {
code_r0x014c08ac:
        uVar9 = 1;
      }
      return uVar9;
    }
    /*UnityEngine.Playables.PlayableDirector$$set_playableAsset*/ func_0x03282440(lVar5,auVar18._8_8_,0);
    uVar14 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar16 = *(undefined8 *)((long)register0x00000008 + -0x28);
    uVar13 = *(undefined8 *)((long)register0x00000008 + -0x40);
    uVar12 = *(undefined8 *)((long)register0x00000008 + -0x38);
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x20);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x50);
    unaff_x21 = *(long **)((long)register0x00000008 + -0x48);
  }
  else {
    /*UnityEngine.Playables.PlayableDirector$$set_playableAsset*/ func_0x03282440(lVar5,auVar18._8_8_,0);
    uVar14 = *(undefined8 *)((long)register0x00000008 + -0x10);
    uVar16 = *(undefined8 *)((long)register0x00000008 + -8);
    uVar13 = *(undefined8 *)((long)register0x00000008 + -0x20);
    uVar12 = *(undefined8 *)((long)register0x00000008 + -0x18);
    puVar3 = (undefined1 *)register0x00000008;
  }
  auVar19._8_8_ = uVar13;
  auVar19._0_8_ = lVar5;
  *(undefined8 *)(puVar3 + -0x20) = uVar13;
  *(undefined8 *)(puVar3 + -0x18) = uVar12;
  *(undefined8 *)(puVar3 + -0x10) = uVar14;
  *(undefined8 *)(puVar3 + -8) = uVar16;
  if ((int)param_3 == 0) {
    if (lVar5 != 0) goto LAB_014c034c;
  }
  else if ((lVar5 != 0) && (lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar5,0), lVar4 != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,1,0);
LAB_014c034c:
    /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(lVar5,0);
    /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar5,0);
    *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
    *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
    *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
    *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
    if (pcRam0000000003ec1b90 == (code *)0x0) {
      pcRam0000000003ec1b90 =
           (code *)func_0x00f789d4("UnityEngine.Playables.PlayableDirector::Play()");
    }
                    /* WARNING: Could not recover jumptable at 0x0328295c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (*pcRam0000000003ec1b90)(lVar5);
    return uVar9;
  }
  auVar18 = func_0x00f78af4();
  lVar4 = auVar18._0_8_;
  puVar2 = puVar3 + -0x40;
  *(undefined8 *)(puVar3 + -0x40) = uVar13;
  *(long *)(puVar3 + -0x38) = lVar5;
  *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
  *(code **)(puVar3 + -0x28) = Atlas_PlayableDirectorHelpers__ResetPlayableDirector;
  puVar15 = puVar3 + -0x30;
  if (lVar4 == 0) {
LAB_014c03e4:
    pcVar1 = Atlas_PlayableDirectorHelpers__ResetPlayableDirectorActivations;
    lVar4 = func_0x00f78af4();
  }
  else {
    /*UnityEngine.Playables.PlayableDirector$$Stop*/ func_0x03282c40(lVar4,0);
    /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(lVar4,0);
    /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar4,0);
    if (auVar18._8_4_ != 0) {
      lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar4,0);
      auVar19 = auVar18;
      if (lVar5 == 0) goto LAB_014c03e4;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar5,0,0);
    }
    puVar15 = *(undefined1 **)(puVar3 + -0x30);
    pcVar1 = *(code **)(puVar3 + -0x28);
    puVar2 = puVar3 + -0x20;
    auVar19._8_8_ = *(undefined8 *)(puVar3 + -0x40);
    auVar19._0_8_ = *(undefined8 *)(puVar3 + -0x38);
  }
  register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x50);
  *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(long **)(puVar2 + -0x28) = unaff_x21;
  *(long *)(puVar2 + -0x20) = auVar19._8_8_;
  *(long *)(puVar2 + -0x18) = auVar19._0_8_;
  *(undefined1 **)(puVar2 + -0x10) = puVar15;
  *(code **)(puVar2 + -8) = pcVar1;
  unaff_x29 = puVar2 + -0x10;
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
  if (lVar4 != 0) {
    unaff_x22 = 0x3d23990;
    plVar6 = (long *)/*UnityEngine.Playables.PlayableDirector$$get_playableAsset*/ func_0x0328235c(lVar4,0);
    if (plVar6 == (long *)0x0) {
LAB_014c04b4:
      plVar6 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar6 + 300) < *(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300)) goto LAB_014c04b4;
      if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300) * 8 + -8
                   ) != /*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280) {
        plVar6 = (long *)0x0;
      }
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_3 = 0;
    uVar9 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar6,0);
    if ((int)uVar9 == 0) {
      return uVar9;
    }
    if ((plVar6 != (long *)0x0) &&
       (plVar6 = (long *)/*UnityEngine.Timeline.TimelineAsset$$GetOutputTracks*/ func_0x031fab88(plVar6,0), plVar6 != (long *)0x0)) {
      lVar5 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IEnumerable<TrackAsset>_TypeInfo*/ lRam0000000003d1d180) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
            goto code_r0x014c0568;
          }
          piVar11 = piVar11 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      param_3 = 0;
      puVar7 = (undefined8 *)func_0x00fac1f0(plVar6);
code_r0x014c0568:
      unaff_x20 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      if (unaff_x20 != (long *)0x0) {
        unaff_x23 = 0x3d22180;
        unaff_x24 = 0x3d1d390;
        unaff_x25 = 0x3d1faa8;
        unaff_x26 = 0x3d21b60;
code_r0x014c059c:
        lVar5 = *unaff_x20;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x014c05e8;
            }
            piVar11 = piVar11 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        param_3 = 0;
        puVar7 = (undefined8 *)func_0x00fac1f0(unaff_x20);
code_r0x014c05e8:
        uVar9 = (*(code *)*puVar7)(unaff_x20,puVar7[1]);
        if ((uVar9 & 1) != 0) {
          lVar5 = *unaff_x20;
          uVar9 = (ulong)*(ushort *)(lVar5 + 0x12a);
          if (uVar9 != 0) {
            piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IEnumerator<TrackAsset>_TypeInfo*/ lRam0000000003d1d390) {
                puVar7 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
                goto code_r0x014c0644;
              }
              piVar11 = piVar11 + 4;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          param_3 = 0;
          puVar7 = (undefined8 *)func_0x00fac1f0(unaff_x20);
code_r0x014c0644:
          plVar6 = (long *)(*(code *)*puVar7)(unaff_x20,puVar7[1]);
          if (plVar6 != (long *)0x0) {
            if ((*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) <= *(byte *)(*plVar6 + 300)) &&
               (*(long *)(*(long *)(*plVar6 + 200) +
                          (ulong)*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) * 8 + -8) ==
                /*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8)) {
              unaff_x21 = (long *)/*UnityEngine.Playables.PlayableDirector$$GetGenericBinding*/ func_0x03282f5c(lVar4,plVar6,0);
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
              param_3 = 0;
              uVar9 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0);
              if ((uVar9 & 1) != 0) {
                if (unaff_x21 == (long *)0x0) goto code_r0x014c0778;
                param_3 = 0;
                /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(unaff_x21,0);
              }
            }
          }
          goto code_r0x014c059c;
        }
        unaff_x19 = 0;
        do {
          if (unaff_x20 != (long *)0x0) {
            lVar5 = *unaff_x20;
            uVar9 = (ulong)*(ushort *)(lVar5 + 0x12a);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                  puVar7 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
                  goto code_r0x014c074c;
                }
                piVar11 = piVar11 + 4;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            param_3 = 0;
            puVar7 = (undefined8 *)func_0x00fac1f0(unaff_x20);
code_r0x014c074c:
            uVar9 = (*(code *)*puVar7)(unaff_x20,puVar7[1]);
          }
          if (unaff_x19 == 0) {
            return uVar9;
          }
          func_0x00f78ac0(unaff_x19,0);
          if (extraout_w1 != 1) goto code_r0x014c07cc;
          plVar6 = (long *)___cxa_begin_catch();
          unaff_x19 = *plVar6;
          uVar9 = ___cxa_end_catch();
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14c0788);
  (*pcVar1)();
code_r0x014c07cc:
  unaff_x30 = Atlas_PlayableDirectorHelpers__ChangeTimelineAndPlay;
  auVar18 = __Unwind_Resume();
  goto code_r0x014c07d0;
}



// ============================================================
// RVA: 0x14c0808 | Atlas.PlayableDirectorHelpers.ResetThenChangeTimelineAndPlay
// ============================================================

ulong Atlas_PlayableDirectorHelpers__ResetThenChangeTimelineAndPlay
                (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  ulong uVar8;
  int extraout_w1;
  int *piVar10;
  undefined8 uVar11;
  long unaff_x19;
  undefined8 uVar12;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar13;
  undefined1 *puVar14;
  undefined1 *unaff_x29;
  undefined8 uVar15;
  code *unaff_x30;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long *plVar9;
  
  auVar17._8_8_ = param_2;
  auVar17._0_8_ = param_1;
code_r0x014c0808:
  lVar4 = auVar17._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  Atlas_PlayableDirectorHelpers__ResetPlayableDirector(lVar4,param_3);
  if (lVar4 != 0) {
    /*UnityEngine.Playables.PlayableDirector$$set_playableAsset*/ func_0x03282440(lVar4,auVar17._8_8_,0);
    uVar13 = *(undefined8 *)((long)register0x00000008 + -0x10);
    uVar15 = *(undefined8 *)((long)register0x00000008 + -8);
    uVar12 = *(undefined8 *)((long)register0x00000008 + -0x20);
    uVar11 = *(undefined8 *)((long)register0x00000008 + -0x18);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x21 = *(long **)((long)register0x00000008 + -0x28);
Atlas_PlayableDirectorHelpers__PlayPlayableDirector:
    auVar18._8_8_ = uVar12;
    auVar18._0_8_ = lVar4;
    *(undefined8 *)((long)register0x00000008 + -0x20) = uVar12;
    *(undefined8 *)((long)register0x00000008 + -0x18) = uVar11;
    *(undefined8 *)((long)register0x00000008 + -0x10) = uVar13;
    *(undefined8 *)((long)register0x00000008 + -8) = uVar15;
    if ((int)param_3 == 0) {
      if (lVar4 != 0) goto LAB_014c034c;
    }
    else if ((lVar4 != 0) && (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar4,0), lVar3 != 0)) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar3,1,0);
LAB_014c034c:
      /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(lVar4,0);
      /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar4,0);
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      if (pcRam0000000003ec1b90 == (code *)0x0) {
        pcRam0000000003ec1b90 =
             (code *)func_0x00f789d4("UnityEngine.Playables.PlayableDirector::Play()");
      }
                    /* WARNING: Could not recover jumptable at 0x0328295c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*pcRam0000000003ec1b90)(lVar4);
      return uVar8;
    }
    auVar17 = func_0x00f78af4();
    lVar3 = auVar17._0_8_;
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x40) = uVar12;
    *(long *)((long)register0x00000008 + -0x38) = lVar4;
    *(undefined1 **)((long)register0x00000008 + -0x30) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x28) =
         Atlas_PlayableDirectorHelpers__ResetPlayableDirector;
    puVar14 = (undefined1 *)((long)register0x00000008 + -0x30);
    if (lVar3 == 0) {
LAB_014c03e4:
      pcVar1 = Atlas_PlayableDirectorHelpers__ResetPlayableDirectorActivations;
      lVar3 = func_0x00f78af4();
    }
    else {
      /*UnityEngine.Playables.PlayableDirector$$Stop*/ func_0x03282c40(lVar3,0);
      /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(lVar3,0);
      /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar3,0);
      if (auVar17._8_4_ != 0) {
        lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar3,0);
        auVar18 = auVar17;
        if (lVar4 == 0) goto LAB_014c03e4;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,0,0);
      }
      puVar14 = *(undefined1 **)((long)register0x00000008 + -0x30);
      pcVar1 = *(code **)((long)register0x00000008 + -0x28);
      puVar2 = (undefined1 *)((long)register0x00000008 + -0x20);
      auVar18._8_8_ = *(undefined8 *)((long)register0x00000008 + -0x40);
      auVar18._0_8_ = *(undefined8 *)((long)register0x00000008 + -0x38);
    }
    *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
    *(long **)(puVar2 + -0x28) = unaff_x21;
    *(long *)(puVar2 + -0x20) = auVar18._8_8_;
    *(long *)(puVar2 + -0x18) = auVar18._0_8_;
    *(undefined1 **)(puVar2 + -0x10) = puVar14;
    *(code **)(puVar2 + -8) = pcVar1;
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
    if (lVar3 != 0) {
      unaff_x22 = 0x3d23990;
      plVar5 = (long *)/*UnityEngine.Playables.PlayableDirector$$get_playableAsset*/ func_0x0328235c(lVar3,0);
      if (plVar5 == (long *)0x0) {
LAB_014c04b4:
        plVar5 = (long *)0x0;
      }
      else {
        if (*(byte *)(*plVar5 + 300) < *(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300)) goto LAB_014c04b4;
        if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300) * 8 +
                     -8) != /*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280) {
          plVar5 = (long *)0x0;
        }
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      param_3 = 0;
      uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar5,0);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      if ((plVar5 != (long *)0x0) &&
         (plVar5 = (long *)/*UnityEngine.Timeline.TimelineAsset$$GetOutputTracks*/ func_0x031fab88(plVar5,0), plVar5 != (long *)0x0)) {
        lVar4 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*System.Collections.Generic.IEnumerable<TrackAsset>_TypeInfo*/ lRam0000000003d1d180) {
              puVar6 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x014c0568;
            }
            piVar10 = piVar10 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        param_3 = 0;
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar5);
code_r0x014c0568:
        unaff_x20 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (unaff_x20 != (long *)0x0) {
          unaff_x23 = 0x3d22180;
          unaff_x24 = 0x3d1d390;
          unaff_x25 = 0x3d1faa8;
          unaff_x26 = 0x3d21b60;
code_r0x014c059c:
          lVar4 = *unaff_x20;
          uVar8 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar8 != 0) {
            piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar6 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
                goto code_r0x014c05e8;
              }
              piVar10 = piVar10 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          param_3 = 0;
          puVar6 = (undefined8 *)func_0x00fac1f0(unaff_x20);
code_r0x014c05e8:
          uVar8 = (*(code *)*puVar6)(unaff_x20,puVar6[1]);
          if ((uVar8 & 1) != 0) {
            lVar4 = *unaff_x20;
            uVar8 = (ulong)*(ushort *)(lVar4 + 0x12a);
            if (uVar8 != 0) {
              piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == /*System.Collections.Generic.IEnumerator<TrackAsset>_TypeInfo*/ lRam0000000003d1d390) {
                  puVar6 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
                  goto code_r0x014c0644;
                }
                piVar10 = piVar10 + 4;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            param_3 = 0;
            puVar6 = (undefined8 *)func_0x00fac1f0(unaff_x20);
code_r0x014c0644:
            plVar5 = (long *)(*(code *)*puVar6)(unaff_x20,puVar6[1]);
            if (plVar5 != (long *)0x0) {
              if ((*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) <= *(byte *)(*plVar5 + 300)) &&
                 (*(long *)(*(long *)(*plVar5 + 200) +
                            (ulong)*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) * 8 + -8) ==
                  /*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8)) {
                unaff_x21 = (long *)/*UnityEngine.Playables.PlayableDirector$$GetGenericBinding*/ func_0x03282f5c(lVar3,plVar5,0);
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
                param_3 = 0;
                uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0);
                if ((uVar8 & 1) != 0) {
                  if (unaff_x21 == (long *)0x0) goto code_r0x014c0778;
                  param_3 = 0;
                  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(unaff_x21,0);
                }
              }
            }
            goto code_r0x014c059c;
          }
          unaff_x19 = 0;
          do {
            if (unaff_x20 != (long *)0x0) {
              lVar4 = *unaff_x20;
              uVar8 = (ulong)*(ushort *)(lVar4 + 0x12a);
              if (uVar8 != 0) {
                piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar6 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
                    goto code_r0x014c074c;
                  }
                  piVar10 = piVar10 + 4;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
              }
              param_3 = 0;
              puVar6 = (undefined8 *)func_0x00fac1f0(unaff_x20);
code_r0x014c074c:
              uVar8 = (*(code *)*puVar6)(unaff_x20,puVar6[1]);
            }
            if (unaff_x19 == 0) {
              return uVar8;
            }
            func_0x00f78ac0(unaff_x19,0);
            if (extraout_w1 != 1) goto code_r0x014c07cc;
            plVar5 = (long *)___cxa_begin_catch();
            unaff_x19 = *plVar5;
            uVar8 = ___cxa_end_catch();
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
    pcVar1 = (code *)SoftwareBreakpoint(1,0x14c0788);
    (*pcVar1)();
  }
  auVar18 = func_0x00f78af4();
  plVar9 = auVar18._8_8_;
  plVar5 = auVar18._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x58) = auVar17._8_8_;
  *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x48) = param_3;
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x38) =
       Atlas_Gameplay_Player_PlayerRankingPair__ReverseRankingComparison;
  if ((bRam0000000003eb4b16 & 1) == 0) {
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb4b16 = 1;
  }
  if (*(float *)(plVar5 + 1) <= *(float *)(plVar9 + 1)) {
    if (*(float *)(plVar5 + 1) < *(float *)(plVar9 + 1)) {
      return 0;
    }
    if ((*(char *)((long)plVar5 + 0x14) != '\0') && (*(char *)((long)plVar9 + 0x14) != '\0')) {
      lVar4 = *plVar5;
      lVar16 = plVar5[3];
      lVar3 = plVar5[2];
      *(long *)((long)register0x00000008 + -0x98) = plVar5[1];
      *(long *)((long)register0x00000008 + -0xa0) = lVar4;
      *(long *)((long)register0x00000008 + -0x88) = lVar16;
      *(long *)((long)register0x00000008 + -0x90) = lVar3;
      *(long *)((long)register0x00000008 + -0x80) = plVar5[4];
      lVar4 = *plVar9;
      lVar16 = plVar9[3];
      lVar3 = plVar9[2];
      *(long *)((long)register0x00000008 + -200) = plVar9[1];
      *(long *)((long)register0x00000008 + -0xd0) = lVar4;
      *(long *)((long)register0x00000008 + -0xb8) = lVar16;
      *(long *)((long)register0x00000008 + -0xc0) = lVar3;
      *(long *)((long)register0x00000008 + -0xb0) = plVar9[4];
      if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined8 *)((long)register0x00000008 + -0xe8) =
           *(undefined8 *)((long)register0x00000008 + -0x88);
      *(undefined8 *)((long)register0x00000008 + -0xf0) =
           *(undefined8 *)((long)register0x00000008 + -0x90);
      *(undefined8 *)((long)register0x00000008 + -0xe0) =
           *(undefined8 *)((long)register0x00000008 + -0x80);
      *(undefined8 *)((long)register0x00000008 + -0x108) =
           *(undefined8 *)((long)register0x00000008 + -0xb8);
      *(undefined8 *)((long)register0x00000008 + -0x110) =
           *(undefined8 *)((long)register0x00000008 + -0xc0);
      *(undefined8 *)((long)register0x00000008 + -0x100) =
           *(undefined8 *)((long)register0x00000008 + -0xb0);
      uVar8 = /*Core.Networking.NetworkSessionTime$$op_LessThan*/ func_0x01660c74((undefined1 *)((long)register0x00000008 + -0xf0),
                              (undefined1 *)((long)register0x00000008 + -0x110),0);
      if ((uVar8 & 1) != 0) goto code_r0x014c08ac;
      lVar4 = *plVar5;
      lVar16 = plVar5[3];
      lVar3 = plVar5[2];
      *(long *)((long)register0x00000008 + -0x98) = plVar5[1];
      *(long *)((long)register0x00000008 + -0xa0) = lVar4;
      *(long *)((long)register0x00000008 + -0x88) = lVar16;
      *(long *)((long)register0x00000008 + -0x90) = lVar3;
      *(long *)((long)register0x00000008 + -0x80) = plVar5[4];
      lVar4 = *plVar9;
      lVar16 = plVar9[3];
      lVar3 = plVar9[2];
      *(long *)((long)register0x00000008 + -200) = plVar9[1];
      *(long *)((long)register0x00000008 + -0xd0) = lVar4;
      *(long *)((long)register0x00000008 + -0xb8) = lVar16;
      *(long *)((long)register0x00000008 + -0xc0) = lVar3;
      *(long *)((long)register0x00000008 + -0xb0) = plVar9[4];
      if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined8 *)((long)register0x00000008 + -0x128) =
           *(undefined8 *)((long)register0x00000008 + -0x88);
      *(undefined8 *)((long)register0x00000008 + -0x130) =
           *(undefined8 *)((long)register0x00000008 + -0x90);
      *(undefined8 *)((long)register0x00000008 + -0x120) =
           *(undefined8 *)((long)register0x00000008 + -0x80);
      *(undefined8 *)((long)register0x00000008 + -0x148) =
           *(undefined8 *)((long)register0x00000008 + -0xb8);
      *(undefined8 *)((long)register0x00000008 + -0x150) =
           *(undefined8 *)((long)register0x00000008 + -0xc0);
      *(undefined8 *)((long)register0x00000008 + -0x140) =
           *(undefined8 *)((long)register0x00000008 + -0xb0);
      uVar8 = /*Core.Networking.NetworkSessionTime$$op_GreaterThan*/ func_0x01660b50((undefined1 *)((long)register0x00000008 + -0x130),
                              (undefined1 *)((long)register0x00000008 + -0x150),0);
      if ((uVar8 & 1) != 0) {
        return 0;
      }
    }
    if ((((*plVar5 == 0) || (lVar4 = *(long *)(*plVar5 + 0x10), lVar4 == 0)) || (*plVar9 == 0)) ||
       (lVar3 = *(long *)(*plVar9 + 0x10), lVar3 == 0)) {
      puVar7 = (ulong *)func_0x00f78af4();
      return *puVar7;
    }
    uVar8 = (ulong)(*(uint *)(lVar3 + 0x54) < *(uint *)(lVar4 + 0x54));
  }
  else {
code_r0x014c08ac:
    uVar8 = 1;
  }
  return uVar8;
code_r0x014c07cc:
  auVar17 = __Unwind_Resume();
  lVar4 = auVar17._0_8_;
  register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x70);
  *(long **)(puVar2 + -0x70) = unaff_x20;
  *(long *)(puVar2 + -0x68) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x60) = puVar2 + -0x10;
  *(code **)(puVar2 + -0x58) = Atlas_PlayableDirectorHelpers__ChangeTimelineAndPlay;
  unaff_x29 = puVar2 + -0x60;
  if (lVar4 == 0) goto LAB_014c0804;
  /*UnityEngine.Playables.PlayableDirector$$set_playableAsset*/ func_0x03282440(lVar4,auVar17._8_8_,0);
  uVar13 = *(undefined8 *)(puVar2 + -0x60);
  uVar15 = *(undefined8 *)(puVar2 + -0x58);
  register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x50);
  uVar12 = *(undefined8 *)(puVar2 + -0x70);
  uVar11 = *(undefined8 *)(puVar2 + -0x68);
  goto Atlas_PlayableDirectorHelpers__PlayPlayableDirector;
LAB_014c0804:
  unaff_x30 = Atlas_PlayableDirectorHelpers__ResetThenChangeTimelineAndPlay;
  auVar17 = func_0x00f78af4();
  goto code_r0x014c0808;
}



