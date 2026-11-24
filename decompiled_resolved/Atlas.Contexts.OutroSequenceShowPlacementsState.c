// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.OutroSequenceShowPlacementsState

// ============================================================
// RVA: 0x14b5360 | Atlas.Contexts.OutroSequenceShowPlacementsState.get_AutoDriveCameraChangeDelay
// ============================================================

undefined4
Atlas_Contexts_OutroSequenceShowPlacementsState__get_AutoDriveCameraChangeDelay(long param_1)

{
  return *(undefined4 *)(param_1 + 0x108);
}



// ============================================================
// RVA: 0x14b5368 | Atlas.Contexts.OutroSequenceShowPlacementsState.set_AutoDriveCameraChangeDelay
// ============================================================

void Atlas_Contexts_OutroSequenceShowPlacementsState__set_AutoDriveCameraChangeDelay
               (undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x108) = param_1;
  return;
}



// ============================================================
// RVA: 0x14b5370 | Atlas.Contexts.OutroSequenceShowPlacementsState.get_AutoDriveCameraChangeIntervalMin
// ============================================================

undefined4
Atlas_Contexts_OutroSequenceShowPlacementsState__get_AutoDriveCameraChangeIntervalMin(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10c);
}



// ============================================================
// RVA: 0x14b5378 | Atlas.Contexts.OutroSequenceShowPlacementsState.set_AutoDriveCameraChangeIntervalMin
// ============================================================

void Atlas_Contexts_OutroSequenceShowPlacementsState__set_AutoDriveCameraChangeIntervalMin
               (undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x10c) = param_1;
  return;
}



// ============================================================
// RVA: 0x14b5380 | Atlas.Contexts.OutroSequenceShowPlacementsState.get_AutoDriveCameraChangeIntervalMax
// ============================================================

undefined4
Atlas_Contexts_OutroSequenceShowPlacementsState__get_AutoDriveCameraChangeIntervalMax(long param_1)

{
  return *(undefined4 *)(param_1 + 0x110);
}



// ============================================================
// RVA: 0x14b5388 | Atlas.Contexts.OutroSequenceShowPlacementsState.set_AutoDriveCameraChangeIntervalMax
// ============================================================

void Atlas_Contexts_OutroSequenceShowPlacementsState__set_AutoDriveCameraChangeIntervalMax
               (undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x110) = param_1;
  return;
}



// ============================================================
// RVA: 0x14b5390 | Atlas.Contexts.OutroSequenceShowPlacementsState.get_AutoDriveCameraChangePansPrimary
// ============================================================

undefined8
Atlas_Contexts_OutroSequenceShowPlacementsState__get_AutoDriveCameraChangePansPrimary(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



// ============================================================
// RVA: 0x14b5398 | Atlas.Contexts.OutroSequenceShowPlacementsState.set_AutoDriveCameraChangePansPrimary
// ============================================================

undefined8
Atlas_Contexts_OutroSequenceShowPlacementsState__set_AutoDriveCameraChangePansPrimary
          (long param_1,long param_2)

{
  int iVar1;
  float fVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  
  if ((bRam0000000003eb4ab5 & 1) == 0) {
    func_0x00f78a20(0x3d3c320);
    bRam0000000003eb4ab5 = 1;
  }
  *(long *)(param_1 + 0xe8) = param_2;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x18) + -1;
    fVar5 = (float)/*UnityEngine.Random$$get_value*/ func_0x03252940(0,iVar1,0);
    fVar5 = fVar5 * 2.1474836e+09;
    fVar2 = -fVar5;
    if (fVar5 != INFINITY) {
      fVar2 = fVar5;
    }
    *(int *)(param_1 + 0xb8) = iVar1;
    /*Atlas.Maths.RandomWithState$$Init*/ func_0x014e010c(param_1 + 0xc0,(int)fVar2,0);
    uVar3 = /*Atlas.Maths.RandomWithState$$GetValueFromRange*/ func_0x014e01f0(param_1 + 0xc0,0,*(int *)(param_1 + 0xb8) + 1,0);
    *(int *)(param_1 + 0xbc) = (int)uVar3;
    return uVar3;
  }
  lVar4 = func_0x00f78af4();
  return *(undefined8 *)(lVar4 + 0xf0);
}



// ============================================================
// RVA: 0x14b53fc | Atlas.Contexts.OutroSequenceShowPlacementsState.get_AutoDriveCameraChangePansSecondary
// ============================================================

undefined8
Atlas_Contexts_OutroSequenceShowPlacementsState__get_AutoDriveCameraChangePansSecondary
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



