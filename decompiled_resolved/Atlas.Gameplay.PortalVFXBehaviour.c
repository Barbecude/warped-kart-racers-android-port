// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.PortalVFXBehaviour

// ============================================================
// RVA: 0x14c3438 | Atlas.Gameplay.PortalVFXBehaviour.get_HasTargets
// ============================================================

ulong Atlas_Gameplay_PortalVFXBehaviour__get_HasTargets(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_40;
  long lStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if ((bRam0000000003eb4b23 & 1) == 0) {
    func_0x00f78a20(0x3d3d640);
    bRam0000000003eb4b23 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x20) + 0x18) < 1) {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_014c34a4;
      uVar2 = (ulong)(0 < *(int *)(*(long *)(param_1 + 0x28) + 0x18));
    }
    else {
      uVar2 = 1;
    }
    return uVar2;
  }
LAB_014c34a4:
  lVar3 = func_0x00f78af4();
  uStack_40 = 0x3eb4000;
  puStack_28 = &Atlas_Gameplay_PortalVFXBehaviour__get_IsAnimationFinished;
  lStack_38 = param_1;
  puStack_30 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar3 + 0x18) != 0) {
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_98,*(long *)(lVar3 + 0x18),0,0);
    uStack_68 = uStack_90;
    uStack_70 = uStack_98;
    uStack_58 = uStack_80;
    uStack_60 = uStack_88;
    uStack_50 = uStack_78;
    iVar1 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_70,0);
    uVar2 = 0;
    if (iVar1 == *(int *)(lVar3 + 0x48)) {
      fVar4 = (float)/*UnityEngine.AnimatorStateInfo$$get_normalizedTime*/ func_0x03213aac(&uStack_70,0);
      uVar2 = (ulong)(1.0 <= fVar4);
    }
    return uVar2;
  }
  uVar2 = func_0x00f78af4();
  return uVar2;
}



// ============================================================
// RVA: 0x14c34a8 | Atlas.Gameplay.PortalVFXBehaviour.get_IsAnimationFinished
// ============================================================

ulong Atlas_Gameplay_PortalVFXBehaviour__get_IsAnimationFinished(long param_1)

{
  int iVar1;
  ulong uVar2;
  float fVar3;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_78,*(long *)(param_1 + 0x18),0,0);
    uStack_48 = uStack_70;
    uStack_50 = uStack_78;
    uStack_38 = uStack_60;
    uStack_40 = uStack_68;
    uStack_30 = uStack_58;
    iVar1 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_50,0);
    uVar2 = 0;
    if (iVar1 == *(int *)(param_1 + 0x48)) {
      fVar3 = (float)/*UnityEngine.AnimatorStateInfo$$get_normalizedTime*/ func_0x03213aac(&uStack_50,0);
      uVar2 = (ulong)(1.0 <= fVar3);
    }
    return uVar2;
  }
  uVar2 = func_0x00f78af4();
  return uVar2;
}



// ============================================================
// RVA: 0x14c3534 | Atlas.Gameplay.PortalVFXBehaviour.OnLeavePool
// ============================================================

void Atlas_Gameplay_PortalVFXBehaviour__OnLeavePool(void)

{
  return;
}



// ============================================================
// RVA: 0x14c3538 | Atlas.Gameplay.PortalVFXBehaviour.OnEnterPool
// ============================================================

void Atlas_Gameplay_PortalVFXBehaviour__OnEnterPool(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = param_1;
  if ((bRam0000000003eb4b2c & 1) == 0) {
    lVar3 = func_0x00f78a20(0x3d3d640);
    bRam0000000003eb4b2c = 1;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0x18);
    iVar2 = iVar1 + -1;
    if (-1 < iVar2) {
      lVar3 = /*Atlas.Gameplay.PortalVFXBehaviour$$RemoveFromPortal*/ func_0x014c46bc(lVar3,iVar2,lVar5,*(undefined8 *)(param_1 + 0x30),1);
      for (iVar1 = iVar1 + -2; -1 < iVar1; iVar1 = iVar1 + -1) {
        lVar3 = /*Atlas.Gameplay.PortalVFXBehaviour$$RemoveFromPortal*/ func_0x014c46bc(lVar3,iVar1,*(undefined8 *)(param_1 + 0x20),
                                *(undefined8 *)(param_1 + 0x30),1);
      }
    }
    lVar5 = *(long *)(param_1 + 0x28);
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar5 + 0x18);
      iVar2 = iVar1 + -1;
      if (-1 < iVar2) {
        uVar4 = /*Atlas.Gameplay.PortalVFXBehaviour$$RemoveFromPortal*/ func_0x014c46bc(lVar3,iVar2,lVar5,*(undefined8 *)(param_1 + 0x38),1);
        for (iVar1 = iVar1 + -2; -1 < iVar1; iVar1 = iVar1 + -1) {
          uVar4 = /*Atlas.Gameplay.PortalVFXBehaviour$$RemoveFromPortal*/ func_0x014c46bc(uVar4,iVar1,*(undefined8 *)(param_1 + 0x28),
                                  *(undefined8 *)(param_1 + 0x38),1);
        }
      }
      return;
    }
  }
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb4b24 & 1) == 0) {
    func_0x00f78a20(0x3d361b8);
    func_0x00f78a20(0x3d1ce90);
    func_0x00f78a20(0x3d3d628);
    func_0x00f78a20(0x3d3b190);
    func_0x00f78a20(0x3d1dba8);
    func_0x00f78a20(0x3d1e260);
    bRam0000000003eb4b24 = 1;
  }
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>_TypeInfo*/ uRam0000000003d1e260);
  /*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>$$.ctor*/ func_0x02567b60(uVar4,uRam0000000003d3d628);
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>_TypeInfo*/ uRam0000000003d1e260);
  /*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>$$.ctor*/ func_0x02567b60(uVar4,uRam0000000003d3d628);
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.HashSet<Transform>_TypeInfo*/ uRam0000000003d1ce90);
  /*System.Collections.Generic.HashSet<ResourceManager.InstanceOperation>$$.ctor*/ func_0x021e8f68(uVar4,uRam0000000003d361b8);
  *(undefined8 *)(lVar3 + 0x30) = uVar4;
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.HashSet<Transform>_TypeInfo*/ uRam0000000003d1ce90);
  /*System.Collections.Generic.HashSet<ResourceManager.InstanceOperation>$$.ctor*/ func_0x021e8f68(uVar4,uRam0000000003d361b8);
  *(undefined8 *)(lVar3 + 0x38) = uVar4;
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<Material>_TypeInfo*/ uRam0000000003d1dba8);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar4,0x14,uRam0000000003d3b190);
  *(undefined8 *)(lVar3 + 0x40) = uVar4;
  return;
}



// ============================================================
// RVA: 0x14c353c | Atlas.Gameplay.PortalVFXBehaviour.Reset
// ============================================================

void Atlas_Gameplay_PortalVFXBehaviour__Reset(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = param_1;
  if ((bRam0000000003eb4b2c & 1) == 0) {
    lVar3 = func_0x00f78a20(0x3d3d640);
    bRam0000000003eb4b2c = 1;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0x18);
    iVar2 = iVar1 + -1;
    if (-1 < iVar2) {
      lVar3 = /*Atlas.Gameplay.PortalVFXBehaviour$$RemoveFromPortal*/ func_0x014c46bc(lVar3,iVar2,lVar5,*(undefined8 *)(param_1 + 0x30),1);
      for (iVar1 = iVar1 + -2; -1 < iVar1; iVar1 = iVar1 + -1) {
        lVar3 = /*Atlas.Gameplay.PortalVFXBehaviour$$RemoveFromPortal*/ func_0x014c46bc(lVar3,iVar1,*(undefined8 *)(param_1 + 0x20),
                                *(undefined8 *)(param_1 + 0x30),1);
      }
    }
    lVar5 = *(long *)(param_1 + 0x28);
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar5 + 0x18);
      iVar2 = iVar1 + -1;
      if (-1 < iVar2) {
        uVar4 = /*Atlas.Gameplay.PortalVFXBehaviour$$RemoveFromPortal*/ func_0x014c46bc(lVar3,iVar2,lVar5,*(undefined8 *)(param_1 + 0x38),1);
        for (iVar1 = iVar1 + -2; -1 < iVar1; iVar1 = iVar1 + -1) {
          uVar4 = /*Atlas.Gameplay.PortalVFXBehaviour$$RemoveFromPortal*/ func_0x014c46bc(uVar4,iVar1,*(undefined8 *)(param_1 + 0x28),
                                  *(undefined8 *)(param_1 + 0x38),1);
        }
      }
      return;
    }
  }
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb4b24 & 1) == 0) {
    func_0x00f78a20(0x3d361b8);
    func_0x00f78a20(0x3d1ce90);
    func_0x00f78a20(0x3d3d628);
    func_0x00f78a20(0x3d3b190);
    func_0x00f78a20(0x3d1dba8);
    func_0x00f78a20(0x3d1e260);
    bRam0000000003eb4b24 = 1;
  }
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>_TypeInfo*/ uRam0000000003d1e260);
  /*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>$$.ctor*/ func_0x02567b60(uVar4,uRam0000000003d3d628);
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>_TypeInfo*/ uRam0000000003d1e260);
  /*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>$$.ctor*/ func_0x02567b60(uVar4,uRam0000000003d3d628);
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.HashSet<Transform>_TypeInfo*/ uRam0000000003d1ce90);
  /*System.Collections.Generic.HashSet<ResourceManager.InstanceOperation>$$.ctor*/ func_0x021e8f68(uVar4,uRam0000000003d361b8);
  *(undefined8 *)(lVar3 + 0x30) = uVar4;
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.HashSet<Transform>_TypeInfo*/ uRam0000000003d1ce90);
  /*System.Collections.Generic.HashSet<ResourceManager.InstanceOperation>$$.ctor*/ func_0x021e8f68(uVar4,uRam0000000003d361b8);
  *(undefined8 *)(lVar3 + 0x38) = uVar4;
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<Material>_TypeInfo*/ uRam0000000003d1dba8);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar4,0x14,uRam0000000003d3b190);
  *(undefined8 *)(lVar3 + 0x40) = uVar4;
  return;
}



// ============================================================
// RVA: 0x14c3540 | Atlas.Gameplay.PortalVFXBehaviour.RemoveAllBlackHoleTargets
// ============================================================

void Atlas_Gameplay_PortalVFXBehaviour__RemoveAllBlackHoleTargets(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = param_1;
  if ((bRam0000000003eb4b2c & 1) == 0) {
    lVar3 = func_0x00f78a20(0x3d3d640);
    bRam0000000003eb4b2c = 1;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0x18);
    iVar2 = iVar1 + -1;
    if (-1 < iVar2) {
      lVar3 = /*Atlas.Gameplay.PortalVFXBehaviour$$RemoveFromPortal*/ func_0x014c46bc(lVar3,iVar2,lVar5,*(undefined8 *)(param_1 + 0x30),1);
      for (iVar1 = iVar1 + -2; -1 < iVar1; iVar1 = iVar1 + -1) {
        lVar3 = /*Atlas.Gameplay.PortalVFXBehaviour$$RemoveFromPortal*/ func_0x014c46bc(lVar3,iVar1,*(undefined8 *)(param_1 + 0x20),
                                *(undefined8 *)(param_1 + 0x30),1);
      }
    }
    lVar5 = *(long *)(param_1 + 0x28);
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar5 + 0x18);
      iVar2 = iVar1 + -1;
      if (-1 < iVar2) {
        uVar4 = /*Atlas.Gameplay.PortalVFXBehaviour$$RemoveFromPortal*/ func_0x014c46bc(lVar3,iVar2,lVar5,*(undefined8 *)(param_1 + 0x38),1);
        for (iVar1 = iVar1 + -2; -1 < iVar1; iVar1 = iVar1 + -1) {
          uVar4 = /*Atlas.Gameplay.PortalVFXBehaviour$$RemoveFromPortal*/ func_0x014c46bc(uVar4,iVar1,*(undefined8 *)(param_1 + 0x28),
                                  *(undefined8 *)(param_1 + 0x38),1);
        }
      }
      return;
    }
  }
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb4b24 & 1) == 0) {
    func_0x00f78a20(0x3d361b8);
    func_0x00f78a20(0x3d1ce90);
    func_0x00f78a20(0x3d3d628);
    func_0x00f78a20(0x3d3b190);
    func_0x00f78a20(0x3d1dba8);
    func_0x00f78a20(0x3d1e260);
    bRam0000000003eb4b24 = 1;
  }
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>_TypeInfo*/ uRam0000000003d1e260);
  /*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>$$.ctor*/ func_0x02567b60(uVar4,uRam0000000003d3d628);
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>_TypeInfo*/ uRam0000000003d1e260);
  /*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>$$.ctor*/ func_0x02567b60(uVar4,uRam0000000003d3d628);
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.HashSet<Transform>_TypeInfo*/ uRam0000000003d1ce90);
  /*System.Collections.Generic.HashSet<ResourceManager.InstanceOperation>$$.ctor*/ func_0x021e8f68(uVar4,uRam0000000003d361b8);
  *(undefined8 *)(lVar3 + 0x30) = uVar4;
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.HashSet<Transform>_TypeInfo*/ uRam0000000003d1ce90);
  /*System.Collections.Generic.HashSet<ResourceManager.InstanceOperation>$$.ctor*/ func_0x021e8f68(uVar4,uRam0000000003d361b8);
  *(undefined8 *)(lVar3 + 0x38) = uVar4;
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<Material>_TypeInfo*/ uRam0000000003d1dba8);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar4,0x14,uRam0000000003d3b190);
  *(undefined8 *)(lVar3 + 0x40) = uVar4;
  return;
}



// ============================================================
// RVA: 0x14c3608 | Atlas.Gameplay.PortalVFXBehaviour.Awake
// ============================================================

void Atlas_Gameplay_PortalVFXBehaviour__Awake(long param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4b24 & 1) == 0) {
    func_0x00f78a20(0x3d361b8);
    func_0x00f78a20(0x3d1ce90);
    func_0x00f78a20(0x3d3d628);
    func_0x00f78a20(0x3d3b190);
    func_0x00f78a20(0x3d1dba8);
    func_0x00f78a20(0x3d1e260);
    bRam0000000003eb4b24 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>_TypeInfo*/ uRam0000000003d1e260);
  /*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>$$.ctor*/ func_0x02567b60(uVar1,uRam0000000003d3d628);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>_TypeInfo*/ uRam0000000003d1e260);
  /*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>$$.ctor*/ func_0x02567b60(uVar1,uRam0000000003d3d628);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.HashSet<Transform>_TypeInfo*/ uRam0000000003d1ce90);
  /*System.Collections.Generic.HashSet<ResourceManager.InstanceOperation>$$.ctor*/ func_0x021e8f68(uVar1,uRam0000000003d361b8);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.HashSet<Transform>_TypeInfo*/ uRam0000000003d1ce90);
  /*System.Collections.Generic.HashSet<ResourceManager.InstanceOperation>$$.ctor*/ func_0x021e8f68(uVar1,uRam0000000003d361b8);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<Material>_TypeInfo*/ uRam0000000003d1dba8);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar1,0x14,uRam0000000003d3b190);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return;
}



// ============================================================
// RVA: 0x14c3744 | Atlas.Gameplay.PortalVFXBehaviour.PlayRespawnAnim
// ============================================================

/* WARNING: Possible PIC construction at 0x014c392c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c3a08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014c3930) */
/* WARNING: Removing unreachable block (ram,0x014c3934) */
/* WARNING: Removing unreachable block (ram,0x014c3984) */
/* WARNING: Removing unreachable block (ram,0x014c393c) */
/* WARNING: Removing unreachable block (ram,0x014c3a0c) */
/* WARNING: Removing unreachable block (ram,0x014c3a10) */
/* WARNING: Removing unreachable block (ram,0x014c3a20) */
/* WARNING: Removing unreachable block (ram,0x014c3a30) */
/* WARNING: Removing unreachable block (ram,0x014c3a38) */

void Atlas_Gameplay_PortalVFXBehaviour__PlayRespawnAnim
               (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x1;
  long lVar8;
  long extraout_x1_00;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar13;
  undefined *puVar14;
  uint extraout_s0;
  uint uVar15;
  uint extraout_s0_00;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar16 [16];
  
  puVar13 = &stack0xfffffffffffffff0;
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x48);
    if (pcRam0000000003ebe318 == (code *)0x0) {
      pcRam0000000003ebe318 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x032109bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebe318)(0,lVar5,uVar1,0);
    return;
  }
  puVar14 = &Atlas_Gameplay_PortalVFXBehaviour__StartEnteringPortal;
  lVar6 = func_0x00f78af4();
  uVar11 = 1;
  puVar3 = &stack0xfffffffffffffff0;
  lVar5 = *(long *)(lVar6 + 0x20);
  lVar2 = *(long *)(lVar6 + 0x30);
  lVar10 = extraout_x1;
  uVar15 = extraout_s0;
  do {
    lVar9 = lVar2;
    lVar8 = lVar5;
    *(undefined8 *)(puVar3 + -0x60) = unaff_d9;
    *(ulong *)(puVar3 + -0x58) = unaff_d8;
    *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
    *(long **)(puVar3 + -0x48) = unaff_x25;
    *(long *)(puVar3 + -0x40) = unaff_x24;
    *(long *)(puVar3 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(long *)(puVar3 + -0x28) = unaff_x21;
    *(long *)(puVar3 + -0x20) = unaff_x20;
    *(long *)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar13;
    *(undefined **)(puVar3 + -8) = puVar14;
    unaff_d9 = 0x3f000000;
    unaff_d8 = (ulong)uVar15;
    unaff_x20 = lVar9;
    if ((bRam0000000003eb4b25 & 1) == 0) {
      func_0x00f78a20(0x3d361c0);
      func_0x00f78a20(0x3d361c8);
      func_0x00f78a20(0x3d3d630);
      bRam0000000003eb4b25 = 1;
    }
    unaff_x25 = (long *)(lVar6 + 0x30);
    if (*unaff_x25 != 0) {
      unaff_x20 = lRam0000000003d361c8;
      iVar4 = /*System.Collections.Generic.HashSet<Transform>$$Contains*/ func_0x021e95a4(*unaff_x25,lVar10);
      if (iVar4 == 0) {
        unaff_x25 = (long *)(lVar6 + 0x38);
        unaff_x26 = 0x3d361c8;
        if (*unaff_x25 == 0) goto code_r0x014c3908;
        unaff_x20 = lRam0000000003d361c8;
        uVar7 = /*System.Collections.Generic.HashSet<Transform>$$Contains*/ func_0x021e95a4(*unaff_x25,lVar10);
        if ((int)uVar7 != 0) {
          plVar12 = (long *)(lVar6 + 0x28);
          goto code_r0x014c3854;
        }
      }
      else {
        plVar12 = (long *)(lVar6 + 0x20);
code_r0x014c3854:
        unaff_x20 = *plVar12;
        uVar7 = /*Atlas.Gameplay.PortalVFXBehaviour$$RemoveFromPortal*/ func_0x014c3b00(lVar6,lVar10,unaff_x20,*unaff_x25,0);
      }
      /*Atlas.Gameplay.PortalVFXBehaviour$$EnableShaderForMaterials*/ func_0x014c3bc8(uVar7,param_3);
      unaff_x26 = 0x3d361c8;
      if (lVar8 != 0) {
        *(long *)(puVar3 + -0x78) = lVar10;
        *(long *)(puVar3 + -0x70) = param_3;
        *(undefined4 *)(puVar3 + -0x68) = 0x3f000000;
        *(uint *)(puVar3 + -100) = uVar15;
        unaff_x20 = lRam0000000003d3d630;
        /*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>$$Add*/ func_0x0256888c(lVar8,puVar3 + -0x78);
        if ((lVar9 != 0) &&
           (unaff_x20 = lRam0000000003d361c0, /*System.Collections.Generic.HashSet<ResourceManager.InstanceOperation>$$Add*/ func_0x021ea048(lVar9,lVar10), unaff_x26 = 0x3d361c8,
           lVar10 != 0)) {
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar10,0);
          /*Atlas.Gameplay.PortalVFXBehaviour$$SetBlackHoleTime*/ func_0x014c3d18(lVar6,lVar10,param_3);
          return;
        }
      }
    }
code_r0x014c3908:
    auVar16 = func_0x00f78af4();
    unaff_x21 = auVar16._8_8_;
    *(long *)(puVar3 + -0xb0) = lVar6;
    *(undefined8 *)(puVar3 + -0xa8) = uVar11;
    *(long *)(puVar3 + -0xa0) = lVar10;
    *(long *)(puVar3 + -0x98) = param_3;
    *(undefined1 **)(puVar3 + -0x90) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x88) = &Atlas_Gameplay_PortalVFXBehaviour__StartEnteringPortal;
    unaff_x19 = *(long *)(auVar16._0_8_ + 0x40);
    *(long *)(puVar3 + -0xe0) = lVar6;
    *(undefined8 *)(puVar3 + -0xd8) = uVar11;
    *(long *)(puVar3 + -0xd0) = unaff_x21;
    *(long *)(puVar3 + -200) = auVar16._0_8_;
    *(undefined1 **)(puVar3 + -0xc0) = puVar3 + -0x90;
    *(undefined **)(puVar3 + -0xb8) = &UNK_014c3930;
    puVar13 = puVar3 + -0xc0;
    unaff_x22 = 0x3eb4000;
    param_3 = unaff_x19;
    if ((bRam0000000003eb4b2f & 1) == 0) {
      func_0x00f78a20(0x3d3b1a0);
      func_0x00f78a20(0x3d3b1a8);
      bRam0000000003eb4b2f = 1;
    }
    if (unaff_x19 == 0) {
      return;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(unaff_x19,uRam0000000003d3b1a8);
    if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x20) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x02427380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3b1a0 + 0x18) + 0xc0) + 0x70))
                (unaff_x19,*(undefined4 *)(unaff_x19 + 0x18),
                 *(undefined8 *)(*(long *)(unaff_x21 + 0x20) + 0x18));
      return;
    }
    puVar14 = &Atlas_Gameplay_PortalVFXBehaviour__StartExitingPortal;
    lVar6 = func_0x00f78af4();
    uVar11 = 0;
    puVar3 = puVar3 + -0xe0;
    lVar5 = *(long *)(lVar6 + 0x28);
    lVar2 = *(long *)(lVar6 + 0x38);
    lVar10 = extraout_x1_00;
    unaff_x23 = lVar9;
    unaff_x24 = lVar8;
    uVar15 = extraout_s0_00;
  } while( true );
}



// ============================================================
// RVA: 0x14c3774 | Atlas.Gameplay.PortalVFXBehaviour.StartEnteringPortal
// ============================================================

/* WARNING: Possible PIC construction at 0x014c392c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c3a08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014c3930) */
/* WARNING: Removing unreachable block (ram,0x014c3934) */
/* WARNING: Removing unreachable block (ram,0x014c3984) */
/* WARNING: Removing unreachable block (ram,0x014c393c) */
/* WARNING: Removing unreachable block (ram,0x014c3a0c) */
/* WARNING: Removing unreachable block (ram,0x014c3a10) */
/* WARNING: Removing unreachable block (ram,0x014c3a20) */
/* WARNING: Removing unreachable block (ram,0x014c3a30) */
/* WARNING: Removing unreachable block (ram,0x014c3a38) */

