// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Maps.MapSequenceController

// ============================================================
// RVA: 0x148de8c | Atlas.Maps.MapSequenceController.get_SequenceBehaviour
// ============================================================

undefined8 Atlas_Maps_MapSequenceController__get_SequenceBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x148de94 | Atlas.Maps.MapSequenceController.Init
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

void Atlas_Maps_MapSequenceController__Init(long param_1,long param_2,long param_3)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined1 **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  int extraout_w1;
  undefined1 *puVar13;
  ulong uVar14;
  int *piVar15;
  undefined1 *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 **ppuVar16;
  undefined1 *puVar17;
  undefined *puVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  auVar20._8_8_ = unaff_x21;
  auVar20._0_8_ = unaff_x20;
  *(long *)(param_1 + 0x10) = param_2;
  if ((param_2 != 0) && (lVar7 = *(long *)(param_2 + 0x30), lVar7 != 0)) {
    *(long *)(lVar7 + 0x20) = param_3;
    if (param_3 != 0) {
      /*UnityEngine.Camera$$set_fieldOfView*/ func_0x0321d1ec(*(undefined4 *)(lVar7 + 0x18),param_3,0,0);
      if (*(long *)(lVar7 + 0x20) != 0) {
        uVar12 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar7 + 0x20),0);
        *(undefined8 *)(lVar7 + 0x28) = uVar12;
        uVar12 = NEON_fmov(0xbf800000,4);
        *(undefined8 *)(lVar7 + 0x34) = uVar12;
        return;
      }
    }
    lVar7 = func_0x00f78af4();
    *(undefined8 *)(lVar7 + 0x40) = 0;
    *(undefined8 *)(lVar7 + 0x20) = 0;
    *(undefined8 *)(lVar7 + 0x28) = 0;
    *(undefined1 *)(lVar7 + 0x30) = 0;
    return;
  }
  puVar8 = (undefined1 *)func_0x00f78af4();
  puVar17 = &stack0xffffffffffffffe0;
  if ((*(long *)(puVar8 + 0x10) != 0) &&
     (lVar7 = *(long *)(*(long *)(puVar8 + 0x10) + 0x30), unaff_x19 = puVar8, lVar7 != 0)) {
    Atlas_Gameplay_VirtualCamera__DeInit(lVar7,0);
    *(undefined8 *)(puVar8 + 0x10) = 0;
    return;
  }
  auVar19 = func_0x00f78af4();
  ppuVar16 = &puStack_40;
  puStack_38 = &Atlas_Maps_MapSequenceController__ResetThenChangeTimelineAndPlay;
  lVar7 = *(long *)(auVar19._0_8_ + 0x10);
  puStack_40 = puVar17;
  if (lVar7 == 0) {
    lVar7 = func_0x00f78af4();
    if (*(long *)(lVar7 + 0x10) == 0) {
      func_0x00f78af4();
      return;
    }
    auVar19._8_8_ = 0;
    auVar19._0_8_ = *(ulong *)(*(long *)(lVar7 + 0x10) + 0x28);
    ppuVar3 = &puStack_40;
    puVar18 = &Atlas_Maps_MapSequenceController__StopActiveTimeline;
    goto code_r0x014c037c;
  }
  auVar20._8_8_ = auVar19._8_8_;
  auVar20._0_8_ = *(undefined8 *)(lVar7 + 0x28);
  puVar13 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  puVar5 = &stack0xffffffffffffffd0;
  puVar18 = &Atlas_Maps_MapSequenceController__ResetThenChangeTimelineAndPlay;
  puVar8 = unaff_x19;
code_r0x014c0808:
  auVar19._8_8_ = puVar13;
  auVar19._0_8_ = auVar20._0_8_;
  ppuVar3 = (undefined1 **)(puVar5 + -0x30);
  *(undefined8 *)(puVar5 + -0x30) = unaff_x22;
  *(long **)(puVar5 + -0x28) = unaff_x21;
  *(long **)(puVar5 + -0x20) = unaff_x20;
  *(undefined1 **)(puVar5 + -0x18) = puVar8;
  *(undefined1 **)(puVar5 + -0x10) = puVar17;
  *(undefined **)(puVar5 + -8) = puVar18;
  ppuVar16 = (undefined1 **)(puVar5 + -0x10);
  puVar18 = &UNK_014c082c;
  unaff_x19 = puVar13;