// ============================================================
// RVA: 0x14b5404 | Atlas.Contexts.OutroSequenceShowPlacementsState.set_AutoDriveCameraChangePansSecondary
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14b5468 | Atlas.Contexts.OutroSequenceShowPlacementsState.Init
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14b54f8 | Atlas.Contexts.OutroSequenceShowPlacementsState.OnEnter
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14b55c4 | Atlas.Contexts.OutroSequenceShowPlacementsState.OnUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x014b58b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c0828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014b5740: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x014b58b8) */
/* WARNING: Removing unreachable block (ram,0x014b58c4) */
/* WARNING: Removing unreachable block (ram,0x014b5744) */
/* WARNING: Removing unreachable block (ram,0x014b5748) */
/* WARNING: Removing unreachable block (ram,0x014b5750) */
/* WARNING: Removing unreachable block (ram,0x014b5764) */
/* WARNING: Removing unreachable block (ram,0x014b576c) */
/* WARNING: Removing unreachable block (ram,0x014b5774) */
/* WARNING: Removing unreachable block (ram,0x014b577c) */
/* WARNING: Removing unreachable block (ram,0x014b5784) */
/* WARNING: Removing unreachable block (ram,0x014b5790) */
/* WARNING: Removing unreachable block (ram,0x014b5794) */
/* WARNING: Removing unreachable block (ram,0x014b5798) */
/* WARNING: Removing unreachable block (ram,0x014b579c) */
/* WARNING: Removing unreachable block (ram,0x014b57bc) */
/* WARNING: Removing unreachable block (ram,0x014b57c8) */
/* WARNING: Removing unreachable block (ram,0x014b57d4) */
/* WARNING: Removing unreachable block (ram,0x014b57e0) */
/* WARNING: Removing unreachable block (ram,0x014b57ec) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_Contexts_OutroSequenceShowPlacementsState__OnUpdate(ulong param_1,long *param_2)

{
  byte bVar1;
  double dVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined8 *puVar10;
  uint uVar9;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  int extraout_w1;
  undefined8 uVar14;
  undefined1 *puVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  int *piVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  ulong uVar24;
  long unaff_x22;
  undefined8 uVar25;
  undefined8 unaff_x23;
  long lVar26;
  undefined8 uVar27;
  undefined8 unaff_x24;
  undefined8 uVar28;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *******pppppppuVar29;
  undefined1 *puVar30;
  undefined *puVar31;
  float extraout_s0;
  undefined4 uVar32;
  double dVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined8 *******pppppppuStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  puVar7 = auStack_50;
  uVar24 = 0x3eb4000;
  if ((bRam0000000003eb4ab8 & 1) == 0) {
    func_0x00f78a20(0x3d35538);
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d3a678);
    func_0x00f78a20(0x3d3a680);
    bRam0000000003eb4ab8 = 1;
  }
  lStack_48 = 0;
  if (param_2 == (long *)0x0) goto LAB_014b58e4;
  fVar34 = *(float *)(param_1 + 0xa8);
  lVar17 = *param_2;
  uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
  if (uVar19 != 0) {
    piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
        puVar10 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
        goto LAB_014b5688;
      }
      piVar21 = piVar21 + 4;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  puVar10 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
LAB_014b5688:
  uVar19 = (*(code *)*puVar10)(param_2,puVar10[1]);
  *(float *)(param_1 + 0xa8) = fVar34 - extraout_s0;
  if (*(char *)(param_1 + 0xb4) == '\0') {
    if ((*(long *)(param_1 + 0x90) == 0) ||
       (lVar17 = *(long *)(*(long *)(param_1 + 0x90) + 0x10), lVar17 == 0)) goto LAB_014b58e4;
    lVar17 = *(long *)(lVar17 + 0x28);
    puVar31 = &UNK_014b5744;
code_r0x014b58e8:
    puVar7 = &stack0xffffffffffffff80;
    pppppppuVar29 = &pppppppuStack_60;
    pppppppuStack_60 = (undefined8 *******)&stack0xfffffffffffffff0;
    puStack_58 = puVar31;
    if (lVar17 != 0) {
      iVar8 = /*UnityEngine.Playables.PlayableDirector$$get_state*/ func_0x032821bc(lVar17,0);
      if (iVar8 == 1) {
        dVar2 = (double)/*UnityEngine.Playables.PlayableDirector$$get_time*/ func_0x03282af0(lVar17,0);
        dVar33 = (double)/*UnityEngine.Playables.PlayableDirector$$get_duration*/ func_0x03282bc0(lVar17,0);
        uVar24 = (ulong)(dVar33 <= dVar2);
      }
      else {
        uVar24 = 1;
      }
      return uVar24;
    }
    puVar31 = &Atlas_Contexts_OutroSequenceShowPlacementsState__SwitchCameraFocus;
    auVar35 = func_0x00f78af4();
    plVar13 = auVar35._8_8_;
    uVar19 = auVar35._0_8_;
  }
  else {
    if (*(int *)(param_1 + 0xb0) <= *(int *)(param_1 + 0xac)) {
      return uVar19;
    }
    if (0.0 < *(float *)(param_1 + 0xa8)) {
      if ((*(long *)(param_1 + 0xa0) == 0) ||
         (lVar17 = *(long *)(*(long *)(param_1 + 0xa0) + 0x10), lVar17 == 0)) goto LAB_014b58e4;
      uVar19 = Atlas_Gameplay_Kart_KartComposite__get_IsRespawning(lVar17,0);
      if ((int)uVar19 == 0) {
        return uVar19;
      }
    }
    uVar32 = /*UnityEngine.Random$$Range*/ func_0x03252854(*(undefined4 *)(param_1 + 0x10c),*(undefined4 *)(param_1 + 0x110),0);
    *(undefined4 *)(param_1 + 0xa8) = uVar32;
    lVar17 = *(long *)(param_1 + 0x100);
    param_2 = (long *)0x0;
    if (lVar17 == 0) {
LAB_014b58e4:
      puVar31 = &Atlas_PlayableDirectorHelpers__HasPlayableDirectorFinished;
      lVar17 = func_0x00f78af4();
      goto code_r0x014b58e8;
    }
    uVar24 = *(ulong *)(param_1 + 0xa0);
    unaff_x22 = (long)(int)*(uint *)(param_1 + 0xac);
    if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0xac)) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (uVar24 == *(ulong *)(*(long *)(lVar17 + 0x10) + unaff_x22 * 8 + 0x20)) {
      iVar16 = *(int *)(param_1 + 0xb0);
      iVar8 = 0;
      if (*(int *)(param_1 + 0xac) + 1 < iVar16) {
        iVar8 = *(int *)(param_1 + 0xac) + 1;
      }
      *(int *)(param_1 + 0xac) = iVar8;
    }
    else {
      iVar16 = *(int *)(param_1 + 0xb0);
    }
    if (0 < iVar16) {
      param_2 = (long *)0x0;
      uVar24 = (ulong)*(uint *)(param_1 + 0xac);
      do {
        unaff_x22 = *(long *)(param_1 + 0x100);
        if (unaff_x22 == 0) goto LAB_014b58e4;
        if (*(uint *)(unaff_x22 + 0x18) <= (uint)uVar24) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar17 = *(long *)(*(long *)(unaff_x22 + 0x10) + (long)(int)(uint)uVar24 * 8 + 0x20);
        if ((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0x10), lVar17 == 0)) goto LAB_014b58e4;
        iVar8 = Atlas_Gameplay_Kart_KartComposite__get_IsRespawning(lVar17,0);
        if (iVar8 == 0) break;
        uVar9 = 0;
        if (*(int *)(param_1 + 0xac) + 1 < *(int *)(param_1 + 0xb0)) {
          uVar9 = *(int *)(param_1 + 0xac) + 1;
        }
        uVar24 = (ulong)uVar9;
        *(uint *)(param_1 + 0xac) = uVar9;
        uVar9 = (int)param_2 + 1;
        param_2 = (long *)(ulong)uVar9;
      } while ((int)uVar9 < *(int *)(param_1 + 0xb0));
    }
    param_2 = *(long **)(param_1 + 0x100);
    if (param_2 == (long *)0x0) goto LAB_014b58e4;
    uVar24 = (ulong)(int)*(uint *)(param_1 + 0xac);
    if (*(uint *)(param_2 + 3) <= *(uint *)(param_1 + 0xac)) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lStack_48 = *(long *)(param_2[2] + uVar24 * 8 + 0x20);
    plVar13 = &lStack_48;
    puVar31 = &UNK_014b58b8;
    uVar19 = param_1;
    pppppppuVar29 = (undefined8 *******)&stack0xfffffffffffffff0;
  }
  *(undefined8 *)(puVar7 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar7 + -0x38) = unaff_x23;
  *(long *)(puVar7 + -0x30) = unaff_x22;
  *(ulong *)(puVar7 + -0x28) = uVar24;
  *(long **)(puVar7 + -0x20) = param_2;
  *(ulong *)(puVar7 + -0x18) = param_1;
  *(undefined8 ********)(puVar7 + -0x10) = pppppppuVar29;
  *(undefined **)(puVar7 + -8) = puVar31;
  uVar24 = uVar19;
  if ((bRam0000000003eb4aba & 1) == 0) {
    func_0x00f78a20(0x3d3c320);
    func_0x00f78a20(0x3d3c328);
    uVar24 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb4aba = 1;
  }
  bVar1 = *(byte *)(uVar19 + 0xf8);
  lVar17 = uVar19 + 0xd0;
  if (bVar1 != 0) {
    lVar17 = uVar19 + 0xb8;
  }
  lVar26 = 0xf0;
  if (bVar1 != 0) {
    lVar26 = 0xe8;
  }
  lVar26 = *(long *)(uVar19 + lVar26);
  *(byte *)(uVar19 + 0xf8) = bVar1 ^ 1;
  if (lVar26 == 0) goto code_r0x014b5b48;
  if (*(int *)(lVar26 + 0x18) < 1) {
    return uVar24;
  }
  lVar20 = *(long *)(uVar19 + 0xa0);
  lVar18 = *plVar13;
  if (lVar20 != lVar18) {
    if (lVar20 != 0) {
      uVar25 = *(undefined8 *)(lVar20 + 0xf8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar24 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar25,0);
      if ((int)uVar24 != 0) {
        if ((*(long *)(uVar19 + 0xa0) == 0) ||
           (lVar18 = *(long *)(*(long *)(uVar19 + 0xa0) + 0xf8), lVar18 == 0))
        goto code_r0x014b5b48;
        uVar24 = /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar18,0,0);
      }
      lVar18 = *plVar13;
    }
    if (lVar18 == 0) {
      return uVar24;
    }
    *(long *)(uVar19 + 0xa0) = lVar18;
    uVar25 = *(undefined8 *)(lVar18 + 0xf8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar25,0);
    if (iVar8 != 0) {
      if ((*(long *)(uVar19 + 0xa0) == 0) ||
         (lVar18 = *(long *)(*(long *)(uVar19 + 0xa0) + 0xf8), lVar18 == 0)) goto code_r0x014b5b48;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar18,1,0);
    }
    if ((*plVar13 == 0) || (lVar18 = *(long *)(*plVar13 + 0x10), lVar18 == 0))
    goto code_r0x014b5b48;
    lVar20 = *(long *)(uVar19 + 0x98);
    lVar18 = Atlas_Gameplay_Kart_KartComposite__get_KartPhysicsRootObject(lVar18,0);
    if ((lVar18 == 0) || (uVar25 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar18,0), lVar20 == 0)) goto code_r0x014b5b48;
    /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar20,uVar25,0,0);
  }
  uVar9 = /*Atlas.Maths.NiceRandomSelection$$SelectNext*/ func_0x014b0d94(lVar17,0);
  lVar17 = *(long *)(uVar19 + 0x90);
  if (*(uint *)(lVar26 + 0x18) <= uVar9) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  if (lVar17 != 0) {
    uVar14 = *(undefined8 *)(*(long *)(lVar26 + 0x10) + (long)(int)uVar9 * 8 + 0x20);
    plVar11 = *(long **)(puVar7 + -0x20);
    puVar22 = *(undefined1 **)(puVar7 + -0x18);
    uVar25 = *(undefined8 *)(puVar7 + -0x30);
    plVar13 = *(long **)(puVar7 + -0x28);
    auVar35._8_8_ = plVar13;
    auVar35._0_8_ = plVar11;
    uVar28 = *(undefined8 *)(puVar7 + -0x40);
    uVar27 = *(undefined8 *)(puVar7 + -0x38);
    *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
    *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
    if (*(long *)(lVar17 + 0x10) == 0) {
      lVar17 = func_0x00f78af4(lVar17,uVar14,0);
      *(undefined1 **)(puVar7 + -0x20) = puVar7 + -0x10;
      *(undefined **)(puVar7 + -0x18) = &Atlas_Maps_MapSequenceController__StopActiveTimeline;
      if (*(long *)(lVar17 + 0x10) != 0) {
        auVar36._8_8_ = 0;
        auVar36._0_8_ = *(ulong *)(*(long *)(lVar17 + 0x10) + 0x28);
        puVar5 = puVar7 + -0x10;
        puVar30 = *(undefined1 **)(puVar7 + -0x20);
        puVar31 = *(undefined **)(puVar7 + -0x18);
        goto code_r0x014c037c;
      }
      uVar24 = func_0x00f78af4();
      return uVar24;
    }
    auVar35._8_8_ = uVar14;
    auVar35._0_8_ = *(undefined8 *)(*(long *)(lVar17 + 0x10) + 0x28);
    puVar15 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    puVar30 = *(undefined1 **)(puVar7 + -0x10);
    puVar31 = *(undefined **)(puVar7 + -8);
    puVar23 = puVar22;
code_r0x014c0808:
    auVar36._8_8_ = puVar15;
    auVar36._0_8_ = auVar35._0_8_;
    puVar5 = puVar7 + -0x30;
    *(undefined8 *)(puVar7 + -0x30) = uVar25;
    *(long **)(puVar7 + -0x28) = plVar13;
    *(long **)(puVar7 + -0x20) = plVar11;
    *(undefined1 **)(puVar7 + -0x18) = puVar23;
    *(undefined1 **)(puVar7 + -0x10) = puVar30;
    *(undefined **)(puVar7 + -8) = puVar31;
    puVar30 = puVar7 + -0x10;
    puVar31 = &UNK_014c082c;
    puVar22 = puVar15;
code_r0x014c037c:
    plVar13 = auVar35._8_8_;
    auVar3._8_8_ = auVar35._0_8_;
    auVar3._0_8_ = puVar22;
    lVar17 = auVar36._0_8_;
    puVar6 = puVar5 + -0x20;
    *(long *)(puVar5 + -0x20) = auVar35._0_8_;
    *(undefined1 **)(puVar5 + -0x18) = puVar22;
    *(undefined1 **)(puVar5 + -0x10) = puVar30;
    *(undefined **)(puVar5 + -8) = puVar31;
    puVar22 = puVar5 + -0x10;
    if (lVar17 == 0) {
code_r0x014c03e4:
      puVar31 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirectorActivations;
      lVar17 = func_0x00f78af4();
    }
    else {
      /*UnityEngine.Playables.PlayableDirector$$Stop*/ func_0x03282c40(lVar17,0);
      /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(lVar17,0);
      /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar17,0);
      if (auVar36._8_4_ != 0) {
        lVar26 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar17,0);
        auVar3 = auVar36;
        if (lVar26 == 0) goto code_r0x014c03e4;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar26,0,0);
      }
      puVar22 = *(undefined1 **)(puVar5 + -0x10);
      puVar31 = *(undefined **)(puVar5 + -8);
      auVar3._8_8_ = *(undefined8 *)(puVar5 + -0x20);
      auVar3._0_8_ = *(undefined8 *)(puVar5 + -0x18);
      puVar6 = puVar5;
    }
    *(undefined8 *)(puVar6 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar6 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar6 + -0x40) = uVar28;
    *(undefined8 *)(puVar6 + -0x38) = uVar27;
    *(undefined8 *)(puVar6 + -0x30) = uVar25;
    *(long **)(puVar6 + -0x28) = plVar13;
    *(long *)(puVar6 + -0x20) = auVar3._8_8_;
    *(long *)(puVar6 + -0x18) = auVar3._0_8_;
    *(undefined1 **)(puVar6 + -0x10) = puVar22;
    *(undefined **)(puVar6 + -8) = puVar31;
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
    if (lVar17 != 0) {
      uVar25 = 0x3d23990;
      plVar11 = (long *)/*UnityEngine.Playables.PlayableDirector$$get_playableAsset*/ func_0x0328235c(lVar17,0);
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
      uVar24 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar11,0);
      if ((int)uVar24 == 0) {
        return uVar24;
      }
      if ((plVar11 != (long *)0x0) &&
         (plVar11 = (long *)/*UnityEngine.Timeline.TimelineAsset$$GetOutputTracks*/ func_0x031fab88(plVar11,0), plVar11 != (long *)0x0)) {
        lVar26 = *plVar11;
        uVar24 = (ulong)*(ushort *)(lVar26 + 0x12a);
        if (uVar24 != 0) {
          piVar21 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == /*System.Collections.Generic.IEnumerable<TrackAsset>_TypeInfo*/ lRam0000000003d1d180) {
              puVar10 = (undefined8 *)(lVar26 + (long)*piVar21 * 0x10 + 0x138);
              goto code_r0x014c0568;
            }
            piVar21 = piVar21 + 4;
            uVar24 = uVar24 - 1;
          } while (uVar24 != 0);
        }
        puVar15 = (undefined1 *)0x0;
        puVar10 = (undefined8 *)func_0x00fac1f0(plVar11);