void Atlas_Gameplay_PortalVFXBehaviour__StartEnteringPortal
               (uint param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long extraout_x1;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  uint extraout_s0;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar10 [16];
  
  uVar8 = 1;
  puVar3 = (undefined1 *)register0x00000008;
  lVar1 = *(long *)(param_2 + 0x20);
  lVar2 = *(long *)(param_2 + 0x30);
  do {
    lVar7 = lVar2;
    lVar6 = lVar1;
    *(undefined8 *)(puVar3 + -0x60) = unaff_d9;
    *(ulong *)(puVar3 + -0x58) = unaff_d8;
    *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
    *(long **)(puVar3 + -0x48) = unaff_x25;
    *(long *)(puVar3 + -0x40) = unaff_x24;
    *(long *)(puVar3 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(long *)(puVar3 + -0x28) = unaff_x21;
    *(long *)(puVar3 + -0x20) = unaff_x20;
    *(long *)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(undefined **)(puVar3 + -8) = unaff_x30;
    unaff_d9 = 0x3f000000;
    unaff_d8 = (ulong)param_1;
    unaff_x20 = lVar7;
    if ((bRam0000000003eb4b25 & 1) == 0) {
      func_0x00f78a20(0x3d361c0);
      func_0x00f78a20(0x3d361c8);
      func_0x00f78a20(0x3d3d630);
      bRam0000000003eb4b25 = 1;
    }
    unaff_x25 = (long *)(param_2 + 0x30);
    if (*unaff_x25 != 0) {
      unaff_x20 = lRam0000000003d361c8;
      iVar4 = /*System.Collections.Generic.HashSet<Transform>$$Contains*/ func_0x021e95a4(*unaff_x25,param_3);
      if (iVar4 == 0) {
        unaff_x25 = (long *)(param_2 + 0x38);
        unaff_x26 = 0x3d361c8;
        if (*unaff_x25 == 0) goto code_r0x014c3908;
        unaff_x20 = lRam0000000003d361c8;
        uVar5 = /*System.Collections.Generic.HashSet<Transform>$$Contains*/ func_0x021e95a4(*unaff_x25,param_3);
        if ((int)uVar5 != 0) {
          plVar9 = (long *)(param_2 + 0x28);
          goto code_r0x014c3854;
        }
      }
      else {
        plVar9 = (long *)(param_2 + 0x20);
code_r0x014c3854:
        unaff_x20 = *plVar9;
        uVar5 = /*Atlas.Gameplay.PortalVFXBehaviour$$RemoveFromPortal*/ func_0x014c3b00(param_2,param_3,unaff_x20,*unaff_x25,0);
      }
      /*Atlas.Gameplay.PortalVFXBehaviour$$EnableShaderForMaterials*/ func_0x014c3bc8(uVar5,param_4);
      unaff_x26 = 0x3d361c8;
      if (lVar6 != 0) {
        *(long *)(puVar3 + -0x78) = param_3;
        *(long *)(puVar3 + -0x70) = param_4;
        *(undefined4 *)(puVar3 + -0x68) = 0x3f000000;
        *(uint *)(puVar3 + -100) = param_1;
        unaff_x20 = lRam0000000003d3d630;
        /*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>$$Add*/ func_0x0256888c(lVar6,puVar3 + -0x78);
        if ((lVar7 != 0) &&
           (unaff_x20 = lRam0000000003d361c0, /*System.Collections.Generic.HashSet<ResourceManager.InstanceOperation>$$Add*/ func_0x021ea048(lVar7,param_3), unaff_x26 = 0x3d361c8,
           param_3 != 0)) {
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(param_3,0);
          /*Atlas.Gameplay.PortalVFXBehaviour$$SetBlackHoleTime*/ func_0x014c3d18(param_2,param_3,param_4);
          return;
        }
      }
    }
code_r0x014c3908:
    auVar10 = func_0x00f78af4();
    unaff_x21 = auVar10._8_8_;
    *(long *)(puVar3 + -0xb0) = param_2;
    *(undefined8 *)(puVar3 + -0xa8) = uVar8;
    *(long *)(puVar3 + -0xa0) = param_3;
    *(long *)(puVar3 + -0x98) = param_4;
    *(undefined1 **)(puVar3 + -0x90) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x88) = &Atlas_Gameplay_PortalVFXBehaviour__StartEnteringPortal;
    unaff_x19 = *(long *)(auVar10._0_8_ + 0x40);
    *(long *)(puVar3 + -0xe0) = param_2;
    *(undefined8 *)(puVar3 + -0xd8) = uVar8;
    *(long *)(puVar3 + -0xd0) = unaff_x21;
    *(long *)(puVar3 + -200) = auVar10._0_8_;
    *(undefined1 **)(puVar3 + -0xc0) = puVar3 + -0x90;
    *(undefined **)(puVar3 + -0xb8) = &UNK_014c3930;
    unaff_x29 = puVar3 + -0xc0;
    unaff_x22 = 0x3eb4000;
    param_4 = unaff_x19;
    if ((bRam0000000003eb4b2f & 1) == 0) {
      func_0x00f78a20(0x3d3b1a0);
      func_0x00f78a20(0x3d3b1a8);
      bRam0000000003eb4b2f = 1;
    }
    if (unaff_x19 == 0) {
      return;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(unaff_x19,uRam0000000003d3b1a8);
    if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x20) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x02427380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3b1a0 + 0x18) + 0xc0) + 0x70))
                (unaff_x19,*(undefined4 *)(unaff_x19 + 0x18),
                 *(undefined8 *)(*(long *)(unaff_x21 + 0x20) + 0x18));
      return;
    }
    unaff_x30 = &Atlas_Gameplay_PortalVFXBehaviour__StartExitingPortal;
    param_2 = func_0x00f78af4();
    uVar8 = 0;
    puVar3 = puVar3 + -0xe0;
    lVar1 = *(long *)(param_2 + 0x28);
    lVar2 = *(long *)(param_2 + 0x38);
    param_3 = extraout_x1;
    unaff_x23 = lVar7;
    unaff_x24 = lVar6;
    param_1 = extraout_s0;
  } while( true );
}



// ============================================================
// RVA: 0x14c3790 | Atlas.Gameplay.PortalVFXBehaviour.StartPortal
// ============================================================

/* WARNING: Possible PIC construction at 0x014c392c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c3a08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014c3930) */
/* WARNING: Removing unreachable block (ram,0x014c3934) */
/* WARNING: Removing unreachable block (ram,0x014c3984) */
/* WARNING: Removing unreachable block (ram,0x014c393c) */
/* WARNING: Removing unreachable block (ram,0x014c3a0c) */
/* WARNING: Removing unreachable block (ram,0x014c3a10) */
/* WARNING: Removing unreachable block (ram,0x014c3a20) */
/* WARNING: Removing unreachable block (ram,0x014c3a30) */
/* WARNING: Removing unreachable block (ram,0x014c3a38) */

void Atlas_Gameplay_PortalVFXBehaviour__StartPortal
               (uint param_1,uint param_2,long param_3,long param_4,long param_5,long param_6,
               long param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x1;
  long lVar4;
  long *plVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  uint extraout_s0;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined1 auVar6 [16];
  
  do {
    lVar4 = param_5;
    lVar3 = param_4;
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_d9 = (ulong)param_2;
    unaff_d8 = (ulong)param_1;
    unaff_x20 = lVar4;
    if ((bRam0000000003eb4b25 & 1) == 0) {
      func_0x00f78a20(0x3d361c0);
      func_0x00f78a20(0x3d361c8);
      func_0x00f78a20(0x3d3d630);
      bRam0000000003eb4b25 = 1;
    }
    unaff_x25 = (long *)(param_3 + 0x30);
    if (*unaff_x25 != 0) {
      unaff_x20 = lRam0000000003d361c8;
      iVar1 = /*System.Collections.Generic.HashSet<Transform>$$Contains*/ func_0x021e95a4(*unaff_x25,param_6);
      if (iVar1 == 0) {
        unaff_x25 = (long *)(param_3 + 0x38);
        unaff_x26 = 0x3d361c8;
        if (*unaff_x25 == 0) goto LAB_014c3908;
        unaff_x20 = lRam0000000003d361c8;
        uVar2 = /*System.Collections.Generic.HashSet<Transform>$$Contains*/ func_0x021e95a4(*unaff_x25,param_6);
        if ((int)uVar2 != 0) {
          plVar5 = (long *)(param_3 + 0x28);
          goto LAB_014c3854;
        }
      }
      else {
        plVar5 = (long *)(param_3 + 0x20);
LAB_014c3854:
        unaff_x20 = *plVar5;
        uVar2 = /*Atlas.Gameplay.PortalVFXBehaviour$$RemoveFromPortal*/ func_0x014c3b00(param_3,param_6,unaff_x20,*unaff_x25,0);
      }
      /*Atlas.Gameplay.PortalVFXBehaviour$$EnableShaderForMaterials*/ func_0x014c3bc8(uVar2,param_7);
      unaff_x26 = 0x3d361c8;
      if (lVar3 != 0) {
        *(long *)((long)register0x00000008 + -0x78) = param_6;
        *(long *)((long)register0x00000008 + -0x70) = param_7;
        *(uint *)((long)register0x00000008 + -0x68) = param_2;
        *(uint *)((long)register0x00000008 + -100) = param_1;
        unaff_x20 = lRam0000000003d3d630;
        /*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>$$Add*/ func_0x0256888c(lVar3,(undefined1 *)((long)register0x00000008 + -0x78));
        if ((lVar4 != 0) &&
           (unaff_x20 = lRam0000000003d361c0, /*System.Collections.Generic.HashSet<ResourceManager.InstanceOperation>$$Add*/ func_0x021ea048(lVar4,param_6), unaff_x26 = 0x3d361c8,
           param_6 != 0)) {
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(param_6,0);
          /*Atlas.Gameplay.PortalVFXBehaviour$$SetBlackHoleTime*/ func_0x014c3d18(param_3,param_6,param_7);
          return;
        }
      }
    }
LAB_014c3908:
    auVar6 = func_0x00f78af4();
    unaff_x21 = auVar6._8_8_;
    *(long *)((long)register0x00000008 + -0xb0) = param_3;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = param_8;
    *(long *)((long)register0x00000008 + -0xa0) = param_6;
    *(long *)((long)register0x00000008 + -0x98) = param_7;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) =
         &Atlas_Gameplay_PortalVFXBehaviour__StartEnteringPortal;
    unaff_x19 = *(long *)(auVar6._0_8_ + 0x40);
    *(long *)((long)register0x00000008 + -0xe0) = param_3;
    *(undefined8 *)((long)register0x00000008 + -0xd8) = param_8;
    *(long *)((long)register0x00000008 + -0xd0) = unaff_x21;
    *(long *)((long)register0x00000008 + -200) = auVar6._0_8_;
    *(undefined1 **)((long)register0x00000008 + -0xc0) =
         (undefined1 *)((long)register0x00000008 + -0x90);
    *(undefined **)((long)register0x00000008 + -0xb8) = &UNK_014c3930;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xc0);
    unaff_x22 = 0x3eb4000;
    param_7 = unaff_x19;
    if ((bRam0000000003eb4b2f & 1) == 0) {
      func_0x00f78a20(0x3d3b1a0);
      func_0x00f78a20(0x3d3b1a8);
      bRam0000000003eb4b2f = 1;
    }
    if (unaff_x19 == 0) {
      return;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(unaff_x19,uRam0000000003d3b1a8);
    if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x20) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x02427380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3b1a0 + 0x18) + 0xc0) + 0x70))
                (unaff_x19,*(undefined4 *)(unaff_x19 + 0x18),
                 *(undefined8 *)(*(long *)(unaff_x21 + 0x20) + 0x18));
      return;
    }
    unaff_x30 = &Atlas_Gameplay_PortalVFXBehaviour__StartExitingPortal;
    param_3 = func_0x00f78af4();
    param_2 = 0x3f000000;
    param_8 = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
    param_4 = *(long *)(param_3 + 0x28);
    param_5 = *(long *)(param_3 + 0x38);
    param_6 = extraout_x1;
    unaff_x23 = lVar4;
    unaff_x24 = lVar3;
    param_1 = extraout_s0;
  } while( true );
}



// ============================================================
// RVA: 0x14c390c | Atlas.Gameplay.PortalVFXBehaviour.StartEnteringPortal
// ============================================================

/* WARNING: Possible PIC construction at 0x014c392c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c3a08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014c3930) */
/* WARNING: Removing unreachable block (ram,0x014c3934) */
/* WARNING: Removing unreachable block (ram,0x014c3984) */
/* WARNING: Removing unreachable block (ram,0x014c393c) */
/* WARNING: Removing unreachable block (ram,0x014c3a0c) */
/* WARNING: Removing unreachable block (ram,0x014c3a10) */
/* WARNING: Removing unreachable block (ram,0x014c3a20) */
/* WARNING: Removing unreachable block (ram,0x014c3a30) */
/* WARNING: Removing unreachable block (ram,0x014c3a38) */

void Atlas_Gameplay_PortalVFXBehaviour__StartEnteringPortal
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x1;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  uint extraout_s0;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  do {
    lVar3 = auVar8._8_8_;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    lVar5 = *(long *)(auVar8._0_8_ + 0x40);
    *(long *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x50) = lVar3;
    *(long *)((long)register0x00000008 + -0x48) = auVar8._0_8_;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) = 0x14c3930;
    unaff_x19 = lVar5;
    if ((bRam0000000003eb4b2f & 1) == 0) {
      func_0x00f78a20(0x3d3b1a0);
      func_0x00f78a20(0x3d3b1a8);
      bRam0000000003eb4b2f = 1;
    }
    if (lVar5 == 0) {
      return;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(lVar5,uRam0000000003d3b1a8);
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x20) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x02427380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3b1a0 + 0x18) + 0xc0) + 0x70))
                (lVar5,*(undefined4 *)(lVar5 + 0x18),*(undefined8 *)(*(long *)(lVar3 + 0x20) + 0x18)
                );
      return;
    }
    unaff_x22 = func_0x00f78af4();
    lVar4 = *(long *)(unaff_x22 + 0x28);
    lVar6 = *(long *)(unaff_x22 + 0x38);
    *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0xb8) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x26;
    *(long **)((long)register0x00000008 + -0xa8) = unaff_x25;
    *(long *)((long)register0x00000008 + -0xa0) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x98) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0x3eb4000;
    *(long *)((long)register0x00000008 + -0x88) = lVar3;
    *(long *)((long)register0x00000008 + -0x80) = param_3;
    *(long *)((long)register0x00000008 + -0x78) = lVar5;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined **)((long)register0x00000008 + -0x68) =
         &Atlas_Gameplay_PortalVFXBehaviour__StartExitingPortal;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x70);
    unaff_x21 = 0;
    unaff_d9 = 0x3f000000;
    unaff_d8 = (ulong)extraout_s0;
    param_3 = lVar6;
    if ((bRam0000000003eb4b25 & 1) == 0) {
      func_0x00f78a20(0x3d361c0);
      func_0x00f78a20(0x3d361c8);
      func_0x00f78a20(0x3d3d630);
      bRam0000000003eb4b25 = 1;
    }
    unaff_x25 = (long *)(unaff_x22 + 0x30);
    if (*unaff_x25 != 0) {
      param_3 = lRam0000000003d361c8;
      iVar1 = /*System.Collections.Generic.HashSet<Transform>$$Contains*/ func_0x021e95a4(*unaff_x25,extraout_x1);
      if (iVar1 == 0) {
        unaff_x25 = (long *)(unaff_x22 + 0x38);
        unaff_x26 = 0x3d361c8;
        if (*unaff_x25 == 0) goto LAB_014c3908;
        param_3 = lRam0000000003d361c8;
        uVar2 = /*System.Collections.Generic.HashSet<Transform>$$Contains*/ func_0x021e95a4(*unaff_x25,extraout_x1);
        if ((int)uVar2 != 0) {
          plVar7 = (long *)(unaff_x22 + 0x28);
          goto LAB_014c3854;
        }
      }
      else {
        plVar7 = (long *)(unaff_x22 + 0x20);
LAB_014c3854:
        param_3 = *plVar7;
        uVar2 = /*Atlas.Gameplay.PortalVFXBehaviour$$RemoveFromPortal*/ func_0x014c3b00(unaff_x22,extraout_x1,param_3,*unaff_x25,0);
      }
      /*Atlas.Gameplay.PortalVFXBehaviour$$EnableShaderForMaterials*/ func_0x014c3bc8(uVar2,unaff_x19);
      unaff_x26 = 0x3d361c8;
      if (lVar4 != 0) {
        *(long *)((long)register0x00000008 + -0xd8) = extraout_x1;
        *(long *)((long)register0x00000008 + -0xd0) = unaff_x19;
        *(undefined4 *)((long)register0x00000008 + -200) = 0x3f000000;
        *(uint *)((long)register0x00000008 + -0xc4) = extraout_s0;
        param_3 = lRam0000000003d3d630;
        /*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>$$Add*/ func_0x0256888c(lVar4,(undefined1 *)((long)register0x00000008 + -0xd8));
        if ((lVar6 != 0) &&
           (param_3 = lRam0000000003d361c0, /*System.Collections.Generic.HashSet<ResourceManager.InstanceOperation>$$Add*/ func_0x021ea048(lVar6,extraout_x1),
           unaff_x26 = 0x3d361c8, extraout_x1 != 0)) {
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(extraout_x1,0);
          /*Atlas.Gameplay.PortalVFXBehaviour$$SetBlackHoleTime*/ func_0x014c3d18(unaff_x22,extraout_x1,unaff_x19);
          return;
        }
      }
    }
LAB_014c3908:
    unaff_x30 = Atlas_Gameplay_PortalVFXBehaviour__StartEnteringPortal;
    auVar8 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
    unaff_x20 = extraout_x1;
    unaff_x23 = lVar6;
    unaff_x24 = lVar4;
  } while( true );
}



// ============================================================
// RVA: 0x14c3988 | Atlas.Gameplay.PortalVFXBehaviour.GetAllKartMaterials
// ============================================================

/* WARNING: Possible PIC construction at 0x014c3a08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014c3a0c) */
/* WARNING: Removing unreachable block (ram,0x014c3a10) */
/* WARNING: Removing unreachable block (ram,0x014c3a20) */
/* WARNING: Removing unreachable block (ram,0x014c3a30) */
/* WARNING: Removing unreachable block (ram,0x014c3a38) */

void Atlas_Gameplay_PortalVFXBehaviour__GetAllKartMaterials
               (undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar4;
  long extraout_x1;
  long extraout_x1_00;
  long *plVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar7;
  long unaff_x22;
  undefined8 uVar8;
  long lVar9;
  long unaff_x23;
  long lVar10;
  long unaff_x24;
  long *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar11;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined *puVar12;
  uint uVar13;
  uint extraout_s0;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar14 [16];
  long lVar3;
  long lVar5;
  
  auVar14._8_8_ = unaff_x20;
  auVar14._0_8_ = unaff_x19;
code_r0x014c3988:
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = auVar14._8_8_;
  *(long *)((long)register0x00000008 + -0x18) = auVar14._0_8_;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar11 = (undefined1 *)((long)register0x00000008 + -0x10);
  uVar8 = 0x3eb4000;
  lVar7 = param_3;
  if ((bRam0000000003eb4b2f & 1) == 0) {
    func_0x00f78a20(0x3d3b1a0);
    func_0x00f78a20(0x3d3b1a8);
    bRam0000000003eb4b2f = 1;
  }
  if (param_3 == 0) {
    return;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(param_3,uRam0000000003d3b1a8);
  if ((param_2 != 0) && (*(long *)(param_2 + 0x20) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x02427380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3b1a0 + 0x18) + 0xc0) + 0x70))
              (param_3,*(undefined4 *)(param_3 + 0x18),
               *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18));
    return;
  }
  puVar12 = &Atlas_Gameplay_PortalVFXBehaviour__StartExitingPortal;
  unaff_x22 = func_0x00f78af4();
  unaff_x21 = 0;
  puVar1 = (undefined1 *)((long)register0x00000008 + -0x30);
  lVar5 = *(long *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x38);
  lVar4 = extraout_x1_00;
  lVar9 = unaff_x23;
  lVar10 = unaff_x24;
  uVar13 = extraout_s0;
  do {
    unaff_x23 = lVar3;
    unaff_x24 = lVar5;
    *(undefined8 *)(puVar1 + -0x60) = unaff_d9;
    *(ulong *)(puVar1 + -0x58) = unaff_d8;
    *(undefined8 *)(puVar1 + -0x50) = unaff_x26;
    *(long **)(puVar1 + -0x48) = unaff_x25;
    *(long *)(puVar1 + -0x40) = lVar10;
    *(long *)(puVar1 + -0x38) = lVar9;
    *(undefined8 *)(puVar1 + -0x30) = uVar8;
    *(long *)(puVar1 + -0x28) = param_2;
    *(long *)(puVar1 + -0x20) = param_4;
    *(long *)(puVar1 + -0x18) = param_3;
    *(undefined1 **)(puVar1 + -0x10) = puVar11;
    *(undefined **)(puVar1 + -8) = puVar12;
    unaff_d9 = 0x3f000000;
    unaff_d8 = (ulong)uVar13;
    param_4 = unaff_x23;
    if ((bRam0000000003eb4b25 & 1) == 0) {
      func_0x00f78a20(0x3d361c0);
      func_0x00f78a20(0x3d361c8);
      func_0x00f78a20(0x3d3d630);
      bRam0000000003eb4b25 = 1;
    }
    unaff_x25 = (long *)(unaff_x22 + 0x30);
    if (*unaff_x25 != 0) {
      param_4 = lRam0000000003d361c8;
      iVar2 = /*System.Collections.Generic.HashSet<Transform>$$Contains*/ func_0x021e95a4(*unaff_x25,lVar4);
      if (iVar2 == 0) {
        unaff_x25 = (long *)(unaff_x22 + 0x38);
        unaff_x26 = 0x3d361c8;
        if (*unaff_x25 == 0) goto LAB_014c3908;
        param_4 = lRam0000000003d361c8;
        uVar8 = /*System.Collections.Generic.HashSet<Transform>$$Contains*/ func_0x021e95a4(*unaff_x25,lVar4);
        if ((int)uVar8 != 0) {
          plVar6 = (long *)(unaff_x22 + 0x28);
          goto LAB_014c3854;
        }
      }
      else {
        plVar6 = (long *)(unaff_x22 + 0x20);
LAB_014c3854:
        param_4 = *plVar6;
        uVar8 = /*Atlas.Gameplay.PortalVFXBehaviour$$RemoveFromPortal*/ func_0x014c3b00(unaff_x22,lVar4,param_4,*unaff_x25,0);
      }
      /*Atlas.Gameplay.PortalVFXBehaviour$$EnableShaderForMaterials*/ func_0x014c3bc8(uVar8,lVar7);
      unaff_x26 = 0x3d361c8;
      if (unaff_x24 != 0) {
        *(long *)(puVar1 + -0x78) = lVar4;
        *(long *)(puVar1 + -0x70) = lVar7;
        *(undefined4 *)(puVar1 + -0x68) = 0x3f000000;
        *(uint *)(puVar1 + -100) = uVar13;
        param_4 = lRam0000000003d3d630;
        /*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>$$Add*/ func_0x0256888c(unaff_x24,puVar1 + -0x78);
        if ((unaff_x23 != 0) &&
           (param_4 = lRam0000000003d361c0, /*System.Collections.Generic.HashSet<ResourceManager.InstanceOperation>$$Add*/ func_0x021ea048(unaff_x23,lVar4), unaff_x26 = 0x3d361c8,
           lVar4 != 0)) {
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar4,0);
          /*Atlas.Gameplay.PortalVFXBehaviour$$SetBlackHoleTime*/ func_0x014c3d18(unaff_x22,lVar4,lVar7);
          return;
        }
      }
    }
LAB_014c3908:
    auVar14 = func_0x00f78af4();
    lVar5 = auVar14._8_8_;
    lVar3 = auVar14._0_8_;
    register0x00000008 = (BADSPACEBASE *)(puVar1 + -0xb0);
    *(long *)(puVar1 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar1 + -0xa8) = unaff_x21;
    *(long *)(puVar1 + -0xa0) = lVar4;
    *(long *)(puVar1 + -0x98) = lVar7;
    *(undefined1 **)(puVar1 + -0x90) = puVar1 + -0x10;
    *(code **)(puVar1 + -0x88) = Atlas_Gameplay_PortalVFXBehaviour__StartEnteringPortal;
    unaff_x29 = puVar1 + -0x90;
    param_3 = *(long *)(lVar3 + 0x40);
    Atlas_Gameplay_PortalVFXBehaviour__GetAllKartMaterials();
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x18) == 0)) break;
    lVar4 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar5 + 0x18),0);
    lVar7 = *(long *)(lVar3 + 0x40);
    uVar13 = Atlas_Gameplay_Kart_KartVisualComposite__get_LargestVisualAxisMagnitude(lVar5,0);
    unaff_x21 = 1;
    puVar11 = *(undefined1 **)(puVar1 + -0x90);
    puVar12 = *(undefined **)(puVar1 + -0x88);
    param_4 = *(long *)(puVar1 + -0xa0);
    param_3 = *(long *)(puVar1 + -0x98);
    uVar8 = *(undefined8 *)(puVar1 + -0xb0);
    param_2 = *(long *)(puVar1 + -0xa8);
    puVar1 = puVar1 + -0x80;
    unaff_x22 = lVar3;
    lVar5 = *(long *)(lVar3 + 0x20);
    lVar3 = *(long *)(lVar3 + 0x30);
    lVar9 = unaff_x23;
    lVar10 = unaff_x24;
  } while( true );
  unaff_x30 = Atlas_Gameplay_PortalVFXBehaviour__GetAllKartMaterials;
  func_0x00f78af4();
  param_2 = extraout_x1;
  goto code_r0x014c3988;
}



