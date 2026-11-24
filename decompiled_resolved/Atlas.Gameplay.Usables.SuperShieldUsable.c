// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Usables.SuperShieldUsable

// ============================================================
// RVA: 0x150595c | Atlas.Gameplay.Usables.SuperShieldUsable.get_SuperShieldUsableDefinition
// ============================================================

void Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableDefinition
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if ((bRam0000000003eb4d11 & 1) == 0) {
    func_0x00f78a20(0x3d24ea8);
    bRam0000000003eb4d11 = 1;
  }
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    lVar2 = **(long **)(param_1 + 0x30);
    if ((*(byte *)(lVar2 + 300) < *(byte *)(/*Atlas.Definitions.SuperShieldUsableDefinition_TypeInfo*/ lRam0000000003d24ea8 + 300)) ||
       (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.SuperShieldUsableDefinition_TypeInfo*/ lRam0000000003d24ea8 + 300) * 8 + -8) !=
        /*Atlas.Definitions.SuperShieldUsableDefinition_TypeInfo*/ lRam0000000003d24ea8)) {
      lVar2 = func_0x00f78e5c();
      if ((bRam0000000003eb4d12 & 1) == 0) {
        func_0x00f78a20(0x3d24ea0);
        bRam0000000003eb4d12 = 1;
      }
      if (*(long **)(lVar2 + 0x48) != (long *)0x0) {
        lVar2 = **(long **)(lVar2 + 0x48);
        if ((*(byte *)(lVar2 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 300)) ||
           (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 300) * 8 + -8
                     ) != /*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0)) {
          auVar3 = func_0x00f78e5c();
          if ((bRam0000000003eb4d13 & 1) == 0) {
            func_0x00f78a20(0x3d3db10);
            func_0x00f78a20(0x3d1e340);
            bRam0000000003eb4d13 = 1;
          }
          /*Atlas.Gameplay.Usables.Usable$$Init*/ func_0x01523840(auVar3._0_8_,auVar3._8_8_,param_3,param_4,param_5,0);
          uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<SuperShieldUsable.ShieldHitKartTimer>_TypeInfo*/ uRam0000000003d1e340);
          /*System.Collections.Generic.List<SuperShieldUsable.ShieldHitKartTimer>$$.ctor*/ func_0x025a7050(uVar1,0xc,uRam0000000003d3db10);
          *(undefined8 *)(auVar3._0_8_ + 0xe0) = uVar1;
          return;
        }
      }
      return;
    }
  }
  return;
}



// ============================================================
// RVA: 0x15059d8 | Atlas.Gameplay.Usables.SuperShieldUsable.get_SuperShieldUsableBehaviour
// ============================================================

void Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableBehaviour
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if ((bRam0000000003eb4d12 & 1) == 0) {
    func_0x00f78a20(0x3d24ea0);
    bRam0000000003eb4d12 = 1;
  }
  if (*(long **)(param_1 + 0x48) != (long *)0x0) {
    lVar2 = **(long **)(param_1 + 0x48);
    if ((*(byte *)(lVar2 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 300)) ||
       (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 300) * 8 + -8) !=
        /*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0)) {
      auVar3 = func_0x00f78e5c();
      if ((bRam0000000003eb4d13 & 1) == 0) {
        func_0x00f78a20(0x3d3db10);
        func_0x00f78a20(0x3d1e340);
        bRam0000000003eb4d13 = 1;
      }
      /*Atlas.Gameplay.Usables.Usable$$Init*/ func_0x01523840(auVar3._0_8_,auVar3._8_8_,param_3,param_4,param_5,0);
      uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<SuperShieldUsable.ShieldHitKartTimer>_TypeInfo*/ uRam0000000003d1e340);
      /*System.Collections.Generic.List<SuperShieldUsable.ShieldHitKartTimer>$$.ctor*/ func_0x025a7050(uVar1,0xc,uRam0000000003d3db10);
      *(undefined8 *)(auVar3._0_8_ + 0xe0) = uVar1;
      return;
    }
  }
  return;
}



// ============================================================
// RVA: 0x1505a54 | Atlas.Gameplay.Usables.SuperShieldUsable.Init
// ============================================================

void Atlas_Gameplay_Usables_SuperShieldUsable__Init
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4d13 & 1) == 0) {
    func_0x00f78a20(0x3d3db10);
    func_0x00f78a20(0x3d1e340);
    bRam0000000003eb4d13 = 1;
  }
  /*Atlas.Gameplay.Usables.Usable$$Init*/ func_0x01523840(param_1,param_2,param_3,param_4,param_5,0);
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<SuperShieldUsable.ShieldHitKartTimer>_TypeInfo*/ uRam0000000003d1e340);
  /*System.Collections.Generic.List<SuperShieldUsable.ShieldHitKartTimer>$$.ctor*/ func_0x025a7050(uVar1,0xc,uRam0000000003d3db10);
  *(undefined8 *)(param_1 + 0xe0) = uVar1;
  return;
}



// ============================================================
// RVA: 0x1505b0c | Atlas.Gameplay.Usables.SuperShieldUsable.DeInit
// ============================================================