code_r0x014c0568:
        plVar11 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
        if (plVar11 != (long *)0x0) {
          uVar27 = 0x3d22180;
          uVar28 = 0x3d1d390;
          unaff_x25 = 0x3d1faa8;
          unaff_x26 = 0x3d21b60;
code_r0x014c059c:
          lVar26 = *plVar11;
          uVar24 = (ulong)*(ushort *)(lVar26 + 0x12a);
          if (uVar24 != 0) {
            piVar21 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar10 = (undefined8 *)(lVar26 + (long)*piVar21 * 0x10 + 0x138);
                goto code_r0x014c05e8;
              }
              piVar21 = piVar21 + 4;
              uVar24 = uVar24 - 1;
            } while (uVar24 != 0);
          }
          puVar15 = (undefined1 *)0x0;
          puVar10 = (undefined8 *)func_0x00fac1f0(plVar11);
code_r0x014c05e8:
          uVar24 = (*(code *)*puVar10)(plVar11,puVar10[1]);
          if ((uVar24 & 1) != 0) {
            lVar26 = *plVar11;
            uVar24 = (ulong)*(ushort *)(lVar26 + 0x12a);
            if (uVar24 != 0) {
              piVar21 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == /*System.Collections.Generic.IEnumerator<TrackAsset>_TypeInfo*/ lRam0000000003d1d390) {
                  puVar10 = (undefined8 *)(lVar26 + (long)*piVar21 * 0x10 + 0x138);
                  goto code_r0x014c0644;
                }
                piVar21 = piVar21 + 4;
                uVar24 = uVar24 - 1;
              } while (uVar24 != 0);
            }
            puVar15 = (undefined1 *)0x0;
            puVar10 = (undefined8 *)func_0x00fac1f0(plVar11);
