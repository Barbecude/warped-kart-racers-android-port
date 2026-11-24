// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.IntroSequencePlayerPanState

// ============================================================
// RVA: 0x15b9828 | Atlas.Contexts.IntroSequencePlayerPanState.Init
// ============================================================

long Atlas_Contexts_IntroSequencePlayerPanState__Init
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
               long param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  ushort uVar1;
  undefined *puVar2;
  undefined1 **ppuVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  long *plVar19;
  float fVar20;
  undefined1 auVar21 [16];
  long lStack_e0;
  long lStack_d8;
  undefined1 **in_stack_ffffffffffffff30;
  long lStack_b8;
  undefined1 ***pppuStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb52aa & 1) == 0) {
    func_0x00f78a20(0x3d55088);
    func_0x00f78a20(0x3d55148);
    bRam0000000003eb52aa = 1;
  }
  *(long *)(param_4 + 0x78) = param_5;
  *(undefined8 *)(param_4 + 0x80) = param_6;
  if (param_7 != 0) {
    uVar10 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_7,uRam0000000003d55148);
    *(undefined8 *)(param_4 + 0x88) = uVar10;
    lVar11 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_7,uRam0000000003d55088);
    *(long *)(param_4 + 0x90) = lVar11;
    *(undefined8 *)(param_4 + 0x98) = param_8;
    return lVar11;
  }
  lVar12 = func_0x00f78af4();
  uStack_80 = 0x3eb5000;
  puStack_48 = &Atlas_Contexts_IntroSequencePlayerPanState__OnEnter;
  lVar11 = 0x3eb5000;
  lStack_78 = param_5;
  uStack_70 = param_6;
  lStack_68 = param_7;
  lStack_60 = param_4;
  uStack_58 = param_8;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb52ab & 1) == 0) {
    func_0x00f78a20(0x3d2a3c8);
    func_0x00f78a20(0x3d1b5e0);
    func_0x00f78a20(0x3d59310);
    bRam0000000003eb52ab = 1;
  }
  uVar10 = 0;
  if (((*(long *)(lVar12 + 0x78) != 0) &&
      (lVar15 = *(long *)(*(long *)(lVar12 + 0x78) + 0x10), lVar15 != 0)) &&
     (lVar11 = *(long *)(lVar15 + 0x20), lVar11 != 0)) {
    /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar11,*(undefined8 *)(lVar12 + 0x80),0,0);
    /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar11,0);
    if (*(long *)(lVar12 + 0x80) != 0) {
      fVar20 = (float)/*UnityEngine.Transform$$get_localEulerAngles*/ func_0x0327550c(*(long *)(lVar12 + 0x80),0);
      /*UnityEngine.Quaternion$$Euler*/ func_0x0325213c(-fVar20,0,-param_3,0);
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar11,0);
      lVar15 = *(long *)(lVar12 + 0x78);
      if ((lVar15 != 0) && (*(long *)(lVar15 + 0x10) != 0)) {
        /*Atlas.Maps.MapSequenceController$$ResetThenChangeTimelineAndPlay*/ func_0x0148defc(lVar15,*(undefined8 *)(*(long *)(lVar15 + 0x10) + 0x40),0);
        if (*(long *)(lVar12 + 0x78) != 0) {
          param_6 = 0x3d59000;
          param_5 = 0x3d2a000;
          lVar15 = *(long *)(*(long *)(lVar12 + 0x78) + 0x10);
          uVar10 = func_0x00f78aec(/*System.Action<MapSequenceBehaviour.TimelineEvent>_TypeInfo*/ lRam0000000003d1b5e0);
          /*System.Action<MapSequenceBehaviour.TimelineEvent>$$.ctor*/ func_0x01b47da4(uVar10,lVar12,uRam0000000003d59310,uRam0000000003d2a3c8);
          lVar11 = 0;
          if (lVar15 != 0) {
            /*Atlas.Maps.MapSequenceBehaviour$$add_OnTimelineEvent*/ func_0x0148dc88(lVar15,uVar10,0);
            lVar11 = *(long *)(lVar12 + 0x98);
            if (lVar11 == 0) {
              return 0;
            }
            if ((bRam0000000003eb4e67 & 1) == 0) {
              func_0x00f78a20(0x3d32590,3,0);
              func_0x00f78a20(0x3d325a8);
              func_0x00f78a20(0x3d325b0);
              func_0x00f78a20(0x3d32598);
              func_0x00f78a20(0x3d325a0);
              func_0x00f78a20(0x3d325b8);
              func_0x00f78a20(0x3d3a7b0);
              func_0x00f78a20(0x3d3a7a8);
              func_0x00f78a20(0x3d23990);
              bRam0000000003eb4e67 = 1;
            }
            lStack_a0 = 0;
            lStack_98 = 0;
            ppuStack_90 = (undefined1 **)0x0;
            lStack_b8 = 0;
            pppuStack_b0 = (undefined1 ***)0x0;
            puStack_a8 = (undefined *)0x0;
            if (*(long *)(lVar11 + 0x10) != 0) {
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_e0,*(long *)(lVar11 + 0x10),uRam0000000003d3a7b0);
              lStack_98 = lStack_d8;
              lStack_a0 = lStack_e0;
              ppuStack_90 = in_stack_ffffffffffffff30;
              while (uVar9 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_a0,uRam0000000003d325b0), ppuVar3 = ppuStack_90
                    , (uVar9 & 1) != 0) {
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(ppuVar3,0,0);
                if ((uVar9 & 1) == 0) {
                  if (ppuVar3 == (undefined1 **)0x0) {
                    func_0x00f78af4();
                    goto code_r0x01527c48;
                  }
                  if (*(int *)((long)ppuVar3 + 0x44) == 3) {
                    /*Atlas.Gameplay.HitVolumeVFXTriggerBehaviour$$ManualActivate*/ func_0x015b5220(ppuVar3,0);
                  }
                }
              }
              /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&lStack_a0,uRam0000000003d325a8);
            }
            lVar12 = 0;
            if (*(long *)(lVar11 + 0x18) != 0) {
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_b8,*(long *)(lVar11 + 0x18),uRam0000000003d3a7a8);
              while (uVar9 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_b8,uRam0000000003d32598), puVar2 = puStack_a8,
                    (uVar9 & 1) != 0) {
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(puVar2,0,0);
                if ((uVar9 & 1) == 0) {
                  if (puVar2 == (undefined *)0x0) {
                    func_0x00f78af4();
code_r0x01527c48:
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1527c4c);
                    (*pcVar4)();
                  }
                  if (*(int *)((long)puVar2 + 0x40) == 3) {
                    /*Atlas.Gameplay.HitVolumeVFXAdditionalTriggerBehaviour$$ManualActivate*/ func_0x015b5190(puVar2,0);
                  }
                }
              }
              lVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&lStack_b8,uRam0000000003d32590);
            }
            return lVar12;
          }
        }
      }
    }
  }
  lVar15 = func_0x00f78af4();
  puStack_88 = &Atlas_Contexts_IntroSequencePlayerPanState__OnUpdate;
  pppuStack_b0 = &ppuStack_90;
  lStack_a0 = lVar11;
  lStack_98 = lVar12;
  ppuStack_90 = &puStack_50;
  if ((*(long *)(lVar15 + 0x78) == 0) ||
     (lVar11 = *(long *)(*(long *)(lVar15 + 0x78) + 0x10), lVar11 == 0)) {
    lVar11 = func_0x00f78af4();
    lStack_e0 = 0x3eb5000;
    puStack_a8 = &Atlas_Contexts_IntroSequencePlayerPanState__OnExit;
    lStack_d8 = param_5;
    lStack_b8 = lVar12;
    if ((bRam0000000003eb52ac & 1) == 0) {
      func_0x00f78a20(0x3d2a3c8);
      func_0x00f78a20(0x3d1b5e0);
      func_0x00f78a20(0x3d59310);
      bRam0000000003eb52ac = 1;
    }
    if (*(long *)(lVar11 + 0x78) != 0) {
      lVar12 = *(long *)(*(long *)(lVar11 + 0x78) + 0x10);
      uVar10 = func_0x00f78aec(/*System.Action<MapSequenceBehaviour.TimelineEvent>_TypeInfo*/ lRam0000000003d1b5e0);
      /*System.Action<MapSequenceBehaviour.TimelineEvent>$$.ctor*/ func_0x01b47da4(uVar10,lVar11,uRam0000000003d59310,uRam0000000003d2a3c8);
      if (lVar12 != 0) {
        if ((bRam0000000003eb4983 & 1) == 0) {
          func_0x00f78a20(0x3d1b5e0,uVar10,0);
          bRam0000000003eb4983 = 1;
        }
        plVar19 = (long *)(lVar12 + 0x18);
        lVar11 = *plVar19;
        while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
               (*plVar8 == /*System.Action<MapSequenceBehaviour.TimelineEvent>_TypeInfo*/ lRam0000000003d1b5e0))) {
          lVar12 = func_0x00ff0f44(plVar19,plVar8,lVar11);
          bVar5 = lVar11 == lVar12;
          lVar11 = lVar12;
          if (bVar5) {
            return lVar12;
          }
        }
        lVar11 = func_0x00f78e5c(plVar8);
        return *(long *)(lVar11 + 0x20);
      }
    }
    lVar11 = func_0x00f78af4();
    *(undefined8 *)(lVar11 + 0x78) = 0;
    *(undefined8 *)(lVar11 + 0x80) = 0;
    *(undefined8 *)(lVar11 + 0x88) = 0;
    return lVar11;
  }
  lVar11 = /*Atlas.PlayableDirectorHelpers$$HasPlayableDirectorFinished*/ func_0x014b58e8(*(undefined8 *)(lVar11 + 0x28),0);
  if ((int)lVar11 == 0) {
    return lVar11;
  }
  lVar11 = *(long *)(lVar15 + 0x60);
  if (lVar11 == 0) {
    return 0;
  }
  uVar14 = 0;
  lStack_b8 = param_5;
  pppuStack_b0 = (undefined1 ***)param_6;
  puStack_a8 = (undefined *)uVar10;
  lStack_d8 = lVar11;
  lVar12 = *(long *)(lVar11 + 0x68);
  if (lVar12 == 0) {
    plVar19 = &lStack_d8;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar12 + 0x18);
    if (lVar15 == 0) {
      return lVar11;
    }
    plVar19 = (long *)(lVar12 + 0x20);
  }
  lVar12 = 0;
  do {
    lVar16 = plVar19[lVar12];
    pcVar4 = *(code **)(lVar16 + 0x10);
    plVar8 = *(long **)(lVar16 + 0x20);
    lVar16 = *(long *)(lVar16 + 0x28);
    if (*(short *)(lVar16 + 0x48) == -1) {
      func_0x00f78ad8(lVar16,uVar14);
    }
    iVar6 = func_0x00f78a4c(lVar16);
    if (iVar6 == 0) {
      if ((((plVar8 == (long *)0x0) || (*(short *)(lVar16 + 0x48) == -1)) ||
          ((*(byte *)(*plVar8 + 0x115) & 1) != 0)) || (*(long *)(lVar11 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar6 = func_0x00f78a44(lVar16);
      iVar7 = func_0x00f78ec0(lVar16);
      if (iVar6 == 0) {
        uVar1 = *(ushort *)(lVar16 + 0x48);
        if (iVar7 == 0) {
          lVar16 = *plVar8 + (ulong)uVar1 * 0x10;
          auVar21 = (**(code **)(lVar16 + 0x138))(plVar8,*(undefined8 *)(lVar16 + 0x140));
          goto code_r0x02924da4;
        }
        lVar16 = func_0x00f78a48(lVar16);
        lVar17 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar17 + 0x12a);
        if (uVar9 != 0) {
          piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar16) {
              puVar13 = (undefined8 *)(lVar17 + (long)(int)(*piVar18 + (uint)uVar1) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar18 = piVar18 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar13 = (undefined8 *)func_0x00fac1f0(plVar8,lVar16,(ulong)uVar1);
code_r0x02924e68:
        pcVar4 = (code *)*puVar13;
        puVar13 = (undefined8 *)puVar13[1];
      }
      else {
        if (iVar7 == 0) {
          uVar10 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar16 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar17 = *plVar8;
          uVar9 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar9 != 0) {
            piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)(lVar16 + 0x18)) {
                lVar17 = lVar17 + (long)(int)(*piVar18 + (uint)*(ushort *)(lVar16 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar18 = piVar18 + 4;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          lVar17 = func_0x00fac1f0(plVar8);
code_r0x02924e40:
          uVar10 = *(undefined8 *)(lVar17 + 8);
        }
        puVar13 = (undefined8 *)func_0x00f78acc(uVar10,lVar16);
        pcVar4 = (code *)*puVar13;
      }
      auVar21 = (*pcVar4)(plVar8,puVar13);
    }
    else if (*(char *)(lVar16 + 0x4a) == '\0') {
      auVar21 = (*pcVar4)(lVar16);
    }
    else {
code_r0x02924d98:
      auVar21 = (*pcVar4)(plVar8,lVar16);
    }
code_r0x02924da4:
    uVar14 = auVar21._8_8_;
    lVar12 = lVar12 + 1;
    if (lVar12 == lVar15) {
      return auVar21._0_8_;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15b98cc | Atlas.Contexts.IntroSequencePlayerPanState.OnEnter
// ============================================================

long Atlas_Contexts_IntroSequencePlayerPanState__OnEnter
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  ushort uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  long *plVar16;
  long lVar17;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  long lVar18;
  float fVar19;
  undefined1 auVar20 [16];
  long in_stack_ffffffffffffff60;
  long lStack_98;
  undefined1 *in_stack_ffffffffffffff70;
  long lStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  lVar17 = 0x3eb5000;
  if ((bRam0000000003eb52ab & 1) == 0) {
    func_0x00f78a20(0x3d2a3c8);
    func_0x00f78a20(0x3d1b5e0);
    func_0x00f78a20(0x3d59310);
    bRam0000000003eb52ab = 1;
  }
  if (((*(long *)(param_4 + 0x78) != 0) &&
      (lVar12 = *(long *)(*(long *)(param_4 + 0x78) + 0x10), lVar12 != 0)) &&
     (lVar17 = *(long *)(lVar12 + 0x20), lVar17 != 0)) {
    /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar17,*(undefined8 *)(param_4 + 0x80),0,0);
    /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar17,0);
    if (*(long *)(param_4 + 0x80) != 0) {
      fVar19 = (float)/*UnityEngine.Transform$$get_localEulerAngles*/ func_0x0327550c(*(long *)(param_4 + 0x80),0);
      /*UnityEngine.Quaternion$$Euler*/ func_0x0325213c(-fVar19,0,-param_3,0);
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar17,0);
      lVar12 = *(long *)(param_4 + 0x78);
      if ((lVar12 != 0) && (*(long *)(lVar12 + 0x10) != 0)) {
        /*Atlas.Maps.MapSequenceController$$ResetThenChangeTimelineAndPlay*/ func_0x0148defc(lVar12,*(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x40),0);
        if (*(long *)(param_4 + 0x78) != 0) {
          unaff_x22 = 0x3d59000;
          unaff_x23 = 0x3d2a000;
          lVar12 = *(long *)(*(long *)(param_4 + 0x78) + 0x10);
          unaff_x21 = func_0x00f78aec(/*System.Action<MapSequenceBehaviour.TimelineEvent>_TypeInfo*/ lRam0000000003d1b5e0);
          /*System.Action<MapSequenceBehaviour.TimelineEvent>$$.ctor*/ func_0x01b47da4(unaff_x21,param_4,uRam0000000003d59310,uRam0000000003d2a3c8);
          lVar17 = 0;
          if (lVar12 != 0) {
            /*Atlas.Maps.MapSequenceBehaviour$$add_OnTimelineEvent*/ func_0x0148dc88(lVar12,unaff_x21,0);
            lVar17 = *(long *)(param_4 + 0x98);
            if (lVar17 == 0) {
              return 0;
            }
            if ((bRam0000000003eb4e67 & 1) == 0) {
              func_0x00f78a20(0x3d32590,3,0);
              func_0x00f78a20(0x3d325a8);
              func_0x00f78a20(0x3d325b0);
              func_0x00f78a20(0x3d32598);
              func_0x00f78a20(0x3d325a0);
              func_0x00f78a20(0x3d325b8);
              func_0x00f78a20(0x3d3a7b0);
              func_0x00f78a20(0x3d3a7a8);
              func_0x00f78a20(0x3d23990);
              bRam0000000003eb4e67 = 1;
            }
            lStack_60 = 0;
            lStack_58 = 0;
            puStack_50 = (undefined1 *)0x0;
            lStack_78 = 0;
            ppuStack_70 = (undefined1 **)0x0;
            puStack_68 = (undefined *)0x0;
            if (*(long *)(lVar17 + 0x10) != 0) {
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&stack0xffffffffffffff60,*(long *)(lVar17 + 0x10),uRam0000000003d3a7b0
                             );
              lStack_58 = lStack_98;
              lStack_60 = in_stack_ffffffffffffff60;
              puStack_50 = in_stack_ffffffffffffff70;
              while (uVar9 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_60,uRam0000000003d325b0), puVar3 = puStack_50,
                    (uVar9 & 1) != 0) {
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(puVar3,0,0);
                if ((uVar9 & 1) == 0) {
                  if (puVar3 == (undefined1 *)0x0) {
                    func_0x00f78af4();
                    goto code_r0x01527c48;
                  }
                  if (*(int *)(puVar3 + 0x44) == 3) {
                    /*Atlas.Gameplay.HitVolumeVFXTriggerBehaviour$$ManualActivate*/ func_0x015b5220(puVar3,0);
                  }
                }
              }
              /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&lStack_60,uRam0000000003d325a8);
            }
            lVar12 = 0;
            if (*(long *)(lVar17 + 0x18) != 0) {
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_78,*(long *)(lVar17 + 0x18),uRam0000000003d3a7a8);
              while (uVar9 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_78,uRam0000000003d32598), puVar2 = puStack_68,
                    (uVar9 & 1) != 0) {
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(puVar2,0,0);
                if ((uVar9 & 1) == 0) {
                  if (puVar2 == (undefined *)0x0) {
                    func_0x00f78af4();
code_r0x01527c48:
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1527c4c);
                    (*pcVar4)();
                  }
                  if (*(int *)((long)puVar2 + 0x40) == 3) {
                    /*Atlas.Gameplay.HitVolumeVFXAdditionalTriggerBehaviour$$ManualActivate*/ func_0x015b5190(puVar2,0);
                  }
                }
              }
              lVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&lStack_78,uRam0000000003d32590);
            }
            return lVar12;
          }
        }
      }
    }
  }
  lVar12 = func_0x00f78af4();
  puStack_48 = &Atlas_Contexts_IntroSequencePlayerPanState__OnUpdate;
  ppuStack_70 = &puStack_50;
  lStack_60 = lVar17;
  lStack_58 = param_4;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((*(long *)(lVar12 + 0x78) == 0) ||
     (lVar17 = *(long *)(*(long *)(lVar12 + 0x78) + 0x10), lVar17 == 0)) {
    lVar17 = func_0x00f78af4();
    puStack_68 = &Atlas_Contexts_IntroSequencePlayerPanState__OnExit;
    lStack_98 = unaff_x23;
    lStack_78 = param_4;
    if ((bRam0000000003eb52ac & 1) == 0) {
      func_0x00f78a20(0x3d2a3c8);
      func_0x00f78a20(0x3d1b5e0);
      func_0x00f78a20(0x3d59310);
      bRam0000000003eb52ac = 1;
    }
    if (*(long *)(lVar17 + 0x78) != 0) {
      lVar12 = *(long *)(*(long *)(lVar17 + 0x78) + 0x10);
      uVar11 = func_0x00f78aec(/*System.Action<MapSequenceBehaviour.TimelineEvent>_TypeInfo*/ lRam0000000003d1b5e0);
      /*System.Action<MapSequenceBehaviour.TimelineEvent>$$.ctor*/ func_0x01b47da4(uVar11,lVar17,uRam0000000003d59310,uRam0000000003d2a3c8);
      if (lVar12 != 0) {
        if ((bRam0000000003eb4983 & 1) == 0) {
          func_0x00f78a20(0x3d1b5e0,uVar11,0);
          bRam0000000003eb4983 = 1;
        }
        plVar16 = (long *)(lVar12 + 0x18);
        lVar17 = *plVar16;
        while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar17,uVar11,0), plVar8 == (long *)0x0 ||
               (*plVar8 == /*System.Action<MapSequenceBehaviour.TimelineEvent>_TypeInfo*/ lRam0000000003d1b5e0))) {
          lVar12 = func_0x00ff0f44(plVar16,plVar8,lVar17);
          bVar5 = lVar17 == lVar12;
          lVar17 = lVar12;
          if (bVar5) {
            return lVar12;
          }
        }
        lVar17 = func_0x00f78e5c(plVar8);
        return *(long *)(lVar17 + 0x20);
      }
    }
    lVar17 = func_0x00f78af4();
    *(undefined8 *)(lVar17 + 0x78) = 0;
    *(undefined8 *)(lVar17 + 0x80) = 0;
    *(undefined8 *)(lVar17 + 0x88) = 0;
    return lVar17;
  }
  lVar17 = /*Atlas.PlayableDirectorHelpers$$HasPlayableDirectorFinished*/ func_0x014b58e8(*(undefined8 *)(lVar17 + 0x28),0);
  if ((int)lVar17 == 0) {
    return lVar17;
  }
  lVar17 = *(long *)(lVar12 + 0x60);
  if (lVar17 == 0) {
    return 0;
  }
  uVar11 = 0;
  lStack_78 = unaff_x23;
  ppuStack_70 = (undefined1 **)unaff_x22;
  puStack_68 = (undefined *)unaff_x21;
  lStack_98 = lVar17;
  lVar12 = *(long *)(lVar17 + 0x68);
  if (lVar12 == 0) {
    plVar16 = &lStack_98;
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar12 + 0x18);
    if (lVar18 == 0) {
      return lVar17;
    }
    plVar16 = (long *)(lVar12 + 0x20);
  }
  lVar12 = 0;
  do {
    lVar13 = plVar16[lVar12];
    pcVar4 = *(code **)(lVar13 + 0x10);
    plVar8 = *(long **)(lVar13 + 0x20);
    lVar13 = *(long *)(lVar13 + 0x28);
    if (*(short *)(lVar13 + 0x48) == -1) {
      func_0x00f78ad8(lVar13,uVar11);
    }
    iVar6 = func_0x00f78a4c(lVar13);
    if (iVar6 == 0) {
      if ((((plVar8 == (long *)0x0) || (*(short *)(lVar13 + 0x48) == -1)) ||
          ((*(byte *)(*plVar8 + 0x115) & 1) != 0)) || (*(long *)(lVar17 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar6 = func_0x00f78a44(lVar13);
      iVar7 = func_0x00f78ec0(lVar13);
      if (iVar6 == 0) {
        uVar1 = *(ushort *)(lVar13 + 0x48);
        if (iVar7 == 0) {
          lVar13 = *plVar8 + (ulong)uVar1 * 0x10;
          auVar20 = (**(code **)(lVar13 + 0x138))(plVar8,*(undefined8 *)(lVar13 + 0x140));
          goto code_r0x02924da4;
        }
        lVar13 = func_0x00f78a48(lVar13);
        lVar14 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar9 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar13) {
              puVar10 = (undefined8 *)(lVar14 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar15 = piVar15 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)func_0x00fac1f0(plVar8,lVar13,(ulong)uVar1);
code_r0x02924e68:
        pcVar4 = (code *)*puVar10;
        puVar10 = (undefined8 *)puVar10[1];
      }
      else {
        if (iVar7 == 0) {
          uVar11 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar14 = *plVar8;
          uVar9 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar9 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)(lVar13 + 0x18)) {
                lVar14 = lVar14 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar13 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar15 = piVar15 + 4;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          lVar14 = func_0x00fac1f0(plVar8);
code_r0x02924e40:
          uVar11 = *(undefined8 *)(lVar14 + 8);
        }
        puVar10 = (undefined8 *)func_0x00f78acc(uVar11,lVar13);
        pcVar4 = (code *)*puVar10;
      }
      auVar20 = (*pcVar4)(plVar8,puVar10);
    }
    else if (*(char *)(lVar13 + 0x4a) == '\0') {
      auVar20 = (*pcVar4)(lVar13);
    }
    else {
code_r0x02924d98:
      auVar20 = (*pcVar4)(plVar8,lVar13);
    }
code_r0x02924da4:
    uVar11 = auVar20._8_8_;
    lVar12 = lVar12 + 1;
    if (lVar12 == lVar18) {
      return auVar20._0_8_;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15b9a38 | Atlas.Contexts.IntroSequencePlayerPanState.OnUpdate
// ============================================================

long Atlas_Contexts_IntroSequencePlayerPanState__OnUpdate(long param_1)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  code *pcVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined1 auVar18 [16];
  
  if ((*(long *)(param_1 + 0x78) == 0) ||
     (lVar8 = *(long *)(*(long *)(param_1 + 0x78) + 0x10), lVar8 == 0)) {
    lVar8 = func_0x00f78af4();
    if ((bRam0000000003eb52ac & 1) == 0) {
      func_0x00f78a20(0x3d2a3c8);
      func_0x00f78a20(0x3d1b5e0);
      func_0x00f78a20(0x3d59310);
      bRam0000000003eb52ac = 1;
    }
    if (*(long *)(lVar8 + 0x78) != 0) {
      lVar9 = *(long *)(*(long *)(lVar8 + 0x78) + 0x10);
      uVar7 = func_0x00f78aec(/*System.Action<MapSequenceBehaviour.TimelineEvent>_TypeInfo*/ lRam0000000003d1b5e0);
      /*System.Action<MapSequenceBehaviour.TimelineEvent>$$.ctor*/ func_0x01b47da4(uVar7,lVar8,uRam0000000003d59310,uRam0000000003d2a3c8);
      if (lVar9 != 0) {
        if ((bRam0000000003eb4983 & 1) == 0) {
          func_0x00f78a20(0x3d1b5e0,uVar7,0);
          bRam0000000003eb4983 = 1;
        }
        plVar14 = (long *)(lVar9 + 0x18);
        lVar8 = *plVar14;
        while ((plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar8,uVar7,0), plVar5 == (long *)0x0 ||
               (*plVar5 == /*System.Action<MapSequenceBehaviour.TimelineEvent>_TypeInfo*/ lRam0000000003d1b5e0))) {
          lVar9 = func_0x00ff0f44(plVar14,plVar5,lVar8);
          bVar2 = lVar8 == lVar9;
          lVar8 = lVar9;
          if (bVar2) {
            return lVar9;
          }
        }
        lVar8 = func_0x00f78e5c(plVar5);
        return *(long *)(lVar8 + 0x20);
      }
    }
    lVar8 = func_0x00f78af4();
    *(undefined8 *)(lVar8 + 0x78) = 0;
    *(undefined8 *)(lVar8 + 0x80) = 0;
    *(undefined8 *)(lVar8 + 0x88) = 0;
    return lVar8;
  }
  lVar8 = /*Atlas.PlayableDirectorHelpers$$HasPlayableDirectorFinished*/ func_0x014b58e8(*(undefined8 *)(lVar8 + 0x28),0);
  if ((int)lVar8 == 0) {
    return lVar8;
  }
  lVar8 = *(long *)(param_1 + 0x60);
  if (lVar8 == 0) {
    return 0;
  }
  uVar7 = 0;
  lVar9 = *(long *)(lVar8 + 0x68);
  if (lVar9 == 0) {
    puVar17 = &stack0xffffffffffffffa8;
    lVar16 = 1;
  }
  else {
    lVar16 = *(long *)(lVar9 + 0x18);
    if (lVar16 == 0) {
      return lVar8;
    }
    puVar17 = (undefined1 *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = *(long *)(puVar17 + lVar9 * 8);
    pcVar15 = *(code **)(lVar10 + 0x10);
    plVar14 = *(long **)(lVar10 + 0x20);
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10,uVar7);
    }
    iVar3 = func_0x00f78a4c(lVar10);
    if (iVar3 == 0) {
      if ((((plVar14 == (long *)0x0) || (*(short *)(lVar10 + 0x48) == -1)) ||
          ((*(byte *)(*plVar14 + 0x115) & 1) != 0)) || (*(long *)(lVar8 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar3 = func_0x00f78a44(lVar10);
      iVar4 = func_0x00f78ec0(lVar10);
      if (iVar3 == 0) {
        uVar1 = *(ushort *)(lVar10 + 0x48);
        if (iVar4 == 0) {
          lVar10 = *plVar14 + (ulong)uVar1 * 0x10;
          auVar18 = (**(code **)(lVar10 + 0x138))(plVar14,*(undefined8 *)(lVar10 + 0x140));
          goto code_r0x02924da4;
        }
        lVar10 = func_0x00f78a48(lVar10);
        lVar11 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar10) {
              puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar1) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar13 = piVar13 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar14,lVar10,(ulong)uVar1);
code_r0x02924e68:
        pcVar15 = (code *)*puVar6;
        puVar6 = (undefined8 *)puVar6[1];
      }
      else {
        if (iVar4 == 0) {
          uVar7 = *(undefined8 *)(*plVar14 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar11 = *plVar14;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          lVar11 = func_0x00fac1f0(plVar14);
code_r0x02924e40:
          uVar7 = *(undefined8 *)(lVar11 + 8);
        }
        puVar6 = (undefined8 *)func_0x00f78acc(uVar7,lVar10);
        pcVar15 = (code *)*puVar6;
      }
      auVar18 = (*pcVar15)(plVar14,puVar6);
    }
    else if (*(char *)(lVar10 + 0x4a) == '\0') {
      auVar18 = (*pcVar15)(lVar10);
    }
    else {
code_r0x02924d98:
      auVar18 = (*pcVar15)(plVar14,lVar10);
    }
code_r0x02924da4:
    uVar7 = auVar18._8_8_;
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar16) {
      return auVar18._0_8_;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15b9a8c | Atlas.Contexts.IntroSequencePlayerPanState.OnExit
// ============================================================

long Atlas_Contexts_IntroSequencePlayerPanState__OnExit(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  if ((bRam0000000003eb52ac & 1) == 0) {
    func_0x00f78a20(0x3d2a3c8);
    func_0x00f78a20(0x3d1b5e0);
    func_0x00f78a20(0x3d59310);
    bRam0000000003eb52ac = 1;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x78) + 0x10);
    uVar4 = func_0x00f78aec(/*System.Action<MapSequenceBehaviour.TimelineEvent>_TypeInfo*/ lRam0000000003d1b5e0);
    /*System.Action<MapSequenceBehaviour.TimelineEvent>$$.ctor*/ func_0x01b47da4(uVar4,param_1,uRam0000000003d59310,uRam0000000003d2a3c8);
    if (lVar6 != 0) {
      if ((bRam0000000003eb4983 & 1) == 0) {
        func_0x00f78a20(0x3d1b5e0,uVar4,0);
        bRam0000000003eb4983 = 1;
      }
      plVar5 = (long *)(lVar6 + 0x18);
      lVar6 = *plVar5;
      while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar6,uVar4,0), plVar2 == (long *)0x0 ||
             (*plVar2 == /*System.Action<MapSequenceBehaviour.TimelineEvent>_TypeInfo*/ lRam0000000003d1b5e0))) {
        lVar3 = func_0x00ff0f44(plVar5,plVar2,lVar6);
        bVar1 = lVar6 == lVar3;
        lVar6 = lVar3;
        if (bVar1) {
          return lVar3;
        }
      }
      lVar6 = func_0x00f78e5c(plVar2);
      return *(long *)(lVar6 + 0x20);
    }
  }
  lVar6 = func_0x00f78af4();
  *(undefined8 *)(lVar6 + 0x78) = 0;
  *(undefined8 *)(lVar6 + 0x80) = 0;
  *(undefined8 *)(lVar6 + 0x88) = 0;
  return lVar6;
}