void Atlas_Gameplay_Usables_SuperShieldUsable__DeInit(long param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb4d14 & 1) == 0) {
    func_0x00f78a20(0x3d3db20);
    bRam0000000003eb4d14 = 1;
  }
  if (*(char *)(param_1 + 0x19) != '\0') {
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (*(long *)(param_1 + 0xe0) != 0) {
    /*System.Collections.Generic.List<SuperShieldUsable.ShieldHitKartTimer>$$Clear*/ func_0x025a7f40(*(long *)(param_1 + 0xe0),uRam0000000003d3db20);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    if (*(char *)(param_1 + 0x19) != '\0') {
      /*Atlas.Gameplay.Usables.Usable$$OnTearDownParamsInternal*/ func_0x01523890(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    return;
  }
  lVar1 = func_0x00f78af4();
  *(undefined8 *)(lVar1 + 0xd0) = 0;
  return;
}



// ============================================================
// RVA: 0x1505b7c | Atlas.Gameplay.Usables.SuperShieldUsable.OnTearDownParamsInternal
// ============================================================

void Atlas_Gameplay_Usables_SuperShieldUsable__OnTearDownParamsInternal(long param_1)

{
  *(undefined8 *)(param_1 + 0xd0) = 0;
  return;
}



// ============================================================
// RVA: 0x1505b84 | Atlas.Gameplay.Usables.SuperShieldUsable.OnExitPool
// ============================================================

/* WARNING: Possible PIC construction at 0x01505c5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01505c60) */
/* WARNING: Removing unreachable block (ram,0x01505c64) */
/* WARNING: Removing unreachable block (ram,0x01505c70) */
/* WARNING: Removing unreachable block (ram,0x01505c78) */
/* WARNING: Removing unreachable block (ram,0x01505c80) */
/* WARNING: Removing unreachable block (ram,0x01505c98) */
/* WARNING: Removing unreachable block (ram,0x01505ca0) */
/* WARNING: Removing unreachable block (ram,0x01505ca8) */
/* WARNING: Removing unreachable block (ram,0x01505cb8) */
/* WARNING: Removing unreachable block (ram,0x01505cc8) */
/* WARNING: Removing unreachable block (ram,0x01505cd4) */
/* WARNING: Removing unreachable block (ram,0x01505ce4) */

void Atlas_Gameplay_Usables_SuperShieldUsable__OnExitPool
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 ***pppuVar17;
  undefined *puVar18;
  undefined1 auVar19 [16];
  long lStack_a0;
  long lStack_98;
  undefined8 **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined *puStack_58;
  ulong uVar16;
  
  if ((bRam0000000003eb4d15 & 1) == 0) {
    func_0x00f78a20(0x3d432e0);
    func_0x00f78a20(0x3d3db20);
    bRam0000000003eb4d15 = 1;
  }
  /*Atlas.Gameplay.Usables.Usable$$OnExitPool*/ func_0x015239c4(param_1,param_2,param_3,0,0,0,0);
  lVar5 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableBehaviour(param_1);
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x50) == 0)) {
code_r0x01505d00:
    puVar18 = &Atlas_Gameplay_Usables_SuperShieldUsableBehaviour__ResetAndStart;
    lVar5 = func_0x00f78af4();
  }
  else {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar5 + 0x50),0,0);
    lVar5 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableBehaviour(param_1);
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x58) == 0)) goto code_r0x01505d00;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar5 + 0x58),1,0);
    lVar5 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableBehaviour(param_1);
    if (lVar5 == 0) goto code_r0x01505d00;
    puVar18 = &UNK_01505c60;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  lVar12 = 0x3eb4000;
  uStack_68 = param_1;
  puStack_60 = (undefined8 *)&stack0xfffffffffffffff0;
  puStack_58 = puVar18;
  if ((bRam0000000003eb4d1a & 1) == 0) {
    func_0x00f78a20(0x3d24ea0);
    bRam0000000003eb4d1a = 1;
  }
  uVar14 = 0;
  if (*(long *)(lVar5 + 0x50) != 0) {
    uVar13 = 0x3d24ea0;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar5 + 0x50),1,0);
    lVar12 = *(long *)(lVar5 + 0x60);
    if (((*(ushort *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar14 = 0x3d24ea0;
    if (lVar12 != 0) {
      /*UnityEngine.Animator$$ResetTrigger*/ func_0x0320d96c(lVar12,**(undefined4 **)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8),0);
      if (*(long *)(lVar5 + 0x60) != 0) {
        /*UnityEngine.Animator$$ResetTrigger*/ func_0x0320d96c(*(long *)(lVar5 + 0x60),
                        *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8) + 4),0);
        uVar14 = uVar13;
        if (*(long *)(lVar5 + 0x60) != 0) {
          /*UnityEngine.Animator$$ResetTrigger*/ func_0x0320d96c(*(long *)(lVar5 + 0x60),
                          *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8) + 0xc),0);
          if (*(long *)(lVar5 + 0x60) != 0) {
            /*UnityEngine.Animator$$ResetTrigger*/ func_0x0320d96c(*(long *)(lVar5 + 0x60),
                            *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8) + 8),0);
            if (*(long *)(lVar5 + 0x58) != 0) {
              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar5 + 0x58),0,0);
              *(undefined1 *)(lVar5 + 0x68) = 0;
              return;
            }
          }
        }
      }
    }
  }
  lVar6 = func_0x00f78af4();
  puStack_88 = &Atlas_Gameplay_Usables_SuperShieldUsable__OnEnterPool;
  *(undefined8 *)(lVar6 + 0xd0) = 0;
  lStack_a0 = lVar12;
  lStack_98 = lVar5;
  ppuStack_90 = &puStack_60;
  /*Atlas.Gameplay.Usables.Usable$$OnEnterPool*/ func_0x01523e04(lVar6,0);
  lVar5 = lStack_a0;
  lVar12 = *(long *)(lVar6 + 0xd8);
  if (lVar12 == 0) {
    return;
  }
  uVar13 = 0;
  plVar3 = &lStack_a0;
  pppuVar17 = &ppuStack_90;
  if ((*(char *)(lVar12 + 0x2c) != '\0') && (*(long *)(lVar12 + 0x10) != 0)) {
    /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(lVar12 + 0x10),0,0);
    uVar13 = extraout_x1;
  }
  if (*(long *)(lVar12 + 0x10) != 0) {
    /*Core.Audio.AudioEvent$$DeInit*/ func_0x01638948(*(long *)(lVar12 + 0x10),0);
    uVar13 = extraout_x1_00;
  }
  auVar19._8_8_ = lVar12;
  auVar19._0_8_ = *(long *)(lVar12 + 0x20);
  if (*(long *)(lVar12 + 0x20) == 0) {
    puVar18 = &Atlas_Audio_WeaponAudioManager__Deregister;
    auVar19 = func_0x00f78af4(0,uVar13);
  }
  else {
    plVar3 = &uStack_80;
    lVar12 = lStack_98;
    lVar5 = lStack_a0;
    pppuVar17 = (undefined8 ***)ppuStack_90;
    puVar18 = puStack_88;
  }
  lVar9 = auVar19._8_8_;
  lVar6 = auVar19._0_8_;
  *(undefined8 *)((long)plVar3 + -0x30) = 0;
  *(undefined8 *)((long)plVar3 + -0x28) = uVar14;
  *(long *)((long)plVar3 + -0x20) = lVar5;
  *(long *)((long)plVar3 + -0x18) = lVar12;
  *(undefined8 ****)((long)plVar3 + -0x10) = pppuVar17;
  *(undefined **)((long)plVar3 + -8) = puVar18;
  if ((bRam0000000003eb4ea3 & 1) == 0) {
    func_0x00f78a20(0x3d3c948);
    func_0x00f78a20(0x3d3dec0);
    func_0x00f78a20(0x3d3c950);
    func_0x00f78a20(0x3d3dec8);
    func_0x00f78a20(0x3d3ded0);
    bRam0000000003eb4ea3 = 1;
  }
  if (*(long *)(lVar6 + 0x28) != 0) {
    uVar15 = (ulong)*(uint *)(*(long *)(lVar6 + 0x28) + 0x18);
    do {
      uVar16 = uVar15;
      uVar2 = (int)uVar16 - 1;
      uVar15 = (ulong)uVar2;
      if ((int)uVar2 < 0) {
        return;
      }
      lVar5 = *(long *)(lVar6 + 0x28);
      if (lVar5 == 0) goto code_r0x015303f0;
      if (*(uint *)(lVar5 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + uVar15 * 8 + 0x20);
      if (lVar5 == 0) goto code_r0x015303f0;
    } while (*(long *)(lVar5 + 0x10) != lVar9);
    if (*(long *)(lVar6 + 0x20) != 0) {
      iVar4 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(*(long *)(lVar6 + 0x20),lVar9,uRam0000000003d3c948);
      if (iVar4 != 0) {
        if (*(long *)(lVar6 + 0x20) == 0) goto code_r0x015303f0;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(*(long *)(lVar6 + 0x20),lVar9,uRam0000000003d3c950);
      }
      lVar5 = *(long *)(lVar6 + 0x28);
      if (lVar5 != 0) {
        uVar14 = *(undefined8 *)((long)plVar3 + -0x30);
        uVar13 = *(undefined8 *)((long)plVar3 + -0x28);
        *(undefined8 *)((long)plVar3 + -0x20) = *(undefined8 *)((long)plVar3 + -0x20);
        *(undefined8 *)((long)plVar3 + -0x18) = *(undefined8 *)((long)plVar3 + -0x18);
        *(undefined8 *)((long)plVar3 + -0x10) = *(undefined8 *)((long)plVar3 + -0x10);
        *(undefined8 *)((long)plVar3 + -8) = *(undefined8 *)((long)plVar3 + -8);
        uVar10 = *(uint *)(lVar5 + 0x18);
        uVar7 = uRam0000000003d3dec0;
        if (uVar10 <= uVar2) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar10 = *(uint *)(lVar5 + 0x18);
        }
        iVar4 = uVar10 - 1;
        *(int *)(lVar5 + 0x18) = iVar4;
        if (iVar4 - uVar2 != 0 && (int)uVar2 <= iVar4) {
          uVar7 = *(undefined8 *)(lVar5 + 0x10);
          /*System.Array$$Copy*/ func_0x0292b4cc(uVar7,uVar16,uVar7,uVar15,iVar4 - uVar2,0);
        }
        lVar12 = *(long *)(lVar5 + 0x10);
        if (lVar12 == 0) {
          func_0x00f78af4();
        }
        else if (*(uint *)(lVar5 + 0x18) < *(uint *)(lVar12 + 0x18)) {
          *(undefined8 *)(lVar12 + (long)(int)*(uint *)(lVar5 + 0x18) * 8 + 0x20) = 0;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          return;
        }
        uVar8 = func_0x00f78b24();
        auVar19 = func_0x00f78ac0(uVar8,0);
        lVar12 = auVar19._0_8_;
        *(undefined8 *)((long)plVar3 + -0x50) = uVar14;
        *(undefined8 *)((long)plVar3 + -0x48) = uVar13;
        *(ulong *)((long)plVar3 + -0x40) = uVar15;
        *(long *)((long)plVar3 + -0x38) = lVar5;
        *(undefined1 **)((long)plVar3 + -0x30) = (undefined1 *)((long)plVar3 + -0x10);
        *(undefined **)((long)plVar3 + -0x28) =
             &System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveRange;
        iVar4 = auVar19._8_4_;
        iVar11 = (int)uVar7;
        if (iVar4 < 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
        }
        if (iVar11 < 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
        }
        if (*(int *)(lVar12 + 0x18) - iVar4 < iVar11) {
          /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
        }
        if (0 < iVar11) {
          iVar1 = *(int *)(lVar12 + 0x18) - iVar11;
          *(int *)(lVar12 + 0x18) = iVar1;
          if (iVar1 - iVar4 != 0 && iVar4 <= iVar1) {
            /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(lVar12 + 0x10),iVar11 + iVar4,
                            *(undefined8 *)(lVar12 + 0x10),auVar19._8_8_,iVar1 - iVar4,0);
            iVar1 = *(int *)(lVar12 + 0x18);
          }
          /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar12 + 0x10),iVar1,uVar7,0);
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
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
// RVA: 0x1505b94 | Atlas.Gameplay.Usables.SuperShieldUsable.OnExitPool
// ============================================================

/* WARNING: Possible PIC construction at 0x01505c5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01505c60) */
/* WARNING: Removing unreachable block (ram,0x01505c64) */
/* WARNING: Removing unreachable block (ram,0x01505c70) */
/* WARNING: Removing unreachable block (ram,0x01505c78) */
/* WARNING: Removing unreachable block (ram,0x01505c80) */
/* WARNING: Removing unreachable block (ram,0x01505c98) */
/* WARNING: Removing unreachable block (ram,0x01505ca0) */
/* WARNING: Removing unreachable block (ram,0x01505ca8) */
/* WARNING: Removing unreachable block (ram,0x01505cb8) */
/* WARNING: Removing unreachable block (ram,0x01505cc8) */
/* WARNING: Removing unreachable block (ram,0x01505cd4) */
/* WARNING: Removing unreachable block (ram,0x01505ce4) */

void Atlas_Gameplay_Usables_SuperShieldUsable__OnExitPool
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

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
  undefined8 uVar14;
  ulong uVar15;
  undefined8 ***pppuVar17;
  undefined *puVar18;
  undefined1 auVar19 [16];
  long lStack_a0;
  long lStack_98;
  undefined8 **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined *puStack_58;
  ulong uVar16;
  
  if ((bRam0000000003eb4d15 & 1) == 0) {
    func_0x00f78a20(0x3d432e0);
    func_0x00f78a20(0x3d3db20);
    bRam0000000003eb4d15 = 1;
  }
  /*Atlas.Gameplay.Usables.Usable$$OnExitPool*/ func_0x015239c4(param_1,param_2,param_3,param_4,param_5,param_6,0);
  lVar6 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableBehaviour(param_1);
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x50) == 0)) {
LAB_01505d00:
    puVar18 = &Atlas_Gameplay_Usables_SuperShieldUsableBehaviour__ResetAndStart;
    lVar6 = func_0x00f78af4();
  }
  else {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar6 + 0x50),0,0);
    lVar6 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableBehaviour(param_1);
    if ((lVar6 == 0) || (*(long *)(lVar6 + 0x58) == 0)) goto LAB_01505d00;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar6 + 0x58),1,0);
    lVar6 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableBehaviour(param_1);
    if (lVar6 == 0) goto LAB_01505d00;
    puVar18 = (undefined *)0x1505c60;
  }
  lVar13 = 0x3eb4000;
  uStack_80 = param_5;
  uStack_78 = param_6;
  uStack_70 = param_4;
  uStack_68 = param_1;
  puStack_60 = (undefined8 *)&stack0xfffffffffffffff0;
  puStack_58 = puVar18;
  if ((bRam0000000003eb4d1a & 1) == 0) {
    func_0x00f78a20(0x3d24ea0);
    bRam0000000003eb4d1a = 1;
  }
  if (*(long *)(lVar6 + 0x50) != 0) {
    uVar14 = 0x3d24ea0;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar6 + 0x50),1,0);
    lVar13 = *(long *)(lVar6 + 0x60);
    if (((*(ushort *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_6 = 0x3d24ea0;
    if (lVar13 != 0) {
      /*UnityEngine.Animator$$ResetTrigger*/ func_0x0320d96c(lVar13,**(undefined4 **)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8),0);
      param_6 = uVar14;
      if (*(long *)(lVar6 + 0x60) != 0) {
        /*UnityEngine.Animator$$ResetTrigger*/ func_0x0320d96c(*(long *)(lVar6 + 0x60),
                        *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8) + 4),0);
        if (*(long *)(lVar6 + 0x60) != 0) {
          /*UnityEngine.Animator$$ResetTrigger*/ func_0x0320d96c(*(long *)(lVar6 + 0x60),
                          *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8) + 0xc),0);
          if (*(long *)(lVar6 + 0x60) != 0) {
            /*UnityEngine.Animator$$ResetTrigger*/ func_0x0320d96c(*(long *)(lVar6 + 0x60),
                            *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8) + 8),0);
            if (*(long *)(lVar6 + 0x58) != 0) {
              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar6 + 0x58),0,0);
              *(undefined1 *)(lVar6 + 0x68) = 0;
              return;
            }
          }
        }
      }
    }
  }
  lVar7 = func_0x00f78af4();
  puStack_88 = &Atlas_Gameplay_Usables_SuperShieldUsable__OnEnterPool;
  *(undefined8 *)(lVar7 + 0xd0) = 0;
  lStack_a0 = lVar13;
  lStack_98 = lVar6;
  ppuStack_90 = &puStack_60;
  /*Atlas.Gameplay.Usables.Usable$$OnEnterPool*/ func_0x01523e04(lVar7,0);
  lVar6 = lStack_a0;
  lVar13 = *(long *)(lVar7 + 0xd8);
  if (lVar13 == 0) {
    return;
  }
  uVar14 = 0;
  plVar4 = &lStack_a0;
  pppuVar17 = &ppuStack_90;
  if ((*(char *)(lVar13 + 0x2c) != '\0') && (*(long *)(lVar13 + 0x10) != 0)) {
    /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(lVar13 + 0x10),0,0);
    uVar14 = extraout_x1;
  }
  if (*(long *)(lVar13 + 0x10) != 0) {
    /*Core.Audio.AudioEvent$$DeInit*/ func_0x01638948(*(long *)(lVar13 + 0x10),0);
    uVar14 = extraout_x1_00;
  }
  auVar19._8_8_ = lVar13;
  auVar19._0_8_ = *(long *)(lVar13 + 0x20);
  if (*(long *)(lVar13 + 0x20) == 0) {
    puVar18 = &Atlas_Audio_WeaponAudioManager__Deregister;
    auVar19 = func_0x00f78af4(0,uVar14);
  }
  else {
    plVar4 = &uStack_80;
    lVar13 = lStack_98;
    lVar6 = lStack_a0;
    pppuVar17 = (undefined8 ***)ppuStack_90;
    puVar18 = puStack_88;
  }
  lVar10 = auVar19._8_8_;
  lVar7 = auVar19._0_8_;
  *(undefined8 *)((long)plVar4 + -0x30) = param_5;
  *(undefined8 *)((long)plVar4 + -0x28) = param_6;
  *(long *)((long)plVar4 + -0x20) = lVar6;
  *(long *)((long)plVar4 + -0x18) = lVar13;
  *(undefined8 ****)((long)plVar4 + -0x10) = pppuVar17;
  *(undefined **)((long)plVar4 + -8) = puVar18;
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
      lVar6 = *(long *)(lVar7 + 0x28);
      if (lVar6 == 0) goto code_r0x015303f0;
      if (*(uint *)(lVar6 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + uVar15 * 8 + 0x20);
      if (lVar6 == 0) goto code_r0x015303f0;
    } while (*(long *)(lVar6 + 0x10) != lVar10);
    if (*(long *)(lVar7 + 0x20) != 0) {
      iVar5 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(*(long *)(lVar7 + 0x20),lVar10,uRam0000000003d3c948);
      if (iVar5 != 0) {
        if (*(long *)(lVar7 + 0x20) == 0) goto code_r0x015303f0;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(*(long *)(lVar7 + 0x20),lVar10,uRam0000000003d3c950);
      }
      lVar6 = *(long *)(lVar7 + 0x28);
      if (lVar6 != 0) {
        uVar14 = *(undefined8 *)((long)plVar4 + -0x30);
        uVar1 = *(undefined8 *)((long)plVar4 + -0x28);
        *(undefined8 *)((long)plVar4 + -0x20) = *(undefined8 *)((long)plVar4 + -0x20);
        *(undefined8 *)((long)plVar4 + -0x18) = *(undefined8 *)((long)plVar4 + -0x18);
        *(undefined8 *)((long)plVar4 + -0x10) = *(undefined8 *)((long)plVar4 + -0x10);
        *(undefined8 *)((long)plVar4 + -8) = *(undefined8 *)((long)plVar4 + -8);
        uVar11 = *(uint *)(lVar6 + 0x18);
        uVar8 = uRam0000000003d3dec0;
        if (uVar11 <= uVar3) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar11 = *(uint *)(lVar6 + 0x18);
        }
        iVar5 = uVar11 - 1;
        *(int *)(lVar6 + 0x18) = iVar5;
        if (iVar5 - uVar3 != 0 && (int)uVar3 <= iVar5) {
          uVar8 = *(undefined8 *)(lVar6 + 0x10);
          /*System.Array$$Copy*/ func_0x0292b4cc(uVar8,uVar16,uVar8,uVar15,iVar5 - uVar3,0);
        }
        lVar13 = *(long *)(lVar6 + 0x10);
        if (lVar13 == 0) {
          func_0x00f78af4();
        }
        else if (*(uint *)(lVar6 + 0x18) < *(uint *)(lVar13 + 0x18)) {
          *(undefined8 *)(lVar13 + (long)(int)*(uint *)(lVar6 + 0x18) * 8 + 0x20) = 0;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          return;
        }
        uVar9 = func_0x00f78b24();
        auVar19 = func_0x00f78ac0(uVar9,0);
        lVar13 = auVar19._0_8_;
        *(undefined8 *)((long)plVar4 + -0x50) = uVar14;
        *(undefined8 *)((long)plVar4 + -0x48) = uVar1;
        *(ulong *)((long)plVar4 + -0x40) = uVar15;
        *(long *)((long)plVar4 + -0x38) = lVar6;
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
        if (*(int *)(lVar13 + 0x18) - iVar5 < iVar12) {
          /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
        }
        if (0 < iVar12) {
          iVar2 = *(int *)(lVar13 + 0x18) - iVar12;
          *(int *)(lVar13 + 0x18) = iVar2;
          if (iVar2 - iVar5 != 0 && iVar5 <= iVar2) {
            /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(lVar13 + 0x10),iVar12 + iVar5,
                            *(undefined8 *)(lVar13 + 0x10),auVar19._8_8_,iVar2 - iVar5,0);
            iVar2 = *(int *)(lVar13 + 0x18);
          }
          /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar13 + 0x10),iVar2,uVar8,0);
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
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
// RVA: 0x1505e0c | Atlas.Gameplay.Usables.SuperShieldUsable.OnEnterPool
// ============================================================