code_r0x014c0644:
            plVar12 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
            if (plVar12 != (long *)0x0) {
              if ((*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) <= *(byte *)(*plVar12 + 300)) &&
                 (*(long *)(*(long *)(*plVar12 + 200) +
                            (ulong)*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) * 8 + -8) ==
                  /*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8)) {
                plVar13 = (long *)/*UnityEngine.Playables.PlayableDirector$$GetGenericBinding*/ func_0x03282f5c(lVar17,plVar12,0);
                if (plVar13 == (long *)0x0) {
                  plVar13 = (long *)0x0;
                }
                else if (*plVar13 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60) {
                  plVar13 = (long *)0x0;
                }
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                puVar15 = (undefined1 *)0x0;
                uVar24 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar13,0);
                if ((uVar24 & 1) != 0) {
                  if (plVar13 == (long *)0x0) goto code_r0x014c0778;
                  puVar15 = (undefined1 *)0x0;
                  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(plVar13,0);
                }
              }
            }
            goto code_r0x014c059c;
          }
          puVar23 = (undefined1 *)0x0;
          do {
            if (plVar11 != (long *)0x0) {
              lVar17 = *plVar11;
              uVar24 = (ulong)*(ushort *)(lVar17 + 0x12a);
              if (uVar24 != 0) {
                piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar10 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
                    goto code_r0x014c074c;
                  }
                  piVar21 = piVar21 + 4;
                  uVar24 = uVar24 - 1;
                } while (uVar24 != 0);
              }
              puVar15 = (undefined1 *)0x0;
              puVar10 = (undefined8 *)func_0x00fac1f0(plVar11);