// ============================================================
// RVA: 0x15b9b44 | Atlas.Contexts.IntroSequencePlayerPanState.OnDeInit
// ============================================================

void Atlas_Contexts_IntroSequencePlayerPanState__OnDeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  return;
}



// ============================================================
// RVA: 0x15b9b50 | Atlas.Contexts.IntroSequencePlayerPanState.TriggerVO
// ============================================================

/* WARNING: Possible PIC construction at 0x0145b65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b8c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ba64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe408: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145c1dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0145bdac) */
/* WARNING: Removing unreachable block (ram,0x0145bdb0) */
/* WARNING: Removing unreachable block (ram,0x014fe40c) */
/* WARNING: Removing unreachable block (ram,0x014fe374) */
/* WARNING: Removing unreachable block (ram,0x014fe3e4) */
/* WARNING: Removing unreachable block (ram,0x014fe384) */
/* WARNING: Removing unreachable block (ram,0x0145ba68) */
/* WARNING: Removing unreachable block (ram,0x0145ba6c) */
/* WARNING: Removing unreachable block (ram,0x0145b924) */
/* WARNING: Removing unreachable block (ram,0x0145b8cc) */
/* WARNING: Removing unreachable block (ram,0x0145b8d0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e8) */
/* WARNING: Removing unreachable block (ram,0x0145b8ec) */
/* WARNING: Removing unreachable block (ram,0x0145b8f0) */
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
/* WARNING: Removing unreachable block (ram,0x0145b660) */
/* WARNING: Removing unreachable block (ram,0x0145b664) */
/* WARNING: Removing unreachable block (ram,0x0145bf54) */
/* WARNING: Removing unreachable block (ram,0x0145bf58) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Contexts_IntroSequencePlayerPanState__TriggerVO
                (undefined1 param_1 [16],uint param_2,undefined4 param_3,ulong param_4,int param_5,
                int param_6)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  ulong *puVar4;
  ulong *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined4 *puVar12;
  ulong uVar13;
  ulong extraout_x1;
  long lVar14;
  ulong extraout_x1_00;
  long lVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 unaff_x23;
  long lVar23;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar24;
  undefined8 *******pppppppuVar25;
  undefined *puVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  ulong extraout_d0;
  uint uVar31;
  undefined4 uVar32;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  long lStack_298;
  undefined8 *******pppppppuStack_290;
  undefined *puStack_288;
  ulong uStack_280;
  ulong uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  ulong uStack_260;
  long lStack_258;
  undefined8 *******pppppppuStack_250;
  undefined *puStack_248;
  ulong uStack_240;
  ulong uStack_238;
  undefined8 *******pppppppuStack_1f0;
  undefined *puStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  undefined8 *******pppppppuStack_190;
  undefined *puStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  long lStack_168;
  undefined8 *******pppppppuStack_160;
  undefined *puStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  long lStack_138;
  undefined8 *******pppppppuStack_130;
  undefined *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 *******pppppppuStack_70;
  undefined *puStack_68;
  
  if (param_5 != 0) {
    return param_4;
  }
  uVar13 = *(ulong *)(param_4 + 0x90);
  if (uVar13 == 0) {
    uVar13 = func_0x00f78af4();
    return uVar13;
  }
  puVar5 = (ulong *)&stack0xffffffffffffffa0;
  uVar7 = uVar13;
  if ((bRam0000000003eb47de & 1) == 0) {
    func_0x00f78a20(0x3d1ff28,0);
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    uVar7 = func_0x00f78a20(0x3d24b48);
    bRam0000000003eb47de = 1;
  }
  lVar18 = *(long *)(uVar13 + 0x48);
  if ((lVar18 == 0) || (uVar19 = *(ulong *)(uVar13 + 0x28), uVar19 == 0)) {
    return uVar7;
  }
  lVar23 = lVar18;
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar23 = *(long *)(uVar13 + 0x48);
    if (lVar23 == 0) {
      auVar33 = func_0x00f78af4();
      uVar7 = auVar33._8_8_;
      uVar19 = auVar33._0_8_;
      puVar4 = (ulong *)&stack0xffffffffffffff40;
      puStack_68 = &Atlas_Audio_AtlasAudioManager__SpeakOvertake;
      uVar22 = 0x3eb4000;
      uVar13 = uVar19;
      pppppppuStack_70 = (undefined8 *******)&stack0xfffffffffffffff0;
      if ((bRam0000000003eb47df & 1) == 0) {
        uVar13 = func_0x00f78a20(0x3d1ff28);
        bRam0000000003eb47df = 1;
      }
      if (*(int *)(uVar19 + 0x50) != 0) {
        return uVar13;
      }
      lVar18 = *(long *)(uVar19 + 0x68);
      if (lVar18 == 0) {
        return uVar13;
      }
      if ((int)(*(uint *)(lVar18 + 0x18) - 1) <= param_6) {
        return uVar13;
      }
      if ((uint)((long)param_6 + 1) < *(uint *)(lVar18 + 0x18)) {
        lVar18 = *(long *)(lVar18 + ((long)param_6 + 1) * 8 + 0x20);
        if (((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x10), lVar18 == 0)) || (uVar7 == 0)) {
code_r0x0145b92c:
          func_0x00f78af4();
          goto code_r0x0145b930;
        }
        uVar13 = *(ulong *)(lVar18 + 0x70);
        uVar9 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(uVar7,0);
        if ((uVar9 & 1) == 0) {
          if (uVar13 == 0) goto code_r0x0145b92c;
          uVar9 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(uVar13,0);
          if ((int)uVar9 == 0) {
            return uVar9;
          }
        }
        if (((*(long *)(uVar7 + 0xb8) == 0) ||
            (uVar27 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(uVar7 + 0xb8),0), uVar13 == 0)) ||
           (*(long *)(uVar13 + 0xb8) == 0)) goto code_r0x0145b92c;
        unaff_d9 = (ulong)param_2;
        uVar31 = param_2;
        uVar32 = param_3;
        uVar28 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(uVar13 + 0xb8),0);
        fVar29 = (float)/*UnityEngine.Vector3$$Distance*/ func_0x0327bcbc(uVar27,param_2,param_3,uVar28,uVar31,uVar32,0);
        unaff_x23 = 0x3d1ff28;
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar18 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8);
        if (*(float *)(lVar18 + 0x31c) <= fVar29 || uVar13 == uVar7) {
          return /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
        }
        fVar29 = *(float *)(uVar19 + 0x74);
        unaff_d8 = (ulong)(uint)fVar29;
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar18 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8);
        }
        if (fVar29 < *(float *)(lVar18 + 0x318)) {
          return /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
        }
        uVar22 = *(ulong *)(uVar19 + 0x28);
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (uVar22 == 0) goto code_r0x0145b92c;
        lVar15 = *(long *)(uVar7 + 0xb8);
        uVar28 = *(undefined4 *)(uVar7 + 0x180);
        lVar23 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x378);
        uVar32 = 4;
        lVar18 = lVar23;
        uVar19 = uVar22;
        pppppppuVar24 = &pppppppuStack_70;
        puVar26 = &UNK_0145b8cc;
        uVar27 = 0;
      }
      else {
code_r0x0145b930:
        uVar8 = func_0x00f78b24();
        auVar33 = func_0x00f78ac0(uVar8,0);
        lVar18 = auVar33._8_8_;
        uVar13 = auVar33._0_8_;
        puVar5 = &uStack_120;
        puStack_c8 = &Atlas_Audio_AtlasAudioManager__SpeakRespawning;
        uVar19 = 0x3eb4000;
        uStack_120 = unaff_d9;
        uStack_118 = unaff_d8;
        pppppppuStack_d0 = &pppppppuStack_70;
        if ((bRam0000000003eb47e0 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d3bf08);
          func_0x00f78a20(0x3d3bf00);
          func_0x00f78a20(0x3d1de10);
          func_0x00f78a20(0x3d24b48);
          bRam0000000003eb47e0 = 1;
        }
        if (lVar18 != 0) {
          uVar7 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar18,0);
          lVar23 = 0x28;
          if ((int)uVar7 == 0) {
            lVar23 = 0x30;
          }
          uVar19 = *(ulong *)(uVar13 + lVar23);
          if (uVar19 == 0) {
            return uVar7;
          }
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (*(long *)(uVar13 + 0x48) != 0) {
            uVar20 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350);
            uVar21 = *(undefined8 *)(*(long *)(uVar13 + 0x48) + 0xb8);
            uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar8,uRam0000000003d3bf00);
            uVar13 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
            puVar26 = &UNK_0145ba68;
            pppppppuVar25 = &pppppppuStack_d0;
            goto code_r0x014fe3e8;
          }
        }
        uVar7 = func_0x00f78af4();
        uStack_150 = uVar22;
        uStack_148 = uVar13;
        uStack_140 = uVar19;
        lStack_138 = lVar18;
        pppppppuStack_130 = &pppppppuStack_d0;
        puStack_128 = &Atlas_Audio_AtlasAudioManager__SpeakShield;
        uVar13 = uVar7;
        if ((bRam0000000003eb47e1 & 1) == 0) {
          uVar13 = func_0x00f78a20(0x3d1ff28);
          bRam0000000003eb47e1 = 1;
        }
        lVar18 = *(long *)(uVar7 + 0x48);
        if (lVar18 == 0) {
          return uVar13;
        }
        uVar22 = *(ulong *)(uVar7 + 0x28);
        lVar16 = lVar18;
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) == 0) ||
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) != 0)) {
joined_r0x0145bba8:
          auVar33._8_8_ = lVar18;
          auVar33._0_8_ = lStack_138;
          if (uVar22 != 0) {
            lVar23 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350);
            lVar18 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310);
            lVar15 = *(long *)(lVar16 + 0xb8);
            uVar28 = *(undefined4 *)(lVar16 + 0x180);
            uVar32 = 1;
            puVar4 = &uStack_120;
            uVar7 = uStack_140;
            uVar13 = uStack_148;
            uVar19 = uStack_150;
            pppppppuVar24 = pppppppuStack_130;
            puVar26 = puStack_128;
            uVar27 = _UNK_033f813c;
            goto code_r0x014fe2a8;
          }
        }
        else {
          func_0x00f78ad0();
          lVar16 = *(long *)(uVar7 + 0x48);
          if (lVar16 != 0) goto joined_r0x0145bba8;
        }
        auVar34 = func_0x00f78af4();
        lVar23 = auVar34._8_8_;
        uStack_180 = 0x3d1ff28;
        puStack_158 = &Atlas_Audio_AtlasAudioManager__SpeakOffRoad;
        uStack_178 = uVar7;
        uStack_170 = uVar22;
        lStack_168 = lVar18;
        pppppppuStack_160 = &pppppppuStack_130;
        if ((bRam0000000003eb47e2 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          bRam0000000003eb47e2 = 1;
        }
        if (lVar23 != 0) {
          uVar13 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar23,0);
          if ((int)uVar13 == 0) {
            return uVar13;
          }
          uVar22 = *(ulong *)(auVar34._0_8_ + 0x28);
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          auVar33._8_8_ = lVar23;
          auVar33._0_8_ = lStack_168;
          lVar16 = *(long *)(auVar34._0_8_ + 0x48);
          if ((lVar16 != 0) && (uVar22 != 0)) {
            lVar23 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350);
            lVar18 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310);
            lVar15 = *(long *)(lVar16 + 0xb8);
            uVar28 = *(undefined4 *)(lVar16 + 0x180);
            uVar27 = 0;
            uVar32 = 3;
            puVar4 = &uStack_150;
            uVar7 = uStack_170;
            uVar13 = uStack_178;
            uVar19 = uStack_180;
            pppppppuVar24 = pppppppuStack_160;
            puVar26 = puStack_158;
            goto code_r0x014fe2a8;
          }
        }
        auVar33 = func_0x00f78af4();
        lVar18 = auVar33._8_8_;
        puVar5 = &uStack_1e0;
        puStack_188 = &Atlas_Audio_AtlasAudioManager__SpeakSneer;
        uStack_1e0 = unaff_d9;
        uStack_1d8 = unaff_d8;
        pppppppuStack_190 = &pppppppuStack_160;
        if ((bRam0000000003eb47e3 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d3bf08);
          func_0x00f78a20(0x3d3bf00);
          func_0x00f78a20(0x3d1de10);
          func_0x00f78a20(0x3d24b48);
          bRam0000000003eb47e3 = 1;
        }
        if (lVar18 != 0) {
          uVar13 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar18,0);
          lVar23 = 0x28;
          if ((int)uVar13 == 0) {
            lVar23 = 0x30;
          }
          uVar19 = *(ulong *)(auVar33._0_8_ + lVar23);
          if (uVar19 == 0) {
            return uVar13;
          }
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar23 = *(long *)(auVar33._0_8_ + 0x48);
          if (lVar23 != 0) {
            uVar20 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350);
            uVar21 = *(undefined8 *)(lVar23 + 0xb8);
            uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar8,uRam0000000003d3bf00);
            uVar13 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
            puVar26 = &UNK_0145bdac;
            pppppppuVar25 = &pppppppuStack_190;
            goto code_r0x014fe3e8;
          }
        }
        auVar34 = func_0x00f78af4();
        lVar18 = auVar34._8_8_;
        lVar23 = auVar34._0_8_;
        puVar5 = &uStack_240;
        puStack_1e8 = &Atlas_Audio_AtlasAudioManager__SpeakIncoming;
        pppppppuVar25 = &pppppppuStack_1f0;
        uVar19 = 0x3eb4000;
        uStack_240 = unaff_d9;
        uStack_238 = unaff_d8;
        pppppppuStack_1f0 = &pppppppuStack_190;
        if ((bRam0000000003eb47e4 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d3bf08);
          func_0x00f78a20(0x3d3bf00);
          func_0x00f78a20(0x3d1de10);
          func_0x00f78a20(0x3d24b48);
          bRam0000000003eb47e4 = 1;
        }
        if (lVar18 != 0) {
          uVar13 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar18,0);
          lVar15 = 0x28;
          if ((int)uVar13 == 0) {
            lVar15 = 0x30;
          }
          uVar19 = *(ulong *)(lVar23 + lVar15);
          if (uVar19 == 0) {
            return uVar13;
          }
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (*(long *)(lVar23 + 0x48) != 0) {
            uVar20 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350);
            uVar21 = *(undefined8 *)(*(long *)(lVar23 + 0x48) + 0xb8);
            uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar8,uRam0000000003d3bf00);
            uVar13 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
            puVar26 = &UNK_0145bf54;
            goto code_r0x014fe3e8;
          }
        }
        lVar15 = func_0x00f78af4();
        auVar33._8_8_ = extraout_x1;
        auVar33._0_8_ = lVar15;
        puVar4 = &uStack_280;
        uStack_270 = 0x3d1ff28;
        puStack_248 = &Atlas_Audio_AtlasAudioManager__RandomAISpeech;
        pppppppuVar24 = &pppppppuStack_250;
        uStack_280 = unaff_d9;
        uStack_278 = unaff_d8;
        uStack_260 = uVar19;
        pppppppuStack_250 = pppppppuVar25;
        if ((bRam0000000003eb47e5 & 1) == 0) {
          lStack_268 = lVar23;
          lStack_258 = lVar18;
          func_0x00f78a20(0x3d1ff28);
          auVar34._8_8_ = lStack_258;
          auVar34._0_8_ = lStack_268;
          bRam0000000003eb47e5 = 1;
        }
        lStack_258 = auVar34._8_8_;
        lStack_268 = auVar34._0_8_;
        unaff_d8 = extraout_d0 & 0xffffffff;
        if (extraout_x1 == 0) {
code_r0x0145c21c:
          lStack_258 = auVar34._8_8_;
          lStack_268 = auVar34._0_8_;
          fVar29 = (float)func_0x00f78af4();
          puStack_288 = &Atlas_Audio_AtlasAudioManager__SetMusicVolume;
          uStack_2b0 = unaff_d9;
          uStack_2a8 = unaff_d8;
          uStack_2a0 = extraout_x1;
          lStack_298 = lVar15;
          pppppppuStack_290 = pppppppuVar24;
          if ((bRam0000000003eb47e6 & 1) == 0) {
            func_0x00f78a20(0x3d1ff28);
            func_0x00f78a20(0x3d24568);
            bRam0000000003eb47e6 = 1;
          }
          if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uStack_2b8 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
          if (((*(byte *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          fVar30 = _UNK_033f8148;
          if (fVar29 != 0.0) {
            fVar30 = fVar29;
          }
          fVar29 = INFINITY;
          if (fVar30 != -INFINITY) {
            fVar29 = ABS(SQRT(fVar30));
          }
          uVar13 = /*FMOD.Studio.System$$setParameterByName*/ func_0x016f69b4(fVar29,&uStack_2b8,
                                   *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x388),1
                                   ,0);
          return uVar13;
        }
        iVar6 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(extraout_x1,0);
        if ((iVar6 != 0) && (uVar13 = /*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(extraout_x1,0), (int)uVar13 == 0)) {
          return uVar13;
        }
        auVar34._8_8_ = lStack_258;
        auVar34._0_8_ = lStack_268;
        if (*(long *)(lVar15 + 0x30) == 0) goto code_r0x0145c21c;
        uVar13 = /*Atlas.Audio.SpeechManager$$IsPlaying*/ func_0x014ff334(*(long *)(lVar15 + 0x30),0);
        if (((uVar13 & 1) != 0) || (*(int *)(lVar15 + 0x50) != 1)) {
          return uVar13;
        }
        uVar19 = 0x3d1ff28;
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar18 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8);
        if (*(float *)(lVar18 + 0x30) <= (float)extraout_d0) {
          return /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
        }
        if (0.0 <= *(float *)(lVar15 + 0x88)) {
          return /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
        }
        if (*(char *)(extraout_x1 + 0x38) == '\0') {
          return /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
        }
        fVar29 = *(float *)(lVar15 + 0x8c);
        unaff_d8 = (ulong)(uint)fVar29;
        uVar13 = /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
          uVar13 = func_0x00f78ad0();
          lVar18 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8);
        }
        if (fVar29 <= *(float *)(lVar18 + 800)) {
          return uVar13;
        }
        iVar6 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,3,0);
        if (iVar6 == 2) {
          uVar22 = *(ulong *)(lVar15 + 0x30);
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          auVar2._8_8_ = lStack_258;
          auVar2._0_8_ = lStack_268;
          auVar34._8_8_ = lStack_258;
          auVar34._0_8_ = lStack_268;
          lVar16 = *(long *)(lVar15 + 0x48);
          if ((lVar16 == 0) || (auVar34 = auVar2, uVar22 == 0)) goto code_r0x0145c21c;
          lVar23 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350);
          lVar18 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310);
          lVar15 = *(long *)(lVar16 + 0xb8);
          uVar28 = *(undefined4 *)(lVar16 + 0x180);
          uVar27 = 0x3f800000;
        }
        else if (iVar6 == 1) {
          uVar22 = *(ulong *)(lVar15 + 0x30);
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          auVar34._8_8_ = lStack_258;
          auVar34._0_8_ = lStack_268;
          if (uVar22 == 0) goto code_r0x0145c21c;
          lVar15 = *(long *)(extraout_x1 + 0xb8);
          uVar28 = *(undefined4 *)(extraout_x1 + 0x180);
          lVar23 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x378);
          uVar27 = 0;
          lVar18 = lVar23;
        }
        else {
          if (iVar6 != 0) {
            if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar13 = /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
            *(undefined4 *)(lVar15 + 0x88) =
                 *(undefined4 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x34);
            return uVar13;
          }
          uVar22 = *(ulong *)(lVar15 + 0x30);
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          auVar34._8_8_ = lStack_258;
          auVar34._0_8_ = lStack_268;
          if (uVar22 == 0) goto code_r0x0145c21c;
          lVar15 = *(long *)(extraout_x1 + 0xb8);
          uVar28 = *(undefined4 *)(extraout_x1 + 0x180);
          lVar23 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x378);
          uVar27 = 0;
          lVar18 = lVar23;
        }
        uVar32 = 4;
        puVar26 = &UNK_0145c1e0;
        uVar7 = extraout_x1;
        uVar13 = uVar22;
      }