void Atlas_Gameplay_Usables_SuperShieldUsable__OnEnterPool(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  uint uVar10;
  long lVar11;
  long unaff_x19;
  int iVar12;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  ulong uVar13;
  undefined8 unaff_x22;
  long lVar15;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar16 [16];
  ulong uVar14;
  
  *(undefined8 *)(param_1 + 0xd0) = 0;
  /*Atlas.Gameplay.Usables.Usable$$OnEnterPool*/ func_0x01523e04(param_1,0);
  lVar6 = *(long *)(param_1 + 0xd8);
  if (lVar6 == 0) {
    return;
  }
  uVar9 = 0;
  puVar1 = &stack0xfffffffffffffff0;
  if ((*(char *)(lVar6 + 0x2c) != '\0') && (*(long *)(lVar6 + 0x10) != 0)) {
    /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(lVar6 + 0x10),0,0);
    uVar9 = extraout_x1;
  }
  if (*(long *)(lVar6 + 0x10) != 0) {
    /*Core.Audio.AudioEvent$$DeInit*/ func_0x01638948(*(long *)(lVar6 + 0x10),0);
    uVar9 = extraout_x1_00;
  }
  auVar16._8_8_ = lVar6;
  auVar16._0_8_ = *(long *)(lVar6 + 0x20);
  if (*(long *)(lVar6 + 0x20) == 0) {
    unaff_x30 = &Atlas_Audio_WeaponAudioManager__Deregister;
    auVar16 = func_0x00f78af4(0,uVar9);
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = lVar6;
    unaff_x29 = puVar1;
  }
  lVar11 = auVar16._8_8_;
  lVar6 = auVar16._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb4ea3 & 1) == 0) {
    func_0x00f78a20(0x3d3c948);
    func_0x00f78a20(0x3d3dec0);
    func_0x00f78a20(0x3d3c950);
    func_0x00f78a20(0x3d3dec8);
    func_0x00f78a20(0x3d3ded0);
    bRam0000000003eb4ea3 = 1;
  }
  if (*(long *)(lVar6 + 0x28) != 0) {
    uVar13 = (ulong)*(uint *)(*(long *)(lVar6 + 0x28) + 0x18);
    do {
      uVar14 = uVar13;
      uVar4 = (int)uVar14 - 1;
      uVar13 = (ulong)uVar4;
      if ((int)uVar4 < 0) {
        return;
      }
      lVar15 = *(long *)(lVar6 + 0x28);
      if (lVar15 == 0) goto code_r0x015303f0;
      if (*(uint *)(lVar15 + 0x18) <= uVar4) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + uVar13 * 8 + 0x20);
      if (lVar15 == 0) goto code_r0x015303f0;
    } while (*(long *)(lVar15 + 0x10) != lVar11);
    if (*(long *)(lVar6 + 0x20) != 0) {
      iVar5 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(*(long *)(lVar6 + 0x20),lVar11,uRam0000000003d3c948);
      if (iVar5 != 0) {
        if (*(long *)(lVar6 + 0x20) == 0) goto code_r0x015303f0;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(*(long *)(lVar6 + 0x20),lVar11,uRam0000000003d3c950);
      }
      lVar6 = *(long *)(lVar6 + 0x28);
      if (lVar6 != 0) {
        uVar9 = *(undefined8 *)((long)register0x00000008 + -0x30);
        uVar2 = *(undefined8 *)((long)register0x00000008 + -0x28);
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        uVar10 = *(uint *)(lVar6 + 0x18);
        uVar7 = uRam0000000003d3dec0;
        if (uVar10 <= uVar4) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar10 = *(uint *)(lVar6 + 0x18);
        }
        iVar5 = uVar10 - 1;
        *(int *)(lVar6 + 0x18) = iVar5;
        if (iVar5 - uVar4 != 0 && (int)uVar4 <= iVar5) {
          uVar7 = *(undefined8 *)(lVar6 + 0x10);
          /*System.Array$$Copy*/ func_0x0292b4cc(uVar7,uVar14,uVar7,uVar13,iVar5 - uVar4,0);
        }
        lVar11 = *(long *)(lVar6 + 0x10);
        if (lVar11 == 0) {
          func_0x00f78af4();
        }
        else if (*(uint *)(lVar6 + 0x18) < *(uint *)(lVar11 + 0x18)) {
          *(undefined8 *)(lVar11 + (long)(int)*(uint *)(lVar6 + 0x18) * 8 + 0x20) = 0;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          return;
        }
        uVar8 = func_0x00f78b24();
        auVar16 = func_0x00f78ac0(uVar8,0);
        lVar11 = auVar16._0_8_;
        *(undefined8 *)((long)register0x00000008 + -0x50) = uVar9;
        *(undefined8 *)((long)register0x00000008 + -0x48) = uVar2;
        *(ulong *)((long)register0x00000008 + -0x40) = uVar13;
        *(long *)((long)register0x00000008 + -0x38) = lVar6;
        *(undefined1 **)((long)register0x00000008 + -0x30) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(undefined **)((long)register0x00000008 + -0x28) =
             &System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveRange;
        iVar5 = auVar16._8_4_;
        iVar12 = (int)uVar7;
        if (iVar5 < 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
        }
        if (iVar12 < 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
        }
        if (*(int *)(lVar11 + 0x18) - iVar5 < iVar12) {
          /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
        }
        if (0 < iVar12) {
          iVar3 = *(int *)(lVar11 + 0x18) - iVar12;
          *(int *)(lVar11 + 0x18) = iVar3;
          if (iVar3 - iVar5 != 0 && iVar5 <= iVar3) {
            /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(lVar11 + 0x10),iVar12 + iVar5,
                            *(undefined8 *)(lVar11 + 0x10),auVar16._8_8_,iVar3 - iVar5,0);
            iVar3 = *(int *)(lVar11 + 0x18);
          }
          /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar11 + 0x10),iVar3,uVar7,0);
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
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
// RVA: 0x1505e4c | Atlas.Gameplay.Usables.SuperShieldUsable.DeSpawn
// ============================================================