code_r0x014c037c:
  unaff_x21 = auVar20._8_8_;
  auVar1._8_8_ = auVar20._0_8_;
  auVar1._0_8_ = unaff_x19;
  lVar7 = auVar19._0_8_;
  puVar4 = (undefined1 *)((long)ppuVar3 + -0x20);
  *(long *)((long)ppuVar3 + -0x20) = auVar20._0_8_;
  *(undefined1 **)((long)ppuVar3 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar16;
  *(undefined **)((long)ppuVar3 + -8) = puVar18;
  puVar17 = (undefined1 *)((long)ppuVar3 + -0x10);
  if (lVar7 == 0) {
code_r0x014c03e4:
    puVar18 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirectorActivations;
    lVar7 = func_0x00f78af4();
  }
  else {
    /*UnityEngine.Playables.PlayableDirector$$Stop*/ func_0x03282c40(lVar7,0);
    /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(lVar7,0);
    /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar7,0);
    if (auVar19._8_4_ != 0) {
      lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar7,0);
      auVar1 = auVar19;
      if (lVar9 == 0) goto code_r0x014c03e4;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar9,0,0);
    }
    puVar17 = *(undefined1 **)((long)ppuVar3 + -0x10);
    puVar18 = *(undefined **)((long)ppuVar3 + -8);
    auVar1._8_8_ = *(undefined8 *)((long)ppuVar3 + -0x20);
    auVar1._0_8_ = *(undefined8 *)((long)ppuVar3 + -0x18);
    puVar4 = (undefined1 *)ppuVar3;
  }
  *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(long **)(puVar4 + -0x28) = unaff_x21;
  *(long *)(puVar4 + -0x20) = auVar1._8_8_;
  *(long *)(puVar4 + -0x18) = auVar1._0_8_;
  *(undefined1 **)(puVar4 + -0x10) = puVar17;
  *(undefined **)(puVar4 + -8) = puVar18;
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
  if (lVar7 != 0) {
    unaff_x22 = 0x3d23990;
    plVar10 = (long *)/*UnityEngine.Playables.PlayableDirector$$get_playableAsset*/ func_0x0328235c(lVar7,0);
    if (plVar10 == (long *)0x0) {
code_r0x014c04b4:
      plVar10 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar10 + 300) < *(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300)) goto code_r0x014c04b4;
      if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300) * 8 +
                   -8) != /*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280) {
        plVar10 = (long *)0x0;
      }
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar13 = (undefined1 *)0x0;
    iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar10,0);
    if (iVar6 == 0) {
      return;
    }
    if ((plVar10 != (long *)0x0) &&
       (plVar10 = (long *)/*UnityEngine.Timeline.TimelineAsset$$GetOutputTracks*/ func_0x031fab88(plVar10,0), plVar10 != (long *)0x0)) {
      lVar9 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == /*System.Collections.Generic.IEnumerable<TrackAsset>_TypeInfo*/ lRam0000000003d1d180) {
            puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
            goto code_r0x014c0568;
          }
          piVar15 = piVar15 + 4;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      puVar13 = (undefined1 *)0x0;
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
        uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
              goto code_r0x014c05e8;
            }
            piVar15 = piVar15 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar13 = (undefined1 *)0x0;
        puVar11 = (undefined8 *)func_0x00fac1f0(unaff_x20);
code_r0x014c05e8:
        uVar14 = (*(code *)*puVar11)(unaff_x20,puVar11[1]);
        if ((uVar14 & 1) != 0) {
          lVar9 = *unaff_x20;
          uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == /*System.Collections.Generic.IEnumerator<TrackAsset>_TypeInfo*/ lRam0000000003d1d390) {
                puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
                goto code_r0x014c0644;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar13 = (undefined1 *)0x0;
          puVar11 = (undefined8 *)func_0x00fac1f0(unaff_x20);
code_r0x014c0644:
          plVar10 = (long *)(*(code *)*puVar11)(unaff_x20,puVar11[1]);
          if (plVar10 != (long *)0x0) {
            if ((*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) <= *(byte *)(*plVar10 + 300)) &&
               (*(long *)(*(long *)(*plVar10 + 200) +
                          (ulong)*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) * 8 + -8) ==
                /*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8)) {
              unaff_x21 = (long *)/*UnityEngine.Playables.PlayableDirector$$GetGenericBinding*/ func_0x03282f5c(lVar7,plVar10,0);
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
              puVar13 = (undefined1 *)0x0;
              uVar14 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0);
              if ((uVar14 & 1) != 0) {
                if (unaff_x21 == (long *)0x0) goto code_r0x014c0778;
                puVar13 = (undefined1 *)0x0;
                /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(unaff_x21,0);
              }
            }
          }
          goto code_r0x014c059c;
        }
        puVar8 = (undefined1 *)0x0;
        do {
          if (unaff_x20 != (long *)0x0) {
            lVar7 = *unaff_x20;
            uVar14 = (ulong)*(ushort *)(lVar7 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                  puVar11 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
                  goto code_r0x014c074c;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            puVar13 = (undefined1 *)0x0;
            puVar11 = (undefined8 *)func_0x00fac1f0(unaff_x20);
code_r0x014c074c:
            (*(code *)*puVar11)(unaff_x20,puVar11[1]);
          }
          if (puVar8 == (undefined1 *)0x0) {
            return;
          }
          func_0x00f78ac0(puVar8,0);
          if (extraout_w1 != 1) goto code_r0x014c07cc;
          puVar11 = (undefined8 *)___cxa_begin_catch();
          puVar8 = (undefined1 *)*puVar11;
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
code_r0x014c07cc:
  auVar20 = __Unwind_Resume();
  unaff_x19 = auVar20._0_8_;
  puVar5 = puVar4 + -0x70;
  ppuVar3 = (undefined1 **)(puVar4 + -0x70);
  *(long **)(puVar4 + -0x70) = unaff_x20;
  *(undefined1 **)(puVar4 + -0x68) = puVar8;
  *(undefined1 **)(puVar4 + -0x60) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x58) = &Atlas_PlayableDirectorHelpers__ChangeTimelineAndPlay;
  puVar17 = puVar4 + -0x60;
  if (unaff_x19 == (undefined1 *)0x0) goto code_r0x014c0804;
  /*UnityEngine.Playables.PlayableDirector$$set_playableAsset*/ func_0x03282440(unaff_x19,auVar20._8_8_,0);
  auVar20._8_8_ = unaff_x21;
  auVar20._0_8_ = *(undefined8 *)(puVar4 + -0x70);
  *(undefined8 *)(puVar4 + -0x70) = *(undefined8 *)(puVar4 + -0x70);
  *(undefined8 *)(puVar4 + -0x68) = *(undefined8 *)(puVar4 + -0x68);
  *(undefined8 *)(puVar4 + -0x60) = *(undefined8 *)(puVar4 + -0x60);
  *(undefined8 *)(puVar4 + -0x58) = *(undefined8 *)(puVar4 + -0x58);
  ppuVar16 = (undefined1 **)(puVar4 + -0x60);
  if ((int)puVar13 == 0) {
    if (unaff_x19 != (undefined1 *)0x0) goto code_r0x014c034c;
  }
  else if ((unaff_x19 != (undefined1 *)0x0) && (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x19,0), lVar7 != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar7,1,0);
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
    (*pcRam0000000003ec1b90)(unaff_x19);
    return;
  }
  puVar18 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirector;
  auVar19 = func_0x00f78af4();
  goto code_r0x014c037c;
