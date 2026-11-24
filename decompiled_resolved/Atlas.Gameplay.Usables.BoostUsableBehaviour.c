// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Usables.BoostUsableBehaviour

// ============================================================
// RVA: 0x153e4a4 | Atlas.Gameplay.Usables.BoostUsableBehaviour.Reset
// ============================================================

void Atlas_Gameplay_Usables_BoostUsableBehaviour__Reset(long param_1)

{
  /*Atlas.Gameplay.Usables.BoostUsableBehaviour$$SetInHandVFX*/ func_0x0153ec78();
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}



// ============================================================
// RVA: 0x153e850 | Atlas.Gameplay.Usables.BoostUsableBehaviour.OnUse
// ============================================================

undefined1  [16] Atlas_Gameplay_Usables_BoostUsableBehaviour__OnUse(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  /*Atlas.Gameplay.Usables.BoostUsableBehaviour$$TriggerLinearScaleDown*/ func_0x0153e874();
  if ((bRam0000000003eb4f28 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4f28 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar2,0,0);
  if (auVar3._0_4_ != 0) {
    lVar1 = *(long *)(param_1 + 0x68);
    if (lVar1 != 0) {
      if (pcRam0000000003ebf4c0 == (code *)0x0) {
        pcRam0000000003ebf4c0 =
             (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar3 = (*pcRam0000000003ebf4c0)(lVar1,1);
      return auVar3;
    }
    auVar3._0_8_ = func_0x00f78af4();
    if ((bRam0000000003eb4e52 & 1) == 0) {
      func_0x00f78a20(0x3d25750,0);
      bRam0000000003eb4e52 = 1;
    }
    uVar2 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent_TypeInfo*/ uRam0000000003d25750);
    /*UnityEngine.Events.UnityEvent$$.ctor*/ func_0x03277ec8(uVar2,0);
    *(undefined8 *)(auVar3._0_8_ + 0x38) = uVar2;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    auVar3._8_8_ = 0;
    return auVar3;
  }
  return auVar3;
}



// ============================================================
// RVA: 0x153e874 | Atlas.Gameplay.Usables.BoostUsableBehaviour.TriggerLinearScaleDown
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x153ea2c | Atlas.Gameplay.Usables.BoostUsableBehaviour.OnUpdate
// ============================================================

void Atlas_Gameplay_Usables_BoostUsableBehaviour__OnUpdate(float param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((bRam0000000003eb4f29 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4f29 = 1;
  }
  *(float *)(param_2 + 0x70) = *(float *)(param_2 + 0x70) + param_1;
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
  if (iVar1 == 0) {
    return;
  }
  fVar5 = *(float *)(param_2 + 0x70) / *(float *)(param_2 + 0x60);
  iVar1 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar5,0);
  fVar6 = 1.0;
  if (iVar1 == 0 && fVar5 <= 1.0) {
    fVar6 = fVar5;
  }
  iVar1 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar6,0);
  fVar7 = *(float *)(param_2 + 0x78);
  /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  fVar5 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
  if (*(long *)(param_2 + 0x50) != 0) {
    fVar4 = 0.0;
    if (iVar1 == 0 && 0.0 <= fVar6) {
      fVar4 = fVar6;
    }
    lVar2 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(param_2 + 0x50),0);
    /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar7 + fVar4 * (fVar5 - fVar7),0);
    if (lVar2 != 0) {
      if (pcRam0000000003ec19a8 == (code *)0x0) {
        pcRam0000000003ec19a8 =
             (code *)func_0x00f789d4("UnityEngine.Transform::set_localScale_Injected(UnityEngine.Vector3&)"
                                     ,0);
      }
      (*pcRam0000000003ec19a8)(lVar2,&stack0xffffffffffffffd0);
      return;
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x153ebbc | Atlas.Gameplay.Usables.BoostUsableBehaviour.get_InHandVFX
// ============================================================

undefined8 Atlas_Gameplay_Usables_BoostUsableBehaviour__get_InHandVFX(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x153ebc4 | Atlas.Gameplay.Usables.BoostUsableBehaviour.get_InUseVFX
// ============================================================

undefined8 Atlas_Gameplay_Usables_BoostUsableBehaviour__get_InUseVFX(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x153ebcc | Atlas.Gameplay.Usables.BoostUsableBehaviour.Awake
// ============================================================

/* WARNING: Possible PIC construction at 0x0153ecf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153ed38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0153ed3c) */
/* WARNING: Removing unreachable block (ram,0x0153ed44) */
/* WARNING: Removing unreachable block (ram,0x0153ed5c) */

long Atlas_Gameplay_Usables_BoostUsableBehaviour__Awake
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_x22;
  undefined8 ***pppuVar8;
  undefined4 extraout_s0;
  undefined *puStack_98;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4f24 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4f24 = 1;
  }
  uVar6 = *(undefined8 *)(param_4 + 0x50);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  if ((int)lVar3 == 0) {
    return lVar3;
  }
  if ((*(long *)(param_4 + 0x50) != 0) &&
     (lVar3 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(param_4 + 0x50),0), lVar3 != 0)) {
    /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(lVar3,0);
    lVar3 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
    *(undefined4 *)(param_4 + 0x78) = extraout_s0;
    *(undefined4 *)(param_4 + 0x7c) = param_2;
    *(undefined4 *)(param_4 + 0x80) = param_3;
    return lVar3;
  }
  lVar3 = func_0x00f78af4();
  puVar1 = &stack0xffffffffffffffa0;
  puStack_38 = &Atlas_Gameplay_Usables_BoostUsableBehaviour__SetInHandVFX;
  ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4f26 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4f26 = 1;
  }
  uVar7 = *(undefined8 *)(lVar3 + 0x58);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
  pppuVar8 = &ppuStack_40;
  if (iVar2 == 0) {
    uVar7 = *(undefined8 *)(lVar3 + 0x50);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
    if (iVar2 == 0) {
      uVar7 = *(undefined8 *)(lVar3 + 0x68);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
      if ((int)lVar4 == 0) {
        return lVar4;
      }
      lVar4 = *(long *)(lVar3 + 0x68);
      if (lVar4 != 0) {
        uVar5 = 0;
        puVar1 = &stack0xffffffffffffffd0;
        pppuVar8 = (undefined8 ***)ppuStack_40;
        puStack_98 = puStack_38;
        goto code_r0x0322ef1c;
      }
    }
    else {
      lVar4 = *(long *)(lVar3 + 0x50);
      if (lVar4 != 0) {
        uVar5 = 1;
        param_4 = lVar3;
        uVar6 = uVar7;
        puStack_98 = &UNK_0153ed3c;
        goto code_r0x0322ef1c;
      }
    }
  }
  else {
    lVar4 = *(long *)(lVar3 + 0x58);
    if (lVar4 != 0) {
      uVar5 = 0;
      puVar1 = &stack0xffffffffffffffa0;
      param_4 = lVar3;
      uVar6 = uVar7;
      puStack_98 = &UNK_0153ecf8;
      goto code_r0x0322ef1c;
    }
  }
  param_4 = func_0x00f78af4();
  puStack_68 = &Atlas_Gameplay_Usables_BoostUsableBehaviour__SetInUseVFX;
  pppuVar8 = &ppuStack_70;
  ppuStack_70 = &ppuStack_40;
  if ((bRam0000000003eb4f25 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4f25 = 1;
  }
  uVar6 = *(undefined8 *)(param_4 + 0x58);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  if ((int)lVar4 == 0) {
    return lVar4;
  }
  lVar4 = *(long *)(param_4 + 0x58);
  if (lVar4 == 0) {
    lVar3 = func_0x00f78af4();
    puStack_98 = &Atlas_Gameplay_Usables_BoostUsableBehaviour__TriggerBlipVFX;
    if ((bRam0000000003eb4f28 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4f28 = 1;
    }
    uVar7 = *(undefined8 *)(lVar3 + 0x68);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
    if ((int)lVar4 == 0) {
      return lVar4;
    }
    lVar4 = *(long *)(lVar3 + 0x68);
    if (lVar4 == 0) {
      lVar3 = func_0x00f78af4();
      if ((bRam0000000003eb4e52 & 1) == 0) {
        func_0x00f78a20(0x3d25750,0);
        bRam0000000003eb4e52 = 1;
      }
      uVar6 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent_TypeInfo*/ uRam0000000003d25750);
      /*UnityEngine.Events.UnityEvent$$.ctor*/ func_0x03277ec8(uVar6,0);
      *(undefined8 *)(lVar3 + 0x38) = uVar6;
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
    uVar5 = 1;
    puVar1 = &stack0xffffffffffffff70;
  }
  else {
    uVar5 = 1;
    puVar1 = &stack0xffffffffffffffa0;
    param_4 = lVar3;
    uVar6 = uVar7;
    pppuVar8 = (undefined8 ***)ppuStack_70;
    puStack_98 = puStack_68;
  }
code_r0x0322ef1c:
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = 0x3d23990;
  *(undefined8 *)(puVar1 + -0x20) = uVar6;
  *(long *)(puVar1 + -0x18) = param_4;
  *(undefined8 ****)(puVar1 + -0x10) = pppuVar8;
  *(undefined **)(puVar1 + -8) = puStack_98;
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar3 = (*pcRam0000000003ebf4c0)(lVar4,uVar5);
  return lVar3;
}



// ============================================================
// RVA: 0x153ec78 | Atlas.Gameplay.Usables.BoostUsableBehaviour.SetInHandVFX
// ============================================================

/* WARNING: Possible PIC construction at 0x0153ecf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153ed38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0153ed3c) */
/* WARNING: Removing unreachable block (ram,0x0153ed44) */
/* WARNING: Removing unreachable block (ram,0x0153ed5c) */

undefined1  [16] Atlas_Gameplay_Usables_BoostUsableBehaviour__SetInHandVFX(long param_1)

{
  undefined8 ***pppuVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar5;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 ***unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar6 [16];
  undefined *puStack_68;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  pppuVar1 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4f26 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4f26 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
  if (iVar2 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
    if (iVar2 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x68);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      auVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
      if (auVar6._0_4_ == 0) {
        return auVar6;
      }
      lVar3 = *(long *)(param_1 + 0x68);
      if (lVar3 != 0) {
        uVar4 = 0;
        goto code_r0x0322ef1c;
      }
    }
    else {
      lVar3 = *(long *)(param_1 + 0x50);
      if (lVar3 != 0) {
        uVar4 = 1;
        unaff_x30 = (undefined *)0x153ed3c;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
        unaff_x19 = param_1;
        unaff_x20 = uVar5;
        unaff_x21 = 0x3d23990;
        unaff_x29 = pppuVar1;
        goto code_r0x0322ef1c;
      }
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x58);
    if (lVar3 != 0) {
      uVar4 = 0;
      unaff_x30 = (undefined *)0x153ecf8;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      unaff_x19 = param_1;
      unaff_x20 = uVar5;
      unaff_x21 = 0x3d23990;
      unaff_x29 = pppuVar1;
      goto code_r0x0322ef1c;
    }
  }
  unaff_x19 = func_0x00f78af4();
  puStack_38 = &Atlas_Gameplay_Usables_BoostUsableBehaviour__SetInUseVFX;
  unaff_x29 = &ppuStack_40;
  ppuStack_40 = pppuVar1;
  if ((bRam0000000003eb4f25 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4f25 = 1;
  }
  unaff_x20 = *(undefined8 *)(unaff_x19 + 0x58);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x20,0,0);
  if (auVar6._0_4_ == 0) {
    return auVar6;
  }
  lVar3 = *(long *)(unaff_x19 + 0x58);
  if (lVar3 == 0) {
    lVar3 = func_0x00f78af4();
    puStack_68 = &Atlas_Gameplay_Usables_BoostUsableBehaviour__TriggerBlipVFX;
    if ((bRam0000000003eb4f28 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4f28 = 1;
    }
    uVar5 = *(undefined8 *)(lVar3 + 0x68);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    auVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
    if (auVar6._0_4_ == 0) {
      return auVar6;
    }
    lVar3 = *(long *)(lVar3 + 0x68);
    if (lVar3 == 0) {
      auVar6._0_8_ = func_0x00f78af4();
      if ((bRam0000000003eb4e52 & 1) == 0) {
        func_0x00f78a20(0x3d25750,0);
        bRam0000000003eb4e52 = 1;
      }
      uVar5 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent_TypeInfo*/ uRam0000000003d25750);
      /*UnityEngine.Events.UnityEvent$$.ctor*/ func_0x03277ec8(uVar5,0);
      *(undefined8 *)(auVar6._0_8_ + 0x38) = uVar5;
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      auVar6._8_8_ = 0;
      return auVar6;
    }
    uVar4 = 1;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
    unaff_x21 = 0x3d23990;
    unaff_x30 = puStack_68;
  }
  else {
    uVar4 = 1;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x21 = 0x3d23990;
    unaff_x19 = param_1;
    unaff_x20 = uVar5;
    unaff_x29 = (undefined8 ***)ppuStack_40;
    unaff_x30 = puStack_38;
  }
code_r0x0322ef1c:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 ****)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar6 = (*pcRam0000000003ebf4c0)(lVar3,uVar4);
  return auVar6;
}