/* WARNING: Possible PIC construction at 0x0153005c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01530060) */
/* WARNING: Removing unreachable block (ram,0x01530068) */
/* WARNING: Removing unreachable block (ram,0x0153006c) */
/* WARNING: Removing unreachable block (ram,0x01530070) */
/* WARNING: Removing unreachable block (ram,0x01530084) */
/* WARNING: Removing unreachable block (ram,0x0153008c) */
/* WARNING: Removing unreachable block (ram,0x01530090) */
/* WARNING: Removing unreachable block (ram,0x015300a4) */
/* WARNING: Removing unreachable block (ram,0x015300a8) */
/* WARNING: Removing unreachable block (ram,0x015300b0) */
/* WARNING: Removing unreachable block (ram,0x01638aa8) */

ulong Atlas_Gameplay_Usables_SuperShieldUsable__DeSpawn(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 extraout_w1;
  undefined1 extraout_w1_00;
  long extraout_x1;
  undefined8 *puVar9;
  uint extraout_w8;
  uint uVar10;
  long lVar11;
  long extraout_x9;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 unaff_x21;
  undefined8 uVar14;
  undefined8 unaff_x22;
  long lVar15;
  undefined8 unaff_x23;
  code *pcVar16;
  undefined8 unaff_x24;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined *puVar17;
  undefined4 extraout_s0;
  undefined4 uVar18;
  undefined4 extraout_s0_00;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar19 [16];
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4d16 & 1) == 0) {
    func_0x00f78a20(0x3d5ff28);
    bRam0000000003eb4d16 = 1;
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    /*Atlas.Audio.KartAudio$$StopShieldFilter*/ func_0x015c05f0(*(long *)(param_1 + 0xd0),param_1,0);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar11 = *(long *)(*(long *)(param_1 + 0x28) + 0x10);
    if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x60), lVar11 == 0)) goto LAB_01505ef8;
    Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__OnShieldExpired(lVar11,param_1,0);
  }
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_01505ef8:
    uVar12 = func_0x00f78af4();
    puStack_40 = (undefined1 *)0x3eb4000;
    puStack_38 = (undefined *)param_1;
    if ((bRam0000000003eb4d17 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4d17 = 1;
    }
    uVar14 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableBehaviour(uVar12);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar13 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar14,0,0);
    if ((int)uVar13 != 0) {
      lVar11 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableBehaviour(uVar12);
      uVar13 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableDefinition(uVar12);
      if ((uVar13 == 0) || (lVar11 == 0)) {
        uVar13 = func_0x00f78af4();
        *(undefined1 *)(uVar13 + 0x7c) = extraout_w1_00;
        *(undefined4 *)(uVar13 + 0x80) = extraout_s0;
        *(undefined4 *)(uVar13 + 0x78) = extraout_s0;
        return uVar13;
      }
      uVar18 = *(undefined4 *)(uVar13 + 0x84);
      *(undefined1 *)(lVar11 + 0x7c) = extraout_w1;
      *(undefined4 *)(lVar11 + 0x80) = uVar18;
      *(undefined4 *)(lVar11 + 0x78) = uVar18;
    }
    return uVar13;
  }
  /*Atlas.Gameplay.Usables.UsableManager$$DeSpawnAndTearDownUsable<SuperShieldUsable, SuperShieldUsableBehaviour>*/ func_0x01a3f3c8(*(long *)(param_1 + 0x10),param_1,uRam0000000003d5ff28);
  lVar11 = *(long *)(param_1 + 0xd8);
  if (lVar11 == 0) {
    return 0;
  }
  uVar12 = 0;
  uVar14 = 0x3eb4000;
  if ((bRam0000000003eb4e9d & 1) == 0) {
    func_0x00f78a20(0x3d23990,0,0);
    func_0x00f78a20(0x3d76368);
    bRam0000000003eb4e9d = 1;
  }
  if (*(char *)(lVar11 + 0x2c) == '\0') {
    lVar5 = *(long *)(lVar11 + 0x20);
    if (lVar5 == 0) goto code_r0x015300ec;
    uVar18 = *(undefined4 *)(lVar11 + 0x28);
    puVar3 = (undefined1 *)register0x00000008;
    uVar12 = unaff_x20;
    uVar14 = unaff_x21;
  }
  else {
    if (*(long *)(lVar11 + 0x20) == 0) {
code_r0x015300ec:
      puVar17 = &Atlas_Audio_WeaponAudioManager__DistanceFromPlayer;
      auVar19 = func_0x00f78af4();
    }
    else {
      auVar19._8_8_ = *(undefined8 *)(lVar11 + 0x18);
      auVar19._0_8_ = *(long *)(lVar11 + 0x20);
      puVar17 = &UNK_01530060;
    }
    puVar3 = &stack0xffffffffffffff90;
    unaff_x29 = &puStack_40;
    lVar5 = *(long *)(auVar19._0_8_ + 0x18);
    unaff_x19 = lVar11;
    puStack_40 = &stack0xfffffffffffffff0;
    puStack_38 = puVar17;
    if (lVar5 != 0) {
      lVar11 = *(long *)(lVar5 + 0x48);
      if (lVar11 == 0) {
        return auVar19._0_8_;
      }
      lVar11 = *(long *)(lVar11 + 0xb8);
      if ((lVar11 != 0) && (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar11,0), unaff_x19 = 0, auVar19._8_8_ != 0)) {
        /*UnityEngine.Transform$$get_position*/ func_0x03274f20(auVar19._8_8_,0);
        if ((bRam0000000003ec1ac1 & 1) == 0) {
          func_0x00f78a20(0x3d232c0);
          bRam0000000003ec1ac1 = 1;
        }
        uVar13 = /*System.Math_TypeInfo*/ uRam0000000003d232c0;
        if (((*(ushort *)(/*System.Math_TypeInfo*/ uRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Math_TypeInfo*/ uRam0000000003d232c0 + 0xe0) == 0)) {
          uVar13 = func_0x00f78ad0();
        }
        return uVar13;
      }
    }
    unaff_x30 = &Atlas_Audio_WeaponAudioManager__MarkForDestroy;
    lVar5 = func_0x00f78af4();
    lVar11 = extraout_x1;
    uVar18 = extraout_s0_00;
  }
  *(undefined8 *)(puVar3 + -0x40) = unaff_d9;
  *(undefined8 *)(puVar3 + -0x38) = unaff_d8;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar3 + -0x28) = uVar14;
  *(undefined8 *)(puVar3 + -0x20) = uVar12;
  *(long *)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 ***)(puVar3 + -0x10) = unaff_x29;
  *(undefined **)(puVar3 + -8) = unaff_x30;
  if ((bRam0000000003eb4ea2 & 1) == 0) {
    func_0x00f78a20(0x3d297b0);
    func_0x00f78a20(0x3d3dea0);
    bRam0000000003eb4ea2 = 1;
  }
  uVar13 = *(ulong *)(lVar5 + 0x28);
  uVar12 = func_0x00f78aec(/*Atlas.Audio.WeaponAudioManager.GraveyardInfo_TypeInfo*/ uRam0000000003d297b0);
  /*Atlas.Audio.WeaponAudioManager.GraveyardInfo$$.ctor*/ func_0x0156ec04(uVar18,uVar12,lVar11,0);
  if (uVar13 == 0) {
    uVar13 = func_0x00f78af4();
    if ((*(char *)(uVar13 + 0x2c) != '\0') &&
       (uVar6 = *(ulong *)(uVar13 + 0x10), uVar13 = 0, uVar6 != 0)) {
      *(undefined8 *)(puVar3 + -0x70) = 0x3eb4000;
      *(undefined8 *)(puVar3 + -0x68) = uVar12;
      *(undefined8 *)(puVar3 + -0x60) = 0;
      *(long *)(puVar3 + -0x58) = lVar11;
      *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x10;
      *(undefined **)(puVar3 + -0x48) = &Atlas_Audio_WeaponAudio__Stop;
      if ((bRam0000000003eb56ac & 1) == 0) {
        func_0x00f78a20(0x3d24568,0,0);
        bRam0000000003eb56ac = 1;
      }
      lVar11 = uVar6 + 0x28;
      iVar4 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar11,0);
      if (iVar4 != 0) {
        uVar12 = *(undefined8 *)(uVar6 + 0x28);
        if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*FMODUnity.RuntimeManager$$DetachInstanceFromGameObject*/ func_0x016e9cb4(uVar12,0);
        /*FMOD.Studio.EventInstance$$stop*/ func_0x016dfb38(lVar11,*(byte *)(uVar6 + 0x31) ^ 1,0);
        /*FMOD.Studio.EventInstance$$release*/ func_0x016dfb74(lVar11,0);
        /*FMOD.Studio.EventInstance$$clearHandle*/ func_0x016e00dc(lVar11,0);
      }
      return uVar6;
    }
    return uVar13;
  }
  uVar14 = *(undefined8 *)(puVar3 + -0x20);
  uVar6 = *(ulong *)(puVar3 + -0x18);
  uVar1 = *(undefined8 *)(puVar3 + -0x30);
  uVar2 = *(undefined8 *)(puVar3 + -0x28);
  *(undefined8 *)(puVar3 + -0x20) = uVar14;
  *(ulong *)(puVar3 + -0x18) = uVar6;
  *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
  *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
  lVar11 = *(long *)(uVar13 + 0x10);
  puVar9 = puRam0000000003d3dea0;
  if (lVar11 == 0) {
code_r0x0242716c:
    uVar12 = uVar14;
    uVar13 = uVar6;
    uVar7 = func_0x00f78af4();
    lVar11 = extraout_x9;
    uVar10 = extraout_w8;
code_r0x02427170:
    *(uint *)(uVar13 + 0x18) = uVar10 + 1;
  }
  else {
    uVar10 = *(uint *)(uVar13 + 0x18);
    uVar7 = uVar13;
    if (uVar10 != *(uint *)(lVar11 + 0x18)) goto code_r0x02427170;
    puVar9 = *(undefined8 **)(*(long *)(puRam0000000003d3dea0[3] + 0xc0) + 0x60);
    uVar7 = (*(code *)*puVar9)(uVar13,uVar10 + 1);
    lVar11 = *(long *)(uVar13 + 0x10);
    uVar10 = *(uint *)(uVar13 + 0x18);
    *(uint *)(uVar13 + 0x18) = uVar10 + 1;
    uVar6 = uVar13;
    uVar14 = uVar12;
    if (lVar11 == 0) goto code_r0x0242716c;
  }
  if (uVar10 < *(uint *)(lVar11 + 0x18)) {
    *(undefined8 *)(lVar11 + (long)(int)uVar10 * 8 + 0x20) = uVar12;
    *(int *)(uVar13 + 0x1c) = *(int *)(uVar13 + 0x1c) + 1;
    return uVar7;
  }
  uVar14 = func_0x00f78b24();
  auVar19 = func_0x00f78ac0(uVar14,0);
  lVar5 = auVar19._8_8_;
  lVar11 = auVar19._0_8_;
  *(undefined8 *)(puVar3 + -0x60) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x58) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x50) = uVar1;
  *(undefined8 *)(puVar3 + -0x48) = uVar2;
  *(undefined8 *)(puVar3 + -0x40) = uVar12;
  *(ulong *)(puVar3 + -0x38) = uVar13;
  *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x28) =
       &System_Collections_Generic_List_object___System_Collections_IList_Add;
  (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x48))(lVar5,0x14);
  if (lVar11 == 0) {
    func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x2427350);
    (*pcVar16)();
  }
  pcVar16 = (code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x28);
  lVar15 = *(long *)(*(long *)(puVar9[3] + 0xc0) + 0x38);
  if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar15);
  }
  if (lVar5 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = func_0x00f78adc(lVar5,lVar15);
    if (lVar8 == 0) {
      func_0x00f78e5c(lVar5,lVar15);
      goto code_r0x0242734c;
    }
  }
  (*pcVar16)(lVar11,lVar8,*(undefined8 *)(*(long *)(puVar9[3] + 0xc0) + 0x28));
  iVar4 = (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x68))(lVar11);
  return (ulong)(iVar4 - 1);
}



