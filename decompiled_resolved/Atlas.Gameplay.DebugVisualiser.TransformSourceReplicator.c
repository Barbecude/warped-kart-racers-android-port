// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.DebugVisualiser.TransformSourceReplicator

// ============================================================
// RVA: 0x154bd08 | Atlas.Gameplay.DebugVisualiser.TransformSourceReplicator..ctor
// ============================================================

void Atlas_Gameplay_DebugVisualiser_TransformSourceReplicator___ctor
               (long param_1,undefined8 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x154bd34 | Atlas.Gameplay.DebugVisualiser.TransformSourceReplicator.get_name
// ============================================================

/* WARNING: Possible PIC construction at 0x0167f09c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0167f188: Changing call to branch */

long Atlas_Gameplay_DebugVisualiser_TransformSourceReplicator__get_name(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  puVar5 = &stack0xfffffffffffffff0;
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    if ((bRam0000000003ec021e & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ec021e = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (pcRam0000000003ec02b0 == (code *)0x0) {
      pcRam0000000003ec02b0 =
           (code *)func_0x00f789d4("UnityEngine.Object::GetName(UnityEngine.Object)");
    }
                    /* WARNING: Could not recover jumptable at 0x0324468c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*pcRam0000000003ec02b0)(lVar3);
    return lVar3;
  }
  lVar3 = func_0x00f78af4();
  puVar4 = &stack0xffffffffffffffe0;
  lVar3 = *(long *)(lVar3 + 0x10);
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x44) == '\0') {
      puVar2 = &stack0xfffffffffffffff0;
      puVar6 = &Atlas_Gameplay_DebugVisualiser_TransformSourceReplicator__get_position;
      if (*(long *)(lVar3 + 0x20) != 0) {
        return lVar3;
      }
    }
    else {
      puVar2 = &stack0xffffffffffffffb0;
      puVar5 = &stack0xffffffffffffffe0;
      if (*(long *)(lVar3 + 0x20) != 0) {
        lVar3 = /*Core.Services.ReplicatorProviderEsq$$GetOwnerState*/ func_0x0167f0ac(*(long *)(lVar3 + 0x20),&stack0xffffffffffffffd0,&puStack_40,
                                &stack0xffffffffffffffb0);
        return lVar3;
      }
      puVar6 = &UNK_0167f0a0;
    }
    lVar3 = 0;
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar5;
    *(undefined **)(puVar2 + -8) = puVar6;
    if ((bRam0000000003ec1ac5 & 1) == 0) {
      lVar3 = func_0x00f78a20(0x3d25978,0);
      bRam0000000003ec1ac5 = 1;
    }
    return lVar3;
  }
  lVar3 = func_0x00f78af4();
  lVar3 = *(long *)(lVar3 + 0x10);
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x44) == '\0') {
      puVar1 = &stack0xffffffffffffffe0;
      puVar6 = &Atlas_Gameplay_DebugVisualiser_TransformSourceReplicator__get_rotation;
      if (*(long *)(lVar3 + 0x20) != 0) {
        return lVar3;
      }
    }
    else {
      puVar1 = &stack0xffffffffffffffb0;
      puVar4 = &stack0xffffffffffffffd0;
      if (*(long *)(lVar3 + 0x20) != 0) {
        lVar3 = /*Core.Services.ReplicatorProviderEsq$$GetOwnerState*/ func_0x0167f0ac(*(long *)(lVar3 + 0x20),&puStack_40,&puStack_40,
                                &stack0xffffffffffffffb0);
        return lVar3;
      }
      puVar6 = &UNK_0167f18c;
    }
    lVar3 = 0;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = puVar4;
    *(undefined **)(puVar1 + -8) = puVar6;
    if ((bRam0000000003ec0640 & 1) == 0) {
      lVar3 = func_0x00f78a20(0x3d23f70,0);
      bRam0000000003ec0640 = 1;
    }
    return lVar3;
  }
  lVar3 = func_0x00f78af4();
  puStack_38 = &Atlas_Gameplay_DebugVisualiser_TransformSourceReplicator__get_scale;
  puStack_40 = &stack0xffffffffffffffd0;
  if ((*(long *)(lVar3 + 0x10) != 0) &&
     (puStack_40 = &stack0xffffffffffffffd0, lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar3 + 0x10),0),
     lVar3 != 0)) {
    if (pcRam0000000003ec1a08 == (code *)0x0) {
      pcRam0000000003ec1a08 =
           (code *)func_0x00f789d4("UnityEngine.Transform::get_lossyScale_Injected(UnityEngine.Vector3&)"
                                   ,0);
    }
    lVar3 = (*pcRam0000000003ec1a08)(lVar3,&stack0xffffffffffffffa0);
    return lVar3;
  }
  lVar3 = func_0x00f78af4();
  lVar3 = *(long *)(lVar3 + 0x10);
  if (lVar3 == 0) {
    lVar3 = func_0x00f78af4();
    return lVar3;
  }
  if (pcRam0000000003ebf190 == (code *)0x0) {
    pcRam0000000003ebf190 = (code *)func_0x00f789d4("UnityEngine.Component::get_gameObject()");
  }
                    /* WARNING: Could not recover jumptable at 0x03227a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar3 = (*pcRam0000000003ebf190)(lVar3);
  return lVar3;
}



// ============================================================
// RVA: 0x154bd54 | Atlas.Gameplay.DebugVisualiser.TransformSourceReplicator.get_position
// ============================================================

/* WARNING: Possible PIC construction at 0x0167f09c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0167f188: Changing call to branch */