// ============================================================
// RVA: 0x14c3a68 | Atlas.Gameplay.PortalVFXBehaviour.StartExitingPortal
// ============================================================

/* WARNING: Possible PIC construction at 0x014c3a08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014c3a0c) */
/* WARNING: Removing unreachable block (ram,0x014c3a10) */
/* WARNING: Removing unreachable block (ram,0x014c3a20) */
/* WARNING: Removing unreachable block (ram,0x014c3a30) */
/* WARNING: Removing unreachable block (ram,0x014c3a38) */

void Atlas_Gameplay_PortalVFXBehaviour__StartExitingPortal
               (uint param_1,long param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long extraout_x1;
  long extraout_x1_00;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  long lVar8;
  long unaff_x23;
  long lVar9;
  long unaff_x24;
  long *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  uint extraout_s0;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar10 [16];
  
code_r0x014c3a68:
  uVar6 = 0;
  puVar1 = (undefined1 *)register0x00000008;
  lVar5 = *(long *)(param_2 + 0x28);
  lVar4 = *(long *)(param_2 + 0x38);
  lVar8 = unaff_x23;
  lVar9 = unaff_x24;
  do {
    unaff_x23 = lVar4;
    unaff_x24 = lVar5;
    *(undefined8 *)(puVar1 + -0x60) = unaff_d9;
    *(ulong *)(puVar1 + -0x58) = unaff_d8;
    *(undefined8 *)(puVar1 + -0x50) = unaff_x26;
    *(long **)(puVar1 + -0x48) = unaff_x25;
    *(long *)(puVar1 + -0x40) = lVar9;
    *(long *)(puVar1 + -0x38) = lVar8;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(long *)(puVar1 + -0x28) = unaff_x21;
    *(long *)(puVar1 + -0x20) = unaff_x20;
    *(long *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(code **)(puVar1 + -8) = unaff_x30;
    unaff_d9 = 0x3f000000;
    unaff_d8 = (ulong)param_1;
    unaff_x20 = unaff_x23;
    if ((bRam0000000003eb4b25 & 1) == 0) {
      func_0x00f78a20(0x3d361c0);
      func_0x00f78a20(0x3d361c8);
      func_0x00f78a20(0x3d3d630);
      bRam0000000003eb4b25 = 1;
    }
    unaff_x25 = (long *)(param_2 + 0x30);
    if (*unaff_x25 != 0) {
      unaff_x20 = lRam0000000003d361c8;
      iVar2 = /*System.Collections.Generic.HashSet<Transform>$$Contains*/ func_0x021e95a4(*unaff_x25,param_3);
      if (iVar2 == 0) {
        unaff_x25 = (long *)(param_2 + 0x38);
        unaff_x26 = 0x3d361c8;
        if (*unaff_x25 == 0) goto LAB_014c3908;
        unaff_x20 = lRam0000000003d361c8;
        uVar3 = /*System.Collections.Generic.HashSet<Transform>$$Contains*/ func_0x021e95a4(*unaff_x25,param_3);
        if ((int)uVar3 != 0) {
          plVar7 = (long *)(param_2 + 0x28);
          goto LAB_014c3854;
        }
      }
      else {
        plVar7 = (long *)(param_2 + 0x20);
LAB_014c3854:
        unaff_x20 = *plVar7;
        uVar3 = /*Atlas.Gameplay.PortalVFXBehaviour$$RemoveFromPortal*/ func_0x014c3b00(param_2,param_3,unaff_x20,*unaff_x25,0);
      }
      /*Atlas.Gameplay.PortalVFXBehaviour$$EnableShaderForMaterials*/ func_0x014c3bc8(uVar3,param_4);
      unaff_x26 = 0x3d361c8;
      if (unaff_x24 != 0) {
        *(long *)(puVar1 + -0x78) = param_3;
        *(long *)(puVar1 + -0x70) = param_4;
        *(undefined4 *)(puVar1 + -0x68) = 0x3f000000;
        *(uint *)(puVar1 + -100) = param_1;
        unaff_x20 = lRam0000000003d3d630;
        /*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>$$Add*/ func_0x0256888c(unaff_x24,puVar1 + -0x78);
        if ((unaff_x23 != 0) &&
           (unaff_x20 = lRam0000000003d361c0, /*System.Collections.Generic.HashSet<ResourceManager.InstanceOperation>$$Add*/ func_0x021ea048(unaff_x23,param_3),
           unaff_x26 = 0x3d361c8, param_3 != 0)) {
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(param_3,0);
          /*Atlas.Gameplay.PortalVFXBehaviour$$SetBlackHoleTime*/ func_0x014c3d18(param_2,param_3,param_4);
          return;
        }
      }
    }
LAB_014c3908:
    auVar10 = func_0x00f78af4();
    lVar5 = auVar10._8_8_;
    lVar4 = auVar10._0_8_;
    *(long *)(puVar1 + -0xb0) = param_2;
    *(undefined8 *)(puVar1 + -0xa8) = uVar6;
    *(long *)(puVar1 + -0xa0) = param_3;
    *(long *)(puVar1 + -0x98) = param_4;
    *(undefined1 **)(puVar1 + -0x90) = puVar1 + -0x10;
    *(code **)(puVar1 + -0x88) = Atlas_Gameplay_PortalVFXBehaviour__StartEnteringPortal;
    unaff_x19 = *(long *)(lVar4 + 0x40);
    Atlas_Gameplay_PortalVFXBehaviour__GetAllKartMaterials();
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x18) == 0)) break;
    param_3 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar5 + 0x18),0);
    param_4 = *(long *)(lVar4 + 0x40);
    param_1 = Atlas_Gameplay_Kart_KartVisualComposite__get_LargestVisualAxisMagnitude(lVar5,0);
    uVar6 = 1;
    unaff_x29 = *(undefined1 **)(puVar1 + -0x90);
    unaff_x30 = *(code **)(puVar1 + -0x88);
    unaff_x20 = *(long *)(puVar1 + -0xa0);
    unaff_x19 = *(long *)(puVar1 + -0x98);
    unaff_x22 = *(undefined8 *)(puVar1 + -0xb0);
    unaff_x21 = *(long *)(puVar1 + -0xa8);
    puVar1 = puVar1 + -0x80;
    param_2 = lVar4;
    lVar5 = *(long *)(lVar4 + 0x20);
    lVar4 = *(long *)(lVar4 + 0x30);
    lVar8 = unaff_x23;
    lVar9 = unaff_x24;
  } while( true );
  func_0x00f78af4();
  register0x00000008 = (BADSPACEBASE *)(puVar1 + -0xe0);
  *(long *)(puVar1 + -0xe0) = param_2;
  *(undefined8 *)(puVar1 + -0xd8) = uVar6;
  *(long *)(puVar1 + -0xd0) = lVar5;
  *(long *)(puVar1 + -200) = lVar4;
  *(undefined1 **)(puVar1 + -0xc0) = puVar1 + -0x90;
  *(code **)(puVar1 + -0xb8) = Atlas_Gameplay_PortalVFXBehaviour__GetAllKartMaterials;
  unaff_x29 = puVar1 + -0xc0;
  unaff_x22 = 0x3eb4000;
  param_4 = unaff_x19;
  if ((bRam0000000003eb4b2f & 1) == 0) {
    func_0x00f78a20(0x3d3b1a0);
    func_0x00f78a20(0x3d3b1a8);
    bRam0000000003eb4b2f = 1;
  }
  if (unaff_x19 == 0) {
    return;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(unaff_x19,uRam0000000003d3b1a8);
  if ((extraout_x1 != 0) && (*(long *)(extraout_x1 + 0x20) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x02427380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3b1a0 + 0x18) + 0xc0) + 0x70))
              (unaff_x19,*(undefined4 *)(unaff_x19 + 0x18),
               *(undefined8 *)(*(long *)(extraout_x1 + 0x20) + 0x18));
    return;
  }
  unaff_x30 = Atlas_Gameplay_PortalVFXBehaviour__StartExitingPortal;
  param_2 = func_0x00f78af4();
  param_3 = extraout_x1_00;
  unaff_x21 = extraout_x1;
  param_1 = extraout_s0;
  goto code_r0x014c3a68;
}



// ============================================================
// RVA: 0x14c3a84 | Atlas.Gameplay.PortalVFXBehaviour.StartExitingPortal
// ============================================================

/* WARNING: Possible PIC construction at 0x014c3868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c38e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c3a08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c4744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c3e0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c3e88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c3ee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c3f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c41d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c4214: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014c3f5c) */
/* WARNING: Removing unreachable block (ram,0x014c3f60) */
/* WARNING: Removing unreachable block (ram,0x014c3f64) */
/* WARNING: Removing unreachable block (ram,0x014c3ee8) */
/* WARNING: Removing unreachable block (ram,0x014c3eec) */
/* WARNING: Removing unreachable block (ram,0x014c3ef4) */
/* WARNING: Removing unreachable block (ram,0x014c3f80) */
/* WARNING: Removing unreachable block (ram,0x014c3f14) */
/* WARNING: Removing unreachable block (ram,0x014c3e8c) */
/* WARNING: Removing unreachable block (ram,0x014c3e90) */
/* WARNING: Removing unreachable block (ram,0x014c3e10) */
/* WARNING: Removing unreachable block (ram,0x014c3e14) */
/* WARNING: Removing unreachable block (ram,0x014c3e1c) */
/* WARNING: Removing unreachable block (ram,0x014c3eac) */
/* WARNING: Removing unreachable block (ram,0x014c3e3c) */
/* WARNING: Removing unreachable block (ram,0x014c4748) */
/* WARNING: Removing unreachable block (ram,0x014c3a0c) */
/* WARNING: Removing unreachable block (ram,0x014c3a10) */
/* WARNING: Removing unreachable block (ram,0x014c3a20) */
/* WARNING: Removing unreachable block (ram,0x014c3a30) */
/* WARNING: Removing unreachable block (ram,0x014c3a38) */
/* WARNING: Removing unreachable block (ram,0x014c38e8) */
/* WARNING: Removing unreachable block (ram,0x014c41dc) */
/* WARNING: Removing unreachable block (ram,0x014c41e4) */
/* WARNING: Removing unreachable block (ram,0x014c41fc) */
/* WARNING: Removing unreachable block (ram,0x014c4200) */
/* WARNING: Removing unreachable block (ram,0x014c4218) */
/* WARNING: Removing unreachable block (ram,0x014c4220) */
/* WARNING: Removing unreachable block (ram,0x014c4204) */

long Atlas_Gameplay_PortalVFXBehaviour__StartExitingPortal
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,float param_5,
               long param_6,ulong param_7,long param_8,undefined8 param_9,long param_10)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int extraout_w1;
  int extraout_w1_00;
  ulong extraout_x1;
  long lVar18;
  long extraout_x1_00;
  ulong extraout_x1_01;
  long extraout_x1_02;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  long unaff_x19;
  int iVar22;
  long unaff_x20;
  ulong uVar23;
  ulong unaff_x21;
  long unaff_x22;
  long lVar24;
  long lVar25;
  long unaff_x23;
  long lVar26;
  long unaff_x24;
  long *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar27;
  undefined *puVar28;
  code *unaff_x30;
  float fVar29;
  float extraout_s0;
  float fVar30;
  float extraout_s0_00;
  float fVar31;
  float extraout_s0_01;
  uint extraout_s0_02;
  float extraout_s0_03;
  float fVar32;
  float fVar33;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined1 auVar34 [16];
  undefined1 *puVar8;
  
  puVar6 = &stack0xffffffffffffffd0;
  puVar27 = &stack0xfffffffffffffff0;
  lVar19 = *(long *)(param_6 + 0x40);
  Atlas_Gameplay_PortalVFXBehaviour__GetAllKartMaterials();
  if ((param_7 != 0) && (*(long *)(param_7 + 0x18) != 0)) {
    uVar14 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(param_7 + 0x18),0);
    lVar24 = *(long *)(param_6 + 0x40);
    fVar30 = (float)Atlas_Gameplay_Kart_KartVisualComposite__get_LargestVisualAxisMagnitude
                              (param_7,0);
    uVar20 = 0;
    puVar5 = (undefined1 *)register0x00000008;
    lVar13 = param_6;
    lVar19 = *(long *)(param_6 + 0x28);
    lVar18 = *(long *)(param_6 + 0x38);
    lVar25 = unaff_x23;
    lVar26 = unaff_x24;
    do {
      unaff_x23 = lVar18;
      unaff_x24 = lVar19;
      auVar34._8_8_ = uVar14;
      auVar34._0_8_ = lVar13;
      param_2 = 0.5;
      puVar7 = puVar5 + -0x80;
      puVar6 = puVar5 + -0x80;
      *(ulong *)(puVar5 + -0x60) = unaff_d9;
      *(ulong *)(puVar5 + -0x58) = unaff_d8;
      *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
      *(long **)(puVar5 + -0x48) = unaff_x25;
      *(long *)(puVar5 + -0x40) = lVar26;
      *(long *)(puVar5 + -0x38) = lVar25;
      *(long *)(puVar5 + -0x30) = unaff_x22;
      *(ulong *)(puVar5 + -0x28) = unaff_x21;
      *(long *)(puVar5 + -0x20) = unaff_x20;
      *(long *)(puVar5 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar5 + -0x10) = unaff_x29;
      *(code **)(puVar5 + -8) = unaff_x30;
      puVar27 = puVar5 + -0x10;
      unaff_d9 = 0x3f000000;
      unaff_d8 = (ulong)(uint)fVar30;
      unaff_x20 = unaff_x23;
      if ((bRam0000000003eb4b25 & 1) == 0) {
        func_0x00f78a20(0x3d361c0);
        func_0x00f78a20(0x3d361c8);
        func_0x00f78a20(0x3d3d630);
        bRam0000000003eb4b25 = 1;
      }
      unaff_x25 = (long *)(lVar13 + 0x30);
      if (*unaff_x25 != 0) {
        unaff_x20 = lRam0000000003d361c8;
        iVar9 = /*System.Collections.Generic.HashSet<Transform>$$Contains*/ func_0x021e95a4(*unaff_x25,uVar14);
        if (iVar9 != 0) {
          plVar15 = (long *)(lVar13 + 0x20);
LAB_014c3854:
          lVar19 = *plVar15;
          param_8 = *unaff_x25;
          param_10 = 0;
          puVar28 = &UNK_014c386c;
          param_6 = lVar24;
          param_7 = uVar14;
          unaff_x21 = uVar20;
          unaff_x22 = lVar13;
          goto code_r0x014c3b00;
        }
        unaff_x25 = (long *)(lVar13 + 0x38);
        unaff_x26 = 0x3d361c8;
        if (*unaff_x25 != 0) {
          unaff_x20 = lRam0000000003d361c8;
          uVar11 = /*System.Collections.Generic.HashSet<Transform>$$Contains*/ func_0x021e95a4(*unaff_x25,uVar14);
          if ((int)uVar11 != 0) {
            plVar15 = (long *)(lVar13 + 0x28);
            goto LAB_014c3854;
          }
          /*Atlas.Gameplay.PortalVFXBehaviour$$EnableShaderForMaterials*/ func_0x014c3bc8(uVar11,lVar24);
          unaff_x26 = 0x3d361c8;
          if (unaff_x24 != 0) {
            *(ulong *)(puVar5 + -0x78) = uVar14;
            *(long *)(puVar5 + -0x70) = lVar24;
            *(undefined4 *)(puVar5 + -0x68) = 0x3f000000;
            *(float *)(puVar5 + -100) = fVar30;
            unaff_x20 = lRam0000000003d3d630;
            /*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>$$Add*/ func_0x0256888c(unaff_x24,puVar5 + -0x78);
            if ((unaff_x23 != 0) &&
               (unaff_x20 = lRam0000000003d361c0, /*System.Collections.Generic.HashSet<ResourceManager.InstanceOperation>$$Add*/ func_0x021ea048(unaff_x23,uVar14),
               unaff_x26 = 0x3d361c8, uVar14 != 0)) {
              fVar29 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(uVar14,0);
              param_5 = 1.0;
              if ((int)uVar20 == 0) {
                param_5 = 0.0;
              }
              puVar28 = &UNK_014c38e8;
              lVar19 = lVar24;
              uVar23 = uVar14;
              lVar18 = lVar13;
              goto code_r0x014c3d18;
            }
          }
        }
      }
      auVar34 = func_0x00f78af4();
      lVar19 = auVar34._8_8_;
      lVar18 = auVar34._0_8_;
      *(long *)(puVar5 + -0xb0) = lVar13;
      *(ulong *)(puVar5 + -0xa8) = uVar20;
      *(ulong *)(puVar5 + -0xa0) = uVar14;
      *(long *)(puVar5 + -0x98) = lVar24;
      *(undefined1 **)(puVar5 + -0x90) = puVar27;
      *(code **)(puVar5 + -0x88) = Atlas_Gameplay_PortalVFXBehaviour__StartEnteringPortal;
      unaff_x19 = *(long *)(lVar18 + 0x40);
      Atlas_Gameplay_PortalVFXBehaviour__GetAllKartMaterials();
      lVar25 = unaff_x23;
      lVar26 = unaff_x24;
      if ((lVar19 == 0) || (*(long *)(lVar19 + 0x18) == 0)) {
        auVar34 = func_0x00f78af4();
        unaff_x21 = auVar34._8_8_;
        lVar12 = auVar34._0_8_;
        *(long *)(puVar5 + -0xe0) = lVar13;
        *(ulong *)(puVar5 + -0xd8) = uVar20;
        *(long *)(puVar5 + -0xd0) = lVar19;
        *(long *)(puVar5 + -200) = lVar18;
        *(undefined1 **)(puVar5 + -0xc0) = puVar5 + -0x90;
        *(code **)(puVar5 + -0xb8) = Atlas_Gameplay_PortalVFXBehaviour__GetAllKartMaterials;
        unaff_x29 = puVar5 + -0xc0;
        unaff_x22 = 0x3eb4000;
        lVar24 = unaff_x19;
        if ((bRam0000000003eb4b2f & 1) == 0) {
          func_0x00f78a20(0x3d3b1a0);
          lVar12 = func_0x00f78a20(0x3d3b1a8);
          bRam0000000003eb4b2f = 1;
        }
        if (unaff_x19 == 0) {
          return lVar12;
        }
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(unaff_x19,uRam0000000003d3b1a8);
        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x20) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x02427380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar19 = (*(code *)**(undefined8 **)
                               (*(long *)(*(long *)(lRam0000000003d3b1a0 + 0x18) + 0xc0) + 0x70))
                             (unaff_x19,*(undefined4 *)(unaff_x19 + 0x18),
                              *(undefined8 *)(*(long *)(unaff_x21 + 0x20) + 0x18));
          return lVar19;
        }
        unaff_x30 = Atlas_Gameplay_PortalVFXBehaviour__StartExitingPortal;
        lVar13 = func_0x00f78af4();
        uVar20 = 0;
        puVar5 = puVar5 + -0xe0;
        lVar19 = *(long *)(lVar13 + 0x28);
        lVar18 = *(long *)(lVar13 + 0x38);
        uVar14 = extraout_x1;
        fVar30 = extraout_s0;
      }
      else {
        uVar14 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar19 + 0x18),0);
        lVar24 = *(long *)(lVar18 + 0x40);
        fVar30 = (float)Atlas_Gameplay_Kart_KartVisualComposite__get_LargestVisualAxisMagnitude
                                  (lVar19,0);
        uVar20 = 1;
        unaff_x29 = *(undefined1 **)(puVar5 + -0x90);
        unaff_x30 = *(code **)(puVar5 + -0x88);
        unaff_x20 = *(long *)(puVar5 + -0xa0);
        unaff_x19 = *(long *)(puVar5 + -0x98);
        unaff_x22 = *(long *)(puVar5 + -0xb0);
        unaff_x21 = *(ulong *)(puVar5 + -0xa8);
        puVar5 = puVar5 + -0x80;
        lVar13 = lVar18;
        lVar19 = *(long *)(lVar18 + 0x20);
        lVar18 = *(long *)(lVar18 + 0x30);
      }
    } while( true );
  }
  puVar28 = &Atlas_Gameplay_PortalVFXBehaviour__RemoveFromPortal;
  auVar34 = func_0x00f78af4();