// ============================================================
// RVA: 0x1505efc | Atlas.Gameplay.Usables.SuperShieldUsable.TriggerScale
// ============================================================

void Atlas_Gameplay_Usables_SuperShieldUsable__TriggerScale(undefined8 param_1,undefined1 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 extraout_w1;
  undefined4 uVar5;
  undefined4 extraout_s0;
  
  if ((bRam0000000003eb4d17 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d17 = 1;
  }
  uVar2 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableBehaviour(param_1);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar2,0,0);
  if (iVar1 != 0) {
    lVar3 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableBehaviour(param_1);
    lVar4 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableDefinition(param_1);
    if ((lVar4 == 0) || (lVar3 == 0)) {
      lVar3 = func_0x00f78af4();
      *(undefined1 *)(lVar3 + 0x7c) = extraout_w1;
      *(undefined4 *)(lVar3 + 0x80) = extraout_s0;
      *(undefined4 *)(lVar3 + 0x78) = extraout_s0;
      return;
    }
    uVar5 = *(undefined4 *)(lVar4 + 0x84);
    *(undefined1 *)(lVar3 + 0x7c) = param_2;
    *(undefined4 *)(lVar3 + 0x80) = uVar5;
    *(undefined4 *)(lVar3 + 0x78) = uVar5;
  }
  return;
}



// ============================================================
// RVA: 0x1505fc4 | Atlas.Gameplay.Usables.SuperShieldUsable.Update
// ============================================================

