// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.DebugVisualiser.TransformSource

// ============================================================
// RVA: 0x154bc3c | Atlas.Gameplay.DebugVisualiser.TransformSource..ctor
// ============================================================

void Atlas_Gameplay_DebugVisualiser_TransformSource___ctor(long param_1,undefined8 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x154bc68 | Atlas.Gameplay.DebugVisualiser.TransformSource.get_name
// ============================================================

undefined1  [16] Atlas_Gameplay_DebugVisualiser_TransformSource__get_name(long param_1)

{
  long lVar1;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined8 extraout_var_02;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  undefined1 auVar4 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
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
    (*pcRam0000000003ec02b0)(lVar1);
    auVar3._4_4_ = extraout_var_01;
    auVar3._0_4_ = extraout_s0_01;
    auVar3._8_8_ = extraout_var_04;
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  lVar1 = *(long *)(lVar1 + 0x10);
  if (lVar1 != 0) {
    if (pcRam0000000003ec1948 == (code *)0x0) {
      pcRam0000000003ec1948 =
           (code *)func_0x00f789d4("UnityEngine.Transform::get_position_Injected(UnityEngine.Vector3&)"
                                   ,0);
    }
    (*pcRam0000000003ec1948)(lVar1,&stack0xffffffffffffffc0);
    return ZEXT416(0);
  }
  lVar1 = func_0x00f78af4();
  lVar1 = *(long *)(lVar1 + 0x10);
  if (lVar1 != 0) {
    if (pcRam0000000003ec1980 == (code *)0x0) {
      pcRam0000000003ec1980 =
           (code *)func_0x00f789d4("UnityEngine.Transform::get_rotation_Injected(UnityEngine.Quaternion&)"
                                   ,0);
    }
    (*pcRam0000000003ec1980)(lVar1,&stack0xffffffffffffffb0);
    return ZEXT416(0);
  }
  lVar1 = func_0x00f78af4();
  lVar1 = *(long *)(lVar1 + 0x10);
  if (lVar1 != 0) {
    if (pcRam0000000003ec1a08 == (code *)0x0) {
      pcRam0000000003ec1a08 =
           (code *)func_0x00f789d4("UnityEngine.Transform::get_lossyScale_Injected(UnityEngine.Vector3&)"
                                   ,0);
    }
    (*pcRam0000000003ec1a08)(lVar1,&stack0xffffffffffffffa0);
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
    auVar2._4_4_ = extraout_var_00;
    auVar2._0_4_ = extraout_s0_00;
    auVar2._8_8_ = extraout_var_03;
    return auVar2;
  }
  auVar4 = func_0x00f78af4();
  /*System.Object$$.ctor*/ func_0x0294d018(auVar4._0_8_,0);
  *(long *)(auVar4._0_8_ + 0x10) = auVar4._8_8_;
  auVar4._4_4_ = extraout_var;
  auVar4._0_4_ = extraout_s0;
  auVar4._8_8_ = extraout_var_02;
  return auVar4;
}



// ============================================================
// RVA: 0x154bc88 | Atlas.Gameplay.DebugVisualiser.TransformSource.get_position
// ============================================================

undefined1  [16] Atlas_Gameplay_DebugVisualiser_TransformSource__get_position(long param_1)

{
  long lVar1;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined1 auVar3 [16];
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (pcRam0000000003ec1948 == (code *)0x0) {
      pcRam0000000003ec1948 =
           (code *)func_0x00f789d4("UnityEngine.Transform::get_position_Injected(UnityEngine.Vector3&)"
                                   ,0);
    }
    (*pcRam0000000003ec1948)(lVar1,&stack0xffffffffffffffd0);
    return ZEXT416(0);
  }
  lVar1 = func_0x00f78af4();
  lVar1 = *(long *)(lVar1 + 0x10);
  if (lVar1 != 0) {
    if (pcRam0000000003ec1980 == (code *)0x0) {
      pcRam0000000003ec1980 =
           (code *)func_0x00f789d4("UnityEngine.Transform::get_rotation_Injected(UnityEngine.Quaternion&)"
                                   ,0);
    }
    (*pcRam0000000003ec1980)(lVar1,&stack0xffffffffffffffc0);
    return ZEXT416(0);
  }
  lVar1 = func_0x00f78af4();
  lVar1 = *(long *)(lVar1 + 0x10);
  if (lVar1 != 0) {
    if (pcRam0000000003ec1a08 == (code *)0x0) {
      pcRam0000000003ec1a08 =
           (code *)func_0x00f789d4("UnityEngine.Transform::get_lossyScale_Injected(UnityEngine.Vector3&)"
                                   ,0);
    }
    (*pcRam0000000003ec1a08)(lVar1,&stack0xffffffffffffffb0);
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
    auVar2._4_4_ = extraout_var_00;
    auVar2._0_4_ = extraout_s0_00;
    auVar2._8_8_ = extraout_var_02;
    return auVar2;
  }
  auVar3 = func_0x00f78af4();
  /*System.Object$$.ctor*/ func_0x0294d018(auVar3._0_8_,0);
  *(long *)(auVar3._0_8_ + 0x10) = auVar3._8_8_;
  auVar3._4_4_ = extraout_var;
  auVar3._0_4_ = extraout_s0;
  auVar3._8_8_ = extraout_var_01;
  return auVar3;
}