code_r0x014fe2a8:
      auVar35._8_8_ = auVar33._8_8_;
      auVar35._0_8_ = uVar22;
      *(ulong *)((long)puVar4 + -0x70) = unaff_d9;
      *(ulong *)((long)puVar4 + -0x68) = unaff_d8;
      *(undefined8 *)((long)puVar4 + -0x60) = unaff_x28;
      *(undefined8 *)((long)puVar4 + -0x58) = unaff_x27;
      *(undefined8 *)((long)puVar4 + -0x50) = unaff_x26;
      *(undefined8 *)((long)puVar4 + -0x48) = unaff_x25;
      *(undefined8 *)((long)puVar4 + -0x40) = 0x3d1ff28;
      *(undefined8 *)((long)puVar4 + -0x38) = unaff_x23;
      *(ulong *)((long)puVar4 + -0x30) = uVar19;
      *(ulong *)((long)puVar4 + -0x28) = uVar13;
      *(ulong *)((long)puVar4 + -0x20) = uVar7;
      *(long *)((long)puVar4 + -0x18) = auVar33._0_8_;
      *(undefined8 ********)((long)puVar4 + -0x10) = pppppppuVar24;
      *(undefined **)((long)puVar4 + -8) = puVar26;
      if ((bRam0000000003eb4cd9 & 1) == 0) {
        func_0x00f78a20(0x3d3bf08);
        func_0x00f78a20(0x3d3bf00);
        func_0x00f78a20(0x3d1de10);
        func_0x00f78a20(0x3d24b48);
        bRam0000000003eb4cd9 = 1;
      }
      if (lVar18 != 0) {
        uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar8,uRam0000000003d3bf00);
        uVar13 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
        return uVar13;
      }
      piVar17 = (int *)0x0;
      uVar8 = *(undefined8 *)((long)puVar4 + -0x50);
      uVar21 = *(undefined8 *)((long)puVar4 + -0x48);
      uVar20 = *(undefined8 *)((long)puVar4 + -0x60);
      uVar1 = *(undefined8 *)((long)puVar4 + -0x58);
      *(undefined8 *)((long)puVar4 + -0x50) = *(undefined8 *)((long)puVar4 + -0x70);
      *(undefined8 *)((long)puVar4 + -0x48) = *(undefined8 *)((long)puVar4 + -0x68);
      *(undefined8 *)((long)puVar4 + -0x40) = *(undefined8 *)((long)puVar4 + -0x40);
      *(undefined8 *)((long)puVar4 + -0x38) = *(undefined8 *)((long)puVar4 + -0x38);
      *(undefined8 *)((long)puVar4 + -0x30) = *(undefined8 *)((long)puVar4 + -0x30);
      *(undefined8 *)((long)puVar4 + -0x28) = *(undefined8 *)((long)puVar4 + -0x28);
      *(undefined8 *)((long)puVar4 + -0x20) = *(undefined8 *)((long)puVar4 + -0x20);
      *(undefined8 *)((long)puVar4 + -0x18) = *(undefined8 *)((long)puVar4 + -0x18);
      *(undefined8 *)((long)puVar4 + -0x10) = *(undefined8 *)((long)puVar4 + -0x10);
      *(undefined8 *)((long)puVar4 + -8) = *(undefined8 *)((long)puVar4 + -8);
      *(undefined4 *)((long)puVar4 + -0x54) = uVar32;
      lVar18 = lVar23;
      lVar16 = lVar15;
      if ((bRam0000000003eb4cda & 1) == 0) {
        func_0x00f78a20(uVar28,uVar27,0x3d3da38);
        bRam0000000003eb4cda = 1;
      }
      if (*(char *)(uVar22 + 0x34) == '\0') {
code_r0x014fe49c:
        piVar17 = (int *)((long)puVar4 + -0x54);
        lVar16 = 0;
        puVar26 = &UNK_014fe4b4;
        lVar18 = lVar23;
      }
      else {
        if (*(long *)(uVar22 + 0x10) != 0) {
          if (*(char *)(*(long *)(uVar22 + 0x10) + 0xcb) == '\0') {
            return 0;
          }
          goto code_r0x014fe49c;
        }
        puVar26 = &Atlas_Audio_SpeechManager__CheckSpeechRules;
        auVar35 = func_0x00f78af4();
      }
      lVar14 = auVar35._8_8_;
      lVar10 = auVar35._0_8_;
      *(undefined8 *)((long)puVar4 + -0xc0) = uVar20;
      *(undefined8 *)((long)puVar4 + -0xb8) = uVar1;
      *(undefined8 *)((long)puVar4 + -0xb0) = uVar8;
      *(undefined8 *)((long)puVar4 + -0xa8) = uVar21;
      *(undefined8 *)((long)puVar4 + -0xa0) = 0x3eb4000;
      *(long *)((long)puVar4 + -0x98) = auVar33._8_8_;
      *(long *)((long)puVar4 + -0x90) = lVar23;
      *(ulong *)((long)puVar4 + -0x88) = uVar22;
      *(long *)((long)puVar4 + -0x80) = lVar15;
      *(undefined8 *)((long)puVar4 + -0x78) = 0;
      *(undefined1 **)((long)puVar4 + -0x70) = (undefined1 *)((long)puVar4 + -0x10);
      *(undefined **)((long)puVar4 + -0x68) = puVar26;
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
      *(undefined8 *)((long)puVar4 + -0xe0) = 0;
      *(undefined8 *)((long)puVar4 + -0xd8) = 0;
      *(undefined8 *)((long)puVar4 + -0xd0) = 0;
      *(undefined4 *)((long)puVar4 + -0xe4) = 0;
      if (*(long *)(lVar10 + 0x10) == 0) goto code_r0x014fe8f8;
      if (*(char *)(*(long *)(lVar10 + 0x10) + 0x90) != '\0') {
        return 0;
      }
      if (lVar14 == 0) goto code_r0x014fe8f8;
      uVar13 = /*Atlas.Audio.KartAudio$$IsFarAI*/ func_0x015c1344(lVar14,0);
      if ((uVar13 & 1) != 0) {
        return 0;
      }
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar18,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350)
                              ,0);
      if (iVar6 != 0) {
        if (lVar16 == 0) goto code_r0x014fe8f8;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)puVar4 + -0x100),lVar16,uRam0000000003d3bf10);
        *(undefined8 *)((long)puVar4 + -0xd8) = *(undefined8 *)((long)puVar4 + -0xf8);
        *(undefined8 *)((long)puVar4 + -0xe0) = *(undefined8 *)((long)puVar4 + -0x100);
        *(undefined8 *)((long)puVar4 + -0xd0) = *(undefined8 *)((long)puVar4 + -0xf0);
        while (uVar13 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)puVar4 + -0xe0),uRam0000000003d32f58),
              (uVar13 & 1) != 0) {
          lVar23 = *(long *)((long)puVar4 + -0xd0);
          if (lVar23 == 0) {
            func_0x00f78af4();
            goto code_r0x014fe900;
          }
          uVar8 = *(undefined8 *)(lVar23 + 0x10);
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar13 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar8,*(undefined8 *)
                                          (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310),0);
          if ((uVar13 & 1) != 0) {
            fVar30 = *(float *)(lVar23 + 0x18);
            fVar29 = -fVar30;
            if (fVar30 != INFINITY) {
              fVar29 = fVar30;
            }
            *(int *)((long)puVar4 + -0xe4) = (int)fVar29;
            plVar11 = (long *)func_0x00f78ae0(/*Atlas.Audio.AtlasAudioManager.RaceEvent_TypeInfo*/ uRam0000000003d269f8,
                                              (undefined1 *)((long)puVar4 + -0xe4));
            if (plVar11 == (long *)0x0) goto code_r0x014fe8fc;
            uVar8 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
            puVar12 = (undefined4 *)func_0x00f78ae4(plVar11);
            *(undefined4 *)((long)puVar4 + -0xe4) = *puVar12;
            lVar18 = /*System.String$$Concat*/ func_0x029bdb88(lVar18,uVar8,0);
          }
        }
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)puVar4 + -0xe0),uRam0000000003d32f50);
      }
      if (*(long *)(lVar10 + 0x28) == 0) goto code_r0x014fe8f8;
      iVar6 = /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$ContainsKey*/ func_0x01ef3924(*(long *)(lVar10 + 0x28),lVar18,uRam0000000003d30020);
      if (iVar6 == 0) {
code_r0x014fe888:
        uVar13 = 1;
      }
      else {
        if (*(long *)(lVar10 + 0x28) == 0) goto code_r0x014fe8f8;
        /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$get_Item*/ func_0x01ef35d0(*(long *)(lVar10 + 0x28),lVar18,uRam0000000003d30028);
        if ((extraout_x1_00 & 0xff00000000) == 0) {
          if (*piVar17 - 1U < 2) {
            iVar6 = 4;
            goto code_r0x014fe860;
          }
        }
        else {
          iVar6 = 1;
code_r0x014fe860:
          *piVar17 = iVar6;
        }
        iVar6 = (int)extraout_x1_00;
        if (iVar6 == 3) {
          if ((*(long *)(lVar14 + 0xa0) == 0) ||
             (lVar18 = *(long *)(*(long *)(lVar14 + 0xa0) + 0x90), lVar18 == 0)) {
code_r0x014fe8f8:
            func_0x00f78af4();
code_r0x014fe8fc:
            func_0x00f78af4();
code_r0x014fe900:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x14fe904);
            (*pcVar3)();
          }
          iVar6 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar18,0);
          if (1 < iVar6) {
            iVar6 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,4,0);
            return (ulong)(iVar6 < 3);
          }
          uVar13 = 2;
        }
        else {
          uVar13 = extraout_x1_00;
          if (iVar6 != 2) {
            if (iVar6 == 0) {
              uVar13 = /*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(lVar14,0);
              return uVar13;
            }
            goto code_r0x014fe888;
          }
        }
        iVar6 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar13,0);
        uVar13 = (ulong)(iVar6 == 0);
      }
      return uVar13;
    }
  }
  uVar20 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350);
  uVar21 = *(undefined8 *)(lVar23 + 0xb8);
  uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar8,uRam0000000003d3bf00);
  uVar13 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
  puVar26 = &UNK_0145b660;
  pppppppuVar25 = (undefined8 *******)&stack0xfffffffffffffff0;
code_r0x014fe3e8:
  *(undefined8 *)((long)puVar5 + -0x30) = uVar21;
  *(undefined8 *)((long)puVar5 + -0x28) = uVar20;
  *(ulong *)((long)puVar5 + -0x20) = uVar19;
  *(long *)((long)puVar5 + -0x18) = lVar18;
  *(undefined8 ********)((long)puVar5 + -0x10) = pppppppuVar25;
  *(undefined **)((long)puVar5 + -8) = puVar26;
  return uVar13;
}



// ============================================================
// RVA: 0x15b9b7c | Atlas.Contexts.IntroSequencePlayerPanState..ctor
// ============================================================

void Atlas_Contexts_IntroSequencePlayerPanState___ctor(void)

{
  return;
}