void Atlas_Gameplay_Usables_SuperShieldUsable__Update(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  
  /*Atlas.Gameplay.Usables.Usable$$Update*/ func_0x01523f78(param_1,param_2,0);
  if (*(char *)(param_1 + 0x18) == '\0') {
    return;
  }
  /*Atlas.Gameplay.Usables.SuperShieldUsable$$InUseLogic*/ func_0x01506010(param_1,param_2);
  fVar5 = *(float *)(param_1 + 0x40);
  lVar2 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableDefinition();
  if (lVar2 != 0) {
    if (*(float *)(lVar2 + 0x74) <= fVar5) {
      return;
    }
    lVar2 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableBehaviour(param_1);
    if (lVar2 != 0) {
      if ((bRam0000000003eb4d1b & 1) == 0) {
        func_0x00f78a20(0x3d24ea0);
        bRam0000000003eb4d1b = 1;
      }
      if (*(char *)(lVar2 + 0x68) == '\0') {
        lVar4 = *(long *)(lVar2 + 0x60);
        if (((*(ushort *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar4 != 0) {
          /*UnityEngine.Animator$$SetTrigger*/ func_0x0320d82c(lVar4,**(undefined4 **)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8),0);
          if (*(long *)(lVar2 + 0x60) != 0) {
            /*UnityEngine.Animator$$ResetTrigger*/ func_0x0320d96c(*(long *)(lVar2 + 0x60),
                            *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8) + 0xc),0);
            goto code_r0x01506998;
          }
        }
        func_0x00f78af4();
        return;
      }
code_r0x01506998:
      *(undefined1 *)(lVar2 + 0x68) = 1;
      return;
    }
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4d18 & 1) == 0) {
    func_0x00f78a20(0x3d325c0);
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d22c78);
    func_0x00f78a20(0x3d3db18);
    func_0x00f78a20(0x3d3db20);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb4d18 = 1;
  }
  uStack_c8 = 0;
  uStack_c0 = 0;
  plStack_b8 = (long *)0x0;
  Atlas_Gameplay_Usables_ShieldUsable__Use(lVar2,0);
  lVar4 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableBehaviour(lVar2);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x50) != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar4 + 0x50),0,0);
    lVar4 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableBehaviour(lVar2);
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x58) != 0)) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar4 + 0x58),1,0);
      lVar4 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableBehaviour(lVar2);
      if (lVar4 != 0) {
        /*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour$$TriggerUse*/ func_0x01506754();
        if (*(long *)(lVar2 + 0x28) != 0) {
          Atlas_Gameplay_Kart_KartComposite__OnUseShield(*(long *)(lVar2 + 0x28),lVar2,0);
          lVar4 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableDefinition(lVar2);
          if ((lVar4 != 0) && (*(long *)(lVar2 + 0x28) != 0)) {
            uVar11 = *(undefined4 *)(lVar4 + 0x78);
            uVar12 = *(undefined4 *)(lVar4 + 0x7c);
            uVar6 = *(undefined4 *)(lVar4 + 0x80);
            uVar7 = *(undefined4 *)(lVar4 + 0x88);
            uVar8 = *(undefined4 *)(lVar4 + 0x8c);
            uVar9 = *(undefined4 *)(lVar4 + 0x90);
            uVar10 = *(undefined4 *)(lVar4 + 0x94);
            Atlas_Gameplay_Kart_KartComposite__ClearSpeedLimitEffects(*(long *)(lVar2 + 0x28),0);
            if (*(long *)(lVar2 + 0x28) != 0) {
              Atlas_Gameplay_Kart_KartComposite__OnUseBoost
                        (uVar6,uVar11,uVar12,*(long *)(lVar2 + 0x28),0,0);
              if (*(long *)(lVar2 + 0xd0) != 0) {
                /*Atlas.Audio.KartAudio$$SetBoosting*/ func_0x015bf694(0x42c80000,*(long *)(lVar2 + 0xd0),0);
                if (((*(long *)(lVar2 + 0x28) != 0) &&
                    (lVar4 = *(long *)(*(long *)(lVar2 + 0x28) + 0x10), lVar4 != 0)) &&
                   (lVar4 = *(long *)(lVar4 + 0x60), lVar4 != 0)) {
                  Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__SetKartTurningModifiers
                            (uVar7,uVar8,uVar9,uVar10,uVar6,lVar4,0);
                  if (*(long *)(lVar2 + 0xd8) != 0) {
                    /*Atlas.Audio.WeaponAudio$$Use*/ func_0x0152fe60(*(long *)(lVar2 + 0xd8),0);
                  }
                  if (*(long *)(lVar2 + 0xd0) != 0) {
                    /*Atlas.Audio.KartAudio$$StartShieldFilter*/ func_0x015c0534(*(long *)(lVar2 + 0xd0),lVar2,0);
                  }
                  if (*(long *)(lVar2 + 0xe0) != 0) {
                    /*System.Collections.Generic.List<SuperShieldUsable.ShieldHitKartTimer>$$Clear*/ func_0x025a7f40(*(long *)(lVar2 + 0xe0),uRam0000000003d3db20);
                    if ((*(long *)(lVar2 + 200) != 0) &&
                       (lVar4 = *(long *)(*(long *)(lVar2 + 200) + 0x10), lVar4 != 0)) {
                      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_c8,lVar4,uRam0000000003d3a7d0);
                      while( true ) {
                        do {
                          uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_c8,uRam0000000003d325c8);
                          if ((uVar3 & 1) == 0) {
                            /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c8,uRam0000000003d325c0);
                            return;
                          }
                        } while (plStack_b8 == (long *)0x0);
                        if ((*(byte *)(*plStack_b8 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300))
                           || (*(long *)(*(long *)(*plStack_b8 + 200) +
                                         (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8 + -8) !=
                               /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78)) break;
                        if (plStack_b8 != *(long **)(lVar2 + 0x28)) {
                          if (*(long *)(lVar2 + 0xe0) == 0) goto code_r0x0150670c;
                          /*System.Collections.Generic.List<SuperShieldUsable.ShieldHitKartTimer>$$Add*/ func_0x025a7c4c(*(long *)(lVar2 + 0xe0),plStack_b8,0xbf800000,
                                          uRam0000000003d3db18);
                        }
                      }
                      func_0x00f78e5c(plStack_b8,/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78);
                      goto code_r0x01506710;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x0150670c:
  func_0x00f78af4();
code_r0x01506710:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1506714);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1506010 | Atlas.Gameplay.Usables.SuperShieldUsable.InUseLogic
// ============================================================

void Atlas_Gameplay_Usables_SuperShieldUsable__InUseLogic(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  
  if ((bRam0000000003eb4d19 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d3db28);
    func_0x00f78a20(0x3d3db30);
    func_0x00f78a20(0x3d3db38);
    bRam0000000003eb4d19 = 1;
  }
  lVar10 = *(long *)(param_1 + 0xe0);
  if (lVar10 != 0) {
    uVar9 = 0;
    do {
      if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar9) {
        return;
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar9) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (param_2 == (long *)0x0) break;
      lVar10 = *(long *)(lVar10 + 0x10) + uVar9 * 0x10;
      lVar1 = *(long *)(lVar10 + 0x20);
      uVar2 = *(ulong *)(lVar10 + 0x28);
      lVar10 = *param_2;
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0150611c;
          }
          piVar8 = piVar8 + 4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
LAB_0150611c:
      fVar12 = (float)(*(code *)*puVar4)(param_2,puVar4[1]);
      lVar10 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(param_1,0);
      if ((lVar10 == 0) || (*(long *)(lVar10 + 0x130) == 0)) break;
      fVar13 = (float)Atlas_Gameplay_Kart_KartManager__GetKartToKartDistance
                                (*(long *)(lVar10 + 0x130),*(undefined8 *)(param_1 + 0x28),lVar1,0);
      lVar10 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableDefinition(param_1);
      if (lVar10 == 0) break;
      fVar12 = (float)uVar2 - fVar12;
      if ((fVar13 <= *(float *)(lVar10 + 0x70)) && (fVar12 < 0.0)) {
        if ((lVar1 == 0) ||
           ((*(long *)(lVar1 + 0x10) == 0 ||
            (lVar10 = *(long *)(*(long *)(lVar1 + 0x10) + 0x60), lVar10 == 0)))) break;
        iVar3 = Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_HasValidShield
                          (lVar10,0);
        lVar10 = *(long *)(lVar1 + 0x10);
        if (iVar3 == 0) {
          if (lVar10 == 0) break;
          uVar7 = Atlas_Gameplay_Kart_KartPhysics__get_HitInvuln(lVar10,0);
          if ((uVar7 & 1) == 0) {
            lVar10 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableDefinition
                               (param_1);
            if (lVar10 == 0) break;
            uVar11 = *(undefined8 *)(lVar10 + 0x68);
            uVar5 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableDefinition
                              (param_1);
            lVar10 = *(long *)(param_1 + 0x28);
            if ((lVar10 == 0) || (*(long *)(lVar10 + 0x10) == 0)) break;
            lVar6 = Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(lVar10 + 0x10),0);
            /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar6 + 0x13c),*(undefined4 *)(lVar6 + 0x140),
                            *(undefined4 *)(lVar6 + 0x144),0);
            Atlas_Gameplay_Kart_KartComposite__OnUsableHit(lVar1,uVar11,uVar5,lVar10,0);
            if ((*(long *)(param_1 + 0x28) == 0) ||
               ((lVar10 = *(long *)(*(long *)(param_1 + 0x28) + 0x10), lVar10 == 0 ||
                (lVar10 = *(long *)(lVar10 + 0x60), lVar10 == 0)))) break;
            Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__ConsumeShieldHit
                      (0xbf800000,lVar10,0);
            fVar12 = 2.0;
          }
        }
        else {
          if (((lVar10 == 0) || (*(long *)(lVar10 + 0x60) == 0)) ||
             (lVar10 = *(long *)(*(long *)(lVar10 + 0x60) + 200), lVar10 == 0)) break;
          uVar11 = *(undefined8 *)(lVar10 + 0x30);
          uVar5 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableDefinition(param_1)
          ;
          if (((*(long *)(param_1 + 0x28) == 0) ||
              (lVar10 = *(long *)(*(long *)(param_1 + 0x28) + 0x10), lVar10 == 0)) ||
             (lVar10 = *(long *)(lVar10 + 0x60), lVar10 == 0)) break;
          Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__ConsumeShieldHit
                    (0xbf800000,lVar10,0);
          lVar10 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(param_1,0);
          if (lVar10 == 0) break;
          lVar10 = *(long *)(lVar10 + 0x40);
          if (lVar10 != 0) {
            if ((*(long *)(param_1 + 0x28) == 0) || (lVar10 == 0)) break;
            /*Atlas.Gameplay.Player.GameContextPlayerManager$$FireOnUsableHitShield*/ func_0x015a62e0(lVar10,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x90),
                            *(undefined8 *)(lVar1 + 0x90),uVar11,uVar5,0);
          }
          if ((*(long *)(lVar1 + 0x10) == 0) ||
             (lVar10 = *(long *)(*(long *)(lVar1 + 0x10) + 0x60), lVar10 == 0)) break;
          Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__ConsumeShieldHit
                    (0xbf800000,lVar10,0);
          lVar10 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(param_1,0);
          if (lVar10 == 0) break;
          lVar10 = *(long *)(lVar10 + 0x40);
          if (lVar10 == 0) {
            fVar12 = 2.0;
          }
          else {
            if ((*(long *)(param_1 + 0x28) == 0) || (lVar10 == 0)) break;
            /*Atlas.Gameplay.Player.GameContextPlayerManager$$FireOnUsableHitShield*/ func_0x015a62e0(lVar10,*(undefined8 *)(lVar1 + 0x90),
                            *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x90),uVar5,uVar11,0);
            fVar12 = 2.0;
          }
        }
      }
      if (*(long *)(param_1 + 0xe0) == 0) break;
      /*System.Collections.Generic.List<SuperShieldUsable.ShieldHitKartTimer>$$set_Item*/ func_0x025a78f0(*(long *)(param_1 + 0xe0),uVar9,lVar1,
                      uVar2 & 0xffffffff00000000 | (ulong)(uint)fVar12,uRam0000000003d3db38);
      uVar9 = uVar9 + 1;
      lVar10 = *(long *)(param_1 + 0xe0);
    } while (lVar10 != 0);
    func_0x00f78af4();
  }
  return;
}



// ============================================================
// RVA: 0x15063d8 | Atlas.Gameplay.Usables.SuperShieldUsable.InUseVisuals
// ============================================================

