// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Usables.SuperShieldUsableBehaviour

// ============================================================
// RVA: 0x1505d04 | Atlas.Gameplay.Usables.SuperShieldUsableBehaviour.ResetAndStart
// ============================================================

void Atlas_Gameplay_Usables_SuperShieldUsableBehaviour__ResetAndStart(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  undefined8 unaff_x21;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 unaff_x22;
  undefined8 ***pppuVar17;
  code *pcVar18;
  undefined1 auVar19 [16];
  long lStack_50;
  long lStack_48;
  undefined8 **ppuStack_40;
  code *pcStack_38;
  ulong uVar16;
  
  lVar13 = 0x3eb4000;
  if ((bRam0000000003eb4d1a & 1) == 0) {
    func_0x00f78a20(0x3d24ea0);
    bRam0000000003eb4d1a = 1;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar14 = 0x3d24ea0;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(param_1 + 0x50),1,0);
    lVar13 = *(long *)(param_1 + 0x60);
    if (((*(ushort *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x21 = 0x3d24ea0;
    if (lVar13 != 0) {
      /*UnityEngine.Animator$$ResetTrigger*/ func_0x0320d96c(lVar13,**(undefined4 **)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8),0);
      if (*(long *)(param_1 + 0x60) != 0) {
        /*UnityEngine.Animator$$ResetTrigger*/ func_0x0320d96c(*(long *)(param_1 + 0x60),
                        *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8) + 4),0);
        unaff_x21 = uVar14;
        if (*(long *)(param_1 + 0x60) != 0) {
          /*UnityEngine.Animator$$ResetTrigger*/ func_0x0320d96c(*(long *)(param_1 + 0x60),
                          *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8) + 0xc),0);
          if (*(long *)(param_1 + 0x60) != 0) {
            /*UnityEngine.Animator$$ResetTrigger*/ func_0x0320d96c(*(long *)(param_1 + 0x60),
                            *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8) + 8),0);
            if (*(long *)(param_1 + 0x58) != 0) {
              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(param_1 + 0x58),0,0);
              *(undefined1 *)(param_1 + 0x68) = 0;
              return;
            }
          }
        }
      }
    }
  }
  lVar6 = func_0x00f78af4();
  pcStack_38 = Atlas_Gameplay_Usables_SuperShieldUsable__OnEnterPool;
  *(undefined8 *)(lVar6 + 0xd0) = 0;
  lStack_50 = lVar13;
  lStack_48 = param_1;
  ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
  /*Atlas.Gameplay.Usables.Usable$$OnEnterPool*/ func_0x01523e04(lVar6,0);
  lVar13 = lStack_50;
  lVar6 = *(long *)(lVar6 + 0xd8);
  if (lVar6 == 0) {
    return;
  }
  uVar14 = 0;
  plVar4 = &lStack_50;
  pppuVar17 = &ppuStack_40;
  if ((*(char *)(lVar6 + 0x2c) != '\0') && (*(long *)(lVar6 + 0x10) != 0)) {
    /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(lVar6 + 0x10),0,0);
    uVar14 = extraout_x1;
  }
  if (*(long *)(lVar6 + 0x10) != 0) {
    /*Core.Audio.AudioEvent$$DeInit*/ func_0x01638948(*(long *)(lVar6 + 0x10),0);
    uVar14 = extraout_x1_00;
  }
  auVar19._8_8_ = lVar6;
  auVar19._0_8_ = *(long *)(lVar6 + 0x20);
  if (*(long *)(lVar6 + 0x20) == 0) {
    pcVar18 = (code *)&Atlas_Audio_WeaponAudioManager__Deregister;
    auVar19 = func_0x00f78af4(0,uVar14);
  }
  else {
    plVar4 = (long *)&stack0xffffffffffffffd0;
    lVar6 = lStack_48;
    lVar13 = lStack_50;
    pppuVar17 = (undefined8 ***)ppuStack_40;
    pcVar18 = pcStack_38;
  }
  lVar10 = auVar19._8_8_;
  lVar7 = auVar19._0_8_;
  *(undefined8 *)((long)plVar4 + -0x30) = unaff_x22;
  *(undefined8 *)((long)plVar4 + -0x28) = unaff_x21;
  *(long *)((long)plVar4 + -0x20) = lVar13;
  *(long *)((long)plVar4 + -0x18) = lVar6;
  *(undefined8 ****)((long)plVar4 + -0x10) = pppuVar17;
  *(code **)((long)plVar4 + -8) = pcVar18;
  if ((bRam0000000003eb4ea3 & 1) == 0) {
    func_0x00f78a20(0x3d3c948);
    func_0x00f78a20(0x3d3dec0);
    func_0x00f78a20(0x3d3c950);
    func_0x00f78a20(0x3d3dec8);
    func_0x00f78a20(0x3d3ded0);
    bRam0000000003eb4ea3 = 1;
  }
  if (*(long *)(lVar7 + 0x28) != 0) {
    uVar15 = (ulong)*(uint *)(*(long *)(lVar7 + 0x28) + 0x18);
    do {
      uVar16 = uVar15;
      uVar3 = (int)uVar16 - 1;
      uVar15 = (ulong)uVar3;
      if ((int)uVar3 < 0) {
        return;
      }
      lVar13 = *(long *)(lVar7 + 0x28);
      if (lVar13 == 0) goto code_r0x015303f0;
      if (*(uint *)(lVar13 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0x10) + uVar15 * 8 + 0x20);
      if (lVar13 == 0) goto code_r0x015303f0;
    } while (*(long *)(lVar13 + 0x10) != lVar10);
    if (*(long *)(lVar7 + 0x20) != 0) {
      iVar5 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(*(long *)(lVar7 + 0x20),lVar10,uRam0000000003d3c948);
      if (iVar5 != 0) {
        if (*(long *)(lVar7 + 0x20) == 0) goto code_r0x015303f0;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(*(long *)(lVar7 + 0x20),lVar10,uRam0000000003d3c950);
      }
      lVar13 = *(long *)(lVar7 + 0x28);
      if (lVar13 != 0) {
        uVar14 = *(undefined8 *)((long)plVar4 + -0x30);
        uVar1 = *(undefined8 *)((long)plVar4 + -0x28);
        *(undefined8 *)((long)plVar4 + -0x20) = *(undefined8 *)((long)plVar4 + -0x20);
        *(undefined8 *)((long)plVar4 + -0x18) = *(undefined8 *)((long)plVar4 + -0x18);
        *(undefined8 *)((long)plVar4 + -0x10) = *(undefined8 *)((long)plVar4 + -0x10);
        *(undefined8 *)((long)plVar4 + -8) = *(undefined8 *)((long)plVar4 + -8);
        uVar11 = *(uint *)(lVar13 + 0x18);
        uVar8 = uRam0000000003d3dec0;
        if (uVar11 <= uVar3) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar11 = *(uint *)(lVar13 + 0x18);
        }
        iVar5 = uVar11 - 1;
        *(int *)(lVar13 + 0x18) = iVar5;
        if (iVar5 - uVar3 != 0 && (int)uVar3 <= iVar5) {
          uVar8 = *(undefined8 *)(lVar13 + 0x10);
          /*System.Array$$Copy*/ func_0x0292b4cc(uVar8,uVar16,uVar8,uVar15,iVar5 - uVar3,0);
        }
        lVar6 = *(long *)(lVar13 + 0x10);
        if (lVar6 == 0) {
          func_0x00f78af4();
        }
        else if (*(uint *)(lVar13 + 0x18) < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + (long)(int)*(uint *)(lVar13 + 0x18) * 8 + 0x20) = 0;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          return;
        }
        uVar9 = func_0x00f78b24();
        auVar19 = func_0x00f78ac0(uVar9,0);
        lVar6 = auVar19._0_8_;
        *(undefined8 *)((long)plVar4 + -0x50) = uVar14;
        *(undefined8 *)((long)plVar4 + -0x48) = uVar1;
        *(ulong *)((long)plVar4 + -0x40) = uVar15;
        *(long *)((long)plVar4 + -0x38) = lVar13;
        *(undefined1 **)((long)plVar4 + -0x30) = (undefined1 *)((long)plVar4 + -0x10);
        *(undefined **)((long)plVar4 + -0x28) =
             &System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveRange;
        iVar5 = auVar19._8_4_;
        iVar12 = (int)uVar8;
        if (iVar5 < 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
        }
        if (iVar12 < 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
        }
        if (*(int *)(lVar6 + 0x18) - iVar5 < iVar12) {
          /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
        }
        if (0 < iVar12) {
          iVar2 = *(int *)(lVar6 + 0x18) - iVar12;
          *(int *)(lVar6 + 0x18) = iVar2;
          if (iVar2 - iVar5 != 0 && iVar5 <= iVar2) {
            /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(lVar6 + 0x10),iVar12 + iVar5,
                            *(undefined8 *)(lVar6 + 0x10),auVar19._8_8_,iVar2 - iVar5,0);
            iVar2 = *(int *)(lVar6 + 0x18);
          }
          /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar6 + 0x10),iVar2,uVar8,0);
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        }
        return;
      }
    }
  }