code_r0x014c0804:
  puVar18 = &Atlas_PlayableDirectorHelpers__ResetThenChangeTimelineAndPlay;
  auVar20 = func_0x00f78af4();
  goto code_r0x014c0808;
}



// ============================================================
// RVA: 0x148dec0 | Atlas.Maps.MapSequenceController.DeInit
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

void Atlas_Maps_MapSequenceController__DeInit(undefined1 *param_1)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined1 **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  int extraout_w1;
  undefined1 *puVar11;
  ulong uVar12;
  int *piVar13;
  undefined1 *unaff_x19;
  undefined1 *puVar14;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 **ppuVar15;
  undefined1 *puVar16;
  undefined *puVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  auVar19._8_8_ = unaff_x21;
  auVar19._0_8_ = unaff_x20;
  puVar16 = &stack0xfffffffffffffff0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x30), unaff_x19 = param_1, lVar7 != 0)) {
    Atlas_Gameplay_VirtualCamera__DeInit(lVar7,0);
    *(undefined8 *)(param_1 + 0x10) = 0;
    return;
  }
  auVar18 = func_0x00f78af4();
  ppuVar15 = &puStack_30;
  puStack_28 = &Atlas_Maps_MapSequenceController__ResetThenChangeTimelineAndPlay;
  lVar7 = *(long *)(auVar18._0_8_ + 0x10);
  puStack_30 = puVar16;
  if (lVar7 == 0) {
    lVar7 = func_0x00f78af4();
    if (*(long *)(lVar7 + 0x10) == 0) {
      func_0x00f78af4();
      return;
    }
    auVar18._8_8_ = 0;
    auVar18._0_8_ = *(ulong *)(*(long *)(lVar7 + 0x10) + 0x28);
    ppuVar3 = &puStack_30;
    puVar17 = &Atlas_Maps_MapSequenceController__StopActiveTimeline;
    goto code_r0x014c037c;
  }
  auVar19._8_8_ = auVar18._8_8_;
  auVar19._0_8_ = *(undefined8 *)(lVar7 + 0x28);
  puVar11 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  puVar5 = &stack0xffffffffffffffe0;
  puVar17 = &Atlas_Maps_MapSequenceController__ResetThenChangeTimelineAndPlay;
  puVar14 = unaff_x19;
code_r0x014c0808:
  auVar18._8_8_ = puVar11;
  auVar18._0_8_ = auVar19._0_8_;
  ppuVar3 = (undefined1 **)(puVar5 + -0x30);
  *(undefined8 *)(puVar5 + -0x30) = unaff_x22;
  *(long **)(puVar5 + -0x28) = unaff_x21;
  *(long **)(puVar5 + -0x20) = unaff_x20;
  *(undefined1 **)(puVar5 + -0x18) = puVar14;
  *(undefined1 **)(puVar5 + -0x10) = puVar16;
  *(undefined **)(puVar5 + -8) = puVar17;
  ppuVar15 = (undefined1 **)(puVar5 + -0x10);
  puVar17 = &UNK_014c082c;
  unaff_x19 = puVar11;