code_r0x014c074c:
              uVar24 = (*(code *)*puVar10)(plVar11,puVar10[1]);
            }
            if (puVar23 == (undefined1 *)0x0) {
              return uVar24;
            }
            func_0x00f78ac0(puVar23,0);
            if (extraout_w1 != 1) goto code_r0x014c07cc;
            puVar10 = (undefined8 *)___cxa_begin_catch();
            puVar23 = (undefined1 *)*puVar10;
            uVar24 = ___cxa_end_catch();
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
code_r0x014b5b48:
  uVar24 = func_0x00f78af4();
  return uVar24;
code_r0x014c07cc:
  auVar35 = __Unwind_Resume();
  puVar22 = auVar35._0_8_;
  puVar7 = puVar6 + -0x70;
  puVar5 = puVar6 + -0x70;
  *(long **)(puVar6 + -0x70) = plVar11;
  *(undefined1 **)(puVar6 + -0x68) = puVar23;
  *(undefined1 **)(puVar6 + -0x60) = puVar6 + -0x10;
  *(undefined **)(puVar6 + -0x58) = &Atlas_PlayableDirectorHelpers__ChangeTimelineAndPlay;
  puVar30 = puVar6 + -0x60;
  if (puVar22 == (undefined1 *)0x0) goto code_r0x014c0804;
  /*UnityEngine.Playables.PlayableDirector$$set_playableAsset*/ func_0x03282440(puVar22,auVar35._8_8_,0);
  auVar35._8_8_ = plVar13;
  auVar35._0_8_ = *(undefined8 *)(puVar6 + -0x70);
  *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)(puVar6 + -0x70);
  *(undefined8 *)(puVar6 + -0x68) = *(undefined8 *)(puVar6 + -0x68);
  *(undefined8 *)(puVar6 + -0x60) = *(undefined8 *)(puVar6 + -0x60);
  *(undefined8 *)(puVar6 + -0x58) = *(undefined8 *)(puVar6 + -0x58);
  puVar30 = puVar6 + -0x60;
  if ((int)puVar15 == 0) {
    if (puVar22 != (undefined1 *)0x0) goto code_r0x014c034c;
  }
  else if ((puVar22 != (undefined1 *)0x0) && (lVar17 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(puVar22,0), lVar17 != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar17,1,0);
code_r0x014c034c:
    /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(puVar22,0);
    /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(puVar22,0);
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
    uVar24 = (*pcRam0000000003ec1b90)(puVar22);
    return uVar24;
  }
  puVar31 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirector;
  auVar36 = func_0x00f78af4();
  goto code_r0x014c037c;
code_r0x014c0804:
  puVar31 = &Atlas_PlayableDirectorHelpers__ResetThenChangeTimelineAndPlay;
  auVar35 = func_0x00f78af4();
  goto code_r0x014c0808;
}



// ============================================================
// RVA: 0x14b5950 | Atlas.Contexts.OutroSequenceShowPlacementsState.SwitchCameraFocus
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