code_r0x014c3b00:
  lVar18 = auVar34._8_8_;
  lVar24 = auVar34._0_8_;
  puVar8 = puVar6 + -0x40;
  *(long *)(puVar6 + -0x40) = unaff_x24;
  *(long *)(puVar6 + -0x38) = unaff_x23;
  *(long *)(puVar6 + -0x30) = unaff_x22;
  *(ulong *)(puVar6 + -0x28) = unaff_x21;
  *(ulong *)(puVar6 + -0x20) = param_7;
  *(long *)(puVar6 + -0x18) = param_6;
  *(undefined1 **)(puVar6 + -0x10) = puVar27;
  *(undefined **)(puVar6 + -8) = puVar28;
  puVar27 = puVar6 + -0x10;
  lVar13 = lVar19;
  fVar30 = param_4;
  if ((bRam0000000003eb4b2b & 1) == 0) {
    func_0x00f78a20(0x3d3d640);
    lVar24 = func_0x00f78a20(0x3d3d648);
    bRam0000000003eb4b2b = 1;
    fVar30 = param_4;
  }
  if (lVar19 == 0) {
    puVar28 = &Atlas_Gameplay_PortalVFXBehaviour__EnableShaderForMaterials;
    func_0x00f78af4(lVar24);
    uVar20 = 0;
    lVar19 = extraout_x1_00;
    goto code_r0x014c3bc8;
  }
  uVar14 = (ulong)*(uint *)(lVar19 + 0x18);
  do {
    uVar20 = uVar14;
    uVar3 = (int)uVar20 - 1;
    uVar14 = (ulong)uVar3;
    if ((int)uVar3 < 0) {
      return lVar24;
    }
    if (*(uint *)(lVar19 + 0x18) <= uVar3) {
      lVar24 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
  } while (*(long *)(*(long *)(lVar19 + 0x10) + uVar14 * 0x18 + 0x20) != lVar18);
  uVar11 = *(undefined8 *)(puVar6 + -0x40);
  *(undefined8 *)(puVar6 + -0x40) = uVar11;
  *(undefined8 *)(puVar6 + -0x38) = *(undefined8 *)(puVar6 + -0x38);
  *(undefined8 *)(puVar6 + -0x30) = *(undefined8 *)(puVar6 + -0x30);
  *(undefined8 *)(puVar6 + -0x28) = *(undefined8 *)(puVar6 + -0x28);
  *(undefined8 *)(puVar6 + -0x20) = *(undefined8 *)(puVar6 + -0x20);
  *(undefined8 *)(puVar6 + -0x18) = *(undefined8 *)(puVar6 + -0x18);
  *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar6 + -0x10);
  *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
  if ((bRam0000000003eb4b2a & 1) == 0) {
    func_0x00f78a20(0x3d361d0);
    func_0x00f78a20(0x3d3d638);
    func_0x00f78a20(0x3d3d648);
    bRam0000000003eb4b2a = 1;
  }
  if ((int)param_10 == 0) {
    if (lVar19 != 0) {
      if (*(uint *)(lVar19 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (param_8 != 0) {
        /*System.Collections.Generic.HashSet<ResourceManager.InstanceOperation>$$Remove*/ func_0x021e9740(param_8,*(undefined8 *)
                                 (*(long *)(lVar19 + 0x10) + (long)(int)uVar3 * 0x18 + 0x20),
                        uRam0000000003d361d0);
        uVar11 = *(undefined8 *)(puVar6 + -0x30);
        uVar1 = *(undefined8 *)(puVar6 + -0x28);
        *(undefined8 *)(puVar6 + -0x20) = *(undefined8 *)(puVar6 + -0x20);
        *(undefined8 *)(puVar6 + -0x18) = *(undefined8 *)(puVar6 + -0x18);
        *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar6 + -0x10);
        *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
        uVar21 = *(uint *)(lVar19 + 0x18);
        lVar24 = lVar19;
        uVar16 = uRam0000000003d3d638;
        if (uVar21 <= uVar3) {
          lVar24 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar21 = *(uint *)(lVar19 + 0x18);
        }
        uVar21 = uVar21 - 1;
        *(uint *)(lVar19 + 0x18) = uVar21;
        if (uVar21 - uVar3 != 0 && (int)uVar3 <= (int)uVar21) {
          uVar16 = *(undefined8 *)(lVar19 + 0x10);
          lVar24 = /*System.Array$$Copy*/ func_0x0292b4cc(uVar16,uVar20,uVar16,uVar14,uVar21 - uVar3,0);
          uVar21 = *(uint *)(lVar19 + 0x18);
        }
        lVar13 = *(long *)(lVar19 + 0x10);
        if (lVar13 == 0) {
          func_0x00f78af4();
        }
        else if (uVar21 < *(uint *)(lVar13 + 0x18)) {
          lVar13 = lVar13 + (long)(int)uVar21 * 0x18;
          *(undefined8 *)(lVar13 + 0x20) = 0;
          *(undefined8 *)(lVar13 + 0x28) = 0;
          *(undefined8 *)(lVar13 + 0x30) = 0;
          *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
          return lVar24;
        }
        uVar17 = func_0x00f78b24();
        auVar34 = func_0x00f78ac0(uVar17,0);
        lVar24 = auVar34._0_8_;
        *(undefined8 *)(puVar6 + -0x50) = uVar11;
        *(undefined8 *)(puVar6 + -0x48) = uVar1;
        *(ulong *)(puVar6 + -0x40) = uVar14;
        *(long *)(puVar6 + -0x38) = lVar19;
        *(undefined1 **)(puVar6 + -0x30) = puVar6 + -0x10;
        *(undefined **)(puVar6 + -0x28) =
             &System_Collections_Generic_List_PortalVFXBehaviour_BlackHoleTarget___RemoveRange;
        iVar9 = auVar34._8_4_;
        iVar22 = (int)uVar16;
        lVar19 = lVar24;
        if (iVar9 < 0) {
          lVar19 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
        }
        if (iVar22 < 0) {
          lVar19 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
        }
        if (*(int *)(lVar24 + 0x18) - iVar9 < iVar22) {
          lVar19 = /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
        }
        if (0 < iVar22) {
          iVar2 = *(int *)(lVar24 + 0x18) - iVar22;
          *(int *)(lVar24 + 0x18) = iVar2;
          if (iVar2 - iVar9 != 0 && iVar9 <= iVar2) {
            /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(lVar24 + 0x10),iVar22 + iVar9,
                            *(undefined8 *)(lVar24 + 0x10),auVar34._8_8_,iVar2 - iVar9,0);
            iVar2 = *(int *)(lVar24 + 0x18);
          }
          lVar19 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar24 + 0x10),iVar2,uVar16,0);
          *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
        }
        return lVar19;
      }
    }
  }
  else if (lVar19 != 0) {
    if (*(uint *)(lVar19 + 0x18) <= uVar3) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar24 = *(long *)(*(long *)(lVar19 + 0x10) + (long)(int)uVar3 * 0x18 + 0x28);
    *(long *)(puVar6 + -0x70) = param_10;
    *(long *)(puVar6 + -0x68) = param_8;
    *(long *)(puVar6 + -0x60) = lVar19;
    *(ulong *)(puVar6 + -0x58) = uVar14;
    *(undefined1 **)(puVar6 + -0x50) = puVar6 + -0x10;
    *(undefined **)(puVar6 + -0x48) = &UNK_014c4748;
    if ((bRam0000000003eb4b2e & 1) == 0) {
      func_0x00f78a20(0x3d329e0);
      func_0x00f78a20(0x3d329e8);
      func_0x00f78a20(0x3d329f0);
      func_0x00f78a20(0x3d3b1b0);
      func_0x00f78a20(0x3d69548);
      bRam0000000003eb4b2e = 1;
    }
    *(undefined8 *)(puVar6 + -0x88) = 0;
    *(undefined8 *)(puVar6 + -0x80) = 0;
    *(undefined8 *)(puVar6 + -0x78) = 0;
    if (lVar24 != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar6 + -0x88,lVar24,uRam0000000003d3b1b0);
      while( true ) {
        uVar14 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar6 + -0x88,uRam0000000003d329e8);
        if ((uVar14 & 1) == 0) {
          lVar19 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar6 + -0x88,uRam0000000003d329e0);
          return lVar19;
        }
        lVar19 = *(long *)(puVar6 + -0x78);
        if (lVar19 == 0) break;
        uVar14 = /*UnityEngine.Material$$IsKeywordEnabled*/ func_0x03238a0c(lVar19,/*STR('BLACKHOLE')*/ uRam0000000003d69548,0);
        if ((uVar14 & 1) != 0) {
          /*UnityEngine.Material$$DisableKeyword*/ func_0x032389bc(lVar19,/*STR('BLACKHOLE')*/ uRam0000000003d69548,0);
        }
      }
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x14c40bc);
      (*pcVar4)();
    }
    func_0x00f78af4();
    lVar19 = 0;
    if (extraout_w1_00 == 1) {
      plVar15 = (long *)___cxa_begin_catch();
      lVar19 = *plVar15;
      ___cxa_end_catch();
      lVar24 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar6 + -0x88,uRam0000000003eb4000);
      if (lVar19 == 0) {
        return lVar24;
      }
      func_0x00f78ac0(lVar19,0);
    }
    lVar13 = __Unwind_Resume();
    puVar7 = puVar6 + -0x110;
    *(ulong *)(puVar6 + -0xf0) = unaff_d11;
    *(ulong *)(puVar6 + -0xe8) = unaff_d10;
    *(ulong *)(puVar6 + -0xe0) = unaff_d9;
    *(ulong *)(puVar6 + -0xd8) = unaff_d8;
    *(undefined8 *)(puVar6 + -0xd0) = uVar11;
    *(undefined8 *)(puVar6 + -200) = 0x3eb4000;
    *(long *)(puVar6 + -0xc0) = param_10;
    *(long *)(puVar6 + -0xb8) = param_8;
    *(undefined8 *)(puVar6 + -0xb0) = 0x3eb4000;
    *(long *)(puVar6 + -0xa8) = lVar19;
    *(undefined1 **)(puVar6 + -0xa0) = puVar6 + -0x50;
    *(undefined **)(puVar6 + -0x98) = &Atlas_Gameplay_PortalVFXBehaviour__UpdateEnterPortal;
    puVar27 = puVar6 + -0xa0;
    unaff_d8 = (ulong)(uint)extraout_s0_03;
    lVar19 = lVar13;
    if ((bRam0000000003eb4b26 & 1) == 0) {
      func_0x00f78a20(0x3d3d640);
      func_0x00f78a20(0x3d3d648);
      lVar19 = func_0x00f78a20(0x3d3d650);
      bRam0000000003eb4b26 = 1;
    }
    lVar24 = *(long *)(lVar13 + 0x20);
    if (lVar24 != 0) {
      uVar3 = *(int *)(lVar24 + 0x18) - 1;
      uVar23 = (ulong)uVar3;
      if ((int)uVar3 < 0) {
        return lVar19;
      }
      if (*(uint *)(lVar24 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar19 = *(long *)(lVar24 + 0x10) + uVar23 * 0x18;
      uVar14 = *(ulong *)(lVar19 + 0x20);
      lVar24 = *(long *)(lVar19 + 0x28);
      param_5 = *(float *)(lVar19 + 0x30);
      fVar30 = *(float *)(lVar19 + 0x34);
      unaff_d9 = (ulong)(uint)fVar30;
      lVar19 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar13,0);
      if (lVar19 != 0) {
        param_5 = param_5 - extraout_s0_03;
        unaff_d11 = (ulong)(uint)param_5;
        param_5 = param_5 + param_5;
        unaff_d10 = (ulong)(uint)param_5;
        fVar29 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar19,0);
        puVar28 = &UNK_014c41dc;
        lVar19 = lVar13;
        uVar20 = uVar14;
        lVar18 = lVar24;
code_r0x014c3d18:
        while( true ) {
          *(undefined8 *)(puVar7 + -0x50) = unaff_d13;
          *(undefined8 *)(puVar7 + -0x48) = unaff_d12;
          *(ulong *)(puVar7 + -0x40) = unaff_d11;
          *(ulong *)(puVar7 + -0x38) = unaff_d10;
          *(ulong *)(puVar7 + -0x30) = unaff_d9;
          *(ulong *)(puVar7 + -0x28) = unaff_d8;
          *(ulong *)(puVar7 + -0x20) = uVar23;
          *(long *)(puVar7 + -0x18) = lVar19;
          *(undefined1 **)(puVar7 + -0x10) = puVar27;
          *(undefined **)(puVar7 + -8) = puVar28;
          if (uVar14 != 0) {
            fVar32 = param_2;
            fVar33 = param_3;
            fVar31 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(uVar14,0);
            *(float *)(puVar7 + -0x60) = fVar31 - fVar29;
            *(float *)(puVar7 + -0x5c) = fVar32 - param_2;
            *(float *)(puVar7 + -0x58) = fVar33 - param_3;
            uVar11 = /*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc(puVar7 + -0x60,0);
            fVar32 = fVar30 * 0.5 + extraout_s0_01 * 0.5;
            lVar19 = /*Atlas.Gameplay.PortalVFXBehaviour$$SetBlackHoleW*/ func_0x014c43f8(fVar29,param_2,param_3,
                                     fVar32 + (((extraout_s0_01 * 0.5 - fVar30 * 0.5) + 1.0) -
                                              fVar32) * param_5,uVar11,lVar24);
            return lVar19;
          }
          param_10 = func_0x00f78af4(lVar13);
          puVar8 = puVar7 + -0xb0;
          *(ulong *)(puVar7 + -0xb0) = unaff_d11;
          *(ulong *)(puVar7 + -0xa8) = unaff_d10;
          *(ulong *)(puVar7 + -0xa0) = unaff_d9;
          *(ulong *)(puVar7 + -0x98) = unaff_d8;
          *(long *)(puVar7 + -0x90) = lVar18;
          *(ulong *)(puVar7 + -0x88) = uVar20;
          *(ulong *)(puVar7 + -0x80) = uVar23;
          *(long *)(puVar7 + -0x78) = lVar19;
          *(undefined1 **)(puVar7 + -0x70) = puVar7 + -0x10;
          *(undefined **)(puVar7 + -0x68) =
               &Atlas_Gameplay_PortalVFXBehaviour__SetEnteringTimeForKart;
          puVar27 = puVar7 + -0x70;
          unaff_d8 = (ulong)extraout_s0_02;
          lVar13 = *(long *)(param_10 + 0x40);
          Atlas_Gameplay_PortalVFXBehaviour__GetAllKartMaterials
                    (param_10,extraout_x1_02,lVar13,lVar24);
          lVar19 = *(long *)(param_10 + 0x40);
          puVar28 = &UNK_014c3e10;
          param_8 = extraout_x1_02;
code_r0x014c3bc8:
          puVar7 = puVar8 + -0x50;
          *(long *)(puVar8 + -0x30) = lVar18;
          *(ulong *)(puVar8 + -0x28) = uVar20;
          *(long *)(puVar8 + -0x20) = param_8;
          *(long *)(puVar8 + -0x18) = param_10;
          *(undefined1 **)(puVar8 + -0x10) = puVar27;
          *(undefined **)(puVar8 + -8) = puVar28;
          puVar27 = puVar8 + -0x10;
          uVar23 = 0x3eb4000;
          lVar24 = lVar13;
          if ((bRam0000000003eb4b2d & 1) == 0) {
            func_0x00f78a20(0x3d329e0);
            func_0x00f78a20(0x3d329e8);
            func_0x00f78a20(0x3d329f0);
            func_0x00f78a20(0x3d3b1b0);
            func_0x00f78a20(0x3d69548);
            bRam0000000003eb4b2d = 1;
            lVar24 = lVar13;
          }
          *(undefined8 *)(puVar8 + -0x48) = 0;
          *(undefined8 *)(puVar8 + -0x40) = 0;
          *(undefined8 *)(puVar8 + -0x38) = 0;
          if (lVar19 != 0) break;
          func_0x00f78af4();
          lVar19 = 0;
          if (extraout_w1 == 1) {
            plVar15 = (long *)___cxa_begin_catch();
            lVar19 = *plVar15;
            ___cxa_end_catch();
            lVar13 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar8 + -0x48,uRam0000000003eb4000);
            if (lVar19 == 0) {
              return lVar13;
            }
            func_0x00f78ac0(lVar19,0);
          }
          puVar28 = &Atlas_Gameplay_PortalVFXBehaviour__SetBlackHoleTime;
          lVar13 = __Unwind_Resume();
          uVar14 = extraout_x1_01;
          fVar29 = extraout_s0_00;
        }
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar8 + -0x48,lVar19,uRam0000000003d3b1b0);
        while( true ) {
          uVar14 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar8 + -0x48,uRam0000000003d329e8);
          if ((uVar14 & 1) == 0) {
            lVar19 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar8 + -0x48,uRam0000000003d329e0);
            return lVar19;
          }
          lVar19 = *(long *)(puVar8 + -0x38);
          if (lVar19 == 0) break;
          uVar14 = /*UnityEngine.Material$$IsKeywordEnabled*/ func_0x03238a0c(lVar19,/*STR('BLACKHOLE')*/ uRam0000000003d69548,0);
          if ((uVar14 & 1) == 0) {
            /*UnityEngine.Material$$EnableKeyword*/ func_0x0323896c(lVar19,/*STR('BLACKHOLE')*/ uRam0000000003d69548,0);
          }
        }
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x14c3cd4);
        (*pcVar4)();
      }
    }
    lVar19 = func_0x00f78af4();
    return lVar19;
  }
  lVar24 = func_0x00f78af4();
  *(long *)(puVar6 + -0x70) = param_10;
  *(long *)(puVar6 + -0x68) = param_8;
  *(long *)(puVar6 + -0x60) = lVar19;
  *(ulong *)(puVar6 + -0x58) = uVar14;
  *(undefined1 **)(puVar6 + -0x50) = puVar6 + -0x10;
  *(undefined **)(puVar6 + -0x48) = &Atlas_Gameplay_PortalVFXBehaviour___ctor;
  if ((bRam0000000003eb4b30 & 1) == 0) {
    func_0x00f78a20(0x3d68f70);
    bRam0000000003eb4b30 = 1;
  }
  uVar10 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Anim_PortalRespawn')*/ uRam0000000003d68f70,0);
  *(undefined4 *)(lVar24 + 0x48) = uVar10;
  *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)(puVar6 + -0x70);
  *(undefined8 *)(puVar6 + -0x68) = *(undefined8 *)(puVar6 + -0x68);
  *(undefined8 *)(puVar6 + -0x60) = *(undefined8 *)(puVar6 + -0x60);
  *(undefined8 *)(puVar6 + -0x58) = *(undefined8 *)(puVar6 + -0x58);
  *(undefined8 *)(puVar6 + -0x50) = *(undefined8 *)(puVar6 + -0x50);
  *(undefined8 *)(puVar6 + -0x48) = *(undefined8 *)(puVar6 + -0x48);
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar24;
}



// ============================================================
// RVA: 0x14c3b00 | Atlas.Gameplay.PortalVFXBehaviour.RemoveFromPortal
// ============================================================

/* WARNING: Possible PIC construction at 0x014c4744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c3e0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c3e88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c3ee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c3f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c41d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c4214: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014c3f5c) */
/* WARNING: Removing unreachable block (ram,0x014c3f60) */
/* WARNING: Removing unreachable block (ram,0x014c3f64) */
/* WARNING: Removing unreachable block (ram,0x014c3ee8) */
/* WARNING: Removing unreachable block (ram,0x014c3eec) */
/* WARNING: Removing unreachable block (ram,0x014c3ef4) */
/* WARNING: Removing unreachable block (ram,0x014c3f80) */
/* WARNING: Removing unreachable block (ram,0x014c3f14) */
/* WARNING: Removing unreachable block (ram,0x014c3e8c) */
/* WARNING: Removing unreachable block (ram,0x014c3e90) */
/* WARNING: Removing unreachable block (ram,0x014c3e10) */
/* WARNING: Removing unreachable block (ram,0x014c3e14) */
/* WARNING: Removing unreachable block (ram,0x014c3e1c) */
/* WARNING: Removing unreachable block (ram,0x014c3eac) */
/* WARNING: Removing unreachable block (ram,0x014c3e3c) */
/* WARNING: Removing unreachable block (ram,0x014c4748) */
/* WARNING: Removing unreachable block (ram,0x014c41dc) */
/* WARNING: Removing unreachable block (ram,0x014c41e4) */
/* WARNING: Removing unreachable block (ram,0x014c41fc) */
/* WARNING: Removing unreachable block (ram,0x014c4200) */
/* WARNING: Removing unreachable block (ram,0x014c4218) */
/* WARNING: Removing unreachable block (ram,0x014c4220) */
/* WARNING: Removing unreachable block (ram,0x014c4204) */