code_r0x014c037c:
  unaff_x21 = auVar19._8_8_;
  auVar1._8_8_ = auVar19._0_8_;
  auVar1._0_8_ = unaff_x19;
  lVar7 = auVar18._0_8_;
  puVar4 = (undefined1 *)((long)ppuVar3 + -0x20);
  *(long *)((long)ppuVar3 + -0x20) = auVar19._0_8_;
  *(undefined1 **)((long)ppuVar3 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar15;
  *(undefined **)((long)ppuVar3 + -8) = puVar17;
  puVar16 = (undefined1 *)((long)ppuVar3 + -0x10);
  if (lVar7 == 0) {
code_r0x014c03e4:
    puVar17 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirectorActivations;
    lVar7 = func_0x00f78af4();
  }
  else {
    /*UnityEngine.Playables.PlayableDirector$$Stop*/ func_0x03282c40(lVar7,0);
    /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(lVar7,0);
    /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar7,0);
    if (auVar18._8_4_ != 0) {
      lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar7,0);
      auVar1 = auVar18;
      if (lVar8 == 0) goto code_r0x014c03e4;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar8,0,0);
    }
    puVar16 = *(undefined1 **)((long)ppuVar3 + -0x10);
    puVar17 = *(undefined **)((long)ppuVar3 + -8);
    auVar1._8_8_ = *(undefined8 *)((long)ppuVar3 + -0x20);
    auVar1._0_8_ = *(undefined8 *)((long)ppuVar3 + -0x18);
    puVar4 = (undefined1 *)ppuVar3;
  }
  *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(long **)(puVar4 + -0x28) = unaff_x21;
  *(long *)(puVar4 + -0x20) = auVar1._8_8_;
  *(long *)(puVar4 + -0x18) = auVar1._0_8_;
  *(undefined1 **)(puVar4 + -0x10) = puVar16;
  *(undefined **)(puVar4 + -8) = puVar17;
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
  if (lVar7 != 0) {
    unaff_x22 = 0x3d23990;
    plVar9 = (long *)/*UnityEngine.Playables.PlayableDirector$$get_playableAsset*/ func_0x0328235c(lVar7,0);
    if (plVar9 == (long *)0x0) {
code_r0x014c04b4:
      plVar9 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar9 + 300) < *(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300)) goto code_r0x014c04b4;
      if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300) * 8 + -8
                   ) != /*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280) {
        plVar9 = (long *)0x0;
      }
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar11 = (undefined1 *)0x0;
    iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar9,0);
    if (iVar6 == 0) {
      return;
    }
    if ((plVar9 != (long *)0x0) &&
       (plVar9 = (long *)/*UnityEngine.Timeline.TimelineAsset$$GetOutputTracks*/ func_0x031fab88(plVar9,0), plVar9 != (long *)0x0)) {
      lVar8 = *plVar9;
      uVar12 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IEnumerable<TrackAsset>_TypeInfo*/ lRam0000000003d1d180) {
            puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x014c0568;
          }
          piVar13 = piVar13 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      puVar11 = (undefined1 *)0x0;
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar9);
code_r0x014c0568:
      unaff_x20 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      if (unaff_x20 != (long *)0x0) {
        unaff_x23 = 0x3d22180;
        unaff_x24 = 0x3d1d390;
        unaff_x25 = 0x3d1faa8;
        unaff_x26 = 0x3d21b60;
code_r0x014c059c:
        lVar8 = *unaff_x20;
        uVar12 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x014c05e8;
            }
            piVar13 = piVar13 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar11 = (undefined1 *)0x0;
        puVar10 = (undefined8 *)func_0x00fac1f0(unaff_x20);
code_r0x014c05e8:
        uVar12 = (*(code *)*puVar10)(unaff_x20,puVar10[1]);
        if ((uVar12 & 1) != 0) {
          lVar8 = *unaff_x20;
          uVar12 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IEnumerator<TrackAsset>_TypeInfo*/ lRam0000000003d1d390) {
                puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x014c0644;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar11 = (undefined1 *)0x0;
          puVar10 = (undefined8 *)func_0x00fac1f0(unaff_x20);
code_r0x014c0644:
          plVar9 = (long *)(*(code *)*puVar10)(unaff_x20,puVar10[1]);
          if (plVar9 != (long *)0x0) {
            if ((*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) <= *(byte *)(*plVar9 + 300)) &&
               (*(long *)(*(long *)(*plVar9 + 200) +
                          (ulong)*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) * 8 + -8) ==
                /*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8)) {
              unaff_x21 = (long *)/*UnityEngine.Playables.PlayableDirector$$GetGenericBinding*/ func_0x03282f5c(lVar7,plVar9,0);
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
              puVar11 = (undefined1 *)0x0;
              uVar12 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0);
              if ((uVar12 & 1) != 0) {
                if (unaff_x21 == (long *)0x0) goto code_r0x014c0778;
                puVar11 = (undefined1 *)0x0;
                /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(unaff_x21,0);
              }
            }
          }
          goto code_r0x014c059c;
        }
        puVar14 = (undefined1 *)0x0;
        do {
          if (unaff_x20 != (long *)0x0) {
            lVar7 = *unaff_x20;
            uVar12 = (ulong)*(ushort *)(lVar7 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                  puVar10 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
                  goto code_r0x014c074c;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar11 = (undefined1 *)0x0;
            puVar10 = (undefined8 *)func_0x00fac1f0(unaff_x20);
code_r0x014c074c:
            (*(code *)*puVar10)(unaff_x20,puVar10[1]);
          }
          if (puVar14 == (undefined1 *)0x0) {
            return;
          }
          func_0x00f78ac0(puVar14,0);
          if (extraout_w1 != 1) goto code_r0x014c07cc;
          puVar10 = (undefined8 *)___cxa_begin_catch();
          puVar14 = (undefined1 *)*puVar10;
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
code_r0x014c07cc:
  auVar19 = __Unwind_Resume();
  unaff_x19 = auVar19._0_8_;
  puVar5 = puVar4 + -0x70;
  ppuVar3 = (undefined1 **)(puVar4 + -0x70);
  *(long **)(puVar4 + -0x70) = unaff_x20;
  *(undefined1 **)(puVar4 + -0x68) = puVar14;
  *(undefined1 **)(puVar4 + -0x60) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x58) = &Atlas_PlayableDirectorHelpers__ChangeTimelineAndPlay;
  puVar16 = puVar4 + -0x60;
  if (unaff_x19 == (undefined1 *)0x0) goto code_r0x014c0804;
  /*UnityEngine.Playables.PlayableDirector$$set_playableAsset*/ func_0x03282440(unaff_x19,auVar19._8_8_,0);
  auVar19._8_8_ = unaff_x21;
  auVar19._0_8_ = *(undefined8 *)(puVar4 + -0x70);
  *(undefined8 *)(puVar4 + -0x70) = *(undefined8 *)(puVar4 + -0x70);
  *(undefined8 *)(puVar4 + -0x68) = *(undefined8 *)(puVar4 + -0x68);
  *(undefined8 *)(puVar4 + -0x60) = *(undefined8 *)(puVar4 + -0x60);
  *(undefined8 *)(puVar4 + -0x58) = *(undefined8 *)(puVar4 + -0x58);
  ppuVar15 = (undefined1 **)(puVar4 + -0x60);
  if ((int)puVar11 == 0) {
    if (unaff_x19 != (undefined1 *)0x0) goto code_r0x014c034c;
  }
  else if ((unaff_x19 != (undefined1 *)0x0) && (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x19,0), lVar7 != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar7,1,0);
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
    (*pcRam0000000003ec1b90)(unaff_x19);
    return;
  }
  puVar17 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirector;
  auVar18 = func_0x00f78af4();
  goto code_r0x014c037c;