void Atlas_Contexts_OutroSequenceShowPlacementsState__SwitchCameraFocus(long param_1,long *param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  undefined8 *puVar9;
  int extraout_w1;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined1 *unaff_x19;
  long lVar15;
  undefined1 *puVar16;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar17;
  undefined8 unaff_x23;
  long lVar18;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  auVar21._8_8_ = unaff_x21;
  auVar21._0_8_ = unaff_x20;
  if ((bRam0000000003eb4aba & 1) == 0) {
    func_0x00f78a20(0x3d3c320);
    func_0x00f78a20(0x3d3c328);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4aba = 1;
  }
  bVar1 = *(byte *)(param_1 + 0xf8);
  lVar15 = param_1 + 0xd0;
  if (bVar1 != 0) {
    lVar15 = param_1 + 0xb8;
  }
  lVar18 = 0xf0;
  if (bVar1 != 0) {
    lVar18 = 0xe8;
  }
  lVar18 = *(long *)(param_1 + lVar18);
  *(byte *)(param_1 + 0xf8) = bVar1 ^ 1;
  if (lVar18 == 0) goto LAB_014b5b48;
  if (*(int *)(lVar18 + 0x18) < 1) {
    return;
  }
  lVar12 = *(long *)(param_1 + 0xa0);
  lVar11 = *param_2;
  if (lVar12 != lVar11) {
    if (lVar12 != 0) {
      uVar17 = *(undefined8 *)(lVar12 + 0xf8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar17,0);
      if (iVar6 != 0) {
        if ((*(long *)(param_1 + 0xa0) == 0) ||
           (lVar11 = *(long *)(*(long *)(param_1 + 0xa0) + 0xf8), lVar11 == 0)) goto LAB_014b5b48;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar11,0,0);
      }
      lVar11 = *param_2;
    }
    if (lVar11 == 0) {
      return;
    }
    *(long *)(param_1 + 0xa0) = lVar11;
    uVar17 = *(undefined8 *)(lVar11 + 0xf8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar17,0);
    if (iVar6 != 0) {
      if ((*(long *)(param_1 + 0xa0) == 0) ||
         (lVar11 = *(long *)(*(long *)(param_1 + 0xa0) + 0xf8), lVar11 == 0)) goto LAB_014b5b48;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar11,1,0);
    }
    if ((*param_2 == 0) || (lVar11 = *(long *)(*param_2 + 0x10), lVar11 == 0)) goto LAB_014b5b48;
    lVar12 = *(long *)(param_1 + 0x98);
    lVar11 = Atlas_Gameplay_Kart_KartComposite__get_KartPhysicsRootObject(lVar11,0);
    if ((lVar11 == 0) || (uVar17 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar11,0), lVar12 == 0)) goto LAB_014b5b48;
    /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar12,uVar17,0,0);
  }
  uVar7 = /*Atlas.Maths.NiceRandomSelection$$SelectNext*/ func_0x014b0d94(lVar15,0);
  lVar15 = *(long *)(param_1 + 0x90);
  if (*(uint *)(lVar18 + 0x18) <= uVar7) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  if (lVar15 != 0) {
    uVar17 = *(undefined8 *)(*(long *)(lVar18 + 0x10) + (long)(int)uVar7 * 8 + 0x20);
    puVar16 = &stack0xfffffffffffffff0;
    if (*(long *)(lVar15 + 0x10) == 0) {
      lVar15 = func_0x00f78af4(lVar15,uVar17,0);
      if (*(long *)(lVar15 + 0x10) == 0) {
        func_0x00f78af4();
        return;
      }
      auVar20._8_8_ = 0;
      auVar20._0_8_ = *(ulong *)(*(long *)(lVar15 + 0x10) + 0x28);
      puVar4 = &stack0xfffffffffffffff0;
      puVar19 = &Atlas_Maps_MapSequenceController__StopActiveTimeline;
      goto code_r0x014c037c;
    }
    auVar21._8_8_ = uVar17;
    auVar21._0_8_ = *(undefined8 *)(*(long *)(lVar15 + 0x10) + 0x28);
    puVar10 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    puVar16 = unaff_x19;
code_r0x014c0808:
    auVar20._8_8_ = puVar10;
    auVar20._0_8_ = auVar21._0_8_;
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = puVar16;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    puVar16 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar19 = &UNK_014c082c;
    unaff_x19 = puVar10;
code_r0x014c037c:
    unaff_x21 = auVar21._8_8_;
    auVar2._8_8_ = auVar21._0_8_;
    auVar2._0_8_ = unaff_x19;
    lVar15 = auVar20._0_8_;
    puVar5 = puVar4 + -0x20;
    *(long *)(puVar4 + -0x20) = auVar21._0_8_;
    *(undefined1 **)(puVar4 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x10) = puVar16;
    *(undefined **)(puVar4 + -8) = puVar19;
    puVar16 = puVar4 + -0x10;
    if (lVar15 == 0) {
code_r0x014c03e4:
      puVar19 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirectorActivations;
      lVar15 = func_0x00f78af4();
    }
    else {
      /*UnityEngine.Playables.PlayableDirector$$Stop*/ func_0x03282c40(lVar15,0);
      /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(lVar15,0);
      /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar15,0);
      if (auVar20._8_4_ != 0) {
        lVar18 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar15,0);
        auVar2 = auVar20;
        if (lVar18 == 0) goto code_r0x014c03e4;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar18,0,0);
      }
      puVar16 = *(undefined1 **)(puVar4 + -0x10);
      puVar19 = *(undefined **)(puVar4 + -8);
      auVar2._8_8_ = *(undefined8 *)(puVar4 + -0x20);
      auVar2._0_8_ = *(undefined8 *)(puVar4 + -0x18);
      puVar5 = puVar4;
    }
    *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar5 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar5 + -0x30) = unaff_x22;
    *(long **)(puVar5 + -0x28) = unaff_x21;
    *(long *)(puVar5 + -0x20) = auVar2._8_8_;
    *(long *)(puVar5 + -0x18) = auVar2._0_8_;
    *(undefined1 **)(puVar5 + -0x10) = puVar16;
    *(undefined **)(puVar5 + -8) = puVar19;
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
    if (lVar15 != 0) {
      unaff_x22 = 0x3d23990;
      plVar8 = (long *)/*UnityEngine.Playables.PlayableDirector$$get_playableAsset*/ func_0x0328235c(lVar15,0);
      if (plVar8 == (long *)0x0) {
code_r0x014c04b4:
        plVar8 = (long *)0x0;
      }
      else {
        if (*(byte *)(*plVar8 + 300) < *(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300)) goto code_r0x014c04b4;
        if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300) * 8 +
                     -8) != /*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280) {
          plVar8 = (long *)0x0;
        }
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar10 = (undefined1 *)0x0;
      iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar8,0);
      if (iVar6 == 0) {
        return;
      }
      if ((plVar8 != (long *)0x0) &&
         (plVar8 = (long *)/*UnityEngine.Timeline.TimelineAsset$$GetOutputTracks*/ func_0x031fab88(plVar8,0), plVar8 != (long *)0x0)) {
        lVar18 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar18 + 0x12a);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == /*System.Collections.Generic.IEnumerable<TrackAsset>_TypeInfo*/ lRam0000000003d1d180) {
              puVar9 = (undefined8 *)(lVar18 + (long)*piVar14 * 0x10 + 0x138);
              goto code_r0x014c0568;
            }
            piVar14 = piVar14 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined1 *)0x0;
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar8);
code_r0x014c0568:
        unaff_x20 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
        if (unaff_x20 != (long *)0x0) {
          unaff_x23 = 0x3d22180;
          unaff_x24 = 0x3d1d390;
          unaff_x25 = 0x3d1faa8;
          unaff_x26 = 0x3d21b60;
code_r0x014c059c:
          lVar18 = *unaff_x20;
          uVar13 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar9 = (undefined8 *)(lVar18 + (long)*piVar14 * 0x10 + 0x138);
                goto code_r0x014c05e8;
              }
              piVar14 = piVar14 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined1 *)0x0;
          puVar9 = (undefined8 *)func_0x00fac1f0(unaff_x20);
