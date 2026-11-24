// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Usables.SatelliteUsableBehaviour

// ============================================================
// RVA: 0x14e7504 | Atlas.Gameplay.Usables.SatelliteUsableBehaviour.get_InHandVFX
// ============================================================

undefined8 Atlas_Gameplay_Usables_SatelliteUsableBehaviour__get_InHandVFX(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x14e750c | Atlas.Gameplay.Usables.SatelliteUsableBehaviour.get_InUseVFX
// ============================================================

undefined8 Atlas_Gameplay_Usables_SatelliteUsableBehaviour__get_InUseVFX(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x14e7514 | Atlas.Gameplay.Usables.SatelliteUsableBehaviour.SetInUseVFX
// ============================================================

/* WARNING: Possible PIC construction at 0x014e7590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e7638: Changing call to branch */

long Atlas_Gameplay_Usables_SatelliteUsableBehaviour__SetInUseVFX(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 unaff_x22;
  undefined8 *****pppppuVar9;
  float extraout_s0;
  float fVar10;
  undefined *puStack_68;
  undefined8 ****ppppuStack_40;
  undefined *puStack_38;
  
  puVar1 = &stack0xffffffffffffffd0;
  if ((bRam0000000003eb4c18 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4c18 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
  if ((int)lVar3 == 0) {
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x60);
    *(undefined1 *)(param_1 + 100) = 1;
    return lVar3;
  }
  lVar3 = *(long *)(param_1 + 0x58);
  if (lVar3 != 0) {
    uVar6 = 1;
    lVar4 = param_1;
    pppppuVar9 = (undefined8 *****)&stack0xfffffffffffffff0;
    puStack_68 = (undefined *)0x14e7594;
code_r0x0322ef1c:
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = 0x3d23990;
    *(undefined8 *)(puVar1 + -0x20) = uVar7;
    *(long *)(puVar1 + -0x18) = lVar4;
    *(undefined8 ******)(puVar1 + -0x10) = pppppuVar9;
    *(undefined **)(puVar1 + -8) = puStack_68;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*pcRam0000000003ebf4c0)(lVar3,uVar6);
    return lVar3;
  }
  lVar4 = func_0x00f78af4();
  puVar1 = &stack0xffffffffffffffa0;
  puStack_38 = &Atlas_Gameplay_Usables_SatelliteUsableBehaviour__SetInHandVFX;
  pppppuVar9 = &ppppuStack_40;
  ppppuStack_40 = (undefined8 ****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4c19 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4c19 = 1;
  }
  *(undefined1 *)(lVar4 + 100) = 0;
  uVar8 = *(undefined8 *)(lVar4 + 0x58);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
  if (iVar2 == 0) {
    uVar8 = *(undefined8 *)(lVar4 + 0x50);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
    if ((int)lVar3 == 0) {
      return lVar3;
    }
    lVar3 = *(long *)(lVar4 + 0x50);
    if (lVar3 != 0) {
      uVar6 = 1;
      puVar1 = &stack0xffffffffffffffd0;
      lVar4 = param_1;
      pppppuVar9 = (undefined8 *****)ppppuStack_40;
      puStack_68 = puStack_38;
      goto code_r0x0322ef1c;
    }
  }
  else {
    lVar3 = *(long *)(lVar4 + 0x58);
    if (lVar3 != 0) {
      uVar6 = 0;
      uVar7 = uVar8;
      puStack_68 = &UNK_014e763c;
      goto code_r0x0322ef1c;
    }
  }
  uVar7 = uVar8;
  lVar5 = func_0x00f78af4();
  puStack_68 = &Atlas_Gameplay_Usables_SatelliteUsableBehaviour__OnUpdate;
  lVar3 = lVar5;
  if ((bRam0000000003eb4c1a & 1) == 0) {
    lVar3 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb4c1a = 1;
  }
  if (((*(char *)(lVar5 + 100) != '\0') && (0.0 <= *(float *)(lVar5 + 0x68))) &&
     (fVar10 = *(float *)(lVar5 + 0x68) - extraout_s0, *(float *)(lVar5 + 0x68) = fVar10,
     fVar10 < 0.0)) {
    *(undefined4 *)(lVar5 + 0x68) = 0xbf800000;
    uVar8 = *(undefined8 *)(lVar5 + 0x50);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
    if ((int)lVar3 != 0) {
      lVar3 = *(long *)(lVar5 + 0x50);
      if (lVar3 == 0) {
        lVar3 = func_0x00f78af4();
        if ((bRam0000000003eb4e52 & 1) == 0) {
          func_0x00f78a20(0x3d25750,0);
          bRam0000000003eb4e52 = 1;
        }
        uVar7 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent_TypeInfo*/ uRam0000000003d25750);
        /*UnityEngine.Events.UnityEvent$$.ctor*/ func_0x03277ec8(uVar7,0);
        *(undefined8 *)(lVar3 + 0x38) = uVar7;
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
      uVar6 = 0;
      puVar1 = &stack0xffffffffffffffa0;
      goto code_r0x0322ef1c;
    }
  }
  return lVar3;
}



// ============================================================
// RVA: 0x14e75b8 | Atlas.Gameplay.Usables.SatelliteUsableBehaviour.SetInHandVFX
// ============================================================

/* WARNING: Possible PIC construction at 0x014e7638: Changing call to branch */

long Atlas_Gameplay_Usables_SatelliteUsableBehaviour__SetInHandVFX(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar5;
  undefined8 unaff_x21;
  undefined8 uVar6;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar7;
  undefined *unaff_x30;
  float extraout_s0;
  float fVar8;
  undefined *puStack_38;
  
  puVar7 = &stack0xfffffffffffffff0;
  uVar6 = 0x3d23990;
  if ((bRam0000000003eb4c19 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4c19 = 1;
  }
  *(undefined1 *)(param_1 + 100) = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
  if (iVar1 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
    if ((int)lVar2 == 0) {
      return lVar2;
    }
    lVar2 = *(long *)(param_1 + 0x50);
    if (lVar2 != 0) {
      uVar4 = 1;
      param_1 = unaff_x19;
      uVar6 = unaff_x21;
      puVar7 = unaff_x29;
      goto code_r0x0322ef1c;
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0x58);
    if (lVar2 != 0) {
      uVar4 = 0;
      unaff_x30 = (undefined *)0x14e763c;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      unaff_x20 = uVar5;
      uVar6 = 0x3d23990;
      goto code_r0x0322ef1c;
    }
  }
  unaff_x20 = uVar5;
  lVar3 = func_0x00f78af4();
  puStack_38 = &Atlas_Gameplay_Usables_SatelliteUsableBehaviour__OnUpdate;
  lVar2 = lVar3;
  if ((bRam0000000003eb4c1a & 1) == 0) {
    lVar2 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb4c1a = 1;
  }
  if (((*(char *)(lVar3 + 100) != '\0') && (0.0 <= *(float *)(lVar3 + 0x68))) &&
     (fVar8 = *(float *)(lVar3 + 0x68) - extraout_s0, *(float *)(lVar3 + 0x68) = fVar8, fVar8 < 0.0)
     ) {
    *(undefined4 *)(lVar3 + 0x68) = 0xbf800000;
    uVar5 = *(undefined8 *)(lVar3 + 0x50);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
    if ((int)lVar2 != 0) {
      lVar2 = *(long *)(lVar3 + 0x50);
      if (lVar2 == 0) {
        lVar2 = func_0x00f78af4();
        if ((bRam0000000003eb4e52 & 1) == 0) {
          func_0x00f78a20(0x3d25750,0);
          bRam0000000003eb4e52 = 1;
        }
        uVar6 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent_TypeInfo*/ uRam0000000003d25750);
        /*UnityEngine.Events.UnityEvent$$.ctor*/ func_0x03277ec8(uVar6,0);
        *(undefined8 *)(lVar2 + 0x38) = uVar6;
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
      uVar4 = 0;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      unaff_x30 = puStack_38;
code_r0x0322ef1c:
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = uVar6;
      *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x18) = param_1;
      *(undefined1 **)((long)register0x00000008 + -0x10) = puVar7;
      *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
      if (pcRam0000000003ebf4c0 == (code *)0x0) {
        pcRam0000000003ebf4c0 =
             (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = (*pcRam0000000003ebf4c0)(lVar2,uVar4);
      return lVar2;
    }
  }
  return lVar2;
}



// ============================================================
// RVA: 0x14e76a0 | Atlas.Gameplay.Usables.SatelliteUsableBehaviour.OnUpdate
// ============================================================

undefined1  [16]
Atlas_Gameplay_Usables_SatelliteUsableBehaviour__OnUpdate
          (float param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = param_2;
  if ((bRam0000000003eb4c1a & 1) == 0) {
    auVar3 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb4c1a = 1;
  }
  if (((*(char *)(param_2 + 100) != '\0') && (0.0 <= *(float *)(param_2 + 0x68))) &&
     (param_1 = *(float *)(param_2 + 0x68) - param_1, *(float *)(param_2 + 0x68) = param_1,
     param_1 < 0.0)) {
    *(undefined4 *)(param_2 + 0x68) = 0xbf800000;
    uVar2 = *(undefined8 *)(param_2 + 0x50);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    auVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar2,0,0);
    if (auVar3._0_4_ != 0) {
      lVar1 = *(long *)(param_2 + 0x50);
      if (lVar1 != 0) {
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar3 = (*pcRam0000000003ebf4c0)(lVar1,0);
        return auVar3;
      }
      auVar4._0_8_ = func_0x00f78af4();
      if ((bRam0000000003eb4e52 & 1) == 0) {
        func_0x00f78a20(0x3d25750,0);
        bRam0000000003eb4e52 = 1;
      }
      uVar2 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent_TypeInfo*/ uRam0000000003d25750);
      /*UnityEngine.Events.UnityEvent$$.ctor*/ func_0x03277ec8(uVar2,0);
      *(undefined8 *)(auVar4._0_8_ + 0x38) = uVar2;
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      auVar4._8_8_ = 0;
      return auVar4;
    }
  }
  return auVar3;
}



// ============================================================
// RVA: 0x14e7770 | Atlas.Gameplay.Usables.SatelliteUsableBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_Usables_SatelliteUsableBehaviour___ctor(ulong param_1)

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