code_r0x014c0804:
  puVar17 = &Atlas_PlayableDirectorHelpers__ResetThenChangeTimelineAndPlay;
  auVar19 = func_0x00f78af4();
  goto code_r0x014c0808;
}



// ============================================================
// RVA: 0x148defc | Atlas.Maps.MapSequenceController.ResetThenChangeTimelineAndPlay
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

void Atlas_Maps_MapSequenceController__ResetThenChangeTimelineAndPlay(long param_1,long *param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  int extraout_w1;
  undefined1 *puVar10;
  ulong uVar11;
  int *piVar12;
  undefined1 *unaff_x19;
  undefined1 *puVar13;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar14;
  undefined1 auVar15 [16];
  
  puVar13 = &stack0xfffffffffffffff0;
  if (*(long *)(param_1 + 0x10) == 0) {
    lVar7 = func_0x00f78af4();
    if (*(long *)(lVar7 + 0x10) == 0) {
      func_0x00f78af4();
      return;
    }
    auVar15._8_8_ = 0;
    auVar15._0_8_ = *(ulong *)(*(long *)(lVar7 + 0x10) + 0x28);
    puVar3 = &stack0xfffffffffffffff0;
    puVar14 = &Atlas_Maps_MapSequenceController__StopActiveTimeline;
    goto code_r0x014c037c;
  }
  plVar6 = *(long **)(*(long *)(param_1 + 0x10) + 0x28);
  puVar10 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  puVar13 = unaff_x19;
code_r0x014c0808:
  auVar15._8_8_ = puVar10;
  auVar15._0_8_ = plVar6;
  puVar3 = (undefined1 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0x18) = puVar13;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar13 = (undefined1 *)((long)register0x00000008 + -0x10);
  puVar14 = &UNK_014c082c;
  unaff_x19 = puVar10;
  unaff_x20 = plVar6;
  unaff_x21 = param_2;
code_r0x014c037c:
  auVar1._8_8_ = unaff_x20;
  auVar1._0_8_ = unaff_x19;
  lVar7 = auVar15._0_8_;
  puVar4 = puVar3 + -0x20;
  *(long **)(puVar3 + -0x20) = unaff_x20;
  *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = puVar13;
  *(undefined **)(puVar3 + -8) = puVar14;
  puVar13 = puVar3 + -0x10;
  if (lVar7 == 0) {
code_r0x014c03e4:
    puVar14 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirectorActivations;
    lVar7 = func_0x00f78af4();
  }
  else {
    /*UnityEngine.Playables.PlayableDirector$$Stop*/ func_0x03282c40(lVar7,0);
    /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(lVar7,0);
    /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar7,0);
    if (auVar15._8_4_ != 0) {
      lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar7,0);
      auVar1 = auVar15;
      if (lVar8 == 0) goto code_r0x014c03e4;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar8,0,0);
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
  if (lVar7 != 0) {
    unaff_x22 = 0x3d23990;
    plVar6 = (long *)/*UnityEngine.Playables.PlayableDirector$$get_playableAsset*/ func_0x0328235c(lVar7,0);
    if (plVar6 == (long *)0x0) {
code_r0x014c04b4:
      plVar6 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar6 + 300) < *(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300)) goto code_r0x014c04b4;
      if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300) * 8 + -8
                   ) != /*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280) {
        plVar6 = (long *)0x0;
      }
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar10 = (undefined1 *)0x0;
    iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar6,0);
    if (iVar5 == 0) {
      return;
    }
    if ((plVar6 != (long *)0x0) &&
       (plVar6 = (long *)/*UnityEngine.Timeline.TimelineAsset$$GetOutputTracks*/ func_0x031fab88(plVar6,0), plVar6 != (long *)0x0)) {
      lVar8 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == /*System.Collections.Generic.IEnumerable<TrackAsset>_TypeInfo*/ lRam0000000003d1d180) {
            puVar9 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto code_r0x014c0568;
          }
          piVar12 = piVar12 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar10 = (undefined1 *)0x0;
      puVar9 = (undefined8 *)func_0x00fac1f0(plVar6);