code_r0x014c05e8:
          uVar13 = (*(code *)*puVar9)(unaff_x20,puVar9[1]);
          if ((uVar13 & 1) != 0) {
            lVar18 = *unaff_x20;
            uVar13 = (ulong)*(ushort *)(lVar18 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == /*System.Collections.Generic.IEnumerator<TrackAsset>_TypeInfo*/ lRam0000000003d1d390) {
                  puVar9 = (undefined8 *)(lVar18 + (long)*piVar14 * 0x10 + 0x138);
                  goto code_r0x014c0644;
                }
                piVar14 = piVar14 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            puVar10 = (undefined1 *)0x0;
            puVar9 = (undefined8 *)func_0x00fac1f0(unaff_x20);
code_r0x014c0644:
            plVar8 = (long *)(*(code *)*puVar9)(unaff_x20,puVar9[1]);
            if (plVar8 != (long *)0x0) {
              if ((*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) <= *(byte *)(*plVar8 + 300)) &&
                 (*(long *)(*(long *)(*plVar8 + 200) +
                            (ulong)*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) * 8 + -8) ==
                  /*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8)) {
                unaff_x21 = (long *)/*UnityEngine.Playables.PlayableDirector$$GetGenericBinding*/ func_0x03282f5c(lVar15,plVar8,0);
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
                uVar13 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0);
                if ((uVar13 & 1) != 0) {
                  if (unaff_x21 == (long *)0x0) goto code_r0x014c0778;
                  puVar10 = (undefined1 *)0x0;
                  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(unaff_x21,0);
                }
              }
            }
            goto code_r0x014c059c;
          }
          puVar16 = (undefined1 *)0x0;
          do {
            if (unaff_x20 != (long *)0x0) {
              lVar15 = *unaff_x20;
              uVar13 = (ulong)*(ushort *)(lVar15 + 0x12a);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                    puVar9 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
                    goto code_r0x014c074c;
                  }
                  piVar14 = piVar14 + 4;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              puVar10 = (undefined1 *)0x0;
              puVar9 = (undefined8 *)func_0x00fac1f0(unaff_x20);
code_r0x014c074c:
              (*(code *)*puVar9)(unaff_x20,puVar9[1]);
            }
            if (puVar16 == (undefined1 *)0x0) {
              return;
            }
            func_0x00f78ac0(puVar16,0);
            if (extraout_w1 != 1) goto code_r0x014c07cc;
            puVar9 = (undefined8 *)___cxa_begin_catch();
            puVar16 = (undefined1 *)*puVar9;
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
    pcVar3 = (code *)SoftwareBreakpoint(1,0x14c0788);
    (*pcVar3)();
  }
LAB_014b5b48:
  func_0x00f78af4();
  return;