long Atlas_Gameplay_PortalVFXBehaviour__RemoveFromPortal
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,float param_5,
               long param_6,long param_7,long param_8,long param_9,long param_10)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int extraout_w1;
  int extraout_w1_00;
  int iVar11;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  long lVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  undefined1 *puVar20;
  undefined *puVar21;
  float extraout_s0;
  float fVar22;
  float extraout_s0_00;
  uint extraout_s0_01;
  float extraout_s0_02;
  float fVar23;
  float fVar24;
  float fVar25;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined1 auVar26 [16];
  undefined1 auStack_110 [32];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  ulong uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 *puVar5;
  ulong uVar19;
  
  puVar5 = &stack0xffffffffffffffc0;
  puVar20 = &stack0xfffffffffffffff0;
  lVar12 = param_8;
  if ((bRam0000000003eb4b2b & 1) == 0) {
    func_0x00f78a20(0x3d3d640);
    param_6 = func_0x00f78a20(0x3d3d648);
    bRam0000000003eb4b2b = 1;
  }
  if (param_8 == 0) {
    puVar21 = &Atlas_Gameplay_PortalVFXBehaviour__EnableShaderForMaterials;
    func_0x00f78af4();
    lVar15 = 0;
    lVar8 = extraout_x1;
    goto code_r0x014c3bc8;
  }
  uVar18 = (ulong)*(uint *)(param_8 + 0x18);
  do {
    uVar19 = uVar18;
    uVar2 = (int)uVar19 - 1;
    uVar18 = (ulong)uVar2;
    if ((int)uVar2 < 0) {
      return param_6;
    }
    if (*(uint *)(param_8 + 0x18) <= uVar2) {
      param_6 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
  } while (*(long *)(*(long *)(param_8 + 0x10) + uVar18 * 0x18 + 0x20) != param_7);
  if ((bRam0000000003eb4b2a & 1) == 0) {
    func_0x00f78a20(0x3d361d0);
    func_0x00f78a20(0x3d3d638);
    func_0x00f78a20(0x3d3d648);
    bRam0000000003eb4b2a = 1;
  }
  lStack_70 = param_10;
  lStack_68 = param_9;
  lStack_60 = param_8;
  uStack_58 = uVar18;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((int)param_10 == 0) {
    if (param_8 != 0) {
      if (*(uint *)(param_8 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (param_9 != 0) {
        /*System.Collections.Generic.HashSet<ResourceManager.InstanceOperation>$$Remove*/ func_0x021e9740(param_9,*(undefined8 *)
                                 (*(long *)(param_8 + 0x10) + (long)(int)uVar2 * 0x18 + 0x20),
                        uRam0000000003d361d0);
        uVar14 = *(uint *)(param_8 + 0x18);
        lVar12 = param_8;
        uVar9 = uRam0000000003d3d638;
        if (uVar14 <= uVar2) {
          lVar12 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar14 = *(uint *)(param_8 + 0x18);
        }
        uVar14 = uVar14 - 1;
        *(uint *)(param_8 + 0x18) = uVar14;
        if (uVar14 - uVar2 != 0 && (int)uVar2 <= (int)uVar14) {
          uVar9 = *(undefined8 *)(param_8 + 0x10);
          lVar12 = /*System.Array$$Copy*/ func_0x0292b4cc(uVar9,uVar19,uVar9,uVar18,uVar14 - uVar2,0);
          uVar14 = *(uint *)(param_8 + 0x18);
        }
        lVar15 = *(long *)(param_8 + 0x10);
        if (lVar15 == 0) {
          func_0x00f78af4();
        }
        else if (uVar14 < *(uint *)(lVar15 + 0x18)) {
          lVar15 = lVar15 + (long)(int)uVar14 * 0x18;
          *(undefined8 *)(lVar15 + 0x20) = 0;
          *(undefined8 *)(lVar15 + 0x28) = 0;
          *(undefined8 *)(lVar15 + 0x30) = 0;
          *(int *)(param_8 + 0x1c) = *(int *)(param_8 + 0x1c) + 1;
          return lVar12;
        }
        uVar10 = func_0x00f78b24();
        auVar26 = func_0x00f78ac0(uVar10,0);
        lVar15 = auVar26._0_8_;
        iVar11 = auVar26._8_4_;
        iVar17 = (int)uVar9;
        lVar12 = lVar15;
        if (iVar11 < 0) {
          lVar12 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
        }
        if (iVar17 < 0) {
          lVar12 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
        }
        if (*(int *)(lVar15 + 0x18) - iVar11 < iVar17) {
          lVar12 = /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
        }
        if (0 < iVar17) {
          iVar1 = *(int *)(lVar15 + 0x18) - iVar17;
          *(int *)(lVar15 + 0x18) = iVar1;
          if (iVar1 - iVar11 != 0 && iVar11 <= iVar1) {
            /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(lVar15 + 0x10),iVar17 + iVar11,
                            *(undefined8 *)(lVar15 + 0x10),auVar26._8_8_,iVar1 - iVar11,0);
            iVar1 = *(int *)(lVar15 + 0x18);
          }
          lVar12 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar15 + 0x10),iVar1,uVar9,0);
          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        }
        return lVar12;
      }
    }
  }
  else if (param_8 != 0) {
    if (*(uint *)(param_8 + 0x18) <= uVar2) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar12 = *(long *)(*(long *)(param_8 + 0x10) + (long)(int)uVar2 * 0x18 + 0x28);
    puVar5 = auStack_90;
    puStack_48 = &UNK_014c4748;
    if ((bRam0000000003eb4b2e & 1) == 0) {
      func_0x00f78a20(0x3d329e0);
      func_0x00f78a20(0x3d329e8);
      func_0x00f78a20(0x3d329f0);
      func_0x00f78a20(0x3d3b1b0);
      func_0x00f78a20(0x3d69548);
      bRam0000000003eb4b2e = 1;
    }
    uStack_88 = 0;
    uStack_80 = 0;
    lStack_78 = 0;
    if (lVar12 != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_88,lVar12,uRam0000000003d3b1b0);
      while( true ) {
        uVar18 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_88,uRam0000000003d329e8);
        lVar12 = lStack_78;
        if ((uVar18 & 1) == 0) {
          lVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_88,uRam0000000003d329e0);
          return lVar12;
        }
        if (lStack_78 == 0) break;
        uVar18 = /*UnityEngine.Material$$IsKeywordEnabled*/ func_0x03238a0c(lStack_78,/*STR('BLACKHOLE')*/ uRam0000000003d69548,0);
        if ((uVar18 & 1) != 0) {
          /*UnityEngine.Material$$DisableKeyword*/ func_0x032389bc(lVar12,/*STR('BLACKHOLE')*/ uRam0000000003d69548,0);
        }
      }
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x14c40bc);
      (*pcVar3)();
    }
    func_0x00f78af4();
    if (extraout_w1_00 == 1) {
      plVar7 = (long *)___cxa_begin_catch();
      lVar15 = *plVar7;
      ___cxa_end_catch();
      lVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_88,uRam0000000003eb4000);
      if (lVar15 == 0) {
        return lVar12;
      }
      func_0x00f78ac0(lVar15,0);
    }
    lVar8 = __Unwind_Resume();
    puVar4 = auStack_110;
    unaff_d8 = (ulong)(uint)extraout_s0_02;
    lVar12 = lVar8;
    if ((bRam0000000003eb4b26 & 1) == 0) {
      func_0x00f78a20(0x3d3d640);
      func_0x00f78a20(0x3d3d648);
      lVar12 = func_0x00f78a20(0x3d3d650);
      bRam0000000003eb4b26 = 1;
    }
    lVar15 = *(long *)(lVar8 + 0x20);
    if (lVar15 != 0) {
      uVar2 = *(int *)(lVar15 + 0x18) - 1;
      uVar18 = (ulong)uVar2;
      if ((int)uVar2 < 0) {
        return lVar12;
      }
      if (*(uint *)(lVar15 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(lVar15 + 0x10) + uVar18 * 0x18;
      lVar13 = *(long *)(lVar15 + 0x20);
      lVar12 = *(long *)(lVar15 + 0x28);
      param_5 = *(float *)(lVar15 + 0x30);
      param_4 = *(float *)(lVar15 + 0x34);
      unaff_d9 = (ulong)(uint)param_4;
      lVar15 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar8,0);
      if (lVar15 != 0) {
        param_5 = param_5 - extraout_s0_02;
        unaff_d11 = (ulong)(uint)param_5;
        param_5 = param_5 + param_5;
        unaff_d10 = (ulong)(uint)param_5;
        fVar23 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar15,0);
        puVar21 = &UNK_014c41dc;
        lVar16 = lVar8;
        lVar15 = lVar13;
        param_7 = lVar12;
        while( true ) {
          *(undefined8 *)(puVar4 + -0x50) = unaff_d13;
          *(undefined8 *)(puVar4 + -0x48) = unaff_d12;
          *(ulong *)(puVar4 + -0x40) = unaff_d11;
          *(ulong *)(puVar4 + -0x38) = unaff_d10;
          *(ulong *)(puVar4 + -0x30) = unaff_d9;
          *(ulong *)(puVar4 + -0x28) = unaff_d8;
          *(ulong *)(puVar4 + -0x20) = uVar18;
          *(long *)(puVar4 + -0x18) = lVar16;
          *(undefined1 **)(puVar4 + -0x10) = puVar5 + -0x10;
          *(undefined **)(puVar4 + -8) = puVar21;
          if (lVar13 != 0) {
            fVar24 = param_2;
            fVar25 = param_3;
            fVar22 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar13,0);
            *(float *)(puVar4 + -0x60) = fVar22 - fVar23;
            *(float *)(puVar4 + -0x5c) = fVar24 - param_2;
            *(float *)(puVar4 + -0x58) = fVar25 - param_3;
            uVar9 = /*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc(puVar4 + -0x60,0);
            fVar24 = param_4 * 0.5 + extraout_s0_00 * 0.5;
            lVar12 = /*Atlas.Gameplay.PortalVFXBehaviour$$SetBlackHoleW*/ func_0x014c43f8(fVar23,param_2,param_3,
                                     fVar24 + (((extraout_s0_00 * 0.5 - param_4 * 0.5) + 1.0) -
                                              fVar24) * param_5,uVar9,lVar12);
            return lVar12;
          }
          param_10 = func_0x00f78af4(lVar8);
          puVar5 = puVar4 + -0xb0;
          *(ulong *)(puVar4 + -0xb0) = unaff_d11;
          *(ulong *)(puVar4 + -0xa8) = unaff_d10;
          *(ulong *)(puVar4 + -0xa0) = unaff_d9;
          *(ulong *)(puVar4 + -0x98) = unaff_d8;
          *(long *)(puVar4 + -0x90) = param_7;
          *(long *)(puVar4 + -0x88) = lVar15;
          *(ulong *)(puVar4 + -0x80) = uVar18;
          *(long *)(puVar4 + -0x78) = lVar16;
          *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x10;
          *(undefined **)(puVar4 + -0x68) =
               &Atlas_Gameplay_PortalVFXBehaviour__SetEnteringTimeForKart;
          puVar20 = puVar4 + -0x70;
          unaff_d8 = (ulong)extraout_s0_01;
          lVar13 = *(long *)(param_10 + 0x40);
          Atlas_Gameplay_PortalVFXBehaviour__GetAllKartMaterials
                    (param_10,extraout_x1_01,lVar13,lVar12);
          lVar8 = *(long *)(param_10 + 0x40);
          puVar21 = &UNK_014c3e10;
          lVar12 = lVar13;
          param_9 = extraout_x1_01;
code_r0x014c3bc8:
          puVar4 = puVar5 + -0x50;
          *(long *)(puVar5 + -0x30) = param_7;
          *(long *)(puVar5 + -0x28) = lVar15;
          *(long *)(puVar5 + -0x20) = param_9;
          *(long *)(puVar5 + -0x18) = param_10;
          *(undefined1 **)(puVar5 + -0x10) = puVar20;
          *(undefined **)(puVar5 + -8) = puVar21;
          uVar18 = 0x3eb4000;
          if ((bRam0000000003eb4b2d & 1) == 0) {
            func_0x00f78a20(0x3d329e0);
            func_0x00f78a20(0x3d329e8);
            func_0x00f78a20(0x3d329f0);
            func_0x00f78a20(0x3d3b1b0);
            func_0x00f78a20(0x3d69548);
            bRam0000000003eb4b2d = 1;
          }
          *(undefined8 *)(puVar5 + -0x48) = 0;
          *(undefined8 *)(puVar5 + -0x40) = 0;
          *(undefined8 *)(puVar5 + -0x38) = 0;
          if (lVar8 != 0) break;
          func_0x00f78af4();
          lVar16 = 0;
          if (extraout_w1 == 1) {
            plVar7 = (long *)___cxa_begin_catch();
            lVar16 = *plVar7;
            ___cxa_end_catch();
            lVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar5 + -0x48,uRam0000000003eb4000);
            if (lVar16 == 0) {
              return lVar8;
            }
            func_0x00f78ac0(lVar16,0);
          }
          puVar21 = &Atlas_Gameplay_PortalVFXBehaviour__SetBlackHoleTime;
          lVar8 = __Unwind_Resume();
          lVar13 = extraout_x1_00;
          fVar23 = extraout_s0;
        }
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar5 + -0x48,lVar8,uRam0000000003d3b1b0);
        while( true ) {
          uVar18 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar5 + -0x48,uRam0000000003d329e8);
          if ((uVar18 & 1) == 0) {
            lVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar5 + -0x48,uRam0000000003d329e0);
            return lVar12;
          }
          lVar12 = *(long *)(puVar5 + -0x38);
          if (lVar12 == 0) break;
          uVar18 = /*UnityEngine.Material$$IsKeywordEnabled*/ func_0x03238a0c(lVar12,/*STR('BLACKHOLE')*/ uRam0000000003d69548,0);
          if ((uVar18 & 1) == 0) {
            /*UnityEngine.Material$$EnableKeyword*/ func_0x0323896c(lVar12,/*STR('BLACKHOLE')*/ uRam0000000003d69548,0);
          }
        }
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x14c3cd4);
        (*pcVar3)();
      }
    }
    lVar12 = func_0x00f78af4();
    return lVar12;
  }
  lVar12 = func_0x00f78af4();
  puStack_48 = &Atlas_Gameplay_PortalVFXBehaviour___ctor;
  if ((bRam0000000003eb4b30 & 1) == 0) {
    func_0x00f78a20(0x3d68f70);
    bRam0000000003eb4b30 = 1;
  }
  uVar6 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Anim_PortalRespawn')*/ uRam0000000003d68f70,0);
  *(undefined4 *)(lVar12 + 0x48) = uVar6;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar12;
}



// ============================================================
// RVA: 0x14c3bc8 | Atlas.Gameplay.PortalVFXBehaviour.EnableShaderForMaterials
// ============================================================

/* WARNING: Possible PIC construction at 0x014c3e88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c3f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c41d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014c3f5c) */
/* WARNING: Removing unreachable block (ram,0x014c3f60) */
/* WARNING: Removing unreachable block (ram,0x014c3f64) */
/* WARNING: Removing unreachable block (ram,0x014c3e8c) */
/* WARNING: Removing unreachable block (ram,0x014c3e90) */
/* WARNING: Removing unreachable block (ram,0x014c41dc) */
/* WARNING: Removing unreachable block (ram,0x014c41e4) */
/* WARNING: Removing unreachable block (ram,0x014c41fc) */
/* WARNING: Removing unreachable block (ram,0x014c4200) */
/* WARNING: Removing unreachable block (ram,0x014c4204) */
/* WARNING: Removing unreachable block (ram,0x014c4218) */
/* WARNING: Removing unreachable block (ram,0x014c4220) */

void Atlas_Gameplay_PortalVFXBehaviour__EnableShaderForMaterials
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,float param_5,
               undefined8 param_6,long param_7,undefined8 param_8)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int extraout_w1;
  int extraout_w1_00;
  long extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar13;
  undefined *puVar14;
  float extraout_s0;
  float fVar15;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar16;
  float extraout_s0_02;
  float extraout_s0_03;
  float fVar17;
  float fVar18;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined1 auVar19 [16];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar13 = &stack0xfffffffffffffff0;
  uVar12 = 0x3eb4000;
  if ((bRam0000000003eb4b2d & 1) == 0) {
    func_0x00f78a20(0x3d329e0);
    func_0x00f78a20(0x3d329e8);
    func_0x00f78a20(0x3d329f0);
    func_0x00f78a20(0x3d3b1b0);
    func_0x00f78a20(0x3d69548);
    bRam0000000003eb4b2d = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (param_7 != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_48,param_7,uRam0000000003d3b1b0);
    while( true ) {
      uVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_48,uRam0000000003d329e8);
      lVar11 = lStack_38;
      if ((uVar12 & 1) == 0) {
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d329e0);
        return;
      }
      if (lStack_38 == 0) break;
      uVar12 = /*UnityEngine.Material$$IsKeywordEnabled*/ func_0x03238a0c(lStack_38,/*STR('BLACKHOLE')*/ uRam0000000003d69548,0);
      if ((uVar12 & 1) == 0) {
        /*UnityEngine.Material$$EnableKeyword*/ func_0x0323896c(lVar11,/*STR('BLACKHOLE')*/ uRam0000000003d69548,0);
      }
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x14c3cd4);
    (*pcVar2)();
  }
  func_0x00f78af4();
  lVar11 = 0;
  if (extraout_w1 == 1) {
    plVar4 = (long *)___cxa_begin_catch();
    lVar11 = *plVar4;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003eb4000);
    if (lVar11 == 0) {
      return;
    }
    func_0x00f78ac0(lVar11,0);
  }
  puVar14 = &Atlas_Gameplay_PortalVFXBehaviour__SetBlackHoleTime;
  lVar5 = __Unwind_Resume();
  puVar3 = auStack_50;
  lVar8 = extraout_x1;
  fVar16 = extraout_s0;
code_r0x014c3d18:
  while( true ) {
    *(undefined8 *)(puVar3 + -0x50) = unaff_d13;
    *(undefined8 *)(puVar3 + -0x48) = unaff_d12;
    *(ulong *)(puVar3 + -0x40) = unaff_d11;
    *(ulong *)(puVar3 + -0x38) = unaff_d10;
    *(ulong *)(puVar3 + -0x30) = unaff_d9;
    *(ulong *)(puVar3 + -0x28) = unaff_d8;
    *(ulong *)(puVar3 + -0x20) = uVar12;
    *(long *)(puVar3 + -0x18) = lVar11;
    *(undefined1 **)(puVar3 + -0x10) = puVar13;
    *(undefined **)(puVar3 + -8) = puVar14;
    if (lVar8 != 0) {
      fVar17 = param_2;
      fVar18 = param_3;
      fVar15 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar8,0);
      *(float *)(puVar3 + -0x60) = fVar15 - fVar16;
      *(float *)(puVar3 + -0x5c) = fVar17 - param_2;
      *(float *)(puVar3 + -0x58) = fVar18 - param_3;
      uVar6 = /*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc(puVar3 + -0x60,0);
      fVar17 = param_4 * 0.5 + extraout_s0_00 * 0.5;
      /*Atlas.Gameplay.PortalVFXBehaviour$$SetBlackHoleW*/ func_0x014c43f8(fVar16,param_2,param_3,
                      fVar17 + (((extraout_s0_00 * 0.5 - param_4 * 0.5) + 1.0) - fVar17) * param_5,
                      uVar6,param_8);
      return;
    }
    lVar7 = func_0x00f78af4(lVar5);
    *(ulong *)(puVar3 + -0xb0) = unaff_d11;
    *(ulong *)(puVar3 + -0xa8) = unaff_d10;
    *(ulong *)(puVar3 + -0xa0) = unaff_d9;
    *(ulong *)(puVar3 + -0x98) = unaff_d8;
    *(undefined8 *)(puVar3 + -0x90) = unaff_x22;
    *(long *)(puVar3 + -0x88) = unaff_x21;
    *(ulong *)(puVar3 + -0x80) = uVar12;
    *(long *)(puVar3 + -0x78) = lVar11;
    *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x68) = &Atlas_Gameplay_PortalVFXBehaviour__SetEnteringTimeForKart;
    puVar13 = puVar3 + -0x70;
    uVar9 = *(undefined8 *)(lVar7 + 0x40);
    uVar6 = Atlas_Gameplay_PortalVFXBehaviour__GetAllKartMaterials
                      (lVar7,extraout_x1_00,uVar9,param_8);
    Atlas_Gameplay_PortalVFXBehaviour__EnableShaderForMaterials(uVar6,*(undefined8 *)(lVar7 + 0x40))
    ;
    lVar8 = unaff_x21;
    param_8 = unaff_x22;
    if ((extraout_x1_00 == 0) || (*(long *)(extraout_x1_00 + 0x108) == 0)) break;
    lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(extraout_x1_00 + 0x108),0);
    param_8 = *(undefined8 *)(lVar7 + 0x40);
    lVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar7,0);
    if (lVar11 == 0) break;
    param_2 = 1.0;
    param_5 = 1.0 - (extraout_s0_01 + extraout_s0_01);
    unaff_d8 = (ulong)(uint)param_5;
    fVar16 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar11,0);
    unaff_d9 = (ulong)(uint)fVar16;
    unaff_d10 = (ulong)(uint)param_2;
    unaff_d11 = (ulong)(uint)param_3;
    param_4 = (float)Atlas_Gameplay_Kart_KartVisualComposite__get_LargestVisualAxisMagnitude
                               (extraout_x1_00,0);
    puVar14 = &UNK_014c3e8c;
    puVar3 = puVar3 + -0xb0;
    lVar5 = lVar7;
    lVar11 = lVar7;
    uVar12 = extraout_x1_00;
    unaff_x21 = lVar8;
    unaff_x22 = param_8;
  }
  lVar5 = func_0x00f78af4();
  *(ulong *)(puVar3 + -0x100) = unaff_d11;
  *(ulong *)(puVar3 + -0xf8) = unaff_d10;
  *(ulong *)(puVar3 + -0xf0) = unaff_d9;
  *(ulong *)(puVar3 + -0xe8) = (ulong)(uint)extraout_s0_01;
  *(undefined8 *)(puVar3 + -0xe0) = param_8;
  *(long *)(puVar3 + -0xd8) = lVar8;
  *(ulong *)(puVar3 + -0xd0) = extraout_x1_00;
  *(long *)(puVar3 + -200) = lVar7;
  *(undefined1 **)(puVar3 + -0xc0) = puVar13;
  *(undefined **)(puVar3 + -0xb8) = &Atlas_Gameplay_PortalVFXBehaviour__SetExitingTimeForKart;
  puVar13 = puVar3 + -0xc0;
  uVar10 = *(undefined8 *)(lVar5 + 0x40);
  uVar6 = Atlas_Gameplay_PortalVFXBehaviour__GetAllKartMaterials(lVar5,extraout_x1_01,uVar10,uVar9);
  Atlas_Gameplay_PortalVFXBehaviour__EnableShaderForMaterials(uVar6,*(undefined8 *)(lVar5 + 0x40));
  if ((extraout_x1_01 != 0) && (*(long *)(extraout_x1_01 + 0x108) != 0)) {
    lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(extraout_x1_01 + 0x108),0);
    param_8 = *(undefined8 *)(lVar5 + 0x40);
    lVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
    if (lVar11 != 0) {
      param_5 = extraout_s0_02 + extraout_s0_02;
      unaff_d8 = (ulong)(uint)param_5;
      fVar16 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar11,0);
      unaff_d9 = (ulong)(uint)fVar16;
      unaff_d10 = (ulong)(uint)param_2;
      unaff_d11 = (ulong)(uint)param_3;
      param_4 = (float)Atlas_Gameplay_Kart_KartVisualComposite__get_LargestVisualAxisMagnitude
                                 (extraout_x1_01,0);
      puVar14 = &UNK_014c3f5c;
      puVar3 = puVar3 + -0x100;
      lVar11 = lVar5;
      uVar12 = extraout_x1_01;
      unaff_x21 = lVar8;
      unaff_x22 = param_8;
      goto code_r0x014c3d18;
    }
  }
  auVar19 = func_0x00f78af4();
  lVar11 = auVar19._0_8_;
  *(ulong *)(puVar3 + -0x120) = extraout_x1_01;
  *(long *)(puVar3 + -0x118) = lVar5;
  *(undefined1 **)(puVar3 + -0x110) = puVar13;
  *(undefined **)(puVar3 + -0x108) = &Atlas_Gameplay_PortalVFXBehaviour__DisableShaderKeywordForKart
  ;
  Atlas_Gameplay_PortalVFXBehaviour__GetAllKartMaterials
            (lVar11,auVar19._8_8_,*(undefined8 *)(lVar11 + 0x40),uVar10);
  lVar11 = *(long *)(lVar11 + 0x40);
  *(undefined8 *)(puVar3 + -0x130) = param_8;
  *(long *)(puVar3 + -0x128) = lVar8;
  *(undefined8 *)(puVar3 + -0x120) = *(undefined8 *)(puVar3 + -0x120);
  *(undefined8 *)(puVar3 + -0x118) = *(undefined8 *)(puVar3 + -0x118);
  *(undefined8 *)(puVar3 + -0x110) = *(undefined8 *)(puVar3 + -0x110);
  *(undefined8 *)(puVar3 + -0x108) = *(undefined8 *)(puVar3 + -0x108);
  if ((bRam0000000003eb4b2e & 1) == 0) {
    func_0x00f78a20(0x3d329e0);
    func_0x00f78a20(0x3d329e8);
    func_0x00f78a20(0x3d329f0);
    func_0x00f78a20(0x3d3b1b0);
    func_0x00f78a20(0x3d69548);
    bRam0000000003eb4b2e = 1;
  }
  *(undefined8 *)(puVar3 + -0x148) = 0;
  *(undefined8 *)(puVar3 + -0x140) = 0;
  *(undefined8 *)(puVar3 + -0x138) = 0;
  if (lVar11 != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar3 + -0x148,lVar11,uRam0000000003d3b1b0);
    while( true ) {
      uVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar3 + -0x148,uRam0000000003d329e8);
      if ((uVar12 & 1) == 0) {
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar3 + -0x148,uRam0000000003d329e0);
        return;
      }
      lVar11 = *(long *)(puVar3 + -0x138);
      if (lVar11 == 0) break;
      uVar12 = /*UnityEngine.Material$$IsKeywordEnabled*/ func_0x03238a0c(lVar11,/*STR('BLACKHOLE')*/ uRam0000000003d69548,0);
      if ((uVar12 & 1) != 0) {
        /*UnityEngine.Material$$DisableKeyword*/ func_0x032389bc(lVar11,/*STR('BLACKHOLE')*/ uRam0000000003d69548,0);
      }
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x14c40bc);
    (*pcVar2)();
  }
  func_0x00f78af4();
  lVar11 = 0;
  if (extraout_w1_00 == 1) {
    plVar4 = (long *)___cxa_begin_catch();
    lVar11 = *plVar4;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar3 + -0x148,uRam0000000003eb4000);
    if (lVar11 == 0) {
      return;
    }
    func_0x00f78ac0(lVar11,0);
  }
  lVar5 = __Unwind_Resume();
  *(ulong *)(puVar3 + -0x1b0) = unaff_d11;
  *(ulong *)(puVar3 + -0x1a8) = unaff_d10;
  *(ulong *)(puVar3 + -0x1a0) = unaff_d9;
  *(ulong *)(puVar3 + -0x198) = (ulong)(uint)extraout_s0_02;
  *(undefined8 *)(puVar3 + -400) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x188) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x180) = param_8;
  *(long *)(puVar3 + -0x178) = lVar8;
  *(undefined8 *)(puVar3 + -0x170) = 0x3eb4000;
  *(long *)(puVar3 + -0x168) = lVar11;
  *(undefined1 **)(puVar3 + -0x160) = puVar3 + -0x110;
  *(undefined **)(puVar3 + -0x158) = &Atlas_Gameplay_PortalVFXBehaviour__UpdateEnterPortal;
  puVar13 = puVar3 + -0x160;
  unaff_d8 = (ulong)(uint)extraout_s0_03;
  if ((bRam0000000003eb4b26 & 1) == 0) {
    func_0x00f78a20(0x3d3d640);
    func_0x00f78a20(0x3d3d648);
    func_0x00f78a20(0x3d3d650);
    bRam0000000003eb4b26 = 1;
  }
  lVar11 = *(long *)(lVar5 + 0x20);
  if (lVar11 != 0) {
    uVar1 = *(int *)(lVar11 + 0x18) - 1;
    uVar12 = (ulong)uVar1;
    if ((int)uVar1 < 0) {
      return;
    }
    unaff_x23 = 0x18;
    unaff_x24 = 0x3d3d650;
    if (*(uint *)(lVar11 + 0x18) <= uVar1) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar11 = *(long *)(lVar11 + 0x10) + uVar12 * 0x18;
    lVar8 = *(long *)(lVar11 + 0x20);
    param_8 = *(undefined8 *)(lVar11 + 0x28);
    param_5 = *(float *)(lVar11 + 0x30);
    param_4 = *(float *)(lVar11 + 0x34);
    unaff_d9 = (ulong)(uint)param_4;
    lVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
    if (lVar11 != 0) {
      param_5 = param_5 - extraout_s0_03;
      unaff_d11 = (ulong)(uint)param_5;
      param_5 = param_5 + param_5;
      unaff_d10 = (ulong)(uint)param_5;
      fVar16 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar11,0);
      puVar14 = &UNK_014c41dc;
      puVar3 = puVar3 + -0x1d0;
      lVar11 = lVar5;
      unaff_x21 = lVar8;
      unaff_x22 = param_8;
      goto code_r0x014c3d18;
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14c3d18 | Atlas.Gameplay.PortalVFXBehaviour.SetBlackHoleTime
// ============================================================

ulong Atlas_Gameplay_PortalVFXBehaviour__SetBlackHoleTime
                (float param_1,float param_2,float param_3,float param_4,float param_5,
                undefined8 param_6,long param_7,undefined8 param_8)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  int extraout_w1;
  long extraout_x1;
  long extraout_x1_00;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 uVar12;
  undefined4 uVar13;
  float extraout_s0_01;
  float extraout_s0_02;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  float fStack_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  undefined1 ***pppuStack_110;
  undefined *puStack_108;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_70;
  undefined *puStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  
  if (param_7 != 0) {
    fVar14 = param_2;
    fVar16 = param_3;
    fStack_60 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(param_7,0);
    fStack_60 = fStack_60 - param_1;
    fStack_5c = fVar14 - param_2;
    fStack_58 = fVar16 - param_3;
    uVar3 = /*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc(&fStack_60,0);
    fVar14 = param_4 * 0.5 + extraout_s0 * 0.5;
    uVar4 = /*Atlas.Gameplay.PortalVFXBehaviour$$SetBlackHoleW*/ func_0x014c43f8(param_1,param_2,param_3,
                            fVar14 + (((extraout_s0 * 0.5 - param_4 * 0.5) + 1.0) - fVar14) *
                                     param_5,uVar3,param_8);
    return uVar4;
  }
  lVar5 = func_0x00f78af4();
  puStack_68 = &Atlas_Gameplay_PortalVFXBehaviour__SetEnteringTimeForKart;
  uVar10 = *(undefined8 *)(lVar5 + 0x40);
  puStack_70 = &stack0xfffffffffffffff0;
  uVar3 = Atlas_Gameplay_PortalVFXBehaviour__GetAllKartMaterials(lVar5,extraout_x1,uVar10,param_8);
  Atlas_Gameplay_PortalVFXBehaviour__EnableShaderForMaterials(uVar3,*(undefined8 *)(lVar5 + 0x40));
  if ((extraout_x1 != 0) && (*(long *)(extraout_x1 + 0x108) != 0)) {
    unaff_x21 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(extraout_x1 + 0x108),0);
    unaff_x22 = *(undefined8 *)(lVar5 + 0x40);
    lVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
    if (lVar6 != 0) {
      uVar15 = 0x3f800000;
      fVar14 = 1.0 - (extraout_s0_00 + extraout_s0_00);
      uVar12 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar6,0);
      uVar13 = Atlas_Gameplay_Kart_KartVisualComposite__get_LargestVisualAxisMagnitude
                         (extraout_x1,0);
      Atlas_Gameplay_PortalVFXBehaviour__SetBlackHoleTime
                (uVar12,uVar15,param_3,uVar13,fVar14,lVar5,unaff_x21,unaff_x22);
      return (ulong)(fVar14 <= 0.0);
    }
  }
  lVar5 = func_0x00f78af4();
  puStack_b8 = &Atlas_Gameplay_PortalVFXBehaviour__SetExitingTimeForKart;
  uVar11 = *(undefined8 *)(lVar5 + 0x40);
  ppuStack_c0 = &puStack_70;
  uVar3 = Atlas_Gameplay_PortalVFXBehaviour__GetAllKartMaterials(lVar5,extraout_x1_00,uVar11,uVar10)
  ;
  Atlas_Gameplay_PortalVFXBehaviour__EnableShaderForMaterials(uVar3,*(undefined8 *)(lVar5 + 0x40));
  if ((extraout_x1_00 != 0) && (*(long *)(extraout_x1_00 + 0x108) != 0)) {
    unaff_x21 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(extraout_x1_00 + 0x108),0);
    unaff_x22 = *(undefined8 *)(lVar5 + 0x40);
    lVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
    if (lVar6 != 0) {
      uVar12 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar6,0);
      uVar13 = Atlas_Gameplay_Kart_KartVisualComposite__get_LargestVisualAxisMagnitude
                         (extraout_x1_00,0);
      Atlas_Gameplay_PortalVFXBehaviour__SetBlackHoleTime
                (uVar12,param_2,param_3,uVar13,extraout_s0_01 + extraout_s0_01,lVar5,unaff_x21,
                 unaff_x22);
      return (ulong)(1.0 <= extraout_s0_01 + extraout_s0_01);
    }
  }
  auVar17 = func_0x00f78af4();
  lVar6 = auVar17._0_8_;
  puStack_108 = &Atlas_Gameplay_PortalVFXBehaviour__DisableShaderKeywordForKart;
  lStack_120 = extraout_x1_00;
  lStack_118 = lVar5;
  pppuStack_110 = &ppuStack_c0;
  Atlas_Gameplay_PortalVFXBehaviour__GetAllKartMaterials
            (lVar6,auVar17._8_8_,*(undefined8 *)(lVar6 + 0x40),uVar11);
  lVar5 = *(long *)(lVar6 + 0x40);
  uStack_130 = unaff_x22;
  uStack_128 = unaff_x21;
  if ((bRam0000000003eb4b2e & 1) == 0) {
    func_0x00f78a20(0x3d329e0);
    func_0x00f78a20(0x3d329e8);
    func_0x00f78a20(0x3d329f0);
    func_0x00f78a20(0x3d3b1b0);
    func_0x00f78a20(0x3d69548);
    bRam0000000003eb4b2e = 1;
  }
  uStack_148 = 0;
  uStack_140 = 0;
  lStack_138 = 0;
  if (lVar5 != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_148,lVar5,uRam0000000003d3b1b0);
    while( true ) {
      uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_148,uRam0000000003d329e8);
      lVar5 = lStack_138;
      if ((uVar4 & 1) == 0) {
        uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_148,uRam0000000003d329e0);
        return uVar4;
      }
      if (lStack_138 == 0) break;
      uVar4 = /*UnityEngine.Material$$IsKeywordEnabled*/ func_0x03238a0c(lStack_138,/*STR('BLACKHOLE')*/ uRam0000000003d69548,0);
      if ((uVar4 & 1) != 0) {
        /*UnityEngine.Material$$DisableKeyword*/ func_0x032389bc(lVar5,/*STR('BLACKHOLE')*/ uRam0000000003d69548,0);
      }
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x14c40bc);
    (*pcVar2)();
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar7 = (long *)___cxa_begin_catch();
    lVar5 = *plVar7;
    ___cxa_end_catch();
    uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_148,uRam0000000003eb4000);
    if (lVar5 == 0) {
      return uVar4;
    }
    func_0x00f78ac0(lVar5,0);
  }
  uVar8 = __Unwind_Resume();
  uVar4 = uVar8;
  if ((bRam0000000003eb4b26 & 1) == 0) {
    func_0x00f78a20(0x3d3d640);
    func_0x00f78a20(0x3d3d648);
    uVar4 = func_0x00f78a20(0x3d3d650);
    bRam0000000003eb4b26 = 1;
  }
  lVar5 = *(long *)(uVar8 + 0x20);
  if (lVar5 != 0) {
    uVar1 = *(int *)(lVar5 + 0x18) - 1;
    if ((int)uVar1 < 0) {
      return uVar4;
    }
    do {
      uVar4 = (ulong)uVar1;
      if (*(uint *)(lVar5 + 0x18) <= uVar1) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar5 = *(long *)(lVar5 + 0x10) + uVar4 * 0x18;
      uVar3 = *(undefined8 *)(lVar5 + 0x20);
      uVar10 = *(undefined8 *)(lVar5 + 0x28);
      fVar14 = *(float *)(lVar5 + 0x30);
      uVar12 = *(undefined4 *)(lVar5 + 0x34);
      lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar8,0);
      if (lVar5 == 0) break;
      fVar14 = fVar14 - extraout_s0_02;
      /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar5,0);
      Atlas_Gameplay_PortalVFXBehaviour__SetBlackHoleTime(uVar8,uVar3,uVar10);
      if (*(long *)(uVar8 + 0x20) == 0) break;
      uStack_1c8 = uVar3;
      uStack_1c0 = uVar10;
      fStack_1b8 = fVar14;
      uStack_1b4 = uVar12;
      uVar9 = /*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>$$set_Item*/ func_0x02568504(*(long *)(uVar8 + 0x20),uVar4,&uStack_1c8,uRam0000000003d3d650);
      if (fVar14 <= 0.0) {
        uVar9 = /*Atlas.Gameplay.PortalVFXBehaviour$$RemoveFromPortal*/ func_0x014c46bc(uVar9,uVar4,*(undefined8 *)(uVar8 + 0x20),
                                *(undefined8 *)(uVar8 + 0x30),1);
      }
      uVar1 = uVar1 - 1;
      if ((int)uVar1 < 0) {
        return uVar9;
      }
      lVar5 = *(long *)(uVar8 + 0x20);
    } while (lVar5 != 0);
  }
  uVar4 = func_0x00f78af4();
  return uVar4;
}