code_r0x014c0568:
      unaff_x20 = (long *)(*(code *)*puVar9)(plVar6,puVar9[1]);
      if (unaff_x20 != (long *)0x0) {
        unaff_x23 = 0x3d22180;
        unaff_x24 = 0x3d1d390;
        unaff_x25 = 0x3d1faa8;
        unaff_x26 = 0x3d21b60;
code_r0x014c059c:
        lVar8 = *unaff_x20;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar9 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x014c05e8;
            }
            piVar12 = piVar12 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined1 *)0x0;
        puVar9 = (undefined8 *)func_0x00fac1f0(unaff_x20);
code_r0x014c05e8:
        uVar11 = (*(code *)*puVar9)(unaff_x20,puVar9[1]);
        if ((uVar11 & 1) != 0) {
          lVar8 = *unaff_x20;
          uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == /*System.Collections.Generic.IEnumerator<TrackAsset>_TypeInfo*/ lRam0000000003d1d390) {
                puVar9 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto code_r0x014c0644;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar10 = (undefined1 *)0x0;
          puVar9 = (undefined8 *)func_0x00fac1f0(unaff_x20);
code_r0x014c0644:
          plVar6 = (long *)(*(code *)*puVar9)(unaff_x20,puVar9[1]);
          if (plVar6 != (long *)0x0) {
            if ((*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) <= *(byte *)(*plVar6 + 300)) &&
               (*(long *)(*(long *)(*plVar6 + 200) +
                          (ulong)*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) * 8 + -8) ==
                /*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8)) {
              unaff_x21 = (long *)/*UnityEngine.Playables.PlayableDirector$$GetGenericBinding*/ func_0x03282f5c(lVar7,plVar6,0);
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
              puVar10 = (undefined1 *)0x0;
              uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0);
              if ((uVar11 & 1) != 0) {
                if (unaff_x21 == (long *)0x0) goto code_r0x014c0778;
                puVar10 = (undefined1 *)0x0;
                /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(unaff_x21,0);
              }
            }
          }
          goto code_r0x014c059c;
        }
        puVar13 = (undefined1 *)0x0;
        do {
          if (unaff_x20 != (long *)0x0) {
            lVar7 = *unaff_x20;
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
            puVar10 = (undefined1 *)0x0;
            puVar9 = (undefined8 *)func_0x00fac1f0(unaff_x20);
code_r0x014c074c:
            (*(code *)*puVar9)(unaff_x20,puVar9[1]);
          }
          if (puVar13 == (undefined1 *)0x0) {
            return;
          }
          func_0x00f78ac0(puVar13,0);
          if (extraout_w1 != 1) goto code_r0x014c07cc;
          puVar9 = (undefined8 *)___cxa_begin_catch();
          puVar13 = (undefined1 *)*puVar9;
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
code_r0x014c07cc:
  auVar15 = __Unwind_Resume();
  unaff_x19 = auVar15._0_8_;
  register0x00000008 = (BADSPACEBASE *)(puVar4 + -0x70);
  puVar3 = puVar4 + -0x70;
  *(long **)(puVar4 + -0x70) = unaff_x20;
  *(undefined1 **)(puVar4 + -0x68) = puVar13;
  *(undefined1 **)(puVar4 + -0x60) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x58) = &Atlas_PlayableDirectorHelpers__ChangeTimelineAndPlay;
  unaff_x29 = puVar4 + -0x60;
  if (unaff_x19 == (undefined1 *)0x0) goto code_r0x014c0804;
  /*UnityEngine.Playables.PlayableDirector$$set_playableAsset*/ func_0x03282440(unaff_x19,auVar15._8_8_,0);
  unaff_x20 = *(long **)(puVar4 + -0x70);
  *(long **)(puVar4 + -0x70) = unaff_x20;
  *(undefined8 *)(puVar4 + -0x68) = *(undefined8 *)(puVar4 + -0x68);
  *(undefined8 *)(puVar4 + -0x60) = *(undefined8 *)(puVar4 + -0x60);
  *(undefined8 *)(puVar4 + -0x58) = *(undefined8 *)(puVar4 + -0x58);
  puVar13 = puVar4 + -0x60;
  if ((int)puVar10 == 0) {
    if (unaff_x19 != (undefined1 *)0x0) goto code_r0x014c034c;
  }
  else if ((unaff_x19 != (undefined1 *)0x0) && (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x19,0), lVar7 != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar7,1,0);
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
    (*pcRam0000000003ec1b90)(unaff_x19);
    return;
  }
  puVar14 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirector;
  auVar15 = func_0x00f78af4();
  goto code_r0x014c037c;
