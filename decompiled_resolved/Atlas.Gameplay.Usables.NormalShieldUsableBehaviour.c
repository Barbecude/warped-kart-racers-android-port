// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Usables.NormalShieldUsableBehaviour

// ============================================================
// RVA: 0x14b10f0 | Atlas.Gameplay.Usables.NormalShieldUsableBehaviour.ResetAndStart
// ============================================================

void Atlas_Gameplay_Usables_NormalShieldUsableBehaviour__ResetAndStart(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 extraout_w1;
  undefined1 extraout_w1_00;
  long lVar5;
  undefined4 uVar6;
  undefined4 extraout_s0;
  
  if ((bRam0000000003eb4a9a & 1) == 0) {
    func_0x00f78a20(0x3d238a0);
    bRam0000000003eb4a9a = 1;
  }
  lVar5 = *(long *)(param_1 + 0x60);
  if (((*(ushort *)(/*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour_TypeInfo*/ lRam0000000003d238a0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour_TypeInfo*/ lRam0000000003d238a0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar5 != 0) {
    /*UnityEngine.Animator$$ResetTrigger*/ func_0x0320d96c(lVar5,**(undefined4 **)(/*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour_TypeInfo*/ lRam0000000003d238a0 + 0xb8),0);
    if (*(long *)(param_1 + 0x60) != 0) {
      /*UnityEngine.Animator$$ResetTrigger*/ func_0x0320d96c(*(long *)(param_1 + 0x60),
                      *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour_TypeInfo*/ lRam0000000003d238a0 + 0xb8) + 4),0);
      if (*(long *)(param_1 + 0x60) != 0) {
        /*UnityEngine.Animator$$ResetTrigger*/ func_0x0320d96c(*(long *)(param_1 + 0x60),
                        *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour_TypeInfo*/ lRam0000000003d238a0 + 0xb8) + 8),0);
        if (*(long *)(param_1 + 0x60) != 0) {
          /*UnityEngine.Animator$$Play*/ func_0x03210958(0,*(long *)(param_1 + 0x60),
                          *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour_TypeInfo*/ lRam0000000003d238a0 + 0xb8) + 0x10),0,0);
          *(undefined1 *)(param_1 + 0x68) = 0;
          *(undefined4 *)(param_1 + 0x78) = 0;
          *(undefined1 *)(param_1 + 0x7c) = 0;
          return;
        }
      }
    }
  }
  uVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4a96 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4a96 = 1;
  }
  uVar3 = Atlas_Gameplay_Usables_NormalShieldUsable__get_NormalShieldUsableBehaviour(uVar2);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
  if (iVar1 != 0) {
    lVar5 = Atlas_Gameplay_Usables_NormalShieldUsable__get_NormalShieldUsableBehaviour(uVar2);
    lVar4 = Atlas_Gameplay_Usables_NormalShieldUsable__get_ShieldUsableDefinition(uVar2);
    if ((lVar4 == 0) || (lVar5 == 0)) {
      lVar5 = func_0x00f78af4();
      *(undefined1 *)(lVar5 + 0x7c) = extraout_w1_00;
      *(undefined4 *)(lVar5 + 0x80) = extraout_s0;
      *(undefined4 *)(lVar5 + 0x78) = extraout_s0;
      return;
    }
    uVar6 = *(undefined4 *)(lVar4 + 0x80);
    *(undefined1 *)(lVar5 + 0x7c) = extraout_w1;
    *(undefined4 *)(lVar5 + 0x80) = uVar6;
    *(undefined4 *)(lVar5 + 0x78) = uVar6;
  }
  return;
}



// ============================================================
// RVA: 0x14b1298 | Atlas.Gameplay.Usables.NormalShieldUsableBehaviour.TriggerScale
// ============================================================

void Atlas_Gameplay_Usables_NormalShieldUsableBehaviour__TriggerScale
               (undefined4 param_1,long param_2,undefined1 param_3)

{
  *(undefined1 *)(param_2 + 0x7c) = param_3;
  *(undefined4 *)(param_2 + 0x80) = param_1;
  *(undefined4 *)(param_2 + 0x78) = param_1;
  return;
}



// ============================================================
// RVA: 0x14b19d8 | Atlas.Gameplay.Usables.NormalShieldUsableBehaviour.CheckAnimationFinished
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14b1cf0 | Atlas.Gameplay.Usables.NormalShieldUsableBehaviour.PlayPowerShieldOff
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14b1d7c | Atlas.Gameplay.Usables.NormalShieldUsableBehaviour.TriggerDestroy
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14b1e74 | Atlas.Gameplay.Usables.NormalShieldUsableBehaviour.TriggerFade
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14b1f50 | Atlas.Gameplay.Usables.NormalShieldUsableBehaviour.get_InHandVFX
// ============================================================