long Atlas_Gameplay_DebugVisualiser_TransformSourceReplicator__get_position(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined1 **ppuVar3;
  undefined *unaff_x30;
  undefined *puVar4;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  ppuVar3 = (undefined1 **)&stack0xfffffffffffffff0;
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x44) == '\0') {
      if (*(long *)(lVar2 + 0x20) != 0) {
        return lVar2;
      }
    }
    else {
      unaff_x29 = &stack0xfffffffffffffff0;
      if (*(long *)(lVar2 + 0x20) != 0) {
        puStack_18 = (undefined *)((ulong)puStack_18 & 0xffffffff00000000);
        puStack_20 = (undefined1 *)0x0;
        lVar2 = /*Core.Services.ReplicatorProviderEsq$$GetOwnerState*/ func_0x0167f0ac(*(long *)(lVar2 + 0x20),&puStack_20,&puStack_30,
                                &stack0xffffffffffffffc0);
        return lVar2;
      }
      unaff_x30 = &UNK_0167f0a0;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    }
    lVar2 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if ((bRam0000000003ec1ac5 & 1) == 0) {
      lVar2 = func_0x00f78a20(0x3d25978,0);
      bRam0000000003ec1ac5 = 1;
    }
    return lVar2;
  }
  lVar2 = func_0x00f78af4();
  puStack_18 = &Atlas_Gameplay_DebugVisualiser_TransformSourceReplicator__get_rotation;
  lVar2 = *(long *)(lVar2 + 0x10);
  if (lVar2 == 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    lVar2 = func_0x00f78af4();
    puStack_28 = &Atlas_Gameplay_DebugVisualiser_TransformSourceReplicator__get_scale;
    puStack_30 = (undefined1 *)&puStack_20;
    if ((*(long *)(lVar2 + 0x10) != 0) &&
       (puStack_30 = (undefined1 *)&puStack_20, lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar2 + 0x10),0),
       lVar2 != 0)) {
      if (pcRam0000000003ec1a08 == (code *)0x0) {
        pcRam0000000003ec1a08 =
             (code *)func_0x00f789d4("UnityEngine.Transform::get_lossyScale_Injected(UnityEngine.Vector3&)"
                                     ,0);
      }
      lVar2 = (*pcRam0000000003ec1a08)(lVar2,&stack0xffffffffffffffb0);
      return lVar2;
    }
    lVar2 = func_0x00f78af4();
    lVar2 = *(long *)(lVar2 + 0x10);
    if (lVar2 == 0) {
      lVar2 = func_0x00f78af4();
      return lVar2;
    }
    if (pcRam0000000003ebf190 == (code *)0x0) {
      pcRam0000000003ebf190 = (code *)func_0x00f789d4("UnityEngine.Component::get_gameObject()");
    }
                    /* WARNING: Could not recover jumptable at 0x03227a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (*pcRam0000000003ebf190)(lVar2);
    return lVar2;
  }
  if (*(char *)(lVar2 + 0x44) == '\0') {
    puVar1 = &stack0xfffffffffffffff0;
    puVar4 = &Atlas_Gameplay_DebugVisualiser_TransformSourceReplicator__get_rotation;
    if (*(long *)(lVar2 + 0x20) != 0) {
      return lVar2;
    }
  }
  else {
    puVar1 = &stack0xffffffffffffffc0;
    puStack_18 = &Atlas_Gameplay_DebugVisualiser_TransformSourceReplicator__get_rotation;
    ppuVar3 = &puStack_20;
    if (*(long *)(lVar2 + 0x20) != 0) {
      puStack_20 = &stack0xfffffffffffffff0;
      lVar2 = /*Core.Services.ReplicatorProviderEsq$$GetOwnerState*/ func_0x0167f0ac(*(long *)(lVar2 + 0x20),&puStack_30,&puStack_30,
                              &stack0xffffffffffffffc0);
      return lVar2;
    }
    puVar4 = &UNK_0167f18c;
  }
  lVar2 = 0;
  puStack_18 = &Atlas_Gameplay_DebugVisualiser_TransformSourceReplicator__get_rotation;
  *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
  puStack_20 = &stack0xfffffffffffffff0;
  *(undefined1 ***)(puVar1 + -0x10) = ppuVar3;
  *(undefined **)(puVar1 + -8) = puVar4;
  if ((bRam0000000003ec0640 & 1) == 0) {
    lVar2 = func_0x00f78a20(0x3d23f70,0);
    bRam0000000003ec0640 = 1;
  }
  return lVar2;
}