code_r0x014c0804:
  unaff_x30 = &Atlas_PlayableDirectorHelpers__ResetThenChangeTimelineAndPlay;
  auVar15 = func_0x00f78af4();
  param_2 = auVar15._8_8_;
  plVar6 = auVar15._0_8_;
  goto code_r0x014c0808;
}



// ============================================================
// RVA: 0x148df24 | Atlas.Maps.MapSequenceController.StopActiveTimeline
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

void Atlas_Maps_MapSequenceController__StopActiveTimeline(long param_1)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  int extraout_w1;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long lVar12;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar13;
  undefined *unaff_x30;
  undefined *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  auVar16._8_8_ = unaff_x21;
  auVar16._0_8_ = unaff_x20;
  if (*(long *)(param_1 + 0x10) == 0) {
    func_0x00f78af4();
    return;
  }
  auVar15._8_8_ = 0;
  auVar15._0_8_ = *(ulong *)(*(long *)(param_1 + 0x10) + 0x28);
code_r0x014c037c:
  plVar9 = auVar16._8_8_;
  auVar1._8_8_ = auVar16._0_8_;
  auVar1._0_8_ = unaff_x19;
  lVar12 = auVar15._0_8_;
  puVar3 = (undefined1 *)((long)register0x00000008 + -0x20);
  *(long *)((long)register0x00000008 + -0x20) = auVar16._0_8_;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar13 = (undefined1 *)((long)register0x00000008 + -0x10);
  if (lVar12 == 0) {
code_r0x014c03e4:
    puVar14 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirectorActivations;
    lVar12 = func_0x00f78af4();
  }
  else {
    /*UnityEngine.Playables.PlayableDirector$$Stop*/ func_0x03282c40(lVar12,0);
    /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(lVar12,0);
    /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar12,0);
    if (auVar15._8_4_ != 0) {
      lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar12,0);
      auVar1 = auVar15;
      if (lVar5 == 0) goto code_r0x014c03e4;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar5,0,0);
    }
    puVar13 = *(undefined1 **)((long)register0x00000008 + -0x10);
    puVar14 = *(undefined **)((long)register0x00000008 + -8);
    auVar1._8_8_ = *(undefined8 *)((long)register0x00000008 + -0x20);
    auVar1._0_8_ = *(undefined8 *)((long)register0x00000008 + -0x18);
    puVar3 = (undefined1 *)register0x00000008;
  }
  *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(long **)(puVar3 + -0x28) = plVar9;
  *(long *)(puVar3 + -0x20) = auVar1._8_8_;
  *(long *)(puVar3 + -0x18) = auVar1._0_8_;
  *(undefined1 **)(puVar3 + -0x10) = puVar13;
  *(undefined **)(puVar3 + -8) = puVar14;
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
    plVar6 = (long *)/*UnityEngine.Playables.PlayableDirector$$get_playableAsset*/ func_0x0328235c(lVar12,0);
    if (plVar6 == (long *)0x0) {
code_r0x014c04b4:
      plVar6 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar6 + 300) < *(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300)) goto code_r0x014c04b4;
      if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300) * 8 + -8
                   ) != /*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280) {
        plVar6 = (long *)0x0;
      }
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x19 = 0;
    iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar6,0);
    if (iVar4 == 0) {
      return;
    }
    if ((plVar6 != (long *)0x0) &&
       (plVar6 = (long *)/*UnityEngine.Timeline.TimelineAsset$$GetOutputTracks*/ func_0x031fab88(plVar6,0), plVar6 != (long *)0x0)) {
      lVar5 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IEnumerable<TrackAsset>_TypeInfo*/ lRam0000000003d1d180) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
            goto code_r0x014c0568;
          }
          piVar11 = piVar11 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      unaff_x19 = 0;
      puVar7 = (undefined8 *)func_0x00fac1f0(plVar6);