void Atlas_Gameplay_Usables_SuperShieldUsable__InUseVisuals(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  
  fVar5 = *(float *)(param_1 + 0x40);
  lVar2 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableDefinition();
  if (lVar2 != 0) {
    if (*(float *)(lVar2 + 0x74) <= fVar5) {
      return;
    }
    lVar2 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableBehaviour(param_1);
    if (lVar2 != 0) {
      if ((bRam0000000003eb4d1b & 1) == 0) {
        func_0x00f78a20(0x3d24ea0);
        bRam0000000003eb4d1b = 1;
      }
      if (*(char *)(lVar2 + 0x68) == '\0') {
        lVar4 = *(long *)(lVar2 + 0x60);
        if (((*(ushort *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar4 != 0) {
          /*UnityEngine.Animator$$SetTrigger*/ func_0x0320d82c(lVar4,**(undefined4 **)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8),0);
          if (*(long *)(lVar2 + 0x60) != 0) {
            /*UnityEngine.Animator$$ResetTrigger*/ func_0x0320d96c(*(long *)(lVar2 + 0x60),
                            *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8) + 0xc),0);
            goto code_r0x01506998;
          }
        }
        func_0x00f78af4();
        return;
      }
code_r0x01506998:
      *(undefined1 *)(lVar2 + 0x68) = 1;
      return;
    }
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4d18 & 1) == 0) {
    func_0x00f78a20(0x3d325c0);
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d22c78);
    func_0x00f78a20(0x3d3db18);
    func_0x00f78a20(0x3d3db20);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb4d18 = 1;
  }
  uStack_c8 = 0;
  uStack_c0 = 0;
  plStack_b8 = (long *)0x0;
  Atlas_Gameplay_Usables_ShieldUsable__Use(lVar2,0);
  lVar4 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableBehaviour(lVar2);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x50) != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar4 + 0x50),0,0);
    lVar4 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableBehaviour(lVar2);
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x58) != 0)) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar4 + 0x58),1,0);
      lVar4 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableBehaviour(lVar2);
      if (lVar4 != 0) {
        /*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour$$TriggerUse*/ func_0x01506754();
        if (*(long *)(lVar2 + 0x28) != 0) {
          Atlas_Gameplay_Kart_KartComposite__OnUseShield(*(long *)(lVar2 + 0x28),lVar2,0);
          lVar4 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableDefinition(lVar2);
          if ((lVar4 != 0) && (*(long *)(lVar2 + 0x28) != 0)) {
            uVar11 = *(undefined4 *)(lVar4 + 0x78);
            uVar12 = *(undefined4 *)(lVar4 + 0x7c);
            uVar6 = *(undefined4 *)(lVar4 + 0x80);
            uVar7 = *(undefined4 *)(lVar4 + 0x88);
            uVar8 = *(undefined4 *)(lVar4 + 0x8c);
            uVar9 = *(undefined4 *)(lVar4 + 0x90);
            uVar10 = *(undefined4 *)(lVar4 + 0x94);
            Atlas_Gameplay_Kart_KartComposite__ClearSpeedLimitEffects(*(long *)(lVar2 + 0x28),0);
            if (*(long *)(lVar2 + 0x28) != 0) {
              Atlas_Gameplay_Kart_KartComposite__OnUseBoost
                        (uVar6,uVar11,uVar12,*(long *)(lVar2 + 0x28),0,0);
              if (*(long *)(lVar2 + 0xd0) != 0) {
                /*Atlas.Audio.KartAudio$$SetBoosting*/ func_0x015bf694(0x42c80000,*(long *)(lVar2 + 0xd0),0);
                if (((*(long *)(lVar2 + 0x28) != 0) &&
                    (lVar4 = *(long *)(*(long *)(lVar2 + 0x28) + 0x10), lVar4 != 0)) &&
                   (lVar4 = *(long *)(lVar4 + 0x60), lVar4 != 0)) {
                  Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__SetKartTurningModifiers
                            (uVar7,uVar8,uVar9,uVar10,uVar6,lVar4,0);
                  if (*(long *)(lVar2 + 0xd8) != 0) {
                    /*Atlas.Audio.WeaponAudio$$Use*/ func_0x0152fe60(*(long *)(lVar2 + 0xd8),0);
                  }
                  if (*(long *)(lVar2 + 0xd0) != 0) {
                    /*Atlas.Audio.KartAudio$$StartShieldFilter*/ func_0x015c0534(*(long *)(lVar2 + 0xd0),lVar2,0);
                  }
                  if (*(long *)(lVar2 + 0xe0) != 0) {
                    /*System.Collections.Generic.List<SuperShieldUsable.ShieldHitKartTimer>$$Clear*/ func_0x025a7f40(*(long *)(lVar2 + 0xe0),uRam0000000003d3db20);
                    if ((*(long *)(lVar2 + 200) != 0) &&
                       (lVar4 = *(long *)(*(long *)(lVar2 + 200) + 0x10), lVar4 != 0)) {
                      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_c8,lVar4,uRam0000000003d3a7d0);
                      while( true ) {
                        do {
                          uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_c8,uRam0000000003d325c8);
                          if ((uVar3 & 1) == 0) {
                            /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c8,uRam0000000003d325c0);
                            return;
                          }
                        } while (plStack_b8 == (long *)0x0);
                        if ((*(byte *)(*plStack_b8 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300))
                           || (*(long *)(*(long *)(*plStack_b8 + 200) +
                                         (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8 + -8) !=
                               /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78)) break;
                        if (plStack_b8 != *(long **)(lVar2 + 0x28)) {
                          if (*(long *)(lVar2 + 0xe0) == 0) goto code_r0x0150670c;
                          /*System.Collections.Generic.List<SuperShieldUsable.ShieldHitKartTimer>$$Add*/ func_0x025a7c4c(*(long *)(lVar2 + 0xe0),plStack_b8,0xbf800000,
                                          uRam0000000003d3db18);
                        }
                      }
                      func_0x00f78e5c(plStack_b8,/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78);
                      goto code_r0x01506710;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x0150670c:
  func_0x00f78af4();
code_r0x01506710:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1506714);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1506434 | Atlas.Gameplay.Usables.SuperShieldUsable.Use
// ============================================================

void Atlas_Gameplay_Usables_SuperShieldUsable__Use(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  
  if ((bRam0000000003eb4d18 & 1) == 0) {
    func_0x00f78a20(0x3d325c0);
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d22c78);
    func_0x00f78a20(0x3d3db18);
    func_0x00f78a20(0x3d3db20);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb4d18 = 1;
  }
  uStack_98 = 0;
  uStack_90 = 0;
  plStack_88 = (long *)0x0;
  Atlas_Gameplay_Usables_ShieldUsable__Use(param_1,0);
  lVar2 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableBehaviour(param_1);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x50) != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar2 + 0x50),0,0);
    lVar2 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableBehaviour(param_1);
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x58) != 0)) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar2 + 0x58),1,0);
      lVar2 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableBehaviour(param_1);
      if (lVar2 != 0) {
        /*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour$$TriggerUse*/ func_0x01506754();
        if (*(long *)(param_1 + 0x28) != 0) {
          Atlas_Gameplay_Kart_KartComposite__OnUseShield(*(long *)(param_1 + 0x28),param_1,0);
          lVar2 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableDefinition(param_1)
          ;
          if ((lVar2 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
            uVar9 = *(undefined4 *)(lVar2 + 0x78);
            uVar10 = *(undefined4 *)(lVar2 + 0x7c);
            uVar4 = *(undefined4 *)(lVar2 + 0x80);
            uVar5 = *(undefined4 *)(lVar2 + 0x88);
            uVar6 = *(undefined4 *)(lVar2 + 0x8c);
            uVar7 = *(undefined4 *)(lVar2 + 0x90);
            uVar8 = *(undefined4 *)(lVar2 + 0x94);
            Atlas_Gameplay_Kart_KartComposite__ClearSpeedLimitEffects(*(long *)(param_1 + 0x28),0);
            if (*(long *)(param_1 + 0x28) != 0) {
              Atlas_Gameplay_Kart_KartComposite__OnUseBoost
                        (uVar4,uVar9,uVar10,*(long *)(param_1 + 0x28),0,0);
              if (*(long *)(param_1 + 0xd0) != 0) {
                /*Atlas.Audio.KartAudio$$SetBoosting*/ func_0x015bf694(0x42c80000,*(long *)(param_1 + 0xd0),0);
                if (((*(long *)(param_1 + 0x28) != 0) &&
                    (lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x10), lVar2 != 0)) &&
                   (lVar2 = *(long *)(lVar2 + 0x60), lVar2 != 0)) {
                  Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__SetKartTurningModifiers
                            (uVar5,uVar6,uVar7,uVar8,uVar4,lVar2,0);
                  if (*(long *)(param_1 + 0xd8) != 0) {
                    /*Atlas.Audio.WeaponAudio$$Use*/ func_0x0152fe60(*(long *)(param_1 + 0xd8),0);
                  }
                  if (*(long *)(param_1 + 0xd0) != 0) {
                    /*Atlas.Audio.KartAudio$$StartShieldFilter*/ func_0x015c0534(*(long *)(param_1 + 0xd0),param_1,0);
                  }
                  if (*(long *)(param_1 + 0xe0) != 0) {
                    /*System.Collections.Generic.List<SuperShieldUsable.ShieldHitKartTimer>$$Clear*/ func_0x025a7f40(*(long *)(param_1 + 0xe0),uRam0000000003d3db20);
                    if ((*(long *)(param_1 + 200) != 0) &&
                       (lVar2 = *(long *)(*(long *)(param_1 + 200) + 0x10), lVar2 != 0)) {
                      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_98,lVar2,uRam0000000003d3a7d0);
                      while( true ) {
                        do {
                          uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_98,uRam0000000003d325c8);
                          if ((uVar3 & 1) == 0) {
                            /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_98,uRam0000000003d325c0);
                            return;
                          }
                        } while (plStack_88 == (long *)0x0);
                        if ((*(byte *)(*plStack_88 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300))
                           || (*(long *)(*(long *)(*plStack_88 + 200) +
                                         (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8 + -8) !=
                               /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78)) break;
                        if (plStack_88 != *(long **)(param_1 + 0x28)) {
                          if (*(long *)(param_1 + 0xe0) == 0) goto LAB_0150670c;
                          /*System.Collections.Generic.List<SuperShieldUsable.ShieldHitKartTimer>$$Add*/ func_0x025a7c4c(*(long *)(param_1 + 0xe0),plStack_88,0xbf800000,
                                          uRam0000000003d3db18);
                        }
                      }
                      func_0x00f78e5c(plStack_88,/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78);
                      goto code_r0x01506710;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
LAB_0150670c:
  func_0x00f78af4();
code_r0x01506710:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1506714);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x15067f4 | Atlas.Gameplay.Usables.SuperShieldUsable.TriggerDestroy
// ============================================================

void Atlas_Gameplay_Usables_SuperShieldUsable__TriggerDestroy(void)

{
  return;
}



// ============================================================
// RVA: 0x15067f8 | Atlas.Gameplay.Usables.SuperShieldUsable.ConsumeHit
// ============================================================

/* WARNING: Possible PIC construction at 0x01506810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153005c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01506978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01530060) */
/* WARNING: Removing unreachable block (ram,0x01530068) */
/* WARNING: Removing unreachable block (ram,0x0153006c) */
/* WARNING: Removing unreachable block (ram,0x01530070) */
/* WARNING: Removing unreachable block (ram,0x01530084) */
/* WARNING: Removing unreachable block (ram,0x0153008c) */
/* WARNING: Removing unreachable block (ram,0x01530090) */
/* WARNING: Removing unreachable block (ram,0x015300a4) */
/* WARNING: Removing unreachable block (ram,0x015300a8) */
/* WARNING: Removing unreachable block (ram,0x015300b0) */
/* WARNING: Removing unreachable block (ram,0x01506814) */
/* WARNING: Removing unreachable block (ram,0x01506830) */
/* WARNING: Removing unreachable block (ram,0x0150681c) */
/* WARNING: Removing unreachable block (ram,0x01530004) */
/* WARNING: Removing unreachable block (ram,0x01530028) */
/* WARNING: Removing unreachable block (ram,0x01530048) */
/* WARNING: Removing unreachable block (ram,0x015300cc) */
/* WARNING: Removing unreachable block (ram,0x015300d4) */
/* WARNING: Removing unreachable block (ram,0x01530050) */
/* WARNING: Removing unreachable block (ram,0x015300ec) */
/* WARNING: Removing unreachable block (ram,0x01530058) */
/* WARNING: Removing unreachable block (ram,0x015300f0) */
/* WARNING: Removing unreachable block (ram,0x0153010c) */
/* WARNING: Removing unreachable block (ram,0x01530174) */
/* WARNING: Removing unreachable block (ram,0x01530114) */
/* WARNING: Removing unreachable block (ram,0x0153011c) */
/* WARNING: Removing unreachable block (ram,0x01530190) */
/* WARNING: Removing unreachable block (ram,0x01530194) */
/* WARNING: Removing unreachable block (ram,0x015301c8) */
/* WARNING: Removing unreachable block (ram,0x015301e8) */
/* WARNING: Removing unreachable block (ram,0x01530234) */
/* WARNING: Removing unreachable block (ram,0x01530240) */
/* WARNING: Removing unreachable block (ram,0x01530254) */
/* WARNING: Removing unreachable block (ram,0x01530248) */
/* WARNING: Removing unreachable block (ram,0x01638a28) */
/* WARNING: Removing unreachable block (ram,0x01638a4c) */
/* WARNING: Removing unreachable block (ram,0x01638a60) */
/* WARNING: Removing unreachable block (ram,0x01638a74) */
/* WARNING: Removing unreachable block (ram,0x01638a8c) */
/* WARNING: Removing unreachable block (ram,0x01638a94) */
/* WARNING: Removing unreachable block (ram,0x01638a98) */
/* WARNING: Removing unreachable block (ram,0x01638ab0) */
/* WARNING: Removing unreachable block (ram,0x01638aa8) */
/* WARNING: Removing unreachable block (ram,0x01638ab8) */
/* WARNING: Removing unreachable block (ram,0x01638adc) */
/* WARNING: Removing unreachable block (ram,0x0153020c) */
/* WARNING: Removing unreachable block (ram,0x02427110) */
/* WARNING: Removing unreachable block (ram,0x02427124) */
/* WARNING: Removing unreachable block (ram,0x0242713c) */
/* WARNING: Removing unreachable block (ram,0x0242716c) */
/* WARNING: Removing unreachable block (ram,0x02427170) */
/* WARNING: Removing unreachable block (ram,0x02427178) */
/* WARNING: Removing unreachable block (ram,0x024271a4) */
/* WARNING: Removing unreachable block (ram,0x02427284) */
/* WARNING: Removing unreachable block (ram,0x024271f0) */
/* WARNING: Removing unreachable block (ram,0x0242720c) */
/* WARNING: Removing unreachable block (ram,0x02427214) */
/* WARNING: Removing unreachable block (ram,0x0242723c) */
/* WARNING: Removing unreachable block (ram,0x02427218) */
/* WARNING: Removing unreachable block (ram,0x02427240) */
/* WARNING: Removing unreachable block (ram,0x0242722c) */
/* WARNING: Removing unreachable block (ram,0x0242734c) */
/* WARNING: Removing unreachable block (ram,0x02427184) */
/* WARNING: Removing unreachable block (ram,0x0153012c) */
/* WARNING: Removing unreachable block (ram,0x0327bcbc) */
/* WARNING: Removing unreachable block (ram,0x0327bd00) */
/* WARNING: Removing unreachable block (ram,0x0327bd14) */
/* WARNING: Removing unreachable block (ram,0x0327bd20) */
/* WARNING: Removing unreachable block (ram,0x0327bd28) */
/* WARNING: Removing unreachable block (ram,0x0327bd2c) */
/* WARNING: Removing unreachable block (ram,0x0150697c) */
/* WARNING: Removing unreachable block (ram,0x01506984) */

long Atlas_Gameplay_Usables_SuperShieldUsable__ConsumeHit(long param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 **ppuVar5;
  undefined *puVar6;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 **ppuStack_60;
  undefined *puStack_58;
  undefined1 **ppuStack_30;
  undefined *puStack_28;
  
  lVar3 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableBehaviour();
  if (lVar3 == 0) {
    puVar6 = &Atlas_Gameplay_Usables_SuperShieldUsableBehaviour__TriggerHit;
    lVar3 = func_0x00f78af4();
  }
  else {
    puVar6 = (undefined *)0x1506814;
  }
  ppuStack_30 = (undefined1 **)&stack0xfffffffffffffff0;
  puStack_28 = puVar6;
  if ((bRam0000000003eb4d1c & 1) == 0) {
    func_0x00f78a20(0x3d24ea0);
    bRam0000000003eb4d1c = 1;
  }
  lVar4 = *(long *)(lVar3 + 0x60);
  if (((*(ushort *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar4 != 0) {
    /*UnityEngine.Animator$$ResetTrigger*/ func_0x0320d96c(lVar4,*(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8) + 8),0);
    lVar3 = *(long *)(lVar3 + 0x60);
    if (lVar3 != 0) {
      uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8) + 8);
      puVar2 = &stack0xffffffffffffffe0;
      ppuVar5 = ppuStack_30;
      puVar6 = puStack_28;
      goto code_r0x0320d82c;
    }
  }
  func_0x00f78af4();
  puStack_58 = &Atlas_Gameplay_Usables_SuperShieldUsable__GetKartTriggerEffectParameters;
  ppuStack_60 = &ppuStack_30;
  lVar3 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableDefinition();
  if (lVar3 != 0) {
    return *(long *)(lVar3 + 0x68);
  }
  param_1 = func_0x00f78af4();
  puVar2 = &stack0xffffffffffffff70;
  puStack_68 = &Atlas_Gameplay_Usables_SuperShieldUsableBehaviour__TriggerFade;
  ppuVar5 = &puStack_70;
  lVar3 = param_1;
  puStack_70 = (undefined1 *)&ppuStack_60;
  if ((bRam0000000003eb4d1b & 1) == 0) {
    puStack_70 = (undefined1 *)&ppuStack_60;
    lVar3 = func_0x00f78a20(0x3d24ea0);
    bRam0000000003eb4d1b = 1;
  }
  if (*(char *)(param_1 + 0x68) != '\0') {
    *(undefined1 *)(param_1 + 0x68) = 1;
    return lVar3;
  }
  lVar3 = *(long *)(param_1 + 0x60);
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
  puVar6 = &UNK_0150697c;
  unaff_x20 = lVar3;
code_r0x0320d82c:
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
  *(long *)(puVar2 + -0x20) = unaff_x20;
  *(long *)(puVar2 + -0x18) = param_1;
  *(undefined1 ***)(puVar2 + -0x10) = ppuVar5;
  *(undefined **)(puVar2 + -8) = puVar6;
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
// RVA: 0x15068e0 | Atlas.Gameplay.Usables.SuperShieldUsable.GetKartTriggerEffectParameters
// ============================================================

long Atlas_Gameplay_Usables_SuperShieldUsable__GetKartTriggerEffectParameters(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = Atlas_Gameplay_Usables_SuperShieldUsable__get_SuperShieldUsableDefinition();
  if (lVar1 != 0) {
    return *(long *)(lVar1 + 0x68);
  }
  lVar2 = func_0x00f78af4();
  lVar1 = lVar2;
  if ((bRam0000000003eb4d1b & 1) == 0) {
    lVar1 = func_0x00f78a20(0x3d24ea0);
    bRam0000000003eb4d1b = 1;
  }
  if (*(char *)(lVar2 + 0x68) == '\0') {
    lVar1 = *(long *)(lVar2 + 0x60);
    if (((*(ushort *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar1 != 0) {
      /*UnityEngine.Animator$$SetTrigger*/ func_0x0320d82c(lVar1,**(undefined4 **)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8),0);
      if (*(long *)(lVar2 + 0x60) != 0) {
        lVar1 = /*UnityEngine.Animator$$ResetTrigger*/ func_0x0320d96c(*(long *)(lVar2 + 0x60),
                                *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.SuperShieldUsableBehaviour_TypeInfo*/ lRam0000000003d24ea0 + 0xb8) + 0xc),0);
        goto code_r0x01506998;
      }
    }
    lVar1 = func_0x00f78af4();
    return lVar1;
  }
code_r0x01506998:
  *(undefined1 *)(lVar2 + 0x68) = 1;
  return lVar1;
}



// ============================================================
// RVA: 0x15069b4 | Atlas.Gameplay.Usables.SuperShieldUsable..ctor
// ============================================================

void Atlas_Gameplay_Usables_SuperShieldUsable___ctor(void)

{
  return;
}