undefined8 Atlas_Gameplay_Usables_NormalShieldUsableBehaviour__get_InHandVFX(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x14b1f58 | Atlas.Gameplay.Usables.NormalShieldUsableBehaviour.get_InUseVFX
// ============================================================

undefined8 Atlas_Gameplay_Usables_NormalShieldUsableBehaviour__get_InUseVFX(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x14b1f60 | Atlas.Gameplay.Usables.NormalShieldUsableBehaviour.Awake
// ============================================================

long Atlas_Gameplay_Usables_NormalShieldUsableBehaviour__Awake
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 extraout_s0;
  float fVar5;
  float fVar6;
  
  lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_4,0);
  if (lVar2 != 0) {
    lVar2 = /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(lVar2,0);
    *(undefined4 *)(param_4 + 0x6c) = extraout_s0;
    *(undefined4 *)(param_4 + 0x70) = param_2;
    *(undefined4 *)(param_4 + 0x74) = param_3;
    *(undefined4 *)(param_4 + 0x78) = 0;
    *(undefined4 *)(param_4 + 0x80) = 0x3e4ccccd;
    *(undefined1 *)(param_4 + 0x7c) = 0;
    return lVar2;
  }
  lVar2 = func_0x00f78af4();
  fVar6 = *(float *)(lVar2 + 0x78);
  if (0.0 < fVar6) {
    fVar5 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
    *(float *)(lVar2 + 0x78) = fVar6 - fVar5;
    cVar1 = *(char *)(lVar2 + 0x7c);
    lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar2,0);
    if (cVar1 == '\0') {
      /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      /*UnityEngine.Mathf$$InverseLerp*/ func_0x0323d5e4(*(undefined4 *)(lVar2 + 0x80),0,*(undefined4 *)(lVar2 + 0x78),0);
      /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(0);
      /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(0);
    }
    else {
      /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      /*UnityEngine.Mathf$$InverseLerp*/ func_0x0323d5e4(*(undefined4 *)(lVar2 + 0x80),0,*(undefined4 *)(lVar2 + 0x78),0);
      /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(0);
      /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(0);
    }
    if (lVar3 != 0) {
      if (pcRam0000000003ec19a8 == (code *)0x0) {
        pcRam0000000003ec19a8 =
             (code *)func_0x00f789d4("UnityEngine.Transform::set_localScale_Injected(UnityEngine.Vector3&)"
                                     ,0);
      }
      lVar2 = (*pcRam0000000003ec19a8)(lVar3,&stack0xffffffffffffffb0);
      return lVar2;
    }
    lVar2 = func_0x00f78af4();
    *(undefined4 *)(lVar2 + 0x80) = 0x3e4ccccd;
    if ((bRam0000000003eb4e52 & 1) == 0) {
      func_0x00f78a20(0x3d25750,0);
      bRam0000000003eb4e52 = 1;
    }
    uVar4 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent_TypeInfo*/ uRam0000000003d25750);
    /*UnityEngine.Events.UnityEvent$$.ctor*/ func_0x03277ec8(uVar4,0);
    *(undefined8 *)(lVar2 + 0x38) = uVar4;
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
  return lVar2;
}



// ============================================================
// RVA: 0x14b1fb0 | Atlas.Gameplay.Usables.NormalShieldUsableBehaviour.Update
// ============================================================

long Atlas_Gameplay_Usables_NormalShieldUsableBehaviour__Update(long param_1)

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
// RVA: 0x14b2114 | Atlas.Gameplay.Usables.NormalShieldUsableBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_Usables_NormalShieldUsableBehaviour___ctor(ulong param_1)

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
// RVA: 0x14b2128 | Atlas.Gameplay.Usables.NormalShieldUsableBehaviour..cctor
// ============================================================

void Atlas_Gameplay_Usables_NormalShieldUsableBehaviour___cctor(void)

{
  undefined4 uVar1;
  
  if ((bRam0000000003eb4a9f & 1) == 0) {
    func_0x00f78a20(0x3d238a0);
    func_0x00f78a20(0x3d6cbe8);
    func_0x00f78a20(0x3d6cbe0);
    func_0x00f78a20(0x3d68f78);
    func_0x00f78a20(0x3d68f80);
    func_0x00f78a20(0x3d728a8);
    func_0x00f78a20(0x3d68f88);
    bRam0000000003eb4a9f = 1;
  }
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Fading')*/ uRam0000000003d6cbe8,0);
  **(undefined4 **)(/*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour_TypeInfo*/ lRam0000000003d238a0 + 0xb8) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('FadeToOn')*/ uRam0000000003d6cbe0,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour_TypeInfo*/ lRam0000000003d238a0 + 0xb8) + 4) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('ShieldDestroy')*/ uRam0000000003d728a8,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour_TypeInfo*/ lRam0000000003d238a0 + 0xb8) + 8) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Anim_PowerShieldDestroyed')*/ uRam0000000003d68f78,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour_TypeInfo*/ lRam0000000003d238a0 + 0xb8) + 0xc) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Anim_PowerShield_On')*/ uRam0000000003d68f88,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour_TypeInfo*/ lRam0000000003d238a0 + 0xb8) + 0x10) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Anim_PowerShieldOff')*/ uRam0000000003d68f80,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour_TypeInfo*/ lRam0000000003d238a0 + 0xb8) + 0x14) = uVar1;
  return;
}