code_r0x014c0568:
      plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      if (plVar6 != (long *)0x0) {
        unaff_x23 = 0x3d22180;
        unaff_x24 = 0x3d1d390;
        unaff_x25 = 0x3d1faa8;
        unaff_x26 = 0x3d21b60;
code_r0x014c059c:
        lVar5 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x014c05e8;
            }
            piVar11 = piVar11 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        unaff_x19 = 0;
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar6);
code_r0x014c05e8:
        uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar10 & 1) != 0) {
          lVar5 = *plVar6;
          uVar10 = (ulong)*(ushort *)(lVar5 + 0x12a);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IEnumerator<TrackAsset>_TypeInfo*/ lRam0000000003d1d390) {
                puVar7 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
                goto code_r0x014c0644;
              }
              piVar11 = piVar11 + 4;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          unaff_x19 = 0;
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar6);
code_r0x014c0644:
          plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
          if (plVar8 != (long *)0x0) {
            if ((*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) <= *(byte *)(*plVar8 + 300)) &&
               (*(long *)(*(long *)(*plVar8 + 200) +
                          (ulong)*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) * 8 + -8) ==
                /*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8)) {
              plVar9 = (long *)/*UnityEngine.Playables.PlayableDirector$$GetGenericBinding*/ func_0x03282f5c(lVar12,plVar8,0);
              if (plVar9 == (long *)0x0) {
                plVar9 = (long *)0x0;
              }
              else if (*plVar9 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60) {
                plVar9 = (long *)0x0;
              }
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              unaff_x19 = 0;
              uVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar9,0);
              if ((uVar10 & 1) != 0) {
                if (plVar9 == (long *)0x0) goto code_r0x014c0778;
                unaff_x19 = 0;
                /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(plVar9,0);
              }
            }
          }
          goto code_r0x014c059c;
        }
        lVar12 = 0;
        do {
          if (plVar6 != (long *)0x0) {
            lVar5 = *plVar6;
            uVar10 = (ulong)*(ushort *)(lVar5 + 0x12a);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                  puVar7 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
                  goto code_r0x014c074c;
                }
                piVar11 = piVar11 + 4;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
            unaff_x19 = 0;
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar6);
code_r0x014c074c:
            (*(code *)*puVar7)(plVar6,puVar7[1]);
          }
          if (lVar12 == 0) {
            return;
          }
          func_0x00f78ac0(lVar12,0);
          if (extraout_w1 != 1) goto code_r0x014c07cc;
          plVar8 = (long *)___cxa_begin_catch();
          lVar12 = *plVar8;
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
code_r0x014c07cc:
  auVar16 = __Unwind_Resume();
  lVar5 = auVar16._0_8_;
  register0x00000008 = (BADSPACEBASE *)(puVar3 + -0x70);
  *(long **)(puVar3 + -0x70) = plVar6;
  *(long *)(puVar3 + -0x68) = lVar12;
  *(undefined1 **)(puVar3 + -0x60) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x58) = &Atlas_PlayableDirectorHelpers__ChangeTimelineAndPlay;
  if (lVar5 == 0) {
    auVar16 = func_0x00f78af4();
    auVar15._8_8_ = unaff_x19;
    auVar15._0_8_ = auVar16._0_8_;
    register0x00000008 = (BADSPACEBASE *)(puVar3 + -0xa0);
    *(undefined8 *)(puVar3 + -0xa0) = 0x3d23990;
    *(long **)(puVar3 + -0x98) = plVar9;
    *(long **)(puVar3 + -0x90) = plVar6;
    *(long *)(puVar3 + -0x88) = lVar12;
    *(undefined1 **)(puVar3 + -0x80) = puVar3 + -0x60;
    *(undefined **)(puVar3 + -0x78) = &Atlas_PlayableDirectorHelpers__ResetThenChangeTimelineAndPlay
    ;
    unaff_x29 = puVar3 + -0x80;
    unaff_x30 = &UNK_014c082c;
  }
  else {
    /*UnityEngine.Playables.PlayableDirector$$set_playableAsset*/ func_0x03282440(lVar5,auVar16._8_8_,0);
    auVar16._8_8_ = plVar9;
    auVar16._0_8_ = *(undefined8 *)(puVar3 + -0x70);
    *(undefined8 *)(puVar3 + -0x70) = *(undefined8 *)(puVar3 + -0x70);
    *(undefined8 *)(puVar3 + -0x68) = *(undefined8 *)(puVar3 + -0x68);
    *(undefined8 *)(puVar3 + -0x60) = *(undefined8 *)(puVar3 + -0x60);
    *(undefined8 *)(puVar3 + -0x58) = *(undefined8 *)(puVar3 + -0x58);
    unaff_x29 = puVar3 + -0x60;
    if ((int)unaff_x19 == 0) {
      if (lVar5 != 0) goto code_r0x014c034c;
    }
    else if ((lVar5 != 0) && (lVar12 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar5,0), lVar12 != 0)) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar12,1,0);
code_r0x014c034c:
      /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(lVar5,0);
      /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar5,0);
      *(undefined8 *)(puVar3 + -0x70) = *(undefined8 *)(puVar3 + -0x70);
      *(undefined8 *)(puVar3 + -0x68) = *(undefined8 *)(puVar3 + -0x68);
      *(undefined8 *)(puVar3 + -0x60) = *(undefined8 *)(puVar3 + -0x60);
      *(undefined8 *)(puVar3 + -0x58) = *(undefined8 *)(puVar3 + -0x58);
      if (pcRam0000000003ec1b90 == (code *)0x0) {
        pcRam0000000003ec1b90 =
             (code *)func_0x00f789d4("UnityEngine.Playables.PlayableDirector::Play()");
      }
                    /* WARNING: Could not recover jumptable at 0x0328295c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003ec1b90)(lVar5);
      return;
    }
    unaff_x30 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirector;
    auVar15 = func_0x00f78af4();
    unaff_x19 = lVar5;
  }
  goto code_r0x014c037c;
}



// ============================================================
// RVA: 0x148df4c | Atlas.Maps.MapSequenceController..ctor
// ============================================================

void Atlas_Maps_MapSequenceController___ctor(void)

{
  return;
}