code_r0x015303f0:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1505fb4 | Atlas.Gameplay.Usables.SuperShieldUsableBehaviour.TriggerScale
// ============================================================

void Atlas_Gameplay_Usables_SuperShieldUsableBehaviour__TriggerScale
               (undefined4 param_1,long param_2,undefined1 param_3)

{
  *(undefined1 *)(param_2 + 0x7c) = param_3;
  *(undefined4 *)(param_2 + 0x80) = param_1;
  *(undefined4 *)(param_2 + 0x78) = param_1;
  return;
}



// ============================================================
// RVA: 0x1506754 | Atlas.Gameplay.Usables.SuperShieldUsableBehaviour.TriggerUse
// ============================================================

void Atlas_Gameplay_Usables_SuperShieldUsableBehaviour__TriggerUse(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((bRam0000000003eb4d1d & 1) == 0) {
    func_0x00f78a20(0x3d24ea0);
    bRam0000000003eb4d1d = 1;
  }
  lVar2 = *(long *)(param_1 + 0x60);
  if (((*(ushort *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar2 != 0) {
    /*UnityEngine.Animator$$ResetTrigger*/ func_0x0320d96c(lVar2,*(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8) + 0x10),0);
    lVar2 = *(long *)(param_1 + 0x60);
    if (lVar2 != 0) {
      uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8) + 0x10);
      if (pcRam0000000003ebe460 == (code *)0x0) {
        pcRam0000000003ebe460 =
             (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
      }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003ebe460)(lVar2,uVar1);
      return;
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1506840 | Atlas.Gameplay.Usables.SuperShieldUsableBehaviour.TriggerHit
// ============================================================

/* WARNING: Possible PIC construction at 0x01506978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150697c) */
/* WARNING: Removing unreachable block (ram,0x01506984) */

long Atlas_Gameplay_Usables_SuperShieldUsableBehaviour__TriggerHit(long param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  if ((bRam0000000003eb4d1c & 1) == 0) {
    func_0x00f78a20(0x3d24ea0);
    bRam0000000003eb4d1c = 1;
  }
  lVar3 = *(long *)(param_1 + 0x60);
  if (((*(ushort *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar3 != 0) {
    /*UnityEngine.Animator$$ResetTrigger*/ func_0x0320d96c(lVar3,*(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8) + 8),0);
    lVar3 = *(long *)(param_1 + 0x60);
    if (lVar3 != 0) {
      uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8) + 8);
      puVar2 = (undefined1 *)register0x00000008;
      goto code_r0x0320d82c;
    }
  }
  func_0x00f78af4();
  pcStack_38 = Atlas_Gameplay_Usables_SuperShieldUsable__GetKartTriggerEffectParameters;
  puStack_40 = &stack0xfffffffffffffff0;
  lVar3 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableDefinition();
  if (lVar3 != 0) {
    return *(long *)(lVar3 + 0x68);
  }
  unaff_x19 = func_0x00f78af4();
  puVar2 = &stack0xffffffffffffff90;
  puStack_48 = &Atlas_Gameplay_Usables_SuperShieldUsableBehaviour__TriggerFade;
  unaff_x29 = &puStack_50;
  lVar3 = unaff_x19;
  puStack_50 = (undefined1 *)&puStack_40;
  if ((bRam0000000003eb4d1b & 1) == 0) {
    puStack_50 = (undefined1 *)&puStack_40;
    lVar3 = func_0x00f78a20(0x3d24ea0);
    bRam0000000003eb4d1b = 1;
  }
  if (*(char *)(unaff_x19 + 0x68) != '\0') {
    *(undefined1 *)(unaff_x19 + 0x68) = 1;
    return lVar3;
  }
  lVar3 = *(long *)(unaff_x19 + 0x60);
  unaff_x21 = 0x3d24ea0;
  if (((*(ushort *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar3 == 0) {
    lVar3 = func_0x00f78af4();
    return lVar3;
  }
  uVar1 = **(undefined4 **)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8);
  unaff_x30 = &UNK_0150697c;
  unaff_x20 = lVar3;
code_r0x0320d82c:
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
  *(long *)(puVar2 + -0x20) = unaff_x20;
  *(long *)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 ***)(puVar2 + -0x10) = unaff_x29;
  *(undefined **)(puVar2 + -8) = unaff_x30;
  if (pcRam0000000003ebe460 == (code *)0x0) {
    pcRam0000000003ebe460 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar3 = (*pcRam0000000003ebe460)(lVar3,uVar1);
  return lVar3;
}



// ============================================================
// RVA: 0x1506900 | Atlas.Gameplay.Usables.SuperShieldUsableBehaviour.TriggerFade
// ============================================================

void Atlas_Gameplay_Usables_SuperShieldUsableBehaviour__TriggerFade(long param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb4d1b & 1) == 0) {
    func_0x00f78a20(0x3d24ea0);
    bRam0000000003eb4d1b = 1;
  }
  if (*(char *)(param_1 + 0x68) == '\0') {
    lVar1 = *(long *)(param_1 + 0x60);
    if (((*(ushort *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar1 != 0) {
      /*UnityEngine.Animator$$SetTrigger*/ func_0x0320d82c(lVar1,**(undefined4 **)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8),0);
      if (*(long *)(param_1 + 0x60) != 0) {
        /*UnityEngine.Animator$$ResetTrigger*/ func_0x0320d96c(*(long *)(param_1 + 0x60),
                        *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8) + 0xc),0);
        goto LAB_01506998;
      }
    }
    func_0x00f78af4();
    return;
  }
LAB_01506998:
  *(undefined1 *)(param_1 + 0x68) = 1;
  return;
}



// ============================================================
// RVA: 0x15069bc | Atlas.Gameplay.Usables.SuperShieldUsableBehaviour.get_InHandVFX
// ============================================================

undefined8 Atlas_Gameplay_Usables_SuperShieldUsableBehaviour__get_InHandVFX(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x15069c4 | Atlas.Gameplay.Usables.SuperShieldUsableBehaviour.get_InUseVFX
// ============================================================

undefined8 Atlas_Gameplay_Usables_SuperShieldUsableBehaviour__get_InUseVFX(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x15069cc | Atlas.Gameplay.Usables.SuperShieldUsableBehaviour.Awake
// ============================================================

long Atlas_Gameplay_Usables_SuperShieldUsableBehaviour__Awake
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 extraout_s0;
  float fVar6;
  float fVar7;
  
  lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_4,0);
  if (lVar3 != 0) {
    lVar3 = /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(lVar3,0);
    *(undefined4 *)(param_4 + 0x6c) = extraout_s0;
    *(undefined4 *)(param_4 + 0x70) = param_2;
    *(undefined4 *)(param_4 + 0x74) = param_3;
    *(undefined4 *)(param_4 + 0x78) = 0;
    *(undefined1 *)(param_4 + 0x7c) = 0;
    *(undefined4 *)(param_4 + 0x80) = 0x3e4ccccd;
    return lVar3;
  }
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb4d1e & 1) == 0) {
    func_0x00f78a20(0x3d24ea0);
    bRam0000000003eb4d1e = 1;
  }
  lVar3 = *(long *)(lVar3 + 0x60);
  if (((*(ushort *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar3 != 0) {
    uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8) + 0x1c);
    if (pcRam0000000003ebe318 == (code *)0x0) {
      pcRam0000000003ebe318 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x032109bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*pcRam0000000003ebe318)(0,lVar3,uVar1,0);
    return lVar3;
  }
  lVar3 = func_0x00f78af4();
  fVar7 = *(float *)(lVar3 + 0x78);
  if (fVar7 <= 0.0) {
    return lVar3;
  }
  fVar6 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
  *(float *)(lVar3 + 0x78) = fVar7 - fVar6;
  cVar2 = *(char *)(lVar3 + 0x7c);
  lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar3,0);
  if (cVar2 == '\0') {
    /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    /*UnityEngine.Mathf$$InverseLerp*/ func_0x0323d5e4(*(undefined4 *)(lVar3 + 0x80),0,*(undefined4 *)(lVar3 + 0x78),0);
    /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(0);
    /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(0);
  }
  else {
    /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    /*UnityEngine.Mathf$$InverseLerp*/ func_0x0323d5e4(*(undefined4 *)(lVar3 + 0x80),0,*(undefined4 *)(lVar3 + 0x78),0);
    /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(0);
    /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(0);
  }
  if (lVar4 != 0) {
    if (pcRam0000000003ec19a8 == (code *)0x0) {
      pcRam0000000003ec19a8 =
           (code *)func_0x00f789d4("UnityEngine.Transform::set_localScale_Injected(UnityEngine.Vector3&)"
                                   ,0);
    }
    lVar3 = (*pcRam0000000003ec19a8)(lVar4,&stack0xffffffffffffff80);
    return lVar3;
  }
  lVar3 = func_0x00f78af4();
  *(undefined4 *)(lVar3 + 0x80) = 0x3e4ccccd;
  if ((bRam0000000003eb4e52 & 1) == 0) {
    func_0x00f78a20(0x3d25750,0);
    bRam0000000003eb4e52 = 1;
  }
  uVar5 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent_TypeInfo*/ uRam0000000003d25750);
  /*UnityEngine.Events.UnityEvent$$.ctor*/ func_0x03277ec8(uVar5,0);
  *(undefined8 *)(lVar3 + 0x38) = uVar5;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar3;
}