// ============================================================
// RVA: 0x14c3dd8 | Atlas.Gameplay.PortalVFXBehaviour.SetEnteringTimeForKart
// ============================================================

ulong Atlas_Gameplay_PortalVFXBehaviour__SetEnteringTimeForKart
                (float param_1,undefined4 param_2,undefined4 param_3,long param_4,long param_5,
                undefined8 param_6)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  int extraout_w1;
  long extraout_x1;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined4 uVar12;
  undefined4 uVar13;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 uVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_168;
  undefined8 uStack_160;
  float fStack_158;
  undefined4 uStack_154;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  uVar10 = *(undefined8 *)(param_4 + 0x40);
  uVar3 = Atlas_Gameplay_PortalVFXBehaviour__GetAllKartMaterials(param_4,param_5,uVar10,param_6);
  Atlas_Gameplay_PortalVFXBehaviour__EnableShaderForMaterials(uVar3,*(undefined8 *)(param_4 + 0x40))
  ;
  if ((param_5 != 0) && (*(long *)(param_5 + 0x108) != 0)) {
    unaff_x21 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_5 + 0x108),0);
    unaff_x22 = *(undefined8 *)(param_4 + 0x40);
    lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_4,0);
    if (lVar4 != 0) {
      uVar14 = 0x3f800000;
      fVar15 = 1.0 - (param_1 + param_1);
      uVar12 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar4,0);
      uVar13 = Atlas_Gameplay_Kart_KartVisualComposite__get_LargestVisualAxisMagnitude(param_5,0);
      Atlas_Gameplay_PortalVFXBehaviour__SetBlackHoleTime
                (uVar12,uVar14,param_3,uVar13,fVar15,param_4,unaff_x21,unaff_x22);
      return (ulong)(fVar15 <= 0.0);
    }
  }
  lVar4 = func_0x00f78af4();
  puStack_58 = &Atlas_Gameplay_PortalVFXBehaviour__SetExitingTimeForKart;
  uVar11 = *(undefined8 *)(lVar4 + 0x40);
  puStack_60 = &stack0xfffffffffffffff0;
  uVar3 = Atlas_Gameplay_PortalVFXBehaviour__GetAllKartMaterials(lVar4,extraout_x1,uVar11,uVar10);
  Atlas_Gameplay_PortalVFXBehaviour__EnableShaderForMaterials(uVar3,*(undefined8 *)(lVar4 + 0x40));
  if ((extraout_x1 != 0) && (*(long *)(extraout_x1 + 0x108) != 0)) {
    unaff_x21 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(extraout_x1 + 0x108),0);
    unaff_x22 = *(undefined8 *)(lVar4 + 0x40);
    lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar4,0);
    if (lVar5 != 0) {
      uVar12 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar5,0);
      uVar13 = Atlas_Gameplay_Kart_KartVisualComposite__get_LargestVisualAxisMagnitude
                         (extraout_x1,0);
      Atlas_Gameplay_PortalVFXBehaviour__SetBlackHoleTime
                (uVar12,param_2,param_3,uVar13,extraout_s0 + extraout_s0,lVar4,unaff_x21,unaff_x22);
      return (ulong)(1.0 <= extraout_s0 + extraout_s0);
    }
  }
  auVar16 = func_0x00f78af4();
  lVar5 = auVar16._0_8_;
  puStack_a8 = &Atlas_Gameplay_PortalVFXBehaviour__DisableShaderKeywordForKart;
  lStack_c0 = extraout_x1;
  lStack_b8 = lVar4;
  ppuStack_b0 = &puStack_60;
  Atlas_Gameplay_PortalVFXBehaviour__GetAllKartMaterials
            (lVar5,auVar16._8_8_,*(undefined8 *)(lVar5 + 0x40),uVar11);
  lVar4 = *(long *)(lVar5 + 0x40);
  uStack_d0 = unaff_x22;
  uStack_c8 = unaff_x21;
  if ((bRam0000000003eb4b2e & 1) == 0) {
    func_0x00f78a20(0x3d329e0);
    func_0x00f78a20(0x3d329e8);
    func_0x00f78a20(0x3d329f0);
    func_0x00f78a20(0x3d3b1b0);
    func_0x00f78a20(0x3d69548);
    bRam0000000003eb4b2e = 1;
  }
  uStack_e8 = 0;
  uStack_e0 = 0;
  lStack_d8 = 0;
  if (lVar4 != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_e8,lVar4,uRam0000000003d3b1b0);
    while( true ) {
      uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_e8,uRam0000000003d329e8);
      lVar4 = lStack_d8;
      if ((uVar6 & 1) == 0) {
        uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_e8,uRam0000000003d329e0);
        return uVar6;
      }
      if (lStack_d8 == 0) break;
      uVar6 = /*UnityEngine.Material$$IsKeywordEnabled*/ func_0x03238a0c(lStack_d8,/*STR('BLACKHOLE')*/ uRam0000000003d69548,0);
      if ((uVar6 & 1) != 0) {
        /*UnityEngine.Material$$DisableKeyword*/ func_0x032389bc(lVar4,/*STR('BLACKHOLE')*/ uRam0000000003d69548,0);
      }
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x14c40bc);
    (*pcVar2)();
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar7 = (long *)___cxa_begin_catch();
    lVar4 = *plVar7;
    ___cxa_end_catch();
    uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_e8,uRam0000000003eb4000);
    if (lVar4 == 0) {
      return uVar6;
    }
    func_0x00f78ac0(lVar4,0);
  }
  uVar8 = __Unwind_Resume();
  uVar6 = uVar8;
  if ((bRam0000000003eb4b26 & 1) == 0) {
    func_0x00f78a20(0x3d3d640);
    func_0x00f78a20(0x3d3d648);
    uVar6 = func_0x00f78a20(0x3d3d650);
    bRam0000000003eb4b26 = 1;
  }
  lVar4 = *(long *)(uVar8 + 0x20);
  if (lVar4 != 0) {
    uVar1 = *(int *)(lVar4 + 0x18) - 1;
    if ((int)uVar1 < 0) {
      return uVar6;
    }
    do {
      uVar6 = (ulong)uVar1;
      if (*(uint *)(lVar4 + 0x18) <= uVar1) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar4 = *(long *)(lVar4 + 0x10) + uVar6 * 0x18;
      uVar3 = *(undefined8 *)(lVar4 + 0x20);
      uVar10 = *(undefined8 *)(lVar4 + 0x28);
      fVar15 = *(float *)(lVar4 + 0x30);
      uVar12 = *(undefined4 *)(lVar4 + 0x34);
      lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar8,0);
      if (lVar4 == 0) break;
      fVar15 = fVar15 - extraout_s0_00;
      /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar4,0);
      Atlas_Gameplay_PortalVFXBehaviour__SetBlackHoleTime(uVar8,uVar3,uVar10);
      if (*(long *)(uVar8 + 0x20) == 0) break;
      uStack_168 = uVar3;
      uStack_160 = uVar10;
      fStack_158 = fVar15;
      uStack_154 = uVar12;
      uVar9 = /*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>$$set_Item*/ func_0x02568504(*(long *)(uVar8 + 0x20),uVar6,&uStack_168,uRam0000000003d3d650);
      if (fVar15 <= 0.0) {
        uVar9 = /*Atlas.Gameplay.PortalVFXBehaviour$$RemoveFromPortal*/ func_0x014c46bc(uVar9,uVar6,*(undefined8 *)(uVar8 + 0x20),
                                *(undefined8 *)(uVar8 + 0x30),1);
      }
      uVar1 = uVar1 - 1;
      if ((int)uVar1 < 0) {
        return uVar9;
      }
      lVar4 = *(long *)(uVar8 + 0x20);
    } while (lVar4 != 0);
  }
  uVar6 = func_0x00f78af4();
  return uVar6;
}



// ============================================================
// RVA: 0x14c3eb0 | Atlas.Gameplay.PortalVFXBehaviour.SetExitingTimeForKart
// ============================================================

ulong Atlas_Gameplay_PortalVFXBehaviour__SetExitingTimeForKart
                (float param_1,undefined4 param_2,undefined4 param_3,long param_4,long param_5,
                undefined8 param_6)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  int extraout_w1;
  undefined8 uVar9;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined4 uVar10;
  undefined4 uVar11;
  float extraout_s0;
  float fVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_118;
  undefined8 uStack_110;
  float fStack_108;
  undefined4 uStack_104;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  uVar9 = *(undefined8 *)(param_4 + 0x40);
  uVar3 = Atlas_Gameplay_PortalVFXBehaviour__GetAllKartMaterials(param_4,param_5,uVar9,param_6);
  Atlas_Gameplay_PortalVFXBehaviour__EnableShaderForMaterials(uVar3,*(undefined8 *)(param_4 + 0x40))
  ;
  if ((param_5 != 0) && (*(long *)(param_5 + 0x108) != 0)) {
    unaff_x21 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_5 + 0x108),0);
    unaff_x22 = *(undefined8 *)(param_4 + 0x40);
    lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_4,0);
    if (lVar4 != 0) {
      uVar10 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar4,0);
      uVar11 = Atlas_Gameplay_Kart_KartVisualComposite__get_LargestVisualAxisMagnitude(param_5,0);
      Atlas_Gameplay_PortalVFXBehaviour__SetBlackHoleTime
                (uVar10,param_2,param_3,uVar11,param_1 + param_1,param_4,unaff_x21,unaff_x22);
      return (ulong)(1.0 <= param_1 + param_1);
    }
  }
  auVar13 = func_0x00f78af4();
  lVar4 = auVar13._0_8_;
  puStack_58 = &Atlas_Gameplay_PortalVFXBehaviour__DisableShaderKeywordForKart;
  lStack_70 = param_5;
  lStack_68 = param_4;
  puStack_60 = &stack0xfffffffffffffff0;
  Atlas_Gameplay_PortalVFXBehaviour__GetAllKartMaterials
            (lVar4,auVar13._8_8_,*(undefined8 *)(lVar4 + 0x40),uVar9);
  lVar4 = *(long *)(lVar4 + 0x40);
  uStack_80 = unaff_x22;
  uStack_78 = unaff_x21;
  if ((bRam0000000003eb4b2e & 1) == 0) {
    func_0x00f78a20(0x3d329e0);
    func_0x00f78a20(0x3d329e8);
    func_0x00f78a20(0x3d329f0);
    func_0x00f78a20(0x3d3b1b0);
    func_0x00f78a20(0x3d69548);
    bRam0000000003eb4b2e = 1;
  }
  uStack_98 = 0;
  uStack_90 = 0;
  lStack_88 = 0;
  if (lVar4 != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_98,lVar4,uRam0000000003d3b1b0);
    while( true ) {
      uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_98,uRam0000000003d329e8);
      lVar4 = lStack_88;
      if ((uVar5 & 1) == 0) {
        uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_98,uRam0000000003d329e0);
        return uVar5;
      }
      if (lStack_88 == 0) break;
      uVar5 = /*UnityEngine.Material$$IsKeywordEnabled*/ func_0x03238a0c(lStack_88,/*STR('BLACKHOLE')*/ uRam0000000003d69548,0);
      if ((uVar5 & 1) != 0) {
        /*UnityEngine.Material$$DisableKeyword*/ func_0x032389bc(lVar4,/*STR('BLACKHOLE')*/ uRam0000000003d69548,0);
      }
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x14c40bc);
    (*pcVar2)();
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar6 = (long *)___cxa_begin_catch();
    lVar4 = *plVar6;
    ___cxa_end_catch();
    uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_98,uRam0000000003eb4000);
    if (lVar4 == 0) {
      return uVar5;
    }
    func_0x00f78ac0(lVar4,0);
  }
  uVar7 = __Unwind_Resume();
  uVar5 = uVar7;
  if ((bRam0000000003eb4b26 & 1) == 0) {
    func_0x00f78a20(0x3d3d640);
    func_0x00f78a20(0x3d3d648);
    uVar5 = func_0x00f78a20(0x3d3d650);
    bRam0000000003eb4b26 = 1;
  }
  lVar4 = *(long *)(uVar7 + 0x20);
  if (lVar4 != 0) {
    uVar1 = *(int *)(lVar4 + 0x18) - 1;
    if ((int)uVar1 < 0) {
      return uVar5;
    }
    do {
      uVar5 = (ulong)uVar1;
      if (*(uint *)(lVar4 + 0x18) <= uVar1) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar4 = *(long *)(lVar4 + 0x10) + uVar5 * 0x18;
      uVar3 = *(undefined8 *)(lVar4 + 0x20);
      uVar9 = *(undefined8 *)(lVar4 + 0x28);
      fVar12 = *(float *)(lVar4 + 0x30);
      uVar10 = *(undefined4 *)(lVar4 + 0x34);
      lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar7,0);
      if (lVar4 == 0) break;
      fVar12 = fVar12 - extraout_s0;
      /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar4,0);
      Atlas_Gameplay_PortalVFXBehaviour__SetBlackHoleTime(uVar7,uVar3,uVar9);
      if (*(long *)(uVar7 + 0x20) == 0) break;
      uStack_118 = uVar3;
      uStack_110 = uVar9;
      fStack_108 = fVar12;
      uStack_104 = uVar10;
      uVar8 = /*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>$$set_Item*/ func_0x02568504(*(long *)(uVar7 + 0x20),uVar5,&uStack_118,uRam0000000003d3d650);
      if (fVar12 <= 0.0) {
        uVar8 = /*Atlas.Gameplay.PortalVFXBehaviour$$RemoveFromPortal*/ func_0x014c46bc(uVar8,uVar5,*(undefined8 *)(uVar7 + 0x20),
                                *(undefined8 *)(uVar7 + 0x30),1);
      }
      uVar1 = uVar1 - 1;
      if ((int)uVar1 < 0) {
        return uVar8;
      }
      lVar4 = *(long *)(uVar7 + 0x20);
    } while (lVar4 != 0);
  }
  uVar5 = func_0x00f78af4();
  return uVar5;
}



// ============================================================
// RVA: 0x14c3f84 | Atlas.Gameplay.PortalVFXBehaviour.DisableShaderKeywordForKart
// ============================================================