code_r0x014c07cc:
  auVar21 = __Unwind_Resume();
  unaff_x19 = auVar21._0_8_;
  register0x00000008 = (BADSPACEBASE *)(puVar5 + -0x70);
  puVar4 = puVar5 + -0x70;
  *(long **)(puVar5 + -0x70) = unaff_x20;
  *(undefined1 **)(puVar5 + -0x68) = puVar16;
  *(undefined1 **)(puVar5 + -0x60) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -0x58) = &Atlas_PlayableDirectorHelpers__ChangeTimelineAndPlay;
  unaff_x29 = puVar5 + -0x60;
  if (unaff_x19 == (undefined1 *)0x0) goto code_r0x014c0804;
  /*UnityEngine.Playables.PlayableDirector$$set_playableAsset*/ func_0x03282440(unaff_x19,auVar21._8_8_,0);
  auVar21._8_8_ = unaff_x21;
  auVar21._0_8_ = *(undefined8 *)(puVar5 + -0x70);
  *(undefined8 *)(puVar5 + -0x70) = *(undefined8 *)(puVar5 + -0x70);
  *(undefined8 *)(puVar5 + -0x68) = *(undefined8 *)(puVar5 + -0x68);
  *(undefined8 *)(puVar5 + -0x60) = *(undefined8 *)(puVar5 + -0x60);
  *(undefined8 *)(puVar5 + -0x58) = *(undefined8 *)(puVar5 + -0x58);
  puVar16 = puVar5 + -0x60;
  if ((int)puVar10 == 0) {
    if (unaff_x19 != (undefined1 *)0x0) goto code_r0x014c034c;
  }
  else if ((unaff_x19 != (undefined1 *)0x0) && (lVar15 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x19,0), lVar15 != 0))
  {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar15,1,0);
code_r0x014c034c:
    /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(unaff_x19,0);
    /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(unaff_x19,0);
    *(undefined8 *)(puVar5 + -0x70) = *(undefined8 *)(puVar5 + -0x70);
    *(undefined8 *)(puVar5 + -0x68) = *(undefined8 *)(puVar5 + -0x68);
    *(undefined8 *)(puVar5 + -0x60) = *(undefined8 *)(puVar5 + -0x60);
    *(undefined8 *)(puVar5 + -0x58) = *(undefined8 *)(puVar5 + -0x58);
    if (pcRam0000000003ec1b90 == (code *)0x0) {
      pcRam0000000003ec1b90 =
           (code *)func_0x00f789d4("UnityEngine.Playables.PlayableDirector::Play()");
    }
                    /* WARNING: Could not recover jumptable at 0x0328295c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ec1b90)(unaff_x19);
    return;
  }
  puVar19 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirector;
  auVar20 = func_0x00f78af4();
  goto code_r0x014c037c;
code_r0x014c0804:
  unaff_x30 = &Atlas_PlayableDirectorHelpers__ResetThenChangeTimelineAndPlay;
  auVar21 = func_0x00f78af4();
  goto code_r0x014c0808;
}



// ============================================================
// RVA: 0x14b5b4c | Atlas.Contexts.OutroSequenceShowPlacementsState.OnExit
// ============================================================

void Atlas_Contexts_OutroSequenceShowPlacementsState__OnExit(void)

{
  return;
}



// ============================================================
// RVA: 0x14b5b50 | Atlas.Contexts.OutroSequenceShowPlacementsState.OnDeInit
// ============================================================

void Atlas_Contexts_OutroSequenceShowPlacementsState__OnDeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  return;
}



// ============================================================
// RVA: 0x14b5b64 | Atlas.Contexts.OutroSequenceShowPlacementsState.OnResultsUpdated
// ============================================================

void Atlas_Contexts_OutroSequenceShowPlacementsState__OnResultsUpdated(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined1 auStack_88 [40];
  int iStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb4ab9 & 1) == 0) {
    func_0x00f78a20(0x3d3a660);
    func_0x00f78a20(0x3d3a668);
    func_0x00f78a20(0x3d3a678);
    func_0x00f78a20(0x3d3fe80);
    func_0x00f78a20(0x3d3fe88);
    bRam0000000003eb4ab9 = 1;
  }
  if ((*(long *)(param_1 + 0x100) != 0) &&
     (/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_1 + 0x100),uRam0000000003d3a668), param_2 != 0)) {
    iVar1 = /*System.Collections.ObjectModel.ReadOnlyCollection<NetworkResultsStanding>$$get_Count*/ func_0x0278b5c0(param_2,uRam0000000003d3fe80);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        iVar2 = /*System.Collections.ObjectModel.ReadOnlyCollection<NetworkResultsStanding>$$get_Count*/ func_0x0278b5c0(param_2,uRam0000000003d3fe80);
        iVar1 = iVar1 + 1;
        if (0 < iVar2) {
          iVar2 = 0;
          do {
            /*System.Collections.ObjectModel.ReadOnlyCollection<NetworkResultsStanding>$$get_Item*/ func_0x0278b654(auStack_88,param_2,iVar2,uRam0000000003d3fe88);
            if (iStack_60 == iVar1) {
              lVar4 = *(long *)(param_1 + 0x100);
              /*System.Collections.ObjectModel.ReadOnlyCollection<NetworkResultsStanding>$$get_Item*/ func_0x0278b654(auStack_88,param_2,iVar2,uRam0000000003d3fe88);
              if (lVar4 == 0) goto LAB_014b5ce4;
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar4,uStack_58,uRam0000000003d3a660);
            }
            iVar2 = iVar2 + 1;
            iVar3 = /*System.Collections.ObjectModel.ReadOnlyCollection<NetworkResultsStanding>$$get_Count*/ func_0x0278b5c0(param_2,uRam0000000003d3fe80);
          } while (iVar2 < iVar3);
        }
        iVar2 = /*System.Collections.ObjectModel.ReadOnlyCollection<NetworkResultsStanding>$$get_Count*/ func_0x0278b5c0(param_2,uRam0000000003d3fe80);
      } while (iVar1 < iVar2);
    }
    if (*(long *)(param_1 + 0x100) != 0) {
      *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(*(long *)(param_1 + 0x100) + 0x18);
      return;
    }
  }
LAB_014b5ce4:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14b5ce8 | Atlas.Contexts.OutroSequenceShowPlacementsState..ctor
// ============================================================

void Atlas_Contexts_OutroSequenceShowPlacementsState___ctor(void)

{
  return;
}