// ============================================================
// RVA: 0x1506a1c | Atlas.Gameplay.Usables.SuperShieldUsableBehaviour.PlayPowerShieldOff
// ============================================================

long Atlas_Gameplay_Usables_SuperShieldUsableBehaviour__PlayPowerShieldOff(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  if ((bRam0000000003eb4d1e & 1) == 0) {
    func_0x00f78a20(0x3d24ea0);
    bRam0000000003eb4d1e = 1;
  }
  lVar5 = *(long *)(param_1 + 0x60);
  if (((*(ushort *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar5 != 0) {
    uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8) + 0x1c);
    if (pcRam0000000003ebe318 == (code *)0x0) {
      pcRam0000000003ebe318 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x032109bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar5 = (*pcRam0000000003ebe318)(0,lVar5,uVar1,0);
    return lVar5;
  }
  lVar5 = func_0x00f78af4();
  fVar7 = *(float *)(lVar5 + 0x78);
  if (fVar7 <= 0.0) {
    return lVar5;
  }
  fVar6 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
  *(float *)(lVar5 + 0x78) = fVar7 - fVar6;
  cVar2 = *(char *)(lVar5 + 0x7c);
  lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
  if (cVar2 == '\0') {
    /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    /*UnityEngine.Mathf$$InverseLerp*/ func_0x0323d5e4(*(undefined4 *)(lVar5 + 0x80),0,*(undefined4 *)(lVar5 + 0x78),0);
    /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(0);
    /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(0);
  }
  else {
    /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    /*UnityEngine.Mathf$$InverseLerp*/ func_0x0323d5e4(*(undefined4 *)(lVar5 + 0x80),0,*(undefined4 *)(lVar5 + 0x78),0);
    /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(0);
    /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(0);
  }
  if (lVar3 != 0) {
    if (pcRam0000000003ec19a8 == (code *)0x0) {
      pcRam0000000003ec19a8 =
           (code *)func_0x00f789d4("UnityEngine.Transform::set_localScale_Injected(UnityEngine.Vector3&)"
                                   ,0);
    }
    lVar5 = (*pcRam0000000003ec19a8)(lVar3,&stack0xffffffffffffffa0);
    return lVar5;
  }
  lVar5 = func_0x00f78af4();
  *(undefined4 *)(lVar5 + 0x80) = 0x3e4ccccd;
  if ((bRam0000000003eb4e52 & 1) == 0) {
    func_0x00f78a20(0x3d25750,0);
    bRam0000000003eb4e52 = 1;
  }
  uVar4 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent_TypeInfo*/ uRam0000000003d25750);
  /*UnityEngine.Events.UnityEvent$$.ctor*/ func_0x03277ec8(uVar4,0);
  *(undefined8 *)(lVar5 + 0x38) = uVar4;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar5;
}



// ============================================================
// RVA: 0x1506aa8 | Atlas.Gameplay.Usables.SuperShieldUsableBehaviour.Update
// ============================================================

long Atlas_Gameplay_Usables_SuperShieldUsableBehaviour__Update(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *(float *)(param_1 + 0x78);
  if (fVar5 <= 0.0) {
    return param_1;
  }
  fVar4 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
  *(float *)(param_1 + 0x78) = fVar5 - fVar4;
  cVar1 = *(char *)(param_1 + 0x7c);
  lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
  if (cVar1 == '\0') {
    /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    /*UnityEngine.Mathf$$InverseLerp*/ func_0x0323d5e4(*(undefined4 *)(param_1 + 0x80),0,*(undefined4 *)(param_1 + 0x78),0);
    /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(0);
    /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(0);
  }
  else {
    /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    /*UnityEngine.Mathf$$InverseLerp*/ func_0x0323d5e4(*(undefined4 *)(param_1 + 0x80),0,*(undefined4 *)(param_1 + 0x78),0);
    /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(0);
    /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(0);
  }
  if (lVar2 != 0) {
    if (pcRam0000000003ec19a8 == (code *)0x0) {
      pcRam0000000003ec19a8 =
           (code *)func_0x00f789d4("UnityEngine.Transform::set_localScale_Injected(UnityEngine.Vector3&)"
                                   ,0);
    }
    lVar2 = (*pcRam0000000003ec19a8)(lVar2,&stack0xffffffffffffffd0);
    return lVar2;
  }
  lVar2 = func_0x00f78af4();
  *(undefined4 *)(lVar2 + 0x80) = 0x3e4ccccd;
  if ((bRam0000000003eb4e52 & 1) == 0) {
    func_0x00f78a20(0x3d25750,0);
    bRam0000000003eb4e52 = 1;
  }
  uVar3 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent_TypeInfo*/ uRam0000000003d25750);
  /*UnityEngine.Events.UnityEvent$$.ctor*/ func_0x03277ec8(uVar3,0);
  *(undefined8 *)(lVar2 + 0x38) = uVar3;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar2;
}