void Atlas_Gameplay_PortalVFXBehaviour__DisableShaderKeywordForKart
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  code *pcVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  int extraout_w1;
  long lVar7;
  long lVar8;
  float extraout_s0;
  undefined4 uVar9;
  float fVar10;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  Atlas_Gameplay_PortalVFXBehaviour__GetAllKartMaterials
            (param_1,param_2,*(undefined8 *)(param_1 + 0x40),param_3);
  lVar7 = *(long *)(param_1 + 0x40);
  if ((bRam0000000003eb4b2e & 1) == 0) {
    func_0x00f78a20(0x3d329e0);
    func_0x00f78a20(0x3d329e8);
    func_0x00f78a20(0x3d329f0);
    func_0x00f78a20(0x3d3b1b0);
    func_0x00f78a20(0x3d69548);
    bRam0000000003eb4b2e = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (lVar7 != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_48,lVar7,uRam0000000003d3b1b0);
    while( true ) {
      uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_48,uRam0000000003d329e8);
      lVar7 = lStack_38;
      if ((uVar4 & 1) == 0) {
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d329e0);
        return;
      }
      if (lStack_38 == 0) break;
      uVar4 = /*UnityEngine.Material$$IsKeywordEnabled*/ func_0x03238a0c(lStack_38,/*STR('BLACKHOLE')*/ uRam0000000003d69548,0);
      if ((uVar4 & 1) != 0) {
        /*UnityEngine.Material$$DisableKeyword*/ func_0x032389bc(lVar7,/*STR('BLACKHOLE')*/ uRam0000000003d69548,0);
      }
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x14c40bc);
    (*pcVar3)();
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar5 = (long *)___cxa_begin_catch();
    lVar7 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003eb4000);
    if (lVar7 == 0) {
      return;
    }
    func_0x00f78ac0(lVar7,0);
  }
  lVar7 = __Unwind_Resume();
  if ((bRam0000000003eb4b26 & 1) == 0) {
    func_0x00f78a20(0x3d3d640);
    func_0x00f78a20(0x3d3d648);
    func_0x00f78a20(0x3d3d650);
    bRam0000000003eb4b26 = 1;
  }
  lVar8 = *(long *)(lVar7 + 0x20);
  if (lVar8 != 0) {
    uVar2 = *(int *)(lVar8 + 0x18) - 1;
    if ((int)uVar2 < 0) {
      return;
    }
    do {
      uVar4 = (ulong)uVar2;
      if (*(uint *)(lVar8 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar8 = *(long *)(lVar8 + 0x10) + uVar4 * 0x18;
      uVar6 = *(undefined8 *)(lVar8 + 0x20);
      uVar1 = *(undefined8 *)(lVar8 + 0x28);
      fVar10 = *(float *)(lVar8 + 0x30);
      uVar9 = *(undefined4 *)(lVar8 + 0x34);
      lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar7,0);
      if (lVar8 == 0) break;
      fVar10 = fVar10 - extraout_s0;
      /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar8,0);
      Atlas_Gameplay_PortalVFXBehaviour__SetBlackHoleTime(lVar7,uVar6,uVar1);
      if (*(long *)(lVar7 + 0x20) == 0) break;
      uStack_c8 = uVar6;
      uStack_c0 = uVar1;
      fStack_b8 = fVar10;
      uStack_b4 = uVar9;
      uVar6 = /*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>$$set_Item*/ func_0x02568504(*(long *)(lVar7 + 0x20),uVar4,&uStack_c8,uRam0000000003d3d650);
      if (fVar10 <= 0.0) {
        /*Atlas.Gameplay.PortalVFXBehaviour$$RemoveFromPortal*/ func_0x014c46bc(uVar6,uVar4,*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(lVar7 + 0x30),1);
      }
      uVar2 = uVar2 - 1;
      if ((int)uVar2 < 0) {
        return;
      }
      lVar8 = *(long *)(lVar7 + 0x20);
    } while (lVar8 != 0);
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14c3fb0 | Atlas.Gameplay.PortalVFXBehaviour.DisableShaderForMaterials
// ============================================================

void Atlas_Gameplay_PortalVFXBehaviour__DisableShaderForMaterials(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  uint uVar2;
  code *pcVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  int extraout_w1;
  long lVar7;
  long lVar8;
  float extraout_s0;
  undefined4 uVar9;
  float fVar10;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000003eb4b2e & 1) == 0) {
    func_0x00f78a20(0x3d329e0);
    func_0x00f78a20(0x3d329e8);
    func_0x00f78a20(0x3d329f0);
    func_0x00f78a20(0x3d3b1b0);
    func_0x00f78a20(0x3d69548);
    bRam0000000003eb4b2e = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (param_2 != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_48,param_2,uRam0000000003d3b1b0);
    while( true ) {
      uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_48,uRam0000000003d329e8);
      lVar7 = lStack_38;
      if ((uVar4 & 1) == 0) {
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d329e0);
        return;
      }
      if (lStack_38 == 0) break;
      uVar4 = /*UnityEngine.Material$$IsKeywordEnabled*/ func_0x03238a0c(lStack_38,/*STR('BLACKHOLE')*/ uRam0000000003d69548,0);
      if ((uVar4 & 1) != 0) {
        /*UnityEngine.Material$$DisableKeyword*/ func_0x032389bc(lVar7,/*STR('BLACKHOLE')*/ uRam0000000003d69548,0);
      }
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x14c40bc);
    (*pcVar3)();
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar5 = (long *)___cxa_begin_catch();
    lVar7 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003eb4000);
    if (lVar7 == 0) {
      return;
    }
    func_0x00f78ac0(lVar7,0);
  }
  lVar7 = __Unwind_Resume();
  if ((bRam0000000003eb4b26 & 1) == 0) {
    func_0x00f78a20(0x3d3d640);
    func_0x00f78a20(0x3d3d648);
    func_0x00f78a20(0x3d3d650);
    bRam0000000003eb4b26 = 1;
  }
  lVar8 = *(long *)(lVar7 + 0x20);
  if (lVar8 != 0) {
    uVar2 = *(int *)(lVar8 + 0x18) - 1;
    if ((int)uVar2 < 0) {
      return;
    }
    do {
      uVar4 = (ulong)uVar2;
      if (*(uint *)(lVar8 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar8 = *(long *)(lVar8 + 0x10) + uVar4 * 0x18;
      uVar6 = *(undefined8 *)(lVar8 + 0x20);
      uVar1 = *(undefined8 *)(lVar8 + 0x28);
      fVar10 = *(float *)(lVar8 + 0x30);
      uVar9 = *(undefined4 *)(lVar8 + 0x34);
      lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar7,0);
      if (lVar8 == 0) break;
      fVar10 = fVar10 - extraout_s0;
      /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar8,0);
      Atlas_Gameplay_PortalVFXBehaviour__SetBlackHoleTime(lVar7,uVar6,uVar1);
      if (*(long *)(lVar7 + 0x20) == 0) break;
      uStack_c8 = uVar6;
      uStack_c0 = uVar1;
      fStack_b8 = fVar10;
      uStack_b4 = uVar9;
      uVar6 = /*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>$$set_Item*/ func_0x02568504(*(long *)(lVar7 + 0x20),uVar4,&uStack_c8,uRam0000000003d3d650);
      if (fVar10 <= 0.0) {
        /*Atlas.Gameplay.PortalVFXBehaviour$$RemoveFromPortal*/ func_0x014c46bc(uVar6,uVar4,*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(lVar7 + 0x30),1);
      }
      uVar2 = uVar2 - 1;
      if ((int)uVar2 < 0) {
        return;
      }
      lVar8 = *(long *)(lVar7 + 0x20);
    } while (lVar8 != 0);
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14c4100 | Atlas.Gameplay.PortalVFXBehaviour.UpdateEnterPortal
// ============================================================

void Atlas_Gameplay_PortalVFXBehaviour__UpdateEnterPortal(float param_1,long param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 uStack_78;
  undefined8 uStack_70;
  float fStack_68;
  undefined4 uStack_64;
  
  if ((bRam0000000003eb4b26 & 1) == 0) {
    func_0x00f78a20(0x3d3d640);
    func_0x00f78a20(0x3d3d648);
    func_0x00f78a20(0x3d3d650);
    bRam0000000003eb4b26 = 1;
  }
  lVar5 = *(long *)(param_2 + 0x20);
  if (lVar5 != 0) {
    uVar2 = *(int *)(lVar5 + 0x18) - 1;
    if ((int)uVar2 < 0) {
      return;
    }
    do {
      uVar4 = (ulong)uVar2;
      if (*(uint *)(lVar5 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar5 = *(long *)(lVar5 + 0x10) + uVar4 * 0x18;
      uVar3 = *(undefined8 *)(lVar5 + 0x20);
      uVar1 = *(undefined8 *)(lVar5 + 0x28);
      fVar7 = *(float *)(lVar5 + 0x30);
      uVar6 = *(undefined4 *)(lVar5 + 0x34);
      lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_2,0);
      if (lVar5 == 0) break;
      fVar7 = fVar7 - param_1;
      /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar5,0);
      Atlas_Gameplay_PortalVFXBehaviour__SetBlackHoleTime(param_2,uVar3,uVar1);
      if (*(long *)(param_2 + 0x20) == 0) break;
      uStack_78 = uVar3;
      uStack_70 = uVar1;
      fStack_68 = fVar7;
      uStack_64 = uVar6;
      uVar3 = /*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>$$set_Item*/ func_0x02568504(*(long *)(param_2 + 0x20),uVar4,&uStack_78,uRam0000000003d3d650);
      if (fVar7 <= 0.0) {
        /*Atlas.Gameplay.PortalVFXBehaviour$$RemoveFromPortal*/ func_0x014c46bc(uVar3,uVar4,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x30),
                        1);
      }
      uVar2 = uVar2 - 1;
      if ((int)uVar2 < 0) {
        return;
      }
      lVar5 = *(long *)(param_2 + 0x20);
    } while (lVar5 != 0);
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14c424c | Atlas.Gameplay.PortalVFXBehaviour.RemoveFromEnterPortal
// ============================================================

long Atlas_Gameplay_PortalVFXBehaviour__RemoveFromEnterPortal
               (long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  undefined8 unaff_x19;
  int iVar11;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 auVar12 [16];
  undefined1 *puVar13;
  undefined *puVar14;
  
  lVar6 = *(long *)(param_1 + 0x20);
  lVar7 = *(long *)(param_1 + 0x30);
  if ((bRam0000000003eb4b2a & 1) == 0) {
    func_0x00f78a20(0x3d361d0);
    func_0x00f78a20(0x3d3d638);
    param_1 = func_0x00f78a20(0x3d3d648);
    bRam0000000003eb4b2a = 1;
  }
  uVar10 = (uint)param_2;
  if (param_3 == 0) {
    if (lVar6 == 0) goto code_r0x014c47b4;
  }
  else {
    if (lVar6 == 0) goto code_r0x014c47b4;
    if (*(uint *)(lVar6 + 0x18) <= uVar10) {
      param_1 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    Atlas_Gameplay_PortalVFXBehaviour__DisableShaderForMaterials
              (param_1,*(undefined8 *)(*(long *)(lVar6 + 0x10) + (long)(int)uVar10 * 0x18 + 0x28));
  }
  if (*(uint *)(lVar6 + 0x18) <= uVar10) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  if (lVar7 != 0) {
    /*System.Collections.Generic.HashSet<ResourceManager.InstanceOperation>$$Remove*/ func_0x021e9740(lVar7,*(undefined8 *)(*(long *)(lVar6 + 0x10) + (long)(int)uVar10 * 0x18 + 0x20)
                    ,uRam0000000003d361d0);
    puVar13 = &stack0xfffffffffffffff0;
    uVar8 = *(uint *)(lVar6 + 0x18);
    lVar7 = lVar6;
    uVar3 = uRam0000000003d3d638;
    if (uVar8 <= uVar10) {
      lVar7 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      uVar8 = *(uint *)(lVar6 + 0x18);
    }
    uVar8 = uVar8 - 1;
    *(uint *)(lVar6 + 0x18) = uVar8;
    if (uVar8 - uVar10 != 0 && (int)uVar10 <= (int)uVar8) {
      uVar3 = *(undefined8 *)(lVar6 + 0x10);
      lVar7 = /*System.Array$$Copy*/ func_0x0292b4cc(uVar3,uVar10 + 1,uVar3,param_2,uVar8 - uVar10,0,in_x6,in_x7,unaff_x20,
                              unaff_x19);
      uVar8 = *(uint *)(lVar6 + 0x18);
    }
    lVar9 = *(long *)(lVar6 + 0x10);
    if (lVar9 == 0) {
      func_0x00f78af4();
    }
    else if (uVar8 < *(uint *)(lVar9 + 0x18)) {
      lVar9 = lVar9 + (long)(int)uVar8 * 0x18;
      *(undefined8 *)(lVar9 + 0x20) = 0;
      *(undefined8 *)(lVar9 + 0x28) = 0;
      *(undefined8 *)(lVar9 + 0x30) = 0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      return lVar7;
    }
    uVar4 = func_0x00f78b24();
    auVar12 = func_0x00f78ac0(uVar4,0);
    lVar9 = auVar12._0_8_;
    puVar14 = &System_Collections_Generic_List_PortalVFXBehaviour_BlackHoleTarget___RemoveRange;
    iVar5 = auVar12._8_4_;
    iVar11 = (int)uVar3;
    lVar7 = lVar9;
    if (iVar5 < 0) {
      lVar7 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
    }
    if (iVar11 < 0) {
      lVar7 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
    }
    if (*(int *)(lVar9 + 0x18) - iVar5 < iVar11) {
      lVar7 = /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
    }
    if (0 < iVar11) {
      iVar1 = *(int *)(lVar9 + 0x18) - iVar11;
      *(int *)(lVar9 + 0x18) = iVar1;
      if (iVar1 - iVar5 != 0 && iVar5 <= iVar1) {
        /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(lVar9 + 0x10),iVar11 + iVar5,*(undefined8 *)(lVar9 + 0x10),
                        auVar12._8_8_,iVar1 - iVar5,0,in_x6,in_x7,unaff_x22,unaff_x21,param_2,lVar6,
                        puVar13,puVar14);
        iVar1 = *(int *)(lVar9 + 0x18);
      }
      lVar7 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar9 + 0x10),iVar1,uVar3,0);
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    }
    return lVar7;
  }
code_r0x014c47b4:
  lVar6 = func_0x00f78af4();
  if ((bRam0000000003eb4b30 & 1) == 0) {
    func_0x00f78a20(0x3d68f70);
    bRam0000000003eb4b30 = 1;
  }
  uVar2 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Anim_PortalRespawn')*/ uRam0000000003d68f70,0);
  *(undefined4 *)(lVar6 + 0x48) = uVar2;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar6;
}



// ============================================================
// RVA: 0x14c425c | Atlas.Gameplay.PortalVFXBehaviour.UpdateExitPortal
// ============================================================

void Atlas_Gameplay_PortalVFXBehaviour__UpdateExitPortal(float param_1,long param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  float fStack_78;
  undefined4 uStack_74;
  
  if ((bRam0000000003eb4b27 & 1) == 0) {
    func_0x00f78a20(0x3d3d640);
    func_0x00f78a20(0x3d3d648);
    func_0x00f78a20(0x3d3d650);
    bRam0000000003eb4b27 = 1;
  }
  lVar5 = *(long *)(param_2 + 0x28);
  if (lVar5 != 0) {
    uVar2 = *(int *)(lVar5 + 0x18) - 1;
    if ((int)uVar2 < 0) {
      return;
    }
    do {
      uVar4 = (ulong)uVar2;
      if (*(uint *)(lVar5 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar5 = *(long *)(lVar5 + 0x10) + uVar4 * 0x18;
      uVar3 = *(undefined8 *)(lVar5 + 0x20);
      uVar1 = *(undefined8 *)(lVar5 + 0x28);
      fVar7 = *(float *)(lVar5 + 0x30);
      uVar6 = *(undefined4 *)(lVar5 + 0x34);
      lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_2,0);
      if (lVar5 == 0) break;
      fVar7 = fVar7 - param_1;
      /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar5,0);
      Atlas_Gameplay_PortalVFXBehaviour__SetBlackHoleTime(param_2,uVar3,uVar1);
      if (*(long *)(param_2 + 0x28) == 0) break;
      uStack_88 = uVar3;
      uStack_80 = uVar1;
      fStack_78 = fVar7;
      uStack_74 = uVar6;
      uVar3 = /*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>$$set_Item*/ func_0x02568504(*(long *)(param_2 + 0x28),uVar4,&uStack_88,uRam0000000003d3d650);
      if (fVar7 <= 0.0) {
        /*Atlas.Gameplay.PortalVFXBehaviour$$RemoveFromPortal*/ func_0x014c46bc(uVar3,uVar4,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x38),
                        1);
      }
      uVar2 = uVar2 - 1;
      if ((int)uVar2 < 0) {
        return;
      }
      lVar5 = *(long *)(param_2 + 0x28);
    } while (lVar5 != 0);
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14c43b8 | Atlas.Gameplay.PortalVFXBehaviour.RemoveFromExitPortal
// ============================================================

long Atlas_Gameplay_PortalVFXBehaviour__RemoveFromExitPortal
               (long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  undefined8 unaff_x19;
  int iVar11;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 auVar12 [16];
  undefined1 *puVar13;
  undefined *puVar14;
  
  lVar6 = *(long *)(param_1 + 0x28);
  lVar7 = *(long *)(param_1 + 0x38);
  if ((bRam0000000003eb4b2a & 1) == 0) {
    func_0x00f78a20(0x3d361d0);
    func_0x00f78a20(0x3d3d638);
    param_1 = func_0x00f78a20(0x3d3d648);
    bRam0000000003eb4b2a = 1;
  }
  uVar10 = (uint)param_2;
  if (param_3 == 0) {
    if (lVar6 == 0) goto code_r0x014c47b4;
  }
  else {
    if (lVar6 == 0) goto code_r0x014c47b4;
    if (*(uint *)(lVar6 + 0x18) <= uVar10) {
      param_1 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    Atlas_Gameplay_PortalVFXBehaviour__DisableShaderForMaterials
              (param_1,*(undefined8 *)(*(long *)(lVar6 + 0x10) + (long)(int)uVar10 * 0x18 + 0x28));
  }
  if (*(uint *)(lVar6 + 0x18) <= uVar10) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  if (lVar7 != 0) {
    /*System.Collections.Generic.HashSet<ResourceManager.InstanceOperation>$$Remove*/ func_0x021e9740(lVar7,*(undefined8 *)(*(long *)(lVar6 + 0x10) + (long)(int)uVar10 * 0x18 + 0x20)
                    ,uRam0000000003d361d0);
    puVar13 = &stack0xfffffffffffffff0;
    uVar8 = *(uint *)(lVar6 + 0x18);
    lVar7 = lVar6;
    uVar3 = uRam0000000003d3d638;
    if (uVar8 <= uVar10) {
      lVar7 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      uVar8 = *(uint *)(lVar6 + 0x18);
    }
    uVar8 = uVar8 - 1;
    *(uint *)(lVar6 + 0x18) = uVar8;
    if (uVar8 - uVar10 != 0 && (int)uVar10 <= (int)uVar8) {
      uVar3 = *(undefined8 *)(lVar6 + 0x10);
      lVar7 = /*System.Array$$Copy*/ func_0x0292b4cc(uVar3,uVar10 + 1,uVar3,param_2,uVar8 - uVar10,0,in_x6,in_x7,unaff_x20,
                              unaff_x19);
      uVar8 = *(uint *)(lVar6 + 0x18);
    }
    lVar9 = *(long *)(lVar6 + 0x10);
    if (lVar9 == 0) {
      func_0x00f78af4();
    }
    else if (uVar8 < *(uint *)(lVar9 + 0x18)) {
      lVar9 = lVar9 + (long)(int)uVar8 * 0x18;
      *(undefined8 *)(lVar9 + 0x20) = 0;
      *(undefined8 *)(lVar9 + 0x28) = 0;
      *(undefined8 *)(lVar9 + 0x30) = 0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      return lVar7;
    }
    uVar4 = func_0x00f78b24();
    auVar12 = func_0x00f78ac0(uVar4,0);
    lVar9 = auVar12._0_8_;
    puVar14 = &System_Collections_Generic_List_PortalVFXBehaviour_BlackHoleTarget___RemoveRange;
    iVar5 = auVar12._8_4_;
    iVar11 = (int)uVar3;
    lVar7 = lVar9;
    if (iVar5 < 0) {
      lVar7 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
    }
    if (iVar11 < 0) {
      lVar7 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
    }
    if (*(int *)(lVar9 + 0x18) - iVar5 < iVar11) {
      lVar7 = /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
    }
    if (0 < iVar11) {
      iVar1 = *(int *)(lVar9 + 0x18) - iVar11;
      *(int *)(lVar9 + 0x18) = iVar1;
      if (iVar1 - iVar5 != 0 && iVar5 <= iVar1) {
        /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(lVar9 + 0x10),iVar11 + iVar5,*(undefined8 *)(lVar9 + 0x10),
                        auVar12._8_8_,iVar1 - iVar5,0,in_x6,in_x7,unaff_x22,unaff_x21,param_2,lVar6,
                        puVar13,puVar14);
        iVar1 = *(int *)(lVar9 + 0x18);
      }
      lVar7 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar9 + 0x10),iVar1,uVar3,0);
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    }
    return lVar7;
  }
code_r0x014c47b4:
  lVar6 = func_0x00f78af4();
  if ((bRam0000000003eb4b30 & 1) == 0) {
    func_0x00f78a20(0x3d68f70);
    bRam0000000003eb4b30 = 1;
  }
  uVar2 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Anim_PortalRespawn')*/ uRam0000000003d68f70,0);
  *(undefined4 *)(lVar6 + 0x48) = uVar2;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar6;
}



// ============================================================
// RVA: 0x14c43c8 | Atlas.Gameplay.PortalVFXBehaviour.GetMinW
// ============================================================

float Atlas_Gameplay_PortalVFXBehaviour__GetMinW(float param_1,float param_2)

{
  return param_1 * 0.5 + param_2 * 0.5;
}



// ============================================================
// RVA: 0x14c43dc | Atlas.Gameplay.PortalVFXBehaviour.GetMaxW
// ============================================================

float Atlas_Gameplay_PortalVFXBehaviour__GetMaxW(float param_1,float param_2)

{
  return (param_1 * 0.5 - param_2 * 0.5) + 1.0;
}



// ============================================================
// RVA: 0x14c43f8 | Atlas.Gameplay.PortalVFXBehaviour.SetBlackHoleW
// ============================================================

/* WARNING: Possible PIC construction at 0x014c437c: Changing call to branch */

long Atlas_Gameplay_PortalVFXBehaviour__SetBlackHoleW
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,long param_6,long param_7,long param_8,undefined8 param_9)

{
  int iVar1;
  code *pcVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int extraout_w1;
  int iVar11;
  undefined8 uVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  undefined8 *unaff_x21;
  undefined8 uVar19;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined *puVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  undefined8 uStack_110;
  float fStack_108;
  undefined4 uStack_104;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  if ((bRam0000000003eb4b28 & 1) == 0) {
    func_0x00f78a20(0x3d329e0);
    func_0x00f78a20(0x3d329e8);
    func_0x00f78a20(0x3d329f0);
    func_0x00f78a20(0x3d3b1b0);
    func_0x00f78a20(0x3d23dc8);
    bRam0000000003eb4b28 = 1;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  lStack_68 = 0;
  if (param_6 != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_78,param_6,uRam0000000003d3b1b0);
    while( true ) {
      uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_78,uRam0000000003d329e8);
      lVar5 = lStack_68;
      if ((uVar4 & 1) == 0) {
        lVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_78,uRam0000000003d329e0);
        return lVar5;
      }
      if (((*(ushort *)(/*Atlas.Gameplay.PortalVFXBehaviour_TypeInfo*/ lRam0000000003d23dc8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.PortalVFXBehaviour_TypeInfo*/ lRam0000000003d23dc8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar22 = **(undefined4 **)(/*Atlas.Gameplay.PortalVFXBehaviour_TypeInfo*/ lRam0000000003d23dc8 + 0xb8);
      uStack_88 = 0;
      uStack_80 = 0;
      /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(param_1,param_2,param_3,param_4,&uStack_88,0);
      if (lVar5 == 0) break;
      /*UnityEngine.Material$$SetVector*/ func_0x0323af88((undefined4)uStack_88,uStack_88._4_4_,(undefined4)uStack_80,uStack_80._4_4_,
                      lVar5,uVar22,0);
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x14c4564);
    (*pcVar2)();
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar6 = (long *)___cxa_begin_catch();
    lVar16 = *plVar6;
    ___cxa_end_catch();
    lVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_78,*unaff_x21);
    if (lVar16 == 0) {
      return lVar5;
    }
    func_0x00f78ac0(lVar16,0);
  }
  auVar24 = __Unwind_Resume();
  plVar6 = auVar24._8_8_;
  lVar5 = auVar24._0_8_;
  puVar3 = &stack0xffffffffffffff40;
  puStack_98 = &Atlas_Gameplay_PortalVFXBehaviour__OnUpdate;
  uVar19 = 0x3eb4000;
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b29 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4b29 = 1;
  }
  if (plVar6 != (long *)0x0) {
    lVar16 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar4 != 0) {
      piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar7 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
          goto code_r0x014c4638;
        }
        piVar14 = piVar14 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014c4638:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
    Atlas_Gameplay_PortalVFXBehaviour__UpdateEnterPortal(lVar5);
    lVar16 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar4 != 0) {
      piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar7 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
          goto Atlas_Gameplay_PortalVFXBehaviour__UpdateExitPortal;
        }
        piVar14 = piVar14 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