// ============================================================
// RVA: 0x154bd88 | Atlas.Gameplay.DebugVisualiser.TransformSourceReplicator.get_rotation
// ============================================================

/* WARNING: Possible PIC construction at 0x0167f188: Changing call to branch */

long Atlas_Gameplay_DebugVisualiser_TransformSourceReplicator__get_rotation(long param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x44) == '\0') {
      if (*(long *)(lVar1 + 0x20) != 0) {
        return lVar1;
      }
    }
    else {
      unaff_x29 = &stack0xfffffffffffffff0;
      if (*(long *)(lVar1 + 0x20) != 0) {
        lVar1 = /*Core.Services.ReplicatorProviderEsq$$GetOwnerState*/ func_0x0167f0ac(*(long *)(lVar1 + 0x20),&puStack_20,&puStack_20,
                                &stack0xffffffffffffffd0);
        return lVar1;
      }
      unaff_x30 = &UNK_0167f18c;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    }
    lVar1 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if ((bRam0000000003ec0640 & 1) == 0) {
      lVar1 = func_0x00f78a20(0x3d23f70,0);
      bRam0000000003ec0640 = 1;
    }
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  puStack_18 = &Atlas_Gameplay_DebugVisualiser_TransformSourceReplicator__get_scale;
  puStack_20 = &stack0xfffffffffffffff0;
  if ((*(long *)(lVar1 + 0x10) != 0) &&
     (puStack_20 = &stack0xfffffffffffffff0, lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar1 + 0x10),0),
     lVar1 != 0)) {
    if (pcRam0000000003ec1a08 == (code *)0x0) {
      pcRam0000000003ec1a08 =
           (code *)func_0x00f789d4("UnityEngine.Transform::get_lossyScale_Injected(UnityEngine.Vector3&)"
                                   ,0);
    }
    lVar1 = (*pcRam0000000003ec1a08)(lVar1,&stack0xffffffffffffffc0);
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  lVar1 = *(long *)(lVar1 + 0x10);
  if (lVar1 == 0) {
    lVar1 = func_0x00f78af4();
    return lVar1;
  }
  if (pcRam0000000003ebf190 == (code *)0x0) {
    pcRam0000000003ebf190 = (code *)func_0x00f789d4("UnityEngine.Component::get_gameObject()");
  }
                    /* WARNING: Could not recover jumptable at 0x03227a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*pcRam0000000003ebf190)(lVar1);
  return lVar1;
}



// ============================================================
// RVA: 0x154bdbc | Atlas.Gameplay.DebugVisualiser.TransformSourceReplicator.get_scale
// ============================================================

undefined1  [16] Atlas_Gameplay_DebugVisualiser_TransformSourceReplicator__get_scale(long param_1)

{
  long lVar1;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  undefined1 auVar2 [16];
  undefined8 extraout_var_02;
  undefined1 auVar3 [16];
  
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_1 + 0x10),0), lVar1 != 0)) {
    if (pcRam0000000003ec1a08 == (code *)0x0) {
      pcRam0000000003ec1a08 =
           (code *)func_0x00f789d4("UnityEngine.Transform::get_lossyScale_Injected(UnityEngine.Vector3&)"
                                   ,0);
    }
    (*pcRam0000000003ec1a08)(lVar1,&stack0xffffffffffffffd0);
    return ZEXT416(0);
  }
  lVar1 = func_0x00f78af4();
  lVar1 = *(long *)(lVar1 + 0x10);
  if (lVar1 != 0) {
    if (pcRam0000000003ebf190 == (code *)0x0) {
      pcRam0000000003ebf190 = (code *)func_0x00f789d4("UnityEngine.Component::get_gameObject()");
    }
                    /* WARNING: Could not recover jumptable at 0x03227a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf190)(lVar1);
    auVar3._4_4_ = extraout_var_00;
    auVar3._0_4_ = extraout_s0_00;
    auVar3._8_8_ = extraout_var_02;
    return auVar3;
  }
  func_0x00f78af4();
  auVar2._4_4_ = extraout_var;
  auVar2._0_4_ = extraout_s0;
  auVar2._8_8_ = extraout_var_01;
  return auVar2;
}



// ============================================================
// RVA: 0x154bde8 | Atlas.Gameplay.DebugVisualiser.TransformSourceReplicator.get_gameObject
// ============================================================

void Atlas_Gameplay_DebugVisualiser_TransformSourceReplicator__get_gameObject(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (pcRam0000000003ebf190 == (code *)0x0) {
      pcRam0000000003ebf190 = (code *)func_0x00f789d4("UnityEngine.Component::get_gameObject()");
    }
                    /* WARNING: Could not recover jumptable at 0x03227a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf190)(lVar1);
    return;
  }
  func_0x00f78af4();
  return;
}