// ============================================================
// RVA: 0x154bca8 | Atlas.Gameplay.DebugVisualiser.TransformSource.get_rotation
// ============================================================

undefined1  [16] Atlas_Gameplay_DebugVisualiser_TransformSource__get_rotation(long param_1)

{
  long lVar1;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined1 auVar3 [16];
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (pcRam0000000003ec1980 == (code *)0x0) {
      pcRam0000000003ec1980 =
           (code *)func_0x00f789d4("UnityEngine.Transform::get_rotation_Injected(UnityEngine.Quaternion&)"
                                   ,0);
    }
    (*pcRam0000000003ec1980)(lVar1,&stack0xffffffffffffffd0);
    return ZEXT416(0);
  }
  lVar1 = func_0x00f78af4();
  lVar1 = *(long *)(lVar1 + 0x10);
  if (lVar1 != 0) {
    if (pcRam0000000003ec1a08 == (code *)0x0) {
      pcRam0000000003ec1a08 =
           (code *)func_0x00f789d4("UnityEngine.Transform::get_lossyScale_Injected(UnityEngine.Vector3&)"
                                   ,0);
    }
    (*pcRam0000000003ec1a08)(lVar1,&stack0xffffffffffffffc0);
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
    auVar2._4_4_ = extraout_var_00;
    auVar2._0_4_ = extraout_s0_00;
    auVar2._8_8_ = extraout_var_02;
    return auVar2;
  }
  auVar3 = func_0x00f78af4();
  /*System.Object$$.ctor*/ func_0x0294d018(auVar3._0_8_,0);
  *(long *)(auVar3._0_8_ + 0x10) = auVar3._8_8_;
  auVar3._4_4_ = extraout_var;
  auVar3._0_4_ = extraout_s0;
  auVar3._8_8_ = extraout_var_01;
  return auVar3;
}



// ============================================================
// RVA: 0x154bcc8 | Atlas.Gameplay.DebugVisualiser.TransformSource.get_scale
// ============================================================

undefined1  [16] Atlas_Gameplay_DebugVisualiser_TransformSource__get_scale(long param_1)

{
  long lVar1;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined1 auVar3 [16];
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
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
    auVar2._4_4_ = extraout_var_00;
    auVar2._0_4_ = extraout_s0_00;
    auVar2._8_8_ = extraout_var_02;
    return auVar2;
  }
  auVar3 = func_0x00f78af4();
  /*System.Object$$.ctor*/ func_0x0294d018(auVar3._0_8_,0);
  *(long *)(auVar3._0_8_ + 0x10) = auVar3._8_8_;
  auVar3._4_4_ = extraout_var;
  auVar3._0_4_ = extraout_s0;
  auVar3._8_8_ = extraout_var_01;
  return auVar3;
}



// ============================================================
// RVA: 0x154bce8 | Atlas.Gameplay.DebugVisualiser.TransformSource.get_gameObject
// ============================================================

void Atlas_Gameplay_DebugVisualiser_TransformSource__get_gameObject(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
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
  auVar2 = func_0x00f78af4();
  /*System.Object$$.ctor*/ func_0x0294d018(auVar2._0_8_,0);
  *(long *)(auVar2._0_8_ + 0x10) = auVar2._8_8_;
  return;
}