Atlas_Gameplay_PortalVFXBehaviour__UpdateExitPortal:
    fVar21 = (float)(*(code *)*puVar7)(plVar6,puVar7[1]);
    puVar3 = auStack_120;
    lVar16 = lVar5;
    if ((bRam0000000003eb4b27 & 1) == 0) {
      func_0x00f78a20(0x3d3d640);
      func_0x00f78a20(0x3d3d648);
      lVar16 = func_0x00f78a20(0x3d3d650);
      bRam0000000003eb4b27 = 1;
    }
    lVar18 = *(long *)(lVar5 + 0x28);
    if (lVar18 != 0) {
      uVar15 = *(int *)(lVar18 + 0x18) - 1;
      if ((int)uVar15 < 0) {
        return lVar16;
      }
      unaff_x23 = 0x18;
      unaff_x24 = 0x3d3d650;
      do {
        uVar4 = (ulong)uVar15;
        if (*(uint *)(lVar18 + 0x18) <= uVar15) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar16 = *(long *)(lVar18 + 0x10) + uVar4 * 0x18;
        uVar19 = *(undefined8 *)(lVar16 + 0x20);
        unaff_x22 = *(undefined8 *)(lVar16 + 0x28);
        fVar23 = *(float *)(lVar16 + 0x30);
        uVar22 = *(undefined4 *)(lVar16 + 0x34);
        lVar16 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
        if (lVar16 == 0) break;
        fVar23 = fVar23 - fVar21;
        /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar16,0);
        Atlas_Gameplay_PortalVFXBehaviour__SetBlackHoleTime(lVar5,uVar19,unaff_x22);
        if (*(long *)(lVar5 + 0x28) == 0) break;
        uStack_118 = uVar19;
        uStack_110 = unaff_x22;
        fStack_108 = fVar23;
        uStack_104 = uVar22;
        lVar16 = /*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>$$set_Item*/ func_0x02568504(*(long *)(lVar5 + 0x28),uVar4,&uStack_118,uRam0000000003d3d650);
        auVar24._8_4_ = uVar15;
        auVar24._0_8_ = lVar16;
        auVar24._12_4_ = 0;
        if (fVar23 <= 0.0) {
          param_7 = *(long *)(lVar5 + 0x28);
          param_8 = *(long *)(lVar5 + 0x38);
          param_9 = 1;
          puVar20 = (undefined *)0x14c4380;
          goto code_r0x014c46bc;
        }
        uVar15 = uVar15 - 1;
        if ((int)uVar15 < 0) {
          return lVar16;
        }
        lVar18 = *(long *)(lVar5 + 0x28);
      } while (lVar18 != 0);
    }
    lVar5 = func_0x00f78af4();
    return lVar5;
  }
  puVar20 = &Atlas_Gameplay_PortalVFXBehaviour__RemoveFromPortal;
  auVar24 = func_0x00f78af4();
  uVar4 = 0;
code_r0x014c46bc:
  uVar12 = auVar24._8_8_;
  uVar8 = auVar24._0_8_;
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar3 + -0x28) = uVar19;
  *(ulong *)(puVar3 + -0x20) = uVar4;
  *(long *)(puVar3 + -0x18) = lVar5;
  *(undefined1 ***)(puVar3 + -0x10) = &puStack_a0;
  *(undefined **)(puVar3 + -8) = puVar20;
  if ((bRam0000000003eb4b2a & 1) == 0) {
    func_0x00f78a20(0x3d361d0);
    func_0x00f78a20(0x3d3d638);
    uVar8 = func_0x00f78a20(0x3d3d648);
    bRam0000000003eb4b2a = 1;
  }
  uVar15 = auVar24._8_4_;
  if ((int)param_9 == 0) {
    if (param_7 == 0) goto code_r0x014c47b4;
  }
  else {
    if (param_7 == 0) goto code_r0x014c47b4;
    if (*(uint *)(param_7 + 0x18) <= uVar15) {
      uVar8 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    Atlas_Gameplay_PortalVFXBehaviour__DisableShaderForMaterials
              (uVar8,*(undefined8 *)(*(long *)(param_7 + 0x10) + (long)(int)uVar15 * 0x18 + 0x28));
  }
  if (*(uint *)(param_7 + 0x18) <= uVar15) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  if (param_8 != 0) {
    /*System.Collections.Generic.HashSet<ResourceManager.InstanceOperation>$$Remove*/ func_0x021e9740(param_8,*(undefined8 *)
                             (*(long *)(param_7 + 0x10) + (long)(int)uVar15 * 0x18 + 0x20),
                    uRam0000000003d361d0);
    uVar19 = *(undefined8 *)(puVar3 + -0x30);
    uVar8 = *(undefined8 *)(puVar3 + -0x28);
    *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
    *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
    *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
    *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
    uVar13 = *(uint *)(param_7 + 0x18);
    lVar5 = param_7;
    uVar9 = uRam0000000003d3d638;
    if (uVar13 <= uVar15) {
      lVar5 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      uVar13 = *(uint *)(param_7 + 0x18);
    }
    uVar13 = uVar13 - 1;
    *(uint *)(param_7 + 0x18) = uVar13;
    if (uVar13 - uVar15 != 0 && (int)uVar15 <= (int)uVar13) {
      uVar9 = *(undefined8 *)(param_7 + 0x10);
      lVar5 = /*System.Array$$Copy*/ func_0x0292b4cc(uVar9,uVar15 + 1,uVar9,uVar12,uVar13 - uVar15,0);
      uVar13 = *(uint *)(param_7 + 0x18);
    }
    lVar16 = *(long *)(param_7 + 0x10);
    if (lVar16 == 0) {
      func_0x00f78af4();
    }
    else if (uVar13 < *(uint *)(lVar16 + 0x18)) {
      lVar16 = lVar16 + (long)(int)uVar13 * 0x18;
      *(undefined8 *)(lVar16 + 0x20) = 0;
      *(undefined8 *)(lVar16 + 0x28) = 0;
      *(undefined8 *)(lVar16 + 0x30) = 0;
      *(int *)(param_7 + 0x1c) = *(int *)(param_7 + 0x1c) + 1;
      return lVar5;
    }
    uVar10 = func_0x00f78b24();
    auVar24 = func_0x00f78ac0(uVar10,0);
    lVar16 = auVar24._0_8_;
    *(undefined8 *)(puVar3 + -0x50) = uVar19;
    *(undefined8 *)(puVar3 + -0x48) = uVar8;
    *(undefined8 *)(puVar3 + -0x40) = uVar12;
    *(long *)(puVar3 + -0x38) = param_7;
    *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x28) =
         &System_Collections_Generic_List_PortalVFXBehaviour_BlackHoleTarget___RemoveRange;
    iVar11 = auVar24._8_4_;
    iVar17 = (int)uVar9;
    lVar5 = lVar16;
    if (iVar11 < 0) {
      lVar5 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
    }
    if (iVar17 < 0) {
      lVar5 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
    }
    if (*(int *)(lVar16 + 0x18) - iVar11 < iVar17) {
      lVar5 = /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
    }
    if (0 < iVar17) {
      iVar1 = *(int *)(lVar16 + 0x18) - iVar17;
      *(int *)(lVar16 + 0x18) = iVar1;
      if (iVar1 - iVar11 != 0 && iVar11 <= iVar1) {
        /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(lVar16 + 0x10),iVar17 + iVar11,
                        *(undefined8 *)(lVar16 + 0x10),auVar24._8_8_,iVar1 - iVar11,0);
        iVar1 = *(int *)(lVar16 + 0x18);
      }
      lVar5 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar16 + 0x10),iVar1,uVar9,0);
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
    }
    return lVar5;
  }
code_r0x014c47b4:
  lVar5 = func_0x00f78af4();
  *(undefined8 *)(puVar3 + -0x70) = param_9;
  *(long *)(puVar3 + -0x68) = param_8;
  *(long *)(puVar3 + -0x60) = param_7;
  *(undefined8 *)(puVar3 + -0x58) = uVar12;
  *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x48) = &Atlas_Gameplay_PortalVFXBehaviour___ctor;
  if ((bRam0000000003eb4b30 & 1) == 0) {
    func_0x00f78a20(0x3d68f70);
    bRam0000000003eb4b30 = 1;
  }
  uVar22 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Anim_PortalRespawn')*/ uRam0000000003d68f70,0);
  *(undefined4 *)(lVar5 + 0x48) = uVar22;
  *(undefined8 *)(puVar3 + -0x70) = *(undefined8 *)(puVar3 + -0x70);
  *(undefined8 *)(puVar3 + -0x68) = *(undefined8 *)(puVar3 + -0x68);
  *(undefined8 *)(puVar3 + -0x60) = *(undefined8 *)(puVar3 + -0x60);
  *(undefined8 *)(puVar3 + -0x58) = *(undefined8 *)(puVar3 + -0x58);
  *(undefined8 *)(puVar3 + -0x50) = *(undefined8 *)(puVar3 + -0x50);
  *(undefined8 *)(puVar3 + -0x48) = *(undefined8 *)(puVar3 + -0x48);
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
// RVA: 0x14c45a8 | Atlas.Gameplay.PortalVFXBehaviour.OnUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x014c437c: Changing call to branch */

long Atlas_Gameplay_PortalVFXBehaviour__OnUpdate
               (long param_1,long *param_2,long param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined *puVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  float fStack_78;
  undefined4 uStack_74;
  
  puVar2 = &stack0xffffffffffffffd0;
  uVar16 = 0x3eb4000;
  if ((bRam0000000003eb4b29 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4b29 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar10 = *param_2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_014c4638;
        }
        piVar12 = piVar12 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar3 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
LAB_014c4638:
    (*(code *)*puVar3)(param_2,puVar3[1]);
    Atlas_Gameplay_PortalVFXBehaviour__UpdateEnterPortal(param_1);
    lVar10 = *param_2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto Atlas_Gameplay_PortalVFXBehaviour__UpdateExitPortal;
        }
        piVar12 = piVar12 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar3 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
Atlas_Gameplay_PortalVFXBehaviour__UpdateExitPortal:
    fVar18 = (float)(*(code *)*puVar3)(param_2,puVar3[1]);
    puVar2 = auStack_90;
    lVar10 = param_1;
    if ((bRam0000000003eb4b27 & 1) == 0) {
      func_0x00f78a20(0x3d3d640);
      func_0x00f78a20(0x3d3d648);
      lVar10 = func_0x00f78a20(0x3d3d650);
      bRam0000000003eb4b27 = 1;
    }
    lVar15 = *(long *)(param_1 + 0x28);
    if (lVar15 != 0) {
      uVar13 = *(int *)(lVar15 + 0x18) - 1;
      if ((int)uVar13 < 0) {
        return lVar10;
      }
      unaff_x23 = 0x18;
      unaff_x24 = 0x3d3d650;
      do {
        uVar11 = (ulong)uVar13;
        if (*(uint *)(lVar15 + 0x18) <= uVar13) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar10 = *(long *)(lVar15 + 0x10) + uVar11 * 0x18;
        uVar16 = *(undefined8 *)(lVar10 + 0x20);
        unaff_x22 = *(undefined8 *)(lVar10 + 0x28);
        fVar20 = *(float *)(lVar10 + 0x30);
        uVar19 = *(undefined4 *)(lVar10 + 0x34);
        lVar10 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
        if (lVar10 == 0) break;
        fVar20 = fVar20 - fVar18;
        /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar10,0);
        Atlas_Gameplay_PortalVFXBehaviour__SetBlackHoleTime(param_1,uVar16,unaff_x22);
        if (*(long *)(param_1 + 0x28) == 0) break;
        uStack_88 = uVar16;
        uStack_80 = unaff_x22;
        fStack_78 = fVar20;
        uStack_74 = uVar19;
        lVar10 = /*System.Collections.Generic.List<PortalVFXBehaviour.BlackHoleTarget>$$set_Item*/ func_0x02568504(*(long *)(param_1 + 0x28),uVar11,&uStack_88,uRam0000000003d3d650);
        auVar21._8_4_ = uVar13;
        auVar21._0_8_ = lVar10;
        auVar21._12_4_ = 0;
        if (fVar20 <= 0.0) {
          param_3 = *(long *)(param_1 + 0x28);
          param_4 = *(long *)(param_1 + 0x38);
          param_5 = 1;
          puVar17 = (undefined *)0x14c4380;
          goto code_r0x014c46bc;
        }
        uVar13 = uVar13 - 1;
        if ((int)uVar13 < 0) {
          return lVar10;
        }
        lVar15 = *(long *)(param_1 + 0x28);
      } while (lVar15 != 0);
    }
    lVar10 = func_0x00f78af4();
    return lVar10;
  }
  puVar17 = &Atlas_Gameplay_PortalVFXBehaviour__RemoveFromPortal;
  auVar21 = func_0x00f78af4();
  uVar11 = 0;
code_r0x014c46bc:
  uVar8 = auVar21._8_8_;
  uVar4 = auVar21._0_8_;
  *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x28) = uVar16;
  *(ulong *)(puVar2 + -0x20) = uVar11;
  *(long *)(puVar2 + -0x18) = param_1;
  *(undefined1 **)(puVar2 + -0x10) = &stack0xfffffffffffffff0;
  *(undefined **)(puVar2 + -8) = puVar17;
  if ((bRam0000000003eb4b2a & 1) == 0) {
    func_0x00f78a20(0x3d361d0);
    func_0x00f78a20(0x3d3d638);
    uVar4 = func_0x00f78a20(0x3d3d648);
    bRam0000000003eb4b2a = 1;
  }
  uVar13 = auVar21._8_4_;
  if ((int)param_5 == 0) {
    if (param_3 == 0) goto code_r0x014c47b4;
  }
  else {
    if (param_3 == 0) goto code_r0x014c47b4;
    if (*(uint *)(param_3 + 0x18) <= uVar13) {
      uVar4 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    Atlas_Gameplay_PortalVFXBehaviour__DisableShaderForMaterials
              (uVar4,*(undefined8 *)(*(long *)(param_3 + 0x10) + (long)(int)uVar13 * 0x18 + 0x28));
  }
  if (*(uint *)(param_3 + 0x18) <= uVar13) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  if (param_4 != 0) {
    /*System.Collections.Generic.HashSet<ResourceManager.InstanceOperation>$$Remove*/ func_0x021e9740(param_4,*(undefined8 *)
                             (*(long *)(param_3 + 0x10) + (long)(int)uVar13 * 0x18 + 0x20),
                    uRam0000000003d361d0);
    uVar16 = *(undefined8 *)(puVar2 + -0x30);
    uVar4 = *(undefined8 *)(puVar2 + -0x28);
    *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
    *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
    *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
    *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
    uVar9 = *(uint *)(param_3 + 0x18);
    lVar10 = param_3;
    uVar5 = uRam0000000003d3d638;
    if (uVar9 <= uVar13) {
      lVar10 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      uVar9 = *(uint *)(param_3 + 0x18);
    }
    uVar9 = uVar9 - 1;
    *(uint *)(param_3 + 0x18) = uVar9;
    if (uVar9 - uVar13 != 0 && (int)uVar13 <= (int)uVar9) {
      uVar5 = *(undefined8 *)(param_3 + 0x10);
      lVar10 = /*System.Array$$Copy*/ func_0x0292b4cc(uVar5,uVar13 + 1,uVar5,uVar8,uVar9 - uVar13,0);
      uVar9 = *(uint *)(param_3 + 0x18);
    }
    lVar15 = *(long *)(param_3 + 0x10);
    if (lVar15 == 0) {
      func_0x00f78af4();
    }
    else if (uVar9 < *(uint *)(lVar15 + 0x18)) {
      lVar15 = lVar15 + (long)(int)uVar9 * 0x18;
      *(undefined8 *)(lVar15 + 0x20) = 0;
      *(undefined8 *)(lVar15 + 0x28) = 0;
      *(undefined8 *)(lVar15 + 0x30) = 0;
      *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
      return lVar10;
    }
    uVar6 = func_0x00f78b24();
    auVar21 = func_0x00f78ac0(uVar6,0);
    lVar15 = auVar21._0_8_;
    *(undefined8 *)(puVar2 + -0x50) = uVar16;
    *(undefined8 *)(puVar2 + -0x48) = uVar4;
    *(undefined8 *)(puVar2 + -0x40) = uVar8;
    *(long *)(puVar2 + -0x38) = param_3;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) =
         &System_Collections_Generic_List_PortalVFXBehaviour_BlackHoleTarget___RemoveRange;
    iVar7 = auVar21._8_4_;
    iVar14 = (int)uVar5;
    lVar10 = lVar15;
    if (iVar7 < 0) {
      lVar10 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
    }
    if (iVar14 < 0) {
      lVar10 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
    }
    if (*(int *)(lVar15 + 0x18) - iVar7 < iVar14) {
      lVar10 = /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
    }
    if (0 < iVar14) {
      iVar1 = *(int *)(lVar15 + 0x18) - iVar14;
      *(int *)(lVar15 + 0x18) = iVar1;
      if (iVar1 - iVar7 != 0 && iVar7 <= iVar1) {
        /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(lVar15 + 0x10),iVar14 + iVar7,*(undefined8 *)(lVar15 + 0x10)
                        ,auVar21._8_8_,iVar1 - iVar7,0);
        iVar1 = *(int *)(lVar15 + 0x18);
      }
      lVar10 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar15 + 0x10),iVar1,uVar5,0);
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
    }
    return lVar10;
  }
code_r0x014c47b4:
  lVar10 = func_0x00f78af4();
  *(undefined8 *)(puVar2 + -0x70) = param_5;
  *(long *)(puVar2 + -0x68) = param_4;
  *(long *)(puVar2 + -0x60) = param_3;
  *(undefined8 *)(puVar2 + -0x58) = uVar8;
  *(undefined1 **)(puVar2 + -0x50) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0x48) = &Atlas_Gameplay_PortalVFXBehaviour___ctor;
  if ((bRam0000000003eb4b30 & 1) == 0) {
    func_0x00f78a20(0x3d68f70);
    bRam0000000003eb4b30 = 1;
  }
  uVar19 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Anim_PortalRespawn')*/ uRam0000000003d68f70,0);
  *(undefined4 *)(lVar10 + 0x48) = uVar19;
  *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)(puVar2 + -0x70);
  *(undefined8 *)(puVar2 + -0x68) = *(undefined8 *)(puVar2 + -0x68);
  *(undefined8 *)(puVar2 + -0x60) = *(undefined8 *)(puVar2 + -0x60);
  *(undefined8 *)(puVar2 + -0x58) = *(undefined8 *)(puVar2 + -0x58);
  *(undefined8 *)(puVar2 + -0x50) = *(undefined8 *)(puVar2 + -0x50);
  *(undefined8 *)(puVar2 + -0x48) = *(undefined8 *)(puVar2 + -0x48);
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar10;
}



// ============================================================
// RVA: 0x14c46bc | Atlas.Gameplay.PortalVFXBehaviour.RemoveFromPortal
// ============================================================

long Atlas_Gameplay_PortalVFXBehaviour__RemoveFromPortal
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4,int param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  undefined8 unaff_x19;
  int iVar10;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 auVar11 [16];
  undefined1 *puVar12;
  undefined *puVar13;
  
  if ((bRam0000000003eb4b2a & 1) == 0) {
    func_0x00f78a20(0x3d361d0);
    func_0x00f78a20(0x3d3d638);
    param_1 = func_0x00f78a20(0x3d3d648);
    bRam0000000003eb4b2a = 1;
  }
  uVar9 = (uint)param_2;
  if (param_5 == 0) {
    if (param_3 == 0) goto LAB_014c47b4;
  }
  else {
    if (param_3 == 0) goto LAB_014c47b4;
    if (*(uint *)(param_3 + 0x18) <= uVar9) {
      param_1 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    Atlas_Gameplay_PortalVFXBehaviour__DisableShaderForMaterials
              (param_1,*(undefined8 *)(*(long *)(param_3 + 0x10) + (long)(int)uVar9 * 0x18 + 0x28));
  }
  if (*(uint *)(param_3 + 0x18) <= uVar9) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  if (param_4 != 0) {
    /*System.Collections.Generic.HashSet<ResourceManager.InstanceOperation>$$Remove*/ func_0x021e9740(param_4,*(undefined8 *)
                             (*(long *)(param_3 + 0x10) + (long)(int)uVar9 * 0x18 + 0x20),
                    uRam0000000003d361d0);
    puVar12 = &stack0xfffffffffffffff0;
    uVar7 = *(uint *)(param_3 + 0x18);
    lVar3 = param_3;
    uVar4 = uRam0000000003d3d638;
    if (uVar7 <= uVar9) {
      lVar3 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      uVar7 = *(uint *)(param_3 + 0x18);
    }
    uVar7 = uVar7 - 1;
    *(uint *)(param_3 + 0x18) = uVar7;
    if (uVar7 - uVar9 != 0 && (int)uVar9 <= (int)uVar7) {
      uVar4 = *(undefined8 *)(param_3 + 0x10);
      lVar3 = /*System.Array$$Copy*/ func_0x0292b4cc(uVar4,uVar9 + 1,uVar4,param_2,uVar7 - uVar9,0,param_7,param_8,
                              unaff_x20,unaff_x19);
      uVar7 = *(uint *)(param_3 + 0x18);
    }
    lVar8 = *(long *)(param_3 + 0x10);
    if (lVar8 == 0) {
      func_0x00f78af4();
    }
    else if (uVar7 < *(uint *)(lVar8 + 0x18)) {
      lVar8 = lVar8 + (long)(int)uVar7 * 0x18;
      *(undefined8 *)(lVar8 + 0x20) = 0;
      *(undefined8 *)(lVar8 + 0x28) = 0;
      *(undefined8 *)(lVar8 + 0x30) = 0;
      *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
      return lVar3;
    }
    uVar5 = func_0x00f78b24();
    auVar11 = func_0x00f78ac0(uVar5,0);
    lVar8 = auVar11._0_8_;
    puVar13 = &System_Collections_Generic_List_PortalVFXBehaviour_BlackHoleTarget___RemoveRange;
    iVar6 = auVar11._8_4_;
    iVar10 = (int)uVar4;
    lVar3 = lVar8;
    if (iVar6 < 0) {
      lVar3 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
    }
    if (iVar10 < 0) {
      lVar3 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
    }
    if (*(int *)(lVar8 + 0x18) - iVar6 < iVar10) {
      lVar3 = /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
    }
    if (0 < iVar10) {
      iVar1 = *(int *)(lVar8 + 0x18) - iVar10;
      *(int *)(lVar8 + 0x18) = iVar1;
      if (iVar1 - iVar6 != 0 && iVar6 <= iVar1) {
        /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(lVar8 + 0x10),iVar10 + iVar6,*(undefined8 *)(lVar8 + 0x10),
                        auVar11._8_8_,iVar1 - iVar6,0,param_7,param_8,unaff_x22,unaff_x21,param_2,
                        param_3,puVar12,puVar13);
        iVar1 = *(int *)(lVar8 + 0x18);
      }
      lVar3 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar8 + 0x10),iVar1,uVar4,0);
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    }
    return lVar3;
  }
LAB_014c47b4:
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb4b30 & 1) == 0) {
    func_0x00f78a20(0x3d68f70);
    bRam0000000003eb4b30 = 1;
  }
  uVar2 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Anim_PortalRespawn')*/ uRam0000000003d68f70,0);
  *(undefined4 *)(lVar3 + 0x48) = uVar2;
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
// RVA: 0x14c47b8 | Atlas.Gameplay.PortalVFXBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_PortalVFXBehaviour___ctor(ulong param_1)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4b30 & 1) == 0) {
    func_0x00f78a20(0x3d68f70);
    bRam0000000003eb4b30 = 1;
  }
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Anim_PortalRespawn')*/ uRam0000000003d68f70,0);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
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
// RVA: 0x14c481c | Atlas.Gameplay.PortalVFXBehaviour..cctor
// ============================================================

void Atlas_Gameplay_PortalVFXBehaviour___cctor(void)

{
  undefined4 uVar1;
  
  if ((bRam0000000003eb4b31 & 1) == 0) {
    func_0x00f78a20(0x3d23dc8);
    func_0x00f78a20(0x3d76d30);
    bRam0000000003eb4b31 = 1;
  }
  uVar1 = /*UnityEngine.Shader$$PropertyToID*/ func_0x03261878(/*STR('_BlackHoleParams')*/ uRam0000000003d76d30,0);
  **(undefined4 **)(/*Atlas.Gameplay.PortalVFXBehaviour_TypeInfo*/ lRam0000000003d23dc8 + 0xb8) = uVar1;
  return;
}