// ============================================================
// RVA: 0x1506c0c | Atlas.Gameplay.Usables.SuperShieldUsableBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_Usables_SuperShieldUsableBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  *(undefined4 *)(param_1 + 0x80) = 0x3e4ccccd;
  if ((bRam0000000003eb4e52 & 1) == 0) {
    func_0x00f78a20(0x3d25750,0);
    bRam0000000003eb4e52 = 1;
  }
  uVar1 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent_TypeInfo*/ uRam0000000003d25750);
  /*UnityEngine.Events.UnityEvent$$.ctor*/ func_0x03277ec8(uVar1,0);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



// ============================================================
// RVA: 0x1506c20 | Atlas.Gameplay.Usables.SuperShieldUsableBehaviour..cctor
// ============================================================

void Atlas_Gameplay_Usables_SuperShieldUsableBehaviour___cctor(void)

{
  undefined4 uVar1;
  
  if ((bRam0000000003eb4d1f & 1) == 0) {
    func_0x00f78a20(0x3d24ea0);
    func_0x00f78a20(0x3d6cbe8);
    func_0x00f78a20(0x3d6cbe0);
    func_0x00f78a20(0x3d68f80);
    func_0x00f78a20(0x3d68f90);
    func_0x00f78a20(0x3d728a8);
    func_0x00f78a20(0x3d6dd10);
    func_0x00f78a20(0x3d728b0);
    func_0x00f78a20(0x3d68f98);
    bRam0000000003eb4d1f = 1;
  }
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Fading')*/ uRam0000000003d6cbe8,0);
  **(undefined4 **)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('FadeToOn')*/ uRam0000000003d6cbe0,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8) + 4) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('ShieldHit')*/ uRam0000000003d728b0,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8) + 8) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('ShieldDestroy')*/ uRam0000000003d728a8,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8) + 0xc) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('InUse')*/ uRam0000000003d6dd10,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8) + 0x10) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Anim_PowerShieldOff')*/ uRam0000000003d68f80,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8) + 0x14) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Anim_TimeCheatShield_On')*/ uRam0000000003d68f98,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8) + 0x18) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Anim_PowerShieldOff')*/ uRam0000000003d68f80,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8) + 0x1c) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Anim_TimeCheatShield_InUse')*/ uRam0000000003d68f90,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8) + 0x20) = uVar1;
  return;
}