// ============================================================
// RVA: 0x153edcc | Atlas.Gameplay.Usables.BoostUsableBehaviour.SetInUseVFX
// ============================================================

undefined1  [16] Atlas_Gameplay_Usables_BoostUsableBehaviour__SetInUseVFX(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar5 [16];
  undefined *puStack_38;
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4f25 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4f25 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
  if (auVar5._0_4_ == 0) {
    return auVar5;
  }
  lVar2 = *(long *)(param_1 + 0x58);
  puStack_38 = unaff_x30;
  if (lVar2 == 0) {
    lVar2 = func_0x00f78af4();
    puStack_38 = &Atlas_Gameplay_Usables_BoostUsableBehaviour__TriggerBlipVFX;
    if ((bRam0000000003eb4f28 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4f28 = 1;
    }
    uVar4 = *(undefined8 *)(lVar2 + 0x68);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    auVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
    if (auVar5._0_4_ == 0) {
      return auVar5;
    }
    lVar2 = *(long *)(lVar2 + 0x68);
    if (lVar2 == 0) {
      auVar5._0_8_ = func_0x00f78af4();
      if ((bRam0000000003eb4e52 & 1) == 0) {
        func_0x00f78a20(0x3d25750,0);
        bRam0000000003eb4e52 = 1;
      }
      uVar3 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent_TypeInfo*/ uRam0000000003d25750);
      /*UnityEngine.Events.UnityEvent$$.ctor*/ func_0x03277ec8(uVar3,0);
      *(undefined8 *)(auVar5._0_8_ + 0x38) = uVar3;
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      auVar5._8_8_ = 0;
      return auVar5;
    }
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x21 = 0x3d23990;
    unaff_x19 = param_1;
    unaff_x20 = uVar3;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = puStack_38;
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar5 = (*pcRam0000000003ebf4c0)(lVar2,1);
  return auVar5;
}



// ============================================================
// RVA: 0x153ee6c | Atlas.Gameplay.Usables.BoostUsableBehaviour.TriggerBlipVFX
// ============================================================

undefined1  [16] Atlas_Gameplay_Usables_BoostUsableBehaviour__TriggerBlipVFX(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if ((bRam0000000003eb4f28 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4f28 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar2,0,0);
  if (auVar3._0_4_ != 0) {
    lVar1 = *(long *)(param_1 + 0x68);
    if (lVar1 != 0) {
      if (pcRam0000000003ebf4c0 == (code *)0x0) {
        pcRam0000000003ebf4c0 =
             (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar3 = (*pcRam0000000003ebf4c0)(lVar1,1);
      return auVar3;
    }
    auVar3._0_8_ = func_0x00f78af4();
    if ((bRam0000000003eb4e52 & 1) == 0) {
      func_0x00f78a20(0x3d25750,0);
      bRam0000000003eb4e52 = 1;
    }
    uVar2 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent_TypeInfo*/ uRam0000000003d25750);
    /*UnityEngine.Events.UnityEvent$$.ctor*/ func_0x03277ec8(uVar2,0);
    *(undefined8 *)(auVar3._0_8_ + 0x38) = uVar2;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    auVar3._8_8_ = 0;
    return auVar3;
  }
  return auVar3;
}



// ============================================================
// RVA: 0x153ef0c | Atlas.Gameplay.Usables.BoostUsableBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_Usables_BoostUsableBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
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



